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
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtualFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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

// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.EventHandler`1<Newtonsoft.Json.Serialization.ErrorEventArgs>
struct EventHandler_1_t69462DFC2F2C8D7576BEE9D1F5BB6C2E55B2C380;
// System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XAttribute>
struct IEnumerable_1_t148EAB2068C5F48E82A9E0C643BB154B8BB34257;
// System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XNode>
struct IEnumerable_1_t3CF62242A258E986307D7CCF84A4C03FB96055D8;
// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Bson.BsonProperty>
struct IEnumerator_1_tE241CB87CC95A73A720D51ACEC78F0245F877C86;
// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Bson.BsonToken>
struct IEnumerator_1_t02CD314CF6671EA4E8F21A8C41D664B043C07DD3;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342;
// System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonProperty>
struct List_1_tDBB5CD4D0EC3C783FE3A623450331580CB409B5E;
// System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonToken>
struct List_1_t39498331735ADCEED3C66A5E7F951FCC1C4EEEBE;
// System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode>
struct List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E;
// System.Collections.Generic.List`1<Newtonsoft.Json.JsonPosition>
struct List_1_t53E7DEFF45EC8B1D5AE04D4FC6284E617F0D79CB;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonReader/ContainerContext>
struct List_1_t944CCF3A156F251D4FD98B25EC08251DB21ADBC9;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76;
// System.Xml.Linq.XHashtable`1<System.WeakReference>
struct XHashtable_1_t2CF715088068F7F6D5D06152C3D4A892E5B07E46;
// System.Xml.Linq.XHashtable`1<System.Xml.Linq.XName>
struct XHashtable_1_t2D08921459BE574EC1B2D723734AB79BE4CBE4B5;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7;
// Newtonsoft.Json.JsonWriter/State[][]
struct StateU5BU5DU5BU5D_tA12046738DA5F6289ABA74ED1C079ED07EE202ED;
// Newtonsoft.Json.Bson.BsonProperty[]
struct BsonPropertyU5BU5D_tE77AACFC9C5CEE1F990C258B77C2C1BBBBC583E5;
// Newtonsoft.Json.Bson.BsonToken[]
struct BsonTokenU5BU5D_tE5ED6E776E77B95220ED90B899FC35F33C39BD07;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// Newtonsoft.Json.Converters.IXmlNode[]
struct IXmlNodeU5BU5D_tC17675D27C440349A4AC7A7A4967E9E2245B5CD8;
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
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// Newtonsoft.Json.Bson.BsonReader/ContainerContext[]
struct ContainerContextU5BU5D_tE42AA5D2C4E0FD7AC139F4E619241748C176783E;
// System.Xml.NameTable/Entry[]
struct EntryU5BU5D_tE4AE7874F9098D7C9B34C34630C2F2698981939A;
// System.Xml.XmlNamespaceManager/NamespaceDeclaration[]
struct NamespaceDeclarationU5BU5D_t4DF48D3A2EB82C491A60E8748DE4BAFAA95A0F60;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// System.IO.BinaryReader
struct BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158;
// System.IO.BinaryWriter
struct BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// Newtonsoft.Json.Bson.BsonArray
struct BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1;
// Newtonsoft.Json.Bson.BsonBinary
struct BsonBinary_t10CD8515CA416C5958E3FA3290910E8FD2DFB8A8;
// Newtonsoft.Json.Bson.BsonBinaryWriter
struct BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09;
// Newtonsoft.Json.Bson.BsonBoolean
struct BsonBoolean_tCDA0063DFA3B0C789C19533BFA53A6E7CCD644BD;
// Newtonsoft.Json.Bson.BsonEmpty
struct BsonEmpty_t9F20528B697AB47F6FBA41E6BA4246DBD536BAB8;
// Newtonsoft.Json.Bson.BsonObject
struct BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB;
// Newtonsoft.Json.Bson.BsonObjectId
struct BsonObjectId_tD1799B243CF7FF4983762AFD5AA7EED8287AF4C2;
// Newtonsoft.Json.Bson.BsonProperty
struct BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE;
// Newtonsoft.Json.Bson.BsonReader
struct BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423;
// Newtonsoft.Json.Bson.BsonRegex
struct BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1;
// Newtonsoft.Json.Bson.BsonString
struct BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE;
// Newtonsoft.Json.Bson.BsonToken
struct BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4;
// Newtonsoft.Json.Bson.BsonValue
struct BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660;
// Newtonsoft.Json.Bson.BsonWriter
struct BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.Text.Decoder
struct Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.Xml.DomNameTable
struct DomNameTable_tE4318EC10C55A46FD00324E740BFA7D9CEE2AF45;
// System.Xml.EmptyEnumerator
struct EmptyEnumerator_t84EC9187C8460EE98E675ED9258AE4DF2A6776DA;
// System.Text.Encoder
struct Encoder_tAF9067231A76315584BDF4CD27990E2F485A78FA;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.IO.EndOfStreamException
struct EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// System.Exception
struct Exception_t;
// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
// Newtonsoft.Json.Serialization.IContractResolver
struct IContractResolver_t7EC502F5FCA86DD95579A92A1E0116BE32D6340B;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.Collections.IEqualityComparer
struct IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// Newtonsoft.Json.Serialization.IReferenceResolver
struct IReferenceResolver_t29B0AEAFB8A7BF2EE446320DE590343B21EA69A3;
// Newtonsoft.Json.Serialization.ISerializationBinder
struct ISerializationBinder_t3C8B850335FB40001C9201981439AE77B430031F;
// Newtonsoft.Json.Serialization.ITraceWriter
struct ITraceWriter_t44C99CB7D5AB59A077F569914E56DAD66B5A41EF;
// Newtonsoft.Json.Converters.IXmlDocument
struct IXmlDocument_tEF9A1A455D7969D9E4EE72346C887F3648F81726;
// Newtonsoft.Json.Converters.IXmlElement
struct IXmlElement_t48C6FEA57F31ACF88F9D9AB22BDDD0523D1D4780;
// Newtonsoft.Json.Converters.IXmlNode
struct IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B;
// System.Xml.Schema.IXmlSchemaInfo
struct IXmlSchemaInfo_tF7DB6310A471259B33C4081B30E73925164204DB;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// Newtonsoft.Json.JsonConverter
struct JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16;
// Newtonsoft.Json.JsonConverterCollection
struct JsonConverterCollection_t6EEC84565C08B14107276B5023CE9E978DFCDF89;
// Newtonsoft.Json.JsonReader
struct JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765;
// Newtonsoft.Json.JsonReaderException
struct JsonReaderException_t44F3F6F2980FC806231B19A65F37D1E034B218DA;
// Newtonsoft.Json.JsonSerializationException
struct JsonSerializationException_t00F36890DFAC04F2FDE779151340B9C5563612EC;
// Newtonsoft.Json.JsonSerializer
struct JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59;
// Newtonsoft.Json.JsonWriter
struct JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3;
// Newtonsoft.Json.JsonWriterException
struct JsonWriterException_tF13EC07A2159B2C5951971D4AED5A195DEBE8AAA;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Xml.NameTable
struct NameTable_t0164DCE377A0A6E712CF54BE4CE5DA58A5537B46;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Xml.Schema.SchemaInfo
struct SchemaInfo_t42F4B1099B63BCF2D3BBF7F35A79AF6B90B0927E;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// System.Type
struct Type_t;
// System.Text.UTF8Encoding
struct UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// System.UriParser
struct UriParser_t920B0868286118827C08B08A15A9456AF6C19D81;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.WeakReference
struct WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E;
// System.Xml.Linq.XAttribute
struct XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF;
// Newtonsoft.Json.Converters.XAttributeWrapper
struct XAttributeWrapper_t1FC7334561AD249FF39775D06CEF7BCECEBD9547;
// System.Xml.Linq.XCData
struct XCData_tCE86E0709C47284A8D0A6CBE09CDFD6B8609BF3B;
// System.Xml.Linq.XComment
struct XComment_t2FD9205AC70AF739D97E5CE8B1CC29459191F43D;
// Newtonsoft.Json.Converters.XCommentWrapper
struct XCommentWrapper_t1BFE83CA1648036FAD8B8C6E79806055D34F2782;
// System.Xml.Linq.XContainer
struct XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF;
// Newtonsoft.Json.Converters.XContainerWrapper
struct XContainerWrapper_t7B103CDF831C64B07E4BABE6307FB7D605328AF9;
// System.Xml.Linq.XDeclaration
struct XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990;
// Newtonsoft.Json.Converters.XDeclarationWrapper
struct XDeclarationWrapper_t30D8572D5BECE3E49B4F5BF8C17EE1A37A89AAE9;
// System.Xml.Linq.XDocument
struct XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1;
// System.Xml.Linq.XDocumentType
struct XDocumentType_t195D491B418C3696FBCAEE34E53D734E0B53A817;
// Newtonsoft.Json.Converters.XDocumentTypeWrapper
struct XDocumentTypeWrapper_tE70B54A200381660327029F12CDB902FF2EF26DA;
// Newtonsoft.Json.Converters.XDocumentWrapper
struct XDocumentWrapper_t3C3117E449826BEB20F7BFB77214046EE4D86AD6;
// System.Xml.Linq.XElement
struct XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909;
// Newtonsoft.Json.Converters.XElementWrapper
struct XElementWrapper_t15082EFC96DF60AC9ACF10A1D60C1E04207FCA61;
// System.Xml.Linq.XName
struct XName_tAF6D9533A7D11AC27118F656985AC325C2A50E5C;
// System.Xml.Linq.XNamespace
struct XNamespace_t86B6F8515F5E20D387B83EBDE0890C4559A4012C;
// System.Xml.Linq.XNode
struct XNode_t185C922661054AAD14F49676DD6F3CB10D652A30;
// System.Xml.Linq.XObject
struct XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29;
// Newtonsoft.Json.Converters.XObjectWrapper
struct XObjectWrapper_t1932FA32F64A100673DEC2063AF00052A6CE1B16;
// System.Xml.Linq.XProcessingInstruction
struct XProcessingInstruction_t920C9022DAD590F61972E400D46FC1C443265795;
// Newtonsoft.Json.Converters.XProcessingInstructionWrapper
struct XProcessingInstructionWrapper_t73B2F6F52C84FBAB7AC112F1262C085959ED6D80;
// System.Xml.Linq.XText
struct XText_t006159E7F735736D41BBC0738FFB066A14B31AE2;
// Newtonsoft.Json.Converters.XTextWrapper
struct XTextWrapper_t54304AAC4CEF7C32A60F7D6519B28810027EC797;
// System.Xml.XmlAttribute
struct XmlAttribute_t4B6CC461196FBF5CC9F777E74CC82C98E0CA9D18;
// System.Xml.XmlAttributeCollection
struct XmlAttributeCollection_tB0BA25B3C7E8D4BCF487C7107A9019632A7D85C0;
// System.Xml.XmlDeclaration
struct XmlDeclaration_tA04662FA58C306A24C864BDE73D1B410858E7A79;
// Newtonsoft.Json.Converters.XmlDeclarationWrapper
struct XmlDeclarationWrapper_t9167E036A5BE1475233675EC025E96DCA3CC1945;
// System.Xml.XmlDocument
struct XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B;
// System.Xml.XmlDocumentType
struct XmlDocumentType_tFD7379E45412FC2EBD65280ED3DE7A1C941A8D9E;
// Newtonsoft.Json.Converters.XmlDocumentTypeWrapper
struct XmlDocumentTypeWrapper_t8E470E157344CAE69E9551F6D0826C0E4038C4ED;
// Newtonsoft.Json.Converters.XmlDocumentWrapper
struct XmlDocumentWrapper_t2C596BBEC57603F9B8DA72446CAABDC3DE251624;
// System.Xml.XmlElement
struct XmlElement_t9A08B533E9A6B3548A1DE35476186F7ECCDF6FF1;
// Newtonsoft.Json.Converters.XmlElementWrapper
struct XmlElementWrapper_tFFCFF4F15C008DF0469426DFE31B6A304DDEEC20;
// System.Xml.XmlImplementation
struct XmlImplementation_t4B3F467B76BD95C919C40424196C55B38EEC0F4D;
// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t640BF5D3FDAF0606665C3BAE565988A5014F1B9C;
// System.Xml.XmlName
struct XmlName_t0704430D24D202146901D342E34D878246E14F33;
// System.Xml.XmlNameTable
struct XmlNameTable_tBDBAACFF3DB40A8E6AF3BDC11F0FF166CF11ABB8;
// System.Xml.XmlNamedNodeMap
struct XmlNamedNodeMap_t13203D1B3861C62568AFFA1D644C04ABCBFC130C;
// System.Xml.XmlNamespaceManager
struct XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F;
// System.Xml.XmlNode
struct XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF;
// System.Xml.XmlNodeChangedEventHandler
struct XmlNodeChangedEventHandler_t907F6E9CB8DE238635028EC468AD41CAB0BA269B;
// Newtonsoft.Json.Converters.XmlNodeConverter
struct XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF;
// Newtonsoft.Json.Converters.XmlNodeWrapper
struct XmlNodeWrapper_tE399A7CC58A6C5CE54C6EFE0D075A7B88C71B991;
// System.Xml.XmlResolver
struct XmlResolver_tE25A33DFCB87A939D11BC8543970F6857AEC3DCF;
// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_t048A12CE7D00EF330EF32A388B69A240899F88D1;
// Newtonsoft.Json.Bson.BsonReader/ContainerContext
struct ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;
// System.Text.UTF8Encoding/UTF8EncodingSealed
struct UTF8EncodingSealed_tF97A34F40CABE9CE1C168967D60396F51C43DD36;
// System.Uri/UriInfo
struct UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BsonBinary_t10CD8515CA416C5958E3FA3290910E8FD2DFB8A8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BsonBoolean_tCDA0063DFA3B0C789C19533BFA53A6E7CCD644BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BsonEmpty_t9F20528B697AB47F6FBA41E6BA4246DBD536BAB8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BsonReaderState_tD4B4396ABF029DAD64E0389C71168E3C4949B41F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BsonType_tB6A96FAF144D5C44C1B6071029D7FBBCF806AF51_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTimeUtils_t08EF5030CF29329A3646A81F48D1F440A6234121_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enumerator_t597C435D76D0912631AF7909B79461C347020E0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enumerator_tC9B39CFED6C0A6D5CDD1FE2F790F532A7A4AB203_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Guid_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t148EAB2068C5F48E82A9E0C643BB154B8BB34257_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t3CF62242A258E986307D7CCF84A4C03FB96055D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t02CD314CF6671EA4E8F21A8C41D664B043C07DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t14D6DCE9D9AA35992A6A7A1E7E89CCF8C2A477BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t48AB7213FE0C045660B7F1D0FEA232BA22210BC4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tE241CB87CC95A73A720D51ACEC78F0245F877C86_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IXmlDeclaration_tA018518C777A8F9CD2D3BD397D9CAB3C3723AAA1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IXmlDocumentType_tC37DB53E9079EB1E489BE94B2A02E06A818BD11D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IXmlDocument_tEF9A1A455D7969D9E4EE72346C887F3648F81726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IXmlElement_t48C6FEA57F31ACF88F9D9AB22BDDD0523D1D4780_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonSerializationException_t00F36890DFAC04F2FDE779151340B9C5563612EC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonToken_t00B2B3F98FB3E9A8DE72409901BED1C7F1670BD5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t39498331735ADCEED3C66A5E7F951FCC1C4EEEBE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t944CCF3A156F251D4FD98B25EC08251DB21ADBC9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tDBB5CD4D0EC3C783FE3A623450331580CB409B5E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NameTable_t0164DCE377A0A6E712CF54BE4CE5DA58A5537B46_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* State_tFC19CCEAFF8F4E6C73914F3B8850C622CE3490A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XAttributeWrapper_t1FC7334561AD249FF39775D06CEF7BCECEBD9547_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XCData_tCE86E0709C47284A8D0A6CBE09CDFD6B8609BF3B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XCommentWrapper_t1BFE83CA1648036FAD8B8C6E79806055D34F2782_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XComment_t2FD9205AC70AF739D97E5CE8B1CC29459191F43D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XContainerWrapper_t7B103CDF831C64B07E4BABE6307FB7D605328AF9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XDeclarationWrapper_t30D8572D5BECE3E49B4F5BF8C17EE1A37A89AAE9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XDocumentTypeWrapper_tE70B54A200381660327029F12CDB902FF2EF26DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XDocumentType_t195D491B418C3696FBCAEE34E53D734E0B53A817_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XDocumentWrapper_t3C3117E449826BEB20F7BFB77214046EE4D86AD6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XElementWrapper_t15082EFC96DF60AC9ACF10A1D60C1E04207FCA61_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XObjectWrapper_t1932FA32F64A100673DEC2063AF00052A6CE1B16_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XProcessingInstructionWrapper_t73B2F6F52C84FBAB7AC112F1262C085959ED6D80_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XProcessingInstruction_t920C9022DAD590F61972E400D46FC1C443265795_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XTextWrapper_t54304AAC4CEF7C32A60F7D6519B28810027EC797_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XText_t006159E7F735736D41BBC0738FFB066A14B31AE2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlAttribute_t4B6CC461196FBF5CC9F777E74CC82C98E0CA9D18_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlDeclarationWrapper_t9167E036A5BE1475233675EC025E96DCA3CC1945_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlDeclaration_tA04662FA58C306A24C864BDE73D1B410858E7A79_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlDocumentTypeWrapper_t8E470E157344CAE69E9551F6D0826C0E4038C4ED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlDocumentType_tFD7379E45412FC2EBD65280ED3DE7A1C941A8D9E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlDocumentWrapper_t2C596BBEC57603F9B8DA72446CAABDC3DE251624_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlElementWrapper_tFFCFF4F15C008DF0469426DFE31B6A304DDEEC20_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlElement_t9A08B533E9A6B3548A1DE35476186F7ECCDF6FF1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlNodeType_tCA25567E42A464038FDA6BA318EC0A9627B4CB95_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlNodeWrapper_tE399A7CC58A6C5CE54C6EFE0D075A7B88C71B991_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00166C14A9ED4A48EBE519479D50B0CE4DCB7305;
IL2CPP_EXTERN_C String_t* _stringLiteral013D189FFF6214B6307FB356F81DB4FD46A89D0E;
IL2CPP_EXTERN_C String_t* _stringLiteral040ACBC1C698075688E5B27E50C6370BEB2676A0;
IL2CPP_EXTERN_C String_t* _stringLiteral042D5257625C9358C840FA1BA4A978DC0470104F;
IL2CPP_EXTERN_C String_t* _stringLiteral06A61D64D27460EF04BE4DCF66F6E64E285C68A4;
IL2CPP_EXTERN_C String_t* _stringLiteral0C97C66F7D6312F0BCB5A4E3E9ED7F8F1CF50F6A;
IL2CPP_EXTERN_C String_t* _stringLiteral11F941DFBA062769D6F047F85D846335446DFB0E;
IL2CPP_EXTERN_C String_t* _stringLiteral125BCB7A4232428BFD5FFB1F3E5905A4F6B0B075;
IL2CPP_EXTERN_C String_t* _stringLiteral1298EC2264C4F9A0D3A04140873D9D01F481050B;
IL2CPP_EXTERN_C String_t* _stringLiteral15196F05B117690F3E12E56AA0C43803EA0D2A46;
IL2CPP_EXTERN_C String_t* _stringLiteral15F434DE6EB05B31D391B12B5A8516BD141B7A93;
IL2CPP_EXTERN_C String_t* _stringLiteral161567E318CEB965509FE84CE4198A12E62440AF;
IL2CPP_EXTERN_C String_t* _stringLiteral1DE5E11A719EDB4CA85B9D81FAB9B419521AF411;
IL2CPP_EXTERN_C String_t* _stringLiteral22DA2AE2AAC47006D97A25A98C6CDC909DE59894;
IL2CPP_EXTERN_C String_t* _stringLiteral2923AF57406AD3628AA00F2F47378348C0E89B4C;
IL2CPP_EXTERN_C String_t* _stringLiteral2F62B3631B3843128CF8C3FF2A6EB6BB8DA4B062;
IL2CPP_EXTERN_C String_t* _stringLiteral37FDA2B361182A202537DCA1203AB3BEC2779E2F;
IL2CPP_EXTERN_C String_t* _stringLiteral420B74A52534550B0DD14DCF7D8988C2BD4936CE;
IL2CPP_EXTERN_C String_t* _stringLiteral43187C90BBB5DFB063A95733C9BD65ECD25A2E84;
IL2CPP_EXTERN_C String_t* _stringLiteral450A121B534CE8146DA53AF9EA5328F6753B270F;
IL2CPP_EXTERN_C String_t* _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8;
IL2CPP_EXTERN_C String_t* _stringLiteral4760011519A4AB7E8521F6795430114E80AA83E4;
IL2CPP_EXTERN_C String_t* _stringLiteral4C48A326ACCC25E558DC329A6C92D8184942B973;
IL2CPP_EXTERN_C String_t* _stringLiteral539E31D9C32242C0883451A9A8DE262A8C813564;
IL2CPP_EXTERN_C String_t* _stringLiteral559483D7AFD5E146A0FF903862BA9AB05FE01692;
IL2CPP_EXTERN_C String_t* _stringLiteral5EE58BA1E5ECB5C3AED8D32D9B6DA7CB39BB4E47;
IL2CPP_EXTERN_C String_t* _stringLiteral6139809F8F5889653A693440ECEF2DFD4FDCDD94;
IL2CPP_EXTERN_C String_t* _stringLiteral638C5441E8427B2B9D2C941DDBF958579B5FE3F0;
IL2CPP_EXTERN_C String_t* _stringLiteral66598110B46A51C4B35EB3014DABBD9FFC1FA160;
IL2CPP_EXTERN_C String_t* _stringLiteral6B866DCFF4A3EC3D3C30879F029D88106601B1B2;
IL2CPP_EXTERN_C String_t* _stringLiteral6E0489F9FAF23DF58DCABE03DAEB479BD06406A5;
IL2CPP_EXTERN_C String_t* _stringLiteral72D07D1C82E1B7A92C7AB6D9C01CD4050846760F;
IL2CPP_EXTERN_C String_t* _stringLiteral738F291E53E97C08DAE378C71EF70A60E31AE900;
IL2CPP_EXTERN_C String_t* _stringLiteral75842F038DF44EADD0CCA67D4F35D7BA0B0D7A4D;
IL2CPP_EXTERN_C String_t* _stringLiteral7630F7A0C27B2EE30DD70CE0777AD917869A5FC4;
IL2CPP_EXTERN_C String_t* _stringLiteral7659A39A96628D27A60957C9360035C1790C449D;
IL2CPP_EXTERN_C String_t* _stringLiteral810C723B6D33105E6B3277736A780EFDA0438806;
IL2CPP_EXTERN_C String_t* _stringLiteral83B3ACB1C0AB14BABA0BD386F8695E096686811C;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D;
IL2CPP_EXTERN_C String_t* _stringLiteral8CD217E7BE4DABC0AB52B3661A45AF8DB008E8C1;
IL2CPP_EXTERN_C String_t* _stringLiteral8F72A13E7E8E1CB50038C54FE7CC02AB7582F7AA;
IL2CPP_EXTERN_C String_t* _stringLiteral914C9492BCCD9D51AB318E3B5358DF89078CD8B8;
IL2CPP_EXTERN_C String_t* _stringLiteral96E8BF0E5DDD81FBBF5598805554859ED641E1E2;
IL2CPP_EXTERN_C String_t* _stringLiteral9A514EDAC534931C94A111265660666E05658496;
IL2CPP_EXTERN_C String_t* _stringLiteral9CDCEEB7A12F71E8DF3D6AC05D04621DD4FBABF3;
IL2CPP_EXTERN_C String_t* _stringLiteral9E6DEA6E609FD74FD29A7E5BB6D900CCBA5F3FBF;
IL2CPP_EXTERN_C String_t* _stringLiteralA2ADAC70CFE2DCB556D061A93CBD008778646655;
IL2CPP_EXTERN_C String_t* _stringLiteralAEE8864CE32A6E593EF9DA8C7FCDB920CEE839A0;
IL2CPP_EXTERN_C String_t* _stringLiteralB43B87FB930FCCA8033D700C4F7F183B4B974C07;
IL2CPP_EXTERN_C String_t* _stringLiteralB6FEE3D4E67CA183A789224E46967A517687086A;
IL2CPP_EXTERN_C String_t* _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
IL2CPP_EXTERN_C String_t* _stringLiteralBA1039E8CDAE53E44AC3E6185B0871F3D031A476;
IL2CPP_EXTERN_C String_t* _stringLiteralBC8B8F95D97527E14B1DC2E8FE750C876B38A54C;
IL2CPP_EXTERN_C String_t* _stringLiteralC3CA1105B0687AB04E8DB2CE95902C75EC2B661A;
IL2CPP_EXTERN_C String_t* _stringLiteralC9159179D678574C69291BCB3CFA5FAC9393D0C8;
IL2CPP_EXTERN_C String_t* _stringLiteralD372CCFC3C301AA5EC25EDCDE56A31E9545CDA18;
IL2CPP_EXTERN_C String_t* _stringLiteralD462B8D5192FB7491E85A3C2A4B22B91C958EE73;
IL2CPP_EXTERN_C String_t* _stringLiteralD5885752D9D9B9AFDCC103ACBDA8549090AABA45;
IL2CPP_EXTERN_C String_t* _stringLiteralD63216A99D4FD683AD72F25F707C7D4A188E2029;
IL2CPP_EXTERN_C String_t* _stringLiteralD76F2E16F30EA8C8C52D4ABD70B672BC7A3AEAB2;
IL2CPP_EXTERN_C String_t* _stringLiteralD8CD2F2DA1948373D6BFA8C44122166BC25E3FC0;
IL2CPP_EXTERN_C String_t* _stringLiteralDB28C3D7E7F56FAA480CEF9C7D0E3BF741423901;
IL2CPP_EXTERN_C String_t* _stringLiteralDB5269102EEAA6174B84EBA318CAFFA90AE3217B;
IL2CPP_EXTERN_C String_t* _stringLiteralE7CCD8078E8A58A921106F3AF064603AB958A11A;
IL2CPP_EXTERN_C String_t* _stringLiteralEA05B74022DC98A669248CD353ADDBD7AADAD4AA;
IL2CPP_EXTERN_C String_t* _stringLiteralEB970001F19051B486F81469B35F4DBB22AAD54E;
IL2CPP_EXTERN_C String_t* _stringLiteralECAC83771A00C701043A940F621CC1C765D30D31;
IL2CPP_EXTERN_C String_t* _stringLiteralF2EB0B21A975739F9285B24F45AC110ADD74337E;
IL2CPP_EXTERN_C String_t* _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7;
IL2CPP_EXTERN_C String_t* _stringLiteralF6C0C11953123BBAC57A7E215512C2CA4CF68520;
IL2CPP_EXTERN_C String_t* _stringLiteralF7493A7633C2FBBAA0BBEA8048B017B27F060AA9;
IL2CPP_EXTERN_C String_t* _stringLiteralF7E6C53D86D8ADC0DB8EFC0A2CD9877CC8BC9914;
IL2CPP_EXTERN_C String_t* _stringLiteralF96282F5D84FC9B754994ADCFE65DAE2088A7382;
IL2CPP_EXTERN_C String_t* _stringLiteralFBAD954A5D5DC7494CB8B4AE55EDFCFE125A1338;
IL2CPP_EXTERN_C String_t* _stringLiteralFDE19EF7EBB97E368AFBF9A1B8DC90708B67C9A4;
IL2CPP_EXTERN_C const RuntimeMethod* BsonBinaryWriter_CalculateSize_mC09EDD18FAF0B2E65A36FCC6D0C7615EE1544907_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BsonBinaryWriter_WriteTokenInternal_m54C0EA96679D81C5022FD97C4499657E1D38DA7E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BsonObjectId__ctor_m755CAEE2BE89A3B5A751FE980FB1A333B3D603C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BsonReader_GetString_mB3FD61F039F2636EE8B6B4BF2CAF84A26E4DDBFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BsonReader_ReadCodeWScope_m0DA7805CE5A3D1CC83E1554C8015207538D1FF3E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BsonReader_ReadNormal_m048652A5459D2B5D052FB068C5EC478734122EBF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BsonReader_ReadReference_mB9A96BD71CDF91482061F6C9074C2A83CB56E5F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BsonReader_ReadType_m1568AE4968EFA67EF81D622164A9AD3665E539DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BsonReader_Read_mFEBE910985E708117F1DFB084E839D4EC4432C70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BsonWriter_AddToken_m3B3692A74D77D31F63999E7E77DD4386B74A9901_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BsonWriter_WriteComment_m43D84D85207162EF1083D96254809FD5422D46C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BsonWriter_WriteObjectId_mF118E0F427F73A1FEAFB3853F056E9BE87524452_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BsonWriter_WriteRawValue_m12591A651F07D961A685E3C463098ED87557CB02_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BsonWriter_WriteRaw_m166F2B79C505DA68A9A52275A9DF26B397A4460D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BsonWriter_WriteStartConstructor_m1F88ADAEF8A51724CCBEDBF45591F27C337A9B15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BsonWriter_WriteValue_m244AEDCA1E419CEFAC8A082D4B9A0C4689FF2CCE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BsonWriter_WriteValue_m253E004DDC355C900E5146C875EFEBFE0B808CFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_mF5B5B00F670F3436AB3C07C0F64149501DEC2DBC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mC14A0401676B34A68B06FC858BA801E7DF99B7D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mA7C78FC10B78BFFDD69A6E1CA050B42D48F8B53F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mC2891A1E295FEF8B5B64E96EB62B5945149DF7BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m8A802F6DDB7EA4435FEE6877988C792B8B583F88_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mBB43E0B46CDCD47543052FDB890026C269E6D96E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m894DFFA678072980ECF786B52912E28891E006DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mFAD52D332201C947C95ECF69DAE5C3319CA654F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m05A778DDB06E3015BA3B2B539CB6360D44308F65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m398158DFE48F62CF2C479A46F0D6C5A6E3206CF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m7B3928D9D175A2FC23AD66D3F2E0BC9200D98E5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mFB02AD1C6DBE2CCEC757E8633ED0353BFCA3A415_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m872CB87380297BB9B43B61A80CB28F4A8C1C9011_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m8E48B727D08C794BA9EB42BB47747FD56F55C10E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mC2E8A71D702B5F722A83170C68470084EA6F1AEE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Insert_mB42244832CF5462EF2726D9EBEB081FE9426C926_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m157C47B733293E34DDC19F26D66D2C959F8251FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Reverse_m650275B7F9E56003CC1A1616FFA5A3BBC3541627_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m389274B90D96CA39D060BAE1C5A40939A32994D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m3935A6D299A58068CCFB138217E1D9C02F7130E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m51ABD0EBEBE9673A2608650D331CEE679D5029FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m573D86B46CB0180CD99560B5E3B03E4A5CDE368E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m99AF43FA43C38A915F0A8AF9F07EFF9D3183EA37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m5101BD6DFA5618FEB8E0D6CCF45C06C872577D0B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m543633880DCEC6159BABF4A6C35B9FFD0F7D5079_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m49F224E7B5DC4879C5A553E58943A24FA8E42815_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mF6B5797FA7FC75AAAE66FC325B93A5C2AC311E98_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_ToString_m5FDC0CBE068DB2893454257CE6E29846D47B3038_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XObjectWrapper_AppendChild_m93FD89B25381B97A651348E158D8E33E4F37821B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XObjectWrapper_set_Value_m722090806963BEA2AEE1CA30D109FAAA63A84876_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlNodeConverter_AddAttribute_m01F487BE31278D2909B42C51A8BC7F159A34DAB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlNodeConverter_ConvertTokenToXmlValue_m968DB55F5864E99BE9EBE8B3C89B1CFE13ACF458_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlNodeConverter_CreateDocumentType_m4438D07E2CC5D23244A39CC98EE3F75B74B06FFA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlNodeConverter_CreateInstruction_m7A5C6039FEC825B248B75841D11C1DB284F78006_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlNodeConverter_DeserializeNode_m7CF6B466118CB9E0CF4CAC90CA34BC769B45229C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlNodeConverter_GetPropertyName_mC4EBA7F268695B3CE90E87702E7CDF96ABB01BA5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlNodeConverter_ReadAttributeElements_m9B56D685A23448B661C73F3483B9B4063D55C049_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlNodeConverter_ReadElement_m09C859D452268EBC6B893181FDF83B8CC7BDFAD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlNodeConverter_ReadJson_m439264C33B17C4B9AB9EB03EDB14D20DD339FDD1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlNodeConverter_SerializeNode_mBBB1AA0A7AC24A39675F1B210F51870CE932D6AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlNodeConverter_WrapXml_m75EF1038542649689A89FBF5A3F2CED042EBF228_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* XNode_t185C922661054AAD14F49676DD6F3CB10D652A30_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* XmlElement_t9A08B533E9A6B3548A1DE35476186F7ECCDF6FF1_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF_0_0_0_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96* ____entries_1;
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
	KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7* ____entries_1;
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
	KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonProperty>
struct List_1_tDBB5CD4D0EC3C783FE3A623450331580CB409B5E  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	BsonPropertyU5BU5D_tE77AACFC9C5CEE1F990C258B77C2C1BBBBC583E5* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tDBB5CD4D0EC3C783FE3A623450331580CB409B5E_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	BsonPropertyU5BU5D_tE77AACFC9C5CEE1F990C258B77C2C1BBBBC583E5* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonToken>
struct List_1_t39498331735ADCEED3C66A5E7F951FCC1C4EEEBE  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	BsonTokenU5BU5D_tE5ED6E776E77B95220ED90B899FC35F33C39BD07* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t39498331735ADCEED3C66A5E7F951FCC1C4EEEBE_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	BsonTokenU5BU5D_tE5ED6E776E77B95220ED90B899FC35F33C39BD07* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode>
struct List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IXmlNodeU5BU5D_tC17675D27C440349A4AC7A7A4967E9E2245B5CD8* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IXmlNodeU5BU5D_tC17675D27C440349A4AC7A7A4967E9E2245B5CD8* ___s_emptyArray_5;
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

// System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonReader/ContainerContext>
struct List_1_t944CCF3A156F251D4FD98B25EC08251DB21ADBC9  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ContainerContextU5BU5D_tE42AA5D2C4E0FD7AC139F4E619241748C176783E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t944CCF3A156F251D4FD98B25EC08251DB21ADBC9_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ContainerContextU5BU5D_tE42AA5D2C4E0FD7AC139F4E619241748C176783E* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// System.IO.BinaryReader
struct BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158  : public RuntimeObject
{
	// System.IO.Stream System.IO.BinaryReader::m_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___m_stream_0;
	// System.Byte[] System.IO.BinaryReader::m_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_buffer_1;
	// System.Text.Decoder System.IO.BinaryReader::m_decoder
	Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC* ___m_decoder_2;
	// System.Byte[] System.IO.BinaryReader::m_charBytes
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_charBytes_3;
	// System.Char[] System.IO.BinaryReader::m_singleChar
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_singleChar_4;
	// System.Char[] System.IO.BinaryReader::m_charBuffer
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_charBuffer_5;
	// System.Int32 System.IO.BinaryReader::m_maxCharsSize
	int32_t ___m_maxCharsSize_6;
	// System.Boolean System.IO.BinaryReader::m_2BytesPerChar
	bool ___m_2BytesPerChar_7;
	// System.Boolean System.IO.BinaryReader::m_isMemoryStream
	bool ___m_isMemoryStream_8;
	// System.Boolean System.IO.BinaryReader::m_leaveOpen
	bool ___m_leaveOpen_9;
};

// System.IO.BinaryWriter
struct BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E  : public RuntimeObject
{
	// System.IO.Stream System.IO.BinaryWriter::OutStream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___OutStream_1;
	// System.Byte[] System.IO.BinaryWriter::_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer_2;
	// System.Text.Encoding System.IO.BinaryWriter::_encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ____encoding_3;
	// System.Text.Encoder System.IO.BinaryWriter::_encoder
	Encoder_tAF9067231A76315584BDF4CD27990E2F485A78FA* ____encoder_4;
	// System.Boolean System.IO.BinaryWriter::_leaveOpen
	bool ____leaveOpen_5;
	// System.Byte[] System.IO.BinaryWriter::_largeByteBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____largeByteBuffer_6;
	// System.Int32 System.IO.BinaryWriter::_maxChars
	int32_t ____maxChars_7;
};

struct BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E_StaticFields
{
	// System.IO.BinaryWriter System.IO.BinaryWriter::Null
	BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ___Null_0;
};

// Newtonsoft.Json.Bson.BsonBinaryWriter
struct BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09  : public RuntimeObject
{
	// System.IO.BinaryWriter Newtonsoft.Json.Bson.BsonBinaryWriter::_writer
	BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ____writer_1;
	// System.Byte[] Newtonsoft.Json.Bson.BsonBinaryWriter::_largeByteBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____largeByteBuffer_2;
	// System.DateTimeKind Newtonsoft.Json.Bson.BsonBinaryWriter::<DateTimeKindHandling>k__BackingField
	int32_t ___U3CDateTimeKindHandlingU3Ek__BackingField_3;
};

struct BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09_StaticFields
{
	// System.Text.Encoding Newtonsoft.Json.Bson.BsonBinaryWriter::Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___Encoding_0;
};

// Newtonsoft.Json.Bson.BsonObjectId
struct BsonObjectId_tD1799B243CF7FF4983762AFD5AA7EED8287AF4C2  : public RuntimeObject
{
	// System.Byte[] Newtonsoft.Json.Bson.BsonObjectId::<Value>k__BackingField
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CValueU3Ek__BackingField_0;
};

// Newtonsoft.Json.Bson.BsonProperty
struct BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE  : public RuntimeObject
{
	// Newtonsoft.Json.Bson.BsonString Newtonsoft.Json.Bson.BsonProperty::<Name>k__BackingField
	BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* ___U3CNameU3Ek__BackingField_0;
	// Newtonsoft.Json.Bson.BsonToken Newtonsoft.Json.Bson.BsonProperty::<Value>k__BackingField
	BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* ___U3CValueU3Ek__BackingField_1;
};

// Newtonsoft.Json.Bson.BsonToken
struct BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4  : public RuntimeObject
{
	// Newtonsoft.Json.Bson.BsonToken Newtonsoft.Json.Bson.BsonToken::<Parent>k__BackingField
	BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* ___U3CParentU3Ek__BackingField_0;
	// System.Int32 Newtonsoft.Json.Bson.BsonToken::<CalculatedSize>k__BackingField
	int32_t ___U3CCalculatedSizeU3Ek__BackingField_1;
};

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;
};

struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject* ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture_34;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number_36;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name_37;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::s_UserPreferredCultureInfoInAppX
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX_38;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_39;
};
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_55;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_56;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_57;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_58;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_59;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_60;
};

struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_61;
};

// Newtonsoft.Json.JsonConverter
struct JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16  : public RuntimeObject
{
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

// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E  : public RuntimeObject
{
	// System.String System.Uri::m_String
	String_t* ___m_String_13;
	// System.String System.Uri::m_originalUnicodeString
	String_t* ___m_originalUnicodeString_14;
	// System.UriParser System.Uri::m_Syntax
	UriParser_t920B0868286118827C08B08A15A9456AF6C19D81* ___m_Syntax_15;
	// System.String System.Uri::m_DnsSafeHost
	String_t* ___m_DnsSafeHost_16;
	// System.Uri/Flags System.Uri::m_Flags
	uint64_t ___m_Flags_17;
	// System.Uri/UriInfo System.Uri::m_Info
	UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09* ___m_Info_18;
	// System.Boolean System.Uri::m_iriParsing
	bool ___m_iriParsing_19;
};

struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_StaticFields
{
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_0;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_1;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_2;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_3;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_4;
	// System.String System.Uri::UriSchemeWs
	String_t* ___UriSchemeWs_5;
	// System.String System.Uri::UriSchemeWss
	String_t* ___UriSchemeWss_6;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_7;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_8;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_9;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_10;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_11;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_12;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitialized
	bool ___s_ConfigInitialized_20;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitializing
	bool ___s_ConfigInitializing_21;
	// System.UriIdnScope modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IdnScope
	int32_t ___s_IdnScope_22;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IriParsing
	bool ___s_IriParsing_23;
	// System.Boolean System.Uri::useDotNetRelativeOrAbsolute
	bool ___useDotNetRelativeOrAbsolute_24;
	// System.Boolean System.Uri::IsWindowsFileSystem
	bool ___IsWindowsFileSystem_25;
	// System.Object System.Uri::s_initLock
	RuntimeObject* ___s_initLock_26;
	// System.Char[] System.Uri::HexLowerChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___HexLowerChars_27;
	// System.Char[] System.Uri::_WSchars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____WSchars_28;
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

// System.Xml.Linq.XDeclaration
struct XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990  : public RuntimeObject
{
	// System.String System.Xml.Linq.XDeclaration::_version
	String_t* ____version_0;
	// System.String System.Xml.Linq.XDeclaration::_encoding
	String_t* ____encoding_1;
	// System.String System.Xml.Linq.XDeclaration::_standalone
	String_t* ____standalone_2;
};

// System.Xml.Linq.XName
struct XName_tAF6D9533A7D11AC27118F656985AC325C2A50E5C  : public RuntimeObject
{
	// System.Xml.Linq.XNamespace System.Xml.Linq.XName::_ns
	XNamespace_t86B6F8515F5E20D387B83EBDE0890C4559A4012C* ____ns_0;
	// System.String System.Xml.Linq.XName::_localName
	String_t* ____localName_1;
	// System.Int32 System.Xml.Linq.XName::_hashCode
	int32_t ____hashCode_2;
};

// System.Xml.Linq.XNamespace
struct XNamespace_t86B6F8515F5E20D387B83EBDE0890C4559A4012C  : public RuntimeObject
{
	// System.String System.Xml.Linq.XNamespace::_namespaceName
	String_t* ____namespaceName_4;
	// System.Int32 System.Xml.Linq.XNamespace::_hashCode
	int32_t ____hashCode_5;
	// System.Xml.Linq.XHashtable`1<System.Xml.Linq.XName> System.Xml.Linq.XNamespace::_names
	XHashtable_1_t2D08921459BE574EC1B2D723734AB79BE4CBE4B5* ____names_6;
};

struct XNamespace_t86B6F8515F5E20D387B83EBDE0890C4559A4012C_StaticFields
{
	// System.Xml.Linq.XHashtable`1<System.WeakReference> System.Xml.Linq.XNamespace::s_namespaces
	XHashtable_1_t2CF715088068F7F6D5D06152C3D4A892E5B07E46* ___s_namespaces_0;
	// System.WeakReference System.Xml.Linq.XNamespace::s_refNone
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* ___s_refNone_1;
	// System.WeakReference System.Xml.Linq.XNamespace::s_refXml
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* ___s_refXml_2;
	// System.WeakReference System.Xml.Linq.XNamespace::s_refXmlns
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* ___s_refXmlns_3;
};

// System.Xml.Linq.XObject
struct XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29  : public RuntimeObject
{
	// System.Xml.Linq.XContainer System.Xml.Linq.XObject::parent
	XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF* ___parent_0;
	// System.Object System.Xml.Linq.XObject::annotations
	RuntimeObject* ___annotations_1;
};

// Newtonsoft.Json.Converters.XObjectWrapper
struct XObjectWrapper_t1932FA32F64A100673DEC2063AF00052A6CE1B16  : public RuntimeObject
{
	// System.Xml.Linq.XObject Newtonsoft.Json.Converters.XObjectWrapper::_xmlObject
	XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29* ____xmlObject_0;
};

// System.Xml.XmlNameTable
struct XmlNameTable_tBDBAACFF3DB40A8E6AF3BDC11F0FF166CF11ABB8  : public RuntimeObject
{
};

// System.Xml.XmlNamespaceManager
struct XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F  : public RuntimeObject
{
	// System.Xml.XmlNamespaceManager/NamespaceDeclaration[] System.Xml.XmlNamespaceManager::nsdecls
	NamespaceDeclarationU5BU5D_t4DF48D3A2EB82C491A60E8748DE4BAFAA95A0F60* ___nsdecls_0;
	// System.Int32 System.Xml.XmlNamespaceManager::lastDecl
	int32_t ___lastDecl_1;
	// System.Xml.XmlNameTable System.Xml.XmlNamespaceManager::nameTable
	XmlNameTable_tBDBAACFF3DB40A8E6AF3BDC11F0FF166CF11ABB8* ___nameTable_2;
	// System.Int32 System.Xml.XmlNamespaceManager::scopeId
	int32_t ___scopeId_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Xml.XmlNamespaceManager::hashTable
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___hashTable_4;
	// System.Boolean System.Xml.XmlNamespaceManager::useHashtable
	bool ___useHashtable_5;
	// System.String System.Xml.XmlNamespaceManager::xml
	String_t* ___xml_6;
	// System.String System.Xml.XmlNamespaceManager::xmlNs
	String_t* ___xmlNs_7;
};

// System.Xml.XmlNode
struct XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF  : public RuntimeObject
{
	// System.Xml.XmlNode System.Xml.XmlNode::parentNode
	XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* ___parentNode_0;
};

// System.Xml.XmlNodeList
struct XmlNodeList_tFC0CEED3A006BEDF6A1A420F7CB55AC33E9B7F85  : public RuntimeObject
{
};

// Newtonsoft.Json.Converters.XmlNodeWrapper
struct XmlNodeWrapper_tE399A7CC58A6C5CE54C6EFE0D075A7B88C71B991  : public RuntimeObject
{
	// System.Xml.XmlNode Newtonsoft.Json.Converters.XmlNodeWrapper::_node
	XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* ____node_0;
	// System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode> Newtonsoft.Json.Converters.XmlNodeWrapper::_childNodes
	List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* ____childNodes_1;
	// System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode> Newtonsoft.Json.Converters.XmlNodeWrapper::_attributes
	List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* ____attributes_2;
};

// System.Xml.XmlResolver
struct XmlResolver_tE25A33DFCB87A939D11BC8543970F6857AEC3DCF  : public RuntimeObject
{
};

// Newtonsoft.Json.Bson.BsonReader/ContainerContext
struct ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A  : public RuntimeObject
{
	// Newtonsoft.Json.Bson.BsonType Newtonsoft.Json.Bson.BsonReader/ContainerContext::Type
	int8_t ___Type_0;
	// System.Int32 Newtonsoft.Json.Bson.BsonReader/ContainerContext::Length
	int32_t ___Length_1;
	// System.Int32 Newtonsoft.Json.Bson.BsonReader/ContainerContext::Position
	int32_t ___Position_2;
};

// System.Collections.Generic.List`1/Enumerator<Newtonsoft.Json.Bson.BsonProperty>
struct Enumerator_tC9B39CFED6C0A6D5CDD1FE2F790F532A7A4AB203 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tDBB5CD4D0EC3C783FE3A623450331580CB409B5E* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<Newtonsoft.Json.Bson.BsonToken>
struct Enumerator_t597C435D76D0912631AF7909B79461C347020E0C 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t39498331735ADCEED3C66A5E7F951FCC1C4EEEBE* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<Newtonsoft.Json.Converters.IXmlNode>
struct Enumerator_t5D6B89D2864E6CA1D667C75E2375831735B2B941 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
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

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
struct KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
struct KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	String_t* ___value_1;
};

// System.Nullable`1<System.Boolean>
struct Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	bool ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.DateFormatHandling>
struct Nullable_1_t4776B8A4D0D52AA8BDCD45E6D7070659326453D2 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.DateParseHandling>
struct Nullable_1_tDC640D18A54CA8F0A3C74518CBC15D439C8FC228 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.DateTimeZoneHandling>
struct Nullable_1_tD88F7E37B65824D38D74608E576D1265E5A2D2B2 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.FloatFormatHandling>
struct Nullable_1_tEAE8D5B59DCEB4F809A8A5F390EAAC18F266B822 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.FloatParseHandling>
struct Nullable_1_tC13211A32645AE3863530378A08BC45089EE419B 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.Formatting>
struct Nullable_1_tAEE2B9C53750E53F9B91B70967290720873E8D3E 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<System.Int32>
struct Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.StringEscapeHandling>
struct Nullable_1_t61214A44C233A0B00A9F79E380485D79D5FAA7C6 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Numerics.BigInteger
struct BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F 
{
	// System.Int32 System.Numerics.BigInteger::_sign
	int32_t ____sign_0;
	// System.UInt32[] System.Numerics.BigInteger::_bits
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____bits_1;
};

struct BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_StaticFields
{
	// System.Numerics.BigInteger System.Numerics.BigInteger::s_bnMinInt
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___s_bnMinInt_2;
	// System.Numerics.BigInteger System.Numerics.BigInteger::s_bnOneInt
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___s_bnOneInt_3;
	// System.Numerics.BigInteger System.Numerics.BigInteger::s_bnZeroInt
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___s_bnZeroInt_4;
	// System.Numerics.BigInteger System.Numerics.BigInteger::s_bnMinusOneInt
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___s_bnMinusOneInt_5;
	// System.Byte[] System.Numerics.BigInteger::s_success
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_success_6;
};
// Native definition for P/Invoke marshalling of System.Numerics.BigInteger
struct BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshaled_pinvoke
{
	int32_t ____sign_0;
	Il2CppSafeArray/*NONE*/* ____bits_1;
};
// Native definition for COM marshalling of System.Numerics.BigInteger
struct BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshaled_com
{
	int32_t ____sign_0;
	Il2CppSafeArray/*NONE*/* ____bits_1;
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

// Newtonsoft.Json.Bson.BsonArray
struct BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1  : public BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4
{
	// System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonToken> Newtonsoft.Json.Bson.BsonArray::_children
	List_1_t39498331735ADCEED3C66A5E7F951FCC1C4EEEBE* ____children_2;
};

// Newtonsoft.Json.Bson.BsonEmpty
struct BsonEmpty_t9F20528B697AB47F6FBA41E6BA4246DBD536BAB8  : public BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4
{
	// Newtonsoft.Json.Bson.BsonType Newtonsoft.Json.Bson.BsonEmpty::<Type>k__BackingField
	int8_t ___U3CTypeU3Ek__BackingField_4;
};

struct BsonEmpty_t9F20528B697AB47F6FBA41E6BA4246DBD536BAB8_StaticFields
{
	// Newtonsoft.Json.Bson.BsonToken Newtonsoft.Json.Bson.BsonEmpty::Null
	BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* ___Null_2;
	// Newtonsoft.Json.Bson.BsonToken Newtonsoft.Json.Bson.BsonEmpty::Undefined
	BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* ___Undefined_3;
};

// Newtonsoft.Json.Bson.BsonObject
struct BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB  : public BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4
{
	// System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonProperty> Newtonsoft.Json.Bson.BsonObject::_children
	List_1_tDBB5CD4D0EC3C783FE3A623450331580CB409B5E* ____children_2;
};

// Newtonsoft.Json.Bson.BsonRegex
struct BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1  : public BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4
{
	// Newtonsoft.Json.Bson.BsonString Newtonsoft.Json.Bson.BsonRegex::<Pattern>k__BackingField
	BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* ___U3CPatternU3Ek__BackingField_2;
	// Newtonsoft.Json.Bson.BsonString Newtonsoft.Json.Bson.BsonRegex::<Options>k__BackingField
	BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* ___U3COptionsU3Ek__BackingField_3;
};

// Newtonsoft.Json.Bson.BsonValue
struct BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660  : public BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4
{
	// System.Object Newtonsoft.Json.Bson.BsonValue::_value
	RuntimeObject* ____value_2;
	// Newtonsoft.Json.Bson.BsonType Newtonsoft.Json.Bson.BsonValue::_type
	int8_t ____type_3;
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

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
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

// Newtonsoft.Json.JsonPosition
struct JsonPosition_t7788656A280615072710710E8C15D23285850E8E 
{
	// Newtonsoft.Json.JsonContainerType Newtonsoft.Json.JsonPosition::Type
	int32_t ___Type_1;
	// System.Int32 Newtonsoft.Json.JsonPosition::Position
	int32_t ___Position_2;
	// System.String Newtonsoft.Json.JsonPosition::PropertyName
	String_t* ___PropertyName_3;
	// System.Boolean Newtonsoft.Json.JsonPosition::HasIndex
	bool ___HasIndex_4;
};

struct JsonPosition_t7788656A280615072710710E8C15D23285850E8E_StaticFields
{
	// System.Char[] Newtonsoft.Json.JsonPosition::SpecialCharacters
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___SpecialCharacters_0;
};
// Native definition for P/Invoke marshalling of Newtonsoft.Json.JsonPosition
struct JsonPosition_t7788656A280615072710710E8C15D23285850E8E_marshaled_pinvoke
{
	int32_t ___Type_1;
	int32_t ___Position_2;
	char* ___PropertyName_3;
	int32_t ___HasIndex_4;
};
// Native definition for COM marshalling of Newtonsoft.Json.JsonPosition
struct JsonPosition_t7788656A280615072710710E8C15D23285850E8E_marshaled_com
{
	int32_t ___Type_1;
	int32_t ___Position_2;
	Il2CppChar* ___PropertyName_3;
	int32_t ___HasIndex_4;
};

// System.Xml.NameTable
struct NameTable_t0164DCE377A0A6E712CF54BE4CE5DA58A5537B46  : public XmlNameTable_tBDBAACFF3DB40A8E6AF3BDC11F0FF166CF11ABB8
{
	// System.Xml.NameTable/Entry[] System.Xml.NameTable::entries
	EntryU5BU5D_tE4AE7874F9098D7C9B34C34630C2F2698981939A* ___entries_0;
	// System.Int32 System.Xml.NameTable::count
	int32_t ___count_1;
	// System.Int32 System.Xml.NameTable::mask
	int32_t ___mask_2;
	// System.Int32 System.Xml.NameTable::hashCodeRandomizer
	int32_t ___hashCodeRandomizer_3;
};

// System.SByte
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_3;
};

struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
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

// System.Text.UTF8Encoding
struct UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE  : public Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095
{
	// System.Boolean System.Text.UTF8Encoding::_emitUTF8Identifier
	bool ____emitUTF8Identifier_64;
	// System.Boolean System.Text.UTF8Encoding::_isThrowException
	bool ____isThrowException_65;
};

struct UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE_StaticFields
{
	// System.Text.UTF8Encoding/UTF8EncodingSealed System.Text.UTF8Encoding::s_default
	UTF8EncodingSealed_tF97A34F40CABE9CE1C168967D60396F51C43DD36* ___s_default_62;
	// System.Byte[] System.Text.UTF8Encoding::s_preamble
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_preamble_63;
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

// System.Xml.Linq.XAttribute
struct XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF  : public XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29
{
	// System.Xml.Linq.XAttribute System.Xml.Linq.XAttribute::next
	XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF* ___next_2;
	// System.Xml.Linq.XName System.Xml.Linq.XAttribute::name
	XName_tAF6D9533A7D11AC27118F656985AC325C2A50E5C* ___name_3;
	// System.String System.Xml.Linq.XAttribute::value
	String_t* ___value_4;
};

// Newtonsoft.Json.Converters.XAttributeWrapper
struct XAttributeWrapper_t1FC7334561AD249FF39775D06CEF7BCECEBD9547  : public XObjectWrapper_t1932FA32F64A100673DEC2063AF00052A6CE1B16
{
};

// Newtonsoft.Json.Converters.XCommentWrapper
struct XCommentWrapper_t1BFE83CA1648036FAD8B8C6E79806055D34F2782  : public XObjectWrapper_t1932FA32F64A100673DEC2063AF00052A6CE1B16
{
};

// Newtonsoft.Json.Converters.XContainerWrapper
struct XContainerWrapper_t7B103CDF831C64B07E4BABE6307FB7D605328AF9  : public XObjectWrapper_t1932FA32F64A100673DEC2063AF00052A6CE1B16
{
	// System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode> Newtonsoft.Json.Converters.XContainerWrapper::_childNodes
	List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* ____childNodes_1;
};

// Newtonsoft.Json.Converters.XDeclarationWrapper
struct XDeclarationWrapper_t30D8572D5BECE3E49B4F5BF8C17EE1A37A89AAE9  : public XObjectWrapper_t1932FA32F64A100673DEC2063AF00052A6CE1B16
{
	// System.Xml.Linq.XDeclaration Newtonsoft.Json.Converters.XDeclarationWrapper::<Declaration>k__BackingField
	XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990* ___U3CDeclarationU3Ek__BackingField_1;
};

// Newtonsoft.Json.Converters.XDocumentTypeWrapper
struct XDocumentTypeWrapper_tE70B54A200381660327029F12CDB902FF2EF26DA  : public XObjectWrapper_t1932FA32F64A100673DEC2063AF00052A6CE1B16
{
	// System.Xml.Linq.XDocumentType Newtonsoft.Json.Converters.XDocumentTypeWrapper::_documentType
	XDocumentType_t195D491B418C3696FBCAEE34E53D734E0B53A817* ____documentType_1;
};

// System.Xml.Linq.XNode
struct XNode_t185C922661054AAD14F49676DD6F3CB10D652A30  : public XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29
{
	// System.Xml.Linq.XNode System.Xml.Linq.XNode::next
	XNode_t185C922661054AAD14F49676DD6F3CB10D652A30* ___next_2;
};

// Newtonsoft.Json.Converters.XProcessingInstructionWrapper
struct XProcessingInstructionWrapper_t73B2F6F52C84FBAB7AC112F1262C085959ED6D80  : public XObjectWrapper_t1932FA32F64A100673DEC2063AF00052A6CE1B16
{
};

// Newtonsoft.Json.Converters.XTextWrapper
struct XTextWrapper_t54304AAC4CEF7C32A60F7D6519B28810027EC797  : public XObjectWrapper_t1932FA32F64A100673DEC2063AF00052A6CE1B16
{
};

// System.Xml.XmlAttribute
struct XmlAttribute_t4B6CC461196FBF5CC9F777E74CC82C98E0CA9D18  : public XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF
{
	// System.Xml.XmlName System.Xml.XmlAttribute::name
	XmlName_t0704430D24D202146901D342E34D878246E14F33* ___name_1;
	// System.Xml.XmlLinkedNode System.Xml.XmlAttribute::lastChild
	XmlLinkedNode_t640BF5D3FDAF0606665C3BAE565988A5014F1B9C* ___lastChild_2;
};

// Newtonsoft.Json.Converters.XmlDeclarationWrapper
struct XmlDeclarationWrapper_t9167E036A5BE1475233675EC025E96DCA3CC1945  : public XmlNodeWrapper_tE399A7CC58A6C5CE54C6EFE0D075A7B88C71B991
{
	// System.Xml.XmlDeclaration Newtonsoft.Json.Converters.XmlDeclarationWrapper::_declaration
	XmlDeclaration_tA04662FA58C306A24C864BDE73D1B410858E7A79* ____declaration_3;
};

// System.Xml.XmlDocument
struct XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B  : public XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF
{
	// System.Xml.XmlImplementation System.Xml.XmlDocument::implementation
	XmlImplementation_t4B3F467B76BD95C919C40424196C55B38EEC0F4D* ___implementation_1;
	// System.Xml.DomNameTable System.Xml.XmlDocument::domNameTable
	DomNameTable_tE4318EC10C55A46FD00324E740BFA7D9CEE2AF45* ___domNameTable_2;
	// System.Xml.XmlLinkedNode System.Xml.XmlDocument::lastChild
	XmlLinkedNode_t640BF5D3FDAF0606665C3BAE565988A5014F1B9C* ___lastChild_3;
	// System.Xml.XmlNamedNodeMap System.Xml.XmlDocument::entities
	XmlNamedNodeMap_t13203D1B3861C62568AFFA1D644C04ABCBFC130C* ___entities_4;
	// System.Collections.Hashtable System.Xml.XmlDocument::htElementIdMap
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___htElementIdMap_5;
	// System.Collections.Hashtable System.Xml.XmlDocument::htElementIDAttrDecl
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___htElementIDAttrDecl_6;
	// System.Xml.Schema.SchemaInfo System.Xml.XmlDocument::schemaInfo
	SchemaInfo_t42F4B1099B63BCF2D3BBF7F35A79AF6B90B0927E* ___schemaInfo_7;
	// System.Xml.Schema.XmlSchemaSet System.Xml.XmlDocument::schemas
	XmlSchemaSet_t048A12CE7D00EF330EF32A388B69A240899F88D1* ___schemas_8;
	// System.Boolean System.Xml.XmlDocument::reportValidity
	bool ___reportValidity_9;
	// System.Boolean System.Xml.XmlDocument::actualLoadingStatus
	bool ___actualLoadingStatus_10;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::onNodeInsertingDelegate
	XmlNodeChangedEventHandler_t907F6E9CB8DE238635028EC468AD41CAB0BA269B* ___onNodeInsertingDelegate_11;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::onNodeInsertedDelegate
	XmlNodeChangedEventHandler_t907F6E9CB8DE238635028EC468AD41CAB0BA269B* ___onNodeInsertedDelegate_12;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::onNodeRemovingDelegate
	XmlNodeChangedEventHandler_t907F6E9CB8DE238635028EC468AD41CAB0BA269B* ___onNodeRemovingDelegate_13;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::onNodeRemovedDelegate
	XmlNodeChangedEventHandler_t907F6E9CB8DE238635028EC468AD41CAB0BA269B* ___onNodeRemovedDelegate_14;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::onNodeChangingDelegate
	XmlNodeChangedEventHandler_t907F6E9CB8DE238635028EC468AD41CAB0BA269B* ___onNodeChangingDelegate_15;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::onNodeChangedDelegate
	XmlNodeChangedEventHandler_t907F6E9CB8DE238635028EC468AD41CAB0BA269B* ___onNodeChangedDelegate_16;
	// System.Boolean System.Xml.XmlDocument::fEntRefNodesPresent
	bool ___fEntRefNodesPresent_17;
	// System.Boolean System.Xml.XmlDocument::fCDataNodesPresent
	bool ___fCDataNodesPresent_18;
	// System.Boolean System.Xml.XmlDocument::preserveWhitespace
	bool ___preserveWhitespace_19;
	// System.Boolean System.Xml.XmlDocument::isLoading
	bool ___isLoading_20;
	// System.String System.Xml.XmlDocument::strDocumentName
	String_t* ___strDocumentName_21;
	// System.String System.Xml.XmlDocument::strDocumentFragmentName
	String_t* ___strDocumentFragmentName_22;
	// System.String System.Xml.XmlDocument::strCommentName
	String_t* ___strCommentName_23;
	// System.String System.Xml.XmlDocument::strTextName
	String_t* ___strTextName_24;
	// System.String System.Xml.XmlDocument::strCDataSectionName
	String_t* ___strCDataSectionName_25;
	// System.String System.Xml.XmlDocument::strEntityName
	String_t* ___strEntityName_26;
	// System.String System.Xml.XmlDocument::strID
	String_t* ___strID_27;
	// System.String System.Xml.XmlDocument::strXmlns
	String_t* ___strXmlns_28;
	// System.String System.Xml.XmlDocument::strXml
	String_t* ___strXml_29;
	// System.String System.Xml.XmlDocument::strSpace
	String_t* ___strSpace_30;
	// System.String System.Xml.XmlDocument::strLang
	String_t* ___strLang_31;
	// System.String System.Xml.XmlDocument::strEmpty
	String_t* ___strEmpty_32;
	// System.String System.Xml.XmlDocument::strNonSignificantWhitespaceName
	String_t* ___strNonSignificantWhitespaceName_33;
	// System.String System.Xml.XmlDocument::strSignificantWhitespaceName
	String_t* ___strSignificantWhitespaceName_34;
	// System.String System.Xml.XmlDocument::strReservedXmlns
	String_t* ___strReservedXmlns_35;
	// System.String System.Xml.XmlDocument::strReservedXml
	String_t* ___strReservedXml_36;
	// System.String System.Xml.XmlDocument::baseURI
	String_t* ___baseURI_37;
	// System.Xml.XmlResolver System.Xml.XmlDocument::resolver
	XmlResolver_tE25A33DFCB87A939D11BC8543970F6857AEC3DCF* ___resolver_38;
	// System.Boolean System.Xml.XmlDocument::bSetResolver
	bool ___bSetResolver_39;
	// System.Object System.Xml.XmlDocument::objLock
	RuntimeObject* ___objLock_40;
};

struct XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B_StaticFields
{
	// System.Xml.EmptyEnumerator System.Xml.XmlDocument::EmptyEnumerator
	EmptyEnumerator_t84EC9187C8460EE98E675ED9258AE4DF2A6776DA* ___EmptyEnumerator_41;
	// System.Xml.Schema.IXmlSchemaInfo System.Xml.XmlDocument::NotKnownSchemaInfo
	RuntimeObject* ___NotKnownSchemaInfo_42;
	// System.Xml.Schema.IXmlSchemaInfo System.Xml.XmlDocument::ValidSchemaInfo
	RuntimeObject* ___ValidSchemaInfo_43;
	// System.Xml.Schema.IXmlSchemaInfo System.Xml.XmlDocument::InvalidSchemaInfo
	RuntimeObject* ___InvalidSchemaInfo_44;
};

// Newtonsoft.Json.Converters.XmlDocumentTypeWrapper
struct XmlDocumentTypeWrapper_t8E470E157344CAE69E9551F6D0826C0E4038C4ED  : public XmlNodeWrapper_tE399A7CC58A6C5CE54C6EFE0D075A7B88C71B991
{
	// System.Xml.XmlDocumentType Newtonsoft.Json.Converters.XmlDocumentTypeWrapper::_documentType
	XmlDocumentType_tFD7379E45412FC2EBD65280ED3DE7A1C941A8D9E* ____documentType_3;
};

// Newtonsoft.Json.Converters.XmlDocumentWrapper
struct XmlDocumentWrapper_t2C596BBEC57603F9B8DA72446CAABDC3DE251624  : public XmlNodeWrapper_tE399A7CC58A6C5CE54C6EFE0D075A7B88C71B991
{
	// System.Xml.XmlDocument Newtonsoft.Json.Converters.XmlDocumentWrapper::_document
	XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* ____document_3;
};

// Newtonsoft.Json.Converters.XmlElementWrapper
struct XmlElementWrapper_tFFCFF4F15C008DF0469426DFE31B6A304DDEEC20  : public XmlNodeWrapper_tE399A7CC58A6C5CE54C6EFE0D075A7B88C71B991
{
	// System.Xml.XmlElement Newtonsoft.Json.Converters.XmlElementWrapper::_element
	XmlElement_t9A08B533E9A6B3548A1DE35476186F7ECCDF6FF1* ____element_3;
};

// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t640BF5D3FDAF0606665C3BAE565988A5014F1B9C  : public XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF
{
	// System.Xml.XmlLinkedNode System.Xml.XmlLinkedNode::next
	XmlLinkedNode_t640BF5D3FDAF0606665C3BAE565988A5014F1B9C* ___next_1;
};

// Newtonsoft.Json.Converters.XmlNodeConverter
struct XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF  : public JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16
{
	// System.String Newtonsoft.Json.Converters.XmlNodeConverter::<DeserializeRootElementName>k__BackingField
	String_t* ___U3CDeserializeRootElementNameU3Ek__BackingField_8;
	// System.Boolean Newtonsoft.Json.Converters.XmlNodeConverter::<WriteArrayAttribute>k__BackingField
	bool ___U3CWriteArrayAttributeU3Ek__BackingField_9;
	// System.Boolean Newtonsoft.Json.Converters.XmlNodeConverter::<OmitRootObject>k__BackingField
	bool ___U3COmitRootObjectU3Ek__BackingField_10;
	// System.Boolean Newtonsoft.Json.Converters.XmlNodeConverter::<EncodeSpecialCharacters>k__BackingField
	bool ___U3CEncodeSpecialCharactersU3Ek__BackingField_11;
};

struct XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF_StaticFields
{
	// System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode> Newtonsoft.Json.Converters.XmlNodeConverter::EmptyChildNodes
	List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* ___EmptyChildNodes_0;
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=10
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D10_t2D94270D7B052DF2B0E1709CF65BBFB0CC814D8F 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D10_t2D94270D7B052DF2B0E1709CF65BBFB0CC814D8F__padding[10];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D16_tFD46B3DD967382E5D96BE5CA4345732DEEED51D2 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D16_tFD46B3DD967382E5D96BE5CA4345732DEEED51D2__padding[16];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D20_tC16C381DF0B3CA4BD93AC8CDA35C4B380DD187A1 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D20_tC16C381DF0B3CA4BD93AC8CDA35C4B380DD187A1__padding[20];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D24_tF0225D9C6172DF007FE90AF8D9E4655390CD88EC 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D24_tF0225D9C6172DF007FE90AF8D9E4655390CD88EC__padding[24];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D28_t0100FD18FF65715BC25E2BF08EC7C3052FDE2A77 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D28_t0100FD18FF65715BC25E2BF08EC7C3052FDE2A77__padding[28];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=36
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D36_tEF121C551F98671BC9B6AB747FA4B5B71AC996A6 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D36_tEF121C551F98671BC9B6AB747FA4B5B71AC996A6__padding[36];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D40_t1672A8AB2BC5BBFC71D184ED523D14D02EA62968 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D40_t1672A8AB2BC5BBFC71D184ED523D14D02EA62968__padding[40];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=44
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D44_tA60F548D647725107E2BA182D24D0561B24FED62 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D44_tA60F548D647725107E2BA182D24D0561B24FED62__padding[44];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D52_tAB96EF88882201B83E07D300C007D1D396914920 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D52_tAB96EF88882201B83E07D300C007D1D396914920__padding[52];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=6
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D6_tDB565845177A27186A10B7E9A656A02A889729EE 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D6_tDB565845177A27186A10B7E9A656A02A889729EE__padding[6];
	};
};
#pragma pack(pop, tp)

// System.Xml.XmlNamedNodeMap/SmallXmlNodeList
struct SmallXmlNodeList_tAF536F4BFCA26BF1B0E912818E921A3181D49EF0 
{
	// System.Object System.Xml.XmlNamedNodeMap/SmallXmlNodeList::field
	RuntimeObject* ___field_0;
};
// Native definition for P/Invoke marshalling of System.Xml.XmlNamedNodeMap/SmallXmlNodeList
struct SmallXmlNodeList_tAF536F4BFCA26BF1B0E912818E921A3181D49EF0_marshaled_pinvoke
{
	Il2CppIUnknown* ___field_0;
};
// Native definition for COM marshalling of System.Xml.XmlNamedNodeMap/SmallXmlNodeList
struct SmallXmlNodeList_tAF536F4BFCA26BF1B0E912818E921A3181D49EF0_marshaled_com
{
	Il2CppIUnknown* ___field_0;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>
struct Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>
struct Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t2100A0BC4744267E7860382071B8C5AC5C15E6CD  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t2100A0BC4744267E7860382071B8C5AC5C15E6CD_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=44 <PrivateImplementationDetails>::0698228BF899CAEAB9A53E5E6C7099E846C44F56432050D234DDF03AD772F139
	__StaticArrayInitTypeSizeU3D44_tA60F548D647725107E2BA182D24D0561B24FED62 ___0698228BF899CAEAB9A53E5E6C7099E846C44F56432050D234DDF03AD772F139_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=10 <PrivateImplementationDetails>::19AE20A57B073E3E8DD45C6F6A4E9AB1076EA3EBFFF28E4AEB58B411472CF994
	__StaticArrayInitTypeSizeU3D10_t2D94270D7B052DF2B0E1709CF65BBFB0CC814D8F ___19AE20A57B073E3E8DD45C6F6A4E9AB1076EA3EBFFF28E4AEB58B411472CF994_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::223D6CA32241C349E421A0164F2341E20CC5B65D5A04AA021CFF71D623895570
	__StaticArrayInitTypeSizeU3D40_t1672A8AB2BC5BBFC71D184ED523D14D02EA62968 ___223D6CA32241C349E421A0164F2341E20CC5B65D5A04AA021CFF71D623895570_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::33350F5DA385CE1B8749AEC68BA060CD54EE981968522B5EDF62178537A1FEEE
	__StaticArrayInitTypeSizeU3D20_tC16C381DF0B3CA4BD93AC8CDA35C4B380DD187A1 ___33350F5DA385CE1B8749AEC68BA060CD54EE981968522B5EDF62178537A1FEEE_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::38809B9974198671140931F729415F3FD75DF68A6398E3486AE3B58554329A63
	__StaticArrayInitTypeSizeU3D40_t1672A8AB2BC5BBFC71D184ED523D14D02EA62968 ___38809B9974198671140931F729415F3FD75DF68A6398E3486AE3B58554329A63_4;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28 <PrivateImplementationDetails>::499E4F5C84E20C7347E10100E0EC90C1945EA21C7C80809E4F7F474179B39DF6
	__StaticArrayInitTypeSizeU3D28_t0100FD18FF65715BC25E2BF08EC7C3052FDE2A77 ___499E4F5C84E20C7347E10100E0EC90C1945EA21C7C80809E4F7F474179B39DF6_5;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::4EDE3546F1189E450DF4D4A2739BE90BEB3B1708B3B9F406B02E0773A92A10FF
	__StaticArrayInitTypeSizeU3D16_tFD46B3DD967382E5D96BE5CA4345732DEEED51D2 ___4EDE3546F1189E450DF4D4A2739BE90BEB3B1708B3B9F406B02E0773A92A10FF_6;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52 <PrivateImplementationDetails>::5857EE4CE98BFABBD62B385C1098507DD0052FF3951043AAD6A1DABD495F18AA
	__StaticArrayInitTypeSizeU3D52_tAB96EF88882201B83E07D300C007D1D396914920 ___5857EE4CE98BFABBD62B385C1098507DD0052FF3951043AAD6A1DABD495F18AA_7;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28 <PrivateImplementationDetails>::5ADB7CA81690556AB2A3201A849839FA3562604BB469382C7D6D78AB426283E2
	__StaticArrayInitTypeSizeU3D28_t0100FD18FF65715BC25E2BF08EC7C3052FDE2A77 ___5ADB7CA81690556AB2A3201A849839FA3562604BB469382C7D6D78AB426283E2_8;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::5DDF815AC046E7D4603FA586D1BDE42118AD4FE9875D64F716BC7D2740EE52C9
	__StaticArrayInitTypeSizeU3D24_tF0225D9C6172DF007FE90AF8D9E4655390CD88EC ___5DDF815AC046E7D4603FA586D1BDE42118AD4FE9875D64F716BC7D2740EE52C9_9;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::605A3F93AE7A97E00C156F977E942027EA532E263A5B440A4219984F803FDD04
	__StaticArrayInitTypeSizeU3D16_tFD46B3DD967382E5D96BE5CA4345732DEEED51D2 ___605A3F93AE7A97E00C156F977E942027EA532E263A5B440A4219984F803FDD04_10;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=36 <PrivateImplementationDetails>::7367A65185E4F747AA29364AB199D01646A010A62129A6BA2E35E929D7294D62
	__StaticArrayInitTypeSizeU3D36_tEF121C551F98671BC9B6AB747FA4B5B71AC996A6 ___7367A65185E4F747AA29364AB199D01646A010A62129A6BA2E35E929D7294D62_11;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::7439A4C9E30AC42BCC55AD1A2B617E29E7129B6DDAC79C886944B17819262CC1
	__StaticArrayInitTypeSizeU3D40_t1672A8AB2BC5BBFC71D184ED523D14D02EA62968 ___7439A4C9E30AC42BCC55AD1A2B617E29E7129B6DDAC79C886944B17819262CC1_12;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=6 <PrivateImplementationDetails>::772907508FD7AA0ED404C8FC80B6B772E26D67FA3C3662C22D62B871067C28DA
	__StaticArrayInitTypeSizeU3D6_tDB565845177A27186A10B7E9A656A02A889729EE ___772907508FD7AA0ED404C8FC80B6B772E26D67FA3C3662C22D62B871067C28DA_13;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::990F3F1286CC3928725497B2745CFF7BC7C9803B4EB8271611540BA6BF6654B5
	__StaticArrayInitTypeSizeU3D40_t1672A8AB2BC5BBFC71D184ED523D14D02EA62968 ___990F3F1286CC3928725497B2745CFF7BC7C9803B4EB8271611540BA6BF6654B5_14;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::A8636D08B42D058EFC34703DD37B6468FCE56138DF242B862C3F1CA138CB3B89
	__StaticArrayInitTypeSizeU3D16_tFD46B3DD967382E5D96BE5CA4345732DEEED51D2 ___A8636D08B42D058EFC34703DD37B6468FCE56138DF242B862C3F1CA138CB3B89_15;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::B1D1BCD1D06B4A563944BE3C67D51F63DF23702E5BE760D7897C6AD1F51C6122
	__StaticArrayInitTypeSizeU3D20_tC16C381DF0B3CA4BD93AC8CDA35C4B380DD187A1 ___B1D1BCD1D06B4A563944BE3C67D51F63DF23702E5BE760D7897C6AD1F51C6122_16;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::CAA07D7573596B3356BD202533F0EAFDD05309981F270193A99E300D57587326
	__StaticArrayInitTypeSizeU3D20_tC16C381DF0B3CA4BD93AC8CDA35C4B380DD187A1 ___CAA07D7573596B3356BD202533F0EAFDD05309981F270193A99E300D57587326_17;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::D4B3B8EBA0589FC38724A0D318B46104B07BC528744109ED69ED71604B7EEC1A
	__StaticArrayInitTypeSizeU3D40_t1672A8AB2BC5BBFC71D184ED523D14D02EA62968 ___D4B3B8EBA0589FC38724A0D318B46104B07BC528744109ED69ED71604B7EEC1A_18;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::F6EDC1733B068F457C63E03BB041B9AB6BFAD5CD7673D3E0841968D3FBCB12C7
	__StaticArrayInitTypeSizeU3D40_t1672A8AB2BC5BBFC71D184ED523D14D02EA62968 ___F6EDC1733B068F457C63E03BB041B9AB6BFAD5CD7673D3E0841968D3FBCB12C7_19;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52 <PrivateImplementationDetails>::FADB218011E7702BB9575D0C32A685DA10B5C72EB809BD9A955DB1C76E4D8315
	__StaticArrayInitTypeSizeU3D52_tAB96EF88882201B83E07D300C007D1D396914920 ___FADB218011E7702BB9575D0C32A685DA10B5C72EB809BD9A955DB1C76E4D8315_20;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::FCA56C548368F7065472C8C8EE4D63921B4F16BB51181EC202A0C252D5209E6A
	__StaticArrayInitTypeSizeU3D40_t1672A8AB2BC5BBFC71D184ED523D14D02EA62968 ___FCA56C548368F7065472C8C8EE4D63921B4F16BB51181EC202A0C252D5209E6A_21;
};

// Newtonsoft.Json.Bson.BsonBinary
struct BsonBinary_t10CD8515CA416C5958E3FA3290910E8FD2DFB8A8  : public BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660
{
	// Newtonsoft.Json.Bson.BsonBinaryType Newtonsoft.Json.Bson.BsonBinary::<BinaryType>k__BackingField
	uint8_t ___U3CBinaryTypeU3Ek__BackingField_4;
};

// Newtonsoft.Json.Bson.BsonBoolean
struct BsonBoolean_tCDA0063DFA3B0C789C19533BFA53A6E7CCD644BD  : public BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660
{
};

struct BsonBoolean_tCDA0063DFA3B0C789C19533BFA53A6E7CCD644BD_StaticFields
{
	// Newtonsoft.Json.Bson.BsonBoolean Newtonsoft.Json.Bson.BsonBoolean::False
	BsonBoolean_tCDA0063DFA3B0C789C19533BFA53A6E7CCD644BD* ___False_4;
	// Newtonsoft.Json.Bson.BsonBoolean Newtonsoft.Json.Bson.BsonBoolean::True
	BsonBoolean_tCDA0063DFA3B0C789C19533BFA53A6E7CCD644BD* ___True_5;
};

// Newtonsoft.Json.Bson.BsonString
struct BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE  : public BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660
{
	// System.Int32 Newtonsoft.Json.Bson.BsonString::<ByteCount>k__BackingField
	int32_t ___U3CByteCountU3Ek__BackingField_4;
	// System.Boolean Newtonsoft.Json.Bson.BsonString::<IncludeLength>k__BackingField
	bool ___U3CIncludeLengthU3Ek__BackingField_5;
};

// System.DateTimeOffset
struct DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 
{
	// System.DateTime System.DateTimeOffset::_dateTime
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ____dateTime_3;
	// System.Int16 System.DateTimeOffset::_offsetMinutes
	int16_t ____offsetMinutes_4;
};

struct DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_StaticFields
{
	// System.DateTimeOffset System.DateTimeOffset::MinValue
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___MinValue_0;
	// System.DateTimeOffset System.DateTimeOffset::MaxValue
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___MaxValue_1;
	// System.DateTimeOffset System.DateTimeOffset::UnixEpoch
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___UnixEpoch_2;
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

// Newtonsoft.Json.JsonReader
struct JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765  : public RuntimeObject
{
	// Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::_tokenType
	int32_t ____tokenType_0;
	// System.Object Newtonsoft.Json.JsonReader::_value
	RuntimeObject* ____value_1;
	// System.Char Newtonsoft.Json.JsonReader::_quoteChar
	Il2CppChar ____quoteChar_2;
	// Newtonsoft.Json.JsonReader/State Newtonsoft.Json.JsonReader::_currentState
	int32_t ____currentState_3;
	// Newtonsoft.Json.JsonPosition Newtonsoft.Json.JsonReader::_currentPosition
	JsonPosition_t7788656A280615072710710E8C15D23285850E8E ____currentPosition_4;
	// System.Globalization.CultureInfo Newtonsoft.Json.JsonReader::_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ____culture_5;
	// Newtonsoft.Json.DateTimeZoneHandling Newtonsoft.Json.JsonReader::_dateTimeZoneHandling
	int32_t ____dateTimeZoneHandling_6;
	// System.Nullable`1<System.Int32> Newtonsoft.Json.JsonReader::_maxDepth
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ____maxDepth_7;
	// System.Boolean Newtonsoft.Json.JsonReader::_hasExceededMaxDepth
	bool ____hasExceededMaxDepth_8;
	// Newtonsoft.Json.DateParseHandling Newtonsoft.Json.JsonReader::_dateParseHandling
	int32_t ____dateParseHandling_9;
	// Newtonsoft.Json.FloatParseHandling Newtonsoft.Json.JsonReader::_floatParseHandling
	int32_t ____floatParseHandling_10;
	// System.String Newtonsoft.Json.JsonReader::_dateFormatString
	String_t* ____dateFormatString_11;
	// System.Collections.Generic.List`1<Newtonsoft.Json.JsonPosition> Newtonsoft.Json.JsonReader::_stack
	List_1_t53E7DEFF45EC8B1D5AE04D4FC6284E617F0D79CB* ____stack_12;
	// System.Boolean Newtonsoft.Json.JsonReader::<CloseInput>k__BackingField
	bool ___U3CCloseInputU3Ek__BackingField_13;
	// System.Boolean Newtonsoft.Json.JsonReader::<SupportMultipleContent>k__BackingField
	bool ___U3CSupportMultipleContentU3Ek__BackingField_14;
};

// Newtonsoft.Json.JsonSerializer
struct JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59  : public RuntimeObject
{
	// Newtonsoft.Json.TypeNameHandling Newtonsoft.Json.JsonSerializer::_typeNameHandling
	int32_t ____typeNameHandling_0;
	// Newtonsoft.Json.TypeNameAssemblyFormatHandling Newtonsoft.Json.JsonSerializer::_typeNameAssemblyFormatHandling
	int32_t ____typeNameAssemblyFormatHandling_1;
	// Newtonsoft.Json.PreserveReferencesHandling Newtonsoft.Json.JsonSerializer::_preserveReferencesHandling
	int32_t ____preserveReferencesHandling_2;
	// Newtonsoft.Json.ReferenceLoopHandling Newtonsoft.Json.JsonSerializer::_referenceLoopHandling
	int32_t ____referenceLoopHandling_3;
	// Newtonsoft.Json.MissingMemberHandling Newtonsoft.Json.JsonSerializer::_missingMemberHandling
	int32_t ____missingMemberHandling_4;
	// Newtonsoft.Json.ObjectCreationHandling Newtonsoft.Json.JsonSerializer::_objectCreationHandling
	int32_t ____objectCreationHandling_5;
	// Newtonsoft.Json.NullValueHandling Newtonsoft.Json.JsonSerializer::_nullValueHandling
	int32_t ____nullValueHandling_6;
	// Newtonsoft.Json.DefaultValueHandling Newtonsoft.Json.JsonSerializer::_defaultValueHandling
	int32_t ____defaultValueHandling_7;
	// Newtonsoft.Json.ConstructorHandling Newtonsoft.Json.JsonSerializer::_constructorHandling
	int32_t ____constructorHandling_8;
	// Newtonsoft.Json.MetadataPropertyHandling Newtonsoft.Json.JsonSerializer::_metadataPropertyHandling
	int32_t ____metadataPropertyHandling_9;
	// Newtonsoft.Json.JsonConverterCollection Newtonsoft.Json.JsonSerializer::_converters
	JsonConverterCollection_t6EEC84565C08B14107276B5023CE9E978DFCDF89* ____converters_10;
	// Newtonsoft.Json.Serialization.IContractResolver Newtonsoft.Json.JsonSerializer::_contractResolver
	RuntimeObject* ____contractResolver_11;
	// Newtonsoft.Json.Serialization.ITraceWriter Newtonsoft.Json.JsonSerializer::_traceWriter
	RuntimeObject* ____traceWriter_12;
	// System.Collections.IEqualityComparer Newtonsoft.Json.JsonSerializer::_equalityComparer
	RuntimeObject* ____equalityComparer_13;
	// Newtonsoft.Json.Serialization.ISerializationBinder Newtonsoft.Json.JsonSerializer::_serializationBinder
	RuntimeObject* ____serializationBinder_14;
	// System.Runtime.Serialization.StreamingContext Newtonsoft.Json.JsonSerializer::_context
	StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ____context_15;
	// Newtonsoft.Json.Serialization.IReferenceResolver Newtonsoft.Json.JsonSerializer::_referenceResolver
	RuntimeObject* ____referenceResolver_16;
	// System.Nullable`1<Newtonsoft.Json.Formatting> Newtonsoft.Json.JsonSerializer::_formatting
	Nullable_1_tAEE2B9C53750E53F9B91B70967290720873E8D3E ____formatting_17;
	// System.Nullable`1<Newtonsoft.Json.DateFormatHandling> Newtonsoft.Json.JsonSerializer::_dateFormatHandling
	Nullable_1_t4776B8A4D0D52AA8BDCD45E6D7070659326453D2 ____dateFormatHandling_18;
	// System.Nullable`1<Newtonsoft.Json.DateTimeZoneHandling> Newtonsoft.Json.JsonSerializer::_dateTimeZoneHandling
	Nullable_1_tD88F7E37B65824D38D74608E576D1265E5A2D2B2 ____dateTimeZoneHandling_19;
	// System.Nullable`1<Newtonsoft.Json.DateParseHandling> Newtonsoft.Json.JsonSerializer::_dateParseHandling
	Nullable_1_tDC640D18A54CA8F0A3C74518CBC15D439C8FC228 ____dateParseHandling_20;
	// System.Nullable`1<Newtonsoft.Json.FloatFormatHandling> Newtonsoft.Json.JsonSerializer::_floatFormatHandling
	Nullable_1_tEAE8D5B59DCEB4F809A8A5F390EAAC18F266B822 ____floatFormatHandling_21;
	// System.Nullable`1<Newtonsoft.Json.FloatParseHandling> Newtonsoft.Json.JsonSerializer::_floatParseHandling
	Nullable_1_tC13211A32645AE3863530378A08BC45089EE419B ____floatParseHandling_22;
	// System.Nullable`1<Newtonsoft.Json.StringEscapeHandling> Newtonsoft.Json.JsonSerializer::_stringEscapeHandling
	Nullable_1_t61214A44C233A0B00A9F79E380485D79D5FAA7C6 ____stringEscapeHandling_23;
	// System.Globalization.CultureInfo Newtonsoft.Json.JsonSerializer::_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ____culture_24;
	// System.Nullable`1<System.Int32> Newtonsoft.Json.JsonSerializer::_maxDepth
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ____maxDepth_25;
	// System.Boolean Newtonsoft.Json.JsonSerializer::_maxDepthSet
	bool ____maxDepthSet_26;
	// System.Nullable`1<System.Boolean> Newtonsoft.Json.JsonSerializer::_checkAdditionalContent
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ____checkAdditionalContent_27;
	// System.String Newtonsoft.Json.JsonSerializer::_dateFormatString
	String_t* ____dateFormatString_28;
	// System.Boolean Newtonsoft.Json.JsonSerializer::_dateFormatStringSet
	bool ____dateFormatStringSet_29;
	// System.EventHandler`1<Newtonsoft.Json.Serialization.ErrorEventArgs> Newtonsoft.Json.JsonSerializer::Error
	EventHandler_1_t69462DFC2F2C8D7576BEE9D1F5BB6C2E55B2C380* ___Error_30;
};

// Newtonsoft.Json.JsonWriter
struct JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3  : public RuntimeObject
{
	// System.Collections.Generic.List`1<Newtonsoft.Json.JsonPosition> Newtonsoft.Json.JsonWriter::_stack
	List_1_t53E7DEFF45EC8B1D5AE04D4FC6284E617F0D79CB* ____stack_2;
	// Newtonsoft.Json.JsonPosition Newtonsoft.Json.JsonWriter::_currentPosition
	JsonPosition_t7788656A280615072710710E8C15D23285850E8E ____currentPosition_3;
	// Newtonsoft.Json.JsonWriter/State Newtonsoft.Json.JsonWriter::_currentState
	int32_t ____currentState_4;
	// Newtonsoft.Json.Formatting Newtonsoft.Json.JsonWriter::_formatting
	int32_t ____formatting_5;
	// System.Boolean Newtonsoft.Json.JsonWriter::<CloseOutput>k__BackingField
	bool ___U3CCloseOutputU3Ek__BackingField_6;
	// System.Boolean Newtonsoft.Json.JsonWriter::<AutoCompleteOnClose>k__BackingField
	bool ___U3CAutoCompleteOnCloseU3Ek__BackingField_7;
	// Newtonsoft.Json.DateFormatHandling Newtonsoft.Json.JsonWriter::_dateFormatHandling
	int32_t ____dateFormatHandling_8;
	// Newtonsoft.Json.DateTimeZoneHandling Newtonsoft.Json.JsonWriter::_dateTimeZoneHandling
	int32_t ____dateTimeZoneHandling_9;
	// Newtonsoft.Json.StringEscapeHandling Newtonsoft.Json.JsonWriter::_stringEscapeHandling
	int32_t ____stringEscapeHandling_10;
	// Newtonsoft.Json.FloatFormatHandling Newtonsoft.Json.JsonWriter::_floatFormatHandling
	int32_t ____floatFormatHandling_11;
	// System.String Newtonsoft.Json.JsonWriter::_dateFormatString
	String_t* ____dateFormatString_12;
	// System.Globalization.CultureInfo Newtonsoft.Json.JsonWriter::_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ____culture_13;
};

struct JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3_StaticFields
{
	// Newtonsoft.Json.JsonWriter/State[][] Newtonsoft.Json.JsonWriter::StateArray
	StateU5BU5DU5BU5D_tA12046738DA5F6289ABA74ED1C079ED07EE202ED* ___StateArray_0;
	// Newtonsoft.Json.JsonWriter/State[][] Newtonsoft.Json.JsonWriter::StateArrayTemplate
	StateU5BU5DU5BU5D_tA12046738DA5F6289ABA74ED1C079ED07EE202ED* ___StateArrayTemplate_1;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.Xml.Linq.XComment
struct XComment_t2FD9205AC70AF739D97E5CE8B1CC29459191F43D  : public XNode_t185C922661054AAD14F49676DD6F3CB10D652A30
{
	// System.String System.Xml.Linq.XComment::value
	String_t* ___value_3;
};

// System.Xml.Linq.XContainer
struct XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF  : public XNode_t185C922661054AAD14F49676DD6F3CB10D652A30
{
	// System.Object System.Xml.Linq.XContainer::content
	RuntimeObject* ___content_3;
};

// System.Xml.Linq.XDocumentType
struct XDocumentType_t195D491B418C3696FBCAEE34E53D734E0B53A817  : public XNode_t185C922661054AAD14F49676DD6F3CB10D652A30
{
	// System.String System.Xml.Linq.XDocumentType::_name
	String_t* ____name_3;
	// System.String System.Xml.Linq.XDocumentType::_publicId
	String_t* ____publicId_4;
	// System.String System.Xml.Linq.XDocumentType::_systemId
	String_t* ____systemId_5;
	// System.String System.Xml.Linq.XDocumentType::_internalSubset
	String_t* ____internalSubset_6;
};

// Newtonsoft.Json.Converters.XDocumentWrapper
struct XDocumentWrapper_t3C3117E449826BEB20F7BFB77214046EE4D86AD6  : public XContainerWrapper_t7B103CDF831C64B07E4BABE6307FB7D605328AF9
{
};

// Newtonsoft.Json.Converters.XElementWrapper
struct XElementWrapper_t15082EFC96DF60AC9ACF10A1D60C1E04207FCA61  : public XContainerWrapper_t7B103CDF831C64B07E4BABE6307FB7D605328AF9
{
	// System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode> Newtonsoft.Json.Converters.XElementWrapper::_attributes
	List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* ____attributes_2;
};

// System.Xml.Linq.XProcessingInstruction
struct XProcessingInstruction_t920C9022DAD590F61972E400D46FC1C443265795  : public XNode_t185C922661054AAD14F49676DD6F3CB10D652A30
{
	// System.String System.Xml.Linq.XProcessingInstruction::target
	String_t* ___target_3;
	// System.String System.Xml.Linq.XProcessingInstruction::data
	String_t* ___data_4;
};

// System.Xml.Linq.XText
struct XText_t006159E7F735736D41BBC0738FFB066A14B31AE2  : public XNode_t185C922661054AAD14F49676DD6F3CB10D652A30
{
	// System.String System.Xml.Linq.XText::text
	String_t* ___text_3;
};

// System.Xml.XmlCharacterData
struct XmlCharacterData_t95604E2FDB152E89A58F9D51414A2903012E758B  : public XmlLinkedNode_t640BF5D3FDAF0606665C3BAE565988A5014F1B9C
{
	// System.String System.Xml.XmlCharacterData::data
	String_t* ___data_2;
};

// System.Xml.XmlDeclaration
struct XmlDeclaration_tA04662FA58C306A24C864BDE73D1B410858E7A79  : public XmlLinkedNode_t640BF5D3FDAF0606665C3BAE565988A5014F1B9C
{
	// System.String System.Xml.XmlDeclaration::version
	String_t* ___version_2;
	// System.String System.Xml.XmlDeclaration::encoding
	String_t* ___encoding_3;
	// System.String System.Xml.XmlDeclaration::standalone
	String_t* ___standalone_4;
};

// System.Xml.XmlDocumentType
struct XmlDocumentType_tFD7379E45412FC2EBD65280ED3DE7A1C941A8D9E  : public XmlLinkedNode_t640BF5D3FDAF0606665C3BAE565988A5014F1B9C
{
	// System.String System.Xml.XmlDocumentType::name
	String_t* ___name_2;
	// System.String System.Xml.XmlDocumentType::publicId
	String_t* ___publicId_3;
	// System.String System.Xml.XmlDocumentType::systemId
	String_t* ___systemId_4;
	// System.String System.Xml.XmlDocumentType::internalSubset
	String_t* ___internalSubset_5;
	// System.Boolean System.Xml.XmlDocumentType::namespaces
	bool ___namespaces_6;
	// System.Xml.XmlNamedNodeMap System.Xml.XmlDocumentType::entities
	XmlNamedNodeMap_t13203D1B3861C62568AFFA1D644C04ABCBFC130C* ___entities_7;
	// System.Xml.XmlNamedNodeMap System.Xml.XmlDocumentType::notations
	XmlNamedNodeMap_t13203D1B3861C62568AFFA1D644C04ABCBFC130C* ___notations_8;
	// System.Xml.Schema.SchemaInfo System.Xml.XmlDocumentType::schemaInfo
	SchemaInfo_t42F4B1099B63BCF2D3BBF7F35A79AF6B90B0927E* ___schemaInfo_9;
};

// System.Xml.XmlElement
struct XmlElement_t9A08B533E9A6B3548A1DE35476186F7ECCDF6FF1  : public XmlLinkedNode_t640BF5D3FDAF0606665C3BAE565988A5014F1B9C
{
	// System.Xml.XmlName System.Xml.XmlElement::name
	XmlName_t0704430D24D202146901D342E34D878246E14F33* ___name_2;
	// System.Xml.XmlAttributeCollection System.Xml.XmlElement::attributes
	XmlAttributeCollection_tB0BA25B3C7E8D4BCF487C7107A9019632A7D85C0* ___attributes_3;
	// System.Xml.XmlLinkedNode System.Xml.XmlElement::lastChild
	XmlLinkedNode_t640BF5D3FDAF0606665C3BAE565988A5014F1B9C* ___lastChild_4;
};

// System.Xml.XmlNamedNodeMap
struct XmlNamedNodeMap_t13203D1B3861C62568AFFA1D644C04ABCBFC130C  : public RuntimeObject
{
	// System.Xml.XmlNode System.Xml.XmlNamedNodeMap::parent
	XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* ___parent_0;
	// System.Xml.XmlNamedNodeMap/SmallXmlNodeList System.Xml.XmlNamedNodeMap::nodes
	SmallXmlNodeList_tAF536F4BFCA26BF1B0E912818E921A3181D49EF0 ___nodes_1;
};

// System.Xml.XmlProcessingInstruction
struct XmlProcessingInstruction_t8182CD263F29029BCB56A5FBB720DEB0D51EA5A3  : public XmlLinkedNode_t640BF5D3FDAF0606665C3BAE565988A5014F1B9C
{
	// System.String System.Xml.XmlProcessingInstruction::target
	String_t* ___target_2;
	// System.String System.Xml.XmlProcessingInstruction::data
	String_t* ___data_3;
};

// Newtonsoft.Json.Bson.BsonReader
struct BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423  : public JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765
{
	// System.IO.BinaryReader Newtonsoft.Json.Bson.BsonReader::_reader
	BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ____reader_20;
	// System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonReader/ContainerContext> Newtonsoft.Json.Bson.BsonReader::_stack
	List_1_t944CCF3A156F251D4FD98B25EC08251DB21ADBC9* ____stack_21;
	// System.Byte[] Newtonsoft.Json.Bson.BsonReader::_byteBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____byteBuffer_22;
	// System.Char[] Newtonsoft.Json.Bson.BsonReader::_charBuffer
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____charBuffer_23;
	// Newtonsoft.Json.Bson.BsonType Newtonsoft.Json.Bson.BsonReader::_currentElementType
	int8_t ____currentElementType_24;
	// Newtonsoft.Json.Bson.BsonReader/BsonReaderState Newtonsoft.Json.Bson.BsonReader::_bsonReaderState
	int32_t ____bsonReaderState_25;
	// Newtonsoft.Json.Bson.BsonReader/ContainerContext Newtonsoft.Json.Bson.BsonReader::_currentContext
	ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* ____currentContext_26;
	// System.Boolean Newtonsoft.Json.Bson.BsonReader::_readRootValueAsArray
	bool ____readRootValueAsArray_27;
	// System.Boolean Newtonsoft.Json.Bson.BsonReader::_jsonNet35BinaryCompatibility
	bool ____jsonNet35BinaryCompatibility_28;
	// System.DateTimeKind Newtonsoft.Json.Bson.BsonReader::_dateTimeKindHandling
	int32_t ____dateTimeKindHandling_29;
};

struct BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_StaticFields
{
	// System.Byte[] Newtonsoft.Json.Bson.BsonReader::SeqRange1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___SeqRange1_16;
	// System.Byte[] Newtonsoft.Json.Bson.BsonReader::SeqRange2
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___SeqRange2_17;
	// System.Byte[] Newtonsoft.Json.Bson.BsonReader::SeqRange3
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___SeqRange3_18;
	// System.Byte[] Newtonsoft.Json.Bson.BsonReader::SeqRange4
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___SeqRange4_19;
};

// Newtonsoft.Json.Bson.BsonWriter
struct BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456  : public JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3
{
	// Newtonsoft.Json.Bson.BsonBinaryWriter Newtonsoft.Json.Bson.BsonWriter::_writer
	BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* ____writer_14;
	// Newtonsoft.Json.Bson.BsonToken Newtonsoft.Json.Bson.BsonWriter::_root
	BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* ____root_15;
	// Newtonsoft.Json.Bson.BsonToken Newtonsoft.Json.Bson.BsonWriter::_parent
	BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* ____parent_16;
	// System.String Newtonsoft.Json.Bson.BsonWriter::_propertyName
	String_t* ____propertyName_17;
};

// Newtonsoft.Json.JsonException
struct JsonException_tFFE4BB54605E1573CD957C3A40BEC5571CC386BD  : public Exception_t
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

// System.Xml.Linq.XCData
struct XCData_tCE86E0709C47284A8D0A6CBE09CDFD6B8609BF3B  : public XText_t006159E7F735736D41BBC0738FFB066A14B31AE2
{
};

// System.Xml.Linq.XDocument
struct XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1  : public XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF
{
	// System.Xml.Linq.XDeclaration System.Xml.Linq.XDocument::_declaration
	XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990* ____declaration_4;
};

// System.Xml.Linq.XElement
struct XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909  : public XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF
{
	// System.Xml.Linq.XName System.Xml.Linq.XElement::name
	XName_tAF6D9533A7D11AC27118F656985AC325C2A50E5C* ___name_4;
	// System.Xml.Linq.XAttribute System.Xml.Linq.XElement::lastAttr
	XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF* ___lastAttr_5;
};

// System.Xml.XmlAttributeCollection
struct XmlAttributeCollection_tB0BA25B3C7E8D4BCF487C7107A9019632A7D85C0  : public XmlNamedNodeMap_t13203D1B3861C62568AFFA1D644C04ABCBFC130C
{
};

// System.Xml.XmlCDataSection
struct XmlCDataSection_t2D6B8A6CFF3ACB0BD27368A8D5A56FD674B1E8CA  : public XmlCharacterData_t95604E2FDB152E89A58F9D51414A2903012E758B
{
};

// System.Xml.XmlComment
struct XmlComment_tD3C4E7E2E90A8CA25C46D2616BCF138D40072AD9  : public XmlCharacterData_t95604E2FDB152E89A58F9D51414A2903012E758B
{
};

// System.Xml.XmlSignificantWhitespace
struct XmlSignificantWhitespace_t43EAA36EF021A2B6DBD9FA49B85501A43BE9CBCE  : public XmlCharacterData_t95604E2FDB152E89A58F9D51414A2903012E758B
{
};

// System.Xml.XmlText
struct XmlText_t30AEB94C64DEFEE255D907869C96FDD25C6E812A  : public XmlCharacterData_t95604E2FDB152E89A58F9D51414A2903012E758B
{
};

// System.Xml.XmlWhitespace
struct XmlWhitespace_t19767FEBC987857ADED0437FC1554F86E7D00D24  : public XmlCharacterData_t95604E2FDB152E89A58F9D51414A2903012E758B
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.IO.IOException
struct IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// Newtonsoft.Json.JsonReaderException
struct JsonReaderException_t44F3F6F2980FC806231B19A65F37D1E034B218DA  : public JsonException_tFFE4BB54605E1573CD957C3A40BEC5571CC386BD
{
	// System.Int32 Newtonsoft.Json.JsonReaderException::<LineNumber>k__BackingField
	int32_t ___U3CLineNumberU3Ek__BackingField_18;
	// System.Int32 Newtonsoft.Json.JsonReaderException::<LinePosition>k__BackingField
	int32_t ___U3CLinePositionU3Ek__BackingField_19;
	// System.String Newtonsoft.Json.JsonReaderException::<Path>k__BackingField
	String_t* ___U3CPathU3Ek__BackingField_20;
};

// Newtonsoft.Json.JsonSerializationException
struct JsonSerializationException_t00F36890DFAC04F2FDE779151340B9C5563612EC  : public JsonException_tFFE4BB54605E1573CD957C3A40BEC5571CC386BD
{
	// System.Int32 Newtonsoft.Json.JsonSerializationException::<LineNumber>k__BackingField
	int32_t ___U3CLineNumberU3Ek__BackingField_18;
	// System.Int32 Newtonsoft.Json.JsonSerializationException::<LinePosition>k__BackingField
	int32_t ___U3CLinePositionU3Ek__BackingField_19;
	// System.String Newtonsoft.Json.JsonSerializationException::<Path>k__BackingField
	String_t* ___U3CPathU3Ek__BackingField_20;
};

// Newtonsoft.Json.JsonWriterException
struct JsonWriterException_tF13EC07A2159B2C5951971D4AED5A195DEBE8AAA  : public JsonException_tFFE4BB54605E1573CD957C3A40BEC5571CC386BD
{
	// System.String Newtonsoft.Json.JsonWriterException::<Path>k__BackingField
	String_t* ___U3CPathU3Ek__BackingField_18;
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	// System.Object System.ArgumentOutOfRangeException::_actualValue
	RuntimeObject* ____actualValue_19;
};

// System.IO.EndOfStreamException
struct EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028  : public IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910
{
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
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
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


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m9C9559248941FED50561DB029D55DF08DEF3B094_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, RuntimeObject* ___item1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Reverse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m3A8BEF4194B03E75859F94B4EE2F54045AF98708_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Int32>::GetValueOrDefault()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Int32>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_gshared (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.String System.Nullable`1<System.Int32>::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Nullable_1_ToString_m5FDC0CBE068DB2893454257CE6E29846D47B3038_gshared (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;

// System.Void Newtonsoft.Json.Converters.XmlNodeWrapper::.ctor(System.Xml.XmlNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeWrapper__ctor_m73806A21D3A81678F6099B62E80F7B6549D56D17 (XmlNodeWrapper_tE399A7CC58A6C5CE54C6EFE0D075A7B88C71B991* __this, XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* ___node0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Converters.XmlDeclarationWrapper::.ctor(System.Xml.XmlDeclaration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlDeclarationWrapper__ctor_m4EAEA1BBD6AA3E66D3DBF18613BDCC12294F9529 (XmlDeclarationWrapper_t9167E036A5BE1475233675EC025E96DCA3CC1945* __this, XmlDeclaration_tA04662FA58C306A24C864BDE73D1B410858E7A79* ___declaration0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Converters.XmlDocumentTypeWrapper::.ctor(System.Xml.XmlDocumentType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlDocumentTypeWrapper__ctor_m127F27D80D29C326F622FFD70CA1B3549F90C78D (XmlDocumentTypeWrapper_t8E470E157344CAE69E9551F6D0826C0E4038C4ED* __this, XmlDocumentType_tFD7379E45412FC2EBD65280ED3DE7A1C941A8D9E* ___documentType0, const RuntimeMethod* method) ;
// System.Xml.XmlElement System.Xml.XmlDocument::CreateElement(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlElement_t9A08B533E9A6B3548A1DE35476186F7ECCDF6FF1* XmlDocument_CreateElement_m4CFE00BFBBAE8805B2E5B7566E7C896334092E93 (XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Converters.XmlElementWrapper::.ctor(System.Xml.XmlElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlElementWrapper__ctor_m5EA54DDEBFA94B7DF7907BF8BCAD9A01C0AAE237 (XmlElementWrapper_tFFCFF4F15C008DF0469426DFE31B6A304DDEEC20* __this, XmlElement_t9A08B533E9A6B3548A1DE35476186F7ECCDF6FF1* ___element0, const RuntimeMethod* method) ;
// System.Xml.XmlElement System.Xml.XmlDocument::CreateElement(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlElement_t9A08B533E9A6B3548A1DE35476186F7ECCDF6FF1* XmlDocument_CreateElement_m4180DF31B3B4CD8516B7881494D99720648BD95B (XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* __this, String_t* ___qualifiedName0, String_t* ___namespaceURI1, const RuntimeMethod* method) ;
// System.Xml.XmlAttribute System.Xml.XmlDocument::CreateAttribute(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlAttribute_t4B6CC461196FBF5CC9F777E74CC82C98E0CA9D18* XmlDocument_CreateAttribute_m42F583C11D788DB6E7B1C2EFAF112CB0C6118D06 (XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Converters.XmlNodeWrapper::set_Value(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeWrapper_set_Value_m978C9C12AC1A81119D1DA28B143406231E41F41E (XmlNodeWrapper_tE399A7CC58A6C5CE54C6EFE0D075A7B88C71B991* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Xml.XmlAttribute System.Xml.XmlDocument::CreateAttribute(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlAttribute_t4B6CC461196FBF5CC9F777E74CC82C98E0CA9D18* XmlDocument_CreateAttribute_m5DC489B6B051905264E2FD30A58CD380337D2F18 (XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* __this, String_t* ___qualifiedName0, String_t* ___namespaceURI1, const RuntimeMethod* method) ;
// System.Xml.XmlElement System.Xml.XmlDocument::get_DocumentElement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlElement_t9A08B533E9A6B3548A1DE35476186F7ECCDF6FF1* XmlDocument_get_DocumentElement_mE87523DCD2D59F8BA6175DBA01D70133E202A2C8 (XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* __this, const RuntimeMethod* method) ;
// System.Object Newtonsoft.Json.Converters.XmlNodeWrapper::get_WrappedNode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* XmlNodeWrapper_get_WrappedNode_m95E187562E167E13524197070157B15EE0ABFDFF_inline (XmlNodeWrapper_tE399A7CC58A6C5CE54C6EFE0D075A7B88C71B991* __this, const RuntimeMethod* method) ;
// System.Boolean System.Xml.XmlElement::get_IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlElement_get_IsEmpty_m3FD670ABE3BE49AF263E1B75875FA606CC671B5F (XmlElement_t9A08B533E9A6B3548A1DE35476186F7ECCDF6FF1* __this, const RuntimeMethod* method) ;
// System.String System.Xml.XmlDeclaration::get_Version()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XmlDeclaration_get_Version_m50261F1E46B645E69A99504F494FFD3BF915E633_inline (XmlDeclaration_tA04662FA58C306A24C864BDE73D1B410858E7A79* __this, const RuntimeMethod* method) ;
// System.String System.Xml.XmlDeclaration::get_Encoding()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XmlDeclaration_get_Encoding_m09D89DCD8457C62A6E49B9506A65A271DDBD011F_inline (XmlDeclaration_tA04662FA58C306A24C864BDE73D1B410858E7A79* __this, const RuntimeMethod* method) ;
// System.Void System.Xml.XmlDeclaration::set_Encoding(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlDeclaration_set_Encoding_m743178C17460B204CFFEFFC0960A77E4A6289A8B (XmlDeclaration_tA04662FA58C306A24C864BDE73D1B410858E7A79* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.Xml.XmlDeclaration::get_Standalone()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XmlDeclaration_get_Standalone_m46CC1833EE3C478318FF865E98A6899E440DDC6C_inline (XmlDeclaration_tA04662FA58C306A24C864BDE73D1B410858E7A79* __this, const RuntimeMethod* method) ;
// System.Void System.Xml.XmlDeclaration::set_Standalone(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlDeclaration_set_Standalone_m867389C9FBF0064E3FDA7EBDEAD4CF30E84F49C2 (XmlDeclaration_tA04662FA58C306A24C864BDE73D1B410858E7A79* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.Xml.XmlDocumentType::get_SystemId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XmlDocumentType_get_SystemId_m17B225C509C0F5A4ECBB838AA81D15DED4016909_inline (XmlDocumentType_tFD7379E45412FC2EBD65280ED3DE7A1C941A8D9E* __this, const RuntimeMethod* method) ;
// System.String System.Xml.XmlDocumentType::get_PublicId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XmlDocumentType_get_PublicId_m9E81FAF2D0AA9DC847D118813CBEB085F0CE1955_inline (XmlDocumentType_tFD7379E45412FC2EBD65280ED3DE7A1C941A8D9E* __this, const RuntimeMethod* method) ;
// System.String System.Xml.XmlDocumentType::get_InternalSubset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XmlDocumentType_get_InternalSubset_mBD8D585ED0401EE1FC02F6FD5445E2109B083FEF_inline (XmlDocumentType_tFD7379E45412FC2EBD65280ED3DE7A1C941A8D9E* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode>::.ctor(System.Int32)
inline void List_1__ctor_m389274B90D96CA39D060BAE1C5A40939A32994D0 (List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E*, int32_t, const RuntimeMethod*))List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared)(__this, ___capacity0, method);
}
// Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.XmlNodeWrapper::WrapNode(System.Xml.XmlNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlNodeWrapper_WrapNode_m45C8C60B81EA49FF73F8BB1F18EE8E4E8DE52DB4 (XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* ___node0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode>::Add(T)
inline void List_1_Add_m398158DFE48F62CF2C479A46F0D6C5A6E3206CF2_inline (List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E*, RuntimeObject*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Boolean Newtonsoft.Json.Converters.XmlNodeWrapper::get_HasAttributes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlNodeWrapper_get_HasAttributes_mF9098879F629F6A9CF8509A64D366312DD092FCA (XmlNodeWrapper_tE399A7CC58A6C5CE54C6EFE0D075A7B88C71B991* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Converters.XObjectWrapper::.ctor(System.Xml.Linq.XObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XObjectWrapper__ctor_m24EB638F7E591225CA536A66FEE9B6EE6D7E8330 (XObjectWrapper_t1932FA32F64A100673DEC2063AF00052A6CE1B16* __this, XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29* ___xmlObject0, const RuntimeMethod* method) ;
// System.Xml.Linq.XDeclaration Newtonsoft.Json.Converters.XDeclarationWrapper::get_Declaration()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990* XDeclarationWrapper_get_Declaration_mD7686F2EC3F760FD0AECC4FC6DD5E21F9F888437_inline (XDeclarationWrapper_t30D8572D5BECE3E49B4F5BF8C17EE1A37A89AAE9* __this, const RuntimeMethod* method) ;
// System.String System.Xml.Linq.XDeclaration::get_Version()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XDeclaration_get_Version_m675EDE875CAF23C6801015479393247D2B8A05E7_inline (XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990* __this, const RuntimeMethod* method) ;
// System.String System.Xml.Linq.XDeclaration::get_Encoding()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XDeclaration_get_Encoding_mA27D7E3A1673EE7D2A52F7D93A17FD9A33C4D5E0_inline (XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990* __this, const RuntimeMethod* method) ;
// System.Void System.Xml.Linq.XDeclaration::set_Encoding(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XDeclaration_set_Encoding_m13C45B72D33CFE9CCBA3450D0D3DF6A56D46CCD9_inline (XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.Xml.Linq.XDeclaration::get_Standalone()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XDeclaration_get_Standalone_mCC775D6A93C6ED7C87BFFA4E3565675B4139CE7D_inline (XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990* __this, const RuntimeMethod* method) ;
// System.Void System.Xml.Linq.XDeclaration::set_Standalone(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XDeclaration_set_Standalone_mBFF62587A08487D5C7332D76AD4D3C55FB81BF33_inline (XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.Xml.Linq.XDocumentType::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XDocumentType_get_Name_m297D10AE558AA29F11E05CCAEF2D74C43F980AE9_inline (XDocumentType_t195D491B418C3696FBCAEE34E53D734E0B53A817* __this, const RuntimeMethod* method) ;
// System.String System.Xml.Linq.XDocumentType::get_SystemId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XDocumentType_get_SystemId_m864BD298982BDA1D5B9C4DB6CB904B78FAFA04A7_inline (XDocumentType_t195D491B418C3696FBCAEE34E53D734E0B53A817* __this, const RuntimeMethod* method) ;
// System.String System.Xml.Linq.XDocumentType::get_PublicId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XDocumentType_get_PublicId_mAFD124B111C0B665C14A2078EE4E30C28F1854FC_inline (XDocumentType_t195D491B418C3696FBCAEE34E53D734E0B53A817* __this, const RuntimeMethod* method) ;
// System.String System.Xml.Linq.XDocumentType::get_InternalSubset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XDocumentType_get_InternalSubset_m6914F698B32A68A55C15AD4B971FEBFA85183DA1_inline (XDocumentType_t195D491B418C3696FBCAEE34E53D734E0B53A817* __this, const RuntimeMethod* method) ;
// System.Object Newtonsoft.Json.Converters.XObjectWrapper::get_WrappedNode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* XObjectWrapper_get_WrappedNode_m3CA9623838D4D4A96DCF882FC3C592D3D64D7573_inline (XObjectWrapper_t1932FA32F64A100673DEC2063AF00052A6CE1B16* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Converters.XContainerWrapper::.ctor(System.Xml.Linq.XContainer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XContainerWrapper__ctor_mDA5B56465A0FE70773B861EC590E47653923DFC4 (XContainerWrapper_t7B103CDF831C64B07E4BABE6307FB7D605328AF9* __this, XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF* ___container0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode> Newtonsoft.Json.Converters.XContainerWrapper::get_ChildNodes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* XContainerWrapper_get_ChildNodes_mC85E0A4FF1522B40B19AEE06B034DE7C52EF1CA4 (XContainerWrapper_t7B103CDF831C64B07E4BABE6307FB7D605328AF9* __this, const RuntimeMethod* method) ;
// System.Xml.Linq.XDocument Newtonsoft.Json.Converters.XDocumentWrapper::get_Document()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1* XDocumentWrapper_get_Document_m368F6051580AEF8FBF78877386D469E1CAD779B6 (XDocumentWrapper_t3C3117E449826BEB20F7BFB77214046EE4D86AD6* __this, const RuntimeMethod* method) ;
// System.Xml.Linq.XDeclaration System.Xml.Linq.XDocument::get_Declaration()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990* XDocument_get_Declaration_m54F6FE679582E4CC7FBC6FD3565260BC308D98CA_inline (XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode>::get_Count()
inline int32_t List_1_get_Count_m5101BD6DFA5618FEB8E0D6CCF45C06C872577D0B_inline (List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode>::get_Item(System.Int32)
inline RuntimeObject* List_1_get_Item_m49F224E7B5DC4879C5A553E58943A24FA8E42815 (List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void Newtonsoft.Json.Converters.XDeclarationWrapper::.ctor(System.Xml.Linq.XDeclaration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XDeclarationWrapper__ctor_mC9E3C1C1550DD2576A03D5CCD4029BD8C64A18DF (XDeclarationWrapper_t30D8572D5BECE3E49B4F5BF8C17EE1A37A89AAE9* __this, XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990* ___declaration0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode>::Insert(System.Int32,T)
inline void List_1_Insert_mB42244832CF5462EF2726D9EBEB081FE9426C926 (List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* __this, int32_t ___index0, RuntimeObject* ___item1, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E*, int32_t, RuntimeObject*, const RuntimeMethod*))List_1_Insert_m9C9559248941FED50561DB029D55DF08DEF3B094_gshared)(__this, ___index0, ___item1, method);
}
// System.Boolean Newtonsoft.Json.Converters.XContainerWrapper::get_HasChildNodes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XContainerWrapper_get_HasChildNodes_m93CCC01BDA9B4F58AD7877AC2A7C17E4E68172E8 (XContainerWrapper_t7B103CDF831C64B07E4BABE6307FB7D605328AF9* __this, const RuntimeMethod* method) ;
// System.Void System.Xml.Linq.XComment::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XComment__ctor_mF1891F18BA45A4D593BF20DA9DC98AC2B2DE8020 (XComment_t2FD9205AC70AF739D97E5CE8B1CC29459191F43D* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Xml.Linq.XText::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XText__ctor_m30153536CE7D619BF5609B3D3453109B3ECDD28D (XText_t006159E7F735736D41BBC0738FFB066A14B31AE2* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Xml.Linq.XCData::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XCData__ctor_m649661856E9B7BA8D204EB3FB1CE80D76998D416 (XCData_tCE86E0709C47284A8D0A6CBE09CDFD6B8609BF3B* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Xml.Linq.XDeclaration::.ctor(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XDeclaration__ctor_m8107AC3F844468E3C2A20075B14A09D24A3768BF (XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990* __this, String_t* ___version0, String_t* ___encoding1, String_t* ___standalone2, const RuntimeMethod* method) ;
// System.Void System.Xml.Linq.XDocumentType::.ctor(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XDocumentType__ctor_mD192CD368E807CA6B4AB0B5094A903CBFA37CA46 (XDocumentType_t195D491B418C3696FBCAEE34E53D734E0B53A817* __this, String_t* ___name0, String_t* ___publicId1, String_t* ___systemId2, String_t* ___internalSubset3, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Converters.XDocumentTypeWrapper::.ctor(System.Xml.Linq.XDocumentType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XDocumentTypeWrapper__ctor_m448FB77B151C12873112FF5CC9B314E9DB8F6117 (XDocumentTypeWrapper_tE70B54A200381660327029F12CDB902FF2EF26DA* __this, XDocumentType_t195D491B418C3696FBCAEE34E53D734E0B53A817* ___documentType0, const RuntimeMethod* method) ;
// System.Void System.Xml.Linq.XProcessingInstruction::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XProcessingInstruction__ctor_m9D42D9DF59625543003025C09E1AED9659A1E862 (XProcessingInstruction_t920C9022DAD590F61972E400D46FC1C443265795* __this, String_t* ___target0, String_t* ___data1, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Converters.XProcessingInstructionWrapper::.ctor(System.Xml.Linq.XProcessingInstruction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XProcessingInstructionWrapper__ctor_mF6EF6425C7E1A9D9F46CB988F8C9E542ED2153CE (XProcessingInstructionWrapper_t73B2F6F52C84FBAB7AC112F1262C085959ED6D80* __this, XProcessingInstruction_t920C9022DAD590F61972E400D46FC1C443265795* ___processingInstruction0, const RuntimeMethod* method) ;
// System.Xml.Linq.XName System.Xml.Linq.XName::op_Implicit(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XName_tAF6D9533A7D11AC27118F656985AC325C2A50E5C* XName_op_Implicit_m3A259E71F7D76AA504349A98DAE3C47D7A943736 (String_t* ___expandedName0, const RuntimeMethod* method) ;
// System.Void System.Xml.Linq.XElement::.ctor(System.Xml.Linq.XName)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XElement__ctor_mFDCA9C62F1562D0E005F47D0298A49C57DBC126C (XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* __this, XName_tAF6D9533A7D11AC27118F656985AC325C2A50E5C* ___name0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Converters.XElementWrapper::.ctor(System.Xml.Linq.XElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XElementWrapper__ctor_mADC48A43A4BBD8C2FEBF88F4A45ED0CA69FAEC7F (XElementWrapper_t15082EFC96DF60AC9ACF10A1D60C1E04207FCA61* __this, XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* ___element0, const RuntimeMethod* method) ;
// System.String Newtonsoft.Json.Utilities.MiscellaneousUtils::GetLocalName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MiscellaneousUtils_GetLocalName_m6104B0EF1BD60B135EEC76A96AFF567D02394CC7 (String_t* ___qualifiedName0, const RuntimeMethod* method) ;
// System.Xml.Linq.XName System.Xml.Linq.XName::Get(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XName_tAF6D9533A7D11AC27118F656985AC325C2A50E5C* XName_Get_mECF7FD66C88749DF760999F9C6F506BA9A0D0373 (String_t* ___localName0, String_t* ___namespaceName1, const RuntimeMethod* method) ;
// System.Void System.Xml.Linq.XAttribute::.ctor(System.Xml.Linq.XName,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XAttribute__ctor_m913E6ED815250651BF84B13AE1C1B79C6C7F9CE0 (XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF* __this, XName_tAF6D9533A7D11AC27118F656985AC325C2A50E5C* ___name0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Converters.XAttributeWrapper::.ctor(System.Xml.Linq.XAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XAttributeWrapper__ctor_mCD158BF6A02EA1460BD22E3C99816A3308E2DC39 (XAttributeWrapper_t1FC7334561AD249FF39775D06CEF7BCECEBD9547* __this, XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF* ___attribute0, const RuntimeMethod* method) ;
// System.Xml.Linq.XElement System.Xml.Linq.XDocument::get_Root()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* XDocument_get_Root_mB2847BD75F5350D1D795E2A2691BF9CB210300C8 (XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1* __this, const RuntimeMethod* method) ;
// System.Void System.Xml.Linq.XDocument::set_Declaration(System.Xml.Linq.XDeclaration)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XDocument_set_Declaration_m3DAB9857DC323A55ABA6F973614AABE5FB59A672_inline (XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1* __this, XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990* ___value0, const RuntimeMethod* method) ;
// Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.XContainerWrapper::AppendChild(Newtonsoft.Json.Converters.IXmlNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XContainerWrapper_AppendChild_mD0C76048C57DBC7BE2A08BC215761BEF2552BC42 (XContainerWrapper_t7B103CDF831C64B07E4BABE6307FB7D605328AF9* __this, RuntimeObject* ___newChild0, const RuntimeMethod* method) ;
// System.Xml.Linq.XText Newtonsoft.Json.Converters.XTextWrapper::get_Text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XText_t006159E7F735736D41BBC0738FFB066A14B31AE2* XTextWrapper_get_Text_m15F65133CFB2B8E2F1AFBFE1EE9829669C3EF587 (XTextWrapper_t54304AAC4CEF7C32A60F7D6519B28810027EC797* __this, const RuntimeMethod* method) ;
// System.String System.Xml.Linq.XText::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XText_get_Value_m5B2A033755DE27DEC73860B9E94AA41BB55E208C_inline (XText_t006159E7F735736D41BBC0738FFB066A14B31AE2* __this, const RuntimeMethod* method) ;
// System.Void System.Xml.Linq.XText::set_Value(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XText_set_Value_m285A62B03AEFA17C99B9637F5E9BD62A5E707C38 (XText_t006159E7F735736D41BBC0738FFB066A14B31AE2* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Xml.Linq.XElement System.Xml.Linq.XObject::get_Parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* XObject_get_Parent_m192B7F82C3DF6A43672AD9C61B704A40DCA0213C (XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29* __this, const RuntimeMethod* method) ;
// Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.XContainerWrapper::WrapNode(System.Xml.Linq.XObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XContainerWrapper_WrapNode_m45080E6A0D0A531566B9B6B20B75328E5AD91CBA (XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29* ___node0, const RuntimeMethod* method) ;
// System.Xml.Linq.XComment Newtonsoft.Json.Converters.XCommentWrapper::get_Text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XComment_t2FD9205AC70AF739D97E5CE8B1CC29459191F43D* XCommentWrapper_get_Text_mF0823EAF847E1268D50A6E4D0345828B2E2C7B22 (XCommentWrapper_t1BFE83CA1648036FAD8B8C6E79806055D34F2782* __this, const RuntimeMethod* method) ;
// System.String System.Xml.Linq.XComment::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XComment_get_Value_mD2D3D9900752AD9FA019947C965FF6FAF2B3E7DA_inline (XComment_t2FD9205AC70AF739D97E5CE8B1CC29459191F43D* __this, const RuntimeMethod* method) ;
// System.Void System.Xml.Linq.XComment::set_Value(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XComment_set_Value_m6D36A232DE1A2E3C39E0F54F6A8078AECD7FE375 (XComment_t2FD9205AC70AF739D97E5CE8B1CC29459191F43D* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Xml.Linq.XProcessingInstruction Newtonsoft.Json.Converters.XProcessingInstructionWrapper::get_ProcessingInstruction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XProcessingInstruction_t920C9022DAD590F61972E400D46FC1C443265795* XProcessingInstructionWrapper_get_ProcessingInstruction_m465CA1E4A90DC9B2D5952C18B36D31BBC4FE9F83 (XProcessingInstructionWrapper_t73B2F6F52C84FBAB7AC112F1262C085959ED6D80* __this, const RuntimeMethod* method) ;
// System.String System.Xml.Linq.XProcessingInstruction::get_Target()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XProcessingInstruction_get_Target_mBB98BD38B91EBDC03558F4990591BE33FC1EB0DE_inline (XProcessingInstruction_t920C9022DAD590F61972E400D46FC1C443265795* __this, const RuntimeMethod* method) ;
// System.String System.Xml.Linq.XProcessingInstruction::get_Data()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XProcessingInstruction_get_Data_mF06C89FCF9F580497E3B59331676AFC9AA3F416B_inline (XProcessingInstruction_t920C9022DAD590F61972E400D46FC1C443265795* __this, const RuntimeMethod* method) ;
// System.Void System.Xml.Linq.XProcessingInstruction::set_Data(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XProcessingInstruction_set_Data_m6E09DD3B0921B4C9C342471380541E710F8F8714 (XProcessingInstruction_t920C9022DAD590F61972E400D46FC1C443265795* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode>::.ctor()
inline void List_1__ctor_m99AF43FA43C38A915F0A8AF9F07EFF9D3183EA37 (List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Xml.Linq.XContainer Newtonsoft.Json.Converters.XContainerWrapper::get_Container()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF* XContainerWrapper_get_Container_mE8D578EC87F352A68CADF4E01DFAD5C242BFEDE6 (XContainerWrapper_t7B103CDF831C64B07E4BABE6307FB7D605328AF9* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XNode> System.Xml.Linq.XContainer::Nodes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XContainer_Nodes_mBB3D95BB437752701F9A687E56EA226C0F27EFE4 (XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF* __this, const RuntimeMethod* method) ;
// System.Xml.Linq.XNode System.Xml.Linq.XContainer::get_LastNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XNode_t185C922661054AAD14F49676DD6F3CB10D652A30* XContainer_get_LastNode_mA0896FBB61341D138E2F48F032D6C8169DEEED5E (XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Converters.XDocumentWrapper::.ctor(System.Xml.Linq.XDocument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XDocumentWrapper__ctor_mE05A6619DC930C9ABB32122C06DC694533611BDB (XDocumentWrapper_t3C3117E449826BEB20F7BFB77214046EE4D86AD6* __this, XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1* ___document0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Converters.XTextWrapper::.ctor(System.Xml.Linq.XText)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XTextWrapper__ctor_m98B8EFBEC0CA0A43C328B86120E043D5A4FE8222 (XTextWrapper_t54304AAC4CEF7C32A60F7D6519B28810027EC797* __this, XText_t006159E7F735736D41BBC0738FFB066A14B31AE2* ___text0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Converters.XCommentWrapper::.ctor(System.Xml.Linq.XComment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XCommentWrapper__ctor_m8DA2766F6E2CDC00FA2CF73EAAF21B30AFCD80B1 (XCommentWrapper_t1BFE83CA1648036FAD8B8C6E79806055D34F2782* __this, XComment_t2FD9205AC70AF739D97E5CE8B1CC29459191F43D* ___text0, const RuntimeMethod* method) ;
// System.Void System.Xml.Linq.XContainer::Add(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XContainer_Add_m26111A020919619F03525ED30091D4501090075B (XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF* __this, RuntimeObject* ___content0, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, const RuntimeMethod* method) ;
// System.Xml.Linq.XAttribute Newtonsoft.Json.Converters.XAttributeWrapper::get_Attribute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF* XAttributeWrapper_get_Attribute_m64F72E3BA361213F069AF1897D47A9586F6FA2E6 (XAttributeWrapper_t1FC7334561AD249FF39775D06CEF7BCECEBD9547* __this, const RuntimeMethod* method) ;
// System.String System.Xml.Linq.XAttribute::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XAttribute_get_Value_mDCE15378AC161DF20094EF77EFF017A6F6766EB1_inline (XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF* __this, const RuntimeMethod* method) ;
// System.Void System.Xml.Linq.XAttribute::set_Value(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XAttribute_set_Value_m6BB4BE5ED1708B0C3EB39A38DC36E8FE7BAA6C4C (XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Xml.Linq.XName System.Xml.Linq.XAttribute::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XName_tAF6D9533A7D11AC27118F656985AC325C2A50E5C* XAttribute_get_Name_m5EB28279BB8BB19266997CB15733BD72CFB1DCB1_inline (XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF* __this, const RuntimeMethod* method) ;
// System.String System.Xml.Linq.XName::get_LocalName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XName_get_LocalName_m4CA50C151ADB8183972EA556868148AF0F5BED75_inline (XName_tAF6D9533A7D11AC27118F656985AC325C2A50E5C* __this, const RuntimeMethod* method) ;
// System.String System.Xml.Linq.XName::get_NamespaceName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XName_get_NamespaceName_mBEAFAB116BBDFE5B13EE2672C6C9DB3E58D257D3 (XName_tAF6D9533A7D11AC27118F656985AC325C2A50E5C* __this, const RuntimeMethod* method) ;
// System.Xml.Linq.XElement Newtonsoft.Json.Converters.XElementWrapper::get_Element()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* XElementWrapper_get_Element_mCE45E811C472BF01E89449EAD91DB4C37B5B2074 (XElementWrapper_t15082EFC96DF60AC9ACF10A1D60C1E04207FCA61* __this, const RuntimeMethod* method) ;
// System.Boolean System.Xml.Linq.XElement::get_HasAttributes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XElement_get_HasAttributes_m5ACE856A8490A467C7B9F7EC29D37147E6D4B022 (XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* __this, const RuntimeMethod* method) ;
// System.Boolean Newtonsoft.Json.Converters.XElementWrapper::HasImplicitNamespaceAttribute(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XElementWrapper_HasImplicitNamespaceAttribute_mDC0EE4D07517BE0CC56DEBEDD9B968594E5379DB (XElementWrapper_t15082EFC96DF60AC9ACF10A1D60C1E04207FCA61* __this, String_t* ___namespaceUri0, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XAttribute> System.Xml.Linq.XElement::Attributes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XElement_Attributes_m6B330A71FCAFA7A746FF494CC45F8B757F2CEF37 (XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* __this, const RuntimeMethod* method) ;
// System.Boolean Newtonsoft.Json.Utilities.StringUtils::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringUtils_IsNullOrEmpty_mDB5E4B38C6134F72E602D16501AF88B58C3C67BA (String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.String Newtonsoft.Json.Converters.XElementWrapper::GetPrefixOfNamespace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XElementWrapper_GetPrefixOfNamespace_m6E8DA9B2D4BAF02CD2660213C9CA4405575F1D19 (XElementWrapper_t15082EFC96DF60AC9ACF10A1D60C1E04207FCA61* __this, String_t* ___namespaceUri0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.String System.Xml.Linq.XElement::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XElement_get_Value_mC49BD0D0A616BD26B1B8E2D33D2E22D2F5A667BA (XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* __this, const RuntimeMethod* method) ;
// System.Void System.Xml.Linq.XElement::set_Value(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XElement_set_Value_mC305400046C92E8072E180C50982C6C6EEF98F66 (XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Xml.Linq.XName System.Xml.Linq.XElement::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XName_tAF6D9533A7D11AC27118F656985AC325C2A50E5C* XElement_get_Name_mAF691F0AFE4F732FE836AEAC566536C1231AA74D_inline (XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* __this, const RuntimeMethod* method) ;
// System.Xml.Linq.XNamespace System.Xml.Linq.XNamespace::op_Implicit(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XNamespace_t86B6F8515F5E20D387B83EBDE0890C4559A4012C* XNamespace_op_Implicit_m82CA31E66BE67924ED340B6CF69B6DF3E8FAC7DC (String_t* ___namespaceName0, const RuntimeMethod* method) ;
// System.String System.Xml.Linq.XElement::GetPrefixOfNamespace(System.Xml.Linq.XNamespace)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XElement_GetPrefixOfNamespace_mD293E0A204AED396C6768157226CBC6A72BFAD11 (XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* __this, XNamespace_t86B6F8515F5E20D387B83EBDE0890C4559A4012C* ___ns0, const RuntimeMethod* method) ;
// System.Boolean System.Xml.Linq.XElement::get_IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XElement_get_IsEmpty_m4451FEC389D90F236A5537E14D0638D40C44D049 (XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* __this, const RuntimeMethod* method) ;
// Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.XmlNodeConverter::WrapXml(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlNodeConverter_WrapXml_m75EF1038542649689A89FBF5A3F2CED042EBF228 (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void System.Xml.NameTable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameTable__ctor_mB02EE27092095D81E839D51519C4FBDA2227C261 (NameTable_t0164DCE377A0A6E712CF54BE4CE5DA58A5537B46* __this, const RuntimeMethod* method) ;
// System.Void System.Xml.XmlNamespaceManager::.ctor(System.Xml.XmlNameTable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNamespaceManager__ctor_m18E69120CE5886E06630CCCC3215D2C67FC669DB (XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* __this, XmlNameTable_tBDBAACFF3DB40A8E6AF3BDC11F0FF166CF11ABB8* ___nameTable0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Converters.XmlNodeConverter::PushParentNamespaces(Newtonsoft.Json.Converters.IXmlNode,System.Xml.XmlNamespaceManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeConverter_PushParentNamespaces_m72AF63B5C2C7D78F06FA7A495DADCA6759027AA3 (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, RuntimeObject* ___node0, XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* ___manager1, const RuntimeMethod* method) ;
// System.Boolean Newtonsoft.Json.Converters.XmlNodeConverter::get_OmitRootObject()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XmlNodeConverter_get_OmitRootObject_m39D54F5791FD93911139FB9E46BABBDE5D062184_inline (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Converters.XmlNodeConverter::SerializeNode(Newtonsoft.Json.JsonWriter,Newtonsoft.Json.Converters.IXmlNode,System.Xml.XmlNamespaceManager,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeConverter_SerializeNode_mBBB1AA0A7AC24A39675F1B210F51870CE932D6AA (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* ___writer0, RuntimeObject* ___node1, XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* ___manager2, bool ___writePropertyName3, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode>::Reverse()
inline void List_1_Reverse_m650275B7F9E56003CC1A1616FFA5A3BBC3541627 (List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E*, const RuntimeMethod*))List_1_Reverse_m3A8BEF4194B03E75859F94B4EE2F54045AF98708_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode>::GetEnumerator()
inline Enumerator_t5D6B89D2864E6CA1D667C75E2375831735B2B941 List_1_GetEnumerator_m8E48B727D08C794BA9EB42BB47747FD56F55C10E (List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t5D6B89D2864E6CA1D667C75E2375831735B2B941 (*) (List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Newtonsoft.Json.Converters.IXmlNode>::Dispose()
inline void Enumerator_Dispose_mC2891A1E295FEF8B5B64E96EB62B5945149DF7BD (Enumerator_t5D6B89D2864E6CA1D667C75E2375831735B2B941* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t5D6B89D2864E6CA1D667C75E2375831735B2B941*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Newtonsoft.Json.Converters.IXmlNode>::get_Current()
inline RuntimeObject* Enumerator_get_Current_m894DFFA678072980ECF786B52912E28891E006DB_inline (Enumerator_t5D6B89D2864E6CA1D667C75E2375831735B2B941* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t5D6B89D2864E6CA1D667C75E2375831735B2B941*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Newtonsoft.Json.Converters.IXmlNode>::MoveNext()
inline bool Enumerator_MoveNext_m8A802F6DDB7EA4435FEE6877988C792B8B583F88 (Enumerator_t5D6B89D2864E6CA1D667C75E2375831735B2B941* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t5D6B89D2864E6CA1D667C75E2375831735B2B941*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.String System.Xml.XmlConvert::DecodeName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlConvert_DecodeName_m59D31842CBCDCD2657BCE42AC8D8DFA818FB9437 (String_t* ___name0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.String Newtonsoft.Json.Converters.XmlNodeConverter::ResolveFullName(Newtonsoft.Json.Converters.IXmlNode,System.Xml.XmlNamespaceManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlNodeConverter_ResolveFullName_mC5F07F462B6FE5B4EB555D78255961F40B8C3616 (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, RuntimeObject* ___node0, XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* ___manager1, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonSerializationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonSerializationException__ctor_m0DDDC290916A23CCCE7A780AF876F9CE5FE58E4A (JsonSerializationException_t00F36890DFAC04F2FDE779151340B9C5563612EC* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Boolean System.Xml.XmlConvert::ToBoolean(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlConvert_ToBoolean_mB95C798BD6D849071E6A686CBF85851C25C7006A (String_t* ___s0, const RuntimeMethod* method) ;
// System.String Newtonsoft.Json.Converters.XmlNodeConverter::GetPropertyName(Newtonsoft.Json.Converters.IXmlNode,System.Xml.XmlNamespaceManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlNodeConverter_GetPropertyName_mC4EBA7F268695B3CE90E87702E7CDF96ABB01BA5 (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, RuntimeObject* ___node0, XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* ___manager1, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Converters.XmlNodeConverter::WriteGroupedNodes(Newtonsoft.Json.JsonWriter,System.Xml.XmlNamespaceManager,System.Boolean,System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeConverter_WriteGroupedNodes_m109F608E386927513B2B304A9F0CCEC523ABE09E (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* ___writer0, XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* ___manager1, bool ___writePropertyName2, List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* ___groupedNodes3, String_t* ___elementNames4, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
inline void Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(TKey,TValue)
inline void Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, String_t* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, String_t*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mC14A0401676B34A68B06FC858BA801E7DF99B7D8 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, String_t* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, String_t*, RuntimeObject**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, String_t* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, String_t*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Object>::GetEnumerator()
inline Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62 Dictionary_2_GetEnumerator_mF5B5B00F670F3436AB3C07C0F64149501DEC2DBC (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62 (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, const RuntimeMethod*))Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>::Dispose()
inline void Enumerator_Dispose_mA7C78FC10B78BFFDD69A6E1CA050B42D48F8B53F (Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62*, const RuntimeMethod*))Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>::get_Current()
inline KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 Enumerator_get_Current_mFAD52D332201C947C95ECF69DAE5C3319CA654F1_inline (Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 (*) (Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62*, const RuntimeMethod*))Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.String,System.Object>::get_Value()
inline RuntimeObject* KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_inline (KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.String,System.Object>::get_Key()
inline String_t* KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_inline (KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline)(__this, method);
}
// System.Void Newtonsoft.Json.Converters.XmlNodeConverter::WriteGroupedNodes(Newtonsoft.Json.JsonWriter,System.Xml.XmlNamespaceManager,System.Boolean,Newtonsoft.Json.Converters.IXmlNode,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeConverter_WriteGroupedNodes_mF2878211727CBA39A5E29901EC899CDDF3A214DE (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* ___writer0, XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* ___manager1, bool ___writePropertyName2, RuntimeObject* ___node3, String_t* ___elementNames4, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>::MoveNext()
inline bool Enumerator_MoveNext_mBB43E0B46CDCD47543052FDB890026C269E6D96E (Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62*, const RuntimeMethod*))Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared)(__this, method);
}
// System.Boolean Newtonsoft.Json.Converters.XmlNodeConverter::IsArray(Newtonsoft.Json.Converters.IXmlNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlNodeConverter_IsArray_mF83080575E162DED85AA9E7F30384F4FCECF4A48 (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, RuntimeObject* ___node0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Converters.XmlNodeConverter::SerializeGroupedNodes(Newtonsoft.Json.JsonWriter,Newtonsoft.Json.Converters.IXmlNode,System.Xml.XmlNamespaceManager,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeConverter_SerializeGroupedNodes_m2310D6C0E3FA9FCDBFC1677DEFE3CFB237E6BC0E (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* ___writer0, RuntimeObject* ___node1, XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* ___manager2, bool ___writePropertyName3, const RuntimeMethod* method) ;
// System.Boolean Newtonsoft.Json.Converters.XmlNodeConverter::AllSameName(Newtonsoft.Json.Converters.IXmlNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlNodeConverter_AllSameName_mA177F66B66101491F3DCEAD394E1A1C87F24E8FF (RuntimeObject* ___node0, const RuntimeMethod* method) ;
// System.Boolean Newtonsoft.Json.Converters.XmlNodeConverter::ValueAttributes(System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlNodeConverter_ValueAttributes_m2E3B5735173BB3088B0395F6266B6BCFFF7D6090 (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* ___c0, const RuntimeMethod* method) ;
// Newtonsoft.Json.JsonSerializationException Newtonsoft.Json.JsonSerializationException::Create(Newtonsoft.Json.JsonReader,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonSerializationException_t00F36890DFAC04F2FDE779151340B9C5563612EC* JsonSerializationException_Create_m2CA947673DA3524AFC908CFE45478403E0B8E239 (JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* ___reader0, String_t* ___message1, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172 (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// System.Void System.Xml.Linq.XDocument::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XDocument__ctor_m75DFDCC516F6DB707830B7147BB51FEE9F72DDAD (XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1* __this, const RuntimeMethod* method) ;
// System.Void System.Xml.XmlDocument::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlDocument__ctor_m09B578D51E249702C90A99B87A31ABE8CE4027DC (XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Converters.XmlDocumentWrapper::.ctor(System.Xml.XmlDocument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlDocumentWrapper__ctor_m2DDFA872888661813F74523693DB4A34FE765DFE (XmlDocumentWrapper_t2C596BBEC57603F9B8DA72446CAABDC3DE251624* __this, XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* ___document0, const RuntimeMethod* method) ;
// System.String Newtonsoft.Json.Converters.XmlNodeConverter::get_DeserializeRootElementName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XmlNodeConverter_get_DeserializeRootElementName_m2A0B73747601E99F60881D50EF7D55F0EDBE85A4_inline (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Converters.XmlNodeConverter::ReadElement(Newtonsoft.Json.JsonReader,Newtonsoft.Json.Converters.IXmlDocument,Newtonsoft.Json.Converters.IXmlNode,System.String,System.Xml.XmlNamespaceManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeConverter_ReadElement_m09C859D452268EBC6B893181FDF83B8CC7BDFAD8 (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* ___reader0, RuntimeObject* ___document1, RuntimeObject* ___currentNode2, String_t* ___propertyName3, XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* ___manager4, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonReader::ReadAndAssert()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_ReadAndAssert_m8E4307CFC38DA6E98E818C3058CCE2E385DC9EB7 (JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Converters.XmlNodeConverter::DeserializeNode(Newtonsoft.Json.JsonReader,Newtonsoft.Json.Converters.IXmlDocument,System.Xml.XmlNamespaceManager,Newtonsoft.Json.Converters.IXmlNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeConverter_DeserializeNode_m7CF6B466118CB9E0CF4CAC90CA34BC769B45229C (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* ___reader0, RuntimeObject* ___document1, XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* ___manager2, RuntimeObject* ___currentNode3, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// System.Void System.Xml.Linq.XNode::Remove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XNode_Remove_m74CDB71751058523C66B0529333D7D0E880C29F9 (XNode_t185C922661054AAD14F49676DD6F3CB10D652A30* __this, const RuntimeMethod* method) ;
// System.Boolean Newtonsoft.Json.Converters.XmlNodeConverter::get_EncodeSpecialCharacters()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XmlNodeConverter_get_EncodeSpecialCharacters_m343756B55466DB680EF3561E34A803C5D2FFC0BD_inline (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, const RuntimeMethod* method) ;
// System.String Newtonsoft.Json.Converters.XmlNodeConverter::ConvertTokenToXmlValue(Newtonsoft.Json.JsonReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlNodeConverter_ConvertTokenToXmlValue_m968DB55F5864E99BE9EBE8B3C89B1CFE13ACF458 (JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* ___reader0, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Converters.XmlNodeConverter::CreateInstruction(Newtonsoft.Json.JsonReader,Newtonsoft.Json.Converters.IXmlDocument,Newtonsoft.Json.Converters.IXmlNode,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeConverter_CreateInstruction_m7A5C6039FEC825B248B75841D11C1DB284F78006 (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* ___reader0, RuntimeObject* ___document1, RuntimeObject* ___currentNode2, String_t* ___propertyName3, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String,System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCC34895D0DB2AD440C9D8767032215BC86B5C48B (String_t* ___a0, String_t* ___b1, int32_t ___comparisonType2, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Converters.XmlNodeConverter::CreateDocumentType(Newtonsoft.Json.JsonReader,Newtonsoft.Json.Converters.IXmlDocument,Newtonsoft.Json.Converters.IXmlNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeConverter_CreateDocumentType_m4438D07E2CC5D23244A39CC98EE3F75B74B06FFA (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* ___reader0, RuntimeObject* ___document1, RuntimeObject* ___currentNode2, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Converters.XmlNodeConverter::ReadArrayElements(Newtonsoft.Json.JsonReader,Newtonsoft.Json.Converters.IXmlDocument,System.String,Newtonsoft.Json.Converters.IXmlNode,System.Xml.XmlNamespaceManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeConverter_ReadArrayElements_m3A4E70784167D3D49FB40746E404602CA282B3D6 (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* ___reader0, RuntimeObject* ___document1, String_t* ___propertyName2, RuntimeObject* ___currentNode3, XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* ___manager4, const RuntimeMethod* method) ;
// System.Boolean Newtonsoft.Json.Converters.XmlNodeConverter::ShouldReadInto(Newtonsoft.Json.JsonReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlNodeConverter_ShouldReadInto_m9A0AE80AECBB978CB0863E0092917AF59FDC6F8D (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* ___reader0, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.String,System.String> Newtonsoft.Json.Converters.XmlNodeConverter::ReadAttributeElements(Newtonsoft.Json.JsonReader,System.Xml.XmlNamespaceManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* XmlNodeConverter_ReadAttributeElements_m9B56D685A23448B661C73F3483B9B4063D55C049 (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* ___reader0, XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* ___manager1, const RuntimeMethod* method) ;
// System.String Newtonsoft.Json.Utilities.MiscellaneousUtils::GetPrefix(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MiscellaneousUtils_GetPrefix_mD4530D3BF776EA4ECCFF1888BBD2ECDE9F2DC1CF (String_t* ___qualifiedName0, const RuntimeMethod* method) ;
// System.Boolean Newtonsoft.Json.Utilities.StringUtils::StartsWith(System.String,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringUtils_StartsWith_m1DF31A6C9FE8815DE2BE508A518E6399EAFD7871 (String_t* ___source0, Il2CppChar ___value1, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472 (String_t* __this, int32_t ___startIndex0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Converters.XmlNodeConverter::AddAttribute(Newtonsoft.Json.JsonReader,Newtonsoft.Json.Converters.IXmlDocument,Newtonsoft.Json.Converters.IXmlNode,System.String,System.String,System.Xml.XmlNamespaceManager,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeConverter_AddAttribute_m01F487BE31278D2909B42C51A8BC7F159A34DAB3 (JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* ___reader0, RuntimeObject* ___document1, RuntimeObject* ___currentNode2, String_t* ___propertyName3, String_t* ___attributeName4, XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* ___manager5, String_t* ___attributePrefix6, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Converters.XmlNodeConverter::CreateElement(Newtonsoft.Json.JsonReader,Newtonsoft.Json.Converters.IXmlDocument,Newtonsoft.Json.Converters.IXmlNode,System.String,System.Xml.XmlNamespaceManager,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeConverter_CreateElement_mB62D7411435EBF38A92DDD2E3F37325D14CC5819 (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* ___reader0, RuntimeObject* ___document1, RuntimeObject* ___currentNode2, String_t* ___elementName3, XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* ___manager4, String_t* ___elementPrefix5, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___attributeNameValues6, const RuntimeMethod* method) ;
// Newtonsoft.Json.Converters.IXmlElement Newtonsoft.Json.Converters.XmlNodeConverter::CreateElement(System.String,Newtonsoft.Json.Converters.IXmlDocument,System.String,System.Xml.XmlNamespaceManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlNodeConverter_CreateElement_mD8BF7ADE4CB3682433E964C9986042FFE403FE65 (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, String_t* ___elementName0, RuntimeObject* ___document1, String_t* ___elementPrefix2, XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* ___manager3, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.String>::GetEnumerator()
inline Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::Dispose()
inline void Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562*, const RuntimeMethod*))Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::get_Current()
inline KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_inline (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A (*) (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562*, const RuntimeMethod*))Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline)(__this, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline)(__this, method);
}
// System.String System.Xml.XmlConvert::EncodeName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlConvert_EncodeName_m5CDC8BEC5CE63A019C9E7C52AADF9F44B90E6CB5 (String_t* ___name0, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Value()
inline String_t* KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_inline (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::MoveNext()
inline bool Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438 (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562*, const RuntimeMethod*))Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared)(__this, method);
}
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6 (const RuntimeMethod* method) ;
// System.String Newtonsoft.Json.Utilities.StringUtils::FormatWith(System.String,System.IFormatProvider,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringUtils_FormatWith_m97587965D365EA1584A7D31B57D618E7768073E5 (String_t* ___format0, RuntimeObject* ___provider1, RuntimeObject* ___arg02, const RuntimeMethod* method) ;
// System.String System.Numerics.BigInteger::ToString(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BigInteger_ToString_mD17ED938094AEF4030E39A2F95C7C7834C6F70BB (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) ;
// System.Int64 System.Convert::ToInt64(System.Object,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Convert_ToInt64_m6CA00ABB70FAD8242C62ED9913F7D7C3B811FC31 (RuntimeObject* ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method) ;
// System.String System.Xml.XmlConvert::ToString(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlConvert_ToString_mFC2B58A063E63501E3CB452206B18C317E2782A9 (int64_t ___value0, const RuntimeMethod* method) ;
// System.String System.Xml.XmlConvert::ToString(System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlConvert_ToString_m4EE078C46CC4FF023E0286740CFE95E945C5185E (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___value0, const RuntimeMethod* method) ;
// System.String System.Xml.XmlConvert::ToString(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlConvert_ToString_m0A47C3C098CDB47726C29D7A70B7349D6DA57555 (float ___value0, const RuntimeMethod* method) ;
// System.Double System.Convert::ToDouble(System.Object,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Convert_ToDouble_m8DED60F2E0251A3D389F1DD22AA5AF9CD440ABE8 (RuntimeObject* ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method) ;
// System.String System.Xml.XmlConvert::ToString(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlConvert_ToString_m04C12A2A45109D8E79C729DE12EF0A29301C2A2B (double ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Convert::ToBoolean(System.Object,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Convert_ToBoolean_m0E8AE169ABC127B0A317EE6312A04BC1F8AB4C63 (RuntimeObject* ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method) ;
// System.String System.Xml.XmlConvert::ToString(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlConvert_ToString_mD598BDDD270BE18CCBABE0569FF42529F06ADADF (bool ___value0, const RuntimeMethod* method) ;
// System.String System.Xml.XmlConvert::ToString(System.DateTimeOffset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlConvert_ToString_m94540B3F4E815CA0CEDD0B655248460FD19E419A (DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___value0, const RuntimeMethod* method) ;
// System.DateTime System.Convert::ToDateTime(System.Object,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D Convert_ToDateTime_m773A330A58097085E94630181F3A77B9F0963327 (RuntimeObject* ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method) ;
// System.DateTimeKind System.DateTime::get_Kind()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Kind_m83D45222D9386873333A178B9AB31AC2B2F2C993 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.Xml.XmlDateTimeSerializationMode Newtonsoft.Json.Utilities.DateTimeUtils::ToSerializationMode(System.DateTimeKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTimeUtils_ToSerializationMode_m91B5EE22B7ED390567F3EBA783285F6218D17AE6 (int32_t ___kind0, const RuntimeMethod* method) ;
// System.String System.Xml.XmlConvert::ToString(System.DateTime,System.Xml.XmlDateTimeSerializationMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlConvert_ToString_mCD438E48326A2EECD1839100F45A2626B3B65598 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___value0, int32_t ___dateTimeOption1, const RuntimeMethod* method) ;
// System.String System.Convert::ToBase64String(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToBase64String_mD0680EF77270244071965AFA1207921C73EEA323 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___inArray0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Converters.XmlNodeConverter::DeserializeValue(Newtonsoft.Json.JsonReader,Newtonsoft.Json.Converters.IXmlDocument,System.Xml.XmlNamespaceManager,System.String,Newtonsoft.Json.Converters.IXmlNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeConverter_DeserializeValue_m6D20454FDBBEEE2CABB0ED3EC1BCF8F2E0067AF0 (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* ___reader0, RuntimeObject* ___document1, XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* ___manager2, String_t* ___propertyName3, RuntimeObject* ___currentNode4, const RuntimeMethod* method) ;
// System.Boolean Newtonsoft.Json.Converters.XmlNodeConverter::get_WriteArrayAttribute()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XmlNodeConverter_get_WriteArrayAttribute_mB90AAB6C83E3DFD4E0F0FE8DBB9BF151248378F2_inline (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Converters.XmlNodeConverter::AddJsonArrayAttribute(Newtonsoft.Json.Converters.IXmlElement,Newtonsoft.Json.Converters.IXmlDocument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeConverter_AddJsonArrayAttribute_m2B9B98BC1EC11FEDB63C71314C1FD3312E20A800 (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, RuntimeObject* ___element0, RuntimeObject* ___document1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
inline void Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Add(TKey,TValue)
inline void Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean Newtonsoft.Json.Converters.XmlNodeConverter::IsNamespaceAttribute(System.String,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlNodeConverter_IsNamespaceAttribute_mD9C356F879F0FF7F1006E34842F95ADE42128868 (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, String_t* ___attributeName0, String_t** ___prefix1, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Int32>::GetValueOrDefault()
inline int32_t Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, const RuntimeMethod*))Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_gshared_inline)(__this, method);
}
// System.Void System.Nullable`1<System.Int32>::.ctor(T)
inline void Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703 (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, int32_t, const RuntimeMethod*))Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_gshared)(__this, ___value0, method);
}
// System.String System.Nullable`1<System.Int32>::ToString()
inline String_t* Nullable_1_ToString_m5FDC0CBE068DB2893454257CE6E29846D47B3038 (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, const RuntimeMethod*))Nullable_1_ToString_m5FDC0CBE068DB2893454257CE6E29846D47B3038_gshared)(__this, method);
}
// System.Boolean Newtonsoft.Json.Utilities.JsonTokenUtils::IsPrimitiveToken(Newtonsoft.Json.JsonToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonTokenUtils_IsPrimitiveToken_m97DBA2150C205005AA33809D4355769E9ED1BB2B (int32_t ___token0, const RuntimeMethod* method) ;
// System.String System.Xml.XmlConvert::EncodeLocalName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlConvert_EncodeLocalName_m8AD743C94643F82D5B6FF1617EDAF4145E67D318 (String_t* ___name0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Utilities.MiscellaneousUtils::GetQualifiedNameParts(System.String,System.String&,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MiscellaneousUtils_GetQualifiedNameParts_mDB4115E09A5DDA5F1103D82C7B514A038301683C (String_t* ___qualifiedName0, String_t** ___prefix1, String_t** ___localName2, const RuntimeMethod* method) ;
// System.Boolean System.String::StartsWith(System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mA2A4405B1B9F3653A6A9AA7F223F68D86A0C6264 (String_t* __this, String_t* ___value0, int32_t ___comparisonType1, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Boolean Newtonsoft.Json.Utilities.TypeExtensions::AssignableToTypeName(System.Type,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeExtensions_AssignableToTypeName_mBAD8B53CBE3E50AB85467EF5F8E21BE18B8B48AC (Type_t* ___type0, String_t* ___fullTypeName1, bool ___searchInterfaces2, const RuntimeMethod* method) ;
// System.Boolean Newtonsoft.Json.Converters.XmlNodeConverter::IsXObject(System.Type)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR bool XmlNodeConverter_IsXObject_mA3EEED6A91CF6187FED68B2BDC561F67557D8440 (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, Type_t* ___valueType0, const RuntimeMethod* method) ;
// System.Boolean Newtonsoft.Json.Converters.XmlNodeConverter::IsXmlNode(System.Type)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR bool XmlNodeConverter_IsXmlNode_mA424BA714626ECB3D870C5F0C4953622B81620FD (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, Type_t* ___valueType0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonConverter__ctor_m47F59D2FF8CFBA449BDFBA405BDEEF6361139DAB (JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonBinaryWriter::set_DateTimeKindHandling(System.DateTimeKind)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BsonBinaryWriter_set_DateTimeKindHandling_mE5606CA1E2ADA134652CEC5A0306E5F728E80FC5_inline (BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Int32 Newtonsoft.Json.Bson.BsonBinaryWriter::CalculateSize(Newtonsoft.Json.Bson.BsonToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BsonBinaryWriter_CalculateSize_mC09EDD18FAF0B2E65A36FCC6D0C7615EE1544907 (BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* __this, BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* ___t0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonBinaryWriter::WriteTokenInternal(Newtonsoft.Json.Bson.BsonToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonBinaryWriter_WriteTokenInternal_m54C0EA96679D81C5022FD97C4499657E1D38DA7E (BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* __this, BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* ___t0, const RuntimeMethod* method) ;
// System.Int32 Newtonsoft.Json.Bson.BsonToken::get_CalculatedSize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BsonToken_get_CalculatedSize_mBEC94C9A9175992741A3554721F83D78CBC3CC0C_inline (BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Bson.BsonProperty> Newtonsoft.Json.Bson.BsonObject::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BsonObject_GetEnumerator_mD0C11E8BAC09FB62CA08FF674E3F7F23690AE14D (BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB* __this, const RuntimeMethod* method) ;
// Newtonsoft.Json.Bson.BsonToken Newtonsoft.Json.Bson.BsonProperty::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* BsonProperty_get_Value_m0DAFFE451F84BACD72C5FF9F592D351117DB85F2_inline (BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE* __this, const RuntimeMethod* method) ;
// Newtonsoft.Json.Bson.BsonString Newtonsoft.Json.Bson.BsonProperty::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* BsonProperty_get_Name_mF70295B575263AB7307995C119732FBA89FB6FA9_inline (BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE* __this, const RuntimeMethod* method) ;
// System.Object Newtonsoft.Json.Bson.BsonValue::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* BsonValue_get_Value_m5CEBB13E31BA015930CF1D8E23C464599CE249D2_inline (BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660* __this, const RuntimeMethod* method) ;
// System.Int32 Newtonsoft.Json.Bson.BsonString::get_ByteCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BsonString_get_ByteCount_m513C4F508FF36F57B49B881321517CAC2CBE06E3_inline (BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonBinaryWriter::WriteString(System.String,System.Int32,System.Nullable`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonBinaryWriter_WriteString_m8614BA54CB21C5D68D63EE7B4377049F8C838801 (BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* __this, String_t* ___s0, int32_t ___byteCount1, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___calculatedlengthPrefix2, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Bson.BsonToken> Newtonsoft.Json.Bson.BsonArray::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BsonArray_GetEnumerator_m38E989DD847BFBA1D9AE6408890EBEC664E0729C (BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1* __this, const RuntimeMethod* method) ;
// System.String System.UInt64::ToString(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt64_ToString_mCDDACF05D6B5B3ECB10B1FEEE58ED3407973E7A7 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) ;
// System.Int32 Newtonsoft.Json.Utilities.MathUtils::IntLength(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MathUtils_IntLength_m23241F09F5280B9249FBD8D666E56C81E464919C (uint64_t ___i0, const RuntimeMethod* method) ;
// System.Int32 System.Convert::ToInt32(System.Object,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m5C8BF1D45F508E7AEDA393AE72555148527E3ED3 (RuntimeObject* ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method) ;
// System.DateTimeKind Newtonsoft.Json.Bson.BsonBinaryWriter::get_DateTimeKindHandling()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BsonBinaryWriter_get_DateTimeKindHandling_m90614E0F1C0F02A38281C923194D7339F536664F_inline (BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* __this, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::ToUniversalTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_ToUniversalTime_m52CA1EAD0BE0A357BCACC38747ECA4A8810155A9 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::ToLocalTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_ToLocalTime_mD87626169251A26AF699DAE90A1C31190AD30B94 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.Int64 Newtonsoft.Json.Utilities.DateTimeUtils::ConvertDateTimeToJavaScriptTicks(System.DateTime,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t DateTimeUtils_ConvertDateTimeToJavaScriptTicks_mA2ACEC25DDFC8FD1CD43D6368BDF4FB612B453B8 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___dateTime0, bool ___convertToUtc1, const RuntimeMethod* method) ;
// System.DateTime System.DateTimeOffset::get_UtcDateTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTimeOffset_get_UtcDateTime_mE7EB39F361C89E1367CBC03C3410BA34F194DA40 (DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* __this, const RuntimeMethod* method) ;
// System.TimeSpan System.DateTimeOffset::get_Offset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A DateTimeOffset_get_Offset_mE90E2548227F1EE8BF4A6A5EB71B32D48D3035A4 (DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* __this, const RuntimeMethod* method) ;
// System.Int64 Newtonsoft.Json.Utilities.DateTimeUtils::ConvertDateTimeToJavaScriptTicks(System.DateTime,System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t DateTimeUtils_ConvertDateTimeToJavaScriptTicks_m0D5815D6340AC9707A7FD04B27F2101845CC598F (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___dateTime0, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___offset1, const RuntimeMethod* method) ;
// Newtonsoft.Json.Bson.BsonBinaryType Newtonsoft.Json.Bson.BsonBinary::get_BinaryType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t BsonBinary_get_BinaryType_mDE0AC23257F594CDF9EECBBD6C9BF59D998DD91B_inline (BsonBinary_t10CD8515CA416C5958E3FA3290910E8FD2DFB8A8* __this, const RuntimeMethod* method) ;
// Newtonsoft.Json.Bson.BsonString Newtonsoft.Json.Bson.BsonRegex::get_Pattern()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* BsonRegex_get_Pattern_mA699B72A76008CE662D1715632112D68F8BB85CC_inline (BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1* __this, const RuntimeMethod* method) ;
// Newtonsoft.Json.Bson.BsonString Newtonsoft.Json.Bson.BsonRegex::get_Options()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* BsonRegex_get_Options_mDCE4C399FD3DB3BE40F013A3458CCCD0FCB44211_inline (BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
inline bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, const RuntimeMethod*))Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline)(__this, method);
}
// System.Void Newtonsoft.Json.Bson.BsonBinaryWriter::WriteUtf8Bytes(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonBinaryWriter_WriteUtf8Bytes_m8D5ECCD51C6AB60CE140EF0AF33E9E5C6A1485AB (BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* __this, String_t* ___s0, int32_t ___byteCount1, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonToken::set_CalculatedSize(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BsonToken_set_CalculatedSize_m50B0EAD822D053F2B1B5DCC6AC1413DF69B8FCAB_inline (BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Int32 Newtonsoft.Json.Bson.BsonBinaryWriter::CalculateSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BsonBinaryWriter_CalculateSize_m2AF1B2832ECDC9964A31AA22CD528C0514BCAE46 (BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* __this, int32_t ___stringByteCount0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonString::set_ByteCount(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BsonString_set_ByteCount_m31A317821BECC7731FA48F92B5433200A6515BCF_inline (BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Boolean Newtonsoft.Json.Bson.BsonString::get_IncludeLength()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BsonString_get_IncludeLength_m0E82D14B7DF5B53FBCD95D5891C3F79E96462D2D_inline (BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* __this, const RuntimeMethod* method) ;
// System.Int32 Newtonsoft.Json.Bson.BsonBinaryWriter::CalculateSizeWithLength(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BsonBinaryWriter_CalculateSizeWithLength_mB26898787AEA883063A203D7B1C2325586B6E737 (BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* __this, int32_t ___stringByteCount0, bool ___includeSize1, const RuntimeMethod* method) ;
// System.Void System.Text.UTF8Encoding::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UTF8Encoding__ctor_mBCC79DB57729512321FA4F0E17342F0D1A43EA34 (UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE* __this, bool ___encoderShouldEmitUTF8Identifier0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Utilities.ValidationUtils::ArgumentNotNull(System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValidationUtils_ArgumentNotNull_mC7EBE963D14FFCC7B90B08B403FF584EC520C888 (RuntimeObject* ___value0, String_t* ___parameterName1, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonReader::.ctor(System.IO.Stream,System.Boolean,System.DateTimeKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonReader__ctor_mF744C7E937F79AB3421D775693B583EB820168BF (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, bool ___readRootValueAsArray1, int32_t ___dateTimeKindHandling2, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonReader::.ctor(System.IO.BinaryReader,System.Boolean,System.DateTimeKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonReader__ctor_m5991340F78C61D5938CF823F1C7D309FEF4037FC (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___reader0, bool ___readRootValueAsArray1, int32_t ___dateTimeKindHandling2, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonReader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader__ctor_m1C65CDB90A8B108668938BBE17329FEC76D62C27 (JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* __this, const RuntimeMethod* method) ;
// System.Void System.IO.BinaryReader::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryReader__ctor_m898732FE0DBEDD480B24F6DE45A9AC696E44CC0F (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___input0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonReader/ContainerContext>::.ctor()
inline void List_1__ctor_m51ABD0EBEBE9673A2608650D331CEE679D5029FC (List_1_t944CCF3A156F251D4FD98B25EC08251DB21ADBC9* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t944CCF3A156F251D4FD98B25EC08251DB21ADBC9*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// Newtonsoft.Json.Bson.BsonType Newtonsoft.Json.Bson.BsonReader::ReadType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t BsonReader_ReadType_m609B4018D61DC17479EA954CAB7A4CF38F9ED691 (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) ;
// System.String Newtonsoft.Json.Bson.BsonReader::ReadString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BsonReader_ReadString_m43756951ED9A74FE856F42E2CF1A1BE2AE341100 (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) ;
// System.Boolean Newtonsoft.Json.Bson.BsonReader::ReadNormal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BsonReader_ReadNormal_m048652A5459D2B5D052FB068C5EC478734122EBF (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) ;
// System.Boolean Newtonsoft.Json.Bson.BsonReader::ReadReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BsonReader_ReadReference_mB9A96BD71CDF91482061F6C9074C2A83CB56E5F4 (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) ;
// System.Boolean Newtonsoft.Json.Bson.BsonReader::ReadCodeWScope()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BsonReader_ReadCodeWScope_m0DA7805CE5A3D1CC83E1554C8015207538D1FF3E (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) ;
// Newtonsoft.Json.JsonReaderException Newtonsoft.Json.JsonReaderException::Create(Newtonsoft.Json.JsonReader,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonReaderException_t44F3F6F2980FC806231B19A65F37D1E034B218DA* JsonReaderException_Create_mE1CBC0A12B559F606A85F2450C4400676ABD6529 (JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* ___reader0, String_t* ___message1, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonReader::SetToken(Newtonsoft.Json.JsonToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_SetToken_m9CB3201AB80BD12AF5490EE38B0AB1E667D5757B (JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* __this, int32_t ___newToken0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonReader::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_Close_m68AD33DBE5DA0990DB82A21F3AB2D1F91AE49F84 (JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* __this, const RuntimeMethod* method) ;
// System.Boolean Newtonsoft.Json.JsonReader::get_CloseInput()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool JsonReader_get_CloseInput_m5D28FC12BD22B62AA1E493BC7A77402F1AA26DE4_inline (JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonReader::SetToken(Newtonsoft.Json.JsonToken,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_SetToken_m57B521A8D559EBEC2CF1FED3001068F4F897FEFF (JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* __this, int32_t ___newToken0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Int32 Newtonsoft.Json.Bson.BsonReader::ReadInt32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BsonReader_ReadInt32_m403168A3B3CA3CC5FEA5459185257E8AF00FF986 (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) ;
// System.String Newtonsoft.Json.Bson.BsonReader::ReadLengthString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BsonReader_ReadLengthString_m905B05A13227D4A2ECBFD9379E27D664A8D071AA (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) ;
// Newtonsoft.Json.JsonReader/State Newtonsoft.Json.JsonReader::get_CurrentState()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t JsonReader_get_CurrentState_m2B6FA669883053CDABF108A980F808CDC9F13699_inline (JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonReader/ContainerContext::.ctor(Newtonsoft.Json.Bson.BsonType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContainerContext__ctor_m1C2D964213E25068CF24D94D74E2D9D5BB60061B (ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* __this, int8_t ___type0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonReader::PushContext(Newtonsoft.Json.Bson.BsonReader/ContainerContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonReader_PushContext_m1AB78E117227021B3B7F29D571D58BB424B3A7EF (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* ___newContext0, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, const RuntimeMethod* method) ;
// System.Byte[] Newtonsoft.Json.Bson.BsonReader::ReadBytes(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BsonReader_ReadBytes_m1CC1F7104F11C353A30134E0AA3D66B3F52938F7 (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, int32_t ___count0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonReader::ReadType(Newtonsoft.Json.Bson.BsonType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonReader_ReadType_m1568AE4968EFA67EF81D622164A9AD3665E539DB (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, int8_t ___type0, const RuntimeMethod* method) ;
// System.Boolean Newtonsoft.Json.JsonReader::get_SupportMultipleContent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool JsonReader_get_SupportMultipleContent_m28769E9E99495F868A23A8F6BDF5CB90D9B792B6_inline (JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* __this, const RuntimeMethod* method) ;
// System.String Newtonsoft.Json.Bson.BsonReader::ReadElement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BsonReader_ReadElement_m51016B8553A73DB79F38CF122BF6292662F4D754 (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) ;
// System.Byte Newtonsoft.Json.Bson.BsonReader::ReadByte()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t BsonReader_ReadByte_mC6BD5BEBF68FF9ECC8741786CE7A62B50CACAAE4 (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonReader::PopContext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonReader_PopContext_m63825894764D148A8EE7451048A0761FF27BE312 (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonReader::MovePosition(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonReader_MovePosition_mEA8B97A5B0231E2555EB70B8D7C19D4A8D29AD2B (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, int32_t ___count0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonReader/ContainerContext>::get_Count()
inline int32_t List_1_get_Count_m543633880DCEC6159BABF4A6C35B9FFD0F7D5079_inline (List_1_t944CCF3A156F251D4FD98B25EC08251DB21ADBC9* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t944CCF3A156F251D4FD98B25EC08251DB21ADBC9*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonReader/ContainerContext>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m157C47B733293E34DDC19F26D66D2C959F8251FE (List_1_t944CCF3A156F251D4FD98B25EC08251DB21ADBC9* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t944CCF3A156F251D4FD98B25EC08251DB21ADBC9*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___index0, method);
}
// T System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonReader/ContainerContext>::get_Item(System.Int32)
inline ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* List_1_get_Item_mF6B5797FA7FC75AAAE66FC325B93A5C2AC311E98 (List_1_t944CCF3A156F251D4FD98B25EC08251DB21ADBC9* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* (*) (List_1_t944CCF3A156F251D4FD98B25EC08251DB21ADBC9*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonReader/ContainerContext>::Add(T)
inline void List_1_Add_mFB02AD1C6DBE2CCEC757E8633ED0353BFCA3A415_inline (List_1_t944CCF3A156F251D4FD98B25EC08251DB21ADBC9* __this, ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t944CCF3A156F251D4FD98B25EC08251DB21ADBC9*, ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Double Newtonsoft.Json.Bson.BsonReader::ReadDouble()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double BsonReader_ReadDouble_m4E7917E24274C4A8DE38DAA6DAD13B019AE75C52 (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) ;
// System.Decimal System.Convert::ToDecimal(System.Object,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Convert_ToDecimal_m2A6822B7BCB33F60B9425C58248111D316C3FE4C (RuntimeObject* ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method) ;
// System.Byte[] Newtonsoft.Json.Bson.BsonReader::ReadBinary(Newtonsoft.Json.Bson.BsonBinaryType&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BsonReader_ReadBinary_m4A4F52AE9037A613C091BF93066D918478C2FECF (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, uint8_t* ___binaryType0, const RuntimeMethod* method) ;
// System.Void System.Guid::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Guid__ctor_m9BEFD9FC285BE9ACEC2EB97FC76C0E35E14D725C (Guid_t* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___b0, const RuntimeMethod* method) ;
// System.Boolean System.Convert::ToBoolean(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Convert_ToBoolean_m6148BAC617B69CACDF14A8C74836767DFF0CB6A9 (uint8_t ___value0, const RuntimeMethod* method) ;
// System.Int64 Newtonsoft.Json.Bson.BsonReader::ReadInt64()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BsonReader_ReadInt64_m3CD355565907B98481732EC6A91102F89CE1FF02 (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) ;
// System.DateTime Newtonsoft.Json.Utilities.DateTimeUtils::ConvertJavaScriptTicksToDateTime(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTimeUtils_ConvertJavaScriptTicksToDateTime_m927253156D26643004345A45B5FE76648E8F8884 (int64_t ___javaScriptTicks0, const RuntimeMethod* method) ;
// System.DateTimeKind Newtonsoft.Json.Bson.BsonReader::get_DateTimeKindHandling()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BsonReader_get_DateTimeKindHandling_m7A6ED156AAC7CD3D4343B0779E4ABD90E247333D_inline (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::SpecifyKind(System.DateTime,System.DateTimeKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_SpecifyKind_mFC3F6DD6AD017F62A8AF81DAD5620AEC474871D0 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___value0, int32_t ___kind1, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonReader::EnsureBuffers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonReader_EnsureBuffers_mC7DD59EA3A760B60368F4A117D73F4448F706BB1 (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9 (const RuntimeMethod* method) ;
// System.String System.String::CreateString(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_mB7B3AC2AF28010538650051A9000369B1CD6BAB6 (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___val0, int32_t ___startIndex1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Int32 Newtonsoft.Json.Bson.BsonReader::GetLastFullCharStop(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BsonReader_GetLastFullCharStop_m5F12D814D034886A5A2CA2FADA4B8411D0FE90AD (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, int32_t ___start0, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5 (StringBuilder_t* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_mC09A30993B77CC4D8E906720683B6386F0E15747 (StringBuilder_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___value0, int32_t ___startIndex1, int32_t ___charCount2, const RuntimeMethod* method) ;
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___sourceArray0, int32_t ___sourceIndex1, RuntimeArray* ___destinationArray2, int32_t ___destinationIndex3, int32_t ___length4, const RuntimeMethod* method) ;
// System.String Newtonsoft.Json.Bson.BsonReader::GetString(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BsonReader_GetString_mB3FD61F039F2636EE8B6B4BF2CAF84A26E4DDBFC (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, int32_t ___length0, const RuntimeMethod* method) ;
// System.Void System.IO.EndOfStreamException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndOfStreamException__ctor_m5629E1A514051A3D56052BD6D2D50C054308CCA4 (EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Int32 Newtonsoft.Json.Bson.BsonReader::BytesInSequence(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BsonReader_BytesInSequence_mFEDFB2E86DEB1DE9F3773FE802BD6D37BBC1A36E (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, uint8_t ___b0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonProperty::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonProperty__ctor_mFC963BA0F736C7A11FE68BB3A4DDE63A99B3A54C (BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonString::.ctor(System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonString__ctor_mA28B714E7D11E7131A16CB152D171CA7A4A6BD56 (BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* __this, RuntimeObject* ___value0, bool ___includeLength1, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonProperty::set_Name(Newtonsoft.Json.Bson.BsonString)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BsonProperty_set_Name_mBF75E093501D61ABA9B44CD595A848386002EDA0_inline (BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE* __this, BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* ___value0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonProperty::set_Value(Newtonsoft.Json.Bson.BsonToken)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BsonProperty_set_Value_m7DAC5256E7337131CB0004255D86FBB812E5BAD8_inline (BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE* __this, BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonProperty>::Add(T)
inline void List_1_Add_m05A778DDB06E3015BA3B2B539CB6360D44308F65_inline (List_1_tDBB5CD4D0EC3C783FE3A623450331580CB409B5E* __this, BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBB5CD4D0EC3C783FE3A623450331580CB409B5E*, BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void Newtonsoft.Json.Bson.BsonToken::set_Parent(Newtonsoft.Json.Bson.BsonToken)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BsonToken_set_Parent_m6FE9310A7BE7920BFBBB78D007D3326FE25861BC_inline (BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* __this, BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* ___value0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonProperty>::GetEnumerator()
inline Enumerator_tC9B39CFED6C0A6D5CDD1FE2F790F532A7A4AB203 List_1_GetEnumerator_m872CB87380297BB9B43B61A80CB28F4A8C1C9011 (List_1_tDBB5CD4D0EC3C783FE3A623450331580CB409B5E* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tC9B39CFED6C0A6D5CDD1FE2F790F532A7A4AB203 (*) (List_1_tDBB5CD4D0EC3C783FE3A623450331580CB409B5E*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonProperty>::.ctor()
inline void List_1__ctor_m573D86B46CB0180CD99560B5E3B03E4A5CDE368E (List_1_tDBB5CD4D0EC3C783FE3A623450331580CB409B5E* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBB5CD4D0EC3C783FE3A623450331580CB409B5E*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void Newtonsoft.Json.Bson.BsonToken::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonToken__ctor_m04A0C7B9070DF73C0689038C8E2593C5FC18F8AA (BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonToken>::Add(T)
inline void List_1_Add_m7B3928D9D175A2FC23AD66D3F2E0BC9200D98E5D_inline (List_1_t39498331735ADCEED3C66A5E7F951FCC1C4EEEBE* __this, BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t39498331735ADCEED3C66A5E7F951FCC1C4EEEBE*, BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonToken>::GetEnumerator()
inline Enumerator_t597C435D76D0912631AF7909B79461C347020E0C List_1_GetEnumerator_mC2E8A71D702B5F722A83170C68470084EA6F1AEE (List_1_t39498331735ADCEED3C66A5E7F951FCC1C4EEEBE* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t597C435D76D0912631AF7909B79461C347020E0C (*) (List_1_t39498331735ADCEED3C66A5E7F951FCC1C4EEEBE*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonToken>::.ctor()
inline void List_1__ctor_m3935A6D299A58068CCFB138217E1D9C02F7130E1 (List_1_t39498331735ADCEED3C66A5E7F951FCC1C4EEEBE* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t39498331735ADCEED3C66A5E7F951FCC1C4EEEBE*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void Newtonsoft.Json.Bson.BsonEmpty::.ctor(Newtonsoft.Json.Bson.BsonType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonEmpty__ctor_m7FD72E9106B5CECA3B85DAC437D81FF1C89C8F75 (BsonEmpty_t9F20528B697AB47F6FBA41E6BA4246DBD536BAB8* __this, int8_t ___type0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonValue::.ctor(System.Object,Newtonsoft.Json.Bson.BsonType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonValue__ctor_m316255047E379B29CD5D70DBCDF98BAD4DB4C695 (BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660* __this, RuntimeObject* ___value0, int8_t ___type1, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonBoolean::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonBoolean__ctor_mBFEDD9C83B640D17F73B2ACA0B92DCD58D5781D5 (BsonBoolean_tCDA0063DFA3B0C789C19533BFA53A6E7CCD644BD* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonBinary::set_BinaryType(Newtonsoft.Json.Bson.BsonBinaryType)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BsonBinary_set_BinaryType_m967019AC06E6A447F796DCA7A73CABEFF3C7402A_inline (BsonBinary_t10CD8515CA416C5958E3FA3290910E8FD2DFB8A8* __this, uint8_t ___value0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonRegex::set_Pattern(Newtonsoft.Json.Bson.BsonString)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BsonRegex_set_Pattern_m03387AC7A329EEAA6442715EA019B93C7D4A14FF_inline (BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1* __this, BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* ___value0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonRegex::set_Options(Newtonsoft.Json.Bson.BsonString)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BsonRegex_set_Options_m8A305E5CD6B32F3A48F6BC31203892A26FE967FC_inline (BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1* __this, BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* ___value0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonWriter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter__ctor_m5B0E4DCEC60E5158D71DDF7768E0FC5B09573739 (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, const RuntimeMethod* method) ;
// System.Void System.IO.BinaryWriter::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryWriter__ctor_mF2F1235E378C3EC493A8C816597BCEB4205A9CA0 (BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___output0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonBinaryWriter::.ctor(System.IO.BinaryWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonBinaryWriter__ctor_mD40C3447EF11061CE8EEE41BB5ED7A874102DC3C (BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* __this, BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ___writer0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonBinaryWriter::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonBinaryWriter_Flush_m8844BC6FFEE6C0BE26F4D807110A1F4C1E6658DA (BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonWriter::WriteEnd(Newtonsoft.Json.JsonToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteEnd_m36FB4C43EE0F01066B13019046E5EECF96C902B8 (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, int32_t ___token0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonWriter::RemoveParent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_RemoveParent_m76AEE3E680B0AA556D984C4D7AE1848C198AF103 (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, const RuntimeMethod* method) ;
// System.Int32 Newtonsoft.Json.JsonWriter::get_Top()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonWriter_get_Top_m5095DA8B798DD98BE08ACA13C1C9CD816E9CB335 (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonBinaryWriter::WriteToken(Newtonsoft.Json.Bson.BsonToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonBinaryWriter_WriteToken_m1CBE5AB86FEB5C2399287FEAEBFB80F9094A48E9 (BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* __this, BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* ___t0, const RuntimeMethod* method) ;
// Newtonsoft.Json.JsonWriterException Newtonsoft.Json.JsonWriterException::Create(Newtonsoft.Json.JsonWriter,System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonWriterException_tF13EC07A2159B2C5951971D4AED5A195DEBE8AAA* JsonWriterException_Create_mA440D59D85200435C7AFC40CDEF5773888D0F94B (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* ___writer0, String_t* ___message1, Exception_t* ___ex2, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonWriter::WriteStartArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteStartArray_mE2EDFEE60214B989C151DCD66C2B3219D927C75A (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonArray::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonArray__ctor_m3121DAA5995AA53B27FCE79E5F69D13131F1F9F1 (BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonWriter::AddParent(Newtonsoft.Json.Bson.BsonToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_AddParent_m5733DE6024C0F5F3DF8B2638EB25D9DF15AB2761 (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* ___container0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonWriter::WriteStartObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteStartObject_m327A0474DB3032162614C57B6154773EA900C153 (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonObject__ctor_m630E32FEFB85ABC73DA890C946486161162E0BDA (BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonWriter::WritePropertyName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WritePropertyName_mD805FBFFF2D43C2EC1E23A59C0102E5244CD537F (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonWriter::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Close_m550789FF5D483AA86A99B5301B375F5BFB08C523 (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, const RuntimeMethod* method) ;
// System.Boolean Newtonsoft.Json.JsonWriter::get_CloseOutput()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool JsonWriter_get_CloseOutput_m0A40D11FF244B8766FA5A2467C78024B6E2F4736_inline (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonBinaryWriter::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonBinaryWriter_Close_m16C6400A2D52FFC66BC3F29D7A94373EDCB6291C (BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonWriter::AddToken(Newtonsoft.Json.Bson.BsonToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_AddToken_m3B3692A74D77D31F63999E7E77DD4386B74A9901 (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* ___token0, const RuntimeMethod* method) ;
// Newtonsoft.Json.Bson.BsonToken Newtonsoft.Json.Bson.BsonToken::get_Parent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* BsonToken_get_Parent_m05A247A8B1E2FB87849EB7B6FE0B49A606BEF1A2_inline (BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonObject::Add(System.String,Newtonsoft.Json.Bson.BsonToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonObject_Add_mC5FD9CC9FC974FC4D7B10981A33291E88DB9DC79 (BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB* __this, String_t* ___name0, BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* ___token1, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonArray::Add(Newtonsoft.Json.Bson.BsonToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonArray_Add_m483471C0CDB8A4438E1A0274845DC6424BDB765D (BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1* __this, BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* ___token0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonWriter::SetWriteState(Newtonsoft.Json.JsonToken,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_SetWriteState_m5B9E16507E0F0539F8BD43ACBE7A4DE549DA9463 (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, int32_t ___token0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Byte[] System.Numerics.BigInteger::ToByteArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BigInteger_ToByteArray_mC501D315AF605FB0EF172628E9D4C95D2F015EB3 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonBinary::.ctor(System.Byte[],Newtonsoft.Json.Bson.BsonBinaryType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonBinary__ctor_m5B3120436DF99BD5D9DE02D2695CD9DE2CE7BB5B (BsonBinary_t10CD8515CA416C5958E3FA3290910E8FD2DFB8A8* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, uint8_t ___binaryType1, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteValue_mC96DBA6DC02ACB9D67D4524889764368DB468C2E (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonWriter::WriteNull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteNull_m2BF712564701AA53BAC6BD922677FF7B0B2310BC (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonWriter::WriteUndefined()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteUndefined_m507BF49F988B94F07230A9B502D7E430E1ACCF00 (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteValue_m3ECF13257A8D1AB90301A4174D42337149BC9D0C (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteValue_m8E9BDBD7C29F82DCCB87B4F5D17304F5A341A5B8 (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonWriter::AddValue(System.Object,Newtonsoft.Json.Bson.BsonType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_AddValue_m1EEA7A7873B2D58AAC37EB24AB9CFB3F81DB29A5 (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, RuntimeObject* ___value0, int8_t ___type1, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteValue_m94B80E8F2C3BF83E01624C8DE99D37CAEF2FE39B (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, uint32_t ___value0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteValue_mEAB0A21EA57BEDF7BAD742C3F2A75EEB2E1091FE (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, int64_t ___value0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteValue_m9A6D49A850A3EA706B7143FF45BCF9DECF2A6ED5 (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, uint64_t ___value0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteValue_mB83A734CC93E3FA5CF86ACD51DC69F42DF7FEA54 (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteValue_m2C9947B42490CA9AB5E8EEFB36B3E00359C472D9 (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, double ___value0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteValue_m9EF9755CB7576F61E081148C00169A7128903B8B (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteValue_mE7084E3565A5BAE07F9E553F7C9362C2022E5B44 (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, int16_t ___value0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteValue_m152C46080EAA9C377E3E2E2942B16273F93A2148 (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, uint16_t ___value0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteValue_mD5E4500BFFBC814E26C57409026A403C71EEECCF (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.String System.Char::ToString(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Char_ToString_m34499826F048A38EB8216D5844A5DA49F54719C8 (Il2CppChar* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteValue_m1AEB560BFD2393EBBE9E766263CA01E3BA2D0E6F (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, uint8_t ___value0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.SByte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteValue_m0E635E0E6B005CD8D434FE57FAC79655FD774C4C (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, int8_t ___value0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteValue_mBCA33B3507B7A3BBDA956DC573ACEEB6A9D359D8 (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___value0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteValue_m0FF59870C2C94523F795BF6F7F2FFC30CE179F8A (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___value0, const RuntimeMethod* method) ;
// Newtonsoft.Json.DateTimeZoneHandling Newtonsoft.Json.JsonWriter::get_DateTimeZoneHandling()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t JsonWriter_get_DateTimeZoneHandling_m70A3776234605D953796332656844492C164F799_inline (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, const RuntimeMethod* method) ;
// System.DateTime Newtonsoft.Json.Utilities.DateTimeUtils::EnsureDateTime(System.DateTime,Newtonsoft.Json.DateTimeZoneHandling)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTimeUtils_EnsureDateTime_mA79D09FFD516714FB3A1296F5E55780FBD5191C8 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___value0, int32_t ___timeZone1, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.DateTimeOffset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteValue_mF792BC34323AF19A7161B55838A630A9E169A132 (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___value0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteValue_mE1F445EACF5FB3E7EDF70D0C89BB230D95084DAD (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteValue_mE9DA95DC1D6DAC672C97C861B92D3CB63933EC7B (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, Guid_t ___value0, const RuntimeMethod* method) ;
// System.Byte[] System.Guid::ToByteArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Guid_ToByteArray_m6EBFB2F42D3760D9143050A3A8ED03F085F3AFE9 (Guid_t* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteValue_mBE7C0F46DDAD5B5F4D814A322D271B8141BF0F07 (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___value0, const RuntimeMethod* method) ;
// System.String System.TimeSpan::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TimeSpan_ToString_m44D5BF48E35E18BB8B99A86B6535DA5E847FFE92 (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Uri::op_Equality(System.Uri,System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_op_Equality_mD7D7AAB7023C0873B37D8B8C7195BEF34002A194 (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___uri10, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___uri21, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteValue_mBEB204C502C7E1547FC955BDBF558C0D616CD65A (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___value0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonRegex::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonRegex__ctor_mA823184E2E1262D62F38DC5D1ACC130B5B0EEE99 (BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1* __this, String_t* ___pattern0, String_t* ___options1, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Newtonsoft.Json.Converters.XmlDocumentWrapper::.ctor(System.Xml.XmlDocument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlDocumentWrapper__ctor_m2DDFA872888661813F74523693DB4A34FE765DFE (XmlDocumentWrapper_t2C596BBEC57603F9B8DA72446CAABDC3DE251624* __this, XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* ___document0, const RuntimeMethod* method) 
{
	{
		XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* L_0 = ___document0;
		XmlNodeWrapper__ctor_m73806A21D3A81678F6099B62E80F7B6549D56D17(__this, L_0, NULL);
		XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* L_1 = ___document0;
		__this->____document_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____document_3), (void*)L_1);
		return;
	}
}
// Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.XmlDocumentWrapper::CreateComment(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlDocumentWrapper_CreateComment_mC922EE1533661AC0B35C262B206E321E22E440EE (XmlDocumentWrapper_t2C596BBEC57603F9B8DA72446CAABDC3DE251624* __this, String_t* ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlNodeWrapper_tE399A7CC58A6C5CE54C6EFE0D075A7B88C71B991_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* L_0 = __this->____document_3;
		String_t* L_1 = ___data0;
		NullCheck(L_0);
		XmlComment_tD3C4E7E2E90A8CA25C46D2616BCF138D40072AD9* L_2;
		L_2 = VirtualFuncInvoker1< XmlComment_tD3C4E7E2E90A8CA25C46D2616BCF138D40072AD9*, String_t* >::Invoke(60 /* System.Xml.XmlComment System.Xml.XmlDocument::CreateComment(System.String) */, L_0, L_1);
		XmlNodeWrapper_tE399A7CC58A6C5CE54C6EFE0D075A7B88C71B991* L_3 = (XmlNodeWrapper_tE399A7CC58A6C5CE54C6EFE0D075A7B88C71B991*)il2cpp_codegen_object_new(XmlNodeWrapper_tE399A7CC58A6C5CE54C6EFE0D075A7B88C71B991_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		XmlNodeWrapper__ctor_m73806A21D3A81678F6099B62E80F7B6549D56D17(L_3, L_2, NULL);
		return L_3;
	}
}
// Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.XmlDocumentWrapper::CreateTextNode(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlDocumentWrapper_CreateTextNode_mC5999FC1111FF593533A0A3C24981EB68E11CDB8 (XmlDocumentWrapper_t2C596BBEC57603F9B8DA72446CAABDC3DE251624* __this, String_t* ___text0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlNodeWrapper_tE399A7CC58A6C5CE54C6EFE0D075A7B88C71B991_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* L_0 = __this->____document_3;
		String_t* L_1 = ___text0;
		NullCheck(L_0);
		XmlText_t30AEB94C64DEFEE255D907869C96FDD25C6E812A* L_2;
		L_2 = VirtualFuncInvoker1< XmlText_t30AEB94C64DEFEE255D907869C96FDD25C6E812A*, String_t* >::Invoke(66 /* System.Xml.XmlText System.Xml.XmlDocument::CreateTextNode(System.String) */, L_0, L_1);
		XmlNodeWrapper_tE399A7CC58A6C5CE54C6EFE0D075A7B88C71B991* L_3 = (XmlNodeWrapper_tE399A7CC58A6C5CE54C6EFE0D075A7B88C71B991*)il2cpp_codegen_object_new(XmlNodeWrapper_tE399A7CC58A6C5CE54C6EFE0D075A7B88C71B991_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		XmlNodeWrapper__ctor_m73806A21D3A81678F6099B62E80F7B6549D56D17(L_3, L_2, NULL);
		return L_3;
	}
}
// Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.XmlDocumentWrapper::CreateCDataSection(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlDocumentWrapper_CreateCDataSection_m09B05E9D61F98937C0CDABB9C2EB8D09E56BD033 (XmlDocumentWrapper_t2C596BBEC57603F9B8DA72446CAABDC3DE251624* __this, String_t* ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlNodeWrapper_tE399A7CC58A6C5CE54C6EFE0D075A7B88C71B991_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* L_0 = __this->____document_3;
		String_t* L_1 = ___data0;
		NullCheck(L_0);
		XmlCDataSection_t2D6B8A6CFF3ACB0BD27368A8D5A56FD674B1E8CA* L_2;
		L_2 = VirtualFuncInvoker1< XmlCDataSection_t2D6B8A6CFF3ACB0BD27368A8D5A56FD674B1E8CA*, String_t* >::Invoke(59 /* System.Xml.XmlCDataSection System.Xml.XmlDocument::CreateCDataSection(System.String) */, L_0, L_1);
		XmlNodeWrapper_tE399A7CC58A6C5CE54C6EFE0D075A7B88C71B991* L_3 = (XmlNodeWrapper_tE399A7CC58A6C5CE54C6EFE0D075A7B88C71B991*)il2cpp_codegen_object_new(XmlNodeWrapper_tE399A7CC58A6C5CE54C6EFE0D075A7B88C71B991_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		XmlNodeWrapper__ctor_m73806A21D3A81678F6099B62E80F7B6549D56D17(L_3, L_2, NULL);
		return L_3;
	}
}
// Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.XmlDocumentWrapper::CreateWhitespace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlDocumentWrapper_CreateWhitespace_m680AFD5D1D1E347930980839A099D5DAA4386253 (XmlDocumentWrapper_t2C596BBEC57603F9B8DA72446CAABDC3DE251624* __this, String_t* ___text0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlNodeWrapper_tE399A7CC58A6C5CE54C6EFE0D075A7B88C71B991_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* L_0 = __this->____document_3;
		String_t* L_1 = ___text0;
		NullCheck(L_0);
		XmlWhitespace_t19767FEBC987857ADED0437FC1554F86E7D00D24* L_2;
		L_2 = VirtualFuncInvoker1< XmlWhitespace_t19767FEBC987857ADED0437FC1554F86E7D00D24*, String_t* >::Invoke(68 /* System.Xml.XmlWhitespace System.Xml.XmlDocument::CreateWhitespace(System.String) */, L_0, L_1);
		XmlNodeWrapper_tE399A7CC58A6C5CE54C6EFE0D075A7B88C71B991* L_3 = (XmlNodeWrapper_tE399A7CC58A6C5CE54C6EFE0D075A7B88C71B991*)il2cpp_codegen_object_new(XmlNodeWrapper_tE399A7CC58A6C5CE54C6EFE0D075A7B88C71B991_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		XmlNodeWrapper__ctor_m73806A21D3A81678F6099B62E80F7B6549D56D17(L_3, L_2, NULL);
		return L_3;
	}
}
// Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.XmlDocumentWrapper::CreateSignificantWhitespace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlDocumentWrapper_CreateSignificantWhitespace_mAF94AFB2BB046CC35F48AF3CA5C93ABA2558D908 (XmlDocumentWrapper_t2C596BBEC57603F9B8DA72446CAABDC3DE251624* __this, String_t* ___text0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlNodeWrapper_tE399A7CC58A6C5CE54C6EFE0D075A7B88C71B991_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* L_0 = __this->____document_3;
		String_t* L_1 = ___text0;
		NullCheck(L_0);
		XmlSignificantWhitespace_t43EAA36EF021A2B6DBD9FA49B85501A43BE9CBCE* L_2;
		L_2 = VirtualFuncInvoker1< XmlSignificantWhitespace_t43EAA36EF021A2B6DBD9FA49B85501A43BE9CBCE*, String_t* >::Invoke(67 /* System.Xml.XmlSignificantWhitespace System.Xml.XmlDocument::CreateSignificantWhitespace(System.String) */, L_0, L_1);
		XmlNodeWrapper_tE399A7CC58A6C5CE54C6EFE0D075A7B88C71B991* L_3 = (XmlNodeWrapper_tE399A7CC58A6C5CE54C6EFE0D075A7B88C71B991*)il2cpp_codegen_object_new(XmlNodeWrapper_tE399A7CC58A6C5CE54C6EFE0D075A7B88C71B991_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		XmlNodeWrapper__ctor_m73806A21D3A81678F6099B62E80F7B6549D56D17(L_3, L_2, NULL);
		return L_3;
	}
}
// Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.XmlDocumentWrapper::CreateXmlDeclaration(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlDocumentWrapper_CreateXmlDeclaration_m5B96DF051DD3F731A388796F6D92B269D69EFE75 (XmlDocumentWrapper_t2C596BBEC57603F9B8DA72446CAABDC3DE251624* __this, String_t* ___version0, String_t* ___encoding1, String_t* ___standalone2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlDeclarationWrapper_t9167E036A5BE1475233675EC025E96DCA3CC1945_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* L_0 = __this->____document_3;
		String_t* L_1 = ___version0;
		String_t* L_2 = ___encoding1;
		String_t* L_3 = ___standalone2;
		NullCheck(L_0);
		XmlDeclaration_tA04662FA58C306A24C864BDE73D1B410858E7A79* L_4;
		L_4 = VirtualFuncInvoker3< XmlDeclaration_tA04662FA58C306A24C864BDE73D1B410858E7A79*, String_t*, String_t*, String_t* >::Invoke(65 /* System.Xml.XmlDeclaration System.Xml.XmlDocument::CreateXmlDeclaration(System.String,System.String,System.String) */, L_0, L_1, L_2, L_3);
		XmlDeclarationWrapper_t9167E036A5BE1475233675EC025E96DCA3CC1945* L_5 = (XmlDeclarationWrapper_t9167E036A5BE1475233675EC025E96DCA3CC1945*)il2cpp_codegen_object_new(XmlDeclarationWrapper_t9167E036A5BE1475233675EC025E96DCA3CC1945_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		XmlDeclarationWrapper__ctor_m4EAEA1BBD6AA3E66D3DBF18613BDCC12294F9529(L_5, L_4, NULL);
		return L_5;
	}
}
// Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.XmlDocumentWrapper::CreateXmlDocumentType(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlDocumentWrapper_CreateXmlDocumentType_mD0588943D845FEA8D58958FD8694796DD94CA07C (XmlDocumentWrapper_t2C596BBEC57603F9B8DA72446CAABDC3DE251624* __this, String_t* ___name0, String_t* ___publicId1, String_t* ___systemId2, String_t* ___internalSubset3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlDocumentTypeWrapper_t8E470E157344CAE69E9551F6D0826C0E4038C4ED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* L_0 = __this->____document_3;
		String_t* L_1 = ___name0;
		String_t* L_2 = ___publicId1;
		String_t* L_3 = ___systemId2;
		NullCheck(L_0);
		XmlDocumentType_tFD7379E45412FC2EBD65280ED3DE7A1C941A8D9E* L_4;
		L_4 = VirtualFuncInvoker4< XmlDocumentType_tFD7379E45412FC2EBD65280ED3DE7A1C941A8D9E*, String_t*, String_t*, String_t*, String_t* >::Invoke(61 /* System.Xml.XmlDocumentType System.Xml.XmlDocument::CreateDocumentType(System.String,System.String,System.String,System.String) */, L_0, L_1, L_2, L_3, (String_t*)NULL);
		XmlDocumentTypeWrapper_t8E470E157344CAE69E9551F6D0826C0E4038C4ED* L_5 = (XmlDocumentTypeWrapper_t8E470E157344CAE69E9551F6D0826C0E4038C4ED*)il2cpp_codegen_object_new(XmlDocumentTypeWrapper_t8E470E157344CAE69E9551F6D0826C0E4038C4ED_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		XmlDocumentTypeWrapper__ctor_m127F27D80D29C326F622FFD70CA1B3549F90C78D(L_5, L_4, NULL);
		return L_5;
	}
}
// Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.XmlDocumentWrapper::CreateProcessingInstruction(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlDocumentWrapper_CreateProcessingInstruction_mABF52EF273331B86C3CEDD3B50362E540CFB27D9 (XmlDocumentWrapper_t2C596BBEC57603F9B8DA72446CAABDC3DE251624* __this, String_t* ___target0, String_t* ___data1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlNodeWrapper_tE399A7CC58A6C5CE54C6EFE0D075A7B88C71B991_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* L_0 = __this->____document_3;
		String_t* L_1 = ___target0;
		String_t* L_2 = ___data1;
		NullCheck(L_0);
		XmlProcessingInstruction_t8182CD263F29029BCB56A5FBB720DEB0D51EA5A3* L_3;
		L_3 = VirtualFuncInvoker2< XmlProcessingInstruction_t8182CD263F29029BCB56A5FBB720DEB0D51EA5A3*, String_t*, String_t* >::Invoke(64 /* System.Xml.XmlProcessingInstruction System.Xml.XmlDocument::CreateProcessingInstruction(System.String,System.String) */, L_0, L_1, L_2);
		XmlNodeWrapper_tE399A7CC58A6C5CE54C6EFE0D075A7B88C71B991* L_4 = (XmlNodeWrapper_tE399A7CC58A6C5CE54C6EFE0D075A7B88C71B991*)il2cpp_codegen_object_new(XmlNodeWrapper_tE399A7CC58A6C5CE54C6EFE0D075A7B88C71B991_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		XmlNodeWrapper__ctor_m73806A21D3A81678F6099B62E80F7B6549D56D17(L_4, L_3, NULL);
		return L_4;
	}
}
// Newtonsoft.Json.Converters.IXmlElement Newtonsoft.Json.Converters.XmlDocumentWrapper::CreateElement(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlDocumentWrapper_CreateElement_m45C3BF72AA259B9947F65860F97065B1C283335D (XmlDocumentWrapper_t2C596BBEC57603F9B8DA72446CAABDC3DE251624* __this, String_t* ___elementName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlElementWrapper_tFFCFF4F15C008DF0469426DFE31B6A304DDEEC20_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* L_0 = __this->____document_3;
		String_t* L_1 = ___elementName0;
		NullCheck(L_0);
		XmlElement_t9A08B533E9A6B3548A1DE35476186F7ECCDF6FF1* L_2;
		L_2 = XmlDocument_CreateElement_m4CFE00BFBBAE8805B2E5B7566E7C896334092E93(L_0, L_1, NULL);
		XmlElementWrapper_tFFCFF4F15C008DF0469426DFE31B6A304DDEEC20* L_3 = (XmlElementWrapper_tFFCFF4F15C008DF0469426DFE31B6A304DDEEC20*)il2cpp_codegen_object_new(XmlElementWrapper_tFFCFF4F15C008DF0469426DFE31B6A304DDEEC20_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		XmlElementWrapper__ctor_m5EA54DDEBFA94B7DF7907BF8BCAD9A01C0AAE237(L_3, L_2, NULL);
		return L_3;
	}
}
// Newtonsoft.Json.Converters.IXmlElement Newtonsoft.Json.Converters.XmlDocumentWrapper::CreateElement(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlDocumentWrapper_CreateElement_m98D9C428823DBD96E19D1DC3B5BCCB304A28D941 (XmlDocumentWrapper_t2C596BBEC57603F9B8DA72446CAABDC3DE251624* __this, String_t* ___qualifiedName0, String_t* ___namespaceUri1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlElementWrapper_tFFCFF4F15C008DF0469426DFE31B6A304DDEEC20_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* L_0 = __this->____document_3;
		String_t* L_1 = ___qualifiedName0;
		String_t* L_2 = ___namespaceUri1;
		NullCheck(L_0);
		XmlElement_t9A08B533E9A6B3548A1DE35476186F7ECCDF6FF1* L_3;
		L_3 = XmlDocument_CreateElement_m4180DF31B3B4CD8516B7881494D99720648BD95B(L_0, L_1, L_2, NULL);
		XmlElementWrapper_tFFCFF4F15C008DF0469426DFE31B6A304DDEEC20* L_4 = (XmlElementWrapper_tFFCFF4F15C008DF0469426DFE31B6A304DDEEC20*)il2cpp_codegen_object_new(XmlElementWrapper_tFFCFF4F15C008DF0469426DFE31B6A304DDEEC20_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		XmlElementWrapper__ctor_m5EA54DDEBFA94B7DF7907BF8BCAD9A01C0AAE237(L_4, L_3, NULL);
		return L_4;
	}
}
// Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.XmlDocumentWrapper::CreateAttribute(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlDocumentWrapper_CreateAttribute_m79CF11B365F9F1FD574ECA810BF1F13FDDD82464 (XmlDocumentWrapper_t2C596BBEC57603F9B8DA72446CAABDC3DE251624* __this, String_t* ___name0, String_t* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlNodeWrapper_tE399A7CC58A6C5CE54C6EFE0D075A7B88C71B991_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* L_0 = __this->____document_3;
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		XmlAttribute_t4B6CC461196FBF5CC9F777E74CC82C98E0CA9D18* L_2;
		L_2 = XmlDocument_CreateAttribute_m42F583C11D788DB6E7B1C2EFAF112CB0C6118D06(L_0, L_1, NULL);
		XmlNodeWrapper_tE399A7CC58A6C5CE54C6EFE0D075A7B88C71B991* L_3 = (XmlNodeWrapper_tE399A7CC58A6C5CE54C6EFE0D075A7B88C71B991*)il2cpp_codegen_object_new(XmlNodeWrapper_tE399A7CC58A6C5CE54C6EFE0D075A7B88C71B991_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		XmlNodeWrapper__ctor_m73806A21D3A81678F6099B62E80F7B6549D56D17(L_3, L_2, NULL);
		XmlNodeWrapper_tE399A7CC58A6C5CE54C6EFE0D075A7B88C71B991* L_4 = L_3;
		String_t* L_5 = ___value1;
		NullCheck(L_4);
		XmlNodeWrapper_set_Value_m978C9C12AC1A81119D1DA28B143406231E41F41E(L_4, L_5, NULL);
		return L_4;
	}
}
// Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.XmlDocumentWrapper::CreateAttribute(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlDocumentWrapper_CreateAttribute_mC12DF3D00C4027F881A72FE1961BFBCE47224D49 (XmlDocumentWrapper_t2C596BBEC57603F9B8DA72446CAABDC3DE251624* __this, String_t* ___qualifiedName0, String_t* ___namespaceUri1, String_t* ___value2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlNodeWrapper_tE399A7CC58A6C5CE54C6EFE0D075A7B88C71B991_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* L_0 = __this->____document_3;
		String_t* L_1 = ___qualifiedName0;
		String_t* L_2 = ___namespaceUri1;
		NullCheck(L_0);
		XmlAttribute_t4B6CC461196FBF5CC9F777E74CC82C98E0CA9D18* L_3;
		L_3 = XmlDocument_CreateAttribute_m5DC489B6B051905264E2FD30A58CD380337D2F18(L_0, L_1, L_2, NULL);
		XmlNodeWrapper_tE399A7CC58A6C5CE54C6EFE0D075A7B88C71B991* L_4 = (XmlNodeWrapper_tE399A7CC58A6C5CE54C6EFE0D075A7B88C71B991*)il2cpp_codegen_object_new(XmlNodeWrapper_tE399A7CC58A6C5CE54C6EFE0D075A7B88C71B991_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		XmlNodeWrapper__ctor_m73806A21D3A81678F6099B62E80F7B6549D56D17(L_4, L_3, NULL);
		XmlNodeWrapper_tE399A7CC58A6C5CE54C6EFE0D075A7B88C71B991* L_5 = L_4;
		String_t* L_6 = ___value2;
		NullCheck(L_5);
		XmlNodeWrapper_set_Value_m978C9C12AC1A81119D1DA28B143406231E41F41E(L_5, L_6, NULL);
		return L_5;
	}
}
// Newtonsoft.Json.Converters.IXmlElement Newtonsoft.Json.Converters.XmlDocumentWrapper::get_DocumentElement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlDocumentWrapper_get_DocumentElement_m55855C0394DD8B83FDD19B0E71EED3B4994E7119 (XmlDocumentWrapper_t2C596BBEC57603F9B8DA72446CAABDC3DE251624* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlElementWrapper_tFFCFF4F15C008DF0469426DFE31B6A304DDEEC20_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* L_0 = __this->____document_3;
		NullCheck(L_0);
		XmlElement_t9A08B533E9A6B3548A1DE35476186F7ECCDF6FF1* L_1;
		L_1 = XmlDocument_get_DocumentElement_mE87523DCD2D59F8BA6175DBA01D70133E202A2C8(L_0, NULL);
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		return (RuntimeObject*)NULL;
	}

IL_000f:
	{
		XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* L_2 = __this->____document_3;
		NullCheck(L_2);
		XmlElement_t9A08B533E9A6B3548A1DE35476186F7ECCDF6FF1* L_3;
		L_3 = XmlDocument_get_DocumentElement_mE87523DCD2D59F8BA6175DBA01D70133E202A2C8(L_2, NULL);
		XmlElementWrapper_tFFCFF4F15C008DF0469426DFE31B6A304DDEEC20* L_4 = (XmlElementWrapper_tFFCFF4F15C008DF0469426DFE31B6A304DDEEC20*)il2cpp_codegen_object_new(XmlElementWrapper_tFFCFF4F15C008DF0469426DFE31B6A304DDEEC20_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		XmlElementWrapper__ctor_m5EA54DDEBFA94B7DF7907BF8BCAD9A01C0AAE237(L_4, L_3, NULL);
		return L_4;
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
// System.Void Newtonsoft.Json.Converters.XmlElementWrapper::.ctor(System.Xml.XmlElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlElementWrapper__ctor_m5EA54DDEBFA94B7DF7907BF8BCAD9A01C0AAE237 (XmlElementWrapper_tFFCFF4F15C008DF0469426DFE31B6A304DDEEC20* __this, XmlElement_t9A08B533E9A6B3548A1DE35476186F7ECCDF6FF1* ___element0, const RuntimeMethod* method) 
{
	{
		XmlElement_t9A08B533E9A6B3548A1DE35476186F7ECCDF6FF1* L_0 = ___element0;
		XmlNodeWrapper__ctor_m73806A21D3A81678F6099B62E80F7B6549D56D17(__this, L_0, NULL);
		XmlElement_t9A08B533E9A6B3548A1DE35476186F7ECCDF6FF1* L_1 = ___element0;
		__this->____element_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____element_3), (void*)L_1);
		return;
	}
}
// System.Void Newtonsoft.Json.Converters.XmlElementWrapper::SetAttributeNode(Newtonsoft.Json.Converters.IXmlNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlElementWrapper_SetAttributeNode_m8093E93AE8461E128D28CCAFF4A7355993C2DE67 (XmlElementWrapper_tFFCFF4F15C008DF0469426DFE31B6A304DDEEC20* __this, RuntimeObject* ___attribute0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlAttribute_t4B6CC461196FBF5CC9F777E74CC82C98E0CA9D18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlNodeWrapper_tE399A7CC58A6C5CE54C6EFE0D075A7B88C71B991_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XmlNodeWrapper_tE399A7CC58A6C5CE54C6EFE0D075A7B88C71B991* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___attribute0;
		V_0 = ((XmlNodeWrapper_tE399A7CC58A6C5CE54C6EFE0D075A7B88C71B991*)CastclassClass((RuntimeObject*)L_0, XmlNodeWrapper_tE399A7CC58A6C5CE54C6EFE0D075A7B88C71B991_il2cpp_TypeInfo_var));
		XmlElement_t9A08B533E9A6B3548A1DE35476186F7ECCDF6FF1* L_1 = __this->____element_3;
		XmlNodeWrapper_tE399A7CC58A6C5CE54C6EFE0D075A7B88C71B991* L_2 = V_0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = XmlNodeWrapper_get_WrappedNode_m95E187562E167E13524197070157B15EE0ABFDFF_inline(L_2, NULL);
		NullCheck(L_1);
		XmlAttribute_t4B6CC461196FBF5CC9F777E74CC82C98E0CA9D18* L_4;
		L_4 = VirtualFuncInvoker1< XmlAttribute_t4B6CC461196FBF5CC9F777E74CC82C98E0CA9D18*, XmlAttribute_t4B6CC461196FBF5CC9F777E74CC82C98E0CA9D18* >::Invoke(60 /* System.Xml.XmlAttribute System.Xml.XmlElement::SetAttributeNode(System.Xml.XmlAttribute) */, L_1, ((XmlAttribute_t4B6CC461196FBF5CC9F777E74CC82C98E0CA9D18*)CastclassClass((RuntimeObject*)L_3, XmlAttribute_t4B6CC461196FBF5CC9F777E74CC82C98E0CA9D18_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.String Newtonsoft.Json.Converters.XmlElementWrapper::GetPrefixOfNamespace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlElementWrapper_GetPrefixOfNamespace_m6C70E6D6B59A1E6534EFA7574D2050DCD258C3E7 (XmlElementWrapper_tFFCFF4F15C008DF0469426DFE31B6A304DDEEC20* __this, String_t* ___namespaceUri0, const RuntimeMethod* method) 
{
	{
		XmlElement_t9A08B533E9A6B3548A1DE35476186F7ECCDF6FF1* L_0 = __this->____element_3;
		String_t* L_1 = ___namespaceUri0;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = VirtualFuncInvoker1< String_t*, String_t* >::Invoke(46 /* System.String System.Xml.XmlNode::GetPrefixOfNamespace(System.String) */, L_0, L_1);
		return L_2;
	}
}
// System.Boolean Newtonsoft.Json.Converters.XmlElementWrapper::get_IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlElementWrapper_get_IsEmpty_m6C29E47E666F9A547CB3E8367FB741D1DC08C6AA (XmlElementWrapper_tFFCFF4F15C008DF0469426DFE31B6A304DDEEC20* __this, const RuntimeMethod* method) 
{
	{
		XmlElement_t9A08B533E9A6B3548A1DE35476186F7ECCDF6FF1* L_0 = __this->____element_3;
		NullCheck(L_0);
		bool L_1;
		L_1 = XmlElement_get_IsEmpty_m3FD670ABE3BE49AF263E1B75875FA606CC671B5F(L_0, NULL);
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
// System.Void Newtonsoft.Json.Converters.XmlDeclarationWrapper::.ctor(System.Xml.XmlDeclaration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlDeclarationWrapper__ctor_m4EAEA1BBD6AA3E66D3DBF18613BDCC12294F9529 (XmlDeclarationWrapper_t9167E036A5BE1475233675EC025E96DCA3CC1945* __this, XmlDeclaration_tA04662FA58C306A24C864BDE73D1B410858E7A79* ___declaration0, const RuntimeMethod* method) 
{
	{
		XmlDeclaration_tA04662FA58C306A24C864BDE73D1B410858E7A79* L_0 = ___declaration0;
		XmlNodeWrapper__ctor_m73806A21D3A81678F6099B62E80F7B6549D56D17(__this, L_0, NULL);
		XmlDeclaration_tA04662FA58C306A24C864BDE73D1B410858E7A79* L_1 = ___declaration0;
		__this->____declaration_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____declaration_3), (void*)L_1);
		return;
	}
}
// System.String Newtonsoft.Json.Converters.XmlDeclarationWrapper::get_Version()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlDeclarationWrapper_get_Version_m5AC22814EC256D574E5D37DA6601925D92B9E7CA (XmlDeclarationWrapper_t9167E036A5BE1475233675EC025E96DCA3CC1945* __this, const RuntimeMethod* method) 
{
	{
		XmlDeclaration_tA04662FA58C306A24C864BDE73D1B410858E7A79* L_0 = __this->____declaration_3;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = XmlDeclaration_get_Version_m50261F1E46B645E69A99504F494FFD3BF915E633_inline(L_0, NULL);
		return L_1;
	}
}
// System.String Newtonsoft.Json.Converters.XmlDeclarationWrapper::get_Encoding()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlDeclarationWrapper_get_Encoding_m479E2628A4A6375AAB4C7D302D4481DB88320E23 (XmlDeclarationWrapper_t9167E036A5BE1475233675EC025E96DCA3CC1945* __this, const RuntimeMethod* method) 
{
	{
		XmlDeclaration_tA04662FA58C306A24C864BDE73D1B410858E7A79* L_0 = __this->____declaration_3;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = XmlDeclaration_get_Encoding_m09D89DCD8457C62A6E49B9506A65A271DDBD011F_inline(L_0, NULL);
		return L_1;
	}
}
// System.Void Newtonsoft.Json.Converters.XmlDeclarationWrapper::set_Encoding(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlDeclarationWrapper_set_Encoding_mB136AB1651584B374A3B213587B380855508D58B (XmlDeclarationWrapper_t9167E036A5BE1475233675EC025E96DCA3CC1945* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		XmlDeclaration_tA04662FA58C306A24C864BDE73D1B410858E7A79* L_0 = __this->____declaration_3;
		String_t* L_1 = ___value0;
		NullCheck(L_0);
		XmlDeclaration_set_Encoding_m743178C17460B204CFFEFFC0960A77E4A6289A8B(L_0, L_1, NULL);
		return;
	}
}
// System.String Newtonsoft.Json.Converters.XmlDeclarationWrapper::get_Standalone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlDeclarationWrapper_get_Standalone_mA75E58DC0B6B4D48194D79195D1ECBA5CF2A0E5F (XmlDeclarationWrapper_t9167E036A5BE1475233675EC025E96DCA3CC1945* __this, const RuntimeMethod* method) 
{
	{
		XmlDeclaration_tA04662FA58C306A24C864BDE73D1B410858E7A79* L_0 = __this->____declaration_3;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = XmlDeclaration_get_Standalone_m46CC1833EE3C478318FF865E98A6899E440DDC6C_inline(L_0, NULL);
		return L_1;
	}
}
// System.Void Newtonsoft.Json.Converters.XmlDeclarationWrapper::set_Standalone(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlDeclarationWrapper_set_Standalone_mD36763D668EBD12A31E2EE3C5883B88162F92FE7 (XmlDeclarationWrapper_t9167E036A5BE1475233675EC025E96DCA3CC1945* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		XmlDeclaration_tA04662FA58C306A24C864BDE73D1B410858E7A79* L_0 = __this->____declaration_3;
		String_t* L_1 = ___value0;
		NullCheck(L_0);
		XmlDeclaration_set_Standalone_m867389C9FBF0064E3FDA7EBDEAD4CF30E84F49C2(L_0, L_1, NULL);
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
// System.Void Newtonsoft.Json.Converters.XmlDocumentTypeWrapper::.ctor(System.Xml.XmlDocumentType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlDocumentTypeWrapper__ctor_m127F27D80D29C326F622FFD70CA1B3549F90C78D (XmlDocumentTypeWrapper_t8E470E157344CAE69E9551F6D0826C0E4038C4ED* __this, XmlDocumentType_tFD7379E45412FC2EBD65280ED3DE7A1C941A8D9E* ___documentType0, const RuntimeMethod* method) 
{
	{
		XmlDocumentType_tFD7379E45412FC2EBD65280ED3DE7A1C941A8D9E* L_0 = ___documentType0;
		XmlNodeWrapper__ctor_m73806A21D3A81678F6099B62E80F7B6549D56D17(__this, L_0, NULL);
		XmlDocumentType_tFD7379E45412FC2EBD65280ED3DE7A1C941A8D9E* L_1 = ___documentType0;
		__this->____documentType_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____documentType_3), (void*)L_1);
		return;
	}
}
// System.String Newtonsoft.Json.Converters.XmlDocumentTypeWrapper::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlDocumentTypeWrapper_get_Name_m2FA9037C5566D8AB029C0D69129E3B60CF9DC510 (XmlDocumentTypeWrapper_t8E470E157344CAE69E9551F6D0826C0E4038C4ED* __this, const RuntimeMethod* method) 
{
	{
		XmlDocumentType_tFD7379E45412FC2EBD65280ED3DE7A1C941A8D9E* L_0 = __this->____documentType_3;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Xml.XmlNode::get_Name() */, L_0);
		return L_1;
	}
}
// System.String Newtonsoft.Json.Converters.XmlDocumentTypeWrapper::get_System()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlDocumentTypeWrapper_get_System_m9C848AAFC549088092657DB36BD8E04ACF0121FC (XmlDocumentTypeWrapper_t8E470E157344CAE69E9551F6D0826C0E4038C4ED* __this, const RuntimeMethod* method) 
{
	{
		XmlDocumentType_tFD7379E45412FC2EBD65280ED3DE7A1C941A8D9E* L_0 = __this->____documentType_3;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = XmlDocumentType_get_SystemId_m17B225C509C0F5A4ECBB838AA81D15DED4016909_inline(L_0, NULL);
		return L_1;
	}
}
// System.String Newtonsoft.Json.Converters.XmlDocumentTypeWrapper::get_Public()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlDocumentTypeWrapper_get_Public_mE68A735EF0E56B8C242CEF4385CEA024A6C72C05 (XmlDocumentTypeWrapper_t8E470E157344CAE69E9551F6D0826C0E4038C4ED* __this, const RuntimeMethod* method) 
{
	{
		XmlDocumentType_tFD7379E45412FC2EBD65280ED3DE7A1C941A8D9E* L_0 = __this->____documentType_3;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = XmlDocumentType_get_PublicId_m9E81FAF2D0AA9DC847D118813CBEB085F0CE1955_inline(L_0, NULL);
		return L_1;
	}
}
// System.String Newtonsoft.Json.Converters.XmlDocumentTypeWrapper::get_InternalSubset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlDocumentTypeWrapper_get_InternalSubset_m5D296CBCCDB4C974240A075E3B4755D18FFFA022 (XmlDocumentTypeWrapper_t8E470E157344CAE69E9551F6D0826C0E4038C4ED* __this, const RuntimeMethod* method) 
{
	{
		XmlDocumentType_tFD7379E45412FC2EBD65280ED3DE7A1C941A8D9E* L_0 = __this->____documentType_3;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = XmlDocumentType_get_InternalSubset_mBD8D585ED0401EE1FC02F6FD5445E2109B083FEF_inline(L_0, NULL);
		return L_1;
	}
}
// System.String Newtonsoft.Json.Converters.XmlDocumentTypeWrapper::get_LocalName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlDocumentTypeWrapper_get_LocalName_m20D20EEA8F216955359FD85C71CDBEF9210B65B0 (XmlDocumentTypeWrapper_t8E470E157344CAE69E9551F6D0826C0E4038C4ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2923AF57406AD3628AA00F2F47378348C0E89B4C);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral2923AF57406AD3628AA00F2F47378348C0E89B4C;
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
// System.Void Newtonsoft.Json.Converters.XmlNodeWrapper::.ctor(System.Xml.XmlNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeWrapper__ctor_m73806A21D3A81678F6099B62E80F7B6549D56D17 (XmlNodeWrapper_tE399A7CC58A6C5CE54C6EFE0D075A7B88C71B991* __this, XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* ___node0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_0 = ___node0;
		__this->____node_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____node_0), (void*)L_0);
		return;
	}
}
// System.Object Newtonsoft.Json.Converters.XmlNodeWrapper::get_WrappedNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlNodeWrapper_get_WrappedNode_m95E187562E167E13524197070157B15EE0ABFDFF (XmlNodeWrapper_tE399A7CC58A6C5CE54C6EFE0D075A7B88C71B991* __this, const RuntimeMethod* method) 
{
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_0 = __this->____node_0;
		return L_0;
	}
}
// System.Xml.XmlNodeType Newtonsoft.Json.Converters.XmlNodeWrapper::get_NodeType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XmlNodeWrapper_get_NodeType_m704A1F53F159B290363B45893B421742FDF82D86 (XmlNodeWrapper_tE399A7CC58A6C5CE54C6EFE0D075A7B88C71B991* __this, const RuntimeMethod* method) 
{
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_0 = __this->____node_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(9 /* System.Xml.XmlNodeType System.Xml.XmlNode::get_NodeType() */, L_0);
		return L_1;
	}
}
// System.String Newtonsoft.Json.Converters.XmlNodeWrapper::get_LocalName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlNodeWrapper_get_LocalName_m3F78DEA57A56000D98457B5A983CA62574E42D37 (XmlNodeWrapper_tE399A7CC58A6C5CE54C6EFE0D075A7B88C71B991* __this, const RuntimeMethod* method) 
{
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_0 = __this->____node_0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(36 /* System.String System.Xml.XmlNode::get_LocalName() */, L_0);
		return L_1;
	}
}
// System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode> Newtonsoft.Json.Converters.XmlNodeWrapper::get_ChildNodes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* XmlNodeWrapper_get_ChildNodes_mB44F94F340476C1993AABDBCD77F535ACF68BD4E (XmlNodeWrapper_tE399A7CC58A6C5CE54C6EFE0D075A7B88C71B991* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m398158DFE48F62CF2C479A46F0D6C5A6E3206CF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m389274B90D96CA39D060BAE1C5A40939A32994D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_0 = __this->____childNodes_1;
		if (L_0)
		{
			goto IL_008b;
		}
	}
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_1 = __this->____node_0;
		NullCheck(L_1);
		bool L_2;
		L_2 = VirtualFuncInvoker0< bool >::Invoke(30 /* System.Boolean System.Xml.XmlNode::get_HasChildNodes() */, L_1);
		if (L_2)
		{
			goto IL_0025;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF_il2cpp_TypeInfo_var);
		List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_3 = ((XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF_StaticFields*)il2cpp_codegen_static_fields_for(XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF_il2cpp_TypeInfo_var))->___EmptyChildNodes_0;
		__this->____childNodes_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____childNodes_1), (void*)L_3);
		goto IL_008b;
	}

IL_0025:
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_4 = __this->____node_0;
		NullCheck(L_4);
		XmlNodeList_tFC0CEED3A006BEDF6A1A420F7CB55AC33E9B7F85* L_5;
		L_5 = VirtualFuncInvoker0< XmlNodeList_tFC0CEED3A006BEDF6A1A420F7CB55AC33E9B7F85* >::Invoke(11 /* System.Xml.XmlNodeList System.Xml.XmlNode::get_ChildNodes() */, L_4);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 System.Xml.XmlNodeList::get_Count() */, L_5);
		List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_7 = (List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E*)il2cpp_codegen_object_new(List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		List_1__ctor_m389274B90D96CA39D060BAE1C5A40939A32994D0(L_7, L_6, List_1__ctor_m389274B90D96CA39D060BAE1C5A40939A32994D0_RuntimeMethod_var);
		__this->____childNodes_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____childNodes_1), (void*)L_7);
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_8 = __this->____node_0;
		NullCheck(L_8);
		XmlNodeList_tFC0CEED3A006BEDF6A1A420F7CB55AC33E9B7F85* L_9;
		L_9 = VirtualFuncInvoker0< XmlNodeList_tFC0CEED3A006BEDF6A1A420F7CB55AC33E9B7F85* >::Invoke(11 /* System.Xml.XmlNodeList System.Xml.XmlNode::get_ChildNodes() */, L_8);
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Collections.IEnumerator System.Xml.XmlNodeList::GetEnumerator() */, L_9);
		V_0 = L_10;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_007a:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_11 = V_0;
					V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_11, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_12 = V_2;
					if (!L_12)
					{
						goto IL_008a;
					}
				}
				{
					RuntimeObject* L_13 = V_2;
					NullCheck(L_13);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_13);
				}

IL_008a:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0070_1;
			}

IL_0053_1:
			{
				RuntimeObject* L_14 = V_0;
				NullCheck(L_14);
				RuntimeObject* L_15;
				L_15 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_14);
				V_1 = ((XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF*)CastclassClass((RuntimeObject*)L_15, XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF_il2cpp_TypeInfo_var));
				List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_16 = __this->____childNodes_1;
				XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_17 = V_1;
				RuntimeObject* L_18;
				L_18 = XmlNodeWrapper_WrapNode_m45C8C60B81EA49FF73F8BB1F18EE8E4E8DE52DB4(L_17, NULL);
				NullCheck(L_16);
				List_1_Add_m398158DFE48F62CF2C479A46F0D6C5A6E3206CF2_inline(L_16, L_18, List_1_Add_m398158DFE48F62CF2C479A46F0D6C5A6E3206CF2_RuntimeMethod_var);
			}

IL_0070_1:
			{
				RuntimeObject* L_19 = V_0;
				NullCheck(L_19);
				bool L_20;
				L_20 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_19);
				if (L_20)
				{
					goto IL_0053_1;
				}
			}
			{
				goto IL_008b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_008b:
	{
		List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_21 = __this->____childNodes_1;
		return L_21;
	}
}
// System.Boolean Newtonsoft.Json.Converters.XmlNodeWrapper::get_HasChildNodes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlNodeWrapper_get_HasChildNodes_m8889623C4A41A7B42D34C960F6ADC63FA3D69C71 (XmlNodeWrapper_tE399A7CC58A6C5CE54C6EFE0D075A7B88C71B991* __this, const RuntimeMethod* method) 
{
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_0 = __this->____node_0;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(30 /* System.Boolean System.Xml.XmlNode::get_HasChildNodes() */, L_0);
		return L_1;
	}
}
// Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.XmlNodeWrapper::WrapNode(System.Xml.XmlNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlNodeWrapper_WrapNode_m45C8C60B81EA49FF73F8BB1F18EE8E4E8DE52DB4 (XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* ___node0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlDeclarationWrapper_t9167E036A5BE1475233675EC025E96DCA3CC1945_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlDeclaration_tA04662FA58C306A24C864BDE73D1B410858E7A79_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlDocumentTypeWrapper_t8E470E157344CAE69E9551F6D0826C0E4038C4ED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlDocumentType_tFD7379E45412FC2EBD65280ED3DE7A1C941A8D9E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlElementWrapper_tFFCFF4F15C008DF0469426DFE31B6A304DDEEC20_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlElement_t9A08B533E9A6B3548A1DE35476186F7ECCDF6FF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlNodeWrapper_tE399A7CC58A6C5CE54C6EFE0D075A7B88C71B991_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_0 = ___node0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(9 /* System.Xml.XmlNodeType System.Xml.XmlNode::get_NodeType() */, L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)10))))
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)17))))
		{
			goto IL_0023;
		}
	}
	{
		goto IL_003b;
	}

IL_0017:
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_5 = ___node0;
		XmlElementWrapper_tFFCFF4F15C008DF0469426DFE31B6A304DDEEC20* L_6 = (XmlElementWrapper_tFFCFF4F15C008DF0469426DFE31B6A304DDEEC20*)il2cpp_codegen_object_new(XmlElementWrapper_tFFCFF4F15C008DF0469426DFE31B6A304DDEEC20_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		XmlElementWrapper__ctor_m5EA54DDEBFA94B7DF7907BF8BCAD9A01C0AAE237(L_6, ((XmlElement_t9A08B533E9A6B3548A1DE35476186F7ECCDF6FF1*)CastclassClass((RuntimeObject*)L_5, XmlElement_t9A08B533E9A6B3548A1DE35476186F7ECCDF6FF1_il2cpp_TypeInfo_var)), NULL);
		return L_6;
	}

IL_0023:
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_7 = ___node0;
		XmlDeclarationWrapper_t9167E036A5BE1475233675EC025E96DCA3CC1945* L_8 = (XmlDeclarationWrapper_t9167E036A5BE1475233675EC025E96DCA3CC1945*)il2cpp_codegen_object_new(XmlDeclarationWrapper_t9167E036A5BE1475233675EC025E96DCA3CC1945_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		XmlDeclarationWrapper__ctor_m4EAEA1BBD6AA3E66D3DBF18613BDCC12294F9529(L_8, ((XmlDeclaration_tA04662FA58C306A24C864BDE73D1B410858E7A79*)CastclassClass((RuntimeObject*)L_7, XmlDeclaration_tA04662FA58C306A24C864BDE73D1B410858E7A79_il2cpp_TypeInfo_var)), NULL);
		return L_8;
	}

IL_002f:
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_9 = ___node0;
		XmlDocumentTypeWrapper_t8E470E157344CAE69E9551F6D0826C0E4038C4ED* L_10 = (XmlDocumentTypeWrapper_t8E470E157344CAE69E9551F6D0826C0E4038C4ED*)il2cpp_codegen_object_new(XmlDocumentTypeWrapper_t8E470E157344CAE69E9551F6D0826C0E4038C4ED_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		XmlDocumentTypeWrapper__ctor_m127F27D80D29C326F622FFD70CA1B3549F90C78D(L_10, ((XmlDocumentType_tFD7379E45412FC2EBD65280ED3DE7A1C941A8D9E*)CastclassClass((RuntimeObject*)L_9, XmlDocumentType_tFD7379E45412FC2EBD65280ED3DE7A1C941A8D9E_il2cpp_TypeInfo_var)), NULL);
		return L_10;
	}

IL_003b:
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_11 = ___node0;
		XmlNodeWrapper_tE399A7CC58A6C5CE54C6EFE0D075A7B88C71B991* L_12 = (XmlNodeWrapper_tE399A7CC58A6C5CE54C6EFE0D075A7B88C71B991*)il2cpp_codegen_object_new(XmlNodeWrapper_tE399A7CC58A6C5CE54C6EFE0D075A7B88C71B991_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		XmlNodeWrapper__ctor_m73806A21D3A81678F6099B62E80F7B6549D56D17(L_12, L_11, NULL);
		return L_12;
	}
}
// System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode> Newtonsoft.Json.Converters.XmlNodeWrapper::get_Attributes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* XmlNodeWrapper_get_Attributes_m6A73C3FCD3E8E04EB983E48270831A03D0120B01 (XmlNodeWrapper_tE399A7CC58A6C5CE54C6EFE0D075A7B88C71B991* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m398158DFE48F62CF2C479A46F0D6C5A6E3206CF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m389274B90D96CA39D060BAE1C5A40939A32994D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlAttribute_t4B6CC461196FBF5CC9F777E74CC82C98E0CA9D18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	XmlAttribute_t4B6CC461196FBF5CC9F777E74CC82C98E0CA9D18* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_0 = __this->____attributes_2;
		if (L_0)
		{
			goto IL_0083;
		}
	}
	{
		bool L_1;
		L_1 = XmlNodeWrapper_get_HasAttributes_mF9098879F629F6A9CF8509A64D366312DD092FCA(__this, NULL);
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF_il2cpp_TypeInfo_var);
		List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_2 = ((XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF_StaticFields*)il2cpp_codegen_static_fields_for(XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF_il2cpp_TypeInfo_var))->___EmptyChildNodes_0;
		__this->____attributes_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____attributes_2), (void*)L_2);
		goto IL_0083;
	}

IL_001d:
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_3 = __this->____node_0;
		NullCheck(L_3);
		XmlAttributeCollection_tB0BA25B3C7E8D4BCF487C7107A9019632A7D85C0* L_4;
		L_4 = VirtualFuncInvoker0< XmlAttributeCollection_tB0BA25B3C7E8D4BCF487C7107A9019632A7D85C0* >::Invoke(14 /* System.Xml.XmlAttributeCollection System.Xml.XmlNode::get_Attributes() */, L_3);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 System.Xml.XmlNamedNodeMap::get_Count() */, L_4);
		List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_6 = (List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E*)il2cpp_codegen_object_new(List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		List_1__ctor_m389274B90D96CA39D060BAE1C5A40939A32994D0(L_6, L_5, List_1__ctor_m389274B90D96CA39D060BAE1C5A40939A32994D0_RuntimeMethod_var);
		__this->____attributes_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____attributes_2), (void*)L_6);
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_7 = __this->____node_0;
		NullCheck(L_7);
		XmlAttributeCollection_tB0BA25B3C7E8D4BCF487C7107A9019632A7D85C0* L_8;
		L_8 = VirtualFuncInvoker0< XmlAttributeCollection_tB0BA25B3C7E8D4BCF487C7107A9019632A7D85C0* >::Invoke(14 /* System.Xml.XmlAttributeCollection System.Xml.XmlNode::get_Attributes() */, L_7);
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Collections.IEnumerator System.Xml.XmlNamedNodeMap::GetEnumerator() */, L_8);
		V_0 = L_9;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0072:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_10 = V_0;
					V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_10, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_11 = V_2;
					if (!L_11)
					{
						goto IL_0082;
					}
				}
				{
					RuntimeObject* L_12 = V_2;
					NullCheck(L_12);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_12);
				}

IL_0082:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0068_1;
			}

IL_004b_1:
			{
				RuntimeObject* L_13 = V_0;
				NullCheck(L_13);
				RuntimeObject* L_14;
				L_14 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_13);
				V_1 = ((XmlAttribute_t4B6CC461196FBF5CC9F777E74CC82C98E0CA9D18*)CastclassClass((RuntimeObject*)L_14, XmlAttribute_t4B6CC461196FBF5CC9F777E74CC82C98E0CA9D18_il2cpp_TypeInfo_var));
				List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_15 = __this->____attributes_2;
				XmlAttribute_t4B6CC461196FBF5CC9F777E74CC82C98E0CA9D18* L_16 = V_1;
				RuntimeObject* L_17;
				L_17 = XmlNodeWrapper_WrapNode_m45C8C60B81EA49FF73F8BB1F18EE8E4E8DE52DB4(L_16, NULL);
				NullCheck(L_15);
				List_1_Add_m398158DFE48F62CF2C479A46F0D6C5A6E3206CF2_inline(L_15, L_17, List_1_Add_m398158DFE48F62CF2C479A46F0D6C5A6E3206CF2_RuntimeMethod_var);
			}

IL_0068_1:
			{
				RuntimeObject* L_18 = V_0;
				NullCheck(L_18);
				bool L_19;
				L_19 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_18);
				if (L_19)
				{
					goto IL_004b_1;
				}
			}
			{
				goto IL_0083;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0083:
	{
		List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_20 = __this->____attributes_2;
		return L_20;
	}
}
// System.Boolean Newtonsoft.Json.Converters.XmlNodeWrapper::get_HasAttributes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlNodeWrapper_get_HasAttributes_mF9098879F629F6A9CF8509A64D366312DD092FCA (XmlNodeWrapper_tE399A7CC58A6C5CE54C6EFE0D075A7B88C71B991* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlElement_t9A08B533E9A6B3548A1DE35476186F7ECCDF6FF1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XmlElement_t9A08B533E9A6B3548A1DE35476186F7ECCDF6FF1* V_0 = NULL;
	XmlAttributeCollection_tB0BA25B3C7E8D4BCF487C7107A9019632A7D85C0* G_B4_0 = NULL;
	XmlAttributeCollection_tB0BA25B3C7E8D4BCF487C7107A9019632A7D85C0* G_B3_0 = NULL;
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_0 = __this->____node_0;
		V_0 = ((XmlElement_t9A08B533E9A6B3548A1DE35476186F7ECCDF6FF1*)IsInstClass((RuntimeObject*)L_0, XmlElement_t9A08B533E9A6B3548A1DE35476186F7ECCDF6FF1_il2cpp_TypeInfo_var));
		XmlElement_t9A08B533E9A6B3548A1DE35476186F7ECCDF6FF1* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		XmlElement_t9A08B533E9A6B3548A1DE35476186F7ECCDF6FF1* L_2 = V_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtualFuncInvoker0< bool >::Invoke(56 /* System.Boolean System.Xml.XmlElement::get_HasAttributes() */, L_2);
		return L_3;
	}

IL_0016:
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_4 = __this->____node_0;
		NullCheck(L_4);
		XmlAttributeCollection_tB0BA25B3C7E8D4BCF487C7107A9019632A7D85C0* L_5;
		L_5 = VirtualFuncInvoker0< XmlAttributeCollection_tB0BA25B3C7E8D4BCF487C7107A9019632A7D85C0* >::Invoke(14 /* System.Xml.XmlAttributeCollection System.Xml.XmlNode::get_Attributes() */, L_4);
		XmlAttributeCollection_tB0BA25B3C7E8D4BCF487C7107A9019632A7D85C0* L_6 = L_5;
		G_B3_0 = L_6;
		if (L_6)
		{
			G_B4_0 = L_6;
			goto IL_0027;
		}
	}
	{
		return (bool)0;
	}

IL_0027:
	{
		NullCheck(G_B4_0);
		int32_t L_7;
		L_7 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 System.Xml.XmlNamedNodeMap::get_Count() */, G_B4_0);
		return (bool)((((int32_t)L_7) > ((int32_t)0))? 1 : 0);
	}
}
// Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.XmlNodeWrapper::get_ParentNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlNodeWrapper_get_ParentNode_mCE0D181D5080D05A5010AD8FA391AE50547FC260 (XmlNodeWrapper_tE399A7CC58A6C5CE54C6EFE0D075A7B88C71B991* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlAttribute_t4B6CC461196FBF5CC9F777E74CC82C98E0CA9D18_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* V_0 = NULL;
	XmlAttribute_t4B6CC461196FBF5CC9F777E74CC82C98E0CA9D18* V_1 = NULL;
	XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* G_B3_0 = NULL;
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_0 = __this->____node_0;
		V_1 = ((XmlAttribute_t4B6CC461196FBF5CC9F777E74CC82C98E0CA9D18*)IsInstClass((RuntimeObject*)L_0, XmlAttribute_t4B6CC461196FBF5CC9F777E74CC82C98E0CA9D18_il2cpp_TypeInfo_var));
		XmlAttribute_t4B6CC461196FBF5CC9F777E74CC82C98E0CA9D18* L_1 = V_1;
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_2 = __this->____node_0;
		NullCheck(L_2);
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_3;
		L_3 = VirtualFuncInvoker0< XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* >::Invoke(10 /* System.Xml.XmlNode System.Xml.XmlNode::get_ParentNode() */, L_2);
		G_B3_0 = L_3;
		goto IL_0022;
	}

IL_001c:
	{
		XmlAttribute_t4B6CC461196FBF5CC9F777E74CC82C98E0CA9D18* L_4 = V_1;
		NullCheck(L_4);
		XmlElement_t9A08B533E9A6B3548A1DE35476186F7ECCDF6FF1* L_5;
		L_5 = VirtualFuncInvoker0< XmlElement_t9A08B533E9A6B3548A1DE35476186F7ECCDF6FF1* >::Invoke(57 /* System.Xml.XmlElement System.Xml.XmlAttribute::get_OwnerElement() */, L_4);
		G_B3_0 = ((XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF*)(L_5));
	}

IL_0022:
	{
		V_0 = G_B3_0;
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_6 = V_0;
		if (L_6)
		{
			goto IL_0028;
		}
	}
	{
		return (RuntimeObject*)NULL;
	}

IL_0028:
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_7 = V_0;
		RuntimeObject* L_8;
		L_8 = XmlNodeWrapper_WrapNode_m45C8C60B81EA49FF73F8BB1F18EE8E4E8DE52DB4(L_7, NULL);
		return L_8;
	}
}
// System.String Newtonsoft.Json.Converters.XmlNodeWrapper::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlNodeWrapper_get_Value_m12711466B29D2B6C01C3041813F4FD4988C973D0 (XmlNodeWrapper_tE399A7CC58A6C5CE54C6EFE0D075A7B88C71B991* __this, const RuntimeMethod* method) 
{
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_0 = __this->____node_0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Xml.XmlNode::get_Value() */, L_0);
		return L_1;
	}
}
// System.Void Newtonsoft.Json.Converters.XmlNodeWrapper::set_Value(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeWrapper_set_Value_m978C9C12AC1A81119D1DA28B143406231E41F41E (XmlNodeWrapper_tE399A7CC58A6C5CE54C6EFE0D075A7B88C71B991* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_0 = __this->____node_0;
		String_t* L_1 = ___value0;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(8 /* System.Void System.Xml.XmlNode::set_Value(System.String) */, L_0, L_1);
		return;
	}
}
// Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.XmlNodeWrapper::AppendChild(Newtonsoft.Json.Converters.IXmlNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlNodeWrapper_AppendChild_mF2D050E07BD4E4A0A4265872163D9C7232B3678B (XmlNodeWrapper_tE399A7CC58A6C5CE54C6EFE0D075A7B88C71B991* __this, RuntimeObject* ___newChild0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlNodeWrapper_tE399A7CC58A6C5CE54C6EFE0D075A7B88C71B991_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XmlNodeWrapper_tE399A7CC58A6C5CE54C6EFE0D075A7B88C71B991* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___newChild0;
		V_0 = ((XmlNodeWrapper_tE399A7CC58A6C5CE54C6EFE0D075A7B88C71B991*)CastclassClass((RuntimeObject*)L_0, XmlNodeWrapper_tE399A7CC58A6C5CE54C6EFE0D075A7B88C71B991_il2cpp_TypeInfo_var));
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_1 = __this->____node_0;
		XmlNodeWrapper_tE399A7CC58A6C5CE54C6EFE0D075A7B88C71B991* L_2 = V_0;
		NullCheck(L_2);
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_3 = L_2->____node_0;
		NullCheck(L_1);
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_4;
		L_4 = VirtualFuncInvoker1< XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF*, XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* >::Invoke(25 /* System.Xml.XmlNode System.Xml.XmlNode::AppendChild(System.Xml.XmlNode) */, L_1, L_3);
		__this->____childNodes_1 = (List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____childNodes_1), (void*)(List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E*)NULL);
		__this->____attributes_2 = (List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____attributes_2), (void*)(List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E*)NULL);
		RuntimeObject* L_5 = ___newChild0;
		return L_5;
	}
}
// System.String Newtonsoft.Json.Converters.XmlNodeWrapper::get_NamespaceUri()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlNodeWrapper_get_NamespaceUri_m5F7FD8E9F0B9546B357626FC34D2C7A2D344C568 (XmlNodeWrapper_tE399A7CC58A6C5CE54C6EFE0D075A7B88C71B991* __this, const RuntimeMethod* method) 
{
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_0 = __this->____node_0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(33 /* System.String System.Xml.XmlNode::get_NamespaceURI() */, L_0);
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
// System.Xml.Linq.XDeclaration Newtonsoft.Json.Converters.XDeclarationWrapper::get_Declaration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990* XDeclarationWrapper_get_Declaration_mD7686F2EC3F760FD0AECC4FC6DD5E21F9F888437 (XDeclarationWrapper_t30D8572D5BECE3E49B4F5BF8C17EE1A37A89AAE9* __this, const RuntimeMethod* method) 
{
	{
		XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990* L_0 = __this->___U3CDeclarationU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Converters.XDeclarationWrapper::.ctor(System.Xml.Linq.XDeclaration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XDeclarationWrapper__ctor_mC9E3C1C1550DD2576A03D5CCD4029BD8C64A18DF (XDeclarationWrapper_t30D8572D5BECE3E49B4F5BF8C17EE1A37A89AAE9* __this, XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990* ___declaration0, const RuntimeMethod* method) 
{
	{
		XObjectWrapper__ctor_m24EB638F7E591225CA536A66FEE9B6EE6D7E8330(__this, (XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29*)NULL, NULL);
		XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990* L_0 = ___declaration0;
		__this->___U3CDeclarationU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDeclarationU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Xml.XmlNodeType Newtonsoft.Json.Converters.XDeclarationWrapper::get_NodeType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XDeclarationWrapper_get_NodeType_m62F1C5F17B127A6F8E3D1427259D7D2D0714F5B7 (XDeclarationWrapper_t30D8572D5BECE3E49B4F5BF8C17EE1A37A89AAE9* __this, const RuntimeMethod* method) 
{
	{
		return (int32_t)(((int32_t)17));
	}
}
// System.String Newtonsoft.Json.Converters.XDeclarationWrapper::get_Version()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XDeclarationWrapper_get_Version_mE4E712D0E0E96742BD5333811C8D0FDA5836BF5D (XDeclarationWrapper_t30D8572D5BECE3E49B4F5BF8C17EE1A37A89AAE9* __this, const RuntimeMethod* method) 
{
	{
		XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990* L_0;
		L_0 = XDeclarationWrapper_get_Declaration_mD7686F2EC3F760FD0AECC4FC6DD5E21F9F888437_inline(__this, NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = XDeclaration_get_Version_m675EDE875CAF23C6801015479393247D2B8A05E7_inline(L_0, NULL);
		return L_1;
	}
}
// System.String Newtonsoft.Json.Converters.XDeclarationWrapper::get_Encoding()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XDeclarationWrapper_get_Encoding_mE6CADFD39D778C76B41813C61B0A1E1BE513132A (XDeclarationWrapper_t30D8572D5BECE3E49B4F5BF8C17EE1A37A89AAE9* __this, const RuntimeMethod* method) 
{
	{
		XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990* L_0;
		L_0 = XDeclarationWrapper_get_Declaration_mD7686F2EC3F760FD0AECC4FC6DD5E21F9F888437_inline(__this, NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = XDeclaration_get_Encoding_mA27D7E3A1673EE7D2A52F7D93A17FD9A33C4D5E0_inline(L_0, NULL);
		return L_1;
	}
}
// System.Void Newtonsoft.Json.Converters.XDeclarationWrapper::set_Encoding(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XDeclarationWrapper_set_Encoding_m62D74113A9D673C241C87496E62D0B2A2A5977D0 (XDeclarationWrapper_t30D8572D5BECE3E49B4F5BF8C17EE1A37A89AAE9* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990* L_0;
		L_0 = XDeclarationWrapper_get_Declaration_mD7686F2EC3F760FD0AECC4FC6DD5E21F9F888437_inline(__this, NULL);
		String_t* L_1 = ___value0;
		NullCheck(L_0);
		XDeclaration_set_Encoding_m13C45B72D33CFE9CCBA3450D0D3DF6A56D46CCD9_inline(L_0, L_1, NULL);
		return;
	}
}
// System.String Newtonsoft.Json.Converters.XDeclarationWrapper::get_Standalone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XDeclarationWrapper_get_Standalone_mACE8B149D751736B59E0B61A943E1A84E9AF70CD (XDeclarationWrapper_t30D8572D5BECE3E49B4F5BF8C17EE1A37A89AAE9* __this, const RuntimeMethod* method) 
{
	{
		XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990* L_0;
		L_0 = XDeclarationWrapper_get_Declaration_mD7686F2EC3F760FD0AECC4FC6DD5E21F9F888437_inline(__this, NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = XDeclaration_get_Standalone_mCC775D6A93C6ED7C87BFFA4E3565675B4139CE7D_inline(L_0, NULL);
		return L_1;
	}
}
// System.Void Newtonsoft.Json.Converters.XDeclarationWrapper::set_Standalone(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XDeclarationWrapper_set_Standalone_m9A03E1D700C0E082D5A46E702F4F2EFE65991FE5 (XDeclarationWrapper_t30D8572D5BECE3E49B4F5BF8C17EE1A37A89AAE9* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990* L_0;
		L_0 = XDeclarationWrapper_get_Declaration_mD7686F2EC3F760FD0AECC4FC6DD5E21F9F888437_inline(__this, NULL);
		String_t* L_1 = ___value0;
		NullCheck(L_0);
		XDeclaration_set_Standalone_mBFF62587A08487D5C7332D76AD4D3C55FB81BF33_inline(L_0, L_1, NULL);
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
// System.Void Newtonsoft.Json.Converters.XDocumentTypeWrapper::.ctor(System.Xml.Linq.XDocumentType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XDocumentTypeWrapper__ctor_m448FB77B151C12873112FF5CC9B314E9DB8F6117 (XDocumentTypeWrapper_tE70B54A200381660327029F12CDB902FF2EF26DA* __this, XDocumentType_t195D491B418C3696FBCAEE34E53D734E0B53A817* ___documentType0, const RuntimeMethod* method) 
{
	{
		XDocumentType_t195D491B418C3696FBCAEE34E53D734E0B53A817* L_0 = ___documentType0;
		XObjectWrapper__ctor_m24EB638F7E591225CA536A66FEE9B6EE6D7E8330(__this, L_0, NULL);
		XDocumentType_t195D491B418C3696FBCAEE34E53D734E0B53A817* L_1 = ___documentType0;
		__this->____documentType_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____documentType_1), (void*)L_1);
		return;
	}
}
// System.String Newtonsoft.Json.Converters.XDocumentTypeWrapper::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XDocumentTypeWrapper_get_Name_mA074AA947F84C787AA869A40F7B0C7F64A502B93 (XDocumentTypeWrapper_tE70B54A200381660327029F12CDB902FF2EF26DA* __this, const RuntimeMethod* method) 
{
	{
		XDocumentType_t195D491B418C3696FBCAEE34E53D734E0B53A817* L_0 = __this->____documentType_1;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = XDocumentType_get_Name_m297D10AE558AA29F11E05CCAEF2D74C43F980AE9_inline(L_0, NULL);
		return L_1;
	}
}
// System.String Newtonsoft.Json.Converters.XDocumentTypeWrapper::get_System()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XDocumentTypeWrapper_get_System_mC5CAC6D108869FFA6E547C06ED171CA1E235A51B (XDocumentTypeWrapper_tE70B54A200381660327029F12CDB902FF2EF26DA* __this, const RuntimeMethod* method) 
{
	{
		XDocumentType_t195D491B418C3696FBCAEE34E53D734E0B53A817* L_0 = __this->____documentType_1;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = XDocumentType_get_SystemId_m864BD298982BDA1D5B9C4DB6CB904B78FAFA04A7_inline(L_0, NULL);
		return L_1;
	}
}
// System.String Newtonsoft.Json.Converters.XDocumentTypeWrapper::get_Public()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XDocumentTypeWrapper_get_Public_mD55A43097688C1497C9ACCE3DA915944322A8C6D (XDocumentTypeWrapper_tE70B54A200381660327029F12CDB902FF2EF26DA* __this, const RuntimeMethod* method) 
{
	{
		XDocumentType_t195D491B418C3696FBCAEE34E53D734E0B53A817* L_0 = __this->____documentType_1;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = XDocumentType_get_PublicId_mAFD124B111C0B665C14A2078EE4E30C28F1854FC_inline(L_0, NULL);
		return L_1;
	}
}
// System.String Newtonsoft.Json.Converters.XDocumentTypeWrapper::get_InternalSubset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XDocumentTypeWrapper_get_InternalSubset_mEDBD4FCEAD914AEC869A485459F8908BEAE7E07C (XDocumentTypeWrapper_tE70B54A200381660327029F12CDB902FF2EF26DA* __this, const RuntimeMethod* method) 
{
	{
		XDocumentType_t195D491B418C3696FBCAEE34E53D734E0B53A817* L_0 = __this->____documentType_1;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = XDocumentType_get_InternalSubset_m6914F698B32A68A55C15AD4B971FEBFA85183DA1_inline(L_0, NULL);
		return L_1;
	}
}
// System.String Newtonsoft.Json.Converters.XDocumentTypeWrapper::get_LocalName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XDocumentTypeWrapper_get_LocalName_mD17BA8F109A4B4123FFBC5317380A93E730A4EE0 (XDocumentTypeWrapper_tE70B54A200381660327029F12CDB902FF2EF26DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2923AF57406AD3628AA00F2F47378348C0E89B4C);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral2923AF57406AD3628AA00F2F47378348C0E89B4C;
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
// System.Xml.Linq.XDocument Newtonsoft.Json.Converters.XDocumentWrapper::get_Document()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1* XDocumentWrapper_get_Document_m368F6051580AEF8FBF78877386D469E1CAD779B6 (XDocumentWrapper_t3C3117E449826BEB20F7BFB77214046EE4D86AD6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = XObjectWrapper_get_WrappedNode_m3CA9623838D4D4A96DCF882FC3C592D3D64D7573_inline(__this, NULL);
		return ((XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1*)CastclassClass((RuntimeObject*)L_0, XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1_il2cpp_TypeInfo_var));
	}
}
// System.Void Newtonsoft.Json.Converters.XDocumentWrapper::.ctor(System.Xml.Linq.XDocument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XDocumentWrapper__ctor_mE05A6619DC930C9ABB32122C06DC694533611BDB (XDocumentWrapper_t3C3117E449826BEB20F7BFB77214046EE4D86AD6* __this, XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1* ___document0, const RuntimeMethod* method) 
{
	{
		XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1* L_0 = ___document0;
		XContainerWrapper__ctor_mDA5B56465A0FE70773B861EC590E47653923DFC4(__this, L_0, NULL);
		return;
	}
}
// System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode> Newtonsoft.Json.Converters.XDocumentWrapper::get_ChildNodes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* XDocumentWrapper_get_ChildNodes_m90EBA8E6ED65464C93E749266085473592223F23 (XDocumentWrapper_t3C3117E449826BEB20F7BFB77214046EE4D86AD6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Insert_mB42244832CF5462EF2726D9EBEB081FE9426C926_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m5101BD6DFA5618FEB8E0D6CCF45C06C872577D0B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m49F224E7B5DC4879C5A553E58943A24FA8E42815_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XDeclarationWrapper_t30D8572D5BECE3E49B4F5BF8C17EE1A37A89AAE9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* V_0 = NULL;
	{
		List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_0;
		L_0 = XContainerWrapper_get_ChildNodes_mC85E0A4FF1522B40B19AEE06B034DE7C52EF1CA4(__this, NULL);
		V_0 = L_0;
		XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1* L_1;
		L_1 = XDocumentWrapper_get_Document_m368F6051580AEF8FBF78877386D469E1CAD779B6(__this, NULL);
		NullCheck(L_1);
		XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990* L_2;
		L_2 = XDocument_get_Declaration_m54F6FE679582E4CC7FBC6FD3565260BC308D98CA_inline(L_1, NULL);
		if (!L_2)
		{
			goto IL_0043;
		}
	}
	{
		List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_m5101BD6DFA5618FEB8E0D6CCF45C06C872577D0B_inline(L_3, List_1_get_Count_m5101BD6DFA5618FEB8E0D6CCF45C06C872577D0B_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_5 = V_0;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = List_1_get_Item_m49F224E7B5DC4879C5A553E58943A24FA8E42815(L_5, 0, List_1_get_Item_m49F224E7B5DC4879C5A553E58943A24FA8E42815_RuntimeMethod_var);
		NullCheck(L_6);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Xml.XmlNodeType Newtonsoft.Json.Converters.IXmlNode::get_NodeType() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_6);
		if ((((int32_t)L_7) == ((int32_t)((int32_t)17))))
		{
			goto IL_0043;
		}
	}

IL_002c:
	{
		List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_8 = V_0;
		XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1* L_9;
		L_9 = XDocumentWrapper_get_Document_m368F6051580AEF8FBF78877386D469E1CAD779B6(__this, NULL);
		NullCheck(L_9);
		XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990* L_10;
		L_10 = XDocument_get_Declaration_m54F6FE679582E4CC7FBC6FD3565260BC308D98CA_inline(L_9, NULL);
		XDeclarationWrapper_t30D8572D5BECE3E49B4F5BF8C17EE1A37A89AAE9* L_11 = (XDeclarationWrapper_t30D8572D5BECE3E49B4F5BF8C17EE1A37A89AAE9*)il2cpp_codegen_object_new(XDeclarationWrapper_t30D8572D5BECE3E49B4F5BF8C17EE1A37A89AAE9_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		XDeclarationWrapper__ctor_mC9E3C1C1550DD2576A03D5CCD4029BD8C64A18DF(L_11, L_10, NULL);
		NullCheck(L_8);
		List_1_Insert_mB42244832CF5462EF2726D9EBEB081FE9426C926(L_8, 0, L_11, List_1_Insert_mB42244832CF5462EF2726D9EBEB081FE9426C926_RuntimeMethod_var);
	}

IL_0043:
	{
		List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_12 = V_0;
		return L_12;
	}
}
// System.Boolean Newtonsoft.Json.Converters.XDocumentWrapper::get_HasChildNodes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XDocumentWrapper_get_HasChildNodes_m446F1A43884D77E14CD55EADE35F5F3D7E79597C (XDocumentWrapper_t3C3117E449826BEB20F7BFB77214046EE4D86AD6* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = XContainerWrapper_get_HasChildNodes_m93CCC01BDA9B4F58AD7877AC2A7C17E4E68172E8(__this, NULL);
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)1;
	}

IL_000a:
	{
		XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1* L_1;
		L_1 = XDocumentWrapper_get_Document_m368F6051580AEF8FBF78877386D469E1CAD779B6(__this, NULL);
		NullCheck(L_1);
		XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990* L_2;
		L_2 = XDocument_get_Declaration_m54F6FE679582E4CC7FBC6FD3565260BC308D98CA_inline(L_1, NULL);
		return (bool)((!(((RuntimeObject*)(XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.XDocumentWrapper::CreateComment(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XDocumentWrapper_CreateComment_m581B5E8B4BC22B4681EB5951BC1F8220C0832373 (XDocumentWrapper_t3C3117E449826BEB20F7BFB77214046EE4D86AD6* __this, String_t* ___text0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XComment_t2FD9205AC70AF739D97E5CE8B1CC29459191F43D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XObjectWrapper_t1932FA32F64A100673DEC2063AF00052A6CE1B16_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___text0;
		XComment_t2FD9205AC70AF739D97E5CE8B1CC29459191F43D* L_1 = (XComment_t2FD9205AC70AF739D97E5CE8B1CC29459191F43D*)il2cpp_codegen_object_new(XComment_t2FD9205AC70AF739D97E5CE8B1CC29459191F43D_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		XComment__ctor_mF1891F18BA45A4D593BF20DA9DC98AC2B2DE8020(L_1, L_0, NULL);
		XObjectWrapper_t1932FA32F64A100673DEC2063AF00052A6CE1B16* L_2 = (XObjectWrapper_t1932FA32F64A100673DEC2063AF00052A6CE1B16*)il2cpp_codegen_object_new(XObjectWrapper_t1932FA32F64A100673DEC2063AF00052A6CE1B16_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		XObjectWrapper__ctor_m24EB638F7E591225CA536A66FEE9B6EE6D7E8330(L_2, L_1, NULL);
		return L_2;
	}
}
// Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.XDocumentWrapper::CreateTextNode(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XDocumentWrapper_CreateTextNode_m2946508BCAEC542051832C77CCDED138EE841889 (XDocumentWrapper_t3C3117E449826BEB20F7BFB77214046EE4D86AD6* __this, String_t* ___text0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XObjectWrapper_t1932FA32F64A100673DEC2063AF00052A6CE1B16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XText_t006159E7F735736D41BBC0738FFB066A14B31AE2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___text0;
		XText_t006159E7F735736D41BBC0738FFB066A14B31AE2* L_1 = (XText_t006159E7F735736D41BBC0738FFB066A14B31AE2*)il2cpp_codegen_object_new(XText_t006159E7F735736D41BBC0738FFB066A14B31AE2_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		XText__ctor_m30153536CE7D619BF5609B3D3453109B3ECDD28D(L_1, L_0, NULL);
		XObjectWrapper_t1932FA32F64A100673DEC2063AF00052A6CE1B16* L_2 = (XObjectWrapper_t1932FA32F64A100673DEC2063AF00052A6CE1B16*)il2cpp_codegen_object_new(XObjectWrapper_t1932FA32F64A100673DEC2063AF00052A6CE1B16_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		XObjectWrapper__ctor_m24EB638F7E591225CA536A66FEE9B6EE6D7E8330(L_2, L_1, NULL);
		return L_2;
	}
}
// Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.XDocumentWrapper::CreateCDataSection(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XDocumentWrapper_CreateCDataSection_m8506E7328F857D71EE8C68DB9621B994F9C6A77F (XDocumentWrapper_t3C3117E449826BEB20F7BFB77214046EE4D86AD6* __this, String_t* ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XCData_tCE86E0709C47284A8D0A6CBE09CDFD6B8609BF3B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XObjectWrapper_t1932FA32F64A100673DEC2063AF00052A6CE1B16_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___data0;
		XCData_tCE86E0709C47284A8D0A6CBE09CDFD6B8609BF3B* L_1 = (XCData_tCE86E0709C47284A8D0A6CBE09CDFD6B8609BF3B*)il2cpp_codegen_object_new(XCData_tCE86E0709C47284A8D0A6CBE09CDFD6B8609BF3B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		XCData__ctor_m649661856E9B7BA8D204EB3FB1CE80D76998D416(L_1, L_0, NULL);
		XObjectWrapper_t1932FA32F64A100673DEC2063AF00052A6CE1B16* L_2 = (XObjectWrapper_t1932FA32F64A100673DEC2063AF00052A6CE1B16*)il2cpp_codegen_object_new(XObjectWrapper_t1932FA32F64A100673DEC2063AF00052A6CE1B16_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		XObjectWrapper__ctor_m24EB638F7E591225CA536A66FEE9B6EE6D7E8330(L_2, L_1, NULL);
		return L_2;
	}
}
// Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.XDocumentWrapper::CreateWhitespace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XDocumentWrapper_CreateWhitespace_m3737ECC4F95F648AC7417D2C73EA0FA239640DDC (XDocumentWrapper_t3C3117E449826BEB20F7BFB77214046EE4D86AD6* __this, String_t* ___text0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XObjectWrapper_t1932FA32F64A100673DEC2063AF00052A6CE1B16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XText_t006159E7F735736D41BBC0738FFB066A14B31AE2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___text0;
		XText_t006159E7F735736D41BBC0738FFB066A14B31AE2* L_1 = (XText_t006159E7F735736D41BBC0738FFB066A14B31AE2*)il2cpp_codegen_object_new(XText_t006159E7F735736D41BBC0738FFB066A14B31AE2_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		XText__ctor_m30153536CE7D619BF5609B3D3453109B3ECDD28D(L_1, L_0, NULL);
		XObjectWrapper_t1932FA32F64A100673DEC2063AF00052A6CE1B16* L_2 = (XObjectWrapper_t1932FA32F64A100673DEC2063AF00052A6CE1B16*)il2cpp_codegen_object_new(XObjectWrapper_t1932FA32F64A100673DEC2063AF00052A6CE1B16_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		XObjectWrapper__ctor_m24EB638F7E591225CA536A66FEE9B6EE6D7E8330(L_2, L_1, NULL);
		return L_2;
	}
}
// Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.XDocumentWrapper::CreateSignificantWhitespace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XDocumentWrapper_CreateSignificantWhitespace_m409A710011DF878E02B3D163B64232C0ADE07C28 (XDocumentWrapper_t3C3117E449826BEB20F7BFB77214046EE4D86AD6* __this, String_t* ___text0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XObjectWrapper_t1932FA32F64A100673DEC2063AF00052A6CE1B16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XText_t006159E7F735736D41BBC0738FFB066A14B31AE2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___text0;
		XText_t006159E7F735736D41BBC0738FFB066A14B31AE2* L_1 = (XText_t006159E7F735736D41BBC0738FFB066A14B31AE2*)il2cpp_codegen_object_new(XText_t006159E7F735736D41BBC0738FFB066A14B31AE2_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		XText__ctor_m30153536CE7D619BF5609B3D3453109B3ECDD28D(L_1, L_0, NULL);
		XObjectWrapper_t1932FA32F64A100673DEC2063AF00052A6CE1B16* L_2 = (XObjectWrapper_t1932FA32F64A100673DEC2063AF00052A6CE1B16*)il2cpp_codegen_object_new(XObjectWrapper_t1932FA32F64A100673DEC2063AF00052A6CE1B16_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		XObjectWrapper__ctor_m24EB638F7E591225CA536A66FEE9B6EE6D7E8330(L_2, L_1, NULL);
		return L_2;
	}
}
// Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.XDocumentWrapper::CreateXmlDeclaration(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XDocumentWrapper_CreateXmlDeclaration_m8CC17AA93A14B7FB730FDDA9FE0AC7694088A8CF (XDocumentWrapper_t3C3117E449826BEB20F7BFB77214046EE4D86AD6* __this, String_t* ___version0, String_t* ___encoding1, String_t* ___standalone2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XDeclarationWrapper_t30D8572D5BECE3E49B4F5BF8C17EE1A37A89AAE9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___version0;
		String_t* L_1 = ___encoding1;
		String_t* L_2 = ___standalone2;
		XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990* L_3 = (XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990*)il2cpp_codegen_object_new(XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		XDeclaration__ctor_m8107AC3F844468E3C2A20075B14A09D24A3768BF(L_3, L_0, L_1, L_2, NULL);
		XDeclarationWrapper_t30D8572D5BECE3E49B4F5BF8C17EE1A37A89AAE9* L_4 = (XDeclarationWrapper_t30D8572D5BECE3E49B4F5BF8C17EE1A37A89AAE9*)il2cpp_codegen_object_new(XDeclarationWrapper_t30D8572D5BECE3E49B4F5BF8C17EE1A37A89AAE9_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		XDeclarationWrapper__ctor_mC9E3C1C1550DD2576A03D5CCD4029BD8C64A18DF(L_4, L_3, NULL);
		return L_4;
	}
}
// Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.XDocumentWrapper::CreateXmlDocumentType(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XDocumentWrapper_CreateXmlDocumentType_m1ED0DA0569F9256577F23A9A65236E784BC031DF (XDocumentWrapper_t3C3117E449826BEB20F7BFB77214046EE4D86AD6* __this, String_t* ___name0, String_t* ___publicId1, String_t* ___systemId2, String_t* ___internalSubset3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XDocumentTypeWrapper_tE70B54A200381660327029F12CDB902FF2EF26DA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XDocumentType_t195D491B418C3696FBCAEE34E53D734E0B53A817_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___name0;
		String_t* L_1 = ___publicId1;
		String_t* L_2 = ___systemId2;
		String_t* L_3 = ___internalSubset3;
		XDocumentType_t195D491B418C3696FBCAEE34E53D734E0B53A817* L_4 = (XDocumentType_t195D491B418C3696FBCAEE34E53D734E0B53A817*)il2cpp_codegen_object_new(XDocumentType_t195D491B418C3696FBCAEE34E53D734E0B53A817_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		XDocumentType__ctor_mD192CD368E807CA6B4AB0B5094A903CBFA37CA46(L_4, L_0, L_1, L_2, L_3, NULL);
		XDocumentTypeWrapper_tE70B54A200381660327029F12CDB902FF2EF26DA* L_5 = (XDocumentTypeWrapper_tE70B54A200381660327029F12CDB902FF2EF26DA*)il2cpp_codegen_object_new(XDocumentTypeWrapper_tE70B54A200381660327029F12CDB902FF2EF26DA_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		XDocumentTypeWrapper__ctor_m448FB77B151C12873112FF5CC9B314E9DB8F6117(L_5, L_4, NULL);
		return L_5;
	}
}
// Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.XDocumentWrapper::CreateProcessingInstruction(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XDocumentWrapper_CreateProcessingInstruction_mBD1AEBE0846FDA921B485F5A457F10110ACF2510 (XDocumentWrapper_t3C3117E449826BEB20F7BFB77214046EE4D86AD6* __this, String_t* ___target0, String_t* ___data1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XProcessingInstructionWrapper_t73B2F6F52C84FBAB7AC112F1262C085959ED6D80_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XProcessingInstruction_t920C9022DAD590F61972E400D46FC1C443265795_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___target0;
		String_t* L_1 = ___data1;
		XProcessingInstruction_t920C9022DAD590F61972E400D46FC1C443265795* L_2 = (XProcessingInstruction_t920C9022DAD590F61972E400D46FC1C443265795*)il2cpp_codegen_object_new(XProcessingInstruction_t920C9022DAD590F61972E400D46FC1C443265795_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		XProcessingInstruction__ctor_m9D42D9DF59625543003025C09E1AED9659A1E862(L_2, L_0, L_1, NULL);
		XProcessingInstructionWrapper_t73B2F6F52C84FBAB7AC112F1262C085959ED6D80* L_3 = (XProcessingInstructionWrapper_t73B2F6F52C84FBAB7AC112F1262C085959ED6D80*)il2cpp_codegen_object_new(XProcessingInstructionWrapper_t73B2F6F52C84FBAB7AC112F1262C085959ED6D80_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		XProcessingInstructionWrapper__ctor_mF6EF6425C7E1A9D9F46CB988F8C9E542ED2153CE(L_3, L_2, NULL);
		return L_3;
	}
}
// Newtonsoft.Json.Converters.IXmlElement Newtonsoft.Json.Converters.XDocumentWrapper::CreateElement(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XDocumentWrapper_CreateElement_m906BF5976F58F7AB707BF445B01F4936B578082F (XDocumentWrapper_t3C3117E449826BEB20F7BFB77214046EE4D86AD6* __this, String_t* ___elementName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XElementWrapper_t15082EFC96DF60AC9ACF10A1D60C1E04207FCA61_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___elementName0;
		XName_tAF6D9533A7D11AC27118F656985AC325C2A50E5C* L_1;
		L_1 = XName_op_Implicit_m3A259E71F7D76AA504349A98DAE3C47D7A943736(L_0, NULL);
		XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* L_2 = (XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909*)il2cpp_codegen_object_new(XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		XElement__ctor_mFDCA9C62F1562D0E005F47D0298A49C57DBC126C(L_2, L_1, NULL);
		XElementWrapper_t15082EFC96DF60AC9ACF10A1D60C1E04207FCA61* L_3 = (XElementWrapper_t15082EFC96DF60AC9ACF10A1D60C1E04207FCA61*)il2cpp_codegen_object_new(XElementWrapper_t15082EFC96DF60AC9ACF10A1D60C1E04207FCA61_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		XElementWrapper__ctor_mADC48A43A4BBD8C2FEBF88F4A45ED0CA69FAEC7F(L_3, L_2, NULL);
		return L_3;
	}
}
// Newtonsoft.Json.Converters.IXmlElement Newtonsoft.Json.Converters.XDocumentWrapper::CreateElement(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XDocumentWrapper_CreateElement_mFC40283D600E1C5B804460EFB4E442DCDF9FDFCF (XDocumentWrapper_t3C3117E449826BEB20F7BFB77214046EE4D86AD6* __this, String_t* ___qualifiedName0, String_t* ___namespaceUri1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XElementWrapper_t15082EFC96DF60AC9ACF10A1D60C1E04207FCA61_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___qualifiedName0;
		String_t* L_1;
		L_1 = MiscellaneousUtils_GetLocalName_m6104B0EF1BD60B135EEC76A96AFF567D02394CC7(L_0, NULL);
		String_t* L_2 = ___namespaceUri1;
		XName_tAF6D9533A7D11AC27118F656985AC325C2A50E5C* L_3;
		L_3 = XName_Get_mECF7FD66C88749DF760999F9C6F506BA9A0D0373(L_1, L_2, NULL);
		XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* L_4 = (XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909*)il2cpp_codegen_object_new(XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		XElement__ctor_mFDCA9C62F1562D0E005F47D0298A49C57DBC126C(L_4, L_3, NULL);
		XElementWrapper_t15082EFC96DF60AC9ACF10A1D60C1E04207FCA61* L_5 = (XElementWrapper_t15082EFC96DF60AC9ACF10A1D60C1E04207FCA61*)il2cpp_codegen_object_new(XElementWrapper_t15082EFC96DF60AC9ACF10A1D60C1E04207FCA61_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		XElementWrapper__ctor_mADC48A43A4BBD8C2FEBF88F4A45ED0CA69FAEC7F(L_5, L_4, NULL);
		return L_5;
	}
}
// Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.XDocumentWrapper::CreateAttribute(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XDocumentWrapper_CreateAttribute_m8224C607521D472529726F0C7D9418BBE42EDAE6 (XDocumentWrapper_t3C3117E449826BEB20F7BFB77214046EE4D86AD6* __this, String_t* ___name0, String_t* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XAttributeWrapper_t1FC7334561AD249FF39775D06CEF7BCECEBD9547_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___name0;
		XName_tAF6D9533A7D11AC27118F656985AC325C2A50E5C* L_1;
		L_1 = XName_op_Implicit_m3A259E71F7D76AA504349A98DAE3C47D7A943736(L_0, NULL);
		String_t* L_2 = ___value1;
		XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF* L_3 = (XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF*)il2cpp_codegen_object_new(XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		XAttribute__ctor_m913E6ED815250651BF84B13AE1C1B79C6C7F9CE0(L_3, L_1, L_2, NULL);
		XAttributeWrapper_t1FC7334561AD249FF39775D06CEF7BCECEBD9547* L_4 = (XAttributeWrapper_t1FC7334561AD249FF39775D06CEF7BCECEBD9547*)il2cpp_codegen_object_new(XAttributeWrapper_t1FC7334561AD249FF39775D06CEF7BCECEBD9547_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		XAttributeWrapper__ctor_mCD158BF6A02EA1460BD22E3C99816A3308E2DC39(L_4, L_3, NULL);
		return L_4;
	}
}
// Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.XDocumentWrapper::CreateAttribute(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XDocumentWrapper_CreateAttribute_m90A8CC160233F03025ED08AAADFB3B2CE4F127BF (XDocumentWrapper_t3C3117E449826BEB20F7BFB77214046EE4D86AD6* __this, String_t* ___qualifiedName0, String_t* ___namespaceUri1, String_t* ___value2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XAttributeWrapper_t1FC7334561AD249FF39775D06CEF7BCECEBD9547_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___qualifiedName0;
		String_t* L_1;
		L_1 = MiscellaneousUtils_GetLocalName_m6104B0EF1BD60B135EEC76A96AFF567D02394CC7(L_0, NULL);
		String_t* L_2 = ___namespaceUri1;
		XName_tAF6D9533A7D11AC27118F656985AC325C2A50E5C* L_3;
		L_3 = XName_Get_mECF7FD66C88749DF760999F9C6F506BA9A0D0373(L_1, L_2, NULL);
		String_t* L_4 = ___value2;
		XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF* L_5 = (XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF*)il2cpp_codegen_object_new(XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		XAttribute__ctor_m913E6ED815250651BF84B13AE1C1B79C6C7F9CE0(L_5, L_3, L_4, NULL);
		XAttributeWrapper_t1FC7334561AD249FF39775D06CEF7BCECEBD9547* L_6 = (XAttributeWrapper_t1FC7334561AD249FF39775D06CEF7BCECEBD9547*)il2cpp_codegen_object_new(XAttributeWrapper_t1FC7334561AD249FF39775D06CEF7BCECEBD9547_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		XAttributeWrapper__ctor_mCD158BF6A02EA1460BD22E3C99816A3308E2DC39(L_6, L_5, NULL);
		return L_6;
	}
}
// Newtonsoft.Json.Converters.IXmlElement Newtonsoft.Json.Converters.XDocumentWrapper::get_DocumentElement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XDocumentWrapper_get_DocumentElement_m5F9F99F972213A26BB538D7B3BBFDB126988BBE7 (XDocumentWrapper_t3C3117E449826BEB20F7BFB77214046EE4D86AD6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XElementWrapper_t15082EFC96DF60AC9ACF10A1D60C1E04207FCA61_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1* L_0;
		L_0 = XDocumentWrapper_get_Document_m368F6051580AEF8FBF78877386D469E1CAD779B6(__this, NULL);
		NullCheck(L_0);
		XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* L_1;
		L_1 = XDocument_get_Root_mB2847BD75F5350D1D795E2A2691BF9CB210300C8(L_0, NULL);
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		return (RuntimeObject*)NULL;
	}

IL_000f:
	{
		XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1* L_2;
		L_2 = XDocumentWrapper_get_Document_m368F6051580AEF8FBF78877386D469E1CAD779B6(__this, NULL);
		NullCheck(L_2);
		XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* L_3;
		L_3 = XDocument_get_Root_mB2847BD75F5350D1D795E2A2691BF9CB210300C8(L_2, NULL);
		XElementWrapper_t15082EFC96DF60AC9ACF10A1D60C1E04207FCA61* L_4 = (XElementWrapper_t15082EFC96DF60AC9ACF10A1D60C1E04207FCA61*)il2cpp_codegen_object_new(XElementWrapper_t15082EFC96DF60AC9ACF10A1D60C1E04207FCA61_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		XElementWrapper__ctor_mADC48A43A4BBD8C2FEBF88F4A45ED0CA69FAEC7F(L_4, L_3, NULL);
		return L_4;
	}
}
// Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.XDocumentWrapper::AppendChild(Newtonsoft.Json.Converters.IXmlNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XDocumentWrapper_AppendChild_m266B3D4945ADE6EF06CC3CAE337432F997E2D21D (XDocumentWrapper_t3C3117E449826BEB20F7BFB77214046EE4D86AD6* __this, RuntimeObject* ___newChild0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XDeclarationWrapper_t30D8572D5BECE3E49B4F5BF8C17EE1A37A89AAE9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XDeclarationWrapper_t30D8572D5BECE3E49B4F5BF8C17EE1A37A89AAE9* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___newChild0;
		V_0 = ((XDeclarationWrapper_t30D8572D5BECE3E49B4F5BF8C17EE1A37A89AAE9*)IsInstClass((RuntimeObject*)L_0, XDeclarationWrapper_t30D8572D5BECE3E49B4F5BF8C17EE1A37A89AAE9_il2cpp_TypeInfo_var));
		XDeclarationWrapper_t30D8572D5BECE3E49B4F5BF8C17EE1A37A89AAE9* L_1 = V_0;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1* L_2;
		L_2 = XDocumentWrapper_get_Document_m368F6051580AEF8FBF78877386D469E1CAD779B6(__this, NULL);
		XDeclarationWrapper_t30D8572D5BECE3E49B4F5BF8C17EE1A37A89AAE9* L_3 = V_0;
		NullCheck(L_3);
		XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990* L_4;
		L_4 = XDeclarationWrapper_get_Declaration_mD7686F2EC3F760FD0AECC4FC6DD5E21F9F888437_inline(L_3, NULL);
		NullCheck(L_2);
		XDocument_set_Declaration_m3DAB9857DC323A55ABA6F973614AABE5FB59A672_inline(L_2, L_4, NULL);
		XDeclarationWrapper_t30D8572D5BECE3E49B4F5BF8C17EE1A37A89AAE9* L_5 = V_0;
		return L_5;
	}

IL_001d:
	{
		RuntimeObject* L_6 = ___newChild0;
		RuntimeObject* L_7;
		L_7 = XContainerWrapper_AppendChild_mD0C76048C57DBC7BE2A08BC215761BEF2552BC42(__this, L_6, NULL);
		return L_7;
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
// System.Xml.Linq.XText Newtonsoft.Json.Converters.XTextWrapper::get_Text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XText_t006159E7F735736D41BBC0738FFB066A14B31AE2* XTextWrapper_get_Text_m15F65133CFB2B8E2F1AFBFE1EE9829669C3EF587 (XTextWrapper_t54304AAC4CEF7C32A60F7D6519B28810027EC797* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XText_t006159E7F735736D41BBC0738FFB066A14B31AE2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = XObjectWrapper_get_WrappedNode_m3CA9623838D4D4A96DCF882FC3C592D3D64D7573_inline(__this, NULL);
		return ((XText_t006159E7F735736D41BBC0738FFB066A14B31AE2*)CastclassClass((RuntimeObject*)L_0, XText_t006159E7F735736D41BBC0738FFB066A14B31AE2_il2cpp_TypeInfo_var));
	}
}
// System.Void Newtonsoft.Json.Converters.XTextWrapper::.ctor(System.Xml.Linq.XText)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XTextWrapper__ctor_m98B8EFBEC0CA0A43C328B86120E043D5A4FE8222 (XTextWrapper_t54304AAC4CEF7C32A60F7D6519B28810027EC797* __this, XText_t006159E7F735736D41BBC0738FFB066A14B31AE2* ___text0, const RuntimeMethod* method) 
{
	{
		XText_t006159E7F735736D41BBC0738FFB066A14B31AE2* L_0 = ___text0;
		XObjectWrapper__ctor_m24EB638F7E591225CA536A66FEE9B6EE6D7E8330(__this, L_0, NULL);
		return;
	}
}
// System.String Newtonsoft.Json.Converters.XTextWrapper::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XTextWrapper_get_Value_mDDB4561D37D181C792CF57122502CDC591B8CB4D (XTextWrapper_t54304AAC4CEF7C32A60F7D6519B28810027EC797* __this, const RuntimeMethod* method) 
{
	{
		XText_t006159E7F735736D41BBC0738FFB066A14B31AE2* L_0;
		L_0 = XTextWrapper_get_Text_m15F65133CFB2B8E2F1AFBFE1EE9829669C3EF587(__this, NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = XText_get_Value_m5B2A033755DE27DEC73860B9E94AA41BB55E208C_inline(L_0, NULL);
		return L_1;
	}
}
// System.Void Newtonsoft.Json.Converters.XTextWrapper::set_Value(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XTextWrapper_set_Value_m2D1DD5E4F89583AF480ECBC44AFA4C71208E1F7F (XTextWrapper_t54304AAC4CEF7C32A60F7D6519B28810027EC797* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		XText_t006159E7F735736D41BBC0738FFB066A14B31AE2* L_0;
		L_0 = XTextWrapper_get_Text_m15F65133CFB2B8E2F1AFBFE1EE9829669C3EF587(__this, NULL);
		String_t* L_1 = ___value0;
		NullCheck(L_0);
		XText_set_Value_m285A62B03AEFA17C99B9637F5E9BD62A5E707C38(L_0, L_1, NULL);
		return;
	}
}
// Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.XTextWrapper::get_ParentNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XTextWrapper_get_ParentNode_m5A470009D3268A28C9A5A9B8ED440C7FAE3D0A42 (XTextWrapper_t54304AAC4CEF7C32A60F7D6519B28810027EC797* __this, const RuntimeMethod* method) 
{
	{
		XText_t006159E7F735736D41BBC0738FFB066A14B31AE2* L_0;
		L_0 = XTextWrapper_get_Text_m15F65133CFB2B8E2F1AFBFE1EE9829669C3EF587(__this, NULL);
		NullCheck(L_0);
		XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* L_1;
		L_1 = XObject_get_Parent_m192B7F82C3DF6A43672AD9C61B704A40DCA0213C(L_0, NULL);
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		return (RuntimeObject*)NULL;
	}

IL_000f:
	{
		XText_t006159E7F735736D41BBC0738FFB066A14B31AE2* L_2;
		L_2 = XTextWrapper_get_Text_m15F65133CFB2B8E2F1AFBFE1EE9829669C3EF587(__this, NULL);
		NullCheck(L_2);
		XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* L_3;
		L_3 = XObject_get_Parent_m192B7F82C3DF6A43672AD9C61B704A40DCA0213C(L_2, NULL);
		RuntimeObject* L_4;
		L_4 = XContainerWrapper_WrapNode_m45080E6A0D0A531566B9B6B20B75328E5AD91CBA(L_3, NULL);
		return L_4;
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
// System.Xml.Linq.XComment Newtonsoft.Json.Converters.XCommentWrapper::get_Text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XComment_t2FD9205AC70AF739D97E5CE8B1CC29459191F43D* XCommentWrapper_get_Text_mF0823EAF847E1268D50A6E4D0345828B2E2C7B22 (XCommentWrapper_t1BFE83CA1648036FAD8B8C6E79806055D34F2782* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XComment_t2FD9205AC70AF739D97E5CE8B1CC29459191F43D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = XObjectWrapper_get_WrappedNode_m3CA9623838D4D4A96DCF882FC3C592D3D64D7573_inline(__this, NULL);
		return ((XComment_t2FD9205AC70AF739D97E5CE8B1CC29459191F43D*)CastclassClass((RuntimeObject*)L_0, XComment_t2FD9205AC70AF739D97E5CE8B1CC29459191F43D_il2cpp_TypeInfo_var));
	}
}
// System.Void Newtonsoft.Json.Converters.XCommentWrapper::.ctor(System.Xml.Linq.XComment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XCommentWrapper__ctor_m8DA2766F6E2CDC00FA2CF73EAAF21B30AFCD80B1 (XCommentWrapper_t1BFE83CA1648036FAD8B8C6E79806055D34F2782* __this, XComment_t2FD9205AC70AF739D97E5CE8B1CC29459191F43D* ___text0, const RuntimeMethod* method) 
{
	{
		XComment_t2FD9205AC70AF739D97E5CE8B1CC29459191F43D* L_0 = ___text0;
		XObjectWrapper__ctor_m24EB638F7E591225CA536A66FEE9B6EE6D7E8330(__this, L_0, NULL);
		return;
	}
}
// System.String Newtonsoft.Json.Converters.XCommentWrapper::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XCommentWrapper_get_Value_m4530DD772239251DC7E9D31647FF1370C502C53B (XCommentWrapper_t1BFE83CA1648036FAD8B8C6E79806055D34F2782* __this, const RuntimeMethod* method) 
{
	{
		XComment_t2FD9205AC70AF739D97E5CE8B1CC29459191F43D* L_0;
		L_0 = XCommentWrapper_get_Text_mF0823EAF847E1268D50A6E4D0345828B2E2C7B22(__this, NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = XComment_get_Value_mD2D3D9900752AD9FA019947C965FF6FAF2B3E7DA_inline(L_0, NULL);
		return L_1;
	}
}
// System.Void Newtonsoft.Json.Converters.XCommentWrapper::set_Value(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XCommentWrapper_set_Value_m620490E761650E43321615944C58EAD492199B97 (XCommentWrapper_t1BFE83CA1648036FAD8B8C6E79806055D34F2782* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		XComment_t2FD9205AC70AF739D97E5CE8B1CC29459191F43D* L_0;
		L_0 = XCommentWrapper_get_Text_mF0823EAF847E1268D50A6E4D0345828B2E2C7B22(__this, NULL);
		String_t* L_1 = ___value0;
		NullCheck(L_0);
		XComment_set_Value_m6D36A232DE1A2E3C39E0F54F6A8078AECD7FE375(L_0, L_1, NULL);
		return;
	}
}
// Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.XCommentWrapper::get_ParentNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XCommentWrapper_get_ParentNode_m2AE469466627F7255559F9B07E7C9A1F65CCCF76 (XCommentWrapper_t1BFE83CA1648036FAD8B8C6E79806055D34F2782* __this, const RuntimeMethod* method) 
{
	{
		XComment_t2FD9205AC70AF739D97E5CE8B1CC29459191F43D* L_0;
		L_0 = XCommentWrapper_get_Text_mF0823EAF847E1268D50A6E4D0345828B2E2C7B22(__this, NULL);
		NullCheck(L_0);
		XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* L_1;
		L_1 = XObject_get_Parent_m192B7F82C3DF6A43672AD9C61B704A40DCA0213C(L_0, NULL);
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		return (RuntimeObject*)NULL;
	}

IL_000f:
	{
		XComment_t2FD9205AC70AF739D97E5CE8B1CC29459191F43D* L_2;
		L_2 = XCommentWrapper_get_Text_mF0823EAF847E1268D50A6E4D0345828B2E2C7B22(__this, NULL);
		NullCheck(L_2);
		XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* L_3;
		L_3 = XObject_get_Parent_m192B7F82C3DF6A43672AD9C61B704A40DCA0213C(L_2, NULL);
		RuntimeObject* L_4;
		L_4 = XContainerWrapper_WrapNode_m45080E6A0D0A531566B9B6B20B75328E5AD91CBA(L_3, NULL);
		return L_4;
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
// System.Xml.Linq.XProcessingInstruction Newtonsoft.Json.Converters.XProcessingInstructionWrapper::get_ProcessingInstruction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XProcessingInstruction_t920C9022DAD590F61972E400D46FC1C443265795* XProcessingInstructionWrapper_get_ProcessingInstruction_m465CA1E4A90DC9B2D5952C18B36D31BBC4FE9F83 (XProcessingInstructionWrapper_t73B2F6F52C84FBAB7AC112F1262C085959ED6D80* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XProcessingInstruction_t920C9022DAD590F61972E400D46FC1C443265795_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = XObjectWrapper_get_WrappedNode_m3CA9623838D4D4A96DCF882FC3C592D3D64D7573_inline(__this, NULL);
		return ((XProcessingInstruction_t920C9022DAD590F61972E400D46FC1C443265795*)CastclassClass((RuntimeObject*)L_0, XProcessingInstruction_t920C9022DAD590F61972E400D46FC1C443265795_il2cpp_TypeInfo_var));
	}
}
// System.Void Newtonsoft.Json.Converters.XProcessingInstructionWrapper::.ctor(System.Xml.Linq.XProcessingInstruction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XProcessingInstructionWrapper__ctor_mF6EF6425C7E1A9D9F46CB988F8C9E542ED2153CE (XProcessingInstructionWrapper_t73B2F6F52C84FBAB7AC112F1262C085959ED6D80* __this, XProcessingInstruction_t920C9022DAD590F61972E400D46FC1C443265795* ___processingInstruction0, const RuntimeMethod* method) 
{
	{
		XProcessingInstruction_t920C9022DAD590F61972E400D46FC1C443265795* L_0 = ___processingInstruction0;
		XObjectWrapper__ctor_m24EB638F7E591225CA536A66FEE9B6EE6D7E8330(__this, L_0, NULL);
		return;
	}
}
// System.String Newtonsoft.Json.Converters.XProcessingInstructionWrapper::get_LocalName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XProcessingInstructionWrapper_get_LocalName_mA87D8E9F6975B75FC134449FCB3B8CC02602ACA3 (XProcessingInstructionWrapper_t73B2F6F52C84FBAB7AC112F1262C085959ED6D80* __this, const RuntimeMethod* method) 
{
	{
		XProcessingInstruction_t920C9022DAD590F61972E400D46FC1C443265795* L_0;
		L_0 = XProcessingInstructionWrapper_get_ProcessingInstruction_m465CA1E4A90DC9B2D5952C18B36D31BBC4FE9F83(__this, NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = XProcessingInstruction_get_Target_mBB98BD38B91EBDC03558F4990591BE33FC1EB0DE_inline(L_0, NULL);
		return L_1;
	}
}
// System.String Newtonsoft.Json.Converters.XProcessingInstructionWrapper::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XProcessingInstructionWrapper_get_Value_m7C81865922E146B3EE1E2FB6AE81C2A720327C45 (XProcessingInstructionWrapper_t73B2F6F52C84FBAB7AC112F1262C085959ED6D80* __this, const RuntimeMethod* method) 
{
	{
		XProcessingInstruction_t920C9022DAD590F61972E400D46FC1C443265795* L_0;
		L_0 = XProcessingInstructionWrapper_get_ProcessingInstruction_m465CA1E4A90DC9B2D5952C18B36D31BBC4FE9F83(__this, NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = XProcessingInstruction_get_Data_mF06C89FCF9F580497E3B59331676AFC9AA3F416B_inline(L_0, NULL);
		return L_1;
	}
}
// System.Void Newtonsoft.Json.Converters.XProcessingInstructionWrapper::set_Value(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XProcessingInstructionWrapper_set_Value_mAD8E0AAB22DDC39F36E053EB61BDE8D9480EE353 (XProcessingInstructionWrapper_t73B2F6F52C84FBAB7AC112F1262C085959ED6D80* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		XProcessingInstruction_t920C9022DAD590F61972E400D46FC1C443265795* L_0;
		L_0 = XProcessingInstructionWrapper_get_ProcessingInstruction_m465CA1E4A90DC9B2D5952C18B36D31BBC4FE9F83(__this, NULL);
		String_t* L_1 = ___value0;
		NullCheck(L_0);
		XProcessingInstruction_set_Data_m6E09DD3B0921B4C9C342471380541E710F8F8714(L_0, L_1, NULL);
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
// System.Xml.Linq.XContainer Newtonsoft.Json.Converters.XContainerWrapper::get_Container()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF* XContainerWrapper_get_Container_mE8D578EC87F352A68CADF4E01DFAD5C242BFEDE6 (XContainerWrapper_t7B103CDF831C64B07E4BABE6307FB7D605328AF9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = XObjectWrapper_get_WrappedNode_m3CA9623838D4D4A96DCF882FC3C592D3D64D7573_inline(__this, NULL);
		return ((XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF*)CastclassClass((RuntimeObject*)L_0, XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF_il2cpp_TypeInfo_var));
	}
}
// System.Void Newtonsoft.Json.Converters.XContainerWrapper::.ctor(System.Xml.Linq.XContainer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XContainerWrapper__ctor_mDA5B56465A0FE70773B861EC590E47653923DFC4 (XContainerWrapper_t7B103CDF831C64B07E4BABE6307FB7D605328AF9* __this, XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF* ___container0, const RuntimeMethod* method) 
{
	{
		XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF* L_0 = ___container0;
		XObjectWrapper__ctor_m24EB638F7E591225CA536A66FEE9B6EE6D7E8330(__this, L_0, NULL);
		return;
	}
}
// System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode> Newtonsoft.Json.Converters.XContainerWrapper::get_ChildNodes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* XContainerWrapper_get_ChildNodes_mC85E0A4FF1522B40B19AEE06B034DE7C52EF1CA4 (XContainerWrapper_t7B103CDF831C64B07E4BABE6307FB7D605328AF9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t3CF62242A258E986307D7CCF84A4C03FB96055D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t14D6DCE9D9AA35992A6A7A1E7E89CCF8C2A477BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m398158DFE48F62CF2C479A46F0D6C5A6E3206CF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m99AF43FA43C38A915F0A8AF9F07EFF9D3183EA37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	XNode_t185C922661054AAD14F49676DD6F3CB10D652A30* V_1 = NULL;
	{
		List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_0 = __this->____childNodes_1;
		if (L_0)
		{
			goto IL_0067;
		}
	}
	{
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(23 /* System.Boolean Newtonsoft.Json.Converters.XContainerWrapper::get_HasChildNodes() */, __this);
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF_il2cpp_TypeInfo_var);
		List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_2 = ((XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF_StaticFields*)il2cpp_codegen_static_fields_for(XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF_il2cpp_TypeInfo_var))->___EmptyChildNodes_0;
		__this->____childNodes_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____childNodes_1), (void*)L_2);
		goto IL_0067;
	}

IL_001d:
	{
		List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_3 = (List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E*)il2cpp_codegen_object_new(List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_m99AF43FA43C38A915F0A8AF9F07EFF9D3183EA37(L_3, List_1__ctor_m99AF43FA43C38A915F0A8AF9F07EFF9D3183EA37_RuntimeMethod_var);
		__this->____childNodes_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____childNodes_1), (void*)L_3);
		XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF* L_4;
		L_4 = XContainerWrapper_get_Container_mE8D578EC87F352A68CADF4E01DFAD5C242BFEDE6(__this, NULL);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = XContainer_Nodes_mBB3D95BB437752701F9A687E56EA226C0F27EFE4(L_4, NULL);
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XNode>::GetEnumerator() */, IEnumerable_1_t3CF62242A258E986307D7CCF84A4C03FB96055D8_il2cpp_TypeInfo_var, L_5);
		V_0 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005d:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_7 = V_0;
					if (!L_7)
					{
						goto IL_0066;
					}
				}
				{
					RuntimeObject* L_8 = V_0;
					NullCheck(L_8);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_8);
				}

IL_0066:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0053_1;
			}

IL_003b_1:
			{
				RuntimeObject* L_9 = V_0;
				NullCheck(L_9);
				XNode_t185C922661054AAD14F49676DD6F3CB10D652A30* L_10;
				L_10 = InterfaceFuncInvoker0< XNode_t185C922661054AAD14F49676DD6F3CB10D652A30* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Xml.Linq.XNode>::get_Current() */, IEnumerator_1_t14D6DCE9D9AA35992A6A7A1E7E89CCF8C2A477BF_il2cpp_TypeInfo_var, L_9);
				V_1 = L_10;
				List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_11 = __this->____childNodes_1;
				XNode_t185C922661054AAD14F49676DD6F3CB10D652A30* L_12 = V_1;
				RuntimeObject* L_13;
				L_13 = XContainerWrapper_WrapNode_m45080E6A0D0A531566B9B6B20B75328E5AD91CBA(L_12, NULL);
				NullCheck(L_11);
				List_1_Add_m398158DFE48F62CF2C479A46F0D6C5A6E3206CF2_inline(L_11, L_13, List_1_Add_m398158DFE48F62CF2C479A46F0D6C5A6E3206CF2_RuntimeMethod_var);
			}

IL_0053_1:
			{
				RuntimeObject* L_14 = V_0;
				NullCheck(L_14);
				bool L_15;
				L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_14);
				if (L_15)
				{
					goto IL_003b_1;
				}
			}
			{
				goto IL_0067;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0067:
	{
		List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_16 = __this->____childNodes_1;
		return L_16;
	}
}
// System.Boolean Newtonsoft.Json.Converters.XContainerWrapper::get_HasChildNodes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XContainerWrapper_get_HasChildNodes_m93CCC01BDA9B4F58AD7877AC2A7C17E4E68172E8 (XContainerWrapper_t7B103CDF831C64B07E4BABE6307FB7D605328AF9* __this, const RuntimeMethod* method) 
{
	{
		XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF* L_0;
		L_0 = XContainerWrapper_get_Container_mE8D578EC87F352A68CADF4E01DFAD5C242BFEDE6(__this, NULL);
		NullCheck(L_0);
		XNode_t185C922661054AAD14F49676DD6F3CB10D652A30* L_1;
		L_1 = XContainer_get_LastNode_mA0896FBB61341D138E2F48F032D6C8169DEEED5E(L_0, NULL);
		return (bool)((!(((RuntimeObject*)(XNode_t185C922661054AAD14F49676DD6F3CB10D652A30*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.XContainerWrapper::get_ParentNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XContainerWrapper_get_ParentNode_m945C070A2B46FAE7DF88629434EEA8672CF735B0 (XContainerWrapper_t7B103CDF831C64B07E4BABE6307FB7D605328AF9* __this, const RuntimeMethod* method) 
{
	{
		XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF* L_0;
		L_0 = XContainerWrapper_get_Container_mE8D578EC87F352A68CADF4E01DFAD5C242BFEDE6(__this, NULL);
		NullCheck(L_0);
		XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* L_1;
		L_1 = XObject_get_Parent_m192B7F82C3DF6A43672AD9C61B704A40DCA0213C(L_0, NULL);
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		return (RuntimeObject*)NULL;
	}

IL_000f:
	{
		XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF* L_2;
		L_2 = XContainerWrapper_get_Container_mE8D578EC87F352A68CADF4E01DFAD5C242BFEDE6(__this, NULL);
		NullCheck(L_2);
		XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* L_3;
		L_3 = XObject_get_Parent_m192B7F82C3DF6A43672AD9C61B704A40DCA0213C(L_2, NULL);
		RuntimeObject* L_4;
		L_4 = XContainerWrapper_WrapNode_m45080E6A0D0A531566B9B6B20B75328E5AD91CBA(L_3, NULL);
		return L_4;
	}
}
// Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.XContainerWrapper::WrapNode(System.Xml.Linq.XObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XContainerWrapper_WrapNode_m45080E6A0D0A531566B9B6B20B75328E5AD91CBA (XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29* ___node0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XAttributeWrapper_t1FC7334561AD249FF39775D06CEF7BCECEBD9547_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XCommentWrapper_t1BFE83CA1648036FAD8B8C6E79806055D34F2782_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XComment_t2FD9205AC70AF739D97E5CE8B1CC29459191F43D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XContainerWrapper_t7B103CDF831C64B07E4BABE6307FB7D605328AF9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XDocumentTypeWrapper_tE70B54A200381660327029F12CDB902FF2EF26DA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XDocumentType_t195D491B418C3696FBCAEE34E53D734E0B53A817_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XDocumentWrapper_t3C3117E449826BEB20F7BFB77214046EE4D86AD6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XElementWrapper_t15082EFC96DF60AC9ACF10A1D60C1E04207FCA61_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XObjectWrapper_t1932FA32F64A100673DEC2063AF00052A6CE1B16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XProcessingInstructionWrapper_t73B2F6F52C84FBAB7AC112F1262C085959ED6D80_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XProcessingInstruction_t920C9022DAD590F61972E400D46FC1C443265795_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XTextWrapper_t54304AAC4CEF7C32A60F7D6519B28810027EC797_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XText_t006159E7F735736D41BBC0738FFB066A14B31AE2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1* V_0 = NULL;
	XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* V_1 = NULL;
	XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF* V_2 = NULL;
	XProcessingInstruction_t920C9022DAD590F61972E400D46FC1C443265795* V_3 = NULL;
	XText_t006159E7F735736D41BBC0738FFB066A14B31AE2* V_4 = NULL;
	XComment_t2FD9205AC70AF739D97E5CE8B1CC29459191F43D* V_5 = NULL;
	XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF* V_6 = NULL;
	XDocumentType_t195D491B418C3696FBCAEE34E53D734E0B53A817* V_7 = NULL;
	{
		XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29* L_0 = ___node0;
		V_0 = ((XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1*)IsInstClass((RuntimeObject*)L_0, XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1_il2cpp_TypeInfo_var));
		XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1* L_2 = V_0;
		XDocumentWrapper_t3C3117E449826BEB20F7BFB77214046EE4D86AD6* L_3 = (XDocumentWrapper_t3C3117E449826BEB20F7BFB77214046EE4D86AD6*)il2cpp_codegen_object_new(XDocumentWrapper_t3C3117E449826BEB20F7BFB77214046EE4D86AD6_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		XDocumentWrapper__ctor_mE05A6619DC930C9ABB32122C06DC694533611BDB(L_3, L_2, NULL);
		return L_3;
	}

IL_0011:
	{
		XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29* L_4 = ___node0;
		V_1 = ((XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909*)IsInstClass((RuntimeObject*)L_4, XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909_il2cpp_TypeInfo_var));
		XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* L_5 = V_1;
		if (!L_5)
		{
			goto IL_0022;
		}
	}
	{
		XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* L_6 = V_1;
		XElementWrapper_t15082EFC96DF60AC9ACF10A1D60C1E04207FCA61* L_7 = (XElementWrapper_t15082EFC96DF60AC9ACF10A1D60C1E04207FCA61*)il2cpp_codegen_object_new(XElementWrapper_t15082EFC96DF60AC9ACF10A1D60C1E04207FCA61_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		XElementWrapper__ctor_mADC48A43A4BBD8C2FEBF88F4A45ED0CA69FAEC7F(L_7, L_6, NULL);
		return L_7;
	}

IL_0022:
	{
		XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29* L_8 = ___node0;
		V_2 = ((XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF*)IsInstClass((RuntimeObject*)L_8, XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF_il2cpp_TypeInfo_var));
		XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF* L_9 = V_2;
		if (!L_9)
		{
			goto IL_0033;
		}
	}
	{
		XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF* L_10 = V_2;
		XContainerWrapper_t7B103CDF831C64B07E4BABE6307FB7D605328AF9* L_11 = (XContainerWrapper_t7B103CDF831C64B07E4BABE6307FB7D605328AF9*)il2cpp_codegen_object_new(XContainerWrapper_t7B103CDF831C64B07E4BABE6307FB7D605328AF9_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		XContainerWrapper__ctor_mDA5B56465A0FE70773B861EC590E47653923DFC4(L_11, L_10, NULL);
		return L_11;
	}

IL_0033:
	{
		XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29* L_12 = ___node0;
		V_3 = ((XProcessingInstruction_t920C9022DAD590F61972E400D46FC1C443265795*)IsInstClass((RuntimeObject*)L_12, XProcessingInstruction_t920C9022DAD590F61972E400D46FC1C443265795_il2cpp_TypeInfo_var));
		XProcessingInstruction_t920C9022DAD590F61972E400D46FC1C443265795* L_13 = V_3;
		if (!L_13)
		{
			goto IL_0044;
		}
	}
	{
		XProcessingInstruction_t920C9022DAD590F61972E400D46FC1C443265795* L_14 = V_3;
		XProcessingInstructionWrapper_t73B2F6F52C84FBAB7AC112F1262C085959ED6D80* L_15 = (XProcessingInstructionWrapper_t73B2F6F52C84FBAB7AC112F1262C085959ED6D80*)il2cpp_codegen_object_new(XProcessingInstructionWrapper_t73B2F6F52C84FBAB7AC112F1262C085959ED6D80_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		XProcessingInstructionWrapper__ctor_mF6EF6425C7E1A9D9F46CB988F8C9E542ED2153CE(L_15, L_14, NULL);
		return L_15;
	}

IL_0044:
	{
		XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29* L_16 = ___node0;
		V_4 = ((XText_t006159E7F735736D41BBC0738FFB066A14B31AE2*)IsInstClass((RuntimeObject*)L_16, XText_t006159E7F735736D41BBC0738FFB066A14B31AE2_il2cpp_TypeInfo_var));
		XText_t006159E7F735736D41BBC0738FFB066A14B31AE2* L_17 = V_4;
		if (!L_17)
		{
			goto IL_0058;
		}
	}
	{
		XText_t006159E7F735736D41BBC0738FFB066A14B31AE2* L_18 = V_4;
		XTextWrapper_t54304AAC4CEF7C32A60F7D6519B28810027EC797* L_19 = (XTextWrapper_t54304AAC4CEF7C32A60F7D6519B28810027EC797*)il2cpp_codegen_object_new(XTextWrapper_t54304AAC4CEF7C32A60F7D6519B28810027EC797_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		XTextWrapper__ctor_m98B8EFBEC0CA0A43C328B86120E043D5A4FE8222(L_19, L_18, NULL);
		return L_19;
	}

IL_0058:
	{
		XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29* L_20 = ___node0;
		V_5 = ((XComment_t2FD9205AC70AF739D97E5CE8B1CC29459191F43D*)IsInstClass((RuntimeObject*)L_20, XComment_t2FD9205AC70AF739D97E5CE8B1CC29459191F43D_il2cpp_TypeInfo_var));
		XComment_t2FD9205AC70AF739D97E5CE8B1CC29459191F43D* L_21 = V_5;
		if (!L_21)
		{
			goto IL_006c;
		}
	}
	{
		XComment_t2FD9205AC70AF739D97E5CE8B1CC29459191F43D* L_22 = V_5;
		XCommentWrapper_t1BFE83CA1648036FAD8B8C6E79806055D34F2782* L_23 = (XCommentWrapper_t1BFE83CA1648036FAD8B8C6E79806055D34F2782*)il2cpp_codegen_object_new(XCommentWrapper_t1BFE83CA1648036FAD8B8C6E79806055D34F2782_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		XCommentWrapper__ctor_m8DA2766F6E2CDC00FA2CF73EAAF21B30AFCD80B1(L_23, L_22, NULL);
		return L_23;
	}

IL_006c:
	{
		XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29* L_24 = ___node0;
		V_6 = ((XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF*)IsInstClass((RuntimeObject*)L_24, XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF_il2cpp_TypeInfo_var));
		XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF* L_25 = V_6;
		if (!L_25)
		{
			goto IL_0080;
		}
	}
	{
		XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF* L_26 = V_6;
		XAttributeWrapper_t1FC7334561AD249FF39775D06CEF7BCECEBD9547* L_27 = (XAttributeWrapper_t1FC7334561AD249FF39775D06CEF7BCECEBD9547*)il2cpp_codegen_object_new(XAttributeWrapper_t1FC7334561AD249FF39775D06CEF7BCECEBD9547_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		XAttributeWrapper__ctor_mCD158BF6A02EA1460BD22E3C99816A3308E2DC39(L_27, L_26, NULL);
		return L_27;
	}

IL_0080:
	{
		XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29* L_28 = ___node0;
		V_7 = ((XDocumentType_t195D491B418C3696FBCAEE34E53D734E0B53A817*)IsInstClass((RuntimeObject*)L_28, XDocumentType_t195D491B418C3696FBCAEE34E53D734E0B53A817_il2cpp_TypeInfo_var));
		XDocumentType_t195D491B418C3696FBCAEE34E53D734E0B53A817* L_29 = V_7;
		if (!L_29)
		{
			goto IL_0094;
		}
	}
	{
		XDocumentType_t195D491B418C3696FBCAEE34E53D734E0B53A817* L_30 = V_7;
		XDocumentTypeWrapper_tE70B54A200381660327029F12CDB902FF2EF26DA* L_31 = (XDocumentTypeWrapper_tE70B54A200381660327029F12CDB902FF2EF26DA*)il2cpp_codegen_object_new(XDocumentTypeWrapper_tE70B54A200381660327029F12CDB902FF2EF26DA_il2cpp_TypeInfo_var);
		NullCheck(L_31);
		XDocumentTypeWrapper__ctor_m448FB77B151C12873112FF5CC9B314E9DB8F6117(L_31, L_30, NULL);
		return L_31;
	}

IL_0094:
	{
		XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29* L_32 = ___node0;
		XObjectWrapper_t1932FA32F64A100673DEC2063AF00052A6CE1B16* L_33 = (XObjectWrapper_t1932FA32F64A100673DEC2063AF00052A6CE1B16*)il2cpp_codegen_object_new(XObjectWrapper_t1932FA32F64A100673DEC2063AF00052A6CE1B16_il2cpp_TypeInfo_var);
		NullCheck(L_33);
		XObjectWrapper__ctor_m24EB638F7E591225CA536A66FEE9B6EE6D7E8330(L_33, L_32, NULL);
		return L_33;
	}
}
// Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.XContainerWrapper::AppendChild(Newtonsoft.Json.Converters.IXmlNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XContainerWrapper_AppendChild_mD0C76048C57DBC7BE2A08BC215761BEF2552BC42 (XContainerWrapper_t7B103CDF831C64B07E4BABE6307FB7D605328AF9* __this, RuntimeObject* ___newChild0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF* L_0;
		L_0 = XContainerWrapper_get_Container_mE8D578EC87F352A68CADF4E01DFAD5C242BFEDE6(__this, NULL);
		RuntimeObject* L_1 = ___newChild0;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(9 /* System.Object Newtonsoft.Json.Converters.IXmlNode::get_WrappedNode() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_0);
		XContainer_Add_m26111A020919619F03525ED30091D4501090075B(L_0, L_2, NULL);
		__this->____childNodes_1 = (List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____childNodes_1), (void*)(List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E*)NULL);
		RuntimeObject* L_3 = ___newChild0;
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
// System.Void Newtonsoft.Json.Converters.XObjectWrapper::.ctor(System.Xml.Linq.XObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XObjectWrapper__ctor_m24EB638F7E591225CA536A66FEE9B6EE6D7E8330 (XObjectWrapper_t1932FA32F64A100673DEC2063AF00052A6CE1B16* __this, XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29* ___xmlObject0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29* L_0 = ___xmlObject0;
		__this->____xmlObject_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____xmlObject_0), (void*)L_0);
		return;
	}
}
// System.Object Newtonsoft.Json.Converters.XObjectWrapper::get_WrappedNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XObjectWrapper_get_WrappedNode_m3CA9623838D4D4A96DCF882FC3C592D3D64D7573 (XObjectWrapper_t1932FA32F64A100673DEC2063AF00052A6CE1B16* __this, const RuntimeMethod* method) 
{
	{
		XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29* L_0 = __this->____xmlObject_0;
		return L_0;
	}
}
// System.Xml.XmlNodeType Newtonsoft.Json.Converters.XObjectWrapper::get_NodeType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XObjectWrapper_get_NodeType_m0EC8D2F38FAC096C9A1C91B78A107C89FE08B867 (XObjectWrapper_t1932FA32F64A100673DEC2063AF00052A6CE1B16* __this, const RuntimeMethod* method) 
{
	XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29* G_B2_0 = NULL;
	XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29* G_B1_0 = NULL;
	{
		XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29* L_0 = __this->____xmlObject_0;
		XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		return (int32_t)(0);
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Xml.XmlNodeType System.Xml.Linq.XObject::get_NodeType() */, G_B2_0);
		return L_2;
	}
}
// System.String Newtonsoft.Json.Converters.XObjectWrapper::get_LocalName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XObjectWrapper_get_LocalName_mF7CD25C52F1D0EE14C5D9063035C27E1B237F421 (XObjectWrapper_t1932FA32F64A100673DEC2063AF00052A6CE1B16* __this, const RuntimeMethod* method) 
{
	{
		return (String_t*)NULL;
	}
}
// System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode> Newtonsoft.Json.Converters.XObjectWrapper::get_ChildNodes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* XObjectWrapper_get_ChildNodes_m43561E35BC5ECC8A22C56C1CB479B4CE638EB5B7 (XObjectWrapper_t1932FA32F64A100673DEC2063AF00052A6CE1B16* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF_il2cpp_TypeInfo_var);
		List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_0 = ((XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF_StaticFields*)il2cpp_codegen_static_fields_for(XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF_il2cpp_TypeInfo_var))->___EmptyChildNodes_0;
		return L_0;
	}
}
// System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode> Newtonsoft.Json.Converters.XObjectWrapper::get_Attributes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* XObjectWrapper_get_Attributes_m7C1E335535C8FB2A6685770BE0308503578EEFE5 (XObjectWrapper_t1932FA32F64A100673DEC2063AF00052A6CE1B16* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF_il2cpp_TypeInfo_var);
		List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_0 = ((XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF_StaticFields*)il2cpp_codegen_static_fields_for(XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF_il2cpp_TypeInfo_var))->___EmptyChildNodes_0;
		return L_0;
	}
}
// Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.XObjectWrapper::get_ParentNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XObjectWrapper_get_ParentNode_mFEE478450A586823D4E4F27B439C3B7CBD3167BE (XObjectWrapper_t1932FA32F64A100673DEC2063AF00052A6CE1B16* __this, const RuntimeMethod* method) 
{
	{
		return (RuntimeObject*)NULL;
	}
}
// System.String Newtonsoft.Json.Converters.XObjectWrapper::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XObjectWrapper_get_Value_mE59398A1F64A5FB46732FF84DF7E263FB201CE38 (XObjectWrapper_t1932FA32F64A100673DEC2063AF00052A6CE1B16* __this, const RuntimeMethod* method) 
{
	{
		return (String_t*)NULL;
	}
}
// System.Void Newtonsoft.Json.Converters.XObjectWrapper::set_Value(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XObjectWrapper_set_Value_m722090806963BEA2AEE1CA30D109FAAA63A84876 (XObjectWrapper_t1932FA32F64A100673DEC2063AF00052A6CE1B16* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XObjectWrapper_set_Value_m722090806963BEA2AEE1CA30D109FAAA63A84876_RuntimeMethod_var)));
	}
}
// Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.XObjectWrapper::AppendChild(Newtonsoft.Json.Converters.IXmlNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XObjectWrapper_AppendChild_m93FD89B25381B97A651348E158D8E33E4F37821B (XObjectWrapper_t1932FA32F64A100673DEC2063AF00052A6CE1B16* __this, RuntimeObject* ___newChild0, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XObjectWrapper_AppendChild_m93FD89B25381B97A651348E158D8E33E4F37821B_RuntimeMethod_var)));
	}
}
// System.String Newtonsoft.Json.Converters.XObjectWrapper::get_NamespaceUri()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XObjectWrapper_get_NamespaceUri_m5CD84D5CD1475CAC24C1535FBF1D65147E58987F (XObjectWrapper_t1932FA32F64A100673DEC2063AF00052A6CE1B16* __this, const RuntimeMethod* method) 
{
	{
		return (String_t*)NULL;
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
// System.Xml.Linq.XAttribute Newtonsoft.Json.Converters.XAttributeWrapper::get_Attribute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF* XAttributeWrapper_get_Attribute_m64F72E3BA361213F069AF1897D47A9586F6FA2E6 (XAttributeWrapper_t1FC7334561AD249FF39775D06CEF7BCECEBD9547* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = XObjectWrapper_get_WrappedNode_m3CA9623838D4D4A96DCF882FC3C592D3D64D7573_inline(__this, NULL);
		return ((XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF*)CastclassClass((RuntimeObject*)L_0, XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF_il2cpp_TypeInfo_var));
	}
}
// System.Void Newtonsoft.Json.Converters.XAttributeWrapper::.ctor(System.Xml.Linq.XAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XAttributeWrapper__ctor_mCD158BF6A02EA1460BD22E3C99816A3308E2DC39 (XAttributeWrapper_t1FC7334561AD249FF39775D06CEF7BCECEBD9547* __this, XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF* ___attribute0, const RuntimeMethod* method) 
{
	{
		XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF* L_0 = ___attribute0;
		XObjectWrapper__ctor_m24EB638F7E591225CA536A66FEE9B6EE6D7E8330(__this, L_0, NULL);
		return;
	}
}
// System.String Newtonsoft.Json.Converters.XAttributeWrapper::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XAttributeWrapper_get_Value_m8B697AE38E2DDBC0E31E7860009689FF5DA89BC2 (XAttributeWrapper_t1FC7334561AD249FF39775D06CEF7BCECEBD9547* __this, const RuntimeMethod* method) 
{
	{
		XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF* L_0;
		L_0 = XAttributeWrapper_get_Attribute_m64F72E3BA361213F069AF1897D47A9586F6FA2E6(__this, NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = XAttribute_get_Value_mDCE15378AC161DF20094EF77EFF017A6F6766EB1_inline(L_0, NULL);
		return L_1;
	}
}
// System.Void Newtonsoft.Json.Converters.XAttributeWrapper::set_Value(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XAttributeWrapper_set_Value_mD597A9910BDDB6736C58E67F5D48D8E295FE242E (XAttributeWrapper_t1FC7334561AD249FF39775D06CEF7BCECEBD9547* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF* L_0;
		L_0 = XAttributeWrapper_get_Attribute_m64F72E3BA361213F069AF1897D47A9586F6FA2E6(__this, NULL);
		String_t* L_1 = ___value0;
		NullCheck(L_0);
		XAttribute_set_Value_m6BB4BE5ED1708B0C3EB39A38DC36E8FE7BAA6C4C(L_0, L_1, NULL);
		return;
	}
}
// System.String Newtonsoft.Json.Converters.XAttributeWrapper::get_LocalName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XAttributeWrapper_get_LocalName_m972043B9A5DD764604E5A3929625E04C0451D596 (XAttributeWrapper_t1FC7334561AD249FF39775D06CEF7BCECEBD9547* __this, const RuntimeMethod* method) 
{
	{
		XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF* L_0;
		L_0 = XAttributeWrapper_get_Attribute_m64F72E3BA361213F069AF1897D47A9586F6FA2E6(__this, NULL);
		NullCheck(L_0);
		XName_tAF6D9533A7D11AC27118F656985AC325C2A50E5C* L_1;
		L_1 = XAttribute_get_Name_m5EB28279BB8BB19266997CB15733BD72CFB1DCB1_inline(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = XName_get_LocalName_m4CA50C151ADB8183972EA556868148AF0F5BED75_inline(L_1, NULL);
		return L_2;
	}
}
// System.String Newtonsoft.Json.Converters.XAttributeWrapper::get_NamespaceUri()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XAttributeWrapper_get_NamespaceUri_m6923813F42B9F0ABB8F8B542EFE3BA4B797DABFF (XAttributeWrapper_t1FC7334561AD249FF39775D06CEF7BCECEBD9547* __this, const RuntimeMethod* method) 
{
	{
		XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF* L_0;
		L_0 = XAttributeWrapper_get_Attribute_m64F72E3BA361213F069AF1897D47A9586F6FA2E6(__this, NULL);
		NullCheck(L_0);
		XName_tAF6D9533A7D11AC27118F656985AC325C2A50E5C* L_1;
		L_1 = XAttribute_get_Name_m5EB28279BB8BB19266997CB15733BD72CFB1DCB1_inline(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = XName_get_NamespaceName_mBEAFAB116BBDFE5B13EE2672C6C9DB3E58D257D3(L_1, NULL);
		return L_2;
	}
}
// Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.XAttributeWrapper::get_ParentNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XAttributeWrapper_get_ParentNode_mA27F66095E98A673B04FBC961F3023F2D92467C8 (XAttributeWrapper_t1FC7334561AD249FF39775D06CEF7BCECEBD9547* __this, const RuntimeMethod* method) 
{
	{
		XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF* L_0;
		L_0 = XAttributeWrapper_get_Attribute_m64F72E3BA361213F069AF1897D47A9586F6FA2E6(__this, NULL);
		NullCheck(L_0);
		XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* L_1;
		L_1 = XObject_get_Parent_m192B7F82C3DF6A43672AD9C61B704A40DCA0213C(L_0, NULL);
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		return (RuntimeObject*)NULL;
	}

IL_000f:
	{
		XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF* L_2;
		L_2 = XAttributeWrapper_get_Attribute_m64F72E3BA361213F069AF1897D47A9586F6FA2E6(__this, NULL);
		NullCheck(L_2);
		XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* L_3;
		L_3 = XObject_get_Parent_m192B7F82C3DF6A43672AD9C61B704A40DCA0213C(L_2, NULL);
		RuntimeObject* L_4;
		L_4 = XContainerWrapper_WrapNode_m45080E6A0D0A531566B9B6B20B75328E5AD91CBA(L_3, NULL);
		return L_4;
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
// System.Xml.Linq.XElement Newtonsoft.Json.Converters.XElementWrapper::get_Element()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* XElementWrapper_get_Element_mCE45E811C472BF01E89449EAD91DB4C37B5B2074 (XElementWrapper_t15082EFC96DF60AC9ACF10A1D60C1E04207FCA61* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = XObjectWrapper_get_WrappedNode_m3CA9623838D4D4A96DCF882FC3C592D3D64D7573_inline(__this, NULL);
		return ((XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909*)CastclassClass((RuntimeObject*)L_0, XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909_il2cpp_TypeInfo_var));
	}
}
// System.Void Newtonsoft.Json.Converters.XElementWrapper::.ctor(System.Xml.Linq.XElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XElementWrapper__ctor_mADC48A43A4BBD8C2FEBF88F4A45ED0CA69FAEC7F (XElementWrapper_t15082EFC96DF60AC9ACF10A1D60C1E04207FCA61* __this, XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* ___element0, const RuntimeMethod* method) 
{
	{
		XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* L_0 = ___element0;
		XContainerWrapper__ctor_mDA5B56465A0FE70773B861EC590E47653923DFC4(__this, L_0, NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Converters.XElementWrapper::SetAttributeNode(Newtonsoft.Json.Converters.IXmlNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XElementWrapper_SetAttributeNode_m87ADF1FE3CAA994A2B35154DB1EA020E530FF195 (XElementWrapper_t15082EFC96DF60AC9ACF10A1D60C1E04207FCA61* __this, RuntimeObject* ___attribute0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XObjectWrapper_t1932FA32F64A100673DEC2063AF00052A6CE1B16_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XObjectWrapper_t1932FA32F64A100673DEC2063AF00052A6CE1B16* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___attribute0;
		V_0 = ((XObjectWrapper_t1932FA32F64A100673DEC2063AF00052A6CE1B16*)CastclassClass((RuntimeObject*)L_0, XObjectWrapper_t1932FA32F64A100673DEC2063AF00052A6CE1B16_il2cpp_TypeInfo_var));
		XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* L_1;
		L_1 = XElementWrapper_get_Element_mCE45E811C472BF01E89449EAD91DB4C37B5B2074(__this, NULL);
		XObjectWrapper_t1932FA32F64A100673DEC2063AF00052A6CE1B16* L_2 = V_0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = XObjectWrapper_get_WrappedNode_m3CA9623838D4D4A96DCF882FC3C592D3D64D7573_inline(L_2, NULL);
		NullCheck(L_1);
		XContainer_Add_m26111A020919619F03525ED30091D4501090075B(L_1, L_3, NULL);
		__this->____attributes_2 = (List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____attributes_2), (void*)(List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E*)NULL);
		return;
	}
}
// System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode> Newtonsoft.Json.Converters.XElementWrapper::get_Attributes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* XElementWrapper_get_Attributes_mBCEC2D09F107433A944B9DC2DA694454C4B2FA49 (XElementWrapper_t15082EFC96DF60AC9ACF10A1D60C1E04207FCA61* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t148EAB2068C5F48E82A9E0C643BB154B8BB34257_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t48AB7213FE0C045660B7F1D0FEA232BA22210BC4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m398158DFE48F62CF2C479A46F0D6C5A6E3206CF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Insert_mB42244832CF5462EF2726D9EBEB081FE9426C926_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m99AF43FA43C38A915F0A8AF9F07EFF9D3183EA37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XAttributeWrapper_t1FC7334561AD249FF39775D06CEF7BCECEBD9547_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CDCEEB7A12F71E8DF3D6AC05D04621DD4FBABF3);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF* V_2 = NULL;
	{
		List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_0 = __this->____attributes_2;
		if (L_0)
		{
			goto IL_00ae;
		}
	}
	{
		XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* L_1;
		L_1 = XElementWrapper_get_Element_mCE45E811C472BF01E89449EAD91DB4C37B5B2074(__this, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = XElement_get_HasAttributes_m5ACE856A8490A467C7B9F7EC29D37147E6D4B022(L_1, NULL);
		if (L_2)
		{
			goto IL_0033;
		}
	}
	{
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(22 /* System.String Newtonsoft.Json.Converters.XObjectWrapper::get_NamespaceUri() */, __this);
		bool L_4;
		L_4 = XElementWrapper_HasImplicitNamespaceAttribute_mDC0EE4D07517BE0CC56DEBEDD9B968594E5379DB(__this, L_3, NULL);
		if (L_4)
		{
			goto IL_0033;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF_il2cpp_TypeInfo_var);
		List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_5 = ((XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF_StaticFields*)il2cpp_codegen_static_fields_for(XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF_il2cpp_TypeInfo_var))->___EmptyChildNodes_0;
		__this->____attributes_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____attributes_2), (void*)L_5);
		goto IL_00ae;
	}

IL_0033:
	{
		List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_6 = (List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E*)il2cpp_codegen_object_new(List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		List_1__ctor_m99AF43FA43C38A915F0A8AF9F07EFF9D3183EA37(L_6, List_1__ctor_m99AF43FA43C38A915F0A8AF9F07EFF9D3183EA37_RuntimeMethod_var);
		__this->____attributes_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____attributes_2), (void*)L_6);
		XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* L_7;
		L_7 = XElementWrapper_get_Element_mCE45E811C472BF01E89449EAD91DB4C37B5B2074(__this, NULL);
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = XElement_Attributes_m6B330A71FCAFA7A746FF494CC45F8B757F2CEF37(L_7, NULL);
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XAttribute>::GetEnumerator() */, IEnumerable_1_t148EAB2068C5F48E82A9E0C643BB154B8BB34257_il2cpp_TypeInfo_var, L_8);
		V_1 = L_9;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0073:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_10 = V_1;
					if (!L_10)
					{
						goto IL_007c;
					}
				}
				{
					RuntimeObject* L_11 = V_1;
					NullCheck(L_11);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_11);
				}

IL_007c:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0069_1;
			}

IL_0051_1:
			{
				RuntimeObject* L_12 = V_1;
				NullCheck(L_12);
				XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF* L_13;
				L_13 = InterfaceFuncInvoker0< XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Xml.Linq.XAttribute>::get_Current() */, IEnumerator_1_t48AB7213FE0C045660B7F1D0FEA232BA22210BC4_il2cpp_TypeInfo_var, L_12);
				V_2 = L_13;
				List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_14 = __this->____attributes_2;
				XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF* L_15 = V_2;
				XAttributeWrapper_t1FC7334561AD249FF39775D06CEF7BCECEBD9547* L_16 = (XAttributeWrapper_t1FC7334561AD249FF39775D06CEF7BCECEBD9547*)il2cpp_codegen_object_new(XAttributeWrapper_t1FC7334561AD249FF39775D06CEF7BCECEBD9547_il2cpp_TypeInfo_var);
				NullCheck(L_16);
				XAttributeWrapper__ctor_mCD158BF6A02EA1460BD22E3C99816A3308E2DC39(L_16, L_15, NULL);
				NullCheck(L_14);
				List_1_Add_m398158DFE48F62CF2C479A46F0D6C5A6E3206CF2_inline(L_14, L_16, List_1_Add_m398158DFE48F62CF2C479A46F0D6C5A6E3206CF2_RuntimeMethod_var);
			}

IL_0069_1:
			{
				RuntimeObject* L_17 = V_1;
				NullCheck(L_17);
				bool L_18;
				L_18 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_17);
				if (L_18)
				{
					goto IL_0051_1;
				}
			}
			{
				goto IL_007d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_007d:
	{
		String_t* L_19;
		L_19 = VirtualFuncInvoker0< String_t* >::Invoke(22 /* System.String Newtonsoft.Json.Converters.XObjectWrapper::get_NamespaceUri() */, __this);
		V_0 = L_19;
		String_t* L_20 = V_0;
		bool L_21;
		L_21 = XElementWrapper_HasImplicitNamespaceAttribute_mDC0EE4D07517BE0CC56DEBEDD9B968594E5379DB(__this, L_20, NULL);
		if (!L_21)
		{
			goto IL_00ae;
		}
	}
	{
		List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_22 = __this->____attributes_2;
		XName_tAF6D9533A7D11AC27118F656985AC325C2A50E5C* L_23;
		L_23 = XName_op_Implicit_m3A259E71F7D76AA504349A98DAE3C47D7A943736(_stringLiteral9CDCEEB7A12F71E8DF3D6AC05D04621DD4FBABF3, NULL);
		String_t* L_24 = V_0;
		XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF* L_25 = (XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF*)il2cpp_codegen_object_new(XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		XAttribute__ctor_m913E6ED815250651BF84B13AE1C1B79C6C7F9CE0(L_25, L_23, L_24, NULL);
		XAttributeWrapper_t1FC7334561AD249FF39775D06CEF7BCECEBD9547* L_26 = (XAttributeWrapper_t1FC7334561AD249FF39775D06CEF7BCECEBD9547*)il2cpp_codegen_object_new(XAttributeWrapper_t1FC7334561AD249FF39775D06CEF7BCECEBD9547_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		XAttributeWrapper__ctor_mCD158BF6A02EA1460BD22E3C99816A3308E2DC39(L_26, L_25, NULL);
		NullCheck(L_22);
		List_1_Insert_mB42244832CF5462EF2726D9EBEB081FE9426C926(L_22, 0, L_26, List_1_Insert_mB42244832CF5462EF2726D9EBEB081FE9426C926_RuntimeMethod_var);
	}

IL_00ae:
	{
		List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_27 = __this->____attributes_2;
		return L_27;
	}
}
// System.Boolean Newtonsoft.Json.Converters.XElementWrapper::HasImplicitNamespaceAttribute(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XElementWrapper_HasImplicitNamespaceAttribute_mDC0EE4D07517BE0CC56DEBEDD9B968594E5379DB (XElementWrapper_t15082EFC96DF60AC9ACF10A1D60C1E04207FCA61* __this, String_t* ___namespaceUri0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t148EAB2068C5F48E82A9E0C643BB154B8BB34257_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t48AB7213FE0C045660B7F1D0FEA232BA22210BC4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CDCEEB7A12F71E8DF3D6AC05D04621DD4FBABF3);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF* V_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	String_t* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	{
		String_t* L_0 = ___namespaceUri0;
		bool L_1;
		L_1 = StringUtils_IsNullOrEmpty_mDB5E4B38C6134F72E602D16501AF88B58C3C67BA(L_0, NULL);
		if (L_1)
		{
			goto IL_00b1;
		}
	}
	{
		String_t* L_2 = ___namespaceUri0;
		RuntimeObject* L_3;
		L_3 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(18 /* Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.XObjectWrapper::get_ParentNode() */, __this);
		RuntimeObject* L_4 = L_3;
		G_B2_0 = L_4;
		G_B2_1 = L_2;
		if (L_4)
		{
			G_B3_0 = L_4;
			G_B3_1 = L_2;
			goto IL_0019;
		}
	}
	{
		G_B4_0 = ((String_t*)(NULL));
		G_B4_1 = G_B2_1;
		goto IL_001e;
	}

IL_0019:
	{
		NullCheck(G_B3_0);
		String_t* L_5;
		L_5 = InterfaceFuncInvoker0< String_t* >::Invoke(8 /* System.String Newtonsoft.Json.Converters.IXmlNode::get_NamespaceUri() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, G_B3_0);
		G_B4_0 = L_5;
		G_B4_1 = G_B3_1;
	}

IL_001e:
	{
		bool L_6;
		L_6 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(G_B4_1, G_B4_0, NULL);
		if (!L_6)
		{
			goto IL_00b1;
		}
	}
	{
		String_t* L_7 = ___namespaceUri0;
		String_t* L_8;
		L_8 = XElementWrapper_GetPrefixOfNamespace_m6E8DA9B2D4BAF02CD2660213C9CA4405575F1D19(__this, L_7, NULL);
		bool L_9;
		L_9 = StringUtils_IsNullOrEmpty_mDB5E4B38C6134F72E602D16501AF88B58C3C67BA(L_8, NULL);
		if (!L_9)
		{
			goto IL_00b1;
		}
	}
	{
		V_0 = (bool)0;
		XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* L_10;
		L_10 = XElementWrapper_get_Element_mCE45E811C472BF01E89449EAD91DB4C37B5B2074(__this, NULL);
		NullCheck(L_10);
		bool L_11;
		L_11 = XElement_get_HasAttributes_m5ACE856A8490A467C7B9F7EC29D37147E6D4B022(L_10, NULL);
		if (!L_11)
		{
			goto IL_00ac;
		}
	}
	{
		XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* L_12;
		L_12 = XElementWrapper_get_Element_mCE45E811C472BF01E89449EAD91DB4C37B5B2074(__this, NULL);
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = XElement_Attributes_m6B330A71FCAFA7A746FF494CC45F8B757F2CEF37(L_12, NULL);
		NullCheck(L_13);
		RuntimeObject* L_14;
		L_14 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XAttribute>::GetEnumerator() */, IEnumerable_1_t148EAB2068C5F48E82A9E0C643BB154B8BB34257_il2cpp_TypeInfo_var, L_13);
		V_1 = L_14;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00a2:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_15 = V_1;
					if (!L_15)
					{
						goto IL_00ab;
					}
				}
				{
					RuntimeObject* L_16 = V_1;
					NullCheck(L_16);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_16);
				}

IL_00ab:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0098_1;
			}

IL_0058_1:
			{
				RuntimeObject* L_17 = V_1;
				NullCheck(L_17);
				XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF* L_18;
				L_18 = InterfaceFuncInvoker0< XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Xml.Linq.XAttribute>::get_Current() */, IEnumerator_1_t48AB7213FE0C045660B7F1D0FEA232BA22210BC4_il2cpp_TypeInfo_var, L_17);
				V_2 = L_18;
				XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF* L_19 = V_2;
				NullCheck(L_19);
				XName_tAF6D9533A7D11AC27118F656985AC325C2A50E5C* L_20;
				L_20 = XAttribute_get_Name_m5EB28279BB8BB19266997CB15733BD72CFB1DCB1_inline(L_19, NULL);
				NullCheck(L_20);
				String_t* L_21;
				L_21 = XName_get_LocalName_m4CA50C151ADB8183972EA556868148AF0F5BED75_inline(L_20, NULL);
				bool L_22;
				L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteral9CDCEEB7A12F71E8DF3D6AC05D04621DD4FBABF3, NULL);
				if (!L_22)
				{
					goto IL_0098_1;
				}
			}
			{
				XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF* L_23 = V_2;
				NullCheck(L_23);
				XName_tAF6D9533A7D11AC27118F656985AC325C2A50E5C* L_24;
				L_24 = XAttribute_get_Name_m5EB28279BB8BB19266997CB15733BD72CFB1DCB1_inline(L_23, NULL);
				NullCheck(L_24);
				String_t* L_25;
				L_25 = XName_get_NamespaceName_mBEAFAB116BBDFE5B13EE2672C6C9DB3E58D257D3(L_24, NULL);
				bool L_26;
				L_26 = StringUtils_IsNullOrEmpty_mDB5E4B38C6134F72E602D16501AF88B58C3C67BA(L_25, NULL);
				if (!L_26)
				{
					goto IL_0098_1;
				}
			}
			{
				XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF* L_27 = V_2;
				NullCheck(L_27);
				String_t* L_28;
				L_28 = XAttribute_get_Value_mDCE15378AC161DF20094EF77EFF017A6F6766EB1_inline(L_27, NULL);
				String_t* L_29 = ___namespaceUri0;
				bool L_30;
				L_30 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, L_29, NULL);
				if (!L_30)
				{
					goto IL_0098_1;
				}
			}
			{
				V_0 = (bool)1;
			}

IL_0098_1:
			{
				RuntimeObject* L_31 = V_1;
				NullCheck(L_31);
				bool L_32;
				L_32 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_31);
				if (L_32)
				{
					goto IL_0058_1;
				}
			}
			{
				goto IL_00ac;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00ac:
	{
		bool L_33 = V_0;
		if (L_33)
		{
			goto IL_00b1;
		}
	}
	{
		return (bool)1;
	}

IL_00b1:
	{
		return (bool)0;
	}
}
// Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.XElementWrapper::AppendChild(Newtonsoft.Json.Converters.IXmlNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XElementWrapper_AppendChild_m7F2CE9197158F3EFF8555A062D195E207530AFAC (XElementWrapper_t15082EFC96DF60AC9ACF10A1D60C1E04207FCA61* __this, RuntimeObject* ___newChild0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___newChild0;
		RuntimeObject* L_1;
		L_1 = XContainerWrapper_AppendChild_mD0C76048C57DBC7BE2A08BC215761BEF2552BC42(__this, L_0, NULL);
		__this->____attributes_2 = (List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____attributes_2), (void*)(List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E*)NULL);
		return L_1;
	}
}
// System.String Newtonsoft.Json.Converters.XElementWrapper::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XElementWrapper_get_Value_m8610D6D1BBD66BFD3DB13666D4FFF031F6C6F561 (XElementWrapper_t15082EFC96DF60AC9ACF10A1D60C1E04207FCA61* __this, const RuntimeMethod* method) 
{
	{
		XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* L_0;
		L_0 = XElementWrapper_get_Element_mCE45E811C472BF01E89449EAD91DB4C37B5B2074(__this, NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = XElement_get_Value_mC49BD0D0A616BD26B1B8E2D33D2E22D2F5A667BA(L_0, NULL);
		return L_1;
	}
}
// System.Void Newtonsoft.Json.Converters.XElementWrapper::set_Value(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XElementWrapper_set_Value_m9E6B42A554CCFA2498C1D26C9DF352347E8EEDC1 (XElementWrapper_t15082EFC96DF60AC9ACF10A1D60C1E04207FCA61* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* L_0;
		L_0 = XElementWrapper_get_Element_mCE45E811C472BF01E89449EAD91DB4C37B5B2074(__this, NULL);
		String_t* L_1 = ___value0;
		NullCheck(L_0);
		XElement_set_Value_mC305400046C92E8072E180C50982C6C6EEF98F66(L_0, L_1, NULL);
		return;
	}
}
// System.String Newtonsoft.Json.Converters.XElementWrapper::get_LocalName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XElementWrapper_get_LocalName_mA47C683BF562D2B6AD547329F99FB15945037BDF (XElementWrapper_t15082EFC96DF60AC9ACF10A1D60C1E04207FCA61* __this, const RuntimeMethod* method) 
{
	{
		XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* L_0;
		L_0 = XElementWrapper_get_Element_mCE45E811C472BF01E89449EAD91DB4C37B5B2074(__this, NULL);
		NullCheck(L_0);
		XName_tAF6D9533A7D11AC27118F656985AC325C2A50E5C* L_1;
		L_1 = XElement_get_Name_mAF691F0AFE4F732FE836AEAC566536C1231AA74D_inline(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = XName_get_LocalName_m4CA50C151ADB8183972EA556868148AF0F5BED75_inline(L_1, NULL);
		return L_2;
	}
}
// System.String Newtonsoft.Json.Converters.XElementWrapper::get_NamespaceUri()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XElementWrapper_get_NamespaceUri_m537A5A8F6039B89961825F2EFFBD0D57F8EB0B04 (XElementWrapper_t15082EFC96DF60AC9ACF10A1D60C1E04207FCA61* __this, const RuntimeMethod* method) 
{
	{
		XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* L_0;
		L_0 = XElementWrapper_get_Element_mCE45E811C472BF01E89449EAD91DB4C37B5B2074(__this, NULL);
		NullCheck(L_0);
		XName_tAF6D9533A7D11AC27118F656985AC325C2A50E5C* L_1;
		L_1 = XElement_get_Name_mAF691F0AFE4F732FE836AEAC566536C1231AA74D_inline(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = XName_get_NamespaceName_mBEAFAB116BBDFE5B13EE2672C6C9DB3E58D257D3(L_1, NULL);
		return L_2;
	}
}
// System.String Newtonsoft.Json.Converters.XElementWrapper::GetPrefixOfNamespace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XElementWrapper_GetPrefixOfNamespace_m6E8DA9B2D4BAF02CD2660213C9CA4405575F1D19 (XElementWrapper_t15082EFC96DF60AC9ACF10A1D60C1E04207FCA61* __this, String_t* ___namespaceUri0, const RuntimeMethod* method) 
{
	{
		XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* L_0;
		L_0 = XElementWrapper_get_Element_mCE45E811C472BF01E89449EAD91DB4C37B5B2074(__this, NULL);
		String_t* L_1 = ___namespaceUri0;
		XNamespace_t86B6F8515F5E20D387B83EBDE0890C4559A4012C* L_2;
		L_2 = XNamespace_op_Implicit_m82CA31E66BE67924ED340B6CF69B6DF3E8FAC7DC(L_1, NULL);
		NullCheck(L_0);
		String_t* L_3;
		L_3 = XElement_GetPrefixOfNamespace_mD293E0A204AED396C6768157226CBC6A72BFAD11(L_0, L_2, NULL);
		return L_3;
	}
}
// System.Boolean Newtonsoft.Json.Converters.XElementWrapper::get_IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XElementWrapper_get_IsEmpty_mF42A83AA38E3BA1A7F55EC274D4D7ECAB1DDB880 (XElementWrapper_t15082EFC96DF60AC9ACF10A1D60C1E04207FCA61* __this, const RuntimeMethod* method) 
{
	{
		XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* L_0;
		L_0 = XElementWrapper_get_Element_mCE45E811C472BF01E89449EAD91DB4C37B5B2074(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = XElement_get_IsEmpty_m4451FEC389D90F236A5537E14D0638D40C44D049(L_0, NULL);
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
// System.String Newtonsoft.Json.Converters.XmlNodeConverter::get_DeserializeRootElementName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlNodeConverter_get_DeserializeRootElementName_m2A0B73747601E99F60881D50EF7D55F0EDBE85A4 (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CDeserializeRootElementNameU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Converters.XmlNodeConverter::set_DeserializeRootElementName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeConverter_set_DeserializeRootElementName_m3BF71E4654215F114EDE08F035A62A886E87821A (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CDeserializeRootElementNameU3Ek__BackingField_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDeserializeRootElementNameU3Ek__BackingField_8), (void*)L_0);
		return;
	}
}
// System.Boolean Newtonsoft.Json.Converters.XmlNodeConverter::get_WriteArrayAttribute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlNodeConverter_get_WriteArrayAttribute_mB90AAB6C83E3DFD4E0F0FE8DBB9BF151248378F2 (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CWriteArrayAttributeU3Ek__BackingField_9;
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Converters.XmlNodeConverter::set_WriteArrayAttribute(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeConverter_set_WriteArrayAttribute_mDB9B899CAC005A16290D1AE4688D6114195A1F24 (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CWriteArrayAttributeU3Ek__BackingField_9 = L_0;
		return;
	}
}
// System.Boolean Newtonsoft.Json.Converters.XmlNodeConverter::get_OmitRootObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlNodeConverter_get_OmitRootObject_m39D54F5791FD93911139FB9E46BABBDE5D062184 (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3COmitRootObjectU3Ek__BackingField_10;
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Converters.XmlNodeConverter::set_OmitRootObject(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeConverter_set_OmitRootObject_mA3B18200974DB101932BFFD9AE802656815C7729 (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3COmitRootObjectU3Ek__BackingField_10 = L_0;
		return;
	}
}
// System.Boolean Newtonsoft.Json.Converters.XmlNodeConverter::get_EncodeSpecialCharacters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlNodeConverter_get_EncodeSpecialCharacters_m343756B55466DB680EF3561E34A803C5D2FFC0BD (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CEncodeSpecialCharactersU3Ek__BackingField_11;
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Converters.XmlNodeConverter::set_EncodeSpecialCharacters(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeConverter_set_EncodeSpecialCharacters_m08188F39DD276C01BD54AA58C4A7D7CF2E03D47C (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CEncodeSpecialCharactersU3Ek__BackingField_11 = L_0;
		return;
	}
}
// System.Void Newtonsoft.Json.Converters.XmlNodeConverter::WriteJson(Newtonsoft.Json.JsonWriter,System.Object,Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeConverter_WriteJson_mC9928FB4E2184CDC9F294BB9AD22AC5F5E8E0CF9 (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* ___writer0, RuntimeObject* ___value1, JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* ___serializer2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NameTable_t0164DCE377A0A6E712CF54BE4CE5DA58A5537B46_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* V_1 = NULL;
	{
		RuntimeObject* L_0 = ___value1;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_1 = ___writer0;
		NullCheck(L_1);
		VirtualActionInvoker0::Invoke(82 /* System.Void Newtonsoft.Json.JsonWriter::WriteNull() */, L_1);
		return;
	}

IL_000a:
	{
		RuntimeObject* L_2 = ___value1;
		RuntimeObject* L_3;
		L_3 = XmlNodeConverter_WrapXml_m75EF1038542649689A89FBF5A3F2CED042EBF228(__this, L_2, NULL);
		V_0 = L_3;
		NameTable_t0164DCE377A0A6E712CF54BE4CE5DA58A5537B46* L_4 = (NameTable_t0164DCE377A0A6E712CF54BE4CE5DA58A5537B46*)il2cpp_codegen_object_new(NameTable_t0164DCE377A0A6E712CF54BE4CE5DA58A5537B46_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		NameTable__ctor_mB02EE27092095D81E839D51519C4FBDA2227C261(L_4, NULL);
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_5 = (XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F*)il2cpp_codegen_object_new(XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		XmlNamespaceManager__ctor_m18E69120CE5886E06630CCCC3215D2C67FC669DB(L_5, L_4, NULL);
		V_1 = L_5;
		RuntimeObject* L_6 = V_0;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_7 = V_1;
		XmlNodeConverter_PushParentNamespaces_m72AF63B5C2C7D78F06FA7A495DADCA6759027AA3(__this, L_6, L_7, NULL);
		bool L_8;
		L_8 = XmlNodeConverter_get_OmitRootObject_m39D54F5791FD93911139FB9E46BABBDE5D062184_inline(__this, NULL);
		if (L_8)
		{
			goto IL_0033;
		}
	}
	{
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_9 = ___writer0;
		NullCheck(L_9);
		VirtualActionInvoker0::Invoke(68 /* System.Void Newtonsoft.Json.JsonWriter::WriteStartObject() */, L_9);
	}

IL_0033:
	{
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_10 = ___writer0;
		RuntimeObject* L_11 = V_0;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_12 = V_1;
		bool L_13;
		L_13 = XmlNodeConverter_get_OmitRootObject_m39D54F5791FD93911139FB9E46BABBDE5D062184_inline(__this, NULL);
		XmlNodeConverter_SerializeNode_mBBB1AA0A7AC24A39675F1B210F51870CE932D6AA(__this, L_10, L_11, L_12, (bool)((((int32_t)L_13) == ((int32_t)0))? 1 : 0), NULL);
		bool L_14;
		L_14 = XmlNodeConverter_get_OmitRootObject_m39D54F5791FD93911139FB9E46BABBDE5D062184_inline(__this, NULL);
		if (L_14)
		{
			goto IL_0053;
		}
	}
	{
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_15 = ___writer0;
		NullCheck(L_15);
		VirtualActionInvoker0::Invoke(69 /* System.Void Newtonsoft.Json.JsonWriter::WriteEndObject() */, L_15);
	}

IL_0053:
	{
		return;
	}
}
// Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.XmlNodeConverter::WrapXml(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlNodeConverter_WrapXml_m75EF1038542649689A89FBF5A3F2CED042EBF228 (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29* V_0 = NULL;
	XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* V_1 = NULL;
	{
		RuntimeObject* L_0 = ___value0;
		V_0 = ((XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29*)IsInstClass((RuntimeObject*)L_0, XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29_il2cpp_TypeInfo_var));
		XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29* L_2 = V_0;
		RuntimeObject* L_3;
		L_3 = XContainerWrapper_WrapNode_m45080E6A0D0A531566B9B6B20B75328E5AD91CBA(L_2, NULL);
		return L_3;
	}

IL_0011:
	{
		RuntimeObject* L_4 = ___value0;
		V_1 = ((XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF*)IsInstClass((RuntimeObject*)L_4, XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF_il2cpp_TypeInfo_var));
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_5 = V_1;
		if (!L_5)
		{
			goto IL_0022;
		}
	}
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_6 = V_1;
		RuntimeObject* L_7;
		L_7 = XmlNodeWrapper_WrapNode_m45C8C60B81EA49FF73F8BB1F18EE8E4E8DE52DB4(L_6, NULL);
		return L_7;
	}

IL_0022:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_8 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral96E8BF0E5DDD81FBBF5598805554859ED641E1E2)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlNodeConverter_WrapXml_m75EF1038542649689A89FBF5A3F2CED042EBF228_RuntimeMethod_var)));
	}
}
// System.Void Newtonsoft.Json.Converters.XmlNodeConverter::PushParentNamespaces(Newtonsoft.Json.Converters.IXmlNode,System.Xml.XmlNamespaceManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeConverter_PushParentNamespaces_m72AF63B5C2C7D78F06FA7A495DADCA6759027AA3 (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, RuntimeObject* ___node0, XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* ___manager1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mC2891A1E295FEF8B5B64E96EB62B5945149DF7BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m8A802F6DDB7EA4435FEE6877988C792B8B583F88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m894DFFA678072980ECF786B52912E28891E006DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m398158DFE48F62CF2C479A46F0D6C5A6E3206CF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m8E48B727D08C794BA9EB42BB47747FD56F55C10E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Reverse_m650275B7F9E56003CC1A1616FFA5A3BBC3541627_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m99AF43FA43C38A915F0A8AF9F07EFF9D3183EA37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral420B74A52534550B0DD14DCF7D8988C2BD4936CE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CDCEEB7A12F71E8DF3D6AC05D04621DD4FBABF3);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Enumerator_t5D6B89D2864E6CA1D667C75E2375831735B2B941 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Enumerator_t5D6B89D2864E6CA1D667C75E2375831735B2B941 V_3;
	memset((&V_3), 0, sizeof(V_3));
	RuntimeObject* V_4 = NULL;
	{
		V_0 = (List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E*)NULL;
		RuntimeObject* L_0 = ___node0;
		V_1 = L_0;
		goto IL_001f;
	}

IL_0006:
	{
		RuntimeObject* L_1 = V_1;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Xml.XmlNodeType Newtonsoft.Json.Converters.IXmlNode::get_NodeType() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001f;
		}
	}
	{
		List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_3 = V_0;
		if (L_3)
		{
			goto IL_0018;
		}
	}
	{
		List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_4 = (List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E*)il2cpp_codegen_object_new(List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		List_1__ctor_m99AF43FA43C38A915F0A8AF9F07EFF9D3183EA37(L_4, List_1__ctor_m99AF43FA43C38A915F0A8AF9F07EFF9D3183EA37_RuntimeMethod_var);
		V_0 = L_4;
	}

IL_0018:
	{
		List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_5 = V_0;
		RuntimeObject* L_6 = V_1;
		NullCheck(L_5);
		List_1_Add_m398158DFE48F62CF2C479A46F0D6C5A6E3206CF2_inline(L_5, L_6, List_1_Add_m398158DFE48F62CF2C479A46F0D6C5A6E3206CF2_RuntimeMethod_var);
	}

IL_001f:
	{
		RuntimeObject* L_7 = V_1;
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(4 /* Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.IXmlNode::get_ParentNode() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_7);
		RuntimeObject* L_9 = L_8;
		V_1 = L_9;
		if (L_9)
		{
			goto IL_0006;
		}
	}
	{
		List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_10 = V_0;
		if (!L_10)
		{
			goto IL_00cd;
		}
	}
	{
		List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_11 = V_0;
		NullCheck(L_11);
		List_1_Reverse_m650275B7F9E56003CC1A1616FFA5A3BBC3541627(L_11, List_1_Reverse_m650275B7F9E56003CC1A1616FFA5A3BBC3541627_RuntimeMethod_var);
		List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_12 = V_0;
		NullCheck(L_12);
		Enumerator_t5D6B89D2864E6CA1D667C75E2375831735B2B941 L_13;
		L_13 = List_1_GetEnumerator_m8E48B727D08C794BA9EB42BB47747FD56F55C10E(L_12, List_1_GetEnumerator_m8E48B727D08C794BA9EB42BB47747FD56F55C10E_RuntimeMethod_var);
		V_2 = L_13;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00bf:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mC2891A1E295FEF8B5B64E96EB62B5945149DF7BD((&V_2), Enumerator_Dispose_mC2891A1E295FEF8B5B64E96EB62B5945149DF7BD_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00b4_1;
			}

IL_003e_1:
			{
				RuntimeObject* L_14;
				L_14 = Enumerator_get_Current_m894DFFA678072980ECF786B52912E28891E006DB_inline((&V_2), Enumerator_get_Current_m894DFFA678072980ECF786B52912E28891E006DB_RuntimeMethod_var);
				XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_15 = ___manager1;
				NullCheck(L_15);
				VirtualActionInvoker0::Invoke(10 /* System.Void System.Xml.XmlNamespaceManager::PushScope() */, L_15);
				NullCheck(L_14);
				List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_16;
				L_16 = InterfaceFuncInvoker0< List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* >::Invoke(3 /* System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode> Newtonsoft.Json.Converters.IXmlNode::get_Attributes() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_14);
				NullCheck(L_16);
				Enumerator_t5D6B89D2864E6CA1D667C75E2375831735B2B941 L_17;
				L_17 = List_1_GetEnumerator_m8E48B727D08C794BA9EB42BB47747FD56F55C10E(L_16, List_1_GetEnumerator_m8E48B727D08C794BA9EB42BB47747FD56F55C10E_RuntimeMethod_var);
				V_3 = L_17;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_00a6_1:
					{// begin finally (depth: 2)
						Enumerator_Dispose_mC2891A1E295FEF8B5B64E96EB62B5945149DF7BD((&V_3), Enumerator_Dispose_mC2891A1E295FEF8B5B64E96EB62B5945149DF7BD_RuntimeMethod_var);
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_009b_2;
					}

IL_0058_2:
					{
						RuntimeObject* L_18;
						L_18 = Enumerator_get_Current_m894DFFA678072980ECF786B52912E28891E006DB_inline((&V_3), Enumerator_get_Current_m894DFFA678072980ECF786B52912E28891E006DB_RuntimeMethod_var);
						V_4 = L_18;
						RuntimeObject* L_19 = V_4;
						NullCheck(L_19);
						String_t* L_20;
						L_20 = InterfaceFuncInvoker0< String_t* >::Invoke(8 /* System.String Newtonsoft.Json.Converters.IXmlNode::get_NamespaceUri() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_19);
						bool L_21;
						L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral420B74A52534550B0DD14DCF7D8988C2BD4936CE, NULL);
						if (!L_21)
						{
							goto IL_009b_2;
						}
					}
					{
						RuntimeObject* L_22 = V_4;
						NullCheck(L_22);
						String_t* L_23;
						L_23 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String Newtonsoft.Json.Converters.IXmlNode::get_LocalName() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_22);
						bool L_24;
						L_24 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_23, _stringLiteral9CDCEEB7A12F71E8DF3D6AC05D04621DD4FBABF3, NULL);
						if (!L_24)
						{
							goto IL_009b_2;
						}
					}
					{
						XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_25 = ___manager1;
						RuntimeObject* L_26 = V_4;
						NullCheck(L_26);
						String_t* L_27;
						L_27 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String Newtonsoft.Json.Converters.IXmlNode::get_LocalName() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_26);
						RuntimeObject* L_28 = V_4;
						NullCheck(L_28);
						String_t* L_29;
						L_29 = InterfaceFuncInvoker0< String_t* >::Invoke(5 /* System.String Newtonsoft.Json.Converters.IXmlNode::get_Value() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_28);
						NullCheck(L_25);
						VirtualActionInvoker2< String_t*, String_t* >::Invoke(12 /* System.Void System.Xml.XmlNamespaceManager::AddNamespace(System.String,System.String) */, L_25, L_27, L_29);
					}

IL_009b_2:
					{
						bool L_30;
						L_30 = Enumerator_MoveNext_m8A802F6DDB7EA4435FEE6877988C792B8B583F88((&V_3), Enumerator_MoveNext_m8A802F6DDB7EA4435FEE6877988C792B8B583F88_RuntimeMethod_var);
						if (L_30)
						{
							goto IL_0058_2;
						}
					}
					{
						goto IL_00b4_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_00b4_1:
			{
				bool L_31;
				L_31 = Enumerator_MoveNext_m8A802F6DDB7EA4435FEE6877988C792B8B583F88((&V_2), Enumerator_MoveNext_m8A802F6DDB7EA4435FEE6877988C792B8B583F88_RuntimeMethod_var);
				if (L_31)
				{
					goto IL_003e_1;
				}
			}
			{
				goto IL_00cd;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00cd:
	{
		return;
	}
}
// System.String Newtonsoft.Json.Converters.XmlNodeConverter::ResolveFullName(Newtonsoft.Json.Converters.IXmlNode,System.Xml.XmlNamespaceManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlNodeConverter_ResolveFullName_mC5F07F462B6FE5B4EB555D78255961F40B8C3616 (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, RuntimeObject* ___node0, XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* ___manager1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral420B74A52534550B0DD14DCF7D8988C2BD4936CE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CDCEEB7A12F71E8DF3D6AC05D04621DD4FBABF3);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* G_B5_0 = NULL;
	{
		RuntimeObject* L_0 = ___node0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(8 /* System.String Newtonsoft.Json.Converters.IXmlNode::get_NamespaceUri() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_0);
		if (!L_1)
		{
			goto IL_003a;
		}
	}
	{
		RuntimeObject* L_2 = ___node0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String Newtonsoft.Json.Converters.IXmlNode::get_LocalName() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_2);
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, _stringLiteral9CDCEEB7A12F71E8DF3D6AC05D04621DD4FBABF3, NULL);
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_5 = ___node0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = InterfaceFuncInvoker0< String_t* >::Invoke(8 /* System.String Newtonsoft.Json.Converters.IXmlNode::get_NamespaceUri() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_5);
		bool L_7;
		L_7 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_6, _stringLiteral420B74A52534550B0DD14DCF7D8988C2BD4936CE, NULL);
		if (L_7)
		{
			goto IL_003a;
		}
	}

IL_002c:
	{
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_8 = ___manager1;
		RuntimeObject* L_9 = ___node0;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = InterfaceFuncInvoker0< String_t* >::Invoke(8 /* System.String Newtonsoft.Json.Converters.IXmlNode::get_NamespaceUri() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_9);
		NullCheck(L_8);
		String_t* L_11;
		L_11 = VirtualFuncInvoker1< String_t*, String_t* >::Invoke(17 /* System.String System.Xml.XmlNamespaceManager::LookupPrefix(System.String) */, L_8, L_10);
		G_B5_0 = L_11;
		goto IL_003b;
	}

IL_003a:
	{
		G_B5_0 = ((String_t*)(NULL));
	}

IL_003b:
	{
		V_0 = G_B5_0;
		String_t* L_12 = V_0;
		bool L_13;
		L_13 = StringUtils_IsNullOrEmpty_mDB5E4B38C6134F72E602D16501AF88B58C3C67BA(L_12, NULL);
		if (L_13)
		{
			goto IL_005b;
		}
	}
	{
		String_t* L_14 = V_0;
		RuntimeObject* L_15 = ___node0;
		NullCheck(L_15);
		String_t* L_16;
		L_16 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String Newtonsoft.Json.Converters.IXmlNode::get_LocalName() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_15);
		il2cpp_codegen_runtime_class_init_inline(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		String_t* L_17;
		L_17 = XmlConvert_DecodeName_m59D31842CBCDCD2657BCE42AC8D8DFA818FB9437(L_16, NULL);
		String_t* L_18;
		L_18 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_14, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D, L_17, NULL);
		return L_18;
	}

IL_005b:
	{
		RuntimeObject* L_19 = ___node0;
		NullCheck(L_19);
		String_t* L_20;
		L_20 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String Newtonsoft.Json.Converters.IXmlNode::get_LocalName() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_19);
		il2cpp_codegen_runtime_class_init_inline(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		String_t* L_21;
		L_21 = XmlConvert_DecodeName_m59D31842CBCDCD2657BCE42AC8D8DFA818FB9437(L_20, NULL);
		return L_21;
	}
}
// System.String Newtonsoft.Json.Converters.XmlNodeConverter::GetPropertyName(Newtonsoft.Json.Converters.IXmlNode,System.Xml.XmlNamespaceManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlNodeConverter_GetPropertyName_mC4EBA7F268695B3CE90E87702E7CDF96ABB01BA5 (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, RuntimeObject* ___node0, XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* ___manager1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral125BCB7A4232428BFD5FFB1F3E5905A4F6B0B075);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15196F05B117690F3E12E56AA0C43803EA0D2A46);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4760011519A4AB7E8521F6795430114E80AA83E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5EE58BA1E5ECB5C3AED8D32D9B6DA7CB39BB4E47);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral738F291E53E97C08DAE378C71EF70A60E31AE900);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83B3ACB1C0AB14BABA0BD386F8695E096686811C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E6DEA6E609FD74FD29A7E5BB6D900CCBA5F3FBF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2ADAC70CFE2DCB556D061A93CBD008778646655);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA1039E8CDAE53E44AC3E6185B0871F3D031A476);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB28C3D7E7F56FAA480CEF9C7D0E3BF741423901);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF6C0C11953123BBAC57A7E215512C2CA4CF68520);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___node0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Xml.XmlNodeType Newtonsoft.Json.Converters.IXmlNode::get_NodeType() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_2, 1)))
		{
			case 0:
			{
				goto IL_009a;
			}
			case 1:
			{
				goto IL_0058;
			}
			case 2:
			{
				goto IL_00f8;
			}
			case 3:
			{
				goto IL_008e;
			}
			case 4:
			{
				goto IL_0104;
			}
			case 5:
			{
				goto IL_0104;
			}
			case 6:
			{
				goto IL_00c6;
			}
			case 7:
			{
				goto IL_0094;
			}
			case 8:
			{
				goto IL_0104;
			}
			case 9:
			{
				goto IL_00d9;
			}
			case 10:
			{
				goto IL_0104;
			}
			case 11:
			{
				goto IL_0104;
			}
			case 12:
			{
				goto IL_00fe;
			}
			case 13:
			{
				goto IL_00f2;
			}
			case 14:
			{
				goto IL_0104;
			}
			case 15:
			{
				goto IL_0104;
			}
			case 16:
			{
				goto IL_00ec;
			}
		}
	}
	{
		goto IL_0104;
	}

IL_0058:
	{
		RuntimeObject* L_3 = ___node0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = InterfaceFuncInvoker0< String_t* >::Invoke(8 /* System.String Newtonsoft.Json.Converters.IXmlNode::get_NamespaceUri() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_3);
		bool L_5;
		L_5 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_4, _stringLiteral125BCB7A4232428BFD5FFB1F3E5905A4F6B0B075, NULL);
		if (!L_5)
		{
			goto IL_007b;
		}
	}
	{
		RuntimeObject* L_6 = ___node0;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String Newtonsoft.Json.Converters.IXmlNode::get_LocalName() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_6);
		String_t* L_8;
		L_8 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral9E6DEA6E609FD74FD29A7E5BB6D900CCBA5F3FBF, L_7, NULL);
		return L_8;
	}

IL_007b:
	{
		RuntimeObject* L_9 = ___node0;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_10 = ___manager1;
		String_t* L_11;
		L_11 = XmlNodeConverter_ResolveFullName_mC5F07F462B6FE5B4EB555D78255961F40B8C3616(__this, L_9, L_10, NULL);
		String_t* L_12;
		L_12 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralBA1039E8CDAE53E44AC3E6185B0871F3D031A476, L_11, NULL);
		return L_12;
	}

IL_008e:
	{
		return _stringLiteralA2ADAC70CFE2DCB556D061A93CBD008778646655;
	}

IL_0094:
	{
		return _stringLiteralDB28C3D7E7F56FAA480CEF9C7D0E3BF741423901;
	}

IL_009a:
	{
		RuntimeObject* L_13 = ___node0;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = InterfaceFuncInvoker0< String_t* >::Invoke(8 /* System.String Newtonsoft.Json.Converters.IXmlNode::get_NamespaceUri() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_13);
		bool L_15;
		L_15 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_14, _stringLiteral125BCB7A4232428BFD5FFB1F3E5905A4F6B0B075, NULL);
		if (!L_15)
		{
			goto IL_00bd;
		}
	}
	{
		RuntimeObject* L_16 = ___node0;
		NullCheck(L_16);
		String_t* L_17;
		L_17 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String Newtonsoft.Json.Converters.IXmlNode::get_LocalName() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_16);
		String_t* L_18;
		L_18 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral9E6DEA6E609FD74FD29A7E5BB6D900CCBA5F3FBF, L_17, NULL);
		return L_18;
	}

IL_00bd:
	{
		RuntimeObject* L_19 = ___node0;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_20 = ___manager1;
		String_t* L_21;
		L_21 = XmlNodeConverter_ResolveFullName_mC5F07F462B6FE5B4EB555D78255961F40B8C3616(__this, L_19, L_20, NULL);
		return L_21;
	}

IL_00c6:
	{
		RuntimeObject* L_22 = ___node0;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_23 = ___manager1;
		String_t* L_24;
		L_24 = XmlNodeConverter_ResolveFullName_mC5F07F462B6FE5B4EB555D78255961F40B8C3616(__this, L_22, L_23, NULL);
		String_t* L_25;
		L_25 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral738F291E53E97C08DAE378C71EF70A60E31AE900, L_24, NULL);
		return L_25;
	}

IL_00d9:
	{
		RuntimeObject* L_26 = ___node0;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_27 = ___manager1;
		String_t* L_28;
		L_28 = XmlNodeConverter_ResolveFullName_mC5F07F462B6FE5B4EB555D78255961F40B8C3616(__this, L_26, L_27, NULL);
		String_t* L_29;
		L_29 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral15196F05B117690F3E12E56AA0C43803EA0D2A46, L_28, NULL);
		return L_29;
	}

IL_00ec:
	{
		return _stringLiteral5EE58BA1E5ECB5C3AED8D32D9B6DA7CB39BB4E47;
	}

IL_00f2:
	{
		return _stringLiteral83B3ACB1C0AB14BABA0BD386F8695E096686811C;
	}

IL_00f8:
	{
		return _stringLiteral4760011519A4AB7E8521F6795430114E80AA83E4;
	}

IL_00fe:
	{
		return _stringLiteralF6C0C11953123BBAC57A7E215512C2CA4CF68520;
	}

IL_0104:
	{
		RuntimeObject* L_30 = ___node0;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Xml.XmlNodeType Newtonsoft.Json.Converters.IXmlNode::get_NodeType() */, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var)), L_30);
		V_1 = L_31;
		Il2CppFakeBox<int32_t> L_32(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlNodeType_tCA25567E42A464038FDA6BA318EC0A9627B4CB95_il2cpp_TypeInfo_var)), (&V_1));
		String_t* L_33;
		L_33 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_32), NULL);
		String_t* L_34;
		L_34 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral810C723B6D33105E6B3277736A780EFDA0438806)), L_33, NULL);
		JsonSerializationException_t00F36890DFAC04F2FDE779151340B9C5563612EC* L_35 = (JsonSerializationException_t00F36890DFAC04F2FDE779151340B9C5563612EC*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonSerializationException_t00F36890DFAC04F2FDE779151340B9C5563612EC_il2cpp_TypeInfo_var)));
		NullCheck(L_35);
		JsonSerializationException__ctor_m0DDDC290916A23CCCE7A780AF876F9CE5FE58E4A(L_35, L_34, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_35, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlNodeConverter_GetPropertyName_mC4EBA7F268695B3CE90E87702E7CDF96ABB01BA5_RuntimeMethod_var)));
	}
}
// System.Boolean Newtonsoft.Json.Converters.XmlNodeConverter::IsArray(Newtonsoft.Json.Converters.IXmlNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlNodeConverter_IsArray_mF83080575E162DED85AA9E7F30384F4FCECF4A48 (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, RuntimeObject* ___node0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mC2891A1E295FEF8B5B64E96EB62B5945149DF7BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m8A802F6DDB7EA4435FEE6877988C792B8B583F88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m894DFFA678072980ECF786B52912E28891E006DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m8E48B727D08C794BA9EB42BB47747FD56F55C10E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral125BCB7A4232428BFD5FFB1F3E5905A4F6B0B075);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC3CA1105B0687AB04E8DB2CE95902C75EC2B661A);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t5D6B89D2864E6CA1D667C75E2375831735B2B941 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	{
		RuntimeObject* L_0 = ___node0;
		NullCheck(L_0);
		List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_1;
		L_1 = InterfaceFuncInvoker0< List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* >::Invoke(3 /* System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode> Newtonsoft.Json.Converters.IXmlNode::get_Attributes() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		Enumerator_t5D6B89D2864E6CA1D667C75E2375831735B2B941 L_2;
		L_2 = List_1_GetEnumerator_m8E48B727D08C794BA9EB42BB47747FD56F55C10E(L_1, List_1_GetEnumerator_m8E48B727D08C794BA9EB42BB47747FD56F55C10E_RuntimeMethod_var);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0053:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mC2891A1E295FEF8B5B64E96EB62B5945149DF7BD((&V_0), Enumerator_Dispose_mC2891A1E295FEF8B5B64E96EB62B5945149DF7BD_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0048_1;
			}

IL_000e_1:
			{
				RuntimeObject* L_3;
				L_3 = Enumerator_get_Current_m894DFFA678072980ECF786B52912E28891E006DB_inline((&V_0), Enumerator_get_Current_m894DFFA678072980ECF786B52912E28891E006DB_RuntimeMethod_var);
				V_1 = L_3;
				RuntimeObject* L_4 = V_1;
				NullCheck(L_4);
				String_t* L_5;
				L_5 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String Newtonsoft.Json.Converters.IXmlNode::get_LocalName() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_4);
				bool L_6;
				L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, _stringLiteralC3CA1105B0687AB04E8DB2CE95902C75EC2B661A, NULL);
				if (!L_6)
				{
					goto IL_0048_1;
				}
			}
			{
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				String_t* L_8;
				L_8 = InterfaceFuncInvoker0< String_t* >::Invoke(8 /* System.String Newtonsoft.Json.Converters.IXmlNode::get_NamespaceUri() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_7);
				bool L_9;
				L_9 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_8, _stringLiteral125BCB7A4232428BFD5FFB1F3E5905A4F6B0B075, NULL);
				if (!L_9)
				{
					goto IL_0048_1;
				}
			}
			{
				RuntimeObject* L_10 = V_1;
				NullCheck(L_10);
				String_t* L_11;
				L_11 = InterfaceFuncInvoker0< String_t* >::Invoke(5 /* System.String Newtonsoft.Json.Converters.IXmlNode::get_Value() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_10);
				il2cpp_codegen_runtime_class_init_inline(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
				bool L_12;
				L_12 = XmlConvert_ToBoolean_mB95C798BD6D849071E6A686CBF85851C25C7006A(L_11, NULL);
				V_2 = L_12;
				goto IL_0063;
			}

IL_0048_1:
			{
				bool L_13;
				L_13 = Enumerator_MoveNext_m8A802F6DDB7EA4435FEE6877988C792B8B583F88((&V_0), Enumerator_MoveNext_m8A802F6DDB7EA4435FEE6877988C792B8B583F88_RuntimeMethod_var);
				if (L_13)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0061;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0061:
	{
		return (bool)0;
	}

IL_0063:
	{
		bool L_14 = V_2;
		return L_14;
	}
}
// System.Void Newtonsoft.Json.Converters.XmlNodeConverter::SerializeGroupedNodes(Newtonsoft.Json.JsonWriter,Newtonsoft.Json.Converters.IXmlNode,System.Xml.XmlNamespaceManager,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeConverter_SerializeGroupedNodes_m2310D6C0E3FA9FCDBFC1677DEFE3CFB237E6BC0E (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* ___writer0, RuntimeObject* ___node1, XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* ___manager2, bool ___writePropertyName3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_mF5B5B00F670F3436AB3C07C0F64149501DEC2DBC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mC14A0401676B34A68B06FC858BA801E7DF99B7D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mA7C78FC10B78BFFDD69A6E1CA050B42D48F8B53F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mBB43E0B46CDCD47543052FDB890026C269E6D96E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mFAD52D332201C947C95ECF69DAE5C3319CA654F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m398158DFE48F62CF2C479A46F0D6C5A6E3206CF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m389274B90D96CA39D060BAE1C5A40939A32994D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m99AF43FA43C38A915F0A8AF9F07EFF9D3183EA37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m5101BD6DFA5618FEB8E0D6CCF45C06C872577D0B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m49F224E7B5DC4879C5A553E58943A24FA8E42815_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* V_2 = NULL;
	String_t* V_3 = NULL;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	String_t* V_6 = NULL;
	List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* V_7 = NULL;
	int32_t V_8 = 0;
	RuntimeObject* V_9 = NULL;
	List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* V_10 = NULL;
	Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62 V_11;
	memset((&V_11), 0, sizeof(V_11));
	KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 V_12;
	memset((&V_12), 0, sizeof(V_12));
	List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* V_13 = NULL;
	{
		RuntimeObject* L_0 = ___node1;
		NullCheck(L_0);
		List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_1;
		L_1 = InterfaceFuncInvoker0< List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* >::Invoke(2 /* System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode> Newtonsoft.Json.Converters.IXmlNode::get_ChildNodes() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m5101BD6DFA5618FEB8E0D6CCF45C06C872577D0B_inline(L_1, List_1_get_Count_m5101BD6DFA5618FEB8E0D6CCF45C06C872577D0B_RuntimeMethod_var);
		V_0 = L_2;
		int32_t L_3 = V_0;
		if (!L_3)
		{
			goto IL_01c9;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_003c;
		}
	}
	{
		RuntimeObject* L_5 = ___node1;
		NullCheck(L_5);
		List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_6;
		L_6 = InterfaceFuncInvoker0< List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* >::Invoke(2 /* System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode> Newtonsoft.Json.Converters.IXmlNode::get_ChildNodes() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_5);
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = List_1_get_Item_m49F224E7B5DC4879C5A553E58943A24FA8E42815(L_6, 0, List_1_get_Item_m49F224E7B5DC4879C5A553E58943A24FA8E42815_RuntimeMethod_var);
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_8 = ___manager2;
		String_t* L_9;
		L_9 = XmlNodeConverter_GetPropertyName_mC4EBA7F268695B3CE90E87702E7CDF96ABB01BA5(__this, L_7, L_8, NULL);
		V_1 = L_9;
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_10 = ___writer0;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_11 = ___manager2;
		bool L_12 = ___writePropertyName3;
		RuntimeObject* L_13 = ___node1;
		NullCheck(L_13);
		List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_14;
		L_14 = InterfaceFuncInvoker0< List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* >::Invoke(2 /* System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode> Newtonsoft.Json.Converters.IXmlNode::get_ChildNodes() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_13);
		String_t* L_15 = V_1;
		XmlNodeConverter_WriteGroupedNodes_m109F608E386927513B2B304A9F0CCEC523ABE09E(__this, L_10, L_11, L_12, L_14, L_15, NULL);
		return;
	}

IL_003c:
	{
		V_2 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)NULL;
		V_3 = (String_t*)NULL;
		V_4 = 0;
		goto IL_0132;
	}

IL_0048:
	{
		RuntimeObject* L_16 = ___node1;
		NullCheck(L_16);
		List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_17;
		L_17 = InterfaceFuncInvoker0< List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* >::Invoke(2 /* System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode> Newtonsoft.Json.Converters.IXmlNode::get_ChildNodes() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_16);
		int32_t L_18 = V_4;
		NullCheck(L_17);
		RuntimeObject* L_19;
		L_19 = List_1_get_Item_m49F224E7B5DC4879C5A553E58943A24FA8E42815(L_17, L_18, List_1_get_Item_m49F224E7B5DC4879C5A553E58943A24FA8E42815_RuntimeMethod_var);
		V_5 = L_19;
		RuntimeObject* L_20 = V_5;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_21 = ___manager2;
		String_t* L_22;
		L_22 = XmlNodeConverter_GetPropertyName_mC4EBA7F268695B3CE90E87702E7CDF96ABB01BA5(__this, L_20, L_21, NULL);
		V_6 = L_22;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_23 = V_2;
		if (L_23)
		{
			goto IL_00e0;
		}
	}
	{
		String_t* L_24 = V_3;
		if (L_24)
		{
			goto IL_0070;
		}
	}
	{
		String_t* L_25 = V_6;
		V_3 = L_25;
		goto IL_012c;
	}

IL_0070:
	{
		String_t* L_26 = V_6;
		String_t* L_27 = V_3;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, L_27, NULL);
		if (L_28)
		{
			goto IL_012c;
		}
	}
	{
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_29 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)il2cpp_codegen_object_new(Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		NullCheck(L_29);
		Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9(L_29, Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		V_2 = L_29;
		int32_t L_30 = V_4;
		if ((((int32_t)L_30) <= ((int32_t)1)))
		{
			goto IL_00c1;
		}
	}
	{
		int32_t L_31 = V_4;
		List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_32 = (List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E*)il2cpp_codegen_object_new(List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E_il2cpp_TypeInfo_var);
		NullCheck(L_32);
		List_1__ctor_m389274B90D96CA39D060BAE1C5A40939A32994D0(L_32, L_31, List_1__ctor_m389274B90D96CA39D060BAE1C5A40939A32994D0_RuntimeMethod_var);
		V_7 = L_32;
		V_8 = 0;
		goto IL_00b0;
	}

IL_0096:
	{
		List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_33 = V_7;
		RuntimeObject* L_34 = ___node1;
		NullCheck(L_34);
		List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_35;
		L_35 = InterfaceFuncInvoker0< List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* >::Invoke(2 /* System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode> Newtonsoft.Json.Converters.IXmlNode::get_ChildNodes() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_34);
		int32_t L_36 = V_8;
		NullCheck(L_35);
		RuntimeObject* L_37;
		L_37 = List_1_get_Item_m49F224E7B5DC4879C5A553E58943A24FA8E42815(L_35, L_36, List_1_get_Item_m49F224E7B5DC4879C5A553E58943A24FA8E42815_RuntimeMethod_var);
		NullCheck(L_33);
		List_1_Add_m398158DFE48F62CF2C479A46F0D6C5A6E3206CF2_inline(L_33, L_37, List_1_Add_m398158DFE48F62CF2C479A46F0D6C5A6E3206CF2_RuntimeMethod_var);
		int32_t L_38 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00b0:
	{
		int32_t L_39 = V_8;
		int32_t L_40 = V_4;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0096;
		}
	}
	{
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_41 = V_2;
		String_t* L_42 = V_3;
		List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_43 = V_7;
		NullCheck(L_41);
		Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443(L_41, L_42, L_43, Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		goto IL_00d4;
	}

IL_00c1:
	{
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_44 = V_2;
		String_t* L_45 = V_3;
		RuntimeObject* L_46 = ___node1;
		NullCheck(L_46);
		List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_47;
		L_47 = InterfaceFuncInvoker0< List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* >::Invoke(2 /* System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode> Newtonsoft.Json.Converters.IXmlNode::get_ChildNodes() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_46);
		NullCheck(L_47);
		RuntimeObject* L_48;
		L_48 = List_1_get_Item_m49F224E7B5DC4879C5A553E58943A24FA8E42815(L_47, 0, List_1_get_Item_m49F224E7B5DC4879C5A553E58943A24FA8E42815_RuntimeMethod_var);
		NullCheck(L_44);
		Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443(L_44, L_45, L_48, Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
	}

IL_00d4:
	{
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_49 = V_2;
		String_t* L_50 = V_6;
		RuntimeObject* L_51 = V_5;
		NullCheck(L_49);
		Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443(L_49, L_50, L_51, Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		goto IL_012c;
	}

IL_00e0:
	{
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_52 = V_2;
		String_t* L_53 = V_6;
		NullCheck(L_52);
		bool L_54;
		L_54 = Dictionary_2_TryGetValue_mC14A0401676B34A68B06FC858BA801E7DF99B7D8(L_52, L_53, (&V_9), Dictionary_2_TryGetValue_mC14A0401676B34A68B06FC858BA801E7DF99B7D8_RuntimeMethod_var);
		if (L_54)
		{
			goto IL_00f8;
		}
	}
	{
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_55 = V_2;
		String_t* L_56 = V_6;
		RuntimeObject* L_57 = V_5;
		NullCheck(L_55);
		Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443(L_55, L_56, L_57, Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		goto IL_012c;
	}

IL_00f8:
	{
		RuntimeObject* L_58 = V_9;
		V_10 = ((List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E*)IsInstClass((RuntimeObject*)L_58, List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E_il2cpp_TypeInfo_var));
		List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_59 = V_10;
		if (L_59)
		{
			goto IL_0123;
		}
	}
	{
		List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_60 = (List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E*)il2cpp_codegen_object_new(List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E_il2cpp_TypeInfo_var);
		NullCheck(L_60);
		List_1__ctor_m99AF43FA43C38A915F0A8AF9F07EFF9D3183EA37(L_60, List_1__ctor_m99AF43FA43C38A915F0A8AF9F07EFF9D3183EA37_RuntimeMethod_var);
		List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_61 = L_60;
		RuntimeObject* L_62 = V_9;
		NullCheck(L_61);
		List_1_Add_m398158DFE48F62CF2C479A46F0D6C5A6E3206CF2_inline(L_61, ((RuntimeObject*)Castclass((RuntimeObject*)L_62, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var)), List_1_Add_m398158DFE48F62CF2C479A46F0D6C5A6E3206CF2_RuntimeMethod_var);
		V_10 = L_61;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_63 = V_2;
		String_t* L_64 = V_6;
		List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_65 = V_10;
		NullCheck(L_63);
		Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341(L_63, L_64, L_65, Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341_RuntimeMethod_var);
	}

IL_0123:
	{
		List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_66 = V_10;
		RuntimeObject* L_67 = V_5;
		NullCheck(L_66);
		List_1_Add_m398158DFE48F62CF2C479A46F0D6C5A6E3206CF2_inline(L_66, L_67, List_1_Add_m398158DFE48F62CF2C479A46F0D6C5A6E3206CF2_RuntimeMethod_var);
	}

IL_012c:
	{
		int32_t L_68 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_68, 1));
	}

IL_0132:
	{
		int32_t L_69 = V_4;
		RuntimeObject* L_70 = ___node1;
		NullCheck(L_70);
		List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_71;
		L_71 = InterfaceFuncInvoker0< List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* >::Invoke(2 /* System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode> Newtonsoft.Json.Converters.IXmlNode::get_ChildNodes() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_70);
		NullCheck(L_71);
		int32_t L_72;
		L_72 = List_1_get_Count_m5101BD6DFA5618FEB8E0D6CCF45C06C872577D0B_inline(L_71, List_1_get_Count_m5101BD6DFA5618FEB8E0D6CCF45C06C872577D0B_RuntimeMethod_var);
		if ((((int32_t)L_69) < ((int32_t)L_72)))
		{
			goto IL_0048;
		}
	}
	{
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_73 = V_2;
		if (L_73)
		{
			goto IL_0159;
		}
	}
	{
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_74 = ___writer0;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_75 = ___manager2;
		bool L_76 = ___writePropertyName3;
		RuntimeObject* L_77 = ___node1;
		NullCheck(L_77);
		List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_78;
		L_78 = InterfaceFuncInvoker0< List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* >::Invoke(2 /* System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode> Newtonsoft.Json.Converters.IXmlNode::get_ChildNodes() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_77);
		String_t* L_79 = V_3;
		XmlNodeConverter_WriteGroupedNodes_m109F608E386927513B2B304A9F0CCEC523ABE09E(__this, L_74, L_75, L_76, L_78, L_79, NULL);
		return;
	}

IL_0159:
	{
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_80 = V_2;
		NullCheck(L_80);
		Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62 L_81;
		L_81 = Dictionary_2_GetEnumerator_mF5B5B00F670F3436AB3C07C0F64149501DEC2DBC(L_80, Dictionary_2_GetEnumerator_mF5B5B00F670F3436AB3C07C0F64149501DEC2DBC_RuntimeMethod_var);
		V_11 = L_81;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_01bb:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mA7C78FC10B78BFFDD69A6E1CA050B42D48F8B53F((&V_11), Enumerator_Dispose_mA7C78FC10B78BFFDD69A6E1CA050B42D48F8B53F_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_01b0_1;
			}

IL_0163_1:
			{
				KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 L_82;
				L_82 = Enumerator_get_Current_mFAD52D332201C947C95ECF69DAE5C3319CA654F1_inline((&V_11), Enumerator_get_Current_mFAD52D332201C947C95ECF69DAE5C3319CA654F1_RuntimeMethod_var);
				V_12 = L_82;
				RuntimeObject* L_83;
				L_83 = KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_inline((&V_12), KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_RuntimeMethod_var);
				V_13 = ((List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E*)IsInstClass((RuntimeObject*)L_83, List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E_il2cpp_TypeInfo_var));
				List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_84 = V_13;
				if (!L_84)
				{
					goto IL_0193_1;
				}
			}
			{
				JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_85 = ___writer0;
				XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_86 = ___manager2;
				bool L_87 = ___writePropertyName3;
				List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_88 = V_13;
				String_t* L_89;
				L_89 = KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_inline((&V_12), KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_RuntimeMethod_var);
				XmlNodeConverter_WriteGroupedNodes_m109F608E386927513B2B304A9F0CCEC523ABE09E(__this, L_85, L_86, L_87, L_88, L_89, NULL);
				goto IL_01b0_1;
			}

IL_0193_1:
			{
				JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_90 = ___writer0;
				XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_91 = ___manager2;
				bool L_92 = ___writePropertyName3;
				RuntimeObject* L_93;
				L_93 = KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_inline((&V_12), KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_RuntimeMethod_var);
				String_t* L_94;
				L_94 = KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_inline((&V_12), KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_RuntimeMethod_var);
				XmlNodeConverter_WriteGroupedNodes_mF2878211727CBA39A5E29901EC899CDDF3A214DE(__this, L_90, L_91, L_92, ((RuntimeObject*)Castclass((RuntimeObject*)L_93, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var)), L_94, NULL);
			}

IL_01b0_1:
			{
				bool L_95;
				L_95 = Enumerator_MoveNext_mBB43E0B46CDCD47543052FDB890026C269E6D96E((&V_11), Enumerator_MoveNext_mBB43E0B46CDCD47543052FDB890026C269E6D96E_RuntimeMethod_var);
				if (L_95)
				{
					goto IL_0163_1;
				}
			}
			{
				goto IL_01c9;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_01c9:
	{
		return;
	}
}
// System.Void Newtonsoft.Json.Converters.XmlNodeConverter::WriteGroupedNodes(Newtonsoft.Json.JsonWriter,System.Xml.XmlNamespaceManager,System.Boolean,System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeConverter_WriteGroupedNodes_m109F608E386927513B2B304A9F0CCEC523ABE09E (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* ___writer0, XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* ___manager1, bool ___writePropertyName2, List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* ___groupedNodes3, String_t* ___elementNames4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m5101BD6DFA5618FEB8E0D6CCF45C06C872577D0B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m49F224E7B5DC4879C5A553E58943A24FA8E42815_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_0 = ___groupedNodes3;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m5101BD6DFA5618FEB8E0D6CCF45C06C872577D0B_inline(L_0, List_1_get_Count_m5101BD6DFA5618FEB8E0D6CCF45C06C872577D0B_RuntimeMethod_var);
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}
	{
		List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_2 = ___groupedNodes3;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = List_1_get_Item_m49F224E7B5DC4879C5A553E58943A24FA8E42815(L_2, 0, List_1_get_Item_m49F224E7B5DC4879C5A553E58943A24FA8E42815_RuntimeMethod_var);
		bool L_4;
		L_4 = XmlNodeConverter_IsArray_mF83080575E162DED85AA9E7F30384F4FCECF4A48(__this, L_3, NULL);
		G_B3_0 = ((int32_t)(L_4));
		goto IL_001b;
	}

IL_001a:
	{
		G_B3_0 = 1;
	}

IL_001b:
	{
		if (G_B3_0)
		{
			goto IL_002f;
		}
	}
	{
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_5 = ___writer0;
		List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_6 = ___groupedNodes3;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = List_1_get_Item_m49F224E7B5DC4879C5A553E58943A24FA8E42815(L_6, 0, List_1_get_Item_m49F224E7B5DC4879C5A553E58943A24FA8E42815_RuntimeMethod_var);
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_8 = ___manager1;
		bool L_9 = ___writePropertyName2;
		XmlNodeConverter_SerializeNode_mBBB1AA0A7AC24A39675F1B210F51870CE932D6AA(__this, L_5, L_7, L_8, L_9, NULL);
		return;
	}

IL_002f:
	{
		bool L_10 = ___writePropertyName2;
		if (!L_10)
		{
			goto IL_003a;
		}
	}
	{
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_11 = ___writer0;
		String_t* L_12 = ___elementNames4;
		NullCheck(L_11);
		VirtualActionInvoker1< String_t* >::Invoke(74 /* System.Void Newtonsoft.Json.JsonWriter::WritePropertyName(System.String) */, L_11, L_12);
	}

IL_003a:
	{
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_13 = ___writer0;
		NullCheck(L_13);
		VirtualActionInvoker0::Invoke(70 /* System.Void Newtonsoft.Json.JsonWriter::WriteStartArray() */, L_13);
		V_0 = 0;
		goto IL_0059;
	}

IL_0044:
	{
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_14 = ___writer0;
		List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_15 = ___groupedNodes3;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		RuntimeObject* L_17;
		L_17 = List_1_get_Item_m49F224E7B5DC4879C5A553E58943A24FA8E42815(L_15, L_16, List_1_get_Item_m49F224E7B5DC4879C5A553E58943A24FA8E42815_RuntimeMethod_var);
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_18 = ___manager1;
		XmlNodeConverter_SerializeNode_mBBB1AA0A7AC24A39675F1B210F51870CE932D6AA(__this, L_14, L_17, L_18, (bool)0, NULL);
		int32_t L_19 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0059:
	{
		int32_t L_20 = V_0;
		List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_21 = ___groupedNodes3;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = List_1_get_Count_m5101BD6DFA5618FEB8E0D6CCF45C06C872577D0B_inline(L_21, List_1_get_Count_m5101BD6DFA5618FEB8E0D6CCF45C06C872577D0B_RuntimeMethod_var);
		if ((((int32_t)L_20) < ((int32_t)L_22)))
		{
			goto IL_0044;
		}
	}
	{
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_23 = ___writer0;
		NullCheck(L_23);
		VirtualActionInvoker0::Invoke(71 /* System.Void Newtonsoft.Json.JsonWriter::WriteEndArray() */, L_23);
		return;
	}
}
// System.Void Newtonsoft.Json.Converters.XmlNodeConverter::WriteGroupedNodes(Newtonsoft.Json.JsonWriter,System.Xml.XmlNamespaceManager,System.Boolean,Newtonsoft.Json.Converters.IXmlNode,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeConverter_WriteGroupedNodes_mF2878211727CBA39A5E29901EC899CDDF3A214DE (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* ___writer0, XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* ___manager1, bool ___writePropertyName2, RuntimeObject* ___node3, String_t* ___elementNames4, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___node3;
		bool L_1;
		L_1 = XmlNodeConverter_IsArray_mF83080575E162DED85AA9E7F30384F4FCECF4A48(__this, L_0, NULL);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_2 = ___writer0;
		RuntimeObject* L_3 = ___node3;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_4 = ___manager1;
		bool L_5 = ___writePropertyName2;
		XmlNodeConverter_SerializeNode_mBBB1AA0A7AC24A39675F1B210F51870CE932D6AA(__this, L_2, L_3, L_4, L_5, NULL);
		return;
	}

IL_0016:
	{
		bool L_6 = ___writePropertyName2;
		if (!L_6)
		{
			goto IL_0021;
		}
	}
	{
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_7 = ___writer0;
		String_t* L_8 = ___elementNames4;
		NullCheck(L_7);
		VirtualActionInvoker1< String_t* >::Invoke(74 /* System.Void Newtonsoft.Json.JsonWriter::WritePropertyName(System.String) */, L_7, L_8);
	}

IL_0021:
	{
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_9 = ___writer0;
		NullCheck(L_9);
		VirtualActionInvoker0::Invoke(70 /* System.Void Newtonsoft.Json.JsonWriter::WriteStartArray() */, L_9);
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_10 = ___writer0;
		RuntimeObject* L_11 = ___node3;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_12 = ___manager1;
		XmlNodeConverter_SerializeNode_mBBB1AA0A7AC24A39675F1B210F51870CE932D6AA(__this, L_10, L_11, L_12, (bool)0, NULL);
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_13 = ___writer0;
		NullCheck(L_13);
		VirtualActionInvoker0::Invoke(71 /* System.Void Newtonsoft.Json.JsonWriter::WriteEndArray() */, L_13);
		return;
	}
}
// System.Void Newtonsoft.Json.Converters.XmlNodeConverter::SerializeNode(Newtonsoft.Json.JsonWriter,Newtonsoft.Json.Converters.IXmlNode,System.Xml.XmlNamespaceManager,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeConverter_SerializeNode_mBBB1AA0A7AC24A39675F1B210F51870CE932D6AA (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* ___writer0, RuntimeObject* ___node1, XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* ___manager2, bool ___writePropertyName3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mC2891A1E295FEF8B5B64E96EB62B5945149DF7BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m8A802F6DDB7EA4435FEE6877988C792B8B583F88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m894DFFA678072980ECF786B52912E28891E006DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlDeclaration_tA018518C777A8F9CD2D3BD397D9CAB3C3723AAA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlDocumentType_tC37DB53E9079EB1E489BE94B2A02E06A818BD11D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlElement_t48C6FEA57F31ACF88F9D9AB22BDDD0523D1D4780_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m8E48B727D08C794BA9EB42BB47747FD56F55C10E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m5101BD6DFA5618FEB8E0D6CCF45C06C872577D0B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m49F224E7B5DC4879C5A553E58943A24FA8E42815_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral125BCB7A4232428BFD5FFB1F3E5905A4F6B0B075);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F62B3631B3843128CF8C3FF2A6EB6BB8DA4B062);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral420B74A52534550B0DD14DCF7D8988C2BD4936CE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral539E31D9C32242C0883451A9A8DE262A8C813564);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral559483D7AFD5E146A0FF903862BA9AB05FE01692);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6139809F8F5889653A693440ECEF2DFD4FDCDD94);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral72D07D1C82E1B7A92C7AB6D9C01CD4050846760F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CDCEEB7A12F71E8DF3D6AC05D04621DD4FBABF3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC3CA1105B0687AB04E8DB2CE95902C75EC2B661A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE7CCD8078E8A58A921106F3AF064603AB958A11A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF2EB0B21A975739F9285B24F45AC110ADD74337E);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	Enumerator_t5D6B89D2864E6CA1D667C75E2375831735B2B941 V_3;
	memset((&V_3), 0, sizeof(V_3));
	RuntimeObject* V_4 = NULL;
	String_t* V_5 = NULL;
	String_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	String_t* G_B13_0 = NULL;
	{
		RuntimeObject* L_0 = ___node1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Xml.XmlNodeType Newtonsoft.Json.Converters.IXmlNode::get_NodeType() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_0);
		V_2 = L_1;
		int32_t L_2 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_2, 1)))
		{
			case 0:
			{
				goto IL_0064;
			}
			case 1:
			{
				goto IL_021d;
			}
			case 2:
			{
				goto IL_021d;
			}
			case 3:
			{
				goto IL_021d;
			}
			case 4:
			{
				goto IL_03c6;
			}
			case 5:
			{
				goto IL_03c6;
			}
			case 6:
			{
				goto IL_021d;
			}
			case 7:
			{
				goto IL_0209;
			}
			case 8:
			{
				goto IL_0058;
			}
			case 9:
			{
				goto IL_0314;
			}
			case 10:
			{
				goto IL_0058;
			}
			case 11:
			{
				goto IL_03c6;
			}
			case 12:
			{
				goto IL_021d;
			}
			case 13:
			{
				goto IL_021d;
			}
			case 14:
			{
				goto IL_03c6;
			}
			case 15:
			{
				goto IL_03c6;
			}
			case 16:
			{
				goto IL_0286;
			}
		}
	}
	{
		goto IL_03c6;
	}

IL_0058:
	{
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_3 = ___writer0;
		RuntimeObject* L_4 = ___node1;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_5 = ___manager2;
		bool L_6 = ___writePropertyName3;
		XmlNodeConverter_SerializeGroupedNodes_m2310D6C0E3FA9FCDBFC1677DEFE3CFB237E6BC0E(__this, L_3, L_4, L_5, L_6, NULL);
		return;
	}

IL_0064:
	{
		RuntimeObject* L_7 = ___node1;
		bool L_8;
		L_8 = XmlNodeConverter_IsArray_mF83080575E162DED85AA9E7F30384F4FCECF4A48(__this, L_7, NULL);
		if (!L_8)
		{
			goto IL_008e;
		}
	}
	{
		RuntimeObject* L_9 = ___node1;
		il2cpp_codegen_runtime_class_init_inline(XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = XmlNodeConverter_AllSameName_mA177F66B66101491F3DCEAD394E1A1C87F24E8FF(L_9, NULL);
		if (!L_10)
		{
			goto IL_008e;
		}
	}
	{
		RuntimeObject* L_11 = ___node1;
		NullCheck(L_11);
		List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_12;
		L_12 = InterfaceFuncInvoker0< List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* >::Invoke(2 /* System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode> Newtonsoft.Json.Converters.IXmlNode::get_ChildNodes() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_11);
		NullCheck(L_12);
		int32_t L_13;
		L_13 = List_1_get_Count_m5101BD6DFA5618FEB8E0D6CCF45C06C872577D0B_inline(L_12, List_1_get_Count_m5101BD6DFA5618FEB8E0D6CCF45C06C872577D0B_RuntimeMethod_var);
		if ((((int32_t)L_13) <= ((int32_t)0)))
		{
			goto IL_008e;
		}
	}
	{
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_14 = ___writer0;
		RuntimeObject* L_15 = ___node1;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_16 = ___manager2;
		XmlNodeConverter_SerializeGroupedNodes_m2310D6C0E3FA9FCDBFC1677DEFE3CFB237E6BC0E(__this, L_14, L_15, L_16, (bool)0, NULL);
		return;
	}

IL_008e:
	{
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_17 = ___manager2;
		NullCheck(L_17);
		VirtualActionInvoker0::Invoke(10 /* System.Void System.Xml.XmlNamespaceManager::PushScope() */, L_17);
		RuntimeObject* L_18 = ___node1;
		NullCheck(L_18);
		List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_19;
		L_19 = InterfaceFuncInvoker0< List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* >::Invoke(3 /* System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode> Newtonsoft.Json.Converters.IXmlNode::get_Attributes() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_18);
		NullCheck(L_19);
		Enumerator_t5D6B89D2864E6CA1D667C75E2375831735B2B941 L_20;
		L_20 = List_1_GetEnumerator_m8E48B727D08C794BA9EB42BB47747FD56F55C10E(L_19, List_1_GetEnumerator_m8E48B727D08C794BA9EB42BB47747FD56F55C10E_RuntimeMethod_var);
		V_3 = L_20;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0113:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mC2891A1E295FEF8B5B64E96EB62B5945149DF7BD((&V_3), Enumerator_Dispose_mC2891A1E295FEF8B5B64E96EB62B5945149DF7BD_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0108_1;
			}

IL_00a2_1:
			{
				RuntimeObject* L_21;
				L_21 = Enumerator_get_Current_m894DFFA678072980ECF786B52912E28891E006DB_inline((&V_3), Enumerator_get_Current_m894DFFA678072980ECF786B52912E28891E006DB_RuntimeMethod_var);
				V_4 = L_21;
				RuntimeObject* L_22 = V_4;
				NullCheck(L_22);
				String_t* L_23;
				L_23 = InterfaceFuncInvoker0< String_t* >::Invoke(8 /* System.String Newtonsoft.Json.Converters.IXmlNode::get_NamespaceUri() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_22);
				bool L_24;
				L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral420B74A52534550B0DD14DCF7D8988C2BD4936CE, NULL);
				if (!L_24)
				{
					goto IL_0108_1;
				}
			}
			{
				RuntimeObject* L_25 = V_4;
				NullCheck(L_25);
				String_t* L_26;
				L_26 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String Newtonsoft.Json.Converters.IXmlNode::get_LocalName() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_25);
				bool L_27;
				L_27 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_26, _stringLiteral9CDCEEB7A12F71E8DF3D6AC05D04621DD4FBABF3, NULL);
				if (L_27)
				{
					goto IL_00d8_1;
				}
			}
			{
				String_t* L_28 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
				G_B13_0 = L_28;
				goto IL_00e4_1;
			}

IL_00d8_1:
			{
				RuntimeObject* L_29 = V_4;
				NullCheck(L_29);
				String_t* L_30;
				L_30 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String Newtonsoft.Json.Converters.IXmlNode::get_LocalName() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_29);
				il2cpp_codegen_runtime_class_init_inline(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
				String_t* L_31;
				L_31 = XmlConvert_DecodeName_m59D31842CBCDCD2657BCE42AC8D8DFA818FB9437(L_30, NULL);
				G_B13_0 = L_31;
			}

IL_00e4_1:
			{
				V_5 = G_B13_0;
				RuntimeObject* L_32 = V_4;
				NullCheck(L_32);
				String_t* L_33;
				L_33 = InterfaceFuncInvoker0< String_t* >::Invoke(5 /* System.String Newtonsoft.Json.Converters.IXmlNode::get_Value() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_32);
				V_6 = L_33;
				String_t* L_34 = V_6;
				if (L_34)
				{
					goto IL_00fe_1;
				}
			}
			{
				JsonSerializationException_t00F36890DFAC04F2FDE779151340B9C5563612EC* L_35 = (JsonSerializationException_t00F36890DFAC04F2FDE779151340B9C5563612EC*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonSerializationException_t00F36890DFAC04F2FDE779151340B9C5563612EC_il2cpp_TypeInfo_var)));
				NullCheck(L_35);
				JsonSerializationException__ctor_m0DDDC290916A23CCCE7A780AF876F9CE5FE58E4A(L_35, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7493A7633C2FBBAA0BBEA8048B017B27F060AA9)), NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_35, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlNodeConverter_SerializeNode_mBBB1AA0A7AC24A39675F1B210F51870CE932D6AA_RuntimeMethod_var)));
			}

IL_00fe_1:
			{
				XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_36 = ___manager2;
				String_t* L_37 = V_5;
				String_t* L_38 = V_6;
				NullCheck(L_36);
				VirtualActionInvoker2< String_t*, String_t* >::Invoke(12 /* System.Void System.Xml.XmlNamespaceManager::AddNamespace(System.String,System.String) */, L_36, L_37, L_38);
			}

IL_0108_1:
			{
				bool L_39;
				L_39 = Enumerator_MoveNext_m8A802F6DDB7EA4435FEE6877988C792B8B583F88((&V_3), Enumerator_MoveNext_m8A802F6DDB7EA4435FEE6877988C792B8B583F88_RuntimeMethod_var);
				if (L_39)
				{
					goto IL_00a2_1;
				}
			}
			{
				goto IL_0121;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0121:
	{
		bool L_40 = ___writePropertyName3;
		if (!L_40)
		{
			goto IL_0133;
		}
	}
	{
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_41 = ___writer0;
		RuntimeObject* L_42 = ___node1;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_43 = ___manager2;
		String_t* L_44;
		L_44 = XmlNodeConverter_GetPropertyName_mC4EBA7F268695B3CE90E87702E7CDF96ABB01BA5(__this, L_42, L_43, NULL);
		NullCheck(L_41);
		VirtualActionInvoker1< String_t* >::Invoke(74 /* System.Void Newtonsoft.Json.JsonWriter::WritePropertyName(System.String) */, L_41, L_44);
	}

IL_0133:
	{
		RuntimeObject* L_45 = ___node1;
		NullCheck(L_45);
		List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_46;
		L_46 = InterfaceFuncInvoker0< List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* >::Invoke(3 /* System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode> Newtonsoft.Json.Converters.IXmlNode::get_Attributes() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_45);
		bool L_47;
		L_47 = XmlNodeConverter_ValueAttributes_m2E3B5735173BB3088B0395F6266B6BCFFF7D6090(__this, L_46, NULL);
		if (L_47)
		{
			goto IL_017f;
		}
	}
	{
		RuntimeObject* L_48 = ___node1;
		NullCheck(L_48);
		List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_49;
		L_49 = InterfaceFuncInvoker0< List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* >::Invoke(2 /* System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode> Newtonsoft.Json.Converters.IXmlNode::get_ChildNodes() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_48);
		NullCheck(L_49);
		int32_t L_50;
		L_50 = List_1_get_Count_m5101BD6DFA5618FEB8E0D6CCF45C06C872577D0B_inline(L_49, List_1_get_Count_m5101BD6DFA5618FEB8E0D6CCF45C06C872577D0B_RuntimeMethod_var);
		if ((!(((uint32_t)L_50) == ((uint32_t)1))))
		{
			goto IL_017f;
		}
	}
	{
		RuntimeObject* L_51 = ___node1;
		NullCheck(L_51);
		List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_52;
		L_52 = InterfaceFuncInvoker0< List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* >::Invoke(2 /* System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode> Newtonsoft.Json.Converters.IXmlNode::get_ChildNodes() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_51);
		NullCheck(L_52);
		RuntimeObject* L_53;
		L_53 = List_1_get_Item_m49F224E7B5DC4879C5A553E58943A24FA8E42815(L_52, 0, List_1_get_Item_m49F224E7B5DC4879C5A553E58943A24FA8E42815_RuntimeMethod_var);
		NullCheck(L_53);
		int32_t L_54;
		L_54 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Xml.XmlNodeType Newtonsoft.Json.Converters.IXmlNode::get_NodeType() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_53);
		if ((!(((uint32_t)L_54) == ((uint32_t)3))))
		{
			goto IL_017f;
		}
	}
	{
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_55 = ___writer0;
		RuntimeObject* L_56 = ___node1;
		NullCheck(L_56);
		List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_57;
		L_57 = InterfaceFuncInvoker0< List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* >::Invoke(2 /* System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode> Newtonsoft.Json.Converters.IXmlNode::get_ChildNodes() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_56);
		NullCheck(L_57);
		RuntimeObject* L_58;
		L_58 = List_1_get_Item_m49F224E7B5DC4879C5A553E58943A24FA8E42815(L_57, 0, List_1_get_Item_m49F224E7B5DC4879C5A553E58943A24FA8E42815_RuntimeMethod_var);
		NullCheck(L_58);
		String_t* L_59;
		L_59 = InterfaceFuncInvoker0< String_t* >::Invoke(5 /* System.String Newtonsoft.Json.Converters.IXmlNode::get_Value() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_58);
		NullCheck(L_55);
		VirtualActionInvoker1< String_t* >::Invoke(86 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.String) */, L_55, L_59);
		goto IL_0201;
	}

IL_017f:
	{
		RuntimeObject* L_60 = ___node1;
		NullCheck(L_60);
		List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_61;
		L_61 = InterfaceFuncInvoker0< List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* >::Invoke(2 /* System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode> Newtonsoft.Json.Converters.IXmlNode::get_ChildNodes() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_60);
		NullCheck(L_61);
		int32_t L_62;
		L_62 = List_1_get_Count_m5101BD6DFA5618FEB8E0D6CCF45C06C872577D0B_inline(L_61, List_1_get_Count_m5101BD6DFA5618FEB8E0D6CCF45C06C872577D0B_RuntimeMethod_var);
		if (L_62)
		{
			goto IL_01bb;
		}
	}
	{
		RuntimeObject* L_63 = ___node1;
		NullCheck(L_63);
		List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_64;
		L_64 = InterfaceFuncInvoker0< List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* >::Invoke(3 /* System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode> Newtonsoft.Json.Converters.IXmlNode::get_Attributes() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_63);
		NullCheck(L_64);
		int32_t L_65;
		L_65 = List_1_get_Count_m5101BD6DFA5618FEB8E0D6CCF45C06C872577D0B_inline(L_64, List_1_get_Count_m5101BD6DFA5618FEB8E0D6CCF45C06C872577D0B_RuntimeMethod_var);
		if (L_65)
		{
			goto IL_01bb;
		}
	}
	{
		RuntimeObject* L_66 = ___node1;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_66, IXmlElement_t48C6FEA57F31ACF88F9D9AB22BDDD0523D1D4780_il2cpp_TypeInfo_var)));
		bool L_67;
		L_67 = InterfaceFuncInvoker0< bool >::Invoke(2 /* System.Boolean Newtonsoft.Json.Converters.IXmlElement::get_IsEmpty() */, IXmlElement_t48C6FEA57F31ACF88F9D9AB22BDDD0523D1D4780_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_66, IXmlElement_t48C6FEA57F31ACF88F9D9AB22BDDD0523D1D4780_il2cpp_TypeInfo_var)));
		if (!L_67)
		{
			goto IL_01ae;
		}
	}
	{
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_68 = ___writer0;
		NullCheck(L_68);
		VirtualActionInvoker0::Invoke(82 /* System.Void Newtonsoft.Json.JsonWriter::WriteNull() */, L_68);
		goto IL_0201;
	}

IL_01ae:
	{
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_69 = ___writer0;
		String_t* L_70 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(L_69);
		VirtualActionInvoker1< String_t* >::Invoke(86 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.String) */, L_69, L_70);
		goto IL_0201;
	}

IL_01bb:
	{
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_71 = ___writer0;
		NullCheck(L_71);
		VirtualActionInvoker0::Invoke(68 /* System.Void Newtonsoft.Json.JsonWriter::WriteStartObject() */, L_71);
		V_7 = 0;
		goto IL_01e2;
	}

IL_01c6:
	{
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_72 = ___writer0;
		RuntimeObject* L_73 = ___node1;
		NullCheck(L_73);
		List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_74;
		L_74 = InterfaceFuncInvoker0< List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* >::Invoke(3 /* System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode> Newtonsoft.Json.Converters.IXmlNode::get_Attributes() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_73);
		int32_t L_75 = V_7;
		NullCheck(L_74);
		RuntimeObject* L_76;
		L_76 = List_1_get_Item_m49F224E7B5DC4879C5A553E58943A24FA8E42815(L_74, L_75, List_1_get_Item_m49F224E7B5DC4879C5A553E58943A24FA8E42815_RuntimeMethod_var);
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_77 = ___manager2;
		XmlNodeConverter_SerializeNode_mBBB1AA0A7AC24A39675F1B210F51870CE932D6AA(__this, L_72, L_76, L_77, (bool)1, NULL);
		int32_t L_78 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_78, 1));
	}

IL_01e2:
	{
		int32_t L_79 = V_7;
		RuntimeObject* L_80 = ___node1;
		NullCheck(L_80);
		List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_81;
		L_81 = InterfaceFuncInvoker0< List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* >::Invoke(3 /* System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode> Newtonsoft.Json.Converters.IXmlNode::get_Attributes() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_80);
		NullCheck(L_81);
		int32_t L_82;
		L_82 = List_1_get_Count_m5101BD6DFA5618FEB8E0D6CCF45C06C872577D0B_inline(L_81, List_1_get_Count_m5101BD6DFA5618FEB8E0D6CCF45C06C872577D0B_RuntimeMethod_var);
		if ((((int32_t)L_79) < ((int32_t)L_82)))
		{
			goto IL_01c6;
		}
	}
	{
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_83 = ___writer0;
		RuntimeObject* L_84 = ___node1;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_85 = ___manager2;
		XmlNodeConverter_SerializeGroupedNodes_m2310D6C0E3FA9FCDBFC1677DEFE3CFB237E6BC0E(__this, L_83, L_84, L_85, (bool)1, NULL);
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_86 = ___writer0;
		NullCheck(L_86);
		VirtualActionInvoker0::Invoke(69 /* System.Void Newtonsoft.Json.JsonWriter::WriteEndObject() */, L_86);
	}

IL_0201:
	{
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_87 = ___manager2;
		NullCheck(L_87);
		bool L_88;
		L_88 = VirtualFuncInvoker0< bool >::Invoke(11 /* System.Boolean System.Xml.XmlNamespaceManager::PopScope() */, L_87);
		return;
	}

IL_0209:
	{
		bool L_89 = ___writePropertyName3;
		if (!L_89)
		{
			goto IL_03eb;
		}
	}
	{
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_90 = ___writer0;
		RuntimeObject* L_91 = ___node1;
		NullCheck(L_91);
		String_t* L_92;
		L_92 = InterfaceFuncInvoker0< String_t* >::Invoke(5 /* System.String Newtonsoft.Json.Converters.IXmlNode::get_Value() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_91);
		NullCheck(L_90);
		VirtualActionInvoker1< String_t* >::Invoke(124 /* System.Void Newtonsoft.Json.JsonWriter::WriteComment(System.String) */, L_90, L_92);
		return;
	}

IL_021d:
	{
		RuntimeObject* L_93 = ___node1;
		NullCheck(L_93);
		String_t* L_94;
		L_94 = InterfaceFuncInvoker0< String_t* >::Invoke(8 /* System.String Newtonsoft.Json.Converters.IXmlNode::get_NamespaceUri() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_93);
		bool L_95;
		L_95 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_94, _stringLiteral420B74A52534550B0DD14DCF7D8988C2BD4936CE, NULL);
		if (!L_95)
		{
			goto IL_0242;
		}
	}
	{
		RuntimeObject* L_96 = ___node1;
		NullCheck(L_96);
		String_t* L_97;
		L_97 = InterfaceFuncInvoker0< String_t* >::Invoke(5 /* System.String Newtonsoft.Json.Converters.IXmlNode::get_Value() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_96);
		bool L_98;
		L_98 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_97, _stringLiteral125BCB7A4232428BFD5FFB1F3E5905A4F6B0B075, NULL);
		if (!L_98)
		{
			goto IL_0242;
		}
	}
	{
		return;
	}

IL_0242:
	{
		RuntimeObject* L_99 = ___node1;
		NullCheck(L_99);
		String_t* L_100;
		L_100 = InterfaceFuncInvoker0< String_t* >::Invoke(8 /* System.String Newtonsoft.Json.Converters.IXmlNode::get_NamespaceUri() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_99);
		bool L_101;
		L_101 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_100, _stringLiteral125BCB7A4232428BFD5FFB1F3E5905A4F6B0B075, NULL);
		if (!L_101)
		{
			goto IL_0267;
		}
	}
	{
		RuntimeObject* L_102 = ___node1;
		NullCheck(L_102);
		String_t* L_103;
		L_103 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String Newtonsoft.Json.Converters.IXmlNode::get_LocalName() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_102);
		bool L_104;
		L_104 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_103, _stringLiteralC3CA1105B0687AB04E8DB2CE95902C75EC2B661A, NULL);
		if (!L_104)
		{
			goto IL_0267;
		}
	}
	{
		return;
	}

IL_0267:
	{
		bool L_105 = ___writePropertyName3;
		if (!L_105)
		{
			goto IL_0279;
		}
	}
	{
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_106 = ___writer0;
		RuntimeObject* L_107 = ___node1;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_108 = ___manager2;
		String_t* L_109;
		L_109 = XmlNodeConverter_GetPropertyName_mC4EBA7F268695B3CE90E87702E7CDF96ABB01BA5(__this, L_107, L_108, NULL);
		NullCheck(L_106);
		VirtualActionInvoker1< String_t* >::Invoke(74 /* System.Void Newtonsoft.Json.JsonWriter::WritePropertyName(System.String) */, L_106, L_109);
	}

IL_0279:
	{
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_110 = ___writer0;
		RuntimeObject* L_111 = ___node1;
		NullCheck(L_111);
		String_t* L_112;
		L_112 = InterfaceFuncInvoker0< String_t* >::Invoke(5 /* System.String Newtonsoft.Json.Converters.IXmlNode::get_Value() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_111);
		NullCheck(L_110);
		VirtualActionInvoker1< String_t* >::Invoke(86 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.String) */, L_110, L_112);
		return;
	}

IL_0286:
	{
		RuntimeObject* L_113 = ___node1;
		V_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_113, IXmlDeclaration_tA018518C777A8F9CD2D3BD397D9CAB3C3723AAA1_il2cpp_TypeInfo_var));
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_114 = ___writer0;
		RuntimeObject* L_115 = ___node1;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_116 = ___manager2;
		String_t* L_117;
		L_117 = XmlNodeConverter_GetPropertyName_mC4EBA7F268695B3CE90E87702E7CDF96ABB01BA5(__this, L_115, L_116, NULL);
		NullCheck(L_114);
		VirtualActionInvoker1< String_t* >::Invoke(74 /* System.Void Newtonsoft.Json.JsonWriter::WritePropertyName(System.String) */, L_114, L_117);
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_118 = ___writer0;
		NullCheck(L_118);
		VirtualActionInvoker0::Invoke(68 /* System.Void Newtonsoft.Json.JsonWriter::WriteStartObject() */, L_118);
		RuntimeObject* L_119 = V_0;
		NullCheck(L_119);
		String_t* L_120;
		L_120 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Newtonsoft.Json.Converters.IXmlDeclaration::get_Version() */, IXmlDeclaration_tA018518C777A8F9CD2D3BD397D9CAB3C3723AAA1_il2cpp_TypeInfo_var, L_119);
		bool L_121;
		L_121 = StringUtils_IsNullOrEmpty_mDB5E4B38C6134F72E602D16501AF88B58C3C67BA(L_120, NULL);
		if (L_121)
		{
			goto IL_02c5;
		}
	}
	{
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_122 = ___writer0;
		NullCheck(L_122);
		VirtualActionInvoker1< String_t* >::Invoke(74 /* System.Void Newtonsoft.Json.JsonWriter::WritePropertyName(System.String) */, L_122, _stringLiteral539E31D9C32242C0883451A9A8DE262A8C813564);
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_123 = ___writer0;
		RuntimeObject* L_124 = V_0;
		NullCheck(L_124);
		String_t* L_125;
		L_125 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Newtonsoft.Json.Converters.IXmlDeclaration::get_Version() */, IXmlDeclaration_tA018518C777A8F9CD2D3BD397D9CAB3C3723AAA1_il2cpp_TypeInfo_var, L_124);
		NullCheck(L_123);
		VirtualActionInvoker1< String_t* >::Invoke(86 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.String) */, L_123, L_125);
	}

IL_02c5:
	{
		RuntimeObject* L_126 = V_0;
		NullCheck(L_126);
		String_t* L_127;
		L_127 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String Newtonsoft.Json.Converters.IXmlDeclaration::get_Encoding() */, IXmlDeclaration_tA018518C777A8F9CD2D3BD397D9CAB3C3723AAA1_il2cpp_TypeInfo_var, L_126);
		bool L_128;
		L_128 = StringUtils_IsNullOrEmpty_mDB5E4B38C6134F72E602D16501AF88B58C3C67BA(L_127, NULL);
		if (L_128)
		{
			goto IL_02e9;
		}
	}
	{
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_129 = ___writer0;
		NullCheck(L_129);
		VirtualActionInvoker1< String_t* >::Invoke(74 /* System.Void Newtonsoft.Json.JsonWriter::WritePropertyName(System.String) */, L_129, _stringLiteralE7CCD8078E8A58A921106F3AF064603AB958A11A);
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_130 = ___writer0;
		RuntimeObject* L_131 = V_0;
		NullCheck(L_131);
		String_t* L_132;
		L_132 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String Newtonsoft.Json.Converters.IXmlDeclaration::get_Encoding() */, IXmlDeclaration_tA018518C777A8F9CD2D3BD397D9CAB3C3723AAA1_il2cpp_TypeInfo_var, L_131);
		NullCheck(L_130);
		VirtualActionInvoker1< String_t* >::Invoke(86 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.String) */, L_130, L_132);
	}

IL_02e9:
	{
		RuntimeObject* L_133 = V_0;
		NullCheck(L_133);
		String_t* L_134;
		L_134 = InterfaceFuncInvoker0< String_t* >::Invoke(3 /* System.String Newtonsoft.Json.Converters.IXmlDeclaration::get_Standalone() */, IXmlDeclaration_tA018518C777A8F9CD2D3BD397D9CAB3C3723AAA1_il2cpp_TypeInfo_var, L_133);
		bool L_135;
		L_135 = StringUtils_IsNullOrEmpty_mDB5E4B38C6134F72E602D16501AF88B58C3C67BA(L_134, NULL);
		if (L_135)
		{
			goto IL_030d;
		}
	}
	{
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_136 = ___writer0;
		NullCheck(L_136);
		VirtualActionInvoker1< String_t* >::Invoke(74 /* System.Void Newtonsoft.Json.JsonWriter::WritePropertyName(System.String) */, L_136, _stringLiteral2F62B3631B3843128CF8C3FF2A6EB6BB8DA4B062);
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_137 = ___writer0;
		RuntimeObject* L_138 = V_0;
		NullCheck(L_138);
		String_t* L_139;
		L_139 = InterfaceFuncInvoker0< String_t* >::Invoke(3 /* System.String Newtonsoft.Json.Converters.IXmlDeclaration::get_Standalone() */, IXmlDeclaration_tA018518C777A8F9CD2D3BD397D9CAB3C3723AAA1_il2cpp_TypeInfo_var, L_138);
		NullCheck(L_137);
		VirtualActionInvoker1< String_t* >::Invoke(86 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.String) */, L_137, L_139);
	}

IL_030d:
	{
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_140 = ___writer0;
		NullCheck(L_140);
		VirtualActionInvoker0::Invoke(69 /* System.Void Newtonsoft.Json.JsonWriter::WriteEndObject() */, L_140);
		return;
	}

IL_0314:
	{
		RuntimeObject* L_141 = ___node1;
		V_1 = ((RuntimeObject*)Castclass((RuntimeObject*)L_141, IXmlDocumentType_tC37DB53E9079EB1E489BE94B2A02E06A818BD11D_il2cpp_TypeInfo_var));
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_142 = ___writer0;
		RuntimeObject* L_143 = ___node1;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_144 = ___manager2;
		String_t* L_145;
		L_145 = XmlNodeConverter_GetPropertyName_mC4EBA7F268695B3CE90E87702E7CDF96ABB01BA5(__this, L_143, L_144, NULL);
		NullCheck(L_142);
		VirtualActionInvoker1< String_t* >::Invoke(74 /* System.Void Newtonsoft.Json.JsonWriter::WritePropertyName(System.String) */, L_142, L_145);
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_146 = ___writer0;
		NullCheck(L_146);
		VirtualActionInvoker0::Invoke(68 /* System.Void Newtonsoft.Json.JsonWriter::WriteStartObject() */, L_146);
		RuntimeObject* L_147 = V_1;
		NullCheck(L_147);
		String_t* L_148;
		L_148 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Newtonsoft.Json.Converters.IXmlDocumentType::get_Name() */, IXmlDocumentType_tC37DB53E9079EB1E489BE94B2A02E06A818BD11D_il2cpp_TypeInfo_var, L_147);
		bool L_149;
		L_149 = StringUtils_IsNullOrEmpty_mDB5E4B38C6134F72E602D16501AF88B58C3C67BA(L_148, NULL);
		if (L_149)
		{
			goto IL_0353;
		}
	}
	{
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_150 = ___writer0;
		NullCheck(L_150);
		VirtualActionInvoker1< String_t* >::Invoke(74 /* System.Void Newtonsoft.Json.JsonWriter::WritePropertyName(System.String) */, L_150, _stringLiteral72D07D1C82E1B7A92C7AB6D9C01CD4050846760F);
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_151 = ___writer0;
		RuntimeObject* L_152 = V_1;
		NullCheck(L_152);
		String_t* L_153;
		L_153 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Newtonsoft.Json.Converters.IXmlDocumentType::get_Name() */, IXmlDocumentType_tC37DB53E9079EB1E489BE94B2A02E06A818BD11D_il2cpp_TypeInfo_var, L_152);
		NullCheck(L_151);
		VirtualActionInvoker1< String_t* >::Invoke(86 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.String) */, L_151, L_153);
	}

IL_0353:
	{
		RuntimeObject* L_154 = V_1;
		NullCheck(L_154);
		String_t* L_155;
		L_155 = InterfaceFuncInvoker0< String_t* >::Invoke(2 /* System.String Newtonsoft.Json.Converters.IXmlDocumentType::get_Public() */, IXmlDocumentType_tC37DB53E9079EB1E489BE94B2A02E06A818BD11D_il2cpp_TypeInfo_var, L_154);
		bool L_156;
		L_156 = StringUtils_IsNullOrEmpty_mDB5E4B38C6134F72E602D16501AF88B58C3C67BA(L_155, NULL);
		if (L_156)
		{
			goto IL_0377;
		}
	}
	{
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_157 = ___writer0;
		NullCheck(L_157);
		VirtualActionInvoker1< String_t* >::Invoke(74 /* System.Void Newtonsoft.Json.JsonWriter::WritePropertyName(System.String) */, L_157, _stringLiteralF2EB0B21A975739F9285B24F45AC110ADD74337E);
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_158 = ___writer0;
		RuntimeObject* L_159 = V_1;
		NullCheck(L_159);
		String_t* L_160;
		L_160 = InterfaceFuncInvoker0< String_t* >::Invoke(2 /* System.String Newtonsoft.Json.Converters.IXmlDocumentType::get_Public() */, IXmlDocumentType_tC37DB53E9079EB1E489BE94B2A02E06A818BD11D_il2cpp_TypeInfo_var, L_159);
		NullCheck(L_158);
		VirtualActionInvoker1< String_t* >::Invoke(86 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.String) */, L_158, L_160);
	}

IL_0377:
	{
		RuntimeObject* L_161 = V_1;
		NullCheck(L_161);
		String_t* L_162;
		L_162 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String Newtonsoft.Json.Converters.IXmlDocumentType::get_System() */, IXmlDocumentType_tC37DB53E9079EB1E489BE94B2A02E06A818BD11D_il2cpp_TypeInfo_var, L_161);
		bool L_163;
		L_163 = StringUtils_IsNullOrEmpty_mDB5E4B38C6134F72E602D16501AF88B58C3C67BA(L_162, NULL);
		if (L_163)
		{
			goto IL_039b;
		}
	}
	{
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_164 = ___writer0;
		NullCheck(L_164);
		VirtualActionInvoker1< String_t* >::Invoke(74 /* System.Void Newtonsoft.Json.JsonWriter::WritePropertyName(System.String) */, L_164, _stringLiteral6139809F8F5889653A693440ECEF2DFD4FDCDD94);
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_165 = ___writer0;
		RuntimeObject* L_166 = V_1;
		NullCheck(L_166);
		String_t* L_167;
		L_167 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String Newtonsoft.Json.Converters.IXmlDocumentType::get_System() */, IXmlDocumentType_tC37DB53E9079EB1E489BE94B2A02E06A818BD11D_il2cpp_TypeInfo_var, L_166);
		NullCheck(L_165);
		VirtualActionInvoker1< String_t* >::Invoke(86 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.String) */, L_165, L_167);
	}

IL_039b:
	{
		RuntimeObject* L_168 = V_1;
		NullCheck(L_168);
		String_t* L_169;
		L_169 = InterfaceFuncInvoker0< String_t* >::Invoke(3 /* System.String Newtonsoft.Json.Converters.IXmlDocumentType::get_InternalSubset() */, IXmlDocumentType_tC37DB53E9079EB1E489BE94B2A02E06A818BD11D_il2cpp_TypeInfo_var, L_168);
		bool L_170;
		L_170 = StringUtils_IsNullOrEmpty_mDB5E4B38C6134F72E602D16501AF88B58C3C67BA(L_169, NULL);
		if (L_170)
		{
			goto IL_03bf;
		}
	}
	{
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_171 = ___writer0;
		NullCheck(L_171);
		VirtualActionInvoker1< String_t* >::Invoke(74 /* System.Void Newtonsoft.Json.JsonWriter::WritePropertyName(System.String) */, L_171, _stringLiteral559483D7AFD5E146A0FF903862BA9AB05FE01692);
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_172 = ___writer0;
		RuntimeObject* L_173 = V_1;
		NullCheck(L_173);
		String_t* L_174;
		L_174 = InterfaceFuncInvoker0< String_t* >::Invoke(3 /* System.String Newtonsoft.Json.Converters.IXmlDocumentType::get_InternalSubset() */, IXmlDocumentType_tC37DB53E9079EB1E489BE94B2A02E06A818BD11D_il2cpp_TypeInfo_var, L_173);
		NullCheck(L_172);
		VirtualActionInvoker1< String_t* >::Invoke(86 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.String) */, L_172, L_174);
	}

IL_03bf:
	{
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_175 = ___writer0;
		NullCheck(L_175);
		VirtualActionInvoker0::Invoke(69 /* System.Void Newtonsoft.Json.JsonWriter::WriteEndObject() */, L_175);
		return;
	}

IL_03c6:
	{
		RuntimeObject* L_176 = ___node1;
		NullCheck(L_176);
		int32_t L_177;
		L_177 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Xml.XmlNodeType Newtonsoft.Json.Converters.IXmlNode::get_NodeType() */, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var)), L_176);
		V_8 = L_177;
		Il2CppFakeBox<int32_t> L_178(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlNodeType_tCA25567E42A464038FDA6BA318EC0A9627B4CB95_il2cpp_TypeInfo_var)), (&V_8));
		String_t* L_179;
		L_179 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_178), NULL);
		String_t* L_180;
		L_180 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8CD217E7BE4DABC0AB52B3661A45AF8DB008E8C1)), L_179, NULL);
		JsonSerializationException_t00F36890DFAC04F2FDE779151340B9C5563612EC* L_181 = (JsonSerializationException_t00F36890DFAC04F2FDE779151340B9C5563612EC*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonSerializationException_t00F36890DFAC04F2FDE779151340B9C5563612EC_il2cpp_TypeInfo_var)));
		NullCheck(L_181);
		JsonSerializationException__ctor_m0DDDC290916A23CCCE7A780AF876F9CE5FE58E4A(L_181, L_180, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_181, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlNodeConverter_SerializeNode_mBBB1AA0A7AC24A39675F1B210F51870CE932D6AA_RuntimeMethod_var)));
	}

IL_03eb:
	{
		return;
	}
}
// System.Boolean Newtonsoft.Json.Converters.XmlNodeConverter::AllSameName(Newtonsoft.Json.Converters.IXmlNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlNodeConverter_AllSameName_mA177F66B66101491F3DCEAD394E1A1C87F24E8FF (RuntimeObject* ___node0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mC2891A1E295FEF8B5B64E96EB62B5945149DF7BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m8A802F6DDB7EA4435FEE6877988C792B8B583F88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m894DFFA678072980ECF786B52912E28891E006DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m8E48B727D08C794BA9EB42BB47747FD56F55C10E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t5D6B89D2864E6CA1D667C75E2375831735B2B941 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	{
		RuntimeObject* L_0 = ___node0;
		NullCheck(L_0);
		List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_1;
		L_1 = InterfaceFuncInvoker0< List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* >::Invoke(2 /* System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode> Newtonsoft.Json.Converters.IXmlNode::get_ChildNodes() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		Enumerator_t5D6B89D2864E6CA1D667C75E2375831735B2B941 L_2;
		L_2 = List_1_GetEnumerator_m8E48B727D08C794BA9EB42BB47747FD56F55C10E(L_1, List_1_GetEnumerator_m8E48B727D08C794BA9EB42BB47747FD56F55C10E_RuntimeMethod_var);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0036:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mC2891A1E295FEF8B5B64E96EB62B5945149DF7BD((&V_0), Enumerator_Dispose_mC2891A1E295FEF8B5B64E96EB62B5945149DF7BD_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_002b_1;
			}

IL_000e_1:
			{
				RuntimeObject* L_3;
				L_3 = Enumerator_get_Current_m894DFFA678072980ECF786B52912E28891E006DB_inline((&V_0), Enumerator_get_Current_m894DFFA678072980ECF786B52912E28891E006DB_RuntimeMethod_var);
				NullCheck(L_3);
				String_t* L_4;
				L_4 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String Newtonsoft.Json.Converters.IXmlNode::get_LocalName() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_3);
				RuntimeObject* L_5 = ___node0;
				NullCheck(L_5);
				String_t* L_6;
				L_6 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String Newtonsoft.Json.Converters.IXmlNode::get_LocalName() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_5);
				bool L_7;
				L_7 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_4, L_6, NULL);
				if (!L_7)
				{
					goto IL_002b_1;
				}
			}
			{
				V_1 = (bool)0;
				goto IL_0046;
			}

IL_002b_1:
			{
				bool L_8;
				L_8 = Enumerator_MoveNext_m8A802F6DDB7EA4435FEE6877988C792B8B583F88((&V_0), Enumerator_MoveNext_m8A802F6DDB7EA4435FEE6877988C792B8B583F88_RuntimeMethod_var);
				if (L_8)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0044;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0044:
	{
		return (bool)1;
	}

IL_0046:
	{
		bool L_9 = V_1;
		return L_9;
	}
}
// System.Object Newtonsoft.Json.Converters.XmlNodeConverter::ReadJson(Newtonsoft.Json.JsonReader,System.Type,System.Object,Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlNodeConverter_ReadJson_m439264C33B17C4B9AB9EB03EDB14D20DD339FDD1 (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* ___reader0, Type_t* ___objectType1, RuntimeObject* ___existingValue2, JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* ___serializer3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlDocument_tEF9A1A455D7969D9E4EE72346C887F3648F81726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NameTable_t0164DCE377A0A6E712CF54BE4CE5DA58A5537B46_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XDocumentWrapper_t3C3117E449826BEB20F7BFB77214046EE4D86AD6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XNode_t185C922661054AAD14F49676DD6F3CB10D652A30_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlDocumentWrapper_t2C596BBEC57603F9B8DA72446CAABDC3DE251624_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlElement_t9A08B533E9A6B3548A1DE35476186F7ECCDF6FF1_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	int32_t V_3 = 0;
	Type_t* G_B22_0 = NULL;
	String_t* G_B22_1 = NULL;
	JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* G_B22_2 = NULL;
	Type_t* G_B21_0 = NULL;
	String_t* G_B21_1 = NULL;
	JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* G_B21_2 = NULL;
	String_t* G_B23_0 = NULL;
	String_t* G_B23_1 = NULL;
	JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* G_B23_2 = NULL;
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_0 = ___reader0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(16 /* Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::get_TokenType() */, L_0);
		V_3 = L_1;
		int32_t L_2 = V_3;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_3 = V_3;
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_0012;
		}
	}
	{
		return NULL;
	}

IL_0012:
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_4 = ___reader0;
		JsonSerializationException_t00F36890DFAC04F2FDE779151340B9C5563612EC* L_5;
		L_5 = JsonSerializationException_Create_m2CA947673DA3524AFC908CFE45478403E0B8E239(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD5885752D9D9B9AFDCC103ACBDA8549090AABA45)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlNodeConverter_ReadJson_m439264C33B17C4B9AB9EB03EDB14D20DD339FDD1_RuntimeMethod_var)));
	}

IL_001e:
	{
		NameTable_t0164DCE377A0A6E712CF54BE4CE5DA58A5537B46* L_6 = (NameTable_t0164DCE377A0A6E712CF54BE4CE5DA58A5537B46*)il2cpp_codegen_object_new(NameTable_t0164DCE377A0A6E712CF54BE4CE5DA58A5537B46_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		NameTable__ctor_mB02EE27092095D81E839D51519C4FBDA2227C261(L_6, NULL);
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_7 = (XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F*)il2cpp_codegen_object_new(XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		XmlNamespaceManager__ctor_m18E69120CE5886E06630CCCC3215D2C67FC669DB(L_7, L_6, NULL);
		V_0 = L_7;
		V_1 = (RuntimeObject*)NULL;
		V_2 = (RuntimeObject*)NULL;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		Type_t* L_10 = ___objectType1;
		NullCheck(L_9);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_9, L_10);
		if (!L_11)
		{
			goto IL_00b2;
		}
	}
	{
		Type_t* L_12 = ___objectType1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		bool L_15;
		L_15 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_12, L_14, NULL);
		if (!L_15)
		{
			goto IL_00a5;
		}
	}
	{
		Type_t* L_16 = ___objectType1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_00a5;
		}
	}
	{
		Type_t* L_20 = ___objectType1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_20, L_22, NULL);
		if (!L_23)
		{
			goto IL_00a5;
		}
	}
	{
		Type_t* L_24 = ___objectType1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (XNode_t185C922661054AAD14F49676DD6F3CB10D652A30_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		bool L_27;
		L_27 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_24, L_26, NULL);
		if (!L_27)
		{
			goto IL_00a5;
		}
	}
	{
		Type_t* L_28 = ___objectType1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		bool L_31;
		L_31 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_28, L_30, NULL);
		if (!L_31)
		{
			goto IL_00a5;
		}
	}
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_32 = ___reader0;
		JsonSerializationException_t00F36890DFAC04F2FDE779151340B9C5563612EC* L_33;
		L_33 = JsonSerializationException_Create_m2CA947673DA3524AFC908CFE45478403E0B8E239(L_32, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral00166C14A9ED4A48EBE519479D50B0CE4DCB7305)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_33, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlNodeConverter_ReadJson_m439264C33B17C4B9AB9EB03EDB14D20DD339FDD1_RuntimeMethod_var)));
	}

IL_00a5:
	{
		XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1* L_34 = (XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1*)il2cpp_codegen_object_new(XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1_il2cpp_TypeInfo_var);
		NullCheck(L_34);
		XDocument__ctor_m75DFDCC516F6DB707830B7147BB51FEE9F72DDAD(L_34, NULL);
		XDocumentWrapper_t3C3117E449826BEB20F7BFB77214046EE4D86AD6* L_35 = (XDocumentWrapper_t3C3117E449826BEB20F7BFB77214046EE4D86AD6*)il2cpp_codegen_object_new(XDocumentWrapper_t3C3117E449826BEB20F7BFB77214046EE4D86AD6_il2cpp_TypeInfo_var);
		NullCheck(L_35);
		XDocumentWrapper__ctor_mE05A6619DC930C9ABB32122C06DC694533611BDB(L_35, L_34, NULL);
		V_1 = L_35;
		RuntimeObject* L_36 = V_1;
		V_2 = L_36;
	}

IL_00b2:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_37 = { reinterpret_cast<intptr_t> (XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_38;
		L_38 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_37, NULL);
		Type_t* L_39 = ___objectType1;
		NullCheck(L_38);
		bool L_40;
		L_40 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_38, L_39);
		if (!L_40)
		{
			goto IL_011a;
		}
	}
	{
		Type_t* L_41 = ___objectType1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_42 = { reinterpret_cast<intptr_t> (XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_43;
		L_43 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_42, NULL);
		bool L_44;
		L_44 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_41, L_43, NULL);
		if (!L_44)
		{
			goto IL_0106;
		}
	}
	{
		Type_t* L_45 = ___objectType1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_46 = { reinterpret_cast<intptr_t> (XmlElement_t9A08B533E9A6B3548A1DE35476186F7ECCDF6FF1_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_47;
		L_47 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_46, NULL);
		bool L_48;
		L_48 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_45, L_47, NULL);
		if (!L_48)
		{
			goto IL_0106;
		}
	}
	{
		Type_t* L_49 = ___objectType1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_50 = { reinterpret_cast<intptr_t> (XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_51;
		L_51 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_50, NULL);
		bool L_52;
		L_52 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_49, L_51, NULL);
		if (!L_52)
		{
			goto IL_0106;
		}
	}
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_53 = ___reader0;
		JsonSerializationException_t00F36890DFAC04F2FDE779151340B9C5563612EC* L_54;
		L_54 = JsonSerializationException_Create_m2CA947673DA3524AFC908CFE45478403E0B8E239(L_53, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB43B87FB930FCCA8033D700C4F7F183B4B974C07)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_54, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlNodeConverter_ReadJson_m439264C33B17C4B9AB9EB03EDB14D20DD339FDD1_RuntimeMethod_var)));
	}

IL_0106:
	{
		XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* L_55 = (XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B*)il2cpp_codegen_object_new(XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B_il2cpp_TypeInfo_var);
		NullCheck(L_55);
		XmlDocument__ctor_m09B578D51E249702C90A99B87A31ABE8CE4027DC(L_55, NULL);
		XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* L_56 = L_55;
		NullCheck(L_56);
		VirtualActionInvoker1< XmlResolver_tE25A33DFCB87A939D11BC8543970F6857AEC3DCF* >::Invoke(58 /* System.Void System.Xml.XmlDocument::set_XmlResolver(System.Xml.XmlResolver) */, L_56, (XmlResolver_tE25A33DFCB87A939D11BC8543970F6857AEC3DCF*)NULL);
		XmlDocumentWrapper_t2C596BBEC57603F9B8DA72446CAABDC3DE251624* L_57 = (XmlDocumentWrapper_t2C596BBEC57603F9B8DA72446CAABDC3DE251624*)il2cpp_codegen_object_new(XmlDocumentWrapper_t2C596BBEC57603F9B8DA72446CAABDC3DE251624_il2cpp_TypeInfo_var);
		NullCheck(L_57);
		XmlDocumentWrapper__ctor_m2DDFA872888661813F74523693DB4A34FE765DFE(L_57, L_56, NULL);
		V_1 = L_57;
		RuntimeObject* L_58 = V_1;
		V_2 = L_58;
	}

IL_011a:
	{
		RuntimeObject* L_59 = V_1;
		if (!L_59)
		{
			goto IL_0120;
		}
	}
	{
		RuntimeObject* L_60 = V_2;
		if (L_60)
		{
			goto IL_013e;
		}
	}

IL_0120:
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_61 = ___reader0;
		Type_t* L_62 = ___objectType1;
		Type_t* L_63 = L_62;
		G_B21_0 = L_63;
		G_B21_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD372CCFC3C301AA5EC25EDCDE56A31E9545CDA18));
		G_B21_2 = L_61;
		if (L_63)
		{
			G_B22_0 = L_63;
			G_B22_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD372CCFC3C301AA5EC25EDCDE56A31E9545CDA18));
			G_B22_2 = L_61;
			goto IL_012e;
		}
	}
	{
		G_B23_0 = ((String_t*)(NULL));
		G_B23_1 = G_B21_1;
		G_B23_2 = G_B21_2;
		goto IL_0133;
	}

IL_012e:
	{
		NullCheck(G_B22_0);
		String_t* L_64;
		L_64 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B22_0);
		G_B23_0 = L_64;
		G_B23_1 = G_B22_1;
		G_B23_2 = G_B22_2;
	}

IL_0133:
	{
		String_t* L_65;
		L_65 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B23_1, G_B23_0, NULL);
		JsonSerializationException_t00F36890DFAC04F2FDE779151340B9C5563612EC* L_66;
		L_66 = JsonSerializationException_Create_m2CA947673DA3524AFC908CFE45478403E0B8E239(G_B23_2, L_65, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_66, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlNodeConverter_ReadJson_m439264C33B17C4B9AB9EB03EDB14D20DD339FDD1_RuntimeMethod_var)));
	}

IL_013e:
	{
		String_t* L_67;
		L_67 = XmlNodeConverter_get_DeserializeRootElementName_m2A0B73747601E99F60881D50EF7D55F0EDBE85A4_inline(__this, NULL);
		bool L_68;
		L_68 = StringUtils_IsNullOrEmpty_mDB5E4B38C6134F72E602D16501AF88B58C3C67BA(L_67, NULL);
		if (L_68)
		{
			goto IL_015d;
		}
	}
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_69 = ___reader0;
		RuntimeObject* L_70 = V_1;
		RuntimeObject* L_71 = V_2;
		String_t* L_72;
		L_72 = XmlNodeConverter_get_DeserializeRootElementName_m2A0B73747601E99F60881D50EF7D55F0EDBE85A4_inline(__this, NULL);
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_73 = V_0;
		XmlNodeConverter_ReadElement_m09C859D452268EBC6B893181FDF83B8CC7BDFAD8(__this, L_69, L_70, L_71, L_72, L_73, NULL);
		goto IL_016d;
	}

IL_015d:
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_74 = ___reader0;
		NullCheck(L_74);
		JsonReader_ReadAndAssert_m8E4307CFC38DA6E98E818C3058CCE2E385DC9EB7(L_74, NULL);
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_75 = ___reader0;
		RuntimeObject* L_76 = V_1;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_77 = V_0;
		RuntimeObject* L_78 = V_2;
		XmlNodeConverter_DeserializeNode_m7CF6B466118CB9E0CF4CAC90CA34BC769B45229C(__this, L_75, L_76, L_77, L_78, NULL);
	}

IL_016d:
	{
		Type_t* L_79 = ___objectType1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_80 = { reinterpret_cast<intptr_t> (XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_81;
		L_81 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_80, NULL);
		bool L_82;
		L_82 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_79, L_81, NULL);
		if (!L_82)
		{
			goto IL_0196;
		}
	}
	{
		RuntimeObject* L_83 = V_1;
		NullCheck(L_83);
		RuntimeObject* L_84;
		L_84 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(12 /* Newtonsoft.Json.Converters.IXmlElement Newtonsoft.Json.Converters.IXmlDocument::get_DocumentElement() */, IXmlDocument_tEF9A1A455D7969D9E4EE72346C887F3648F81726_il2cpp_TypeInfo_var, L_83);
		NullCheck(L_84);
		RuntimeObject* L_85;
		L_85 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(9 /* System.Object Newtonsoft.Json.Converters.IXmlNode::get_WrappedNode() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_84);
		XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* L_86 = ((XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909*)CastclassClass((RuntimeObject*)L_85, XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909_il2cpp_TypeInfo_var));
		NullCheck(L_86);
		XNode_Remove_m74CDB71751058523C66B0529333D7D0E880C29F9(L_86, NULL);
		return L_86;
	}

IL_0196:
	{
		Type_t* L_87 = ___objectType1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_88 = { reinterpret_cast<intptr_t> (XmlElement_t9A08B533E9A6B3548A1DE35476186F7ECCDF6FF1_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_89;
		L_89 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_88, NULL);
		bool L_90;
		L_90 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_87, L_89, NULL);
		if (!L_90)
		{
			goto IL_01b4;
		}
	}
	{
		RuntimeObject* L_91 = V_1;
		NullCheck(L_91);
		RuntimeObject* L_92;
		L_92 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(12 /* Newtonsoft.Json.Converters.IXmlElement Newtonsoft.Json.Converters.IXmlDocument::get_DocumentElement() */, IXmlDocument_tEF9A1A455D7969D9E4EE72346C887F3648F81726_il2cpp_TypeInfo_var, L_91);
		NullCheck(L_92);
		RuntimeObject* L_93;
		L_93 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(9 /* System.Object Newtonsoft.Json.Converters.IXmlNode::get_WrappedNode() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_92);
		return L_93;
	}

IL_01b4:
	{
		RuntimeObject* L_94 = V_1;
		NullCheck(L_94);
		RuntimeObject* L_95;
		L_95 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(9 /* System.Object Newtonsoft.Json.Converters.IXmlNode::get_WrappedNode() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_94);
		return L_95;
	}
}
// System.Void Newtonsoft.Json.Converters.XmlNodeConverter::DeserializeValue(Newtonsoft.Json.JsonReader,Newtonsoft.Json.Converters.IXmlDocument,System.Xml.XmlNamespaceManager,System.String,Newtonsoft.Json.Converters.IXmlNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeConverter_DeserializeValue_m6D20454FDBBEEE2CABB0ED3EC1BCF8F2E0067AF0 (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* ___reader0, RuntimeObject* ___document1, XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* ___manager2, String_t* ___propertyName3, RuntimeObject* ___currentNode4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlDocument_tEF9A1A455D7969D9E4EE72346C887F3648F81726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4760011519A4AB7E8521F6795430114E80AA83E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83B3ACB1C0AB14BABA0BD386F8695E096686811C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2ADAC70CFE2DCB556D061A93CBD008778646655);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD462B8D5192FB7491E85A3C2A4B22B91C958EE73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF6C0C11953123BBAC57A7E215512C2CA4CF68520);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = XmlNodeConverter_get_EncodeSpecialCharacters_m343756B55466DB680EF3561E34A803C5D2FFC0BD_inline(__this, NULL);
		if (L_0)
		{
			goto IL_00d5;
		}
	}
	{
		String_t* L_1 = ___propertyName3;
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteral4760011519A4AB7E8521F6795430114E80AA83E4, NULL);
		if (L_2)
		{
			goto IL_0045;
		}
	}
	{
		String_t* L_3 = ___propertyName3;
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, _stringLiteralA2ADAC70CFE2DCB556D061A93CBD008778646655, NULL);
		if (L_4)
		{
			goto IL_005a;
		}
	}
	{
		String_t* L_5 = ___propertyName3;
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, _stringLiteralF6C0C11953123BBAC57A7E215512C2CA4CF68520, NULL);
		if (L_6)
		{
			goto IL_006f;
		}
	}
	{
		String_t* L_7 = ___propertyName3;
		bool L_8;
		L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_7, _stringLiteral83B3ACB1C0AB14BABA0BD386F8695E096686811C, NULL);
		if (L_8)
		{
			goto IL_0084;
		}
	}
	{
		goto IL_0099;
	}

IL_0045:
	{
		RuntimeObject* L_9 = ___currentNode4;
		RuntimeObject* L_10 = ___document1;
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_11 = ___reader0;
		il2cpp_codegen_runtime_class_init_inline(XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF_il2cpp_TypeInfo_var);
		String_t* L_12;
		L_12 = XmlNodeConverter_ConvertTokenToXmlValue_m968DB55F5864E99BE9EBE8B3C89B1CFE13ACF458(L_11, NULL);
		NullCheck(L_10);
		RuntimeObject* L_13;
		L_13 = InterfaceFuncInvoker1< RuntimeObject*, String_t* >::Invoke(1 /* Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.IXmlDocument::CreateTextNode(System.String) */, IXmlDocument_tEF9A1A455D7969D9E4EE72346C887F3648F81726_il2cpp_TypeInfo_var, L_10, L_12);
		NullCheck(L_9);
		RuntimeObject* L_14;
		L_14 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(7 /* Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.IXmlNode::AppendChild(Newtonsoft.Json.Converters.IXmlNode) */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_9, L_13);
		return;
	}

IL_005a:
	{
		RuntimeObject* L_15 = ___currentNode4;
		RuntimeObject* L_16 = ___document1;
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_17 = ___reader0;
		il2cpp_codegen_runtime_class_init_inline(XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF_il2cpp_TypeInfo_var);
		String_t* L_18;
		L_18 = XmlNodeConverter_ConvertTokenToXmlValue_m968DB55F5864E99BE9EBE8B3C89B1CFE13ACF458(L_17, NULL);
		NullCheck(L_16);
		RuntimeObject* L_19;
		L_19 = InterfaceFuncInvoker1< RuntimeObject*, String_t* >::Invoke(2 /* Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.IXmlDocument::CreateCDataSection(System.String) */, IXmlDocument_tEF9A1A455D7969D9E4EE72346C887F3648F81726_il2cpp_TypeInfo_var, L_16, L_18);
		NullCheck(L_15);
		RuntimeObject* L_20;
		L_20 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(7 /* Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.IXmlNode::AppendChild(Newtonsoft.Json.Converters.IXmlNode) */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_15, L_19);
		return;
	}

IL_006f:
	{
		RuntimeObject* L_21 = ___currentNode4;
		RuntimeObject* L_22 = ___document1;
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_23 = ___reader0;
		il2cpp_codegen_runtime_class_init_inline(XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF_il2cpp_TypeInfo_var);
		String_t* L_24;
		L_24 = XmlNodeConverter_ConvertTokenToXmlValue_m968DB55F5864E99BE9EBE8B3C89B1CFE13ACF458(L_23, NULL);
		NullCheck(L_22);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker1< RuntimeObject*, String_t* >::Invoke(3 /* Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.IXmlDocument::CreateWhitespace(System.String) */, IXmlDocument_tEF9A1A455D7969D9E4EE72346C887F3648F81726_il2cpp_TypeInfo_var, L_22, L_24);
		NullCheck(L_21);
		RuntimeObject* L_26;
		L_26 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(7 /* Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.IXmlNode::AppendChild(Newtonsoft.Json.Converters.IXmlNode) */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_21, L_25);
		return;
	}

IL_0084:
	{
		RuntimeObject* L_27 = ___currentNode4;
		RuntimeObject* L_28 = ___document1;
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_29 = ___reader0;
		il2cpp_codegen_runtime_class_init_inline(XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF_il2cpp_TypeInfo_var);
		String_t* L_30;
		L_30 = XmlNodeConverter_ConvertTokenToXmlValue_m968DB55F5864E99BE9EBE8B3C89B1CFE13ACF458(L_29, NULL);
		NullCheck(L_28);
		RuntimeObject* L_31;
		L_31 = InterfaceFuncInvoker1< RuntimeObject*, String_t* >::Invoke(4 /* Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.IXmlDocument::CreateSignificantWhitespace(System.String) */, IXmlDocument_tEF9A1A455D7969D9E4EE72346C887F3648F81726_il2cpp_TypeInfo_var, L_28, L_30);
		NullCheck(L_27);
		RuntimeObject* L_32;
		L_32 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(7 /* Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.IXmlNode::AppendChild(Newtonsoft.Json.Converters.IXmlNode) */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_27, L_31);
		return;
	}

IL_0099:
	{
		String_t* L_33 = ___propertyName3;
		bool L_34;
		L_34 = StringUtils_IsNullOrEmpty_mDB5E4B38C6134F72E602D16501AF88B58C3C67BA(L_33, NULL);
		if (L_34)
		{
			goto IL_00bb;
		}
	}
	{
		String_t* L_35 = ___propertyName3;
		NullCheck(L_35);
		Il2CppChar L_36;
		L_36 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_35, 0, NULL);
		if ((!(((uint32_t)L_36) == ((uint32_t)((int32_t)63)))))
		{
			goto IL_00bb;
		}
	}
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_37 = ___reader0;
		RuntimeObject* L_38 = ___document1;
		RuntimeObject* L_39 = ___currentNode4;
		String_t* L_40 = ___propertyName3;
		XmlNodeConverter_CreateInstruction_m7A5C6039FEC825B248B75841D11C1DB284F78006(__this, L_37, L_38, L_39, L_40, NULL);
		return;
	}

IL_00bb:
	{
		String_t* L_41 = ___propertyName3;
		bool L_42;
		L_42 = String_Equals_mCC34895D0DB2AD440C9D8767032215BC86B5C48B(L_41, _stringLiteralD462B8D5192FB7491E85A3C2A4B22B91C958EE73, 5, NULL);
		if (!L_42)
		{
			goto IL_00d5;
		}
	}
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_43 = ___reader0;
		RuntimeObject* L_44 = ___document1;
		RuntimeObject* L_45 = ___currentNode4;
		XmlNodeConverter_CreateDocumentType_m4438D07E2CC5D23244A39CC98EE3F75B74B06FFA(__this, L_43, L_44, L_45, NULL);
		return;
	}

IL_00d5:
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_46 = ___reader0;
		NullCheck(L_46);
		int32_t L_47;
		L_47 = VirtualFuncInvoker0< int32_t >::Invoke(16 /* Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::get_TokenType() */, L_46);
		if ((!(((uint32_t)L_47) == ((uint32_t)2))))
		{
			goto IL_00ec;
		}
	}
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_48 = ___reader0;
		RuntimeObject* L_49 = ___document1;
		String_t* L_50 = ___propertyName3;
		RuntimeObject* L_51 = ___currentNode4;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_52 = ___manager2;
		XmlNodeConverter_ReadArrayElements_m3A4E70784167D3D49FB40746E404602CA282B3D6(__this, L_48, L_49, L_50, L_51, L_52, NULL);
		return;
	}

IL_00ec:
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_53 = ___reader0;
		RuntimeObject* L_54 = ___document1;
		RuntimeObject* L_55 = ___currentNode4;
		String_t* L_56 = ___propertyName3;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_57 = ___manager2;
		XmlNodeConverter_ReadElement_m09C859D452268EBC6B893181FDF83B8CC7BDFAD8(__this, L_53, L_54, L_55, L_56, L_57, NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Converters.XmlNodeConverter::ReadElement(Newtonsoft.Json.JsonReader,Newtonsoft.Json.Converters.IXmlDocument,Newtonsoft.Json.Converters.IXmlNode,System.String,System.Xml.XmlNamespaceManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeConverter_ReadElement_m09C859D452268EBC6B893181FDF83B8CC7BDFAD8 (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* ___reader0, RuntimeObject* ___document1, RuntimeObject* ___currentNode2, String_t* ___propertyName3, XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* ___manager4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral042D5257625C9358C840FA1BA4A978DC0470104F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral11F941DFBA062769D6F047F85D846335446DFB0E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral125BCB7A4232428BFD5FFB1F3E5905A4F6B0B075);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1298EC2264C4F9A0D3A04140873D9D01F481050B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA05B74022DC98A669248CD353ADDBD7AADAD4AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF96282F5D84FC9B754994ADCFE65DAE2088A7382);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	String_t* V_5 = NULL;
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* G_B6_0 = NULL;
	{
		String_t* L_0 = ___propertyName3;
		bool L_1;
		L_1 = StringUtils_IsNullOrEmpty_mDB5E4B38C6134F72E602D16501AF88B58C3C67BA(L_0, NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_2 = ___reader0;
		JsonSerializationException_t00F36890DFAC04F2FDE779151340B9C5563612EC* L_3;
		L_3 = JsonSerializationException_Create_m2CA947673DA3524AFC908CFE45478403E0B8E239(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFDE19EF7EBB97E368AFBF9A1B8DC90708B67C9A4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlNodeConverter_ReadElement_m09C859D452268EBC6B893181FDF83B8CC7BDFAD8_RuntimeMethod_var)));
	}

IL_0015:
	{
		V_0 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)NULL;
		V_1 = (String_t*)NULL;
		bool L_4;
		L_4 = XmlNodeConverter_get_EncodeSpecialCharacters_m343756B55466DB680EF3561E34A803C5D2FFC0BD_inline(__this, NULL);
		if (L_4)
		{
			goto IL_0112;
		}
	}
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_5 = ___reader0;
		bool L_6;
		L_6 = XmlNodeConverter_ShouldReadInto_m9A0AE80AECBB978CB0863E0092917AF59FDC6F8D(__this, L_5, NULL);
		if (L_6)
		{
			goto IL_0030;
		}
	}
	{
		G_B6_0 = ((Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)(NULL));
		goto IL_0039;
	}

IL_0030:
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_7 = ___reader0;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_8 = ___manager4;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_9;
		L_9 = XmlNodeConverter_ReadAttributeElements_m9B56D685A23448B661C73F3483B9B4063D55C049(__this, L_7, L_8, NULL);
		G_B6_0 = L_9;
	}

IL_0039:
	{
		V_0 = G_B6_0;
		String_t* L_10 = ___propertyName3;
		String_t* L_11;
		L_11 = MiscellaneousUtils_GetPrefix_mD4530D3BF776EA4ECCFF1888BBD2ECDE9F2DC1CF(L_10, NULL);
		V_1 = L_11;
		String_t* L_12 = ___propertyName3;
		bool L_13;
		L_13 = StringUtils_StartsWith_m1DF31A6C9FE8815DE2BE508A518E6399EAFD7871(L_12, ((int32_t)64), NULL);
		if (!L_13)
		{
			goto IL_006c;
		}
	}
	{
		String_t* L_14 = ___propertyName3;
		NullCheck(L_14);
		String_t* L_15;
		L_15 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_14, 1, NULL);
		V_2 = L_15;
		String_t* L_16 = V_2;
		String_t* L_17;
		L_17 = MiscellaneousUtils_GetPrefix_mD4530D3BF776EA4ECCFF1888BBD2ECDE9F2DC1CF(L_16, NULL);
		V_3 = L_17;
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_18 = ___reader0;
		RuntimeObject* L_19 = ___document1;
		RuntimeObject* L_20 = ___currentNode2;
		String_t* L_21 = ___propertyName3;
		String_t* L_22 = V_2;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_23 = ___manager4;
		String_t* L_24 = V_3;
		il2cpp_codegen_runtime_class_init_inline(XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF_il2cpp_TypeInfo_var);
		XmlNodeConverter_AddAttribute_m01F487BE31278D2909B42C51A8BC7F159A34DAB3(L_18, L_19, L_20, L_21, L_22, L_23, L_24, NULL);
		return;
	}

IL_006c:
	{
		String_t* L_25 = ___propertyName3;
		bool L_26;
		L_26 = StringUtils_StartsWith_m1DF31A6C9FE8815DE2BE508A518E6399EAFD7871(L_25, ((int32_t)36), NULL);
		if (!L_26)
		{
			goto IL_0121;
		}
	}
	{
		String_t* L_27 = ___propertyName3;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral1298EC2264C4F9A0D3A04140873D9D01F481050B, NULL);
		if (L_28)
		{
			goto IL_00c2;
		}
	}
	{
		String_t* L_29 = ___propertyName3;
		bool L_30;
		L_30 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_29, _stringLiteralEA05B74022DC98A669248CD353ADDBD7AADAD4AA, NULL);
		if (L_30)
		{
			goto IL_00e9;
		}
	}
	{
		String_t* L_31 = ___propertyName3;
		bool L_32;
		L_32 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_31, _stringLiteralF96282F5D84FC9B754994ADCFE65DAE2088A7382, NULL);
		if (L_32)
		{
			goto IL_00e9;
		}
	}
	{
		String_t* L_33 = ___propertyName3;
		bool L_34;
		L_34 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_33, _stringLiteral11F941DFBA062769D6F047F85D846335446DFB0E, NULL);
		if (L_34)
		{
			goto IL_00e9;
		}
	}
	{
		String_t* L_35 = ___propertyName3;
		bool L_36;
		L_36 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_35, _stringLiteral042D5257625C9358C840FA1BA4A978DC0470104F, NULL);
		if (L_36)
		{
			goto IL_00e9;
		}
	}
	{
		goto IL_0121;
	}

IL_00c2:
	{
		String_t* L_37 = ___propertyName3;
		NullCheck(L_37);
		String_t* L_38;
		L_38 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_37, 1, NULL);
		___propertyName3 = L_38;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_39 = ___manager4;
		NullCheck(L_39);
		String_t* L_40;
		L_40 = VirtualFuncInvoker1< String_t*, String_t* >::Invoke(17 /* System.String System.Xml.XmlNamespaceManager::LookupPrefix(System.String) */, L_39, _stringLiteral125BCB7A4232428BFD5FFB1F3E5905A4F6B0B075);
		V_1 = L_40;
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_41 = ___reader0;
		RuntimeObject* L_42 = ___document1;
		RuntimeObject* L_43 = ___currentNode2;
		String_t* L_44 = ___propertyName3;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_45 = ___manager4;
		String_t* L_46 = V_1;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_47 = V_0;
		XmlNodeConverter_CreateElement_mB62D7411435EBF38A92DDD2E3F37325D14CC5819(__this, L_41, L_42, L_43, L_44, L_45, L_46, L_47, NULL);
		return;
	}

IL_00e9:
	{
		String_t* L_48 = ___propertyName3;
		NullCheck(L_48);
		String_t* L_49;
		L_49 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_48, 1, NULL);
		V_4 = L_49;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_50 = ___manager4;
		NullCheck(L_50);
		String_t* L_51;
		L_51 = VirtualFuncInvoker1< String_t*, String_t* >::Invoke(17 /* System.String System.Xml.XmlNamespaceManager::LookupPrefix(System.String) */, L_50, _stringLiteral125BCB7A4232428BFD5FFB1F3E5905A4F6B0B075);
		V_5 = L_51;
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_52 = ___reader0;
		RuntimeObject* L_53 = ___document1;
		RuntimeObject* L_54 = ___currentNode2;
		String_t* L_55 = ___propertyName3;
		String_t* L_56 = V_4;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_57 = ___manager4;
		String_t* L_58 = V_5;
		il2cpp_codegen_runtime_class_init_inline(XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF_il2cpp_TypeInfo_var);
		XmlNodeConverter_AddAttribute_m01F487BE31278D2909B42C51A8BC7F159A34DAB3(L_52, L_53, L_54, L_55, L_56, L_57, L_58, NULL);
		return;
	}

IL_0112:
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_59 = ___reader0;
		bool L_60;
		L_60 = XmlNodeConverter_ShouldReadInto_m9A0AE80AECBB978CB0863E0092917AF59FDC6F8D(__this, L_59, NULL);
		if (!L_60)
		{
			goto IL_0121;
		}
	}
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_61 = ___reader0;
		NullCheck(L_61);
		JsonReader_ReadAndAssert_m8E4307CFC38DA6E98E818C3058CCE2E385DC9EB7(L_61, NULL);
	}

IL_0121:
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_62 = ___reader0;
		RuntimeObject* L_63 = ___document1;
		RuntimeObject* L_64 = ___currentNode2;
		String_t* L_65 = ___propertyName3;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_66 = ___manager4;
		String_t* L_67 = V_1;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_68 = V_0;
		XmlNodeConverter_CreateElement_mB62D7411435EBF38A92DDD2E3F37325D14CC5819(__this, L_62, L_63, L_64, L_65, L_66, L_67, L_68, NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Converters.XmlNodeConverter::CreateElement(Newtonsoft.Json.JsonReader,Newtonsoft.Json.Converters.IXmlDocument,Newtonsoft.Json.Converters.IXmlNode,System.String,System.Xml.XmlNamespaceManager,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeConverter_CreateElement_mB62D7411435EBF38A92DDD2E3F37325D14CC5819 (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* ___reader0, RuntimeObject* ___document1, RuntimeObject* ___currentNode2, String_t* ___elementName3, XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* ___manager4, String_t* ___elementPrefix5, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___attributeNameValues6, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlDocument_tEF9A1A455D7969D9E4EE72346C887F3648F81726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlElement_t48C6FEA57F31ACF88F9D9AB22BDDD0523D1D4780_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 V_1;
	memset((&V_1), 0, sizeof(V_1));
	KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A V_2;
	memset((&V_2), 0, sizeof(V_2));
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	String_t* V_6 = NULL;
	int32_t V_7 = 0;
	RuntimeObject* G_B8_0 = NULL;
	String_t* G_B7_0 = NULL;
	String_t* G_B7_1 = NULL;
	RuntimeObject* G_B7_2 = NULL;
	String_t* G_B6_0 = NULL;
	String_t* G_B6_1 = NULL;
	RuntimeObject* G_B6_2 = NULL;
	{
		String_t* L_0 = ___elementName3;
		RuntimeObject* L_1 = ___document1;
		String_t* L_2 = ___elementPrefix5;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_3 = ___manager4;
		RuntimeObject* L_4;
		L_4 = XmlNodeConverter_CreateElement_mD8BF7ADE4CB3682433E964C9986042FFE403FE65(__this, L_0, L_1, L_2, L_3, NULL);
		V_0 = L_4;
		RuntimeObject* L_5 = ___currentNode2;
		RuntimeObject* L_6 = V_0;
		NullCheck(L_5);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(7 /* Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.IXmlNode::AppendChild(Newtonsoft.Json.Converters.IXmlNode) */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_5, L_6);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_8 = ___attributeNameValues6;
		if (!L_8)
		{
			goto IL_00a6;
		}
	}
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_9 = ___attributeNameValues6;
		NullCheck(L_9);
		Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 L_10;
		L_10 = Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6(L_9, Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6_RuntimeMethod_var);
		V_1 = L_10;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0098:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD((&V_1), Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_008d_1;
			}

IL_0027_1:
			{
				KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A L_11;
				L_11 = Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_inline((&V_1), Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_RuntimeMethod_var);
				V_2 = L_11;
				String_t* L_12;
				L_12 = KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline((&V_2), KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
				il2cpp_codegen_runtime_class_init_inline(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
				String_t* L_13;
				L_13 = XmlConvert_EncodeName_m5CDC8BEC5CE63A019C9E7C52AADF9F44B90E6CB5(L_12, NULL);
				V_3 = L_13;
				String_t* L_14;
				L_14 = KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline((&V_2), KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
				String_t* L_15;
				L_15 = MiscellaneousUtils_GetPrefix_mD4530D3BF776EA4ECCFF1888BBD2ECDE9F2DC1CF(L_14, NULL);
				V_4 = L_15;
				String_t* L_16 = V_4;
				bool L_17;
				L_17 = StringUtils_IsNullOrEmpty_mDB5E4B38C6134F72E602D16501AF88B58C3C67BA(L_16, NULL);
				if (!L_17)
				{
					goto IL_0063_1;
				}
			}
			{
				RuntimeObject* L_18 = ___document1;
				String_t* L_19 = V_3;
				String_t* L_20;
				L_20 = KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_inline((&V_2), KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
				NullCheck(L_18);
				RuntimeObject* L_21;
				L_21 = InterfaceFuncInvoker2< RuntimeObject*, String_t*, String_t* >::Invoke(10 /* Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.IXmlDocument::CreateAttribute(System.String,System.String) */, IXmlDocument_tEF9A1A455D7969D9E4EE72346C887F3648F81726_il2cpp_TypeInfo_var, L_18, L_19, L_20);
				G_B8_0 = L_21;
				goto IL_0083_1;
			}

IL_0063_1:
			{
				RuntimeObject* L_22 = ___document1;
				String_t* L_23 = V_3;
				XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_24 = ___manager4;
				String_t* L_25 = V_4;
				NullCheck(L_24);
				String_t* L_26;
				L_26 = VirtualFuncInvoker1< String_t*, String_t* >::Invoke(16 /* System.String System.Xml.XmlNamespaceManager::LookupNamespace(System.String) */, L_24, L_25);
				String_t* L_27 = L_26;
				G_B6_0 = L_27;
				G_B6_1 = L_23;
				G_B6_2 = L_22;
				if (L_27)
				{
					G_B7_0 = L_27;
					G_B7_1 = L_23;
					G_B7_2 = L_22;
					goto IL_0077_1;
				}
			}
			{
				String_t* L_28 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
				G_B7_0 = L_28;
				G_B7_1 = G_B6_1;
				G_B7_2 = G_B6_2;
			}

IL_0077_1:
			{
				String_t* L_29;
				L_29 = KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_inline((&V_2), KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
				NullCheck(G_B7_2);
				RuntimeObject* L_30;
				L_30 = InterfaceFuncInvoker3< RuntimeObject*, String_t*, String_t*, String_t* >::Invoke(11 /* Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.IXmlDocument::CreateAttribute(System.String,System.String,System.String) */, IXmlDocument_tEF9A1A455D7969D9E4EE72346C887F3648F81726_il2cpp_TypeInfo_var, G_B7_2, G_B7_1, G_B7_0, L_29);
				G_B8_0 = L_30;
			}

IL_0083_1:
			{
				V_5 = G_B8_0;
				RuntimeObject* L_31 = V_0;
				RuntimeObject* L_32 = V_5;
				NullCheck(L_31);
				InterfaceActionInvoker1< RuntimeObject* >::Invoke(0 /* System.Void Newtonsoft.Json.Converters.IXmlElement::SetAttributeNode(Newtonsoft.Json.Converters.IXmlNode) */, IXmlElement_t48C6FEA57F31ACF88F9D9AB22BDDD0523D1D4780_il2cpp_TypeInfo_var, L_31, L_32);
			}

IL_008d_1:
			{
				bool L_33;
				L_33 = Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438((&V_1), Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438_RuntimeMethod_var);
				if (L_33)
				{
					goto IL_0027_1;
				}
			}
			{
				goto IL_00a6;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a6:
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_34 = ___reader0;
		NullCheck(L_34);
		int32_t L_35;
		L_35 = VirtualFuncInvoker0< int32_t >::Invoke(16 /* Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::get_TokenType() */, L_34);
		V_7 = L_35;
		int32_t L_36 = V_7;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_36, 7)))
		{
			case 0:
			{
				goto IL_00e5;
			}
			case 1:
			{
				goto IL_00e5;
			}
			case 2:
			{
				goto IL_00e5;
			}
			case 3:
			{
				goto IL_00e5;
			}
			case 4:
			{
				goto IL_0142;
			}
			case 5:
			{
				goto IL_0115;
			}
			case 6:
			{
				goto IL_0101;
			}
			case 7:
			{
				goto IL_0115;
			}
			case 8:
			{
				goto IL_0115;
			}
			case 9:
			{
				goto IL_00e5;
			}
			case 10:
			{
				goto IL_00e5;
			}
		}
	}
	{
		goto IL_0115;
	}

IL_00e5:
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_37 = ___reader0;
		il2cpp_codegen_runtime_class_init_inline(XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF_il2cpp_TypeInfo_var);
		String_t* L_38;
		L_38 = XmlNodeConverter_ConvertTokenToXmlValue_m968DB55F5864E99BE9EBE8B3C89B1CFE13ACF458(L_37, NULL);
		V_6 = L_38;
		String_t* L_39 = V_6;
		if (!L_39)
		{
			goto IL_0142;
		}
	}
	{
		RuntimeObject* L_40 = V_0;
		RuntimeObject* L_41 = ___document1;
		String_t* L_42 = V_6;
		NullCheck(L_41);
		RuntimeObject* L_43;
		L_43 = InterfaceFuncInvoker1< RuntimeObject*, String_t* >::Invoke(1 /* Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.IXmlDocument::CreateTextNode(System.String) */, IXmlDocument_tEF9A1A455D7969D9E4EE72346C887F3648F81726_il2cpp_TypeInfo_var, L_41, L_42);
		NullCheck(L_40);
		RuntimeObject* L_44;
		L_44 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(7 /* Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.IXmlNode::AppendChild(Newtonsoft.Json.Converters.IXmlNode) */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_40, L_43);
		return;
	}

IL_0101:
	{
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_45 = ___manager4;
		String_t* L_46 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_47 = ___manager4;
		NullCheck(L_47);
		String_t* L_48;
		L_48 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Xml.XmlNamespaceManager::get_DefaultNamespace() */, L_47);
		NullCheck(L_45);
		VirtualActionInvoker2< String_t*, String_t* >::Invoke(13 /* System.Void System.Xml.XmlNamespaceManager::RemoveNamespace(System.String,System.String) */, L_45, L_46, L_48);
		return;
	}

IL_0115:
	{
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_49 = ___manager4;
		NullCheck(L_49);
		VirtualActionInvoker0::Invoke(10 /* System.Void System.Xml.XmlNamespaceManager::PushScope() */, L_49);
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_50 = ___reader0;
		RuntimeObject* L_51 = ___document1;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_52 = ___manager4;
		RuntimeObject* L_53 = V_0;
		XmlNodeConverter_DeserializeNode_m7CF6B466118CB9E0CF4CAC90CA34BC769B45229C(__this, L_50, L_51, L_52, L_53, NULL);
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_54 = ___manager4;
		NullCheck(L_54);
		bool L_55;
		L_55 = VirtualFuncInvoker0< bool >::Invoke(11 /* System.Boolean System.Xml.XmlNamespaceManager::PopScope() */, L_54);
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_56 = ___manager4;
		String_t* L_57 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_58 = ___manager4;
		NullCheck(L_58);
		String_t* L_59;
		L_59 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Xml.XmlNamespaceManager::get_DefaultNamespace() */, L_58);
		NullCheck(L_56);
		VirtualActionInvoker2< String_t*, String_t* >::Invoke(13 /* System.Void System.Xml.XmlNamespaceManager::RemoveNamespace(System.String,System.String) */, L_56, L_57, L_59);
	}

IL_0142:
	{
		return;
	}
}
// System.Void Newtonsoft.Json.Converters.XmlNodeConverter::AddAttribute(Newtonsoft.Json.JsonReader,Newtonsoft.Json.Converters.IXmlDocument,Newtonsoft.Json.Converters.IXmlNode,System.String,System.String,System.Xml.XmlNamespaceManager,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeConverter_AddAttribute_m01F487BE31278D2909B42C51A8BC7F159A34DAB3 (JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* ___reader0, RuntimeObject* ___document1, RuntimeObject* ___currentNode2, String_t* ___propertyName3, String_t* ___attributeName4, XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* ___manager5, String_t* ___attributePrefix6, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlDocument_tEF9A1A455D7969D9E4EE72346C887F3648F81726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlElement_t48C6FEA57F31ACF88F9D9AB22BDDD0523D1D4780_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	{
		RuntimeObject* L_0 = ___currentNode2;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Xml.XmlNodeType Newtonsoft.Json.Converters.IXmlNode::get_NodeType() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_0);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_0021;
		}
	}
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_2 = ___reader0;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var)));
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_3;
		L_3 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		String_t* L_4 = ___propertyName3;
		String_t* L_5;
		L_5 = StringUtils_FormatWith_m97587965D365EA1584A7D31B57D618E7768073E5(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7659A39A96628D27A60957C9360035C1790C449D)), L_3, L_4, NULL);
		JsonSerializationException_t00F36890DFAC04F2FDE779151340B9C5563612EC* L_6;
		L_6 = JsonSerializationException_Create_m2CA947673DA3524AFC908CFE45478403E0B8E239(L_2, L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlNodeConverter_AddAttribute_m01F487BE31278D2909B42C51A8BC7F159A34DAB3_RuntimeMethod_var)));
	}

IL_0021:
	{
		String_t* L_7 = ___attributeName4;
		il2cpp_codegen_runtime_class_init_inline(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		String_t* L_8;
		L_8 = XmlConvert_EncodeName_m5CDC8BEC5CE63A019C9E7C52AADF9F44B90E6CB5(L_7, NULL);
		V_0 = L_8;
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_9 = ___reader0;
		il2cpp_codegen_runtime_class_init_inline(XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF_il2cpp_TypeInfo_var);
		String_t* L_10;
		L_10 = XmlNodeConverter_ConvertTokenToXmlValue_m968DB55F5864E99BE9EBE8B3C89B1CFE13ACF458(L_9, NULL);
		V_1 = L_10;
		String_t* L_11 = ___attributePrefix6;
		bool L_12;
		L_12 = StringUtils_IsNullOrEmpty_mDB5E4B38C6134F72E602D16501AF88B58C3C67BA(L_11, NULL);
		if (!L_12)
		{
			goto IL_0043;
		}
	}
	{
		RuntimeObject* L_13 = ___document1;
		String_t* L_14 = V_0;
		String_t* L_15 = V_1;
		NullCheck(L_13);
		RuntimeObject* L_16;
		L_16 = InterfaceFuncInvoker2< RuntimeObject*, String_t*, String_t* >::Invoke(10 /* Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.IXmlDocument::CreateAttribute(System.String,System.String) */, IXmlDocument_tEF9A1A455D7969D9E4EE72346C887F3648F81726_il2cpp_TypeInfo_var, L_13, L_14, L_15);
		G_B5_0 = L_16;
		goto IL_0054;
	}

IL_0043:
	{
		RuntimeObject* L_17 = ___document1;
		String_t* L_18 = V_0;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_19 = ___manager5;
		String_t* L_20 = ___attributePrefix6;
		NullCheck(L_19);
		String_t* L_21;
		L_21 = VirtualFuncInvoker1< String_t*, String_t* >::Invoke(16 /* System.String System.Xml.XmlNamespaceManager::LookupNamespace(System.String) */, L_19, L_20);
		String_t* L_22 = V_1;
		NullCheck(L_17);
		RuntimeObject* L_23;
		L_23 = InterfaceFuncInvoker3< RuntimeObject*, String_t*, String_t*, String_t* >::Invoke(11 /* Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.IXmlDocument::CreateAttribute(System.String,System.String,System.String) */, IXmlDocument_tEF9A1A455D7969D9E4EE72346C887F3648F81726_il2cpp_TypeInfo_var, L_17, L_18, L_21, L_22);
		G_B5_0 = L_23;
	}

IL_0054:
	{
		V_2 = G_B5_0;
		RuntimeObject* L_24 = ___currentNode2;
		RuntimeObject* L_25 = V_2;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_24, IXmlElement_t48C6FEA57F31ACF88F9D9AB22BDDD0523D1D4780_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(0 /* System.Void Newtonsoft.Json.Converters.IXmlElement::SetAttributeNode(Newtonsoft.Json.Converters.IXmlNode) */, IXmlElement_t48C6FEA57F31ACF88F9D9AB22BDDD0523D1D4780_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_24, IXmlElement_t48C6FEA57F31ACF88F9D9AB22BDDD0523D1D4780_il2cpp_TypeInfo_var)), L_25);
		return;
	}
}
// System.String Newtonsoft.Json.Converters.XmlNodeConverter::ConvertTokenToXmlValue(Newtonsoft.Json.JsonReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlNodeConverter_ConvertTokenToXmlValue_m968DB55F5864E99BE9EBE8B3C89B1CFE13ACF458 (JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeUtils_t08EF5030CF29329A3646A81F48D1F440A6234121_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 V_5;
	memset((&V_5), 0, sizeof(V_5));
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_6;
	memset((&V_6), 0, sizeof(V_6));
	RuntimeObject* G_B4_0 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_0 = ___reader0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(16 /* Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::get_TokenType() */, L_0);
		V_1 = L_1;
		int32_t L_2 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_2, 7)))
		{
			case 0:
			{
				goto IL_0052;
			}
			case 1:
			{
				goto IL_008b;
			}
			case 2:
			{
				goto IL_0040;
			}
			case 3:
			{
				goto IL_00dd;
			}
			case 4:
			{
				goto IL_0149;
			}
			case 5:
			{
				goto IL_014b;
			}
			case 6:
			{
				goto IL_014b;
			}
			case 7:
			{
				goto IL_014b;
			}
			case 8:
			{
				goto IL_014b;
			}
			case 9:
			{
				goto IL_00f3;
			}
			case 10:
			{
				goto IL_0138;
			}
		}
	}
	{
		goto IL_014b;
	}

IL_0040:
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_3 = ___reader0;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(17 /* System.Object Newtonsoft.Json.JsonReader::get_Value() */, L_3);
		RuntimeObject* L_5 = L_4;
		G_B3_0 = L_5;
		if (L_5)
		{
			G_B4_0 = L_5;
			goto IL_004c;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_004c:
	{
		NullCheck(G_B4_0);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B4_0);
		return L_6;
	}

IL_0052:
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_7 = ___reader0;
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(17 /* System.Object Newtonsoft.Json.JsonReader::get_Value() */, L_7);
		V_2 = L_8;
		RuntimeObject* L_9 = V_2;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_9, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var)))
		{
			goto IL_0075;
		}
	}
	{
		RuntimeObject* L_10 = V_2;
		V_0 = ((*(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F*)((BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F*)(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F*)UnBox(L_10, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var))));
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_11;
		L_11 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		String_t* L_12;
		L_12 = BigInteger_ToString_mD17ED938094AEF4030E39A2F95C7C7834C6F70BB((&V_0), L_11, NULL);
		return L_12;
	}

IL_0075:
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_13 = ___reader0;
		NullCheck(L_13);
		RuntimeObject* L_14;
		L_14 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(17 /* System.Object Newtonsoft.Json.JsonReader::get_Value() */, L_13);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_15;
		L_15 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int64_t L_16;
		L_16 = Convert_ToInt64_m6CA00ABB70FAD8242C62ED9913F7D7C3B811FC31(L_14, L_15, NULL);
		il2cpp_codegen_runtime_class_init_inline(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		String_t* L_17;
		L_17 = XmlConvert_ToString_mFC2B58A063E63501E3CB452206B18C317E2782A9(L_16, NULL);
		return L_17;
	}

IL_008b:
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_18 = ___reader0;
		NullCheck(L_18);
		RuntimeObject* L_19;
		L_19 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(17 /* System.Object Newtonsoft.Json.JsonReader::get_Value() */, L_18);
		V_2 = L_19;
		RuntimeObject* L_20 = V_2;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_20, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var)))
		{
			goto IL_00a8;
		}
	}
	{
		RuntimeObject* L_21 = V_2;
		V_3 = ((*(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F*)((Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F*)(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F*)UnBox(L_21, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var))));
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_22 = V_3;
		il2cpp_codegen_runtime_class_init_inline(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		String_t* L_23;
		L_23 = XmlConvert_ToString_m4EE078C46CC4FF023E0286740CFE95E945C5185E(L_22, NULL);
		return L_23;
	}

IL_00a8:
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_24 = ___reader0;
		NullCheck(L_24);
		RuntimeObject* L_25;
		L_25 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(17 /* System.Object Newtonsoft.Json.JsonReader::get_Value() */, L_24);
		V_2 = L_25;
		RuntimeObject* L_26 = V_2;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_26, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var)))
		{
			goto IL_00c7;
		}
	}
	{
		RuntimeObject* L_27 = V_2;
		V_4 = ((*(float*)((float*)(float*)UnBox(L_27, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var))));
		float L_28 = V_4;
		il2cpp_codegen_runtime_class_init_inline(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		String_t* L_29;
		L_29 = XmlConvert_ToString_m0A47C3C098CDB47726C29D7A70B7349D6DA57555(L_28, NULL);
		return L_29;
	}

IL_00c7:
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_30 = ___reader0;
		NullCheck(L_30);
		RuntimeObject* L_31;
		L_31 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(17 /* System.Object Newtonsoft.Json.JsonReader::get_Value() */, L_30);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_32;
		L_32 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		double L_33;
		L_33 = Convert_ToDouble_m8DED60F2E0251A3D389F1DD22AA5AF9CD440ABE8(L_31, L_32, NULL);
		il2cpp_codegen_runtime_class_init_inline(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		String_t* L_34;
		L_34 = XmlConvert_ToString_m04C12A2A45109D8E79C729DE12EF0A29301C2A2B(L_33, NULL);
		return L_34;
	}

IL_00dd:
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_35 = ___reader0;
		NullCheck(L_35);
		RuntimeObject* L_36;
		L_36 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(17 /* System.Object Newtonsoft.Json.JsonReader::get_Value() */, L_35);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_37;
		L_37 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		bool L_38;
		L_38 = Convert_ToBoolean_m0E8AE169ABC127B0A317EE6312A04BC1F8AB4C63(L_36, L_37, NULL);
		il2cpp_codegen_runtime_class_init_inline(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		String_t* L_39;
		L_39 = XmlConvert_ToString_mD598BDDD270BE18CCBABE0569FF42529F06ADADF(L_38, NULL);
		return L_39;
	}

IL_00f3:
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_40 = ___reader0;
		NullCheck(L_40);
		RuntimeObject* L_41;
		L_41 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(17 /* System.Object Newtonsoft.Json.JsonReader::get_Value() */, L_40);
		V_2 = L_41;
		RuntimeObject* L_42 = V_2;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_42, DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var)))
		{
			goto IL_0112;
		}
	}
	{
		RuntimeObject* L_43 = V_2;
		V_5 = ((*(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4*)((DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4*)(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4*)UnBox(L_43, DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var))));
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_44 = V_5;
		il2cpp_codegen_runtime_class_init_inline(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		String_t* L_45;
		L_45 = XmlConvert_ToString_m94540B3F4E815CA0CEDD0B655248460FD19E419A(L_44, NULL);
		return L_45;
	}

IL_0112:
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_46 = ___reader0;
		NullCheck(L_46);
		RuntimeObject* L_47;
		L_47 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(17 /* System.Object Newtonsoft.Json.JsonReader::get_Value() */, L_46);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_48;
		L_48 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_49;
		L_49 = Convert_ToDateTime_m773A330A58097085E94630181F3A77B9F0963327(L_47, L_48, NULL);
		V_6 = L_49;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_50 = V_6;
		int32_t L_51;
		L_51 = DateTime_get_Kind_m83D45222D9386873333A178B9AB31AC2B2F2C993((&V_6), NULL);
		il2cpp_codegen_runtime_class_init_inline(DateTimeUtils_t08EF5030CF29329A3646A81F48D1F440A6234121_il2cpp_TypeInfo_var);
		int32_t L_52;
		L_52 = DateTimeUtils_ToSerializationMode_m91B5EE22B7ED390567F3EBA783285F6218D17AE6(L_51, NULL);
		il2cpp_codegen_runtime_class_init_inline(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		String_t* L_53;
		L_53 = XmlConvert_ToString_mCD438E48326A2EECD1839100F45A2626B3B65598(L_50, L_52, NULL);
		return L_53;
	}

IL_0138:
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_54 = ___reader0;
		NullCheck(L_54);
		RuntimeObject* L_55;
		L_55 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(17 /* System.Object Newtonsoft.Json.JsonReader::get_Value() */, L_54);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		String_t* L_56;
		L_56 = Convert_ToBase64String_mD0680EF77270244071965AFA1207921C73EEA323(((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)Castclass((RuntimeObject*)L_55, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var)), NULL);
		return L_56;
	}

IL_0149:
	{
		return (String_t*)NULL;
	}

IL_014b:
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_57 = ___reader0;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var)));
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_58;
		L_58 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_59 = ___reader0;
		NullCheck(L_59);
		int32_t L_60;
		L_60 = VirtualFuncInvoker0< int32_t >::Invoke(16 /* Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::get_TokenType() */, L_59);
		int32_t L_61 = L_60;
		RuntimeObject* L_62 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonToken_t00B2B3F98FB3E9A8DE72409901BED1C7F1670BD5_il2cpp_TypeInfo_var)), &L_61);
		String_t* L_63;
		L_63 = StringUtils_FormatWith_m97587965D365EA1584A7D31B57D618E7768073E5(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral22DA2AE2AAC47006D97A25A98C6CDC909DE59894)), L_58, L_62, NULL);
		JsonSerializationException_t00F36890DFAC04F2FDE779151340B9C5563612EC* L_64;
		L_64 = JsonSerializationException_Create_m2CA947673DA3524AFC908CFE45478403E0B8E239(L_57, L_63, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_64, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlNodeConverter_ConvertTokenToXmlValue_m968DB55F5864E99BE9EBE8B3C89B1CFE13ACF458_RuntimeMethod_var)));
	}
}
// System.Void Newtonsoft.Json.Converters.XmlNodeConverter::ReadArrayElements(Newtonsoft.Json.JsonReader,Newtonsoft.Json.Converters.IXmlDocument,System.String,Newtonsoft.Json.Converters.IXmlNode,System.Xml.XmlNamespaceManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeConverter_ReadArrayElements_m3A4E70784167D3D49FB40746E404602CA282B3D6 (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* ___reader0, RuntimeObject* ___document1, String_t* ___propertyName2, RuntimeObject* ___currentNode3, XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* ___manager4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mC2891A1E295FEF8B5B64E96EB62B5945149DF7BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m8A802F6DDB7EA4435FEE6877988C792B8B583F88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m894DFFA678072980ECF786B52912E28891E006DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlElement_t48C6FEA57F31ACF88F9D9AB22BDDD0523D1D4780_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m8E48B727D08C794BA9EB42BB47747FD56F55C10E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	Enumerator_t5D6B89D2864E6CA1D667C75E2375831735B2B941 V_3;
	memset((&V_3), 0, sizeof(V_3));
	RuntimeObject* V_4 = NULL;
	{
		String_t* L_0 = ___propertyName2;
		String_t* L_1;
		L_1 = MiscellaneousUtils_GetPrefix_mD4530D3BF776EA4ECCFF1888BBD2ECDE9F2DC1CF(L_0, NULL);
		V_0 = L_1;
		String_t* L_2 = ___propertyName2;
		RuntimeObject* L_3 = ___document1;
		String_t* L_4 = V_0;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_5 = ___manager4;
		RuntimeObject* L_6;
		L_6 = XmlNodeConverter_CreateElement_mD8BF7ADE4CB3682433E964C9986042FFE403FE65(__this, L_2, L_3, L_4, L_5, NULL);
		V_1 = L_6;
		RuntimeObject* L_7 = ___currentNode3;
		RuntimeObject* L_8 = V_1;
		NullCheck(L_7);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(7 /* Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.IXmlNode::AppendChild(Newtonsoft.Json.Converters.IXmlNode) */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_7, L_8);
		V_2 = 0;
		goto IL_0030;
	}

IL_0020:
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_10 = ___reader0;
		RuntimeObject* L_11 = ___document1;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_12 = ___manager4;
		String_t* L_13 = ___propertyName2;
		RuntimeObject* L_14 = V_1;
		XmlNodeConverter_DeserializeValue_m6D20454FDBBEEE2CABB0ED3EC1BCF8F2E0067AF0(__this, L_10, L_11, L_12, L_13, L_14, NULL);
		int32_t L_15 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0030:
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_16 = ___reader0;
		NullCheck(L_16);
		bool L_17;
		L_17 = VirtualFuncInvoker0< bool >::Invoke(21 /* System.Boolean Newtonsoft.Json.JsonReader::Read() */, L_16);
		if (!L_17)
		{
			goto IL_0042;
		}
	}
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_18 = ___reader0;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = VirtualFuncInvoker0< int32_t >::Invoke(16 /* Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::get_TokenType() */, L_18);
		if ((!(((uint32_t)L_19) == ((uint32_t)((int32_t)14)))))
		{
			goto IL_0020;
		}
	}

IL_0042:
	{
		bool L_20;
		L_20 = XmlNodeConverter_get_WriteArrayAttribute_mB90AAB6C83E3DFD4E0F0FE8DBB9BF151248378F2_inline(__this, NULL);
		if (!L_20)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_21 = V_1;
		RuntimeObject* L_22 = ___document1;
		XmlNodeConverter_AddJsonArrayAttribute_m2B9B98BC1EC11FEDB63C71314C1FD3312E20A800(__this, L_21, L_22, NULL);
	}

IL_0052:
	{
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_23) == ((uint32_t)1))))
		{
			goto IL_00b1;
		}
	}
	{
		bool L_24;
		L_24 = XmlNodeConverter_get_WriteArrayAttribute_mB90AAB6C83E3DFD4E0F0FE8DBB9BF151248378F2_inline(__this, NULL);
		if (!L_24)
		{
			goto IL_00b1;
		}
	}
	{
		RuntimeObject* L_25 = V_1;
		NullCheck(L_25);
		List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_26;
		L_26 = InterfaceFuncInvoker0< List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* >::Invoke(2 /* System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode> Newtonsoft.Json.Converters.IXmlNode::get_ChildNodes() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_25);
		NullCheck(L_26);
		Enumerator_t5D6B89D2864E6CA1D667C75E2375831735B2B941 L_27;
		L_27 = List_1_GetEnumerator_m8E48B727D08C794BA9EB42BB47747FD56F55C10E(L_26, List_1_GetEnumerator_m8E48B727D08C794BA9EB42BB47747FD56F55C10E_RuntimeMethod_var);
		V_3 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00a3:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mC2891A1E295FEF8B5B64E96EB62B5945149DF7BD((&V_3), Enumerator_Dispose_mC2891A1E295FEF8B5B64E96EB62B5945149DF7BD_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0098_1;
			}

IL_006c_1:
			{
				RuntimeObject* L_28;
				L_28 = Enumerator_get_Current_m894DFFA678072980ECF786B52912E28891E006DB_inline((&V_3), Enumerator_get_Current_m894DFFA678072980ECF786B52912E28891E006DB_RuntimeMethod_var);
				V_4 = ((RuntimeObject*)IsInst((RuntimeObject*)L_28, IXmlElement_t48C6FEA57F31ACF88F9D9AB22BDDD0523D1D4780_il2cpp_TypeInfo_var));
				RuntimeObject* L_29 = V_4;
				if (!L_29)
				{
					goto IL_0098_1;
				}
			}
			{
				RuntimeObject* L_30 = V_4;
				NullCheck(L_30);
				String_t* L_31;
				L_31 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String Newtonsoft.Json.Converters.IXmlNode::get_LocalName() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_30);
				String_t* L_32 = ___propertyName2;
				bool L_33;
				L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_31, L_32, NULL);
				if (!L_33)
				{
					goto IL_0098_1;
				}
			}
			{
				RuntimeObject* L_34 = V_4;
				RuntimeObject* L_35 = ___document1;
				XmlNodeConverter_AddJsonArrayAttribute_m2B9B98BC1EC11FEDB63C71314C1FD3312E20A800(__this, L_34, L_35, NULL);
				goto IL_00b1;
			}

IL_0098_1:
			{
				bool L_36;
				L_36 = Enumerator_MoveNext_m8A802F6DDB7EA4435FEE6877988C792B8B583F88((&V_3), Enumerator_MoveNext_m8A802F6DDB7EA4435FEE6877988C792B8B583F88_RuntimeMethod_var);
				if (L_36)
				{
					goto IL_006c_1;
				}
			}
			{
				goto IL_00b1;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b1:
	{
		return;
	}
}
// System.Void Newtonsoft.Json.Converters.XmlNodeConverter::AddJsonArrayAttribute(Newtonsoft.Json.Converters.IXmlElement,Newtonsoft.Json.Converters.IXmlDocument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeConverter_AddJsonArrayAttribute_m2B9B98BC1EC11FEDB63C71314C1FD3312E20A800 (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, RuntimeObject* ___element0, RuntimeObject* ___document1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlDocument_tEF9A1A455D7969D9E4EE72346C887F3648F81726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlElement_t48C6FEA57F31ACF88F9D9AB22BDDD0523D1D4780_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XElementWrapper_t15082EFC96DF60AC9ACF10A1D60C1E04207FCA61_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral125BCB7A4232428BFD5FFB1F3E5905A4F6B0B075);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral420B74A52534550B0DD14DCF7D8988C2BD4936CE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9A514EDAC534931C94A111265660666E05658496);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB970001F19051B486F81469B35F4DBB22AAD54E);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___element0;
		RuntimeObject* L_1 = ___document1;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker3< RuntimeObject*, String_t*, String_t*, String_t* >::Invoke(11 /* Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.IXmlDocument::CreateAttribute(System.String,System.String,System.String) */, IXmlDocument_tEF9A1A455D7969D9E4EE72346C887F3648F81726_il2cpp_TypeInfo_var, L_1, _stringLiteral9A514EDAC534931C94A111265660666E05658496, _stringLiteral125BCB7A4232428BFD5FFB1F3E5905A4F6B0B075, _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(0 /* System.Void Newtonsoft.Json.Converters.IXmlElement::SetAttributeNode(Newtonsoft.Json.Converters.IXmlNode) */, IXmlElement_t48C6FEA57F31ACF88F9D9AB22BDDD0523D1D4780_il2cpp_TypeInfo_var, L_0, L_2);
		RuntimeObject* L_3 = ___element0;
		if (!((XElementWrapper_t15082EFC96DF60AC9ACF10A1D60C1E04207FCA61*)IsInstClass((RuntimeObject*)L_3, XElementWrapper_t15082EFC96DF60AC9ACF10A1D60C1E04207FCA61_il2cpp_TypeInfo_var)))
		{
			goto IL_004b;
		}
	}
	{
		RuntimeObject* L_4 = ___element0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = InterfaceFuncInvoker1< String_t*, String_t* >::Invoke(1 /* System.String Newtonsoft.Json.Converters.IXmlElement::GetPrefixOfNamespace(System.String) */, IXmlElement_t48C6FEA57F31ACF88F9D9AB22BDDD0523D1D4780_il2cpp_TypeInfo_var, L_4, _stringLiteral125BCB7A4232428BFD5FFB1F3E5905A4F6B0B075);
		if (L_5)
		{
			goto IL_004b;
		}
	}
	{
		RuntimeObject* L_6 = ___element0;
		RuntimeObject* L_7 = ___document1;
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker3< RuntimeObject*, String_t*, String_t*, String_t* >::Invoke(11 /* Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.IXmlDocument::CreateAttribute(System.String,System.String,System.String) */, IXmlDocument_tEF9A1A455D7969D9E4EE72346C887F3648F81726_il2cpp_TypeInfo_var, L_7, _stringLiteralEB970001F19051B486F81469B35F4DBB22AAD54E, _stringLiteral420B74A52534550B0DD14DCF7D8988C2BD4936CE, _stringLiteral125BCB7A4232428BFD5FFB1F3E5905A4F6B0B075);
		NullCheck(L_6);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(0 /* System.Void Newtonsoft.Json.Converters.IXmlElement::SetAttributeNode(Newtonsoft.Json.Converters.IXmlNode) */, IXmlElement_t48C6FEA57F31ACF88F9D9AB22BDDD0523D1D4780_il2cpp_TypeInfo_var, L_6, L_8);
	}

IL_004b:
	{
		return;
	}
}
// System.Boolean Newtonsoft.Json.Converters.XmlNodeConverter::ShouldReadInto(Newtonsoft.Json.JsonReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlNodeConverter_ShouldReadInto_m9A0AE80AECBB978CB0863E0092917AF59FDC6F8D (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* ___reader0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_0 = ___reader0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(16 /* Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::get_TokenType() */, L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_2, 3)))
		{
			case 0:
			{
				goto IL_004d;
			}
			case 1:
			{
				goto IL_004f;
			}
			case 2:
			{
				goto IL_004f;
			}
			case 3:
			{
				goto IL_004f;
			}
			case 4:
			{
				goto IL_004d;
			}
			case 5:
			{
				goto IL_004d;
			}
			case 6:
			{
				goto IL_004d;
			}
			case 7:
			{
				goto IL_004d;
			}
			case 8:
			{
				goto IL_004d;
			}
			case 9:
			{
				goto IL_004f;
			}
			case 10:
			{
				goto IL_004f;
			}
			case 11:
			{
				goto IL_004f;
			}
			case 12:
			{
				goto IL_004f;
			}
			case 13:
			{
				goto IL_004d;
			}
			case 14:
			{
				goto IL_004d;
			}
		}
	}
	{
		goto IL_004f;
	}

IL_004d:
	{
		return (bool)0;
	}

IL_004f:
	{
		return (bool)1;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> Newtonsoft.Json.Converters.XmlNodeConverter::ReadAttributeElements(Newtonsoft.Json.JsonReader,System.Xml.XmlNamespaceManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* XmlNodeConverter_ReadAttributeElements_m9B56D685A23448B661C73F3483B9B4063D55C049 (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* ___reader0, XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* ___manager1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_ToString_m5FDC0CBE068DB2893454257CE6E29846D47B3038_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral042D5257625C9358C840FA1BA4A978DC0470104F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral11F941DFBA062769D6F047F85D846335446DFB0E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral125BCB7A4232428BFD5FFB1F3E5905A4F6B0B075);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1298EC2264C4F9A0D3A04140873D9D01F481050B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral43187C90BBB5DFB063A95733C9BD65ECD25A2E84);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral450A121B534CE8146DA53AF9EA5328F6753B270F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA05B74022DC98A669248CD353ADDBD7AADAD4AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF96282F5D84FC9B754994ADCFE65DAE2088A7382);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	Il2CppChar V_4 = 0x0;
	String_t* V_5 = NULL;
	String_t* V_6 = NULL;
	String_t* V_7 = NULL;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_8;
	memset((&V_8), 0, sizeof(V_8));
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_9;
	memset((&V_9), 0, sizeof(V_9));
	int32_t V_10 = 0;
	RuntimeObject* G_B32_0 = NULL;
	RuntimeObject* G_B31_0 = NULL;
	String_t* G_B33_0 = NULL;
	{
		V_0 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)NULL;
		V_1 = (bool)0;
		goto IL_023a;
	}

IL_0009:
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_0 = ___reader0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(16 /* Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::get_TokenType() */, L_0);
		V_3 = L_1;
		int32_t L_2 = V_3;
		if ((((int32_t)L_2) == ((int32_t)4)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_3 = V_3;
		if ((((int32_t)L_3) == ((int32_t)5)))
		{
			goto IL_0210;
		}
	}
	{
		int32_t L_4 = V_3;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)13))))
		{
			goto IL_0210;
		}
	}
	{
		goto IL_0214;
	}

IL_0028:
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_5 = ___reader0;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(17 /* System.Object Newtonsoft.Json.JsonReader::get_Value() */, L_5);
		NullCheck(L_6);
		String_t* L_7;
		L_7 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
		V_2 = L_7;
		String_t* L_8 = V_2;
		bool L_9;
		L_9 = StringUtils_IsNullOrEmpty_mDB5E4B38C6134F72E602D16501AF88B58C3C67BA(L_8, NULL);
		if (L_9)
		{
			goto IL_020c;
		}
	}
	{
		String_t* L_10 = V_2;
		NullCheck(L_10);
		Il2CppChar L_11;
		L_11 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_10, 0, NULL);
		V_4 = L_11;
		Il2CppChar L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)36))))
		{
			goto IL_009c;
		}
	}
	{
		Il2CppChar L_13 = V_4;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)64)))))
		{
			goto IL_0208;
		}
	}
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_14 = V_0;
		if (L_14)
		{
			goto IL_0060;
		}
	}
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_15 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_15, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		V_0 = L_15;
	}

IL_0060:
	{
		String_t* L_16 = V_2;
		NullCheck(L_16);
		String_t* L_17;
		L_17 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_16, 1, NULL);
		V_2 = L_17;
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_18 = ___reader0;
		NullCheck(L_18);
		JsonReader_ReadAndAssert_m8E4307CFC38DA6E98E818C3058CCE2E385DC9EB7(L_18, NULL);
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_19 = ___reader0;
		il2cpp_codegen_runtime_class_init_inline(XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF_il2cpp_TypeInfo_var);
		String_t* L_20;
		L_20 = XmlNodeConverter_ConvertTokenToXmlValue_m968DB55F5864E99BE9EBE8B3C89B1CFE13ACF458(L_19, NULL);
		V_5 = L_20;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_21 = V_0;
		String_t* L_22 = V_2;
		String_t* L_23 = V_5;
		NullCheck(L_21);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_21, L_22, L_23, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		String_t* L_24 = V_2;
		bool L_25;
		L_25 = XmlNodeConverter_IsNamespaceAttribute_mD9C356F879F0FF7F1006E34842F95ADE42128868(__this, L_24, (&V_6), NULL);
		if (!L_25)
		{
			goto IL_023a;
		}
	}
	{
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_26 = ___manager1;
		String_t* L_27 = V_6;
		String_t* L_28 = V_5;
		NullCheck(L_26);
		VirtualActionInvoker2< String_t*, String_t* >::Invoke(12 /* System.Void System.Xml.XmlNamespaceManager::AddNamespace(System.String,System.String) */, L_26, L_27, L_28);
		goto IL_023a;
	}

IL_009c:
	{
		String_t* L_29 = V_2;
		bool L_30;
		L_30 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_29, _stringLiteral1298EC2264C4F9A0D3A04140873D9D01F481050B, NULL);
		if (L_30)
		{
			goto IL_00e0;
		}
	}
	{
		String_t* L_31 = V_2;
		bool L_32;
		L_32 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_31, _stringLiteralEA05B74022DC98A669248CD353ADDBD7AADAD4AA, NULL);
		if (L_32)
		{
			goto IL_00e0;
		}
	}
	{
		String_t* L_33 = V_2;
		bool L_34;
		L_34 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_33, _stringLiteralF96282F5D84FC9B754994ADCFE65DAE2088A7382, NULL);
		if (L_34)
		{
			goto IL_00e0;
		}
	}
	{
		String_t* L_35 = V_2;
		bool L_36;
		L_36 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_35, _stringLiteral11F941DFBA062769D6F047F85D846335446DFB0E, NULL);
		if (L_36)
		{
			goto IL_00e0;
		}
	}
	{
		String_t* L_37 = V_2;
		bool L_38;
		L_38 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_37, _stringLiteral042D5257625C9358C840FA1BA4A978DC0470104F, NULL);
		if (!L_38)
		{
			goto IL_0204;
		}
	}

IL_00e0:
	{
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_39 = ___manager1;
		NullCheck(L_39);
		String_t* L_40;
		L_40 = VirtualFuncInvoker1< String_t*, String_t* >::Invoke(17 /* System.String System.Xml.XmlNamespaceManager::LookupPrefix(System.String) */, L_39, _stringLiteral125BCB7A4232428BFD5FFB1F3E5905A4F6B0B075);
		V_7 = L_40;
		String_t* L_41 = V_7;
		if (L_41)
		{
			goto IL_017b;
		}
	}
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_42 = V_0;
		if (L_42)
		{
			goto IL_00fd;
		}
	}
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_43 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_43);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_43, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		V_0 = L_43;
	}

IL_00fd:
	{
		il2cpp_codegen_initobj((&V_8), sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
		goto IL_0117;
	}

IL_0107:
	{
		int32_t L_44;
		L_44 = Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_inline((&V_8), Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var);
		Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703((&V_8), ((int32_t)il2cpp_codegen_add(L_44, 1)), Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
	}

IL_0117:
	{
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_45 = ___manager1;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_46 = V_8;
		V_9 = L_46;
		String_t* L_47;
		L_47 = Nullable_1_ToString_m5FDC0CBE068DB2893454257CE6E29846D47B3038((&V_9), Nullable_1_ToString_m5FDC0CBE068DB2893454257CE6E29846D47B3038_RuntimeMethod_var);
		String_t* L_48;
		L_48 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral43187C90BBB5DFB063A95733C9BD65ECD25A2E84, L_47, NULL);
		NullCheck(L_45);
		String_t* L_49;
		L_49 = VirtualFuncInvoker1< String_t*, String_t* >::Invoke(16 /* System.String System.Xml.XmlNamespaceManager::LookupNamespace(System.String) */, L_45, L_48);
		if (L_49)
		{
			goto IL_0107;
		}
	}
	{
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_50 = V_8;
		V_9 = L_50;
		String_t* L_51;
		L_51 = Nullable_1_ToString_m5FDC0CBE068DB2893454257CE6E29846D47B3038((&V_9), Nullable_1_ToString_m5FDC0CBE068DB2893454257CE6E29846D47B3038_RuntimeMethod_var);
		String_t* L_52;
		L_52 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral43187C90BBB5DFB063A95733C9BD65ECD25A2E84, L_51, NULL);
		V_7 = L_52;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_53 = V_0;
		String_t* L_54 = V_7;
		String_t* L_55;
		L_55 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral450A121B534CE8146DA53AF9EA5328F6753B270F, L_54, NULL);
		NullCheck(L_53);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_53, L_55, _stringLiteral125BCB7A4232428BFD5FFB1F3E5905A4F6B0B075, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_56 = ___manager1;
		String_t* L_57 = V_7;
		NullCheck(L_56);
		VirtualActionInvoker2< String_t*, String_t* >::Invoke(12 /* System.Void System.Xml.XmlNamespaceManager::AddNamespace(System.String,System.String) */, L_56, L_57, _stringLiteral125BCB7A4232428BFD5FFB1F3E5905A4F6B0B075);
	}

IL_017b:
	{
		String_t* L_58 = V_2;
		bool L_59;
		L_59 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_58, _stringLiteral1298EC2264C4F9A0D3A04140873D9D01F481050B, NULL);
		if (!L_59)
		{
			goto IL_018f;
		}
	}
	{
		V_1 = (bool)1;
		goto IL_023a;
	}

IL_018f:
	{
		String_t* L_60 = V_2;
		NullCheck(L_60);
		String_t* L_61;
		L_61 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_60, 1, NULL);
		V_2 = L_61;
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_62 = ___reader0;
		NullCheck(L_62);
		JsonReader_ReadAndAssert_m8E4307CFC38DA6E98E818C3058CCE2E385DC9EB7(L_62, NULL);
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_63 = ___reader0;
		NullCheck(L_63);
		int32_t L_64;
		L_64 = VirtualFuncInvoker0< int32_t >::Invoke(16 /* Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::get_TokenType() */, L_63);
		bool L_65;
		L_65 = JsonTokenUtils_IsPrimitiveToken_m97DBA2150C205005AA33809D4355769E9ED1BB2B(L_64, NULL);
		if (L_65)
		{
			goto IL_01d0;
		}
	}
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_66 = ___reader0;
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_67 = ___reader0;
		NullCheck(L_67);
		int32_t L_68;
		L_68 = VirtualFuncInvoker0< int32_t >::Invoke(16 /* Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::get_TokenType() */, L_67);
		V_10 = L_68;
		Il2CppFakeBox<int32_t> L_69(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonToken_t00B2B3F98FB3E9A8DE72409901BED1C7F1670BD5_il2cpp_TypeInfo_var)), (&V_10));
		String_t* L_70;
		L_70 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_69), NULL);
		String_t* L_71;
		L_71 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral75842F038DF44EADD0CCA67D4F35D7BA0B0D7A4D)), L_70, NULL);
		JsonSerializationException_t00F36890DFAC04F2FDE779151340B9C5563612EC* L_72;
		L_72 = JsonSerializationException_Create_m2CA947673DA3524AFC908CFE45478403E0B8E239(L_66, L_71, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_72, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlNodeConverter_ReadAttributeElements_m9B56D685A23448B661C73F3483B9B4063D55C049_RuntimeMethod_var)));
	}

IL_01d0:
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_73 = V_0;
		if (L_73)
		{
			goto IL_01d9;
		}
	}
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_74 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_74);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_74, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		V_0 = L_74;
	}

IL_01d9:
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_75 = ___reader0;
		NullCheck(L_75);
		RuntimeObject* L_76;
		L_76 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(17 /* System.Object Newtonsoft.Json.JsonReader::get_Value() */, L_75);
		RuntimeObject* L_77 = L_76;
		G_B31_0 = L_77;
		if (L_77)
		{
			G_B32_0 = L_77;
			goto IL_01e6;
		}
	}
	{
		G_B33_0 = ((String_t*)(NULL));
		goto IL_01eb;
	}

IL_01e6:
	{
		NullCheck(G_B32_0);
		String_t* L_78;
		L_78 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B32_0);
		G_B33_0 = L_78;
	}

IL_01eb:
	{
		V_5 = G_B33_0;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_79 = V_0;
		String_t* L_80 = V_7;
		String_t* L_81 = V_2;
		String_t* L_82;
		L_82 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_80, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D, L_81, NULL);
		String_t* L_83 = V_5;
		NullCheck(L_79);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_79, L_82, L_83, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		goto IL_023a;
	}

IL_0204:
	{
		V_1 = (bool)1;
		goto IL_023a;
	}

IL_0208:
	{
		V_1 = (bool)1;
		goto IL_023a;
	}

IL_020c:
	{
		V_1 = (bool)1;
		goto IL_023a;
	}

IL_0210:
	{
		V_1 = (bool)1;
		goto IL_023a;
	}

IL_0214:
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_84 = ___reader0;
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_85 = ___reader0;
		NullCheck(L_85);
		int32_t L_86;
		L_86 = VirtualFuncInvoker0< int32_t >::Invoke(16 /* Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::get_TokenType() */, L_85);
		V_10 = L_86;
		Il2CppFakeBox<int32_t> L_87(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonToken_t00B2B3F98FB3E9A8DE72409901BED1C7F1670BD5_il2cpp_TypeInfo_var)), (&V_10));
		String_t* L_88;
		L_88 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_87), NULL);
		String_t* L_89;
		L_89 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral75842F038DF44EADD0CCA67D4F35D7BA0B0D7A4D)), L_88, NULL);
		JsonSerializationException_t00F36890DFAC04F2FDE779151340B9C5563612EC* L_90;
		L_90 = JsonSerializationException_Create_m2CA947673DA3524AFC908CFE45478403E0B8E239(L_84, L_89, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_90, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlNodeConverter_ReadAttributeElements_m9B56D685A23448B661C73F3483B9B4063D55C049_RuntimeMethod_var)));
	}

IL_023a:
	{
		bool L_91 = V_1;
		if (L_91)
		{
			goto IL_0248;
		}
	}
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_92 = ___reader0;
		NullCheck(L_92);
		bool L_93;
		L_93 = VirtualFuncInvoker0< bool >::Invoke(21 /* System.Boolean Newtonsoft.Json.JsonReader::Read() */, L_92);
		if (L_93)
		{
			goto IL_0009;
		}
	}

IL_0248:
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_94 = V_0;
		return L_94;
	}
}
// System.Void Newtonsoft.Json.Converters.XmlNodeConverter::CreateInstruction(Newtonsoft.Json.JsonReader,Newtonsoft.Json.Converters.IXmlDocument,Newtonsoft.Json.Converters.IXmlNode,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeConverter_CreateInstruction_m7A5C6039FEC825B248B75841D11C1DB284F78006 (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* ___reader0, RuntimeObject* ___document1, RuntimeObject* ___currentNode2, String_t* ___propertyName3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlDocument_tEF9A1A455D7969D9E4EE72346C887F3648F81726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F62B3631B3843128CF8C3FF2A6EB6BB8DA4B062);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral539E31D9C32242C0883451A9A8DE262A8C813564);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5EE58BA1E5ECB5C3AED8D32D9B6DA7CB39BB4E47);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE7CCD8078E8A58A921106F3AF064603AB958A11A);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B5_0 = NULL;
	RuntimeObject* G_B14_0 = NULL;
	String_t* G_B14_1 = NULL;
	JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* G_B14_2 = NULL;
	RuntimeObject* G_B13_0 = NULL;
	String_t* G_B13_1 = NULL;
	JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* G_B13_2 = NULL;
	String_t* G_B15_0 = NULL;
	String_t* G_B15_1 = NULL;
	JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* G_B15_2 = NULL;
	{
		String_t* L_0 = ___propertyName3;
		bool L_1;
		L_1 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, _stringLiteral5EE58BA1E5ECB5C3AED8D32D9B6DA7CB39BB4E47, NULL);
		if (!L_1)
		{
			goto IL_00d4;
		}
	}
	{
		V_0 = (String_t*)NULL;
		V_1 = (String_t*)NULL;
		V_2 = (String_t*)NULL;
		goto IL_00ac;
	}

IL_001c:
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_2 = ___reader0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(17 /* System.Object Newtonsoft.Json.JsonReader::get_Value() */, L_2);
		RuntimeObject* L_4 = L_3;
		G_B3_0 = L_4;
		if (L_4)
		{
			G_B4_0 = L_4;
			goto IL_0029;
		}
	}
	{
		G_B5_0 = ((String_t*)(NULL));
		goto IL_002e;
	}

IL_0029:
	{
		NullCheck(G_B4_0);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B4_0);
		G_B5_0 = L_5;
	}

IL_002e:
	{
		V_4 = G_B5_0;
		String_t* L_6 = V_4;
		bool L_7;
		L_7 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_6, _stringLiteral539E31D9C32242C0883451A9A8DE262A8C813564, NULL);
		if (L_7)
		{
			goto IL_005c;
		}
	}
	{
		String_t* L_8 = V_4;
		bool L_9;
		L_9 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_8, _stringLiteralE7CCD8078E8A58A921106F3AF064603AB958A11A, NULL);
		if (L_9)
		{
			goto IL_006b;
		}
	}
	{
		String_t* L_10 = V_4;
		bool L_11;
		L_11 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_10, _stringLiteral2F62B3631B3843128CF8C3FF2A6EB6BB8DA4B062, NULL);
		if (L_11)
		{
			goto IL_007a;
		}
	}
	{
		goto IL_0089;
	}

IL_005c:
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_12 = ___reader0;
		NullCheck(L_12);
		JsonReader_ReadAndAssert_m8E4307CFC38DA6E98E818C3058CCE2E385DC9EB7(L_12, NULL);
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_13 = ___reader0;
		il2cpp_codegen_runtime_class_init_inline(XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF_il2cpp_TypeInfo_var);
		String_t* L_14;
		L_14 = XmlNodeConverter_ConvertTokenToXmlValue_m968DB55F5864E99BE9EBE8B3C89B1CFE13ACF458(L_13, NULL);
		V_0 = L_14;
		goto IL_00ac;
	}

IL_006b:
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_15 = ___reader0;
		NullCheck(L_15);
		JsonReader_ReadAndAssert_m8E4307CFC38DA6E98E818C3058CCE2E385DC9EB7(L_15, NULL);
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_16 = ___reader0;
		il2cpp_codegen_runtime_class_init_inline(XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF_il2cpp_TypeInfo_var);
		String_t* L_17;
		L_17 = XmlNodeConverter_ConvertTokenToXmlValue_m968DB55F5864E99BE9EBE8B3C89B1CFE13ACF458(L_16, NULL);
		V_1 = L_17;
		goto IL_00ac;
	}

IL_007a:
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_18 = ___reader0;
		NullCheck(L_18);
		JsonReader_ReadAndAssert_m8E4307CFC38DA6E98E818C3058CCE2E385DC9EB7(L_18, NULL);
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_19 = ___reader0;
		il2cpp_codegen_runtime_class_init_inline(XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF_il2cpp_TypeInfo_var);
		String_t* L_20;
		L_20 = XmlNodeConverter_ConvertTokenToXmlValue_m968DB55F5864E99BE9EBE8B3C89B1CFE13ACF458(L_19, NULL);
		V_2 = L_20;
		goto IL_00ac;
	}

IL_0089:
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_21 = ___reader0;
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_22 = ___reader0;
		NullCheck(L_22);
		RuntimeObject* L_23;
		L_23 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(17 /* System.Object Newtonsoft.Json.JsonReader::get_Value() */, L_22);
		RuntimeObject* L_24 = L_23;
		G_B13_0 = L_24;
		G_B13_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC9159179D678574C69291BCB3CFA5FAC9393D0C8));
		G_B13_2 = L_21;
		if (L_24)
		{
			G_B14_0 = L_24;
			G_B14_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC9159179D678574C69291BCB3CFA5FAC9393D0C8));
			G_B14_2 = L_21;
			goto IL_009c;
		}
	}
	{
		G_B15_0 = ((String_t*)(NULL));
		G_B15_1 = G_B13_1;
		G_B15_2 = G_B13_2;
		goto IL_00a1;
	}

IL_009c:
	{
		NullCheck(G_B14_0);
		String_t* L_25;
		L_25 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B14_0);
		G_B15_0 = L_25;
		G_B15_1 = G_B14_1;
		G_B15_2 = G_B14_2;
	}

IL_00a1:
	{
		String_t* L_26;
		L_26 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B15_1, G_B15_0, NULL);
		JsonSerializationException_t00F36890DFAC04F2FDE779151340B9C5563612EC* L_27;
		L_27 = JsonSerializationException_Create_m2CA947673DA3524AFC908CFE45478403E0B8E239(G_B15_2, L_26, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_27, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlNodeConverter_CreateInstruction_m7A5C6039FEC825B248B75841D11C1DB284F78006_RuntimeMethod_var)));
	}

IL_00ac:
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_28 = ___reader0;
		NullCheck(L_28);
		bool L_29;
		L_29 = VirtualFuncInvoker0< bool >::Invoke(21 /* System.Boolean Newtonsoft.Json.JsonReader::Read() */, L_28);
		if (!L_29)
		{
			goto IL_00c1;
		}
	}
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_30 = ___reader0;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = VirtualFuncInvoker0< int32_t >::Invoke(16 /* Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::get_TokenType() */, L_30);
		if ((!(((uint32_t)L_31) == ((uint32_t)((int32_t)13)))))
		{
			goto IL_001c;
		}
	}

IL_00c1:
	{
		RuntimeObject* L_32 = ___document1;
		String_t* L_33 = V_0;
		String_t* L_34 = V_1;
		String_t* L_35 = V_2;
		NullCheck(L_32);
		RuntimeObject* L_36;
		L_36 = InterfaceFuncInvoker3< RuntimeObject*, String_t*, String_t*, String_t* >::Invoke(5 /* Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.IXmlDocument::CreateXmlDeclaration(System.String,System.String,System.String) */, IXmlDocument_tEF9A1A455D7969D9E4EE72346C887F3648F81726_il2cpp_TypeInfo_var, L_32, L_33, L_34, L_35);
		V_3 = L_36;
		RuntimeObject* L_37 = ___currentNode2;
		RuntimeObject* L_38 = V_3;
		NullCheck(L_37);
		RuntimeObject* L_39;
		L_39 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(7 /* Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.IXmlNode::AppendChild(Newtonsoft.Json.Converters.IXmlNode) */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_37, L_38);
		return;
	}

IL_00d4:
	{
		RuntimeObject* L_40 = ___document1;
		String_t* L_41 = ___propertyName3;
		NullCheck(L_41);
		String_t* L_42;
		L_42 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_41, 1, NULL);
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_43 = ___reader0;
		il2cpp_codegen_runtime_class_init_inline(XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF_il2cpp_TypeInfo_var);
		String_t* L_44;
		L_44 = XmlNodeConverter_ConvertTokenToXmlValue_m968DB55F5864E99BE9EBE8B3C89B1CFE13ACF458(L_43, NULL);
		NullCheck(L_40);
		RuntimeObject* L_45;
		L_45 = InterfaceFuncInvoker2< RuntimeObject*, String_t*, String_t* >::Invoke(7 /* Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.IXmlDocument::CreateProcessingInstruction(System.String,System.String) */, IXmlDocument_tEF9A1A455D7969D9E4EE72346C887F3648F81726_il2cpp_TypeInfo_var, L_40, L_42, L_44);
		V_5 = L_45;
		RuntimeObject* L_46 = ___currentNode2;
		RuntimeObject* L_47 = V_5;
		NullCheck(L_46);
		RuntimeObject* L_48;
		L_48 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(7 /* Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.IXmlNode::AppendChild(Newtonsoft.Json.Converters.IXmlNode) */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_46, L_47);
		return;
	}
}
// System.Void Newtonsoft.Json.Converters.XmlNodeConverter::CreateDocumentType(Newtonsoft.Json.JsonReader,Newtonsoft.Json.Converters.IXmlDocument,Newtonsoft.Json.Converters.IXmlNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeConverter_CreateDocumentType_m4438D07E2CC5D23244A39CC98EE3F75B74B06FFA (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* ___reader0, RuntimeObject* ___document1, RuntimeObject* ___currentNode2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlDocument_tEF9A1A455D7969D9E4EE72346C887F3648F81726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral559483D7AFD5E146A0FF903862BA9AB05FE01692);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6139809F8F5889653A693440ECEF2DFD4FDCDD94);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral72D07D1C82E1B7A92C7AB6D9C01CD4050846760F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF2EB0B21A975739F9285B24F45AC110ADD74337E);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	String_t* V_5 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	String_t* G_B4_0 = NULL;
	RuntimeObject* G_B15_0 = NULL;
	String_t* G_B15_1 = NULL;
	JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* G_B15_2 = NULL;
	RuntimeObject* G_B14_0 = NULL;
	String_t* G_B14_1 = NULL;
	JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* G_B14_2 = NULL;
	String_t* G_B16_0 = NULL;
	String_t* G_B16_1 = NULL;
	JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* G_B16_2 = NULL;
	{
		V_0 = (String_t*)NULL;
		V_1 = (String_t*)NULL;
		V_2 = (String_t*)NULL;
		V_3 = (String_t*)NULL;
		goto IL_00ba;
	}

IL_000d:
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_0 = ___reader0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(17 /* System.Object Newtonsoft.Json.JsonReader::get_Value() */, L_0);
		RuntimeObject* L_2 = L_1;
		G_B2_0 = L_2;
		if (L_2)
		{
			G_B3_0 = L_2;
			goto IL_001a;
		}
	}
	{
		G_B4_0 = ((String_t*)(NULL));
		goto IL_001f;
	}

IL_001a:
	{
		NullCheck(G_B3_0);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B3_0);
		G_B4_0 = L_3;
	}

IL_001f:
	{
		V_5 = G_B4_0;
		String_t* L_4 = V_5;
		bool L_5;
		L_5 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_4, _stringLiteral72D07D1C82E1B7A92C7AB6D9C01CD4050846760F, NULL);
		if (L_5)
		{
			goto IL_005b;
		}
	}
	{
		String_t* L_6 = V_5;
		bool L_7;
		L_7 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_6, _stringLiteralF2EB0B21A975739F9285B24F45AC110ADD74337E, NULL);
		if (L_7)
		{
			goto IL_006a;
		}
	}
	{
		String_t* L_8 = V_5;
		bool L_9;
		L_9 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_8, _stringLiteral6139809F8F5889653A693440ECEF2DFD4FDCDD94, NULL);
		if (L_9)
		{
			goto IL_0079;
		}
	}
	{
		String_t* L_10 = V_5;
		bool L_11;
		L_11 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_10, _stringLiteral559483D7AFD5E146A0FF903862BA9AB05FE01692, NULL);
		if (L_11)
		{
			goto IL_0088;
		}
	}
	{
		goto IL_0097;
	}

IL_005b:
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_12 = ___reader0;
		NullCheck(L_12);
		JsonReader_ReadAndAssert_m8E4307CFC38DA6E98E818C3058CCE2E385DC9EB7(L_12, NULL);
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_13 = ___reader0;
		il2cpp_codegen_runtime_class_init_inline(XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF_il2cpp_TypeInfo_var);
		String_t* L_14;
		L_14 = XmlNodeConverter_ConvertTokenToXmlValue_m968DB55F5864E99BE9EBE8B3C89B1CFE13ACF458(L_13, NULL);
		V_0 = L_14;
		goto IL_00ba;
	}

IL_006a:
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_15 = ___reader0;
		NullCheck(L_15);
		JsonReader_ReadAndAssert_m8E4307CFC38DA6E98E818C3058CCE2E385DC9EB7(L_15, NULL);
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_16 = ___reader0;
		il2cpp_codegen_runtime_class_init_inline(XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF_il2cpp_TypeInfo_var);
		String_t* L_17;
		L_17 = XmlNodeConverter_ConvertTokenToXmlValue_m968DB55F5864E99BE9EBE8B3C89B1CFE13ACF458(L_16, NULL);
		V_1 = L_17;
		goto IL_00ba;
	}

IL_0079:
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_18 = ___reader0;
		NullCheck(L_18);
		JsonReader_ReadAndAssert_m8E4307CFC38DA6E98E818C3058CCE2E385DC9EB7(L_18, NULL);
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_19 = ___reader0;
		il2cpp_codegen_runtime_class_init_inline(XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF_il2cpp_TypeInfo_var);
		String_t* L_20;
		L_20 = XmlNodeConverter_ConvertTokenToXmlValue_m968DB55F5864E99BE9EBE8B3C89B1CFE13ACF458(L_19, NULL);
		V_2 = L_20;
		goto IL_00ba;
	}

IL_0088:
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_21 = ___reader0;
		NullCheck(L_21);
		JsonReader_ReadAndAssert_m8E4307CFC38DA6E98E818C3058CCE2E385DC9EB7(L_21, NULL);
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_22 = ___reader0;
		il2cpp_codegen_runtime_class_init_inline(XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF_il2cpp_TypeInfo_var);
		String_t* L_23;
		L_23 = XmlNodeConverter_ConvertTokenToXmlValue_m968DB55F5864E99BE9EBE8B3C89B1CFE13ACF458(L_22, NULL);
		V_3 = L_23;
		goto IL_00ba;
	}

IL_0097:
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_24 = ___reader0;
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_25 = ___reader0;
		NullCheck(L_25);
		RuntimeObject* L_26;
		L_26 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(17 /* System.Object Newtonsoft.Json.JsonReader::get_Value() */, L_25);
		RuntimeObject* L_27 = L_26;
		G_B14_0 = L_27;
		G_B14_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC9159179D678574C69291BCB3CFA5FAC9393D0C8));
		G_B14_2 = L_24;
		if (L_27)
		{
			G_B15_0 = L_27;
			G_B15_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC9159179D678574C69291BCB3CFA5FAC9393D0C8));
			G_B15_2 = L_24;
			goto IL_00aa;
		}
	}
	{
		G_B16_0 = ((String_t*)(NULL));
		G_B16_1 = G_B14_1;
		G_B16_2 = G_B14_2;
		goto IL_00af;
	}

IL_00aa:
	{
		NullCheck(G_B15_0);
		String_t* L_28;
		L_28 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B15_0);
		G_B16_0 = L_28;
		G_B16_1 = G_B15_1;
		G_B16_2 = G_B15_2;
	}

IL_00af:
	{
		String_t* L_29;
		L_29 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B16_1, G_B16_0, NULL);
		JsonSerializationException_t00F36890DFAC04F2FDE779151340B9C5563612EC* L_30;
		L_30 = JsonSerializationException_Create_m2CA947673DA3524AFC908CFE45478403E0B8E239(G_B16_2, L_29, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_30, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlNodeConverter_CreateDocumentType_m4438D07E2CC5D23244A39CC98EE3F75B74B06FFA_RuntimeMethod_var)));
	}

IL_00ba:
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_31 = ___reader0;
		NullCheck(L_31);
		bool L_32;
		L_32 = VirtualFuncInvoker0< bool >::Invoke(21 /* System.Boolean Newtonsoft.Json.JsonReader::Read() */, L_31);
		if (!L_32)
		{
			goto IL_00cf;
		}
	}
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_33 = ___reader0;
		NullCheck(L_33);
		int32_t L_34;
		L_34 = VirtualFuncInvoker0< int32_t >::Invoke(16 /* Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::get_TokenType() */, L_33);
		if ((!(((uint32_t)L_34) == ((uint32_t)((int32_t)13)))))
		{
			goto IL_000d;
		}
	}

IL_00cf:
	{
		RuntimeObject* L_35 = ___document1;
		String_t* L_36 = V_0;
		String_t* L_37 = V_1;
		String_t* L_38 = V_2;
		String_t* L_39 = V_3;
		NullCheck(L_35);
		RuntimeObject* L_40;
		L_40 = InterfaceFuncInvoker4< RuntimeObject*, String_t*, String_t*, String_t*, String_t* >::Invoke(6 /* Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.IXmlDocument::CreateXmlDocumentType(System.String,System.String,System.String,System.String) */, IXmlDocument_tEF9A1A455D7969D9E4EE72346C887F3648F81726_il2cpp_TypeInfo_var, L_35, L_36, L_37, L_38, L_39);
		V_4 = L_40;
		RuntimeObject* L_41 = ___currentNode2;
		RuntimeObject* L_42 = V_4;
		NullCheck(L_41);
		RuntimeObject* L_43;
		L_43 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(7 /* Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.IXmlNode::AppendChild(Newtonsoft.Json.Converters.IXmlNode) */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_41, L_42);
		return;
	}
}
// Newtonsoft.Json.Converters.IXmlElement Newtonsoft.Json.Converters.XmlNodeConverter::CreateElement(System.String,Newtonsoft.Json.Converters.IXmlDocument,System.String,System.Xml.XmlNamespaceManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlNodeConverter_CreateElement_mD8BF7ADE4CB3682433E964C9986042FFE403FE65 (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, String_t* ___elementName0, RuntimeObject* ___document1, String_t* ___elementPrefix2, XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* ___manager3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlDocument_tEF9A1A455D7969D9E4EE72346C887F3648F81726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B6_0 = NULL;
	{
		bool L_0;
		L_0 = XmlNodeConverter_get_EncodeSpecialCharacters_m343756B55466DB680EF3561E34A803C5D2FFC0BD_inline(__this, NULL);
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		String_t* L_1 = ___elementName0;
		il2cpp_codegen_runtime_class_init_inline(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = XmlConvert_EncodeName_m5CDC8BEC5CE63A019C9E7C52AADF9F44B90E6CB5(L_1, NULL);
		G_B3_0 = L_2;
		goto IL_0016;
	}

IL_0010:
	{
		String_t* L_3 = ___elementName0;
		il2cpp_codegen_runtime_class_init_inline(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = XmlConvert_EncodeLocalName_m8AD743C94643F82D5B6FF1617EDAF4145E67D318(L_3, NULL);
		G_B3_0 = L_4;
	}

IL_0016:
	{
		V_0 = G_B3_0;
		String_t* L_5 = ___elementPrefix2;
		bool L_6;
		L_6 = StringUtils_IsNullOrEmpty_mDB5E4B38C6134F72E602D16501AF88B58C3C67BA(L_5, NULL);
		if (L_6)
		{
			goto IL_0029;
		}
	}
	{
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_7 = ___manager3;
		String_t* L_8 = ___elementPrefix2;
		NullCheck(L_7);
		String_t* L_9;
		L_9 = VirtualFuncInvoker1< String_t*, String_t* >::Invoke(16 /* System.String System.Xml.XmlNamespaceManager::LookupNamespace(System.String) */, L_7, L_8);
		G_B6_0 = L_9;
		goto IL_0030;
	}

IL_0029:
	{
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_10 = ___manager3;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Xml.XmlNamespaceManager::get_DefaultNamespace() */, L_10);
		G_B6_0 = L_11;
	}

IL_0030:
	{
		V_1 = G_B6_0;
		String_t* L_12 = V_1;
		bool L_13;
		L_13 = StringUtils_IsNullOrEmpty_mDB5E4B38C6134F72E602D16501AF88B58C3C67BA(L_12, NULL);
		if (!L_13)
		{
			goto IL_0041;
		}
	}
	{
		RuntimeObject* L_14 = ___document1;
		String_t* L_15 = V_0;
		NullCheck(L_14);
		RuntimeObject* L_16;
		L_16 = InterfaceFuncInvoker1< RuntimeObject*, String_t* >::Invoke(8 /* Newtonsoft.Json.Converters.IXmlElement Newtonsoft.Json.Converters.IXmlDocument::CreateElement(System.String) */, IXmlDocument_tEF9A1A455D7969D9E4EE72346C887F3648F81726_il2cpp_TypeInfo_var, L_14, L_15);
		return L_16;
	}

IL_0041:
	{
		RuntimeObject* L_17 = ___document1;
		String_t* L_18 = V_0;
		String_t* L_19 = V_1;
		NullCheck(L_17);
		RuntimeObject* L_20;
		L_20 = InterfaceFuncInvoker2< RuntimeObject*, String_t*, String_t* >::Invoke(9 /* Newtonsoft.Json.Converters.IXmlElement Newtonsoft.Json.Converters.IXmlDocument::CreateElement(System.String,System.String) */, IXmlDocument_tEF9A1A455D7969D9E4EE72346C887F3648F81726_il2cpp_TypeInfo_var, L_17, L_18, L_19);
		return L_20;
	}
}
// System.Void Newtonsoft.Json.Converters.XmlNodeConverter::DeserializeNode(Newtonsoft.Json.JsonReader,Newtonsoft.Json.Converters.IXmlDocument,System.Xml.XmlNamespaceManager,Newtonsoft.Json.Converters.IXmlNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeConverter_DeserializeNode_m7CF6B466118CB9E0CF4CAC90CA34BC769B45229C (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* ___reader0, RuntimeObject* ___document1, XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* ___manager2, RuntimeObject* ___currentNode3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mC2891A1E295FEF8B5B64E96EB62B5945149DF7BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m8A802F6DDB7EA4435FEE6877988C792B8B583F88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m894DFFA678072980ECF786B52912E28891E006DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlDocument_tEF9A1A455D7969D9E4EE72346C887F3648F81726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlElement_t48C6FEA57F31ACF88F9D9AB22BDDD0523D1D4780_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m8E48B727D08C794BA9EB42BB47747FD56F55C10E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	String_t* V_4 = NULL;
	String_t* V_5 = NULL;
	String_t* V_6 = NULL;
	Enumerator_t5D6B89D2864E6CA1D667C75E2375831735B2B941 V_7;
	memset((&V_7), 0, sizeof(V_7));
	RuntimeObject* V_8 = NULL;
	int32_t V_9 = 0;
	String_t* G_B16_0 = NULL;

IL_0000:
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_0 = ___reader0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(16 /* Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::get_TokenType() */, L_0);
		V_2 = L_1;
		int32_t L_2 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_2, 3)))
		{
			case 0:
			{
				goto IL_013e;
			}
			case 1:
			{
				goto IL_002a;
			}
			case 2:
			{
				goto IL_016c;
			}
		}
	}
	{
		int32_t L_3 = V_2;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_3, ((int32_t)13)))) > ((uint32_t)1))))
		{
			goto IL_0187;
		}
	}
	{
		goto IL_0188;
	}

IL_002a:
	{
		RuntimeObject* L_4 = ___currentNode3;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Xml.XmlNodeType Newtonsoft.Json.Converters.IXmlNode::get_NodeType() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_4);
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_0049;
		}
	}
	{
		RuntimeObject* L_6 = ___document1;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(12 /* Newtonsoft.Json.Converters.IXmlElement Newtonsoft.Json.Converters.IXmlDocument::get_DocumentElement() */, IXmlDocument_tEF9A1A455D7969D9E4EE72346C887F3648F81726_il2cpp_TypeInfo_var, L_6);
		if (!L_7)
		{
			goto IL_0049;
		}
	}
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_8 = ___reader0;
		JsonSerializationException_t00F36890DFAC04F2FDE779151340B9C5563612EC* L_9;
		L_9 = JsonSerializationException_Create_m2CA947673DA3524AFC908CFE45478403E0B8E239(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1DE5E11A719EDB4CA85B9D81FAB9B419521AF411)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlNodeConverter_DeserializeNode_m7CF6B466118CB9E0CF4CAC90CA34BC769B45229C_RuntimeMethod_var)));
	}

IL_0049:
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_10 = ___reader0;
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(17 /* System.Object Newtonsoft.Json.JsonReader::get_Value() */, L_10);
		NullCheck(L_11);
		String_t* L_12;
		L_12 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_11);
		V_0 = L_12;
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_13 = ___reader0;
		NullCheck(L_13);
		JsonReader_ReadAndAssert_m8E4307CFC38DA6E98E818C3058CCE2E385DC9EB7(L_13, NULL);
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_14 = ___reader0;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = VirtualFuncInvoker0< int32_t >::Invoke(16 /* Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::get_TokenType() */, L_14);
		if ((!(((uint32_t)L_15) == ((uint32_t)2))))
		{
			goto IL_0130;
		}
	}
	{
		V_3 = 0;
		goto IL_007b;
	}

IL_006b:
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_16 = ___reader0;
		RuntimeObject* L_17 = ___document1;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_18 = ___manager2;
		String_t* L_19 = V_0;
		RuntimeObject* L_20 = ___currentNode3;
		XmlNodeConverter_DeserializeValue_m6D20454FDBBEEE2CABB0ED3EC1BCF8F2E0067AF0(__this, L_16, L_17, L_18, L_19, L_20, NULL);
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_007b:
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_22 = ___reader0;
		NullCheck(L_22);
		bool L_23;
		L_23 = VirtualFuncInvoker0< bool >::Invoke(21 /* System.Boolean Newtonsoft.Json.JsonReader::Read() */, L_22);
		if (!L_23)
		{
			goto IL_008d;
		}
	}
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_24 = ___reader0;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = VirtualFuncInvoker0< int32_t >::Invoke(16 /* Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::get_TokenType() */, L_24);
		if ((!(((uint32_t)L_25) == ((uint32_t)((int32_t)14)))))
		{
			goto IL_006b;
		}
	}

IL_008d:
	{
		int32_t L_26 = V_3;
		if ((!(((uint32_t)L_26) == ((uint32_t)1))))
		{
			goto IL_01ae;
		}
	}
	{
		bool L_27;
		L_27 = XmlNodeConverter_get_WriteArrayAttribute_mB90AAB6C83E3DFD4E0F0FE8DBB9BF151248378F2_inline(__this, NULL);
		if (!L_27)
		{
			goto IL_01ae;
		}
	}
	{
		String_t* L_28 = V_0;
		MiscellaneousUtils_GetQualifiedNameParts_mDB4115E09A5DDA5F1103D82C7B514A038301683C(L_28, (&V_4), (&V_5), NULL);
		String_t* L_29 = V_4;
		bool L_30;
		L_30 = StringUtils_IsNullOrEmpty_mDB5E4B38C6134F72E602D16501AF88B58C3C67BA(L_29, NULL);
		if (L_30)
		{
			goto IL_00bc;
		}
	}
	{
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_31 = ___manager2;
		String_t* L_32 = V_4;
		NullCheck(L_31);
		String_t* L_33;
		L_33 = VirtualFuncInvoker1< String_t*, String_t* >::Invoke(16 /* System.String System.Xml.XmlNamespaceManager::LookupNamespace(System.String) */, L_31, L_32);
		G_B16_0 = L_33;
		goto IL_00c2;
	}

IL_00bc:
	{
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_34 = ___manager2;
		NullCheck(L_34);
		String_t* L_35;
		L_35 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Xml.XmlNamespaceManager::get_DefaultNamespace() */, L_34);
		G_B16_0 = L_35;
	}

IL_00c2:
	{
		V_6 = G_B16_0;
		RuntimeObject* L_36 = ___currentNode3;
		NullCheck(L_36);
		List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_37;
		L_37 = InterfaceFuncInvoker0< List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* >::Invoke(2 /* System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode> Newtonsoft.Json.Converters.IXmlNode::get_ChildNodes() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_36);
		NullCheck(L_37);
		Enumerator_t5D6B89D2864E6CA1D667C75E2375831735B2B941 L_38;
		L_38 = List_1_GetEnumerator_m8E48B727D08C794BA9EB42BB47747FD56F55C10E(L_37, List_1_GetEnumerator_m8E48B727D08C794BA9EB42BB47747FD56F55C10E_RuntimeMethod_var);
		V_7 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0122:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mC2891A1E295FEF8B5B64E96EB62B5945149DF7BD((&V_7), Enumerator_Dispose_mC2891A1E295FEF8B5B64E96EB62B5945149DF7BD_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0114_1;
			}

IL_00d4_1:
			{
				RuntimeObject* L_39;
				L_39 = Enumerator_get_Current_m894DFFA678072980ECF786B52912E28891E006DB_inline((&V_7), Enumerator_get_Current_m894DFFA678072980ECF786B52912E28891E006DB_RuntimeMethod_var);
				V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_39, IXmlElement_t48C6FEA57F31ACF88F9D9AB22BDDD0523D1D4780_il2cpp_TypeInfo_var));
				RuntimeObject* L_40 = V_8;
				if (!L_40)
				{
					goto IL_0114_1;
				}
			}
			{
				RuntimeObject* L_41 = V_8;
				NullCheck(L_41);
				String_t* L_42;
				L_42 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String Newtonsoft.Json.Converters.IXmlNode::get_LocalName() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_41);
				String_t* L_43 = V_5;
				bool L_44;
				L_44 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, L_43, NULL);
				if (!L_44)
				{
					goto IL_0114_1;
				}
			}
			{
				RuntimeObject* L_45 = V_8;
				NullCheck(L_45);
				String_t* L_46;
				L_46 = InterfaceFuncInvoker0< String_t* >::Invoke(8 /* System.String Newtonsoft.Json.Converters.IXmlNode::get_NamespaceUri() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_45);
				String_t* L_47 = V_6;
				bool L_48;
				L_48 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, L_47, NULL);
				if (!L_48)
				{
					goto IL_0114_1;
				}
			}
			{
				RuntimeObject* L_49 = V_8;
				RuntimeObject* L_50 = ___document1;
				XmlNodeConverter_AddJsonArrayAttribute_m2B9B98BC1EC11FEDB63C71314C1FD3312E20A800(__this, L_49, L_50, NULL);
				goto IL_01ae;
			}

IL_0114_1:
			{
				bool L_51;
				L_51 = Enumerator_MoveNext_m8A802F6DDB7EA4435FEE6877988C792B8B583F88((&V_7), Enumerator_MoveNext_m8A802F6DDB7EA4435FEE6877988C792B8B583F88_RuntimeMethod_var);
				if (L_51)
				{
					goto IL_00d4_1;
				}
			}
			{
				goto IL_01ae;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0130:
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_52 = ___reader0;
		RuntimeObject* L_53 = ___document1;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_54 = ___manager2;
		String_t* L_55 = V_0;
		RuntimeObject* L_56 = ___currentNode3;
		XmlNodeConverter_DeserializeValue_m6D20454FDBBEEE2CABB0ED3EC1BCF8F2E0067AF0(__this, L_52, L_53, L_54, L_55, L_56, NULL);
		goto IL_01ae;
	}

IL_013e:
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_57 = ___reader0;
		NullCheck(L_57);
		RuntimeObject* L_58;
		L_58 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(17 /* System.Object Newtonsoft.Json.JsonReader::get_Value() */, L_57);
		NullCheck(L_58);
		String_t* L_59;
		L_59 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_58);
		V_1 = L_59;
		goto IL_0158;
	}

IL_014c:
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_60 = ___reader0;
		RuntimeObject* L_61 = ___document1;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_62 = ___manager2;
		String_t* L_63 = V_1;
		RuntimeObject* L_64 = ___currentNode3;
		XmlNodeConverter_DeserializeValue_m6D20454FDBBEEE2CABB0ED3EC1BCF8F2E0067AF0(__this, L_60, L_61, L_62, L_63, L_64, NULL);
	}

IL_0158:
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_65 = ___reader0;
		NullCheck(L_65);
		bool L_66;
		L_66 = VirtualFuncInvoker0< bool >::Invoke(21 /* System.Boolean Newtonsoft.Json.JsonReader::Read() */, L_65);
		if (!L_66)
		{
			goto IL_01ae;
		}
	}
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_67 = ___reader0;
		NullCheck(L_67);
		int32_t L_68;
		L_68 = VirtualFuncInvoker0< int32_t >::Invoke(16 /* Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::get_TokenType() */, L_67);
		if ((!(((uint32_t)L_68) == ((uint32_t)((int32_t)15)))))
		{
			goto IL_014c;
		}
	}
	{
		goto IL_01ae;
	}

IL_016c:
	{
		RuntimeObject* L_69 = ___currentNode3;
		RuntimeObject* L_70 = ___document1;
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_71 = ___reader0;
		NullCheck(L_71);
		RuntimeObject* L_72;
		L_72 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(17 /* System.Object Newtonsoft.Json.JsonReader::get_Value() */, L_71);
		NullCheck(L_70);
		RuntimeObject* L_73;
		L_73 = InterfaceFuncInvoker1< RuntimeObject*, String_t* >::Invoke(0 /* Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.IXmlDocument::CreateComment(System.String) */, IXmlDocument_tEF9A1A455D7969D9E4EE72346C887F3648F81726_il2cpp_TypeInfo_var, L_70, ((String_t*)CastclassSealed((RuntimeObject*)L_72, String_t_il2cpp_TypeInfo_var)));
		NullCheck(L_69);
		RuntimeObject* L_74;
		L_74 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(7 /* Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.IXmlNode::AppendChild(Newtonsoft.Json.Converters.IXmlNode) */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_69, L_73);
		goto IL_01ae;
	}

IL_0187:
	{
		return;
	}

IL_0188:
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_75 = ___reader0;
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_76 = ___reader0;
		NullCheck(L_76);
		int32_t L_77;
		L_77 = VirtualFuncInvoker0< int32_t >::Invoke(16 /* Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::get_TokenType() */, L_76);
		V_9 = L_77;
		Il2CppFakeBox<int32_t> L_78(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonToken_t00B2B3F98FB3E9A8DE72409901BED1C7F1670BD5_il2cpp_TypeInfo_var)), (&V_9));
		String_t* L_79;
		L_79 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_78), NULL);
		String_t* L_80;
		L_80 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB6FEE3D4E67CA183A789224E46967A517687086A)), L_79, NULL);
		JsonSerializationException_t00F36890DFAC04F2FDE779151340B9C5563612EC* L_81;
		L_81 = JsonSerializationException_Create_m2CA947673DA3524AFC908CFE45478403E0B8E239(L_75, L_80, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_81, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlNodeConverter_DeserializeNode_m7CF6B466118CB9E0CF4CAC90CA34BC769B45229C_RuntimeMethod_var)));
	}

IL_01ae:
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_82 = ___reader0;
		NullCheck(L_82);
		bool L_83;
		L_83 = VirtualFuncInvoker0< bool >::Invoke(21 /* System.Boolean Newtonsoft.Json.JsonReader::Read() */, L_82);
		if (L_83)
		{
			goto IL_0000;
		}
	}
	{
		return;
	}
}
// System.Boolean Newtonsoft.Json.Converters.XmlNodeConverter::IsNamespaceAttribute(System.String,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlNodeConverter_IsNamespaceAttribute_mD9C356F879F0FF7F1006E34842F95ADE42128868 (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, String_t* ___attributeName0, String_t** ___prefix1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CDCEEB7A12F71E8DF3D6AC05D04621DD4FBABF3);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___attributeName0;
		NullCheck(L_0);
		bool L_1;
		L_1 = String_StartsWith_mA2A4405B1B9F3653A6A9AA7F223F68D86A0C6264(L_0, _stringLiteral9CDCEEB7A12F71E8DF3D6AC05D04621DD4FBABF3, 4, NULL);
		if (!L_1)
		{
			goto IL_003e;
		}
	}
	{
		String_t* L_2 = ___attributeName0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_2, NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)5))))
		{
			goto IL_0020;
		}
	}
	{
		String_t** L_4 = ___prefix1;
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		*((RuntimeObject**)L_4) = (RuntimeObject*)L_5;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_4, (void*)(RuntimeObject*)L_5);
		return (bool)1;
	}

IL_0020:
	{
		String_t* L_6 = ___attributeName0;
		NullCheck(L_6);
		Il2CppChar L_7;
		L_7 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_6, 5, NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)58)))))
		{
			goto IL_003e;
		}
	}
	{
		String_t** L_8 = ___prefix1;
		String_t* L_9 = ___attributeName0;
		String_t* L_10 = ___attributeName0;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_10, NULL);
		NullCheck(L_9);
		String_t* L_12;
		L_12 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_9, 6, ((int32_t)il2cpp_codegen_subtract(L_11, 6)), NULL);
		*((RuntimeObject**)L_8) = (RuntimeObject*)L_12;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_8, (void*)(RuntimeObject*)L_12);
		return (bool)1;
	}

IL_003e:
	{
		String_t** L_13 = ___prefix1;
		*((RuntimeObject**)L_13) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_13, (void*)(RuntimeObject*)NULL);
		return (bool)0;
	}
}
// System.Boolean Newtonsoft.Json.Converters.XmlNodeConverter::ValueAttributes(System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlNodeConverter_ValueAttributes_m2E3B5735173BB3088B0395F6266B6BCFFF7D6090 (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* ___c0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mC2891A1E295FEF8B5B64E96EB62B5945149DF7BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m8A802F6DDB7EA4435FEE6877988C792B8B583F88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m894DFFA678072980ECF786B52912E28891E006DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m8E48B727D08C794BA9EB42BB47747FD56F55C10E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral125BCB7A4232428BFD5FFB1F3E5905A4F6B0B075);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral420B74A52534550B0DD14DCF7D8988C2BD4936CE);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t5D6B89D2864E6CA1D667C75E2375831735B2B941 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	{
		List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_0 = ___c0;
		NullCheck(L_0);
		Enumerator_t5D6B89D2864E6CA1D667C75E2375831735B2B941 L_1;
		L_1 = List_1_GetEnumerator_m8E48B727D08C794BA9EB42BB47747FD56F55C10E(L_0, List_1_GetEnumerator_m8E48B727D08C794BA9EB42BB47747FD56F55C10E_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0056:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mC2891A1E295FEF8B5B64E96EB62B5945149DF7BD((&V_0), Enumerator_Dispose_mC2891A1E295FEF8B5B64E96EB62B5945149DF7BD_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_004b_1;
			}

IL_0009_1:
			{
				RuntimeObject* L_2;
				L_2 = Enumerator_get_Current_m894DFFA678072980ECF786B52912E28891E006DB_inline((&V_0), Enumerator_get_Current_m894DFFA678072980ECF786B52912E28891E006DB_RuntimeMethod_var);
				V_1 = L_2;
				RuntimeObject* L_3 = V_1;
				NullCheck(L_3);
				String_t* L_4;
				L_4 = InterfaceFuncInvoker0< String_t* >::Invoke(8 /* System.String Newtonsoft.Json.Converters.IXmlNode::get_NamespaceUri() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_3);
				bool L_5;
				L_5 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_4, _stringLiteral125BCB7A4232428BFD5FFB1F3E5905A4F6B0B075, NULL);
				if (L_5)
				{
					goto IL_004b_1;
				}
			}
			{
				RuntimeObject* L_6 = V_1;
				NullCheck(L_6);
				String_t* L_7;
				L_7 = InterfaceFuncInvoker0< String_t* >::Invoke(8 /* System.String Newtonsoft.Json.Converters.IXmlNode::get_NamespaceUri() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_6);
				bool L_8;
				L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_7, _stringLiteral420B74A52534550B0DD14DCF7D8988C2BD4936CE, NULL);
				if (!L_8)
				{
					goto IL_0047_1;
				}
			}
			{
				RuntimeObject* L_9 = V_1;
				NullCheck(L_9);
				String_t* L_10;
				L_10 = InterfaceFuncInvoker0< String_t* >::Invoke(5 /* System.String Newtonsoft.Json.Converters.IXmlNode::get_Value() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_9);
				bool L_11;
				L_11 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_10, _stringLiteral125BCB7A4232428BFD5FFB1F3E5905A4F6B0B075, NULL);
				if (L_11)
				{
					goto IL_004b_1;
				}
			}

IL_0047_1:
			{
				V_2 = (bool)1;
				goto IL_0066;
			}

IL_004b_1:
			{
				bool L_12;
				L_12 = Enumerator_MoveNext_m8A802F6DDB7EA4435FEE6877988C792B8B583F88((&V_0), Enumerator_MoveNext_m8A802F6DDB7EA4435FEE6877988C792B8B583F88_RuntimeMethod_var);
				if (L_12)
				{
					goto IL_0009_1;
				}
			}
			{
				goto IL_0064;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0064:
	{
		return (bool)0;
	}

IL_0066:
	{
		bool L_13 = V_2;
		return L_13;
	}
}
// System.Boolean Newtonsoft.Json.Converters.XmlNodeConverter::CanConvert(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlNodeConverter_CanConvert_m2489573A00FFEB412ECFAB91B0CA2EA83C5D1D32 (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, Type_t* ___valueType0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral914C9492BCCD9D51AB318E3B5358DF89078CD8B8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBC8B8F95D97527E14B1DC2E8FE750C876B38A54C);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t* L_0 = ___valueType0;
		bool L_1;
		L_1 = TypeExtensions_AssignableToTypeName_mBAD8B53CBE3E50AB85467EF5F8E21BE18B8B48AC(L_0, _stringLiteral914C9492BCCD9D51AB318E3B5358DF89078CD8B8, (bool)0, NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		Type_t* L_2 = ___valueType0;
		bool L_3;
		L_3 = XmlNodeConverter_IsXObject_mA3EEED6A91CF6187FED68B2BDC561F67557D8440(__this, L_2, NULL);
		return L_3;
	}

IL_0016:
	{
		Type_t* L_4 = ___valueType0;
		bool L_5;
		L_5 = TypeExtensions_AssignableToTypeName_mBAD8B53CBE3E50AB85467EF5F8E21BE18B8B48AC(L_4, _stringLiteralBC8B8F95D97527E14B1DC2E8FE750C876B38A54C, (bool)0, NULL);
		if (!L_5)
		{
			goto IL_002c;
		}
	}
	{
		Type_t* L_6 = ___valueType0;
		bool L_7;
		L_7 = XmlNodeConverter_IsXmlNode_mA424BA714626ECB3D870C5F0C4953622B81620FD(__this, L_6, NULL);
		return L_7;
	}

IL_002c:
	{
		return (bool)0;
	}
}
// System.Boolean Newtonsoft.Json.Converters.XmlNodeConverter::IsXObject(System.Type)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR bool XmlNodeConverter_IsXObject_mA3EEED6A91CF6187FED68B2BDC561F67557D8440 (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, Type_t* ___valueType0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		Type_t* L_2 = ___valueType0;
		NullCheck(L_1);
		bool L_3;
		L_3 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_2);
		return L_3;
	}
}
// System.Boolean Newtonsoft.Json.Converters.XmlNodeConverter::IsXmlNode(System.Type)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR bool XmlNodeConverter_IsXmlNode_mA424BA714626ECB3D870C5F0C4953622B81620FD (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, Type_t* ___valueType0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		Type_t* L_2 = ___valueType0;
		NullCheck(L_1);
		bool L_3;
		L_3 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_2);
		return L_3;
	}
}
// System.Void Newtonsoft.Json.Converters.XmlNodeConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeConverter__ctor_m5EA79F6E3B52F680FC2F5DA529993033645D62C3 (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, const RuntimeMethod* method) 
{
	{
		JsonConverter__ctor_m47F59D2FF8CFBA449BDFBA405BDEEF6361139DAB(__this, NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Converters.XmlNodeConverter::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeConverter__cctor_mAED1BE9081973689D9D52B82EB35C841F73E79F9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m99AF43FA43C38A915F0A8AF9F07EFF9D3183EA37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_0 = (List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E*)il2cpp_codegen_object_new(List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m99AF43FA43C38A915F0A8AF9F07EFF9D3183EA37(L_0, List_1__ctor_m99AF43FA43C38A915F0A8AF9F07EFF9D3183EA37_RuntimeMethod_var);
		((XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF_StaticFields*)il2cpp_codegen_static_fields_for(XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF_il2cpp_TypeInfo_var))->___EmptyChildNodes_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF_StaticFields*)il2cpp_codegen_static_fields_for(XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF_il2cpp_TypeInfo_var))->___EmptyChildNodes_0), (void*)L_0);
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
// System.DateTimeKind Newtonsoft.Json.Bson.BsonBinaryWriter::get_DateTimeKindHandling()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BsonBinaryWriter_get_DateTimeKindHandling_m90614E0F1C0F02A38281C923194D7339F536664F (BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CDateTimeKindHandlingU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonBinaryWriter::set_DateTimeKindHandling(System.DateTimeKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonBinaryWriter_set_DateTimeKindHandling_mE5606CA1E2ADA134652CEC5A0306E5F728E80FC5 (BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CDateTimeKindHandlingU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonBinaryWriter::.ctor(System.IO.BinaryWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonBinaryWriter__ctor_mD40C3447EF11061CE8EEE41BB5ED7A874102DC3C (BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* __this, BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ___writer0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		BsonBinaryWriter_set_DateTimeKindHandling_mE5606CA1E2ADA134652CEC5A0306E5F728E80FC5_inline(__this, 1, NULL);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_0 = ___writer0;
		__this->____writer_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____writer_1), (void*)L_0);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonBinaryWriter::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonBinaryWriter_Flush_m8844BC6FFEE6C0BE26F4D807110A1F4C1E6658DA (BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* __this, const RuntimeMethod* method) 
{
	{
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_0 = __this->____writer_1;
		NullCheck(L_0);
		VirtualActionInvoker0::Invoke(7 /* System.Void System.IO.BinaryWriter::Flush() */, L_0);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonBinaryWriter::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonBinaryWriter_Close_m16C6400A2D52FFC66BC3F29D7A94373EDCB6291C (BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* __this, const RuntimeMethod* method) 
{
	{
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_0 = __this->____writer_1;
		NullCheck(L_0);
		VirtualActionInvoker0::Invoke(5 /* System.Void System.IO.BinaryWriter::Close() */, L_0);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonBinaryWriter::WriteToken(Newtonsoft.Json.Bson.BsonToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonBinaryWriter_WriteToken_m1CBE5AB86FEB5C2399287FEAEBFB80F9094A48E9 (BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* __this, BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* ___t0, const RuntimeMethod* method) 
{
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_0 = ___t0;
		int32_t L_1;
		L_1 = BsonBinaryWriter_CalculateSize_mC09EDD18FAF0B2E65A36FCC6D0C7615EE1544907(__this, L_0, NULL);
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_2 = ___t0;
		BsonBinaryWriter_WriteTokenInternal_m54C0EA96679D81C5022FD97C4499657E1D38DA7E(__this, L_2, NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonBinaryWriter::WriteTokenInternal(Newtonsoft.Json.Bson.BsonToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonBinaryWriter_WriteTokenInternal_m54C0EA96679D81C5022FD97C4499657E1D38DA7E (BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* __this, BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* ___t0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonBinary_t10CD8515CA416C5958E3FA3290910E8FD2DFB8A8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonBoolean_tCDA0063DFA3B0C789C19533BFA53A6E7CCD644BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeUtils_t08EF5030CF29329A3646A81F48D1F440A6234121_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t02CD314CF6671EA4E8F21A8C41D664B043C07DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tE241CB87CC95A73A720D51ACEC78F0245F877C86_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int8_t V_0 = 0;
	BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE* V_3 = NULL;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_4;
	memset((&V_4), 0, sizeof(V_4));
	BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1* V_5 = NULL;
	uint64_t V_6 = 0;
	RuntimeObject* V_7 = NULL;
	BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* V_8 = NULL;
	BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660* V_9 = NULL;
	BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660* V_10 = NULL;
	BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660* V_11 = NULL;
	BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* V_12 = NULL;
	BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660* V_13 = NULL;
	int64_t V_14 = 0;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_15;
	memset((&V_15), 0, sizeof(V_15));
	RuntimeObject* V_16 = NULL;
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 V_17;
	memset((&V_17), 0, sizeof(V_17));
	BsonBinary_t10CD8515CA416C5958E3FA3290910E8FD2DFB8A8* V_18 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_19 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_20 = NULL;
	BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1* V_21 = NULL;
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_0 = ___t0;
		NullCheck(L_0);
		int8_t L_1;
		L_1 = VirtualFuncInvoker0< int8_t >::Invoke(4 /* Newtonsoft.Json.Bson.BsonType Newtonsoft.Json.Bson.BsonToken::get_Type() */, L_0);
		V_0 = L_1;
		int8_t L_2 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_2, 1)))
		{
			case 0:
			{
				goto IL_01d6;
			}
			case 1:
			{
				goto IL_01fb;
			}
			case 2:
			{
				goto IL_005c;
			}
			case 3:
			{
				goto IL_00f2;
			}
			case 4:
			{
				goto IL_02c9;
			}
			case 5:
			{
				goto IL_03b6;
			}
			case 6:
			{
				goto IL_030e;
			}
			case 7:
			{
				goto IL_022b;
			}
			case 8:
			{
				goto IL_023f;
			}
			case 9:
			{
				goto IL_03b6;
			}
			case 10:
			{
				goto IL_032e;
			}
			case 11:
			{
				goto IL_0391;
			}
			case 12:
			{
				goto IL_0391;
			}
			case 13:
			{
				goto IL_0391;
			}
			case 14:
			{
				goto IL_0391;
			}
			case 15:
			{
				goto IL_018c;
			}
			case 16:
			{
				goto IL_0391;
			}
			case 17:
			{
				goto IL_01b1;
			}
		}
	}
	{
		goto IL_0391;
	}

IL_005c:
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_3 = ___t0;
		V_1 = ((BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB*)CastclassClass((RuntimeObject*)L_3, BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB_il2cpp_TypeInfo_var));
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_4 = __this->____writer_1;
		BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB* L_5 = V_1;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = BsonToken_get_CalculatedSize_mBEC94C9A9175992741A3554721F83D78CBC3CC0C_inline(L_5, NULL);
		NullCheck(L_4);
		VirtualActionInvoker1< int32_t >::Invoke(18 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_4, L_6);
		BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB* L_7 = V_1;
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = BsonObject_GetEnumerator_mD0C11E8BAC09FB62CA08FF674E3F7F23690AE14D(L_7, NULL);
		V_2 = L_8;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00db:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_9 = V_2;
					if (!L_9)
					{
						goto IL_00e4;
					}
				}
				{
					RuntimeObject* L_10 = V_2;
					NullCheck(L_10);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_10);
				}

IL_00e4:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00d1_1;
			}

IL_007d_1:
			{
				RuntimeObject* L_11 = V_2;
				NullCheck(L_11);
				BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE* L_12;
				L_12 = InterfaceFuncInvoker0< BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Bson.BsonProperty>::get_Current() */, IEnumerator_1_tE241CB87CC95A73A720D51ACEC78F0245F877C86_il2cpp_TypeInfo_var, L_11);
				V_3 = L_12;
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_13 = __this->____writer_1;
				BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE* L_14 = V_3;
				NullCheck(L_14);
				BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_15;
				L_15 = BsonProperty_get_Value_m0DAFFE451F84BACD72C5FF9F592D351117DB85F2_inline(L_14, NULL);
				NullCheck(L_15);
				int8_t L_16;
				L_16 = VirtualFuncInvoker0< int8_t >::Invoke(4 /* Newtonsoft.Json.Bson.BsonType Newtonsoft.Json.Bson.BsonToken::get_Type() */, L_15);
				NullCheck(L_13);
				VirtualActionInvoker1< int8_t >::Invoke(10 /* System.Void System.IO.BinaryWriter::Write(System.SByte) */, L_13, L_16);
				BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE* L_17 = V_3;
				NullCheck(L_17);
				BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_18;
				L_18 = BsonProperty_get_Name_mF70295B575263AB7307995C119732FBA89FB6FA9_inline(L_17, NULL);
				NullCheck(L_18);
				RuntimeObject* L_19;
				L_19 = BsonValue_get_Value_m5CEBB13E31BA015930CF1D8E23C464599CE249D2_inline(L_18, NULL);
				BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE* L_20 = V_3;
				NullCheck(L_20);
				BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_21;
				L_21 = BsonProperty_get_Name_mF70295B575263AB7307995C119732FBA89FB6FA9_inline(L_20, NULL);
				NullCheck(L_21);
				int32_t L_22;
				L_22 = BsonString_get_ByteCount_m513C4F508FF36F57B49B881321517CAC2CBE06E3_inline(L_21, NULL);
				il2cpp_codegen_initobj((&V_4), sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_23 = V_4;
				BsonBinaryWriter_WriteString_m8614BA54CB21C5D68D63EE7B4377049F8C838801(__this, ((String_t*)CastclassSealed((RuntimeObject*)L_19, String_t_il2cpp_TypeInfo_var)), L_22, L_23, NULL);
				BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE* L_24 = V_3;
				NullCheck(L_24);
				BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_25;
				L_25 = BsonProperty_get_Value_m0DAFFE451F84BACD72C5FF9F592D351117DB85F2_inline(L_24, NULL);
				BsonBinaryWriter_WriteTokenInternal_m54C0EA96679D81C5022FD97C4499657E1D38DA7E(__this, L_25, NULL);
			}

IL_00d1_1:
			{
				RuntimeObject* L_26 = V_2;
				NullCheck(L_26);
				bool L_27;
				L_27 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_26);
				if (L_27)
				{
					goto IL_007d_1;
				}
			}
			{
				goto IL_00e5;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e5:
	{
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_28 = __this->____writer_1;
		NullCheck(L_28);
		VirtualActionInvoker1< uint8_t >::Invoke(9 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_28, (uint8_t)0);
		return;
	}

IL_00f2:
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_29 = ___t0;
		V_5 = ((BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1*)CastclassClass((RuntimeObject*)L_29, BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1_il2cpp_TypeInfo_var));
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_30 = __this->____writer_1;
		BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1* L_31 = V_5;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = BsonToken_get_CalculatedSize_mBEC94C9A9175992741A3554721F83D78CBC3CC0C_inline(L_31, NULL);
		NullCheck(L_30);
		VirtualActionInvoker1< int32_t >::Invoke(18 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_30, L_32);
		V_6 = ((int64_t)0);
		BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1* L_33 = V_5;
		NullCheck(L_33);
		RuntimeObject* L_34;
		L_34 = BsonArray_GetEnumerator_m38E989DD847BFBA1D9AE6408890EBEC664E0729C(L_33, NULL);
		V_7 = L_34;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0173:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_35 = V_7;
					if (!L_35)
					{
						goto IL_017e;
					}
				}
				{
					RuntimeObject* L_36 = V_7;
					NullCheck(L_36);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_36);
				}

IL_017e:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0168_1;
			}

IL_011b_1:
			{
				RuntimeObject* L_37 = V_7;
				NullCheck(L_37);
				BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_38;
				L_38 = InterfaceFuncInvoker0< BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Bson.BsonToken>::get_Current() */, IEnumerator_1_t02CD314CF6671EA4E8F21A8C41D664B043C07DD3_il2cpp_TypeInfo_var, L_37);
				V_8 = L_38;
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_39 = __this->____writer_1;
				BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_40 = V_8;
				NullCheck(L_40);
				int8_t L_41;
				L_41 = VirtualFuncInvoker0< int8_t >::Invoke(4 /* Newtonsoft.Json.Bson.BsonType Newtonsoft.Json.Bson.BsonToken::get_Type() */, L_40);
				NullCheck(L_39);
				VirtualActionInvoker1< int8_t >::Invoke(10 /* System.Void System.IO.BinaryWriter::Write(System.SByte) */, L_39, L_41);
				il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
				CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_42;
				L_42 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
				String_t* L_43;
				L_43 = UInt64_ToString_mCDDACF05D6B5B3ECB10B1FEEE58ED3407973E7A7((&V_6), L_42, NULL);
				uint64_t L_44 = V_6;
				int32_t L_45;
				L_45 = MathUtils_IntLength_m23241F09F5280B9249FBD8D666E56C81E464919C(L_44, NULL);
				il2cpp_codegen_initobj((&V_4), sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_46 = V_4;
				BsonBinaryWriter_WriteString_m8614BA54CB21C5D68D63EE7B4377049F8C838801(__this, L_43, L_45, L_46, NULL);
				BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_47 = V_8;
				BsonBinaryWriter_WriteTokenInternal_m54C0EA96679D81C5022FD97C4499657E1D38DA7E(__this, L_47, NULL);
				uint64_t L_48 = V_6;
				V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_48, ((int64_t)1)));
			}

IL_0168_1:
			{
				RuntimeObject* L_49 = V_7;
				NullCheck(L_49);
				bool L_50;
				L_50 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_49);
				if (L_50)
				{
					goto IL_011b_1;
				}
			}
			{
				goto IL_017f;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_017f:
	{
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_51 = __this->____writer_1;
		NullCheck(L_51);
		VirtualActionInvoker1< uint8_t >::Invoke(9 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_51, (uint8_t)0);
		return;
	}

IL_018c:
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_52 = ___t0;
		V_9 = ((BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660*)CastclassClass((RuntimeObject*)L_52, BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660_il2cpp_TypeInfo_var));
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_53 = __this->____writer_1;
		BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660* L_54 = V_9;
		NullCheck(L_54);
		RuntimeObject* L_55;
		L_55 = BsonValue_get_Value_m5CEBB13E31BA015930CF1D8E23C464599CE249D2_inline(L_54, NULL);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_56;
		L_56 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int32_t L_57;
		L_57 = Convert_ToInt32_m5C8BF1D45F508E7AEDA393AE72555148527E3ED3(L_55, L_56, NULL);
		NullCheck(L_53);
		VirtualActionInvoker1< int32_t >::Invoke(18 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_53, L_57);
		return;
	}

IL_01b1:
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_58 = ___t0;
		V_10 = ((BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660*)CastclassClass((RuntimeObject*)L_58, BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660_il2cpp_TypeInfo_var));
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_59 = __this->____writer_1;
		BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660* L_60 = V_10;
		NullCheck(L_60);
		RuntimeObject* L_61;
		L_61 = BsonValue_get_Value_m5CEBB13E31BA015930CF1D8E23C464599CE249D2_inline(L_60, NULL);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_62;
		L_62 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int64_t L_63;
		L_63 = Convert_ToInt64_m6CA00ABB70FAD8242C62ED9913F7D7C3B811FC31(L_61, L_62, NULL);
		NullCheck(L_59);
		VirtualActionInvoker1< int64_t >::Invoke(20 /* System.Void System.IO.BinaryWriter::Write(System.Int64) */, L_59, L_63);
		return;
	}

IL_01d6:
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_64 = ___t0;
		V_11 = ((BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660*)CastclassClass((RuntimeObject*)L_64, BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660_il2cpp_TypeInfo_var));
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_65 = __this->____writer_1;
		BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660* L_66 = V_11;
		NullCheck(L_66);
		RuntimeObject* L_67;
		L_67 = BsonValue_get_Value_m5CEBB13E31BA015930CF1D8E23C464599CE249D2_inline(L_66, NULL);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_68;
		L_68 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		double L_69;
		L_69 = Convert_ToDouble_m8DED60F2E0251A3D389F1DD22AA5AF9CD440ABE8(L_67, L_68, NULL);
		NullCheck(L_65);
		VirtualActionInvoker1< double >::Invoke(15 /* System.Void System.IO.BinaryWriter::Write(System.Double) */, L_65, L_69);
		return;
	}

IL_01fb:
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_70 = ___t0;
		V_12 = ((BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE*)CastclassClass((RuntimeObject*)L_70, BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE_il2cpp_TypeInfo_var));
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_71 = V_12;
		NullCheck(L_71);
		RuntimeObject* L_72;
		L_72 = BsonValue_get_Value_m5CEBB13E31BA015930CF1D8E23C464599CE249D2_inline(L_71, NULL);
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_73 = V_12;
		NullCheck(L_73);
		int32_t L_74;
		L_74 = BsonString_get_ByteCount_m513C4F508FF36F57B49B881321517CAC2CBE06E3_inline(L_73, NULL);
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_75 = V_12;
		NullCheck(L_75);
		int32_t L_76;
		L_76 = BsonToken_get_CalculatedSize_mBEC94C9A9175992741A3554721F83D78CBC3CC0C_inline(L_75, NULL);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_77;
		memset((&L_77), 0, sizeof(L_77));
		Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703((&L_77), ((int32_t)il2cpp_codegen_subtract(L_76, 4)), /*hidden argument*/Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		BsonBinaryWriter_WriteString_m8614BA54CB21C5D68D63EE7B4377049F8C838801(__this, ((String_t*)CastclassSealed((RuntimeObject*)L_72, String_t_il2cpp_TypeInfo_var)), L_74, L_77, NULL);
		return;
	}

IL_022b:
	{
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_78 = __this->____writer_1;
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_79 = ___t0;
		il2cpp_codegen_runtime_class_init_inline(BsonBoolean_tCDA0063DFA3B0C789C19533BFA53A6E7CCD644BD_il2cpp_TypeInfo_var);
		BsonBoolean_tCDA0063DFA3B0C789C19533BFA53A6E7CCD644BD* L_80 = ((BsonBoolean_tCDA0063DFA3B0C789C19533BFA53A6E7CCD644BD_StaticFields*)il2cpp_codegen_static_fields_for(BsonBoolean_tCDA0063DFA3B0C789C19533BFA53A6E7CCD644BD_il2cpp_TypeInfo_var))->___True_5;
		NullCheck(L_78);
		VirtualActionInvoker1< bool >::Invoke(8 /* System.Void System.IO.BinaryWriter::Write(System.Boolean) */, L_78, (bool)((((RuntimeObject*)(BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4*)L_79) == ((RuntimeObject*)(BsonBoolean_tCDA0063DFA3B0C789C19533BFA53A6E7CCD644BD*)L_80))? 1 : 0));
		return;
	}

IL_023f:
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_81 = ___t0;
		V_13 = ((BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660*)CastclassClass((RuntimeObject*)L_81, BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660_il2cpp_TypeInfo_var));
		V_14 = ((int64_t)0);
		BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660* L_82 = V_13;
		NullCheck(L_82);
		RuntimeObject* L_83;
		L_83 = BsonValue_get_Value_m5CEBB13E31BA015930CF1D8E23C464599CE249D2_inline(L_82, NULL);
		V_16 = L_83;
		RuntimeObject* L_84 = V_16;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_84, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var)))
		{
			goto IL_0298;
		}
	}
	{
		RuntimeObject* L_85 = V_16;
		V_15 = ((*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)((DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)UnBox(L_85, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var))));
		int32_t L_86;
		L_86 = BsonBinaryWriter_get_DateTimeKindHandling_m90614E0F1C0F02A38281C923194D7339F536664F_inline(__this, NULL);
		if ((!(((uint32_t)L_86) == ((uint32_t)1))))
		{
			goto IL_027a;
		}
	}
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_87;
		L_87 = DateTime_ToUniversalTime_m52CA1EAD0BE0A357BCACC38747ECA4A8810155A9((&V_15), NULL);
		V_15 = L_87;
		goto IL_028c;
	}

IL_027a:
	{
		int32_t L_88;
		L_88 = BsonBinaryWriter_get_DateTimeKindHandling_m90614E0F1C0F02A38281C923194D7339F536664F_inline(__this, NULL);
		if ((!(((uint32_t)L_88) == ((uint32_t)2))))
		{
			goto IL_028c;
		}
	}
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_89;
		L_89 = DateTime_ToLocalTime_mD87626169251A26AF699DAE90A1C31190AD30B94((&V_15), NULL);
		V_15 = L_89;
	}

IL_028c:
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_90 = V_15;
		il2cpp_codegen_runtime_class_init_inline(DateTimeUtils_t08EF5030CF29329A3646A81F48D1F440A6234121_il2cpp_TypeInfo_var);
		int64_t L_91;
		L_91 = DateTimeUtils_ConvertDateTimeToJavaScriptTicks_mA2ACEC25DDFC8FD1CD43D6368BDF4FB612B453B8(L_90, (bool)0, NULL);
		V_14 = L_91;
		goto IL_02bb;
	}

IL_0298:
	{
		BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660* L_92 = V_13;
		NullCheck(L_92);
		RuntimeObject* L_93;
		L_93 = BsonValue_get_Value_m5CEBB13E31BA015930CF1D8E23C464599CE249D2_inline(L_92, NULL);
		V_17 = ((*(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4*)((DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4*)(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4*)UnBox(L_93, DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var))));
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_94;
		L_94 = DateTimeOffset_get_UtcDateTime_mE7EB39F361C89E1367CBC03C3410BA34F194DA40((&V_17), NULL);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_95;
		L_95 = DateTimeOffset_get_Offset_mE90E2548227F1EE8BF4A6A5EB71B32D48D3035A4((&V_17), NULL);
		il2cpp_codegen_runtime_class_init_inline(DateTimeUtils_t08EF5030CF29329A3646A81F48D1F440A6234121_il2cpp_TypeInfo_var);
		int64_t L_96;
		L_96 = DateTimeUtils_ConvertDateTimeToJavaScriptTicks_m0D5815D6340AC9707A7FD04B27F2101845CC598F(L_94, L_95, NULL);
		V_14 = L_96;
	}

IL_02bb:
	{
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_97 = __this->____writer_1;
		int64_t L_98 = V_14;
		NullCheck(L_97);
		VirtualActionInvoker1< int64_t >::Invoke(20 /* System.Void System.IO.BinaryWriter::Write(System.Int64) */, L_97, L_98);
		return;
	}

IL_02c9:
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_99 = ___t0;
		V_18 = ((BsonBinary_t10CD8515CA416C5958E3FA3290910E8FD2DFB8A8*)CastclassClass((RuntimeObject*)L_99, BsonBinary_t10CD8515CA416C5958E3FA3290910E8FD2DFB8A8_il2cpp_TypeInfo_var));
		BsonBinary_t10CD8515CA416C5958E3FA3290910E8FD2DFB8A8* L_100 = V_18;
		NullCheck(L_100);
		RuntimeObject* L_101;
		L_101 = BsonValue_get_Value_m5CEBB13E31BA015930CF1D8E23C464599CE249D2_inline(L_100, NULL);
		V_19 = ((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)Castclass((RuntimeObject*)L_101, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var));
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_102 = __this->____writer_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_103 = V_19;
		NullCheck(L_103);
		NullCheck(L_102);
		VirtualActionInvoker1< int32_t >::Invoke(18 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_102, ((int32_t)(((RuntimeArray*)L_103)->max_length)));
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_104 = __this->____writer_1;
		BsonBinary_t10CD8515CA416C5958E3FA3290910E8FD2DFB8A8* L_105 = V_18;
		NullCheck(L_105);
		uint8_t L_106;
		L_106 = BsonBinary_get_BinaryType_mDE0AC23257F594CDF9EECBBD6C9BF59D998DD91B_inline(L_105, NULL);
		NullCheck(L_104);
		VirtualActionInvoker1< uint8_t >::Invoke(9 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_104, L_106);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_107 = __this->____writer_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_108 = V_19;
		NullCheck(L_107);
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(11 /* System.Void System.IO.BinaryWriter::Write(System.Byte[]) */, L_107, L_108);
		return;
	}

IL_030e:
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_109 = ___t0;
		NullCheck(((BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660*)CastclassClass((RuntimeObject*)L_109, BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660_il2cpp_TypeInfo_var)));
		RuntimeObject* L_110;
		L_110 = BsonValue_get_Value_m5CEBB13E31BA015930CF1D8E23C464599CE249D2_inline(((BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660*)CastclassClass((RuntimeObject*)L_109, BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660_il2cpp_TypeInfo_var)), NULL);
		V_20 = ((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)Castclass((RuntimeObject*)L_110, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var));
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_111 = __this->____writer_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_112 = V_20;
		NullCheck(L_111);
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(11 /* System.Void System.IO.BinaryWriter::Write(System.Byte[]) */, L_111, L_112);
		return;
	}

IL_032e:
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_113 = ___t0;
		V_21 = ((BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1*)CastclassClass((RuntimeObject*)L_113, BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1_il2cpp_TypeInfo_var));
		BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1* L_114 = V_21;
		NullCheck(L_114);
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_115;
		L_115 = BsonRegex_get_Pattern_mA699B72A76008CE662D1715632112D68F8BB85CC_inline(L_114, NULL);
		NullCheck(L_115);
		RuntimeObject* L_116;
		L_116 = BsonValue_get_Value_m5CEBB13E31BA015930CF1D8E23C464599CE249D2_inline(L_115, NULL);
		BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1* L_117 = V_21;
		NullCheck(L_117);
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_118;
		L_118 = BsonRegex_get_Pattern_mA699B72A76008CE662D1715632112D68F8BB85CC_inline(L_117, NULL);
		NullCheck(L_118);
		int32_t L_119;
		L_119 = BsonString_get_ByteCount_m513C4F508FF36F57B49B881321517CAC2CBE06E3_inline(L_118, NULL);
		il2cpp_codegen_initobj((&V_4), sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_120 = V_4;
		BsonBinaryWriter_WriteString_m8614BA54CB21C5D68D63EE7B4377049F8C838801(__this, ((String_t*)CastclassSealed((RuntimeObject*)L_116, String_t_il2cpp_TypeInfo_var)), L_119, L_120, NULL);
		BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1* L_121 = V_21;
		NullCheck(L_121);
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_122;
		L_122 = BsonRegex_get_Options_mDCE4C399FD3DB3BE40F013A3458CCCD0FCB44211_inline(L_121, NULL);
		NullCheck(L_122);
		RuntimeObject* L_123;
		L_123 = BsonValue_get_Value_m5CEBB13E31BA015930CF1D8E23C464599CE249D2_inline(L_122, NULL);
		BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1* L_124 = V_21;
		NullCheck(L_124);
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_125;
		L_125 = BsonRegex_get_Options_mDCE4C399FD3DB3BE40F013A3458CCCD0FCB44211_inline(L_124, NULL);
		NullCheck(L_125);
		int32_t L_126;
		L_126 = BsonString_get_ByteCount_m513C4F508FF36F57B49B881321517CAC2CBE06E3_inline(L_125, NULL);
		il2cpp_codegen_initobj((&V_4), sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_127 = V_4;
		BsonBinaryWriter_WriteString_m8614BA54CB21C5D68D63EE7B4377049F8C838801(__this, ((String_t*)CastclassSealed((RuntimeObject*)L_123, String_t_il2cpp_TypeInfo_var)), L_126, L_127, NULL);
		return;
	}

IL_0391:
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var)));
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_128;
		L_128 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_129 = ___t0;
		NullCheck(L_129);
		int8_t L_130;
		L_130 = VirtualFuncInvoker0< int8_t >::Invoke(4 /* Newtonsoft.Json.Bson.BsonType Newtonsoft.Json.Bson.BsonToken::get_Type() */, L_129);
		int8_t L_131 = L_130;
		RuntimeObject* L_132 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonType_tB6A96FAF144D5C44C1B6071029D7FBBCF806AF51_il2cpp_TypeInfo_var)), &L_131);
		String_t* L_133;
		L_133 = StringUtils_FormatWith_m97587965D365EA1584A7D31B57D618E7768073E5(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6E0489F9FAF23DF58DCABE03DAEB479BD06406A5)), L_128, L_132, NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_134 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_134);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_134, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6B866DCFF4A3EC3D3C30879F029D88106601B1B2)), L_133, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_134, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonBinaryWriter_WriteTokenInternal_m54C0EA96679D81C5022FD97C4499657E1D38DA7E_RuntimeMethod_var)));
	}

IL_03b6:
	{
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonBinaryWriter::WriteString(System.String,System.Int32,System.Nullable`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonBinaryWriter_WriteString_m8614BA54CB21C5D68D63EE7B4377049F8C838801 (BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* __this, String_t* ___s0, int32_t ___byteCount1, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___calculatedlengthPrefix2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline((&___calculatedlengthPrefix2), Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_1 = __this->____writer_1;
		int32_t L_2;
		L_2 = Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_inline((&___calculatedlengthPrefix2), Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var);
		NullCheck(L_1);
		VirtualActionInvoker1< int32_t >::Invoke(18 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_1, L_2);
	}

IL_001b:
	{
		String_t* L_3 = ___s0;
		int32_t L_4 = ___byteCount1;
		BsonBinaryWriter_WriteUtf8Bytes_m8D5ECCD51C6AB60CE140EF0AF33E9E5C6A1485AB(__this, L_3, L_4, NULL);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_5 = __this->____writer_1;
		NullCheck(L_5);
		VirtualActionInvoker1< uint8_t >::Invoke(9 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_5, (uint8_t)0);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonBinaryWriter::WriteUtf8Bytes(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonBinaryWriter_WriteUtf8Bytes_m8D5ECCD51C6AB60CE140EF0AF33E9E5C6A1485AB (BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* __this, String_t* ___s0, int32_t ___byteCount1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		String_t* L_0 = ___s0;
		if (!L_0)
		{
			goto IL_0069;
		}
	}
	{
		int32_t L_1 = ___byteCount1;
		if ((((int32_t)L_1) > ((int32_t)((int32_t)256))))
		{
			goto IL_0051;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->____largeByteBuffer_2;
		if (L_2)
		{
			goto IL_0023;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		__this->____largeByteBuffer_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____largeByteBuffer_2), (void*)L_3);
	}

IL_0023:
	{
		il2cpp_codegen_runtime_class_init_inline(BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09_il2cpp_TypeInfo_var);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_4 = ((BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09_StaticFields*)il2cpp_codegen_static_fields_for(BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09_il2cpp_TypeInfo_var))->___Encoding_0;
		String_t* L_5 = ___s0;
		String_t* L_6 = ___s0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_6, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = __this->____largeByteBuffer_2;
		NullCheck(L_4);
		int32_t L_9;
		L_9 = VirtualFuncInvoker5< int32_t, String_t*, int32_t, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(19 /* System.Int32 System.Text.Encoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32) */, L_4, L_5, 0, L_7, L_8, 0);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_10 = __this->____writer_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->____largeByteBuffer_2;
		int32_t L_12 = ___byteCount1;
		NullCheck(L_10);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(12 /* System.Void System.IO.BinaryWriter::Write(System.Byte[],System.Int32,System.Int32) */, L_10, L_11, 0, L_12);
		return;
	}

IL_0051:
	{
		il2cpp_codegen_runtime_class_init_inline(BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09_il2cpp_TypeInfo_var);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_13 = ((BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09_StaticFields*)il2cpp_codegen_static_fields_for(BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09_il2cpp_TypeInfo_var))->___Encoding_0;
		String_t* L_14 = ___s0;
		NullCheck(L_13);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15;
		L_15 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_13, L_14);
		V_0 = L_15;
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_16 = __this->____writer_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_0;
		NullCheck(L_16);
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(11 /* System.Void System.IO.BinaryWriter::Write(System.Byte[]) */, L_16, L_17);
	}

IL_0069:
	{
		return;
	}
}
// System.Int32 Newtonsoft.Json.Bson.BsonBinaryWriter::CalculateSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BsonBinaryWriter_CalculateSize_m2AF1B2832ECDC9964A31AA22CD528C0514BCAE46 (BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* __this, int32_t ___stringByteCount0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___stringByteCount0;
		return ((int32_t)il2cpp_codegen_add(L_0, 1));
	}
}
// System.Int32 Newtonsoft.Json.Bson.BsonBinaryWriter::CalculateSizeWithLength(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BsonBinaryWriter_CalculateSizeWithLength_mB26898787AEA883063A203D7B1C2325586B6E737 (BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* __this, int32_t ___stringByteCount0, bool ___includeSize1, const RuntimeMethod* method) 
{
	int32_t G_B3_0 = 0;
	{
		bool L_0 = ___includeSize1;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = 1;
		goto IL_0007;
	}

IL_0006:
	{
		G_B3_0 = 5;
	}

IL_0007:
	{
		int32_t L_1 = ___stringByteCount0;
		return ((int32_t)il2cpp_codegen_add(G_B3_0, L_1));
	}
}
// System.Int32 Newtonsoft.Json.Bson.BsonBinaryWriter::CalculateSize(Newtonsoft.Json.Bson.BsonToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BsonBinaryWriter_CalculateSize_mC09EDD18FAF0B2E65A36FCC6D0C7615EE1544907 (BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* __this, BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* ___t0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonBinary_t10CD8515CA416C5958E3FA3290910E8FD2DFB8A8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t02CD314CF6671EA4E8F21A8C41D664B043C07DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tE241CB87CC95A73A720D51ACEC78F0245F877C86_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int8_t V_0 = 0;
	BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE* V_4 = NULL;
	int32_t V_5 = 0;
	BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1* V_6 = NULL;
	int32_t V_7 = 0;
	uint64_t V_8 = 0;
	RuntimeObject* V_9 = NULL;
	BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* V_10 = NULL;
	BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* V_11 = NULL;
	String_t* V_12 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_13 = NULL;
	BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1* V_14 = NULL;
	int32_t V_15 = 0;
	BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* G_B25_0 = NULL;
	BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* G_B24_0 = NULL;
	int32_t G_B26_0 = 0;
	BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* G_B26_1 = NULL;
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_0 = ___t0;
		NullCheck(L_0);
		int8_t L_1;
		L_1 = VirtualFuncInvoker0< int8_t >::Invoke(4 /* Newtonsoft.Json.Bson.BsonType Newtonsoft.Json.Bson.BsonToken::get_Type() */, L_0);
		V_0 = L_1;
		int8_t L_2 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_2, 1)))
		{
			case 0:
			{
				goto IL_0144;
			}
			case 1:
			{
				goto IL_0146;
			}
			case 2:
			{
				goto IL_005c;
			}
			case 3:
			{
				goto IL_00c3;
			}
			case 4:
			{
				goto IL_019f;
			}
			case 5:
			{
				goto IL_019b;
			}
			case 6:
			{
				goto IL_01c4;
			}
			case 7:
			{
				goto IL_0199;
			}
			case 8:
			{
				goto IL_019d;
			}
			case 9:
			{
				goto IL_019b;
			}
			case 10:
			{
				goto IL_01c7;
			}
			case 11:
			{
				goto IL_0207;
			}
			case 12:
			{
				goto IL_0207;
			}
			case 13:
			{
				goto IL_0207;
			}
			case 14:
			{
				goto IL_0207;
			}
			case 15:
			{
				goto IL_0140;
			}
			case 16:
			{
				goto IL_0207;
			}
			case 17:
			{
				goto IL_0142;
			}
		}
	}
	{
		goto IL_0207;
	}

IL_005c:
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_3 = ___t0;
		V_1 = ((BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB*)CastclassClass((RuntimeObject*)L_3, BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB_il2cpp_TypeInfo_var));
		V_2 = 4;
		BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB* L_4 = V_1;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = BsonObject_GetEnumerator_mD0C11E8BAC09FB62CA08FF674E3F7F23690AE14D(L_4, NULL);
		V_3 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ac:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_6 = V_3;
					if (!L_6)
					{
						goto IL_00b5;
					}
				}
				{
					RuntimeObject* L_7 = V_3;
					NullCheck(L_7);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_7);
				}

IL_00b5:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00a2_1;
			}

IL_006e_1:
			{
				RuntimeObject* L_8 = V_3;
				NullCheck(L_8);
				BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE* L_9;
				L_9 = InterfaceFuncInvoker0< BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Bson.BsonProperty>::get_Current() */, IEnumerator_1_tE241CB87CC95A73A720D51ACEC78F0245F877C86_il2cpp_TypeInfo_var, L_8);
				V_4 = L_9;
				V_5 = 1;
				int32_t L_10 = V_5;
				BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE* L_11 = V_4;
				NullCheck(L_11);
				BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_12;
				L_12 = BsonProperty_get_Name_mF70295B575263AB7307995C119732FBA89FB6FA9_inline(L_11, NULL);
				int32_t L_13;
				L_13 = BsonBinaryWriter_CalculateSize_mC09EDD18FAF0B2E65A36FCC6D0C7615EE1544907(__this, L_12, NULL);
				V_5 = ((int32_t)il2cpp_codegen_add(L_10, L_13));
				int32_t L_14 = V_5;
				BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE* L_15 = V_4;
				NullCheck(L_15);
				BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_16;
				L_16 = BsonProperty_get_Value_m0DAFFE451F84BACD72C5FF9F592D351117DB85F2_inline(L_15, NULL);
				int32_t L_17;
				L_17 = BsonBinaryWriter_CalculateSize_mC09EDD18FAF0B2E65A36FCC6D0C7615EE1544907(__this, L_16, NULL);
				V_5 = ((int32_t)il2cpp_codegen_add(L_14, L_17));
				int32_t L_18 = V_2;
				int32_t L_19 = V_5;
				V_2 = ((int32_t)il2cpp_codegen_add(L_18, L_19));
			}

IL_00a2_1:
			{
				RuntimeObject* L_20 = V_3;
				NullCheck(L_20);
				bool L_21;
				L_21 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_20);
				if (L_21)
				{
					goto IL_006e_1;
				}
			}
			{
				goto IL_00b6;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b6:
	{
		int32_t L_22 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB* L_23 = V_1;
		int32_t L_24 = V_2;
		NullCheck(L_23);
		BsonToken_set_CalculatedSize_m50B0EAD822D053F2B1B5DCC6AC1413DF69B8FCAB_inline(L_23, L_24, NULL);
		int32_t L_25 = V_2;
		return L_25;
	}

IL_00c3:
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_26 = ___t0;
		V_6 = ((BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1*)CastclassClass((RuntimeObject*)L_26, BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1_il2cpp_TypeInfo_var));
		V_7 = 4;
		V_8 = ((int64_t)0);
		BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1* L_27 = V_6;
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = BsonArray_GetEnumerator_m38E989DD847BFBA1D9AE6408890EBEC664E0729C(L_27, NULL);
		V_9 = L_28;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_011d:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_29 = V_9;
					if (!L_29)
					{
						goto IL_0128;
					}
				}
				{
					RuntimeObject* L_30 = V_9;
					NullCheck(L_30);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_30);
				}

IL_0128:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0112_1;
			}

IL_00dd_1:
			{
				RuntimeObject* L_31 = V_9;
				NullCheck(L_31);
				BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_32;
				L_32 = InterfaceFuncInvoker0< BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Bson.BsonToken>::get_Current() */, IEnumerator_1_t02CD314CF6671EA4E8F21A8C41D664B043C07DD3_il2cpp_TypeInfo_var, L_31);
				V_10 = L_32;
				int32_t L_33 = V_7;
				V_7 = ((int32_t)il2cpp_codegen_add(L_33, 1));
				int32_t L_34 = V_7;
				uint64_t L_35 = V_8;
				int32_t L_36;
				L_36 = MathUtils_IntLength_m23241F09F5280B9249FBD8D666E56C81E464919C(L_35, NULL);
				int32_t L_37;
				L_37 = BsonBinaryWriter_CalculateSize_m2AF1B2832ECDC9964A31AA22CD528C0514BCAE46(__this, L_36, NULL);
				V_7 = ((int32_t)il2cpp_codegen_add(L_34, L_37));
				int32_t L_38 = V_7;
				BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_39 = V_10;
				int32_t L_40;
				L_40 = BsonBinaryWriter_CalculateSize_mC09EDD18FAF0B2E65A36FCC6D0C7615EE1544907(__this, L_39, NULL);
				V_7 = ((int32_t)il2cpp_codegen_add(L_38, L_40));
				uint64_t L_41 = V_8;
				V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)1)));
			}

IL_0112_1:
			{
				RuntimeObject* L_42 = V_9;
				NullCheck(L_42);
				bool L_43;
				L_43 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_42);
				if (L_43)
				{
					goto IL_00dd_1;
				}
			}
			{
				goto IL_0129;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0129:
	{
		int32_t L_44 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_44, 1));
		BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1* L_45 = V_6;
		int32_t L_46 = V_7;
		NullCheck(L_45);
		BsonToken_set_CalculatedSize_m50B0EAD822D053F2B1B5DCC6AC1413DF69B8FCAB_inline(L_45, L_46, NULL);
		BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1* L_47 = V_6;
		NullCheck(L_47);
		int32_t L_48;
		L_48 = BsonToken_get_CalculatedSize_mBEC94C9A9175992741A3554721F83D78CBC3CC0C_inline(L_47, NULL);
		return L_48;
	}

IL_0140:
	{
		return 4;
	}

IL_0142:
	{
		return 8;
	}

IL_0144:
	{
		return 8;
	}

IL_0146:
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_49 = ___t0;
		V_11 = ((BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE*)CastclassClass((RuntimeObject*)L_49, BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE_il2cpp_TypeInfo_var));
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_50 = V_11;
		NullCheck(L_50);
		RuntimeObject* L_51;
		L_51 = BsonValue_get_Value_m5CEBB13E31BA015930CF1D8E23C464599CE249D2_inline(L_50, NULL);
		V_12 = ((String_t*)CastclassSealed((RuntimeObject*)L_51, String_t_il2cpp_TypeInfo_var));
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_52 = V_11;
		String_t* L_53 = V_12;
		G_B24_0 = L_52;
		if (L_53)
		{
			G_B25_0 = L_52;
			goto IL_0165;
		}
	}
	{
		G_B26_0 = 0;
		G_B26_1 = G_B24_0;
		goto IL_0171;
	}

IL_0165:
	{
		il2cpp_codegen_runtime_class_init_inline(BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09_il2cpp_TypeInfo_var);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_54 = ((BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09_StaticFields*)il2cpp_codegen_static_fields_for(BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09_il2cpp_TypeInfo_var))->___Encoding_0;
		String_t* L_55 = V_12;
		NullCheck(L_54);
		int32_t L_56;
		L_56 = VirtualFuncInvoker1< int32_t, String_t* >::Invoke(11 /* System.Int32 System.Text.Encoding::GetByteCount(System.String) */, L_54, L_55);
		G_B26_0 = L_56;
		G_B26_1 = G_B25_0;
	}

IL_0171:
	{
		NullCheck(G_B26_1);
		BsonString_set_ByteCount_m31A317821BECC7731FA48F92B5433200A6515BCF_inline(G_B26_1, G_B26_0, NULL);
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_57 = V_11;
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_58 = V_11;
		NullCheck(L_58);
		int32_t L_59;
		L_59 = BsonString_get_ByteCount_m513C4F508FF36F57B49B881321517CAC2CBE06E3_inline(L_58, NULL);
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_60 = V_11;
		NullCheck(L_60);
		bool L_61;
		L_61 = BsonString_get_IncludeLength_m0E82D14B7DF5B53FBCD95D5891C3F79E96462D2D_inline(L_60, NULL);
		int32_t L_62;
		L_62 = BsonBinaryWriter_CalculateSizeWithLength_mB26898787AEA883063A203D7B1C2325586B6E737(__this, L_59, L_61, NULL);
		NullCheck(L_57);
		BsonToken_set_CalculatedSize_m50B0EAD822D053F2B1B5DCC6AC1413DF69B8FCAB_inline(L_57, L_62, NULL);
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_63 = V_11;
		NullCheck(L_63);
		int32_t L_64;
		L_64 = BsonToken_get_CalculatedSize_mBEC94C9A9175992741A3554721F83D78CBC3CC0C_inline(L_63, NULL);
		return L_64;
	}

IL_0199:
	{
		return 1;
	}

IL_019b:
	{
		return 0;
	}

IL_019d:
	{
		return 8;
	}

IL_019f:
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_65 = ___t0;
		BsonBinary_t10CD8515CA416C5958E3FA3290910E8FD2DFB8A8* L_66 = ((BsonBinary_t10CD8515CA416C5958E3FA3290910E8FD2DFB8A8*)CastclassClass((RuntimeObject*)L_65, BsonBinary_t10CD8515CA416C5958E3FA3290910E8FD2DFB8A8_il2cpp_TypeInfo_var));
		NullCheck(L_66);
		RuntimeObject* L_67;
		L_67 = BsonValue_get_Value_m5CEBB13E31BA015930CF1D8E23C464599CE249D2_inline(L_66, NULL);
		V_13 = ((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)Castclass((RuntimeObject*)L_67, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var));
		BsonBinary_t10CD8515CA416C5958E3FA3290910E8FD2DFB8A8* L_68 = L_66;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_69 = V_13;
		NullCheck(L_69);
		NullCheck(L_68);
		BsonToken_set_CalculatedSize_m50B0EAD822D053F2B1B5DCC6AC1413DF69B8FCAB_inline(L_68, ((int32_t)il2cpp_codegen_add(5, ((int32_t)(((RuntimeArray*)L_69)->max_length)))), NULL);
		NullCheck(L_68);
		int32_t L_70;
		L_70 = BsonToken_get_CalculatedSize_mBEC94C9A9175992741A3554721F83D78CBC3CC0C_inline(L_68, NULL);
		return L_70;
	}

IL_01c4:
	{
		return ((int32_t)12);
	}

IL_01c7:
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_71 = ___t0;
		V_14 = ((BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1*)CastclassClass((RuntimeObject*)L_71, BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1_il2cpp_TypeInfo_var));
		V_15 = 0;
		int32_t L_72 = V_15;
		BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1* L_73 = V_14;
		NullCheck(L_73);
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_74;
		L_74 = BsonRegex_get_Pattern_mA699B72A76008CE662D1715632112D68F8BB85CC_inline(L_73, NULL);
		int32_t L_75;
		L_75 = BsonBinaryWriter_CalculateSize_mC09EDD18FAF0B2E65A36FCC6D0C7615EE1544907(__this, L_74, NULL);
		V_15 = ((int32_t)il2cpp_codegen_add(L_72, L_75));
		int32_t L_76 = V_15;
		BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1* L_77 = V_14;
		NullCheck(L_77);
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_78;
		L_78 = BsonRegex_get_Options_mDCE4C399FD3DB3BE40F013A3458CCCD0FCB44211_inline(L_77, NULL);
		int32_t L_79;
		L_79 = BsonBinaryWriter_CalculateSize_mC09EDD18FAF0B2E65A36FCC6D0C7615EE1544907(__this, L_78, NULL);
		V_15 = ((int32_t)il2cpp_codegen_add(L_76, L_79));
		BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1* L_80 = V_14;
		int32_t L_81 = V_15;
		NullCheck(L_80);
		BsonToken_set_CalculatedSize_m50B0EAD822D053F2B1B5DCC6AC1413DF69B8FCAB_inline(L_80, L_81, NULL);
		BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1* L_82 = V_14;
		NullCheck(L_82);
		int32_t L_83;
		L_83 = BsonToken_get_CalculatedSize_mBEC94C9A9175992741A3554721F83D78CBC3CC0C_inline(L_82, NULL);
		return L_83;
	}

IL_0207:
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var)));
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_84;
		L_84 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_85 = ___t0;
		NullCheck(L_85);
		int8_t L_86;
		L_86 = VirtualFuncInvoker0< int8_t >::Invoke(4 /* Newtonsoft.Json.Bson.BsonType Newtonsoft.Json.Bson.BsonToken::get_Type() */, L_85);
		int8_t L_87 = L_86;
		RuntimeObject* L_88 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonType_tB6A96FAF144D5C44C1B6071029D7FBBCF806AF51_il2cpp_TypeInfo_var)), &L_87);
		String_t* L_89;
		L_89 = StringUtils_FormatWith_m97587965D365EA1584A7D31B57D618E7768073E5(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6E0489F9FAF23DF58DCABE03DAEB479BD06406A5)), L_84, L_88, NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_90 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_90);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_90, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6B866DCFF4A3EC3D3C30879F029D88106601B1B2)), L_89, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_90, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonBinaryWriter_CalculateSize_mC09EDD18FAF0B2E65A36FCC6D0C7615EE1544907_RuntimeMethod_var)));
	}
}
// System.Void Newtonsoft.Json.Bson.BsonBinaryWriter::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonBinaryWriter__cctor_mA6BEC2932FB2A544F7527BCB1401C139932B39B2 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE* L_0 = (UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE*)il2cpp_codegen_object_new(UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UTF8Encoding__ctor_mBCC79DB57729512321FA4F0E17342F0D1A43EA34(L_0, (bool)0, NULL);
		((BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09_StaticFields*)il2cpp_codegen_static_fields_for(BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09_il2cpp_TypeInfo_var))->___Encoding_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09_StaticFields*)il2cpp_codegen_static_fields_for(BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09_il2cpp_TypeInfo_var))->___Encoding_0), (void*)L_0);
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
// System.Byte[] Newtonsoft.Json.Bson.BsonObjectId::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BsonObjectId_get_Value_mEBD0BBDDA460C3B1ECFFBD7B64C709172C7F14CD (BsonObjectId_tD1799B243CF7FF4983762AFD5AA7EED8287AF4C2* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___U3CValueU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonObjectId::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonObjectId__ctor_m755CAEE2BE89A3B5A751FE980FB1A333B3D603C8 (BsonObjectId_tD1799B243CF7FF4983762AFD5AA7EED8287AF4C2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		ValidationUtils_ArgumentNotNull_mC7EBE963D14FFCC7B90B08B403FF584EC520C888((RuntimeObject*)L_0, _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___value0;
		NullCheck(L_1);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))) == ((int32_t)((int32_t)12))))
		{
			goto IL_0028;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD76F2E16F30EA8C8C52D4ABD70B672BC7A3AEAB2)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonObjectId__ctor_m755CAEE2BE89A3B5A751FE980FB1A333B3D603C8_RuntimeMethod_var)));
	}

IL_0028:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___value0;
		__this->___U3CValueU3Ek__BackingField_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CValueU3Ek__BackingField_0), (void*)L_3);
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
// System.Boolean Newtonsoft.Json.Bson.BsonReader::get_JsonNet35BinaryCompatibility()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BsonReader_get_JsonNet35BinaryCompatibility_m429C63D604BDC2BBF8CFE35248B4D41371C1DAFE (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____jsonNet35BinaryCompatibility_28;
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonReader::set_JsonNet35BinaryCompatibility(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonReader_set_JsonNet35BinaryCompatibility_mE3AB448A934B558F6A32630E0D70440616570807 (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->____jsonNet35BinaryCompatibility_28 = L_0;
		return;
	}
}
// System.Boolean Newtonsoft.Json.Bson.BsonReader::get_ReadRootValueAsArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BsonReader_get_ReadRootValueAsArray_mA61EBEBB08A8483EFB848CC9FD3476F413FF0F24 (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____readRootValueAsArray_27;
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonReader::set_ReadRootValueAsArray(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonReader_set_ReadRootValueAsArray_m2FC5A40C553833F78193274168325865E54ABABA (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->____readRootValueAsArray_27 = L_0;
		return;
	}
}
// System.DateTimeKind Newtonsoft.Json.Bson.BsonReader::get_DateTimeKindHandling()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BsonReader_get_DateTimeKindHandling_m7A6ED156AAC7CD3D4343B0779E4ABD90E247333D (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____dateTimeKindHandling_29;
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonReader::set_DateTimeKindHandling(System.DateTimeKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonReader_set_DateTimeKindHandling_m9D015B7C7A3BD6C2C5418B42F7C0E1BBFB510E84 (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->____dateTimeKindHandling_29 = L_0;
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonReader::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonReader__ctor_mA390BC9C2C09F1B1A97A0F26430A1E1149D3AE9F (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___stream0;
		BsonReader__ctor_mF744C7E937F79AB3421D775693B583EB820168BF(__this, L_0, (bool)0, 2, NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonReader::.ctor(System.IO.BinaryReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonReader__ctor_m8DDC7432406DEBDC42DC0930E73ADC28E767C92B (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___reader0, const RuntimeMethod* method) 
{
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_0 = ___reader0;
		BsonReader__ctor_m5991340F78C61D5938CF823F1C7D309FEF4037FC(__this, L_0, (bool)0, 2, NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonReader::.ctor(System.IO.Stream,System.Boolean,System.DateTimeKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonReader__ctor_mF744C7E937F79AB3421D775693B583EB820168BF (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, bool ___readRootValueAsArray1, int32_t ___dateTimeKindHandling2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m51ABD0EBEBE9673A2608650D331CEE679D5029FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t944CCF3A156F251D4FD98B25EC08251DB21ADBC9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF7E6C53D86D8ADC0DB8EFC0A2CD9877CC8BC9914);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonReader__ctor_m1C65CDB90A8B108668938BBE17329FEC76D62C27(__this, NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___stream0;
		ValidationUtils_ArgumentNotNull_mC7EBE963D14FFCC7B90B08B403FF584EC520C888(L_0, _stringLiteralF7E6C53D86D8ADC0DB8EFC0A2CD9877CC8BC9914, NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = ___stream0;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_2 = (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158*)il2cpp_codegen_object_new(BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		BinaryReader__ctor_m898732FE0DBEDD480B24F6DE45A9AC696E44CC0F(L_2, L_1, NULL);
		__this->____reader_20 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____reader_20), (void*)L_2);
		List_1_t944CCF3A156F251D4FD98B25EC08251DB21ADBC9* L_3 = (List_1_t944CCF3A156F251D4FD98B25EC08251DB21ADBC9*)il2cpp_codegen_object_new(List_1_t944CCF3A156F251D4FD98B25EC08251DB21ADBC9_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_m51ABD0EBEBE9673A2608650D331CEE679D5029FC(L_3, List_1__ctor_m51ABD0EBEBE9673A2608650D331CEE679D5029FC_RuntimeMethod_var);
		__this->____stack_21 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____stack_21), (void*)L_3);
		bool L_4 = ___readRootValueAsArray1;
		__this->____readRootValueAsArray_27 = L_4;
		int32_t L_5 = ___dateTimeKindHandling2;
		__this->____dateTimeKindHandling_29 = L_5;
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonReader::.ctor(System.IO.BinaryReader,System.Boolean,System.DateTimeKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonReader__ctor_m5991340F78C61D5938CF823F1C7D309FEF4037FC (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___reader0, bool ___readRootValueAsArray1, int32_t ___dateTimeKindHandling2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m51ABD0EBEBE9673A2608650D331CEE679D5029FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t944CCF3A156F251D4FD98B25EC08251DB21ADBC9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralECAC83771A00C701043A940F621CC1C765D30D31);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonReader__ctor_m1C65CDB90A8B108668938BBE17329FEC76D62C27(__this, NULL);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_0 = ___reader0;
		ValidationUtils_ArgumentNotNull_mC7EBE963D14FFCC7B90B08B403FF584EC520C888(L_0, _stringLiteralECAC83771A00C701043A940F621CC1C765D30D31, NULL);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_1 = ___reader0;
		__this->____reader_20 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____reader_20), (void*)L_1);
		List_1_t944CCF3A156F251D4FD98B25EC08251DB21ADBC9* L_2 = (List_1_t944CCF3A156F251D4FD98B25EC08251DB21ADBC9*)il2cpp_codegen_object_new(List_1_t944CCF3A156F251D4FD98B25EC08251DB21ADBC9_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_m51ABD0EBEBE9673A2608650D331CEE679D5029FC(L_2, List_1__ctor_m51ABD0EBEBE9673A2608650D331CEE679D5029FC_RuntimeMethod_var);
		__this->____stack_21 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____stack_21), (void*)L_2);
		bool L_3 = ___readRootValueAsArray1;
		__this->____readRootValueAsArray_27 = L_3;
		int32_t L_4 = ___dateTimeKindHandling2;
		__this->____dateTimeKindHandling_29 = L_4;
		return;
	}
}
// System.String Newtonsoft.Json.Bson.BsonReader::ReadElement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BsonReader_ReadElement_m51016B8553A73DB79F38CF122BF6292662F4D754 (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) 
{
	{
		int8_t L_0;
		L_0 = BsonReader_ReadType_m609B4018D61DC17479EA954CAB7A4CF38F9ED691(__this, NULL);
		__this->____currentElementType_24 = L_0;
		String_t* L_1;
		L_1 = BsonReader_ReadString_m43756951ED9A74FE856F42E2CF1A1BE2AE341100(__this, NULL);
		return L_1;
	}
}
// System.Boolean Newtonsoft.Json.Bson.BsonReader::Read()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BsonReader_Read_mFEBE910985E708117F1DFB084E839D4EC4432C70 (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		{
			int32_t L_0 = __this->____bsonReaderState_25;
			V_1 = L_0;
			int32_t L_1 = V_1;
			switch (L_1)
			{
				case 0:
				{
					goto IL_0033_1;
				}
				case 1:
				{
					goto IL_003c_1;
				}
				case 2:
				{
					goto IL_003c_1;
				}
				case 3:
				{
					goto IL_003c_1;
				}
				case 4:
				{
					goto IL_0045_1;
				}
				case 5:
				{
					goto IL_0045_1;
				}
				case 6:
				{
					goto IL_0045_1;
				}
				case 7:
				{
					goto IL_0045_1;
				}
				case 8:
				{
					goto IL_0045_1;
				}
			}
		}
		{
			goto IL_004e_1;
		}

IL_0033_1:
		{
			bool L_2;
			L_2 = BsonReader_ReadNormal_m048652A5459D2B5D052FB068C5EC478734122EBF(__this, NULL);
			V_0 = L_2;
			goto IL_006f_1;
		}

IL_003c_1:
		{
			bool L_3;
			L_3 = BsonReader_ReadReference_mB9A96BD71CDF91482061F6C9074C2A83CB56E5F4(__this, NULL);
			V_0 = L_3;
			goto IL_006f_1;
		}

IL_0045_1:
		{
			bool L_4;
			L_4 = BsonReader_ReadCodeWScope_m0DA7805CE5A3D1CC83E1554C8015207538D1FF3E(__this, NULL);
			V_0 = L_4;
			goto IL_006f_1;
		}

IL_004e_1:
		{
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var)));
			CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_5;
			L_5 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
			int32_t L_6 = __this->____bsonReaderState_25;
			int32_t L_7 = L_6;
			RuntimeObject* L_8 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonReaderState_tD4B4396ABF029DAD64E0389C71168E3C4949B41F_il2cpp_TypeInfo_var)), &L_7);
			String_t* L_9;
			L_9 = StringUtils_FormatWith_m97587965D365EA1584A7D31B57D618E7768073E5(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFBAD954A5D5DC7494CB8B4AE55EDFCFE125A1338)), L_5, L_8, NULL);
			JsonReaderException_t44F3F6F2980FC806231B19A65F37D1E034B218DA* L_10;
			L_10 = JsonReaderException_Create_mE1CBC0A12B559F606A85F2450C4400676ABD6529(__this, L_9, NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonReader_Read_mFEBE910985E708117F1DFB084E839D4EC4432C70_RuntimeMethod_var)));
		}

IL_006f_1:
		{
			bool L_11 = V_0;
			if (L_11)
			{
				goto IL_007d_1;
			}
		}
		{
			JsonReader_SetToken_m9CB3201AB80BD12AF5490EE38B0AB1E667D5757B(__this, 0, NULL);
			V_2 = (bool)0;
			goto IL_008d;
		}

IL_007d_1:
		{
			V_2 = (bool)1;
			goto IL_008d;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0081;
		}
		throw e;
	}

CATCH_0081:
	{// begin catch(System.IO.EndOfStreamException)
		JsonReader_SetToken_m9CB3201AB80BD12AF5490EE38B0AB1E667D5757B(__this, 0, NULL);
		V_2 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_008d;
	}// end catch (depth: 1)

IL_008d:
	{
		bool L_12 = V_2;
		return L_12;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonReader::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonReader_Close_mD087C7D1ACBF9FEB47490BA47BE24298DFD86EC5 (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) 
{
	BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* G_B3_0 = NULL;
	BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* G_B2_0 = NULL;
	{
		JsonReader_Close_m68AD33DBE5DA0990DB82A21F3AB2D1F91AE49F84(__this, NULL);
		bool L_0;
		L_0 = JsonReader_get_CloseInput_m5D28FC12BD22B62AA1E493BC7A77402F1AA26DE4_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_1 = __this->____reader_20;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_2 = L_1;
		G_B2_0 = L_2;
		if (L_2)
		{
			G_B3_0 = L_2;
			goto IL_0019;
		}
	}
	{
		return;
	}

IL_0019:
	{
		NullCheck(G_B3_0);
		VirtualActionInvoker0::Invoke(6 /* System.Void System.IO.BinaryReader::Close() */, G_B3_0);
	}

IL_001e:
	{
		return;
	}
}
// System.Boolean Newtonsoft.Json.Bson.BsonReader::ReadCodeWScope()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BsonReader_ReadCodeWScope_m0DA7805CE5A3D1CC83E1554C8015207538D1FF3E (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15F434DE6EB05B31D391B12B5A8516BD141B7A93);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD63216A99D4FD683AD72F25F707C7D4A188E2029);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* V_1 = NULL;
	bool G_B10_0 = false;
	bool G_B8_0 = false;
	bool G_B9_0 = false;
	{
		int32_t L_0 = __this->____bsonReaderState_25;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, 4)))
		{
			case 0:
			{
				goto IL_0028;
			}
			case 1:
			{
				goto IL_003d;
			}
			case 2:
			{
				goto IL_005b;
			}
			case 3:
			{
				goto IL_009c;
			}
			case 4:
			{
				goto IL_00b7;
			}
		}
	}
	{
		goto IL_00c8;
	}

IL_0028:
	{
		JsonReader_SetToken_m57B521A8D559EBEC2CF1FED3001068F4F897FEFF(__this, 4, _stringLiteralD63216A99D4FD683AD72F25F707C7D4A188E2029, NULL);
		__this->____bsonReaderState_25 = 5;
		return (bool)1;
	}

IL_003d:
	{
		int32_t L_2;
		L_2 = BsonReader_ReadInt32_m403168A3B3CA3CC5FEA5459185257E8AF00FF986(__this, NULL);
		String_t* L_3;
		L_3 = BsonReader_ReadLengthString_m905B05A13227D4A2ECBFD9379E27D664A8D071AA(__this, NULL);
		JsonReader_SetToken_m57B521A8D559EBEC2CF1FED3001068F4F897FEFF(__this, ((int32_t)9), L_3, NULL);
		__this->____bsonReaderState_25 = 6;
		return (bool)1;
	}

IL_005b:
	{
		int32_t L_4;
		L_4 = JsonReader_get_CurrentState_m2B6FA669883053CDABF108A980F808CDC9F13699_inline(__this, NULL);
		if ((!(((uint32_t)L_4) == ((uint32_t)8))))
		{
			goto IL_0072;
		}
	}
	{
		JsonReader_SetToken_m57B521A8D559EBEC2CF1FED3001068F4F897FEFF(__this, 4, _stringLiteral15F434DE6EB05B31D391B12B5A8516BD141B7A93, NULL);
		return (bool)1;
	}

IL_0072:
	{
		JsonReader_SetToken_m9CB3201AB80BD12AF5490EE38B0AB1E667D5757B(__this, 1, NULL);
		__this->____bsonReaderState_25 = 7;
		ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* L_5 = (ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A*)il2cpp_codegen_object_new(ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		ContainerContext__ctor_m1C2D964213E25068CF24D94D74E2D9D5BB60061B(L_5, 3, NULL);
		V_1 = L_5;
		ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* L_6 = V_1;
		BsonReader_PushContext_m1AB78E117227021B3B7F29D571D58BB424B3A7EF(__this, L_6, NULL);
		ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* L_7 = V_1;
		int32_t L_8;
		L_8 = BsonReader_ReadInt32_m403168A3B3CA3CC5FEA5459185257E8AF00FF986(__this, NULL);
		NullCheck(L_7);
		L_7->___Length_1 = L_8;
		return (bool)1;
	}

IL_009c:
	{
		bool L_9;
		L_9 = BsonReader_ReadNormal_m048652A5459D2B5D052FB068C5EC478734122EBF(__this, NULL);
		bool L_10 = L_9;
		G_B8_0 = L_10;
		if (!L_10)
		{
			G_B10_0 = L_10;
			goto IL_00b6;
		}
	}
	{
		int32_t L_11;
		L_11 = VirtualFuncInvoker0< int32_t >::Invoke(16 /* Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::get_TokenType() */, __this);
		G_B9_0 = G_B8_0;
		if ((!(((uint32_t)L_11) == ((uint32_t)((int32_t)13)))))
		{
			G_B10_0 = G_B8_0;
			goto IL_00b6;
		}
	}
	{
		__this->____bsonReaderState_25 = 8;
		G_B10_0 = G_B9_0;
	}

IL_00b6:
	{
		return G_B10_0;
	}

IL_00b7:
	{
		JsonReader_SetToken_m9CB3201AB80BD12AF5490EE38B0AB1E667D5757B(__this, ((int32_t)13), NULL);
		__this->____bsonReaderState_25 = 0;
		return (bool)1;
	}

IL_00c8:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_12 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_12);
		ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9(L_12, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonReader_ReadCodeWScope_m0DA7805CE5A3D1CC83E1554C8015207538D1FF3E_RuntimeMethod_var)));
	}
}
// System.Boolean Newtonsoft.Json.Bson.BsonReader::ReadReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BsonReader_ReadReference_mB9A96BD71CDF91482061F6C9074C2A83CB56E5F4 (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA05B74022DC98A669248CD353ADDBD7AADAD4AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF96282F5D84FC9B754994ADCFE65DAE2088A7382);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0;
		L_0 = JsonReader_get_CurrentState_m2B6FA669883053CDABF108A980F808CDC9F13699_inline(__this, NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)3)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)8)))
		{
			goto IL_0083;
		}
	}
	{
		goto IL_00dd;
	}

IL_0018:
	{
		JsonReader_SetToken_m57B521A8D559EBEC2CF1FED3001068F4F897FEFF(__this, 4, _stringLiteralF96282F5D84FC9B754994ADCFE65DAE2088A7382, NULL);
		__this->____bsonReaderState_25 = 2;
		return (bool)1;
	}

IL_002d:
	{
		int32_t L_4 = __this->____bsonReaderState_25;
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0046;
		}
	}
	{
		String_t* L_5;
		L_5 = BsonReader_ReadLengthString_m905B05A13227D4A2ECBFD9379E27D664A8D071AA(__this, NULL);
		JsonReader_SetToken_m57B521A8D559EBEC2CF1FED3001068F4F897FEFF(__this, ((int32_t)9), L_5, NULL);
		return (bool)1;
	}

IL_0046:
	{
		int32_t L_6 = __this->____bsonReaderState_25;
		if ((!(((uint32_t)L_6) == ((uint32_t)3))))
		{
			goto IL_0061;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = BsonReader_ReadBytes_m1CC1F7104F11C353A30134E0AA3D66B3F52938F7(__this, ((int32_t)12), NULL);
		JsonReader_SetToken_m57B521A8D559EBEC2CF1FED3001068F4F897FEFF(__this, ((int32_t)17), (RuntimeObject*)L_7, NULL);
		return (bool)1;
	}

IL_0061:
	{
		int32_t* L_8 = (&__this->____bsonReaderState_25);
		Il2CppFakeBox<int32_t> L_9(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonReaderState_tD4B4396ABF029DAD64E0389C71168E3C4949B41F_il2cpp_TypeInfo_var)), L_8);
		String_t* L_10;
		L_10 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_9), NULL);
		String_t* L_11;
		L_11 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral66598110B46A51C4B35EB3014DABBD9FFC1FA160)), L_10, NULL);
		JsonReaderException_t44F3F6F2980FC806231B19A65F37D1E034B218DA* L_12;
		L_12 = JsonReaderException_Create_mE1CBC0A12B559F606A85F2450C4400676ABD6529(__this, L_11, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonReader_ReadReference_mB9A96BD71CDF91482061F6C9074C2A83CB56E5F4_RuntimeMethod_var)));
	}

IL_0083:
	{
		int32_t L_13 = __this->____bsonReaderState_25;
		if ((!(((uint32_t)L_13) == ((uint32_t)2))))
		{
			goto IL_00a1;
		}
	}
	{
		JsonReader_SetToken_m57B521A8D559EBEC2CF1FED3001068F4F897FEFF(__this, 4, _stringLiteralEA05B74022DC98A669248CD353ADDBD7AADAD4AA, NULL);
		__this->____bsonReaderState_25 = 3;
		return (bool)1;
	}

IL_00a1:
	{
		int32_t L_14 = __this->____bsonReaderState_25;
		if ((!(((uint32_t)L_14) == ((uint32_t)3))))
		{
			goto IL_00bb;
		}
	}
	{
		JsonReader_SetToken_m9CB3201AB80BD12AF5490EE38B0AB1E667D5757B(__this, ((int32_t)13), NULL);
		__this->____bsonReaderState_25 = 0;
		return (bool)1;
	}

IL_00bb:
	{
		int32_t* L_15 = (&__this->____bsonReaderState_25);
		Il2CppFakeBox<int32_t> L_16(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonReaderState_tD4B4396ABF029DAD64E0389C71168E3C4949B41F_il2cpp_TypeInfo_var)), L_15);
		String_t* L_17;
		L_17 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_16), NULL);
		String_t* L_18;
		L_18 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral66598110B46A51C4B35EB3014DABBD9FFC1FA160)), L_17, NULL);
		JsonReaderException_t44F3F6F2980FC806231B19A65F37D1E034B218DA* L_19;
		L_19 = JsonReaderException_Create_mE1CBC0A12B559F606A85F2450C4400676ABD6529(__this, L_18, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonReader_ReadReference_mB9A96BD71CDF91482061F6C9074C2A83CB56E5F4_RuntimeMethod_var)));
	}

IL_00dd:
	{
		int32_t L_20;
		L_20 = JsonReader_get_CurrentState_m2B6FA669883053CDABF108A980F808CDC9F13699_inline(__this, NULL);
		V_1 = L_20;
		Il2CppFakeBox<int32_t> L_21(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&State_tFC19CCEAFF8F4E6C73914F3B8850C622CE3490A4_il2cpp_TypeInfo_var)), (&V_1));
		String_t* L_22;
		L_22 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_21), NULL);
		String_t* L_23;
		L_23 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral66598110B46A51C4B35EB3014DABBD9FFC1FA160)), L_22, NULL);
		JsonReaderException_t44F3F6F2980FC806231B19A65F37D1E034B218DA* L_24;
		L_24 = JsonReaderException_Create_mE1CBC0A12B559F606A85F2450C4400676ABD6529(__this, L_23, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_24, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonReader_ReadReference_mB9A96BD71CDF91482061F6C9074C2A83CB56E5F4_RuntimeMethod_var)));
	}
}
// System.Boolean Newtonsoft.Json.Bson.BsonReader::ReadNormal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BsonReader_ReadNormal_m048652A5459D2B5D052FB068C5EC478734122EBF (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B26_0 = 0;
	{
		int32_t L_0;
		L_0 = JsonReader_get_CurrentState_m2B6FA669883053CDABF108A980F808CDC9F13699_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = V_2;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_0084;
			}
			case 2:
			{
				goto IL_0086;
			}
			case 3:
			{
				goto IL_0094;
			}
			case 4:
			{
				goto IL_0145;
			}
			case 5:
			{
				goto IL_0094;
			}
			case 6:
			{
				goto IL_0145;
			}
			case 7:
			{
				goto IL_0084;
			}
			case 8:
			{
				goto IL_0094;
			}
			case 9:
			{
				goto IL_014b;
			}
			case 10:
			{
				goto IL_014b;
			}
			case 11:
			{
				goto IL_014b;
			}
			case 12:
			{
				goto IL_014b;
			}
		}
	}
	{
		goto IL_0145;
	}

IL_0046:
	{
		bool L_2 = __this->____readRootValueAsArray_27;
		if (!L_2)
		{
			goto IL_0051;
		}
	}
	{
		G_B5_0 = 2;
		goto IL_0052;
	}

IL_0051:
	{
		G_B5_0 = 1;
	}

IL_0052:
	{
		V_3 = G_B5_0;
		bool L_3 = __this->____readRootValueAsArray_27;
		if (!L_3)
		{
			goto IL_005e;
		}
	}
	{
		G_B8_0 = 4;
		goto IL_005f;
	}

IL_005e:
	{
		G_B8_0 = 3;
	}

IL_005f:
	{
		int32_t L_4 = V_3;
		JsonReader_SetToken_m9CB3201AB80BD12AF5490EE38B0AB1E667D5757B(__this, L_4, NULL);
		ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* L_5 = (ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A*)il2cpp_codegen_object_new(ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		ContainerContext__ctor_m1C2D964213E25068CF24D94D74E2D9D5BB60061B(L_5, G_B8_0, NULL);
		V_4 = L_5;
		ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* L_6 = V_4;
		BsonReader_PushContext_m1AB78E117227021B3B7F29D571D58BB424B3A7EF(__this, L_6, NULL);
		ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* L_7 = V_4;
		int32_t L_8;
		L_8 = BsonReader_ReadInt32_m403168A3B3CA3CC5FEA5459185257E8AF00FF986(__this, NULL);
		NullCheck(L_7);
		L_7->___Length_1 = L_8;
		return (bool)1;
	}

IL_0084:
	{
		return (bool)0;
	}

IL_0086:
	{
		int8_t L_9 = __this->____currentElementType_24;
		BsonReader_ReadType_m1568AE4968EFA67EF81D622164A9AD3665E539DB(__this, L_9, NULL);
		return (bool)1;
	}

IL_0094:
	{
		ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* L_10 = __this->____currentContext_26;
		V_0 = L_10;
		ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* L_11 = V_0;
		if (L_11)
		{
			goto IL_00a8;
		}
	}
	{
		bool L_12;
		L_12 = JsonReader_get_SupportMultipleContent_m28769E9E99495F868A23A8F6BDF5CB90D9B792B6_inline(__this, NULL);
		if (L_12)
		{
			goto IL_0046;
		}
	}
	{
		return (bool)0;
	}

IL_00a8:
	{
		ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14 = L_13->___Length_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_14, 1));
		ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* L_15 = V_0;
		NullCheck(L_15);
		int32_t L_16 = L_15->___Position_2;
		int32_t L_17 = V_1;
		if ((((int32_t)L_16) >= ((int32_t)L_17)))
		{
			goto IL_00e7;
		}
	}
	{
		ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* L_18 = V_0;
		NullCheck(L_18);
		int8_t L_19 = L_18->___Type_0;
		if ((!(((uint32_t)L_19) == ((uint32_t)4))))
		{
			goto IL_00d8;
		}
	}
	{
		String_t* L_20;
		L_20 = BsonReader_ReadElement_m51016B8553A73DB79F38CF122BF6292662F4D754(__this, NULL);
		int8_t L_21 = __this->____currentElementType_24;
		BsonReader_ReadType_m1568AE4968EFA67EF81D622164A9AD3665E539DB(__this, L_21, NULL);
		return (bool)1;
	}

IL_00d8:
	{
		String_t* L_22;
		L_22 = BsonReader_ReadElement_m51016B8553A73DB79F38CF122BF6292662F4D754(__this, NULL);
		JsonReader_SetToken_m57B521A8D559EBEC2CF1FED3001068F4F897FEFF(__this, 4, L_22, NULL);
		return (bool)1;
	}

IL_00e7:
	{
		ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* L_23 = V_0;
		NullCheck(L_23);
		int32_t L_24 = L_23->___Position_2;
		int32_t L_25 = V_1;
		if ((!(((uint32_t)L_24) == ((uint32_t)L_25))))
		{
			goto IL_0139;
		}
	}
	{
		uint8_t L_26;
		L_26 = BsonReader_ReadByte_mC6BD5BEBF68FF9ECC8741786CE7A62B50CACAAE4(__this, NULL);
		if (!L_26)
		{
			goto IL_0104;
		}
	}
	{
		JsonReaderException_t44F3F6F2980FC806231B19A65F37D1E034B218DA* L_27;
		L_27 = JsonReaderException_Create_mE1CBC0A12B559F606A85F2450C4400676ABD6529(__this, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDB5269102EEAA6174B84EBA318CAFFA90AE3217B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_27, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonReader_ReadNormal_m048652A5459D2B5D052FB068C5EC478734122EBF_RuntimeMethod_var)));
	}

IL_0104:
	{
		BsonReader_PopContext_m63825894764D148A8EE7451048A0761FF27BE312(__this, NULL);
		ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* L_28 = __this->____currentContext_26;
		if (!L_28)
		{
			goto IL_011e;
		}
	}
	{
		ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* L_29 = V_0;
		NullCheck(L_29);
		int32_t L_30 = L_29->___Length_1;
		BsonReader_MovePosition_mEA8B97A5B0231E2555EB70B8D7C19D4A8D29AD2B(__this, L_30, NULL);
	}

IL_011e:
	{
		ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* L_31 = V_0;
		NullCheck(L_31);
		int8_t L_32 = L_31->___Type_0;
		if ((((int32_t)L_32) == ((int32_t)3)))
		{
			goto IL_012b;
		}
	}
	{
		G_B26_0 = ((int32_t)14);
		goto IL_012d;
	}

IL_012b:
	{
		G_B26_0 = ((int32_t)13);
	}

IL_012d:
	{
		V_5 = G_B26_0;
		int32_t L_33 = V_5;
		JsonReader_SetToken_m9CB3201AB80BD12AF5490EE38B0AB1E667D5757B(__this, L_33, NULL);
		return (bool)1;
	}

IL_0139:
	{
		JsonReaderException_t44F3F6F2980FC806231B19A65F37D1E034B218DA* L_34;
		L_34 = JsonReaderException_Create_mE1CBC0A12B559F606A85F2450C4400676ABD6529(__this, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAEE8864CE32A6E593EF9DA8C7FCDB920CEE839A0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_34, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonReader_ReadNormal_m048652A5459D2B5D052FB068C5EC478734122EBF_RuntimeMethod_var)));
	}

IL_0145:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_35 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_35);
		ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9(L_35, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_35, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonReader_ReadNormal_m048652A5459D2B5D052FB068C5EC478734122EBF_RuntimeMethod_var)));
	}

IL_014b:
	{
		return (bool)0;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonReader::PopContext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonReader_PopContext_m63825894764D148A8EE7451048A0761FF27BE312 (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m157C47B733293E34DDC19F26D66D2C959F8251FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m543633880DCEC6159BABF4A6C35B9FFD0F7D5079_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mF6B5797FA7FC75AAAE66FC325B93A5C2AC311E98_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t944CCF3A156F251D4FD98B25EC08251DB21ADBC9* L_0 = __this->____stack_21;
		List_1_t944CCF3A156F251D4FD98B25EC08251DB21ADBC9* L_1 = __this->____stack_21;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m543633880DCEC6159BABF4A6C35B9FFD0F7D5079_inline(L_1, List_1_get_Count_m543633880DCEC6159BABF4A6C35B9FFD0F7D5079_RuntimeMethod_var);
		NullCheck(L_0);
		List_1_RemoveAt_m157C47B733293E34DDC19F26D66D2C959F8251FE(L_0, ((int32_t)il2cpp_codegen_subtract(L_2, 1)), List_1_RemoveAt_m157C47B733293E34DDC19F26D66D2C959F8251FE_RuntimeMethod_var);
		List_1_t944CCF3A156F251D4FD98B25EC08251DB21ADBC9* L_3 = __this->____stack_21;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_m543633880DCEC6159BABF4A6C35B9FFD0F7D5079_inline(L_3, List_1_get_Count_m543633880DCEC6159BABF4A6C35B9FFD0F7D5079_RuntimeMethod_var);
		if (L_4)
		{
			goto IL_002d;
		}
	}
	{
		__this->____currentContext_26 = (ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____currentContext_26), (void*)(ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A*)NULL);
		return;
	}

IL_002d:
	{
		List_1_t944CCF3A156F251D4FD98B25EC08251DB21ADBC9* L_5 = __this->____stack_21;
		List_1_t944CCF3A156F251D4FD98B25EC08251DB21ADBC9* L_6 = __this->____stack_21;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = List_1_get_Count_m543633880DCEC6159BABF4A6C35B9FFD0F7D5079_inline(L_6, List_1_get_Count_m543633880DCEC6159BABF4A6C35B9FFD0F7D5079_RuntimeMethod_var);
		NullCheck(L_5);
		ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* L_8;
		L_8 = List_1_get_Item_mF6B5797FA7FC75AAAE66FC325B93A5C2AC311E98(L_5, ((int32_t)il2cpp_codegen_subtract(L_7, 1)), List_1_get_Item_mF6B5797FA7FC75AAAE66FC325B93A5C2AC311E98_RuntimeMethod_var);
		__this->____currentContext_26 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____currentContext_26), (void*)L_8);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonReader::PushContext(Newtonsoft.Json.Bson.BsonReader/ContainerContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonReader_PushContext_m1AB78E117227021B3B7F29D571D58BB424B3A7EF (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* ___newContext0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mFB02AD1C6DBE2CCEC757E8633ED0353BFCA3A415_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t944CCF3A156F251D4FD98B25EC08251DB21ADBC9* L_0 = __this->____stack_21;
		ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* L_1 = ___newContext0;
		NullCheck(L_0);
		List_1_Add_mFB02AD1C6DBE2CCEC757E8633ED0353BFCA3A415_inline(L_0, L_1, List_1_Add_mFB02AD1C6DBE2CCEC757E8633ED0353BFCA3A415_RuntimeMethod_var);
		ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* L_2 = ___newContext0;
		__this->____currentContext_26 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____currentContext_26), (void*)L_2);
		return;
	}
}
// System.Byte Newtonsoft.Json.Bson.BsonReader::ReadByte()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t BsonReader_ReadByte_mC6BD5BEBF68FF9ECC8741786CE7A62B50CACAAE4 (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) 
{
	{
		BsonReader_MovePosition_mEA8B97A5B0231E2555EB70B8D7C19D4A8D29AD2B(__this, 1, NULL);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_0 = __this->____reader_20;
		NullCheck(L_0);
		uint8_t L_1;
		L_1 = VirtualFuncInvoker0< uint8_t >::Invoke(10 /* System.Byte System.IO.BinaryReader::ReadByte() */, L_0);
		return L_1;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonReader::ReadType(Newtonsoft.Json.Bson.BsonType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonReader_ReadType_m1568AE4968EFA67EF81D622164A9AD3665E539DB (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, int8_t ___type0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeUtils_t08EF5030CF29329A3646A81F48D1F440A6234121_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	uint8_t V_1 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	bool V_5 = false;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_6;
	memset((&V_6), 0, sizeof(V_6));
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_7;
	memset((&V_7), 0, sizeof(V_7));
	String_t* V_8 = NULL;
	String_t* V_9 = NULL;
	String_t* V_10 = NULL;
	ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* V_11 = NULL;
	ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* V_12 = NULL;
	int32_t V_13 = 0;
	RuntimeObject* G_B11_0 = NULL;
	{
		int8_t L_0 = ___type0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_0, 1)))
		{
			case 0:
			{
				goto IL_0055;
			}
			case 1:
			{
				goto IL_0090;
			}
			case 2:
			{
				goto IL_009f;
			}
			case 3:
			{
				goto IL_00c4;
			}
			case 4:
			{
				goto IL_00e9;
			}
			case 5:
			{
				goto IL_010f;
			}
			case 6:
			{
				goto IL_0118;
			}
			case 7:
			{
				goto IL_012d;
			}
			case 8:
			{
				goto IL_014a;
			}
			case 9:
			{
				goto IL_0195;
			}
			case 10:
			{
				goto IL_019e;
			}
			case 11:
			{
				goto IL_01ce;
			}
			case 12:
			{
				goto IL_01dd;
			}
			case 13:
			{
				goto IL_0090;
			}
			case 14:
			{
				goto IL_01ec;
			}
			case 15:
			{
				goto IL_01fb;
			}
			case 16:
			{
				goto IL_020f;
			}
			case 17:
			{
				goto IL_020f;
			}
		}
	}
	{
		goto IL_0222;
	}

IL_0055:
	{
		double L_1;
		L_1 = BsonReader_ReadDouble_m4E7917E24274C4A8DE38DAA6DAD13B019AE75C52(__this, NULL);
		V_0 = L_1;
		int32_t L_2 = ((JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765*)__this)->____floatParseHandling_10;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0082;
		}
	}
	{
		double L_3 = V_0;
		double L_4 = L_3;
		RuntimeObject* L_5 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_4);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_6;
		L_6 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_7;
		L_7 = Convert_ToDecimal_m2A6822B7BCB33F60B9425C58248111D316C3FE4C(L_5, L_6, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_8 = L_7;
		RuntimeObject* L_9 = Box(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var, &L_8);
		JsonReader_SetToken_m57B521A8D559EBEC2CF1FED3001068F4F897FEFF(__this, 8, L_9, NULL);
		return;
	}

IL_0082:
	{
		double L_10 = V_0;
		double L_11 = L_10;
		RuntimeObject* L_12 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_11);
		JsonReader_SetToken_m57B521A8D559EBEC2CF1FED3001068F4F897FEFF(__this, 8, L_12, NULL);
		return;
	}

IL_0090:
	{
		String_t* L_13;
		L_13 = BsonReader_ReadLengthString_m905B05A13227D4A2ECBFD9379E27D664A8D071AA(__this, NULL);
		JsonReader_SetToken_m57B521A8D559EBEC2CF1FED3001068F4F897FEFF(__this, ((int32_t)9), L_13, NULL);
		return;
	}

IL_009f:
	{
		JsonReader_SetToken_m9CB3201AB80BD12AF5490EE38B0AB1E667D5757B(__this, 1, NULL);
		ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* L_14 = (ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A*)il2cpp_codegen_object_new(ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		ContainerContext__ctor_m1C2D964213E25068CF24D94D74E2D9D5BB60061B(L_14, 3, NULL);
		V_11 = L_14;
		ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* L_15 = V_11;
		BsonReader_PushContext_m1AB78E117227021B3B7F29D571D58BB424B3A7EF(__this, L_15, NULL);
		ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* L_16 = V_11;
		int32_t L_17;
		L_17 = BsonReader_ReadInt32_m403168A3B3CA3CC5FEA5459185257E8AF00FF986(__this, NULL);
		NullCheck(L_16);
		L_16->___Length_1 = L_17;
		return;
	}

IL_00c4:
	{
		JsonReader_SetToken_m9CB3201AB80BD12AF5490EE38B0AB1E667D5757B(__this, 2, NULL);
		ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* L_18 = (ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A*)il2cpp_codegen_object_new(ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		ContainerContext__ctor_m1C2D964213E25068CF24D94D74E2D9D5BB60061B(L_18, 4, NULL);
		V_12 = L_18;
		ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* L_19 = V_12;
		BsonReader_PushContext_m1AB78E117227021B3B7F29D571D58BB424B3A7EF(__this, L_19, NULL);
		ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* L_20 = V_12;
		int32_t L_21;
		L_21 = BsonReader_ReadInt32_m403168A3B3CA3CC5FEA5459185257E8AF00FF986(__this, NULL);
		NullCheck(L_20);
		L_20->___Length_1 = L_21;
		return;
	}

IL_00e9:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22;
		L_22 = BsonReader_ReadBinary_m4A4F52AE9037A613C091BF93066D918478C2FECF(__this, (&V_1), NULL);
		V_2 = L_22;
		uint8_t L_23 = V_1;
		if ((!(((uint32_t)L_23) == ((uint32_t)4))))
		{
			goto IL_0103;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = V_2;
		Guid_t L_25;
		memset((&L_25), 0, sizeof(L_25));
		Guid__ctor_m9BEFD9FC285BE9ACEC2EB97FC76C0E35E14D725C((&L_25), L_24, /*hidden argument*/NULL);
		Guid_t L_26 = L_25;
		RuntimeObject* L_27 = Box(Guid_t_il2cpp_TypeInfo_var, &L_26);
		G_B11_0 = L_27;
		goto IL_0104;
	}

IL_0103:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = V_2;
		G_B11_0 = ((RuntimeObject*)(L_28));
	}

IL_0104:
	{
		V_3 = G_B11_0;
		RuntimeObject* L_29 = V_3;
		JsonReader_SetToken_m57B521A8D559EBEC2CF1FED3001068F4F897FEFF(__this, ((int32_t)17), L_29, NULL);
		return;
	}

IL_010f:
	{
		JsonReader_SetToken_m9CB3201AB80BD12AF5490EE38B0AB1E667D5757B(__this, ((int32_t)12), NULL);
		return;
	}

IL_0118:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30;
		L_30 = BsonReader_ReadBytes_m1CC1F7104F11C353A30134E0AA3D66B3F52938F7(__this, ((int32_t)12), NULL);
		V_4 = L_30;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = V_4;
		JsonReader_SetToken_m57B521A8D559EBEC2CF1FED3001068F4F897FEFF(__this, ((int32_t)17), (RuntimeObject*)L_31, NULL);
		return;
	}

IL_012d:
	{
		uint8_t L_32;
		L_32 = BsonReader_ReadByte_mC6BD5BEBF68FF9ECC8741786CE7A62B50CACAAE4(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = Convert_ToBoolean_m6148BAC617B69CACDF14A8C74836767DFF0CB6A9(L_32, NULL);
		V_5 = L_33;
		bool L_34 = V_5;
		bool L_35 = L_34;
		RuntimeObject* L_36 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_35);
		JsonReader_SetToken_m57B521A8D559EBEC2CF1FED3001068F4F897FEFF(__this, ((int32_t)10), L_36, NULL);
		return;
	}

IL_014a:
	{
		int64_t L_37;
		L_37 = BsonReader_ReadInt64_m3CD355565907B98481732EC6A91102F89CE1FF02(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(DateTimeUtils_t08EF5030CF29329A3646A81F48D1F440A6234121_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_38;
		L_38 = DateTimeUtils_ConvertJavaScriptTicksToDateTime_m927253156D26643004345A45B5FE76648E8F8884(L_37, NULL);
		V_6 = L_38;
		int32_t L_39;
		L_39 = BsonReader_get_DateTimeKindHandling_m7A6ED156AAC7CD3D4343B0779E4ABD90E247333D_inline(__this, NULL);
		V_13 = L_39;
		int32_t L_40 = V_13;
		if (!L_40)
		{
			goto IL_016a;
		}
	}
	{
		int32_t L_41 = V_13;
		if ((((int32_t)L_41) == ((int32_t)2)))
		{
			goto IL_0176;
		}
	}
	{
		goto IL_0181;
	}

IL_016a:
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_42 = V_6;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_43;
		L_43 = DateTime_SpecifyKind_mFC3F6DD6AD017F62A8AF81DAD5620AEC474871D0(L_42, 0, NULL);
		V_7 = L_43;
		goto IL_0185;
	}

IL_0176:
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_44;
		L_44 = DateTime_ToLocalTime_mD87626169251A26AF699DAE90A1C31190AD30B94((&V_6), NULL);
		V_7 = L_44;
		goto IL_0185;
	}

IL_0181:
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_45 = V_6;
		V_7 = L_45;
	}

IL_0185:
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_46 = V_7;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_47 = L_46;
		RuntimeObject* L_48 = Box(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var, &L_47);
		JsonReader_SetToken_m57B521A8D559EBEC2CF1FED3001068F4F897FEFF(__this, ((int32_t)16), L_48, NULL);
		return;
	}

IL_0195:
	{
		JsonReader_SetToken_m9CB3201AB80BD12AF5490EE38B0AB1E667D5757B(__this, ((int32_t)11), NULL);
		return;
	}

IL_019e:
	{
		String_t* L_49;
		L_49 = BsonReader_ReadString_m43756951ED9A74FE856F42E2CF1A1BE2AE341100(__this, NULL);
		V_8 = L_49;
		String_t* L_50;
		L_50 = BsonReader_ReadString_m43756951ED9A74FE856F42E2CF1A1BE2AE341100(__this, NULL);
		V_9 = L_50;
		String_t* L_51 = V_8;
		String_t* L_52 = V_9;
		String_t* L_53;
		L_53 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_51, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_52, NULL);
		V_10 = L_53;
		String_t* L_54 = V_10;
		JsonReader_SetToken_m57B521A8D559EBEC2CF1FED3001068F4F897FEFF(__this, ((int32_t)9), L_54, NULL);
		return;
	}

IL_01ce:
	{
		JsonReader_SetToken_m9CB3201AB80BD12AF5490EE38B0AB1E667D5757B(__this, 1, NULL);
		__this->____bsonReaderState_25 = 1;
		return;
	}

IL_01dd:
	{
		String_t* L_55;
		L_55 = BsonReader_ReadLengthString_m905B05A13227D4A2ECBFD9379E27D664A8D071AA(__this, NULL);
		JsonReader_SetToken_m57B521A8D559EBEC2CF1FED3001068F4F897FEFF(__this, ((int32_t)9), L_55, NULL);
		return;
	}

IL_01ec:
	{
		JsonReader_SetToken_m9CB3201AB80BD12AF5490EE38B0AB1E667D5757B(__this, 1, NULL);
		__this->____bsonReaderState_25 = 4;
		return;
	}

IL_01fb:
	{
		int32_t L_56;
		L_56 = BsonReader_ReadInt32_m403168A3B3CA3CC5FEA5459185257E8AF00FF986(__this, NULL);
		int64_t L_57 = ((int64_t)L_56);
		RuntimeObject* L_58 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_57);
		JsonReader_SetToken_m57B521A8D559EBEC2CF1FED3001068F4F897FEFF(__this, 7, L_58, NULL);
		return;
	}

IL_020f:
	{
		int64_t L_59;
		L_59 = BsonReader_ReadInt64_m3CD355565907B98481732EC6A91102F89CE1FF02(__this, NULL);
		int64_t L_60 = L_59;
		RuntimeObject* L_61 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_60);
		JsonReader_SetToken_m57B521A8D559EBEC2CF1FED3001068F4F897FEFF(__this, 7, L_61, NULL);
		return;
	}

IL_0222:
	{
		Il2CppFakeBox<int8_t> L_62(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonType_tB6A96FAF144D5C44C1B6071029D7FBBCF806AF51_il2cpp_TypeInfo_var)), (&___type0));
		String_t* L_63;
		L_63 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_62), NULL);
		String_t* L_64;
		L_64 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral06A61D64D27460EF04BE4DCF66F6E64E285C68A4)), L_63, NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_65 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_65);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_65, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7)), L_64, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_65, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonReader_ReadType_m1568AE4968EFA67EF81D622164A9AD3665E539DB_RuntimeMethod_var)));
	}
}
// System.Byte[] Newtonsoft.Json.Bson.BsonReader::ReadBinary(Newtonsoft.Json.Bson.BsonBinaryType&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BsonReader_ReadBinary_m4A4F52AE9037A613C091BF93066D918478C2FECF (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, uint8_t* ___binaryType0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = BsonReader_ReadInt32_m403168A3B3CA3CC5FEA5459185257E8AF00FF986(__this, NULL);
		V_0 = L_0;
		uint8_t* L_1 = ___binaryType0;
		uint8_t L_2;
		L_2 = BsonReader_ReadByte_mC6BD5BEBF68FF9ECC8741786CE7A62B50CACAAE4(__this, NULL);
		*((int8_t*)L_1) = (int8_t)L_2;
		uint8_t* L_3 = ___binaryType0;
		int32_t L_4 = *((uint8_t*)L_3);
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0023;
		}
	}
	{
		bool L_5 = __this->____jsonNet35BinaryCompatibility_28;
		if (L_5)
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_6;
		L_6 = BsonReader_ReadInt32_m403168A3B3CA3CC5FEA5459185257E8AF00FF986(__this, NULL);
		V_0 = L_6;
	}

IL_0023:
	{
		int32_t L_7 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
		L_8 = BsonReader_ReadBytes_m1CC1F7104F11C353A30134E0AA3D66B3F52938F7(__this, L_7, NULL);
		return L_8;
	}
}
// System.String Newtonsoft.Json.Bson.BsonReader::ReadString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BsonReader_ReadString_m43756951ED9A74FE856F42E2CF1A1BE2AE341100 (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	uint8_t V_4 = 0x0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		BsonReader_EnsureBuffers_mC7DD59EA3A760B60368F4A117D73F4448F706BB1(__this, NULL);
		V_0 = (StringBuilder_t*)NULL;
		V_1 = 0;
		V_2 = 0;
	}

IL_000c:
	{
		int32_t L_0 = V_2;
		V_3 = L_0;
		goto IL_001e;
	}

IL_0010:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->____byteBuffer_22;
		int32_t L_2 = V_3;
		int32_t L_3 = L_2;
		V_3 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		uint8_t L_4 = V_4;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (uint8_t)L_4);
	}

IL_001e:
	{
		int32_t L_5 = V_3;
		if ((((int32_t)L_5) >= ((int32_t)((int32_t)128))))
		{
			goto IL_0037;
		}
	}
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_6 = __this->____reader_20;
		NullCheck(L_6);
		uint8_t L_7;
		L_7 = VirtualFuncInvoker0< uint8_t >::Invoke(10 /* System.Byte System.IO.BinaryReader::ReadByte() */, L_6);
		uint8_t L_8 = L_7;
		V_4 = L_8;
		if ((((int32_t)L_8) > ((int32_t)0)))
		{
			goto IL_0010;
		}
	}

IL_0037:
	{
		int32_t L_9 = V_3;
		int32_t L_10 = V_2;
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_9, L_10));
		int32_t L_11 = V_1;
		int32_t L_12 = V_5;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, L_12));
		int32_t L_13 = V_3;
		if ((((int32_t)L_13) >= ((int32_t)((int32_t)128))))
		{
			goto IL_0080;
		}
	}
	{
		StringBuilder_t* L_14 = V_0;
		if (L_14)
		{
			goto IL_0080;
		}
	}
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_15;
		L_15 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = __this->____byteBuffer_22;
		int32_t L_17 = V_5;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_18 = __this->____charBuffer_23;
		NullCheck(L_15);
		int32_t L_19;
		L_19 = VirtualFuncInvoker5< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, int32_t >::Invoke(26 /* System.Int32 System.Text.Encoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32) */, L_15, L_16, 0, L_17, L_18, 0);
		V_6 = L_19;
		int32_t L_20 = V_1;
		BsonReader_MovePosition_mEA8B97A5B0231E2555EB70B8D7C19D4A8D29AD2B(__this, ((int32_t)il2cpp_codegen_add(L_20, 1)), NULL);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_21 = __this->____charBuffer_23;
		int32_t L_22 = V_6;
		String_t* L_23;
		L_23 = String_CreateString_mB7B3AC2AF28010538650051A9000369B1CD6BAB6(NULL, L_21, 0, L_22, NULL);
		return L_23;
	}

IL_0080:
	{
		int32_t L_24 = V_3;
		int32_t L_25;
		L_25 = BsonReader_GetLastFullCharStop_m5F12D814D034886A5A2CA2FADA4B8411D0FE90AD(__this, ((int32_t)il2cpp_codegen_subtract(L_24, 1)), NULL);
		V_7 = L_25;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_26;
		L_26 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = __this->____byteBuffer_22;
		int32_t L_28 = V_7;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_29 = __this->____charBuffer_23;
		NullCheck(L_26);
		int32_t L_30;
		L_30 = VirtualFuncInvoker5< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, int32_t >::Invoke(26 /* System.Int32 System.Text.Encoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32) */, L_26, L_27, 0, ((int32_t)il2cpp_codegen_add(L_28, 1)), L_29, 0);
		V_8 = L_30;
		StringBuilder_t* L_31 = V_0;
		if (L_31)
		{
			goto IL_00b7;
		}
	}
	{
		StringBuilder_t* L_32 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_32);
		StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5(L_32, ((int32_t)256), NULL);
		V_0 = L_32;
	}

IL_00b7:
	{
		StringBuilder_t* L_33 = V_0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_34 = __this->____charBuffer_23;
		int32_t L_35 = V_8;
		NullCheck(L_33);
		StringBuilder_t* L_36;
		L_36 = StringBuilder_Append_mC09A30993B77CC4D8E906720683B6386F0E15747(L_33, L_34, 0, L_35, NULL);
		int32_t L_37 = V_7;
		int32_t L_38 = V_5;
		if ((((int32_t)L_37) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_38, 1)))))
		{
			goto IL_00f3;
		}
	}
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_7;
		V_2 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_39, L_40)), 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41 = __this->____byteBuffer_22;
		int32_t L_42 = V_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_43 = __this->____byteBuffer_22;
		int32_t L_44 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_41, ((int32_t)il2cpp_codegen_add(L_42, 1)), (RuntimeArray*)L_43, 0, L_44, NULL);
		goto IL_000c;
	}

IL_00f3:
	{
		int32_t L_45 = V_3;
		if ((((int32_t)L_45) >= ((int32_t)((int32_t)128))))
		{
			goto IL_010b;
		}
	}
	{
		int32_t L_46 = V_1;
		BsonReader_MovePosition_mEA8B97A5B0231E2555EB70B8D7C19D4A8D29AD2B(__this, ((int32_t)il2cpp_codegen_add(L_46, 1)), NULL);
		StringBuilder_t* L_47 = V_0;
		NullCheck(L_47);
		String_t* L_48;
		L_48 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_47);
		return L_48;
	}

IL_010b:
	{
		V_2 = 0;
		goto IL_000c;
	}
}
// System.String Newtonsoft.Json.Bson.BsonReader::ReadLengthString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BsonReader_ReadLengthString_m905B05A13227D4A2ECBFD9379E27D664A8D071AA (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = BsonReader_ReadInt32_m403168A3B3CA3CC5FEA5459185257E8AF00FF986(__this, NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		BsonReader_MovePosition_mEA8B97A5B0231E2555EB70B8D7C19D4A8D29AD2B(__this, L_1, NULL);
		int32_t L_2 = V_0;
		String_t* L_3;
		L_3 = BsonReader_GetString_mB3FD61F039F2636EE8B6B4BF2CAF84A26E4DDBFC(__this, ((int32_t)il2cpp_codegen_subtract(L_2, 1)), NULL);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_4 = __this->____reader_20;
		NullCheck(L_4);
		uint8_t L_5;
		L_5 = VirtualFuncInvoker0< uint8_t >::Invoke(10 /* System.Byte System.IO.BinaryReader::ReadByte() */, L_4);
		return L_3;
	}
}
// System.String Newtonsoft.Json.Bson.BsonReader::GetString(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BsonReader_GetString_mB3FD61F039F2636EE8B6B4BF2CAF84A26E4DDBFC (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, int32_t ___length0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t G_B6_0 = 0;
	{
		int32_t L_0 = ___length0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_1;
	}

IL_0009:
	{
		BsonReader_EnsureBuffers_mC7DD59EA3A760B60368F4A117D73F4448F706BB1(__this, NULL);
		V_0 = (StringBuilder_t*)NULL;
		V_1 = 0;
		V_2 = 0;
	}

IL_0015:
	{
		int32_t L_2 = ___length0;
		int32_t L_3 = V_1;
		int32_t L_4 = V_2;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) > ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)128), L_4)))))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_5 = ___length0;
		int32_t L_6 = V_1;
		G_B6_0 = ((int32_t)il2cpp_codegen_subtract(L_5, L_6));
		goto IL_002d;
	}

IL_0026:
	{
		int32_t L_7 = V_2;
		G_B6_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)128), L_7));
	}

IL_002d:
	{
		V_3 = G_B6_0;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_8 = __this->____reader_20;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = __this->____byteBuffer_22;
		int32_t L_10 = V_2;
		int32_t L_11 = V_3;
		NullCheck(L_8);
		int32_t L_12;
		L_12 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(24 /* System.Int32 System.IO.BinaryReader::Read(System.Byte[],System.Int32,System.Int32) */, L_8, L_9, L_10, L_11);
		V_4 = L_12;
		int32_t L_13 = V_4;
		if (L_13)
		{
			goto IL_0052;
		}
	}
	{
		EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028* L_14 = (EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028_il2cpp_TypeInfo_var)));
		NullCheck(L_14);
		EndOfStreamException__ctor_m5629E1A514051A3D56052BD6D2D50C054308CCA4(L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7630F7A0C27B2EE30DD70CE0777AD917869A5FC4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonReader_GetString_mB3FD61F039F2636EE8B6B4BF2CAF84A26E4DDBFC_RuntimeMethod_var)));
	}

IL_0052:
	{
		int32_t L_15 = V_1;
		int32_t L_16 = V_4;
		V_1 = ((int32_t)il2cpp_codegen_add(L_15, L_16));
		int32_t L_17 = V_4;
		int32_t L_18 = V_2;
		V_4 = ((int32_t)il2cpp_codegen_add(L_17, L_18));
		int32_t L_19 = V_4;
		int32_t L_20 = ___length0;
		if ((!(((uint32_t)L_19) == ((uint32_t)L_20))))
		{
			goto IL_008d;
		}
	}
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_21;
		L_21 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = __this->____byteBuffer_22;
		int32_t L_23 = V_4;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_24 = __this->____charBuffer_23;
		NullCheck(L_21);
		int32_t L_25;
		L_25 = VirtualFuncInvoker5< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, int32_t >::Invoke(26 /* System.Int32 System.Text.Encoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32) */, L_21, L_22, 0, L_23, L_24, 0);
		V_5 = L_25;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_26 = __this->____charBuffer_23;
		int32_t L_27 = V_5;
		String_t* L_28;
		L_28 = String_CreateString_mB7B3AC2AF28010538650051A9000369B1CD6BAB6(NULL, L_26, 0, L_27, NULL);
		return L_28;
	}

IL_008d:
	{
		int32_t L_29 = V_4;
		int32_t L_30;
		L_30 = BsonReader_GetLastFullCharStop_m5F12D814D034886A5A2CA2FADA4B8411D0FE90AD(__this, ((int32_t)il2cpp_codegen_subtract(L_29, 1)), NULL);
		V_6 = L_30;
		StringBuilder_t* L_31 = V_0;
		if (L_31)
		{
			goto IL_00a3;
		}
	}
	{
		int32_t L_32 = ___length0;
		StringBuilder_t* L_33 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_33);
		StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5(L_33, L_32, NULL);
		V_0 = L_33;
	}

IL_00a3:
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_34;
		L_34 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = __this->____byteBuffer_22;
		int32_t L_36 = V_6;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_37 = __this->____charBuffer_23;
		NullCheck(L_34);
		int32_t L_38;
		L_38 = VirtualFuncInvoker5< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, int32_t >::Invoke(26 /* System.Int32 System.Text.Encoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32) */, L_34, L_35, 0, ((int32_t)il2cpp_codegen_add(L_36, 1)), L_37, 0);
		V_7 = L_38;
		StringBuilder_t* L_39 = V_0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_40 = __this->____charBuffer_23;
		int32_t L_41 = V_7;
		NullCheck(L_39);
		StringBuilder_t* L_42;
		L_42 = StringBuilder_Append_mC09A30993B77CC4D8E906720683B6386F0E15747(L_39, L_40, 0, L_41, NULL);
		int32_t L_43 = V_6;
		int32_t L_44 = V_4;
		if ((((int32_t)L_43) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_44, 1)))))
		{
			goto IL_00fa;
		}
	}
	{
		int32_t L_45 = V_4;
		int32_t L_46 = V_6;
		V_2 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_45, L_46)), 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_47 = __this->____byteBuffer_22;
		int32_t L_48 = V_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_49 = __this->____byteBuffer_22;
		int32_t L_50 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_47, ((int32_t)il2cpp_codegen_add(L_48, 1)), (RuntimeArray*)L_49, 0, L_50, NULL);
		goto IL_00fc;
	}

IL_00fa:
	{
		V_2 = 0;
	}

IL_00fc:
	{
		int32_t L_51 = V_1;
		int32_t L_52 = ___length0;
		if ((((int32_t)L_51) < ((int32_t)L_52)))
		{
			goto IL_0015;
		}
	}
	{
		StringBuilder_t* L_53 = V_0;
		NullCheck(L_53);
		String_t* L_54;
		L_54 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_53);
		return L_54;
	}
}
// System.Int32 Newtonsoft.Json.Bson.BsonReader::GetLastFullCharStop(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BsonReader_GetLastFullCharStop_m5F12D814D034886A5A2CA2FADA4B8411D0FE90AD (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, int32_t ___start0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___start0;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0028;
	}

IL_0006:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->____byteBuffer_22;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint8_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		int32_t L_5;
		L_5 = BsonReader_BytesInSequence_mFEDFB2E86DEB1DE9F3773FE802BD6D37BBC1A36E(__this, L_4, NULL);
		V_1 = L_5;
		int32_t L_6 = V_1;
		if (L_6)
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_7, 1));
		goto IL_0028;
	}

IL_001e:
	{
		int32_t L_8 = V_1;
		if ((((int32_t)L_8) == ((int32_t)1)))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
		goto IL_002c;
	}

IL_0028:
	{
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_0006;
		}
	}

IL_002c:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = ___start0;
		int32_t L_13 = V_0;
		if ((!(((uint32_t)L_11) == ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_12, L_13))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_14 = ___start0;
		return L_14;
	}

IL_0034:
	{
		int32_t L_15 = V_0;
		return L_15;
	}
}
// System.Int32 Newtonsoft.Json.Bson.BsonReader::BytesInSequence(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BsonReader_BytesInSequence_mFEDFB2E86DEB1DE9F3773FE802BD6D37BBC1A36E (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, uint8_t ___b0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint8_t L_0 = ___b0;
		il2cpp_codegen_runtime_class_init_inline(BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ((BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_StaticFields*)il2cpp_codegen_static_fields_for(BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_il2cpp_TypeInfo_var))->___SeqRange1_16;
		NullCheck(L_1);
		int32_t L_2 = 1;
		uint8_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if ((((int32_t)L_0) > ((int32_t)L_3)))
		{
			goto IL_000c;
		}
	}
	{
		return 1;
	}

IL_000c:
	{
		uint8_t L_4 = ___b0;
		il2cpp_codegen_runtime_class_init_inline(BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ((BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_StaticFields*)il2cpp_codegen_static_fields_for(BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_il2cpp_TypeInfo_var))->___SeqRange2_17;
		NullCheck(L_5);
		int32_t L_6 = 0;
		uint8_t L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		if ((((int32_t)L_4) < ((int32_t)L_7)))
		{
			goto IL_0022;
		}
	}
	{
		uint8_t L_8 = ___b0;
		il2cpp_codegen_runtime_class_init_inline(BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ((BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_StaticFields*)il2cpp_codegen_static_fields_for(BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_il2cpp_TypeInfo_var))->___SeqRange2_17;
		NullCheck(L_9);
		int32_t L_10 = 1;
		uint8_t L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		if ((((int32_t)L_8) > ((int32_t)L_11)))
		{
			goto IL_0022;
		}
	}
	{
		return 2;
	}

IL_0022:
	{
		uint8_t L_12 = ___b0;
		il2cpp_codegen_runtime_class_init_inline(BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ((BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_StaticFields*)il2cpp_codegen_static_fields_for(BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_il2cpp_TypeInfo_var))->___SeqRange3_18;
		NullCheck(L_13);
		int32_t L_14 = 0;
		uint8_t L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		if ((((int32_t)L_12) < ((int32_t)L_15)))
		{
			goto IL_0038;
		}
	}
	{
		uint8_t L_16 = ___b0;
		il2cpp_codegen_runtime_class_init_inline(BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ((BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_StaticFields*)il2cpp_codegen_static_fields_for(BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_il2cpp_TypeInfo_var))->___SeqRange3_18;
		NullCheck(L_17);
		int32_t L_18 = 1;
		uint8_t L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		if ((((int32_t)L_16) > ((int32_t)L_19)))
		{
			goto IL_0038;
		}
	}
	{
		return 3;
	}

IL_0038:
	{
		uint8_t L_20 = ___b0;
		il2cpp_codegen_runtime_class_init_inline(BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ((BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_StaticFields*)il2cpp_codegen_static_fields_for(BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_il2cpp_TypeInfo_var))->___SeqRange4_19;
		NullCheck(L_21);
		int32_t L_22 = 0;
		uint8_t L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		if ((((int32_t)L_20) < ((int32_t)L_23)))
		{
			goto IL_004e;
		}
	}
	{
		uint8_t L_24 = ___b0;
		il2cpp_codegen_runtime_class_init_inline(BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = ((BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_StaticFields*)il2cpp_codegen_static_fields_for(BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_il2cpp_TypeInfo_var))->___SeqRange4_19;
		NullCheck(L_25);
		int32_t L_26 = 1;
		uint8_t L_27 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		if ((((int32_t)L_24) > ((int32_t)L_27)))
		{
			goto IL_004e;
		}
	}
	{
		return 4;
	}

IL_004e:
	{
		return 0;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonReader::EnsureBuffers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonReader_EnsureBuffers_mC7DD59EA3A760B60368F4A117D73F4448F706BB1 (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____byteBuffer_22;
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)128));
		__this->____byteBuffer_22 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____byteBuffer_22), (void*)L_1);
	}

IL_0018:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = __this->____charBuffer_23;
		if (L_2)
		{
			goto IL_003c;
		}
	}
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_3;
		L_3 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker1< int32_t, int32_t >::Invoke(34 /* System.Int32 System.Text.Encoding::GetMaxCharCount(System.Int32) */, L_3, ((int32_t)128));
		V_0 = L_4;
		int32_t L_5 = V_0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_6 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)L_5);
		__this->____charBuffer_23 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____charBuffer_23), (void*)L_6);
	}

IL_003c:
	{
		return;
	}
}
// System.Double Newtonsoft.Json.Bson.BsonReader::ReadDouble()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double BsonReader_ReadDouble_m4E7917E24274C4A8DE38DAA6DAD13B019AE75C52 (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) 
{
	{
		BsonReader_MovePosition_mEA8B97A5B0231E2555EB70B8D7C19D4A8D29AD2B(__this, 8, NULL);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_0 = __this->____reader_20;
		NullCheck(L_0);
		double L_1;
		L_1 = VirtualFuncInvoker0< double >::Invoke(20 /* System.Double System.IO.BinaryReader::ReadDouble() */, L_0);
		return L_1;
	}
}
// System.Int32 Newtonsoft.Json.Bson.BsonReader::ReadInt32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BsonReader_ReadInt32_m403168A3B3CA3CC5FEA5459185257E8AF00FF986 (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) 
{
	{
		BsonReader_MovePosition_mEA8B97A5B0231E2555EB70B8D7C19D4A8D29AD2B(__this, 4, NULL);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_0 = __this->____reader_20;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(15 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_0);
		return L_1;
	}
}
// System.Int64 Newtonsoft.Json.Bson.BsonReader::ReadInt64()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BsonReader_ReadInt64_m3CD355565907B98481732EC6A91102F89CE1FF02 (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) 
{
	{
		BsonReader_MovePosition_mEA8B97A5B0231E2555EB70B8D7C19D4A8D29AD2B(__this, 8, NULL);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_0 = __this->____reader_20;
		NullCheck(L_0);
		int64_t L_1;
		L_1 = VirtualFuncInvoker0< int64_t >::Invoke(17 /* System.Int64 System.IO.BinaryReader::ReadInt64() */, L_0);
		return L_1;
	}
}
// Newtonsoft.Json.Bson.BsonType Newtonsoft.Json.Bson.BsonReader::ReadType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t BsonReader_ReadType_m609B4018D61DC17479EA954CAB7A4CF38F9ED691 (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) 
{
	{
		BsonReader_MovePosition_mEA8B97A5B0231E2555EB70B8D7C19D4A8D29AD2B(__this, 1, NULL);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_0 = __this->____reader_20;
		NullCheck(L_0);
		int8_t L_1;
		L_1 = VirtualFuncInvoker0< int8_t >::Invoke(11 /* System.SByte System.IO.BinaryReader::ReadSByte() */, L_0);
		return (int8_t)(L_1);
	}
}
// System.Void Newtonsoft.Json.Bson.BsonReader::MovePosition(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonReader_MovePosition_mEA8B97A5B0231E2555EB70B8D7C19D4A8D29AD2B (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, int32_t ___count0, const RuntimeMethod* method) 
{
	{
		ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* L_0 = __this->____currentContext_26;
		ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* L_1 = L_0;
		NullCheck(L_1);
		int32_t L_2 = L_1->___Position_2;
		int32_t L_3 = ___count0;
		NullCheck(L_1);
		L_1->___Position_2 = ((int32_t)il2cpp_codegen_add(L_2, L_3));
		return;
	}
}
// System.Byte[] Newtonsoft.Json.Bson.BsonReader::ReadBytes(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BsonReader_ReadBytes_m1CC1F7104F11C353A30134E0AA3D66B3F52938F7 (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, int32_t ___count0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___count0;
		BsonReader_MovePosition_mEA8B97A5B0231E2555EB70B8D7C19D4A8D29AD2B(__this, L_0, NULL);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_1 = __this->____reader_20;
		int32_t L_2 = ___count0;
		NullCheck(L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(25 /* System.Byte[] System.IO.BinaryReader::ReadBytes(System.Int32) */, L_1, L_2);
		return L_3;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonReader::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonReader__cctor_m0DD14E39C1F1B4DE1A4C13B0DEFAE390C729627F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)((int32_t)127));
		((BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_StaticFields*)il2cpp_codegen_static_fields_for(BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_il2cpp_TypeInfo_var))->___SeqRange1_16 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_StaticFields*)il2cpp_codegen_static_fields_for(BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_il2cpp_TypeInfo_var))->___SeqRange1_16), (void*)L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = L_2;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)194));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = L_3;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)((int32_t)223));
		((BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_StaticFields*)il2cpp_codegen_static_fields_for(BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_il2cpp_TypeInfo_var))->___SeqRange2_17 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_StaticFields*)il2cpp_codegen_static_fields_for(BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_il2cpp_TypeInfo_var))->___SeqRange2_17), (void*)L_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = L_5;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)224));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = L_6;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)((int32_t)239));
		((BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_StaticFields*)il2cpp_codegen_static_fields_for(BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_il2cpp_TypeInfo_var))->___SeqRange3_18 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_StaticFields*)il2cpp_codegen_static_fields_for(BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_il2cpp_TypeInfo_var))->___SeqRange3_18), (void*)L_7);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = L_8;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)240));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = L_9;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)((int32_t)244));
		((BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_StaticFields*)il2cpp_codegen_static_fields_for(BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_il2cpp_TypeInfo_var))->___SeqRange4_19 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_StaticFields*)il2cpp_codegen_static_fields_for(BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_il2cpp_TypeInfo_var))->___SeqRange4_19), (void*)L_10);
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
// System.Void Newtonsoft.Json.Bson.BsonReader/ContainerContext::.ctor(Newtonsoft.Json.Bson.BsonType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContainerContext__ctor_m1C2D964213E25068CF24D94D74E2D9D5BB60061B (ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* __this, int8_t ___type0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int8_t L_0 = ___type0;
		__this->___Type_0 = L_0;
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
// Newtonsoft.Json.Bson.BsonToken Newtonsoft.Json.Bson.BsonToken::get_Parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* BsonToken_get_Parent_m05A247A8B1E2FB87849EB7B6FE0B49A606BEF1A2 (BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* __this, const RuntimeMethod* method) 
{
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_0 = __this->___U3CParentU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonToken::set_Parent(Newtonsoft.Json.Bson.BsonToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonToken_set_Parent_m6FE9310A7BE7920BFBBB78D007D3326FE25861BC (BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* __this, BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* ___value0, const RuntimeMethod* method) 
{
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_0 = ___value0;
		__this->___U3CParentU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CParentU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Int32 Newtonsoft.Json.Bson.BsonToken::get_CalculatedSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BsonToken_get_CalculatedSize_mBEC94C9A9175992741A3554721F83D78CBC3CC0C (BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CCalculatedSizeU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonToken::set_CalculatedSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonToken_set_CalculatedSize_m50B0EAD822D053F2B1B5DCC6AC1413DF69B8FCAB (BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CCalculatedSizeU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonToken::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonToken__ctor_m04A0C7B9070DF73C0689038C8E2593C5FC18F8AA (BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* __this, const RuntimeMethod* method) 
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
// System.Void Newtonsoft.Json.Bson.BsonObject::Add(System.String,Newtonsoft.Json.Bson.BsonToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonObject_Add_mC5FD9CC9FC974FC4D7B10981A33291E88DB9DC79 (BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB* __this, String_t* ___name0, BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* ___token1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m05A778DDB06E3015BA3B2B539CB6360D44308F65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tDBB5CD4D0EC3C783FE3A623450331580CB409B5E* L_0 = __this->____children_2;
		BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE* L_1 = (BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE*)il2cpp_codegen_object_new(BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		BsonProperty__ctor_mFC963BA0F736C7A11FE68BB3A4DDE63A99B3A54C(L_1, NULL);
		BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE* L_2 = L_1;
		String_t* L_3 = ___name0;
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_4 = (BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE*)il2cpp_codegen_object_new(BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		BsonString__ctor_mA28B714E7D11E7131A16CB152D171CA7A4A6BD56(L_4, L_3, (bool)0, NULL);
		NullCheck(L_2);
		BsonProperty_set_Name_mBF75E093501D61ABA9B44CD595A848386002EDA0_inline(L_2, L_4, NULL);
		BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE* L_5 = L_2;
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_6 = ___token1;
		NullCheck(L_5);
		BsonProperty_set_Value_m7DAC5256E7337131CB0004255D86FBB812E5BAD8_inline(L_5, L_6, NULL);
		NullCheck(L_0);
		List_1_Add_m05A778DDB06E3015BA3B2B539CB6360D44308F65_inline(L_0, L_5, List_1_Add_m05A778DDB06E3015BA3B2B539CB6360D44308F65_RuntimeMethod_var);
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_7 = ___token1;
		NullCheck(L_7);
		BsonToken_set_Parent_m6FE9310A7BE7920BFBBB78D007D3326FE25861BC_inline(L_7, __this, NULL);
		return;
	}
}
// Newtonsoft.Json.Bson.BsonType Newtonsoft.Json.Bson.BsonObject::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t BsonObject_get_Type_m970C3BD8AC7D9844A62BE0C687DCF270E784D8ED (BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB* __this, const RuntimeMethod* method) 
{
	{
		return (int8_t)(3);
	}
}
// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Bson.BsonProperty> Newtonsoft.Json.Bson.BsonObject::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BsonObject_GetEnumerator_mD0C11E8BAC09FB62CA08FF674E3F7F23690AE14D (BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_tC9B39CFED6C0A6D5CDD1FE2F790F532A7A4AB203_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m872CB87380297BB9B43B61A80CB28F4A8C1C9011_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tDBB5CD4D0EC3C783FE3A623450331580CB409B5E* L_0 = __this->____children_2;
		NullCheck(L_0);
		Enumerator_tC9B39CFED6C0A6D5CDD1FE2F790F532A7A4AB203 L_1;
		L_1 = List_1_GetEnumerator_m872CB87380297BB9B43B61A80CB28F4A8C1C9011(L_0, List_1_GetEnumerator_m872CB87380297BB9B43B61A80CB28F4A8C1C9011_RuntimeMethod_var);
		Enumerator_tC9B39CFED6C0A6D5CDD1FE2F790F532A7A4AB203 L_2 = L_1;
		RuntimeObject* L_3 = Box(Enumerator_tC9B39CFED6C0A6D5CDD1FE2F790F532A7A4AB203_il2cpp_TypeInfo_var, &L_2);
		return (RuntimeObject*)L_3;
	}
}
// System.Collections.IEnumerator Newtonsoft.Json.Bson.BsonObject::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BsonObject_System_Collections_IEnumerable_GetEnumerator_m6C7320F7B08967EF6FF0D1EB4681408550A44D7C (BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = BsonObject_GetEnumerator_mD0C11E8BAC09FB62CA08FF674E3F7F23690AE14D(__this, NULL);
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonObject__ctor_m630E32FEFB85ABC73DA890C946486161162E0BDA (BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m573D86B46CB0180CD99560B5E3B03E4A5CDE368E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tDBB5CD4D0EC3C783FE3A623450331580CB409B5E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tDBB5CD4D0EC3C783FE3A623450331580CB409B5E* L_0 = (List_1_tDBB5CD4D0EC3C783FE3A623450331580CB409B5E*)il2cpp_codegen_object_new(List_1_tDBB5CD4D0EC3C783FE3A623450331580CB409B5E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m573D86B46CB0180CD99560B5E3B03E4A5CDE368E(L_0, List_1__ctor_m573D86B46CB0180CD99560B5E3B03E4A5CDE368E_RuntimeMethod_var);
		__this->____children_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____children_2), (void*)L_0);
		BsonToken__ctor_m04A0C7B9070DF73C0689038C8E2593C5FC18F8AA(__this, NULL);
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
// System.Void Newtonsoft.Json.Bson.BsonArray::Add(Newtonsoft.Json.Bson.BsonToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonArray_Add_m483471C0CDB8A4438E1A0274845DC6424BDB765D (BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1* __this, BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* ___token0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m7B3928D9D175A2FC23AD66D3F2E0BC9200D98E5D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t39498331735ADCEED3C66A5E7F951FCC1C4EEEBE* L_0 = __this->____children_2;
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_1 = ___token0;
		NullCheck(L_0);
		List_1_Add_m7B3928D9D175A2FC23AD66D3F2E0BC9200D98E5D_inline(L_0, L_1, List_1_Add_m7B3928D9D175A2FC23AD66D3F2E0BC9200D98E5D_RuntimeMethod_var);
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_2 = ___token0;
		NullCheck(L_2);
		BsonToken_set_Parent_m6FE9310A7BE7920BFBBB78D007D3326FE25861BC_inline(L_2, __this, NULL);
		return;
	}
}
// Newtonsoft.Json.Bson.BsonType Newtonsoft.Json.Bson.BsonArray::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t BsonArray_get_Type_mCC68071DB9C64C070101B2633053632727FB9382 (BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1* __this, const RuntimeMethod* method) 
{
	{
		return (int8_t)(4);
	}
}
// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Bson.BsonToken> Newtonsoft.Json.Bson.BsonArray::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BsonArray_GetEnumerator_m38E989DD847BFBA1D9AE6408890EBEC664E0729C (BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_t597C435D76D0912631AF7909B79461C347020E0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mC2E8A71D702B5F722A83170C68470084EA6F1AEE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t39498331735ADCEED3C66A5E7F951FCC1C4EEEBE* L_0 = __this->____children_2;
		NullCheck(L_0);
		Enumerator_t597C435D76D0912631AF7909B79461C347020E0C L_1;
		L_1 = List_1_GetEnumerator_mC2E8A71D702B5F722A83170C68470084EA6F1AEE(L_0, List_1_GetEnumerator_mC2E8A71D702B5F722A83170C68470084EA6F1AEE_RuntimeMethod_var);
		Enumerator_t597C435D76D0912631AF7909B79461C347020E0C L_2 = L_1;
		RuntimeObject* L_3 = Box(Enumerator_t597C435D76D0912631AF7909B79461C347020E0C_il2cpp_TypeInfo_var, &L_2);
		return (RuntimeObject*)L_3;
	}
}
// System.Collections.IEnumerator Newtonsoft.Json.Bson.BsonArray::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BsonArray_System_Collections_IEnumerable_GetEnumerator_m36E9AA3609FC3571D00A9C885C12A578D15432D7 (BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = BsonArray_GetEnumerator_m38E989DD847BFBA1D9AE6408890EBEC664E0729C(__this, NULL);
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonArray::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonArray__ctor_m3121DAA5995AA53B27FCE79E5F69D13131F1F9F1 (BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m3935A6D299A58068CCFB138217E1D9C02F7130E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t39498331735ADCEED3C66A5E7F951FCC1C4EEEBE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t39498331735ADCEED3C66A5E7F951FCC1C4EEEBE* L_0 = (List_1_t39498331735ADCEED3C66A5E7F951FCC1C4EEEBE*)il2cpp_codegen_object_new(List_1_t39498331735ADCEED3C66A5E7F951FCC1C4EEEBE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m3935A6D299A58068CCFB138217E1D9C02F7130E1(L_0, List_1__ctor_m3935A6D299A58068CCFB138217E1D9C02F7130E1_RuntimeMethod_var);
		__this->____children_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____children_2), (void*)L_0);
		BsonToken__ctor_m04A0C7B9070DF73C0689038C8E2593C5FC18F8AA(__this, NULL);
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
// System.Void Newtonsoft.Json.Bson.BsonEmpty::.ctor(Newtonsoft.Json.Bson.BsonType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonEmpty__ctor_m7FD72E9106B5CECA3B85DAC437D81FF1C89C8F75 (BsonEmpty_t9F20528B697AB47F6FBA41E6BA4246DBD536BAB8* __this, int8_t ___type0, const RuntimeMethod* method) 
{
	{
		BsonToken__ctor_m04A0C7B9070DF73C0689038C8E2593C5FC18F8AA(__this, NULL);
		int8_t L_0 = ___type0;
		__this->___U3CTypeU3Ek__BackingField_4 = L_0;
		return;
	}
}
// Newtonsoft.Json.Bson.BsonType Newtonsoft.Json.Bson.BsonEmpty::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t BsonEmpty_get_Type_m2E09C11029868486DAA3C8CFCEE103301C430563 (BsonEmpty_t9F20528B697AB47F6FBA41E6BA4246DBD536BAB8* __this, const RuntimeMethod* method) 
{
	{
		int8_t L_0 = __this->___U3CTypeU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonEmpty::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonEmpty__cctor_m5C7D52A47D3F8B1A0265D40C1310BB5DEF4F1E9C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonEmpty_t9F20528B697AB47F6FBA41E6BA4246DBD536BAB8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BsonEmpty_t9F20528B697AB47F6FBA41E6BA4246DBD536BAB8* L_0 = (BsonEmpty_t9F20528B697AB47F6FBA41E6BA4246DBD536BAB8*)il2cpp_codegen_object_new(BsonEmpty_t9F20528B697AB47F6FBA41E6BA4246DBD536BAB8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		BsonEmpty__ctor_m7FD72E9106B5CECA3B85DAC437D81FF1C89C8F75(L_0, ((int32_t)10), NULL);
		((BsonEmpty_t9F20528B697AB47F6FBA41E6BA4246DBD536BAB8_StaticFields*)il2cpp_codegen_static_fields_for(BsonEmpty_t9F20528B697AB47F6FBA41E6BA4246DBD536BAB8_il2cpp_TypeInfo_var))->___Null_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((BsonEmpty_t9F20528B697AB47F6FBA41E6BA4246DBD536BAB8_StaticFields*)il2cpp_codegen_static_fields_for(BsonEmpty_t9F20528B697AB47F6FBA41E6BA4246DBD536BAB8_il2cpp_TypeInfo_var))->___Null_2), (void*)L_0);
		BsonEmpty_t9F20528B697AB47F6FBA41E6BA4246DBD536BAB8* L_1 = (BsonEmpty_t9F20528B697AB47F6FBA41E6BA4246DBD536BAB8*)il2cpp_codegen_object_new(BsonEmpty_t9F20528B697AB47F6FBA41E6BA4246DBD536BAB8_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		BsonEmpty__ctor_m7FD72E9106B5CECA3B85DAC437D81FF1C89C8F75(L_1, 6, NULL);
		((BsonEmpty_t9F20528B697AB47F6FBA41E6BA4246DBD536BAB8_StaticFields*)il2cpp_codegen_static_fields_for(BsonEmpty_t9F20528B697AB47F6FBA41E6BA4246DBD536BAB8_il2cpp_TypeInfo_var))->___Undefined_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((BsonEmpty_t9F20528B697AB47F6FBA41E6BA4246DBD536BAB8_StaticFields*)il2cpp_codegen_static_fields_for(BsonEmpty_t9F20528B697AB47F6FBA41E6BA4246DBD536BAB8_il2cpp_TypeInfo_var))->___Undefined_3), (void*)L_1);
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
// System.Void Newtonsoft.Json.Bson.BsonValue::.ctor(System.Object,Newtonsoft.Json.Bson.BsonType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonValue__ctor_m316255047E379B29CD5D70DBCDF98BAD4DB4C695 (BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660* __this, RuntimeObject* ___value0, int8_t ___type1, const RuntimeMethod* method) 
{
	{
		BsonToken__ctor_m04A0C7B9070DF73C0689038C8E2593C5FC18F8AA(__this, NULL);
		RuntimeObject* L_0 = ___value0;
		__this->____value_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____value_2), (void*)L_0);
		int8_t L_1 = ___type1;
		__this->____type_3 = L_1;
		return;
	}
}
// System.Object Newtonsoft.Json.Bson.BsonValue::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BsonValue_get_Value_m5CEBB13E31BA015930CF1D8E23C464599CE249D2 (BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____value_2;
		return L_0;
	}
}
// Newtonsoft.Json.Bson.BsonType Newtonsoft.Json.Bson.BsonValue::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t BsonValue_get_Type_m02508F5B41591FB05A329FB62FF25DBC56BC200A (BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660* __this, const RuntimeMethod* method) 
{
	{
		int8_t L_0 = __this->____type_3;
		return L_0;
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
// System.Void Newtonsoft.Json.Bson.BsonBoolean::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonBoolean__ctor_mBFEDD9C83B640D17F73B2ACA0B92DCD58D5781D5 (BsonBoolean_tCDA0063DFA3B0C789C19533BFA53A6E7CCD644BD* __this, bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___value0;
		bool L_1 = L_0;
		RuntimeObject* L_2 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_1);
		BsonValue__ctor_m316255047E379B29CD5D70DBCDF98BAD4DB4C695(__this, L_2, 8, NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonBoolean::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonBoolean__cctor_m0421B7408D44F2AA246C85FACD518A33698C1071 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonBoolean_tCDA0063DFA3B0C789C19533BFA53A6E7CCD644BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BsonBoolean_tCDA0063DFA3B0C789C19533BFA53A6E7CCD644BD* L_0 = (BsonBoolean_tCDA0063DFA3B0C789C19533BFA53A6E7CCD644BD*)il2cpp_codegen_object_new(BsonBoolean_tCDA0063DFA3B0C789C19533BFA53A6E7CCD644BD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		BsonBoolean__ctor_mBFEDD9C83B640D17F73B2ACA0B92DCD58D5781D5(L_0, (bool)0, NULL);
		((BsonBoolean_tCDA0063DFA3B0C789C19533BFA53A6E7CCD644BD_StaticFields*)il2cpp_codegen_static_fields_for(BsonBoolean_tCDA0063DFA3B0C789C19533BFA53A6E7CCD644BD_il2cpp_TypeInfo_var))->___False_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((BsonBoolean_tCDA0063DFA3B0C789C19533BFA53A6E7CCD644BD_StaticFields*)il2cpp_codegen_static_fields_for(BsonBoolean_tCDA0063DFA3B0C789C19533BFA53A6E7CCD644BD_il2cpp_TypeInfo_var))->___False_4), (void*)L_0);
		BsonBoolean_tCDA0063DFA3B0C789C19533BFA53A6E7CCD644BD* L_1 = (BsonBoolean_tCDA0063DFA3B0C789C19533BFA53A6E7CCD644BD*)il2cpp_codegen_object_new(BsonBoolean_tCDA0063DFA3B0C789C19533BFA53A6E7CCD644BD_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		BsonBoolean__ctor_mBFEDD9C83B640D17F73B2ACA0B92DCD58D5781D5(L_1, (bool)1, NULL);
		((BsonBoolean_tCDA0063DFA3B0C789C19533BFA53A6E7CCD644BD_StaticFields*)il2cpp_codegen_static_fields_for(BsonBoolean_tCDA0063DFA3B0C789C19533BFA53A6E7CCD644BD_il2cpp_TypeInfo_var))->___True_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((BsonBoolean_tCDA0063DFA3B0C789C19533BFA53A6E7CCD644BD_StaticFields*)il2cpp_codegen_static_fields_for(BsonBoolean_tCDA0063DFA3B0C789C19533BFA53A6E7CCD644BD_il2cpp_TypeInfo_var))->___True_5), (void*)L_1);
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
// System.Int32 Newtonsoft.Json.Bson.BsonString::get_ByteCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BsonString_get_ByteCount_m513C4F508FF36F57B49B881321517CAC2CBE06E3 (BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CByteCountU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonString::set_ByteCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonString_set_ByteCount_m31A317821BECC7731FA48F92B5433200A6515BCF (BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CByteCountU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Boolean Newtonsoft.Json.Bson.BsonString::get_IncludeLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BsonString_get_IncludeLength_m0E82D14B7DF5B53FBCD95D5891C3F79E96462D2D (BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CIncludeLengthU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonString::.ctor(System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonString__ctor_mA28B714E7D11E7131A16CB152D171CA7A4A6BD56 (BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* __this, RuntimeObject* ___value0, bool ___includeLength1, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		BsonValue__ctor_m316255047E379B29CD5D70DBCDF98BAD4DB4C695(__this, L_0, 2, NULL);
		bool L_1 = ___includeLength1;
		__this->___U3CIncludeLengthU3Ek__BackingField_5 = L_1;
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
// Newtonsoft.Json.Bson.BsonBinaryType Newtonsoft.Json.Bson.BsonBinary::get_BinaryType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t BsonBinary_get_BinaryType_mDE0AC23257F594CDF9EECBBD6C9BF59D998DD91B (BsonBinary_t10CD8515CA416C5958E3FA3290910E8FD2DFB8A8* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->___U3CBinaryTypeU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonBinary::set_BinaryType(Newtonsoft.Json.Bson.BsonBinaryType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonBinary_set_BinaryType_m967019AC06E6A447F796DCA7A73CABEFF3C7402A (BsonBinary_t10CD8515CA416C5958E3FA3290910E8FD2DFB8A8* __this, uint8_t ___value0, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = ___value0;
		__this->___U3CBinaryTypeU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonBinary::.ctor(System.Byte[],Newtonsoft.Json.Bson.BsonBinaryType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonBinary__ctor_m5B3120436DF99BD5D9DE02D2695CD9DE2CE7BB5B (BsonBinary_t10CD8515CA416C5958E3FA3290910E8FD2DFB8A8* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, uint8_t ___binaryType1, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		BsonValue__ctor_m316255047E379B29CD5D70DBCDF98BAD4DB4C695(__this, (RuntimeObject*)L_0, 5, NULL);
		uint8_t L_1 = ___binaryType1;
		BsonBinary_set_BinaryType_m967019AC06E6A447F796DCA7A73CABEFF3C7402A_inline(__this, L_1, NULL);
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
// Newtonsoft.Json.Bson.BsonString Newtonsoft.Json.Bson.BsonRegex::get_Pattern()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* BsonRegex_get_Pattern_mA699B72A76008CE662D1715632112D68F8BB85CC (BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1* __this, const RuntimeMethod* method) 
{
	{
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_0 = __this->___U3CPatternU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonRegex::set_Pattern(Newtonsoft.Json.Bson.BsonString)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonRegex_set_Pattern_m03387AC7A329EEAA6442715EA019B93C7D4A14FF (BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1* __this, BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* ___value0, const RuntimeMethod* method) 
{
	{
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_0 = ___value0;
		__this->___U3CPatternU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPatternU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// Newtonsoft.Json.Bson.BsonString Newtonsoft.Json.Bson.BsonRegex::get_Options()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* BsonRegex_get_Options_mDCE4C399FD3DB3BE40F013A3458CCCD0FCB44211 (BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1* __this, const RuntimeMethod* method) 
{
	{
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_0 = __this->___U3COptionsU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonRegex::set_Options(Newtonsoft.Json.Bson.BsonString)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonRegex_set_Options_m8A305E5CD6B32F3A48F6BC31203892A26FE967FC (BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1* __this, BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* ___value0, const RuntimeMethod* method) 
{
	{
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_0 = ___value0;
		__this->___U3COptionsU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COptionsU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonRegex::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonRegex__ctor_mA823184E2E1262D62F38DC5D1ACC130B5B0EEE99 (BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1* __this, String_t* ___pattern0, String_t* ___options1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BsonToken__ctor_m04A0C7B9070DF73C0689038C8E2593C5FC18F8AA(__this, NULL);
		String_t* L_0 = ___pattern0;
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_1 = (BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE*)il2cpp_codegen_object_new(BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		BsonString__ctor_mA28B714E7D11E7131A16CB152D171CA7A4A6BD56(L_1, L_0, (bool)0, NULL);
		BsonRegex_set_Pattern_m03387AC7A329EEAA6442715EA019B93C7D4A14FF_inline(__this, L_1, NULL);
		String_t* L_2 = ___options1;
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_3 = (BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE*)il2cpp_codegen_object_new(BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		BsonString__ctor_mA28B714E7D11E7131A16CB152D171CA7A4A6BD56(L_3, L_2, (bool)0, NULL);
		BsonRegex_set_Options_m8A305E5CD6B32F3A48F6BC31203892A26FE967FC_inline(__this, L_3, NULL);
		return;
	}
}
// Newtonsoft.Json.Bson.BsonType Newtonsoft.Json.Bson.BsonRegex::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t BsonRegex_get_Type_mE72E10F4DBAAC4714F12F2DC916E927A1EE72C3A (BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1* __this, const RuntimeMethod* method) 
{
	{
		return (int8_t)(((int32_t)11));
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
// Newtonsoft.Json.Bson.BsonString Newtonsoft.Json.Bson.BsonProperty::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* BsonProperty_get_Name_mF70295B575263AB7307995C119732FBA89FB6FA9 (BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE* __this, const RuntimeMethod* method) 
{
	{
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_0 = __this->___U3CNameU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonProperty::set_Name(Newtonsoft.Json.Bson.BsonString)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonProperty_set_Name_mBF75E093501D61ABA9B44CD595A848386002EDA0 (BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE* __this, BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* ___value0, const RuntimeMethod* method) 
{
	{
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_0 = ___value0;
		__this->___U3CNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// Newtonsoft.Json.Bson.BsonToken Newtonsoft.Json.Bson.BsonProperty::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* BsonProperty_get_Value_m0DAFFE451F84BACD72C5FF9F592D351117DB85F2 (BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE* __this, const RuntimeMethod* method) 
{
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_0 = __this->___U3CValueU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonProperty::set_Value(Newtonsoft.Json.Bson.BsonToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonProperty_set_Value_m7DAC5256E7337131CB0004255D86FBB812E5BAD8 (BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE* __this, BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* ___value0, const RuntimeMethod* method) 
{
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_0 = ___value0;
		__this->___U3CValueU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CValueU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonProperty::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonProperty__ctor_mFC963BA0F736C7A11FE68BB3A4DDE63A99B3A54C (BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE* __this, const RuntimeMethod* method) 
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
// System.DateTimeKind Newtonsoft.Json.Bson.BsonWriter::get_DateTimeKindHandling()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BsonWriter_get_DateTimeKindHandling_m97179D0C081FB37FC144909FEE6FC4B2146B8E8F (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, const RuntimeMethod* method) 
{
	{
		BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* L_0 = __this->____writer_14;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = BsonBinaryWriter_get_DateTimeKindHandling_m90614E0F1C0F02A38281C923194D7339F536664F_inline(L_0, NULL);
		return L_1;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::set_DateTimeKindHandling(System.DateTimeKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_set_DateTimeKindHandling_m248E2BDCA2BBAAC774B31003C5F399D2B5D9DAE7 (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* L_0 = __this->____writer_14;
		int32_t L_1 = ___value0;
		NullCheck(L_0);
		BsonBinaryWriter_set_DateTimeKindHandling_mE5606CA1E2ADA134652CEC5A0306E5F728E80FC5_inline(L_0, L_1, NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter__ctor_mB8DA2F2E87909A79490FBDF3FCD82D9C14D56B24 (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF7E6C53D86D8ADC0DB8EFC0A2CD9877CC8BC9914);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3_il2cpp_TypeInfo_var);
		JsonWriter__ctor_m5B0E4DCEC60E5158D71DDF7768E0FC5B09573739(__this, NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___stream0;
		ValidationUtils_ArgumentNotNull_mC7EBE963D14FFCC7B90B08B403FF584EC520C888(L_0, _stringLiteralF7E6C53D86D8ADC0DB8EFC0A2CD9877CC8BC9914, NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = ___stream0;
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_2 = (BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E*)il2cpp_codegen_object_new(BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		BinaryWriter__ctor_mF2F1235E378C3EC493A8C816597BCEB4205A9CA0(L_2, L_1, NULL);
		BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* L_3 = (BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09*)il2cpp_codegen_object_new(BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		BsonBinaryWriter__ctor_mD40C3447EF11061CE8EEE41BB5ED7A874102DC3C(L_3, L_2, NULL);
		__this->____writer_14 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____writer_14), (void*)L_3);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::.ctor(System.IO.BinaryWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter__ctor_m9A68F285FFC9770E242BDDDEBF8E6F7D4FC22F0E (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ___writer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral638C5441E8427B2B9D2C941DDBF958579B5FE3F0);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3_il2cpp_TypeInfo_var);
		JsonWriter__ctor_m5B0E4DCEC60E5158D71DDF7768E0FC5B09573739(__this, NULL);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_0 = ___writer0;
		ValidationUtils_ArgumentNotNull_mC7EBE963D14FFCC7B90B08B403FF584EC520C888(L_0, _stringLiteral638C5441E8427B2B9D2C941DDBF958579B5FE3F0, NULL);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_1 = ___writer0;
		BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* L_2 = (BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09*)il2cpp_codegen_object_new(BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		BsonBinaryWriter__ctor_mD40C3447EF11061CE8EEE41BB5ED7A874102DC3C(L_2, L_1, NULL);
		__this->____writer_14 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____writer_14), (void*)L_2);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_Flush_m9E2FCED7F3C90BB693529D62635D1DAF11685F08 (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, const RuntimeMethod* method) 
{
	{
		BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* L_0 = __this->____writer_14;
		NullCheck(L_0);
		BsonBinaryWriter_Flush_m8844BC6FFEE6C0BE26F4D807110A1F4C1E6658DA(L_0, NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteEnd(Newtonsoft.Json.JsonToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteEnd_mF35070E1C6EC127F41F69707FB949FE90324F439 (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, int32_t ___token0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___token0;
		JsonWriter_WriteEnd_m36FB4C43EE0F01066B13019046E5EECF96C902B8(__this, L_0, NULL);
		BsonWriter_RemoveParent_m76AEE3E680B0AA556D984C4D7AE1848C198AF103(__this, NULL);
		int32_t L_1;
		L_1 = JsonWriter_get_Top_m5095DA8B798DD98BE08ACA13C1C9CD816E9CB335(__this, NULL);
		if (L_1)
		{
			goto IL_0026;
		}
	}
	{
		BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* L_2 = __this->____writer_14;
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_3 = __this->____root_15;
		NullCheck(L_2);
		BsonBinaryWriter_WriteToken_m1CBE5AB86FEB5C2399287FEAEBFB80F9094A48E9(L_2, L_3, NULL);
	}

IL_0026:
	{
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteComment(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteComment_m43D84D85207162EF1083D96254809FD5422D46C3 (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, String_t* ___text0, const RuntimeMethod* method) 
{
	{
		JsonWriterException_tF13EC07A2159B2C5951971D4AED5A195DEBE8AAA* L_0;
		L_0 = JsonWriterException_Create_mA440D59D85200435C7AFC40CDEF5773888D0F94B(__this, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8F72A13E7E8E1CB50038C54FE7CC02AB7582F7AA)), (Exception_t*)NULL, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonWriter_WriteComment_m43D84D85207162EF1083D96254809FD5422D46C3_RuntimeMethod_var)));
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteStartConstructor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteStartConstructor_m1F88ADAEF8A51724CCBEDBF45591F27C337A9B15 (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	{
		JsonWriterException_tF13EC07A2159B2C5951971D4AED5A195DEBE8AAA* L_0;
		L_0 = JsonWriterException_Create_mA440D59D85200435C7AFC40CDEF5773888D0F94B(__this, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral040ACBC1C698075688E5B27E50C6370BEB2676A0)), (Exception_t*)NULL, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonWriter_WriteStartConstructor_m1F88ADAEF8A51724CCBEDBF45591F27C337A9B15_RuntimeMethod_var)));
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteRaw(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteRaw_m166F2B79C505DA68A9A52275A9DF26B397A4460D (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, String_t* ___json0, const RuntimeMethod* method) 
{
	{
		JsonWriterException_tF13EC07A2159B2C5951971D4AED5A195DEBE8AAA* L_0;
		L_0 = JsonWriterException_Create_mA440D59D85200435C7AFC40CDEF5773888D0F94B(__this, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0C97C66F7D6312F0BCB5A4E3E9ED7F8F1CF50F6A)), (Exception_t*)NULL, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonWriter_WriteRaw_m166F2B79C505DA68A9A52275A9DF26B397A4460D_RuntimeMethod_var)));
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteRawValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteRawValue_m12591A651F07D961A685E3C463098ED87557CB02 (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, String_t* ___json0, const RuntimeMethod* method) 
{
	{
		JsonWriterException_tF13EC07A2159B2C5951971D4AED5A195DEBE8AAA* L_0;
		L_0 = JsonWriterException_Create_mA440D59D85200435C7AFC40CDEF5773888D0F94B(__this, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0C97C66F7D6312F0BCB5A4E3E9ED7F8F1CF50F6A)), (Exception_t*)NULL, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonWriter_WriteRawValue_m12591A651F07D961A685E3C463098ED87557CB02_RuntimeMethod_var)));
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteStartArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteStartArray_m843BECB153A090E2412988023B9B2D7412D95DA2 (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_WriteStartArray_mE2EDFEE60214B989C151DCD66C2B3219D927C75A(__this, NULL);
		BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1* L_0 = (BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1*)il2cpp_codegen_object_new(BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		BsonArray__ctor_m3121DAA5995AA53B27FCE79E5F69D13131F1F9F1(L_0, NULL);
		BsonWriter_AddParent_m5733DE6024C0F5F3DF8B2638EB25D9DF15AB2761(__this, L_0, NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteStartObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteStartObject_mE29202DE49A43E8A76A3E230307B42D042076313 (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_WriteStartObject_m327A0474DB3032162614C57B6154773EA900C153(__this, NULL);
		BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB* L_0 = (BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB*)il2cpp_codegen_object_new(BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		BsonObject__ctor_m630E32FEFB85ABC73DA890C946486161162E0BDA(L_0, NULL);
		BsonWriter_AddParent_m5733DE6024C0F5F3DF8B2638EB25D9DF15AB2761(__this, L_0, NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::WritePropertyName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WritePropertyName_mFE66ED7A0D014936611D49C5F53A490D717D721E (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___name0;
		JsonWriter_WritePropertyName_mD805FBFFF2D43C2EC1E23A59C0102E5244CD537F(__this, L_0, NULL);
		String_t* L_1 = ___name0;
		__this->____propertyName_17 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____propertyName_17), (void*)L_1);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_Close_m8D322FE76531EA2599FD4F4C31540532D0A13A42 (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, const RuntimeMethod* method) 
{
	BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* G_B3_0 = NULL;
	BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* G_B2_0 = NULL;
	{
		JsonWriter_Close_m550789FF5D483AA86A99B5301B375F5BFB08C523(__this, NULL);
		bool L_0;
		L_0 = JsonWriter_get_CloseOutput_m0A40D11FF244B8766FA5A2467C78024B6E2F4736_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* L_1 = __this->____writer_14;
		BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* L_2 = L_1;
		G_B2_0 = L_2;
		if (L_2)
		{
			G_B3_0 = L_2;
			goto IL_0019;
		}
	}
	{
		return;
	}

IL_0019:
	{
		NullCheck(G_B3_0);
		BsonBinaryWriter_Close_m16C6400A2D52FFC66BC3F29D7A94373EDCB6291C(G_B3_0, NULL);
	}

IL_001e:
	{
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::AddParent(Newtonsoft.Json.Bson.BsonToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_AddParent_m5733DE6024C0F5F3DF8B2638EB25D9DF15AB2761 (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* ___container0, const RuntimeMethod* method) 
{
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_0 = ___container0;
		BsonWriter_AddToken_m3B3692A74D77D31F63999E7E77DD4386B74A9901(__this, L_0, NULL);
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_1 = ___container0;
		__this->____parent_16 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____parent_16), (void*)L_1);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::RemoveParent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_RemoveParent_m76AEE3E680B0AA556D984C4D7AE1848C198AF103 (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, const RuntimeMethod* method) 
{
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_0 = __this->____parent_16;
		NullCheck(L_0);
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_1;
		L_1 = BsonToken_get_Parent_m05A247A8B1E2FB87849EB7B6FE0B49A606BEF1A2_inline(L_0, NULL);
		__this->____parent_16 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____parent_16), (void*)L_1);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::AddValue(System.Object,Newtonsoft.Json.Bson.BsonType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_AddValue_m1EEA7A7873B2D58AAC37EB24AB9CFB3F81DB29A5 (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, RuntimeObject* ___value0, int8_t ___type1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___value0;
		int8_t L_1 = ___type1;
		BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660* L_2 = (BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660*)il2cpp_codegen_object_new(BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		BsonValue__ctor_m316255047E379B29CD5D70DBCDF98BAD4DB4C695(L_2, L_0, L_1, NULL);
		BsonWriter_AddToken_m3B3692A74D77D31F63999E7E77DD4386B74A9901(__this, L_2, NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::AddToken(Newtonsoft.Json.Bson.BsonToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_AddToken_m3B3692A74D77D31F63999E7E77DD4386B74A9901 (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* ___token0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB* V_0 = NULL;
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_0 = __this->____parent_16;
		if (!L_0)
		{
			goto IL_003e;
		}
	}
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_1 = __this->____parent_16;
		V_0 = ((BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB*)IsInstClass((RuntimeObject*)L_1, BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB_il2cpp_TypeInfo_var));
		BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB* L_2 = V_0;
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB* L_3 = V_0;
		String_t* L_4 = __this->____propertyName_17;
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_5 = ___token0;
		NullCheck(L_3);
		BsonObject_Add_mC5FD9CC9FC974FC4D7B10981A33291E88DB9DC79(L_3, L_4, L_5, NULL);
		__this->____propertyName_17 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____propertyName_17), (void*)(String_t*)NULL);
		return;
	}

IL_002c:
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_6 = __this->____parent_16;
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_7 = ___token0;
		NullCheck(((BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1*)CastclassClass((RuntimeObject*)L_6, BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1_il2cpp_TypeInfo_var)));
		BsonArray_Add_m483471C0CDB8A4438E1A0274845DC6424BDB765D(((BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1*)CastclassClass((RuntimeObject*)L_6, BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1_il2cpp_TypeInfo_var)), L_7, NULL);
		return;
	}

IL_003e:
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_8 = ___token0;
		NullCheck(L_8);
		int8_t L_9;
		L_9 = VirtualFuncInvoker0< int8_t >::Invoke(4 /* Newtonsoft.Json.Bson.BsonType Newtonsoft.Json.Bson.BsonToken::get_Type() */, L_8);
		if ((((int32_t)L_9) == ((int32_t)3)))
		{
			goto IL_0072;
		}
	}
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_10 = ___token0;
		NullCheck(L_10);
		int8_t L_11;
		L_11 = VirtualFuncInvoker0< int8_t >::Invoke(4 /* Newtonsoft.Json.Bson.BsonType Newtonsoft.Json.Bson.BsonToken::get_Type() */, L_10);
		if ((((int32_t)L_11) == ((int32_t)4)))
		{
			goto IL_0072;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var)));
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_12;
		L_12 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_13 = ___token0;
		NullCheck(L_13);
		int8_t L_14;
		L_14 = VirtualFuncInvoker0< int8_t >::Invoke(4 /* Newtonsoft.Json.Bson.BsonType Newtonsoft.Json.Bson.BsonToken::get_Type() */, L_13);
		int8_t L_15 = L_14;
		RuntimeObject* L_16 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonType_tB6A96FAF144D5C44C1B6071029D7FBBCF806AF51_il2cpp_TypeInfo_var)), &L_15);
		String_t* L_17;
		L_17 = StringUtils_FormatWith_m97587965D365EA1584A7D31B57D618E7768073E5(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4C48A326ACCC25E558DC329A6C92D8184942B973)), L_12, L_16, NULL);
		JsonWriterException_tF13EC07A2159B2C5951971D4AED5A195DEBE8AAA* L_18;
		L_18 = JsonWriterException_Create_mA440D59D85200435C7AFC40CDEF5773888D0F94B(__this, L_17, (Exception_t*)NULL, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonWriter_AddToken_m3B3692A74D77D31F63999E7E77DD4386B74A9901_RuntimeMethod_var)));
	}

IL_0072:
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_19 = ___token0;
		__this->____parent_16 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____parent_16), (void*)L_19);
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_20 = ___token0;
		__this->____root_15 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____root_15), (void*)L_20);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteValue_m1C861DC3F9139376E4A6C2677D367DC71F54CE19 (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonBinary_t10CD8515CA416C5958E3FA3290910E8FD2DFB8A8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___value0;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var)))
		{
			goto IL_002b;
		}
	}
	{
		RuntimeObject* L_1 = ___value0;
		V_0 = ((*(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F*)((BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F*)(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F*)UnBox(L_1, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var))));
		JsonWriter_SetWriteState_m5B9E16507E0F0539F8BD43ACBE7A4DE549DA9463(__this, 7, NULL, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = BigInteger_ToByteArray_mC501D315AF605FB0EF172628E9D4C95D2F015EB3((&V_0), NULL);
		BsonBinary_t10CD8515CA416C5958E3FA3290910E8FD2DFB8A8* L_3 = (BsonBinary_t10CD8515CA416C5958E3FA3290910E8FD2DFB8A8*)il2cpp_codegen_object_new(BsonBinary_t10CD8515CA416C5958E3FA3290910E8FD2DFB8A8_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		BsonBinary__ctor_m5B3120436DF99BD5D9DE02D2695CD9DE2CE7BB5B(L_3, L_2, 0, NULL);
		BsonWriter_AddToken_m3B3692A74D77D31F63999E7E77DD4386B74A9901(__this, L_3, NULL);
		return;
	}

IL_002b:
	{
		RuntimeObject* L_4 = ___value0;
		JsonWriter_WriteValue_mC96DBA6DC02ACB9D67D4524889764368DB468C2E(__this, L_4, NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteNull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteNull_mFFF707F753F8ABDDB465D0B4E961D64DC7887586 (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonEmpty_t9F20528B697AB47F6FBA41E6BA4246DBD536BAB8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_WriteNull_m2BF712564701AA53BAC6BD922677FF7B0B2310BC(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(BsonEmpty_t9F20528B697AB47F6FBA41E6BA4246DBD536BAB8_il2cpp_TypeInfo_var);
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_0 = ((BsonEmpty_t9F20528B697AB47F6FBA41E6BA4246DBD536BAB8_StaticFields*)il2cpp_codegen_static_fields_for(BsonEmpty_t9F20528B697AB47F6FBA41E6BA4246DBD536BAB8_il2cpp_TypeInfo_var))->___Null_2;
		BsonWriter_AddToken_m3B3692A74D77D31F63999E7E77DD4386B74A9901(__this, L_0, NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteUndefined()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteUndefined_m08D4E492179735F9F3857ACCB7153F71A9F45A72 (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonEmpty_t9F20528B697AB47F6FBA41E6BA4246DBD536BAB8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_WriteUndefined_m507BF49F988B94F07230A9B502D7E430E1ACCF00(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(BsonEmpty_t9F20528B697AB47F6FBA41E6BA4246DBD536BAB8_il2cpp_TypeInfo_var);
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_0 = ((BsonEmpty_t9F20528B697AB47F6FBA41E6BA4246DBD536BAB8_StaticFields*)il2cpp_codegen_static_fields_for(BsonEmpty_t9F20528B697AB47F6FBA41E6BA4246DBD536BAB8_il2cpp_TypeInfo_var))->___Undefined_3;
		BsonWriter_AddToken_m3B3692A74D77D31F63999E7E77DD4386B74A9901(__this, L_0, NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteValue_mF23F9970B41FBBAF8D989EDEADF6D850737A94F3 (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonEmpty_t9F20528B697AB47F6FBA41E6BA4246DBD536BAB8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* G_B2_0 = NULL;
	BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* G_B1_0 = NULL;
	BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* G_B3_0 = NULL;
	BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* G_B3_1 = NULL;
	{
		String_t* L_0 = ___value0;
		JsonWriter_WriteValue_m3ECF13257A8D1AB90301A4174D42337149BC9D0C(__this, L_0, NULL);
		String_t* L_1 = ___value0;
		G_B1_0 = __this;
		if (!L_1)
		{
			G_B2_0 = __this;
			goto IL_0014;
		}
	}
	{
		String_t* L_2 = ___value0;
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_3 = (BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE*)il2cpp_codegen_object_new(BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		BsonString__ctor_mA28B714E7D11E7131A16CB152D171CA7A4A6BD56(L_3, L_2, (bool)1, NULL);
		G_B3_0 = L_3;
		G_B3_1 = G_B1_0;
		goto IL_0019;
	}

IL_0014:
	{
		il2cpp_codegen_runtime_class_init_inline(BsonEmpty_t9F20528B697AB47F6FBA41E6BA4246DBD536BAB8_il2cpp_TypeInfo_var);
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_4 = ((BsonEmpty_t9F20528B697AB47F6FBA41E6BA4246DBD536BAB8_StaticFields*)il2cpp_codegen_static_fields_for(BsonEmpty_t9F20528B697AB47F6FBA41E6BA4246DBD536BAB8_il2cpp_TypeInfo_var))->___Null_2;
		G_B3_0 = ((BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE*)(L_4));
		G_B3_1 = G_B2_0;
	}

IL_0019:
	{
		NullCheck(G_B3_1);
		BsonWriter_AddToken_m3B3692A74D77D31F63999E7E77DD4386B74A9901(G_B3_1, G_B3_0, NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteValue_m2FC79561497CBDF988D2EF722E22903E63ECDC57 (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___value0;
		JsonWriter_WriteValue_m8E9BDBD7C29F82DCCB87B4F5D17304F5A341A5B8(__this, L_0, NULL);
		int32_t L_1 = ___value0;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_2);
		BsonWriter_AddValue_m1EEA7A7873B2D58AAC37EB24AB9CFB3F81DB29A5(__this, L_3, ((int32_t)16), NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteValue_m244AEDCA1E419CEFAC8A082D4B9A0C4689FF2CCE (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, uint32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0 = ___value0;
		if ((!(((uint32_t)L_0) > ((uint32_t)((int32_t)2147483647LL)))))
		{
			goto IL_0015;
		}
	}
	{
		JsonWriterException_tF13EC07A2159B2C5951971D4AED5A195DEBE8AAA* L_1;
		L_1 = JsonWriterException_Create_mA440D59D85200435C7AFC40CDEF5773888D0F94B(__this, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral37FDA2B361182A202537DCA1203AB3BEC2779E2F)), (Exception_t*)NULL, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonWriter_WriteValue_m244AEDCA1E419CEFAC8A082D4B9A0C4689FF2CCE_RuntimeMethod_var)));
	}

IL_0015:
	{
		uint32_t L_2 = ___value0;
		JsonWriter_WriteValue_m94B80E8F2C3BF83E01624C8DE99D37CAEF2FE39B(__this, L_2, NULL);
		uint32_t L_3 = ___value0;
		uint32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_4);
		BsonWriter_AddValue_m1EEA7A7873B2D58AAC37EB24AB9CFB3F81DB29A5(__this, L_5, ((int32_t)16), NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteValue_m3CCC473FC5D5CDB2FA5A096112C3680B7AAD13D8 (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int64_t L_0 = ___value0;
		JsonWriter_WriteValue_mEAB0A21EA57BEDF7BAD742C3F2A75EEB2E1091FE(__this, L_0, NULL);
		int64_t L_1 = ___value0;
		int64_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_2);
		BsonWriter_AddValue_m1EEA7A7873B2D58AAC37EB24AB9CFB3F81DB29A5(__this, L_3, ((int32_t)18), NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteValue_m253E004DDC355C900E5146C875EFEBFE0B808CFD (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, uint64_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint64_t L_0 = ___value0;
		if ((!(((uint64_t)L_0) > ((uint64_t)((int64_t)(std::numeric_limits<int64_t>::max)())))))
		{
			goto IL_0019;
		}
	}
	{
		JsonWriterException_tF13EC07A2159B2C5951971D4AED5A195DEBE8AAA* L_1;
		L_1 = JsonWriterException_Create_mA440D59D85200435C7AFC40CDEF5773888D0F94B(__this, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral013D189FFF6214B6307FB356F81DB4FD46A89D0E)), (Exception_t*)NULL, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonWriter_WriteValue_m253E004DDC355C900E5146C875EFEBFE0B808CFD_RuntimeMethod_var)));
	}

IL_0019:
	{
		uint64_t L_2 = ___value0;
		JsonWriter_WriteValue_m9A6D49A850A3EA706B7143FF45BCF9DECF2A6ED5(__this, L_2, NULL);
		uint64_t L_3 = ___value0;
		uint64_t L_4 = L_3;
		RuntimeObject* L_5 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_4);
		BsonWriter_AddValue_m1EEA7A7873B2D58AAC37EB24AB9CFB3F81DB29A5(__this, L_5, ((int32_t)18), NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteValue_mE26EACDC1C523AA208225AB9FACF48D6EE9A939B (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___value0;
		JsonWriter_WriteValue_mB83A734CC93E3FA5CF86ACD51DC69F42DF7FEA54(__this, L_0, NULL);
		float L_1 = ___value0;
		float L_2 = L_1;
		RuntimeObject* L_3 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_2);
		BsonWriter_AddValue_m1EEA7A7873B2D58AAC37EB24AB9CFB3F81DB29A5(__this, L_3, 1, NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteValue_mA83F23BC4B8D4AC8C71C95F7BD91275B61ACCEFC (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, double ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = ___value0;
		JsonWriter_WriteValue_m2C9947B42490CA9AB5E8EEFB36B3E00359C472D9(__this, L_0, NULL);
		double L_1 = ___value0;
		double L_2 = L_1;
		RuntimeObject* L_3 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_2);
		BsonWriter_AddValue_m1EEA7A7873B2D58AAC37EB24AB9CFB3F81DB29A5(__this, L_3, 1, NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteValue_mD623680FD8D563F2713B13D88D9DC4BBF1A5B939 (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonBoolean_tCDA0063DFA3B0C789C19533BFA53A6E7CCD644BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* G_B2_0 = NULL;
	BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* G_B1_0 = NULL;
	BsonBoolean_tCDA0063DFA3B0C789C19533BFA53A6E7CCD644BD* G_B3_0 = NULL;
	BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* G_B3_1 = NULL;
	{
		bool L_0 = ___value0;
		JsonWriter_WriteValue_m9EF9755CB7576F61E081148C00169A7128903B8B(__this, L_0, NULL);
		bool L_1 = ___value0;
		G_B1_0 = __this;
		if (L_1)
		{
			G_B2_0 = __this;
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BsonBoolean_tCDA0063DFA3B0C789C19533BFA53A6E7CCD644BD_il2cpp_TypeInfo_var);
		BsonBoolean_tCDA0063DFA3B0C789C19533BFA53A6E7CCD644BD* L_2 = ((BsonBoolean_tCDA0063DFA3B0C789C19533BFA53A6E7CCD644BD_StaticFields*)il2cpp_codegen_static_fields_for(BsonBoolean_tCDA0063DFA3B0C789C19533BFA53A6E7CCD644BD_il2cpp_TypeInfo_var))->___False_4;
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		goto IL_0017;
	}

IL_0012:
	{
		il2cpp_codegen_runtime_class_init_inline(BsonBoolean_tCDA0063DFA3B0C789C19533BFA53A6E7CCD644BD_il2cpp_TypeInfo_var);
		BsonBoolean_tCDA0063DFA3B0C789C19533BFA53A6E7CCD644BD* L_3 = ((BsonBoolean_tCDA0063DFA3B0C789C19533BFA53A6E7CCD644BD_StaticFields*)il2cpp_codegen_static_fields_for(BsonBoolean_tCDA0063DFA3B0C789C19533BFA53A6E7CCD644BD_il2cpp_TypeInfo_var))->___True_5;
		G_B3_0 = L_3;
		G_B3_1 = G_B2_0;
	}

IL_0017:
	{
		NullCheck(G_B3_1);
		BsonWriter_AddToken_m3B3692A74D77D31F63999E7E77DD4386B74A9901(G_B3_1, G_B3_0, NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteValue_m6DB75597C66D7A25306CDE9F94D404F71B13B595 (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, int16_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int16_t L_0 = ___value0;
		JsonWriter_WriteValue_mE7084E3565A5BAE07F9E553F7C9362C2022E5B44(__this, L_0, NULL);
		int16_t L_1 = ___value0;
		int16_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var, &L_2);
		BsonWriter_AddValue_m1EEA7A7873B2D58AAC37EB24AB9CFB3F81DB29A5(__this, L_3, ((int32_t)16), NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteValue_m03EFC7DAE130F7060ABE5AF7EB2FCF2E1E19ED62 (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, uint16_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint16_t L_0 = ___value0;
		JsonWriter_WriteValue_m152C46080EAA9C377E3E2E2942B16273F93A2148(__this, L_0, NULL);
		uint16_t L_1 = ___value0;
		uint16_t L_2 = L_1;
		RuntimeObject* L_3 = Box(UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var, &L_2);
		BsonWriter_AddValue_m1EEA7A7873B2D58AAC37EB24AB9CFB3F81DB29A5(__this, L_3, ((int32_t)16), NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteValue_m5896FAE2E7C7B6F78920F6B3D024952066069434 (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, Il2CppChar ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		Il2CppChar L_0 = ___value0;
		JsonWriter_WriteValue_mD5E4500BFFBC814E26C57409026A403C71EEECCF(__this, L_0, NULL);
		V_0 = (String_t*)NULL;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_1;
		L_1 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		String_t* L_2;
		L_2 = Char_ToString_m34499826F048A38EB8216D5844A5DA49F54719C8((&___value0), L_1, NULL);
		V_0 = L_2;
		String_t* L_3 = V_0;
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_4 = (BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE*)il2cpp_codegen_object_new(BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		BsonString__ctor_mA28B714E7D11E7131A16CB152D171CA7A4A6BD56(L_4, L_3, (bool)1, NULL);
		BsonWriter_AddToken_m3B3692A74D77D31F63999E7E77DD4386B74A9901(__this, L_4, NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteValue_m8CAB1650E127C21B630B95315A4B16D28F096F4E (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, uint8_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint8_t L_0 = ___value0;
		JsonWriter_WriteValue_m1AEB560BFD2393EBBE9E766263CA01E3BA2D0E6F(__this, L_0, NULL);
		uint8_t L_1 = ___value0;
		uint8_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_2);
		BsonWriter_AddValue_m1EEA7A7873B2D58AAC37EB24AB9CFB3F81DB29A5(__this, L_3, ((int32_t)16), NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.SByte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteValue_mE2C9B27E787A7A8BDB1595D45E225AAC49E50BF7 (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, int8_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int8_t L_0 = ___value0;
		JsonWriter_WriteValue_m0E635E0E6B005CD8D434FE57FAC79655FD774C4C(__this, L_0, NULL);
		int8_t L_1 = ___value0;
		int8_t L_2 = L_1;
		RuntimeObject* L_3 = Box(SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var, &L_2);
		BsonWriter_AddValue_m1EEA7A7873B2D58AAC37EB24AB9CFB3F81DB29A5(__this, L_3, ((int32_t)16), NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteValue_m7CED6666FFC962781DA90B7EF454DDDDF199E5F1 (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_0 = ___value0;
		JsonWriter_WriteValue_mBCA33B3507B7A3BBDA956DC573ACEEB6A9D359D8(__this, L_0, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_1 = ___value0;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_2 = L_1;
		RuntimeObject* L_3 = Box(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var, &L_2);
		BsonWriter_AddValue_m1EEA7A7873B2D58AAC37EB24AB9CFB3F81DB29A5(__this, L_3, 1, NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteValue_mAF1D91264588FB657ADF93788EE460C24B6F76C3 (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeUtils_t08EF5030CF29329A3646A81F48D1F440A6234121_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0 = ___value0;
		JsonWriter_WriteValue_m0FF59870C2C94523F795BF6F7F2FFC30CE179F8A(__this, L_0, NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1 = ___value0;
		int32_t L_2;
		L_2 = JsonWriter_get_DateTimeZoneHandling_m70A3776234605D953796332656844492C164F799_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(DateTimeUtils_t08EF5030CF29329A3646A81F48D1F440A6234121_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_3;
		L_3 = DateTimeUtils_EnsureDateTime_mA79D09FFD516714FB3A1296F5E55780FBD5191C8(L_1, L_2, NULL);
		___value0 = L_3;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_4 = ___value0;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_5 = L_4;
		RuntimeObject* L_6 = Box(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var, &L_5);
		BsonWriter_AddValue_m1EEA7A7873B2D58AAC37EB24AB9CFB3F81DB29A5(__this, L_6, ((int32_t)9), NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.DateTimeOffset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteValue_m61CDDC4C0D0229BB4C6C7423B4A9425E4F7DEC2E (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_0 = ___value0;
		JsonWriter_WriteValue_mF792BC34323AF19A7161B55838A630A9E169A132(__this, L_0, NULL);
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_1 = ___value0;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_2 = L_1;
		RuntimeObject* L_3 = Box(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var, &L_2);
		BsonWriter_AddValue_m1EEA7A7873B2D58AAC37EB24AB9CFB3F81DB29A5(__this, L_3, ((int32_t)9), NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteValue_m80C95A43E5F729592340D263DB7517C40235C14A (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonBinary_t10CD8515CA416C5958E3FA3290910E8FD2DFB8A8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		VirtualActionInvoker0::Invoke(82 /* System.Void Newtonsoft.Json.JsonWriter::WriteNull() */, __this);
		return;
	}

IL_000a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___value0;
		JsonWriter_WriteValue_mE1F445EACF5FB3E7EDF70D0C89BB230D95084DAD(__this, L_1, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___value0;
		BsonBinary_t10CD8515CA416C5958E3FA3290910E8FD2DFB8A8* L_3 = (BsonBinary_t10CD8515CA416C5958E3FA3290910E8FD2DFB8A8*)il2cpp_codegen_object_new(BsonBinary_t10CD8515CA416C5958E3FA3290910E8FD2DFB8A8_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		BsonBinary__ctor_m5B3120436DF99BD5D9DE02D2695CD9DE2CE7BB5B(L_3, L_2, 0, NULL);
		BsonWriter_AddToken_m3B3692A74D77D31F63999E7E77DD4386B74A9901(__this, L_3, NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteValue_mD25E3A6ADCA02C5BEC592E5171BE3963965BD71E (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, Guid_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonBinary_t10CD8515CA416C5958E3FA3290910E8FD2DFB8A8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Guid_t L_0 = ___value0;
		JsonWriter_WriteValue_mE9DA95DC1D6DAC672C97C861B92D3CB63933EC7B(__this, L_0, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = Guid_ToByteArray_m6EBFB2F42D3760D9143050A3A8ED03F085F3AFE9((&___value0), NULL);
		BsonBinary_t10CD8515CA416C5958E3FA3290910E8FD2DFB8A8* L_2 = (BsonBinary_t10CD8515CA416C5958E3FA3290910E8FD2DFB8A8*)il2cpp_codegen_object_new(BsonBinary_t10CD8515CA416C5958E3FA3290910E8FD2DFB8A8_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		BsonBinary__ctor_m5B3120436DF99BD5D9DE02D2695CD9DE2CE7BB5B(L_2, L_1, 4, NULL);
		BsonWriter_AddToken_m3B3692A74D77D31F63999E7E77DD4386B74A9901(__this, L_2, NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteValue_mA18524C3F7989C780934E01266E635D06837AE51 (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_0 = ___value0;
		JsonWriter_WriteValue_mBE7C0F46DDAD5B5F4D814A322D271B8141BF0F07(__this, L_0, NULL);
		String_t* L_1;
		L_1 = TimeSpan_ToString_m44D5BF48E35E18BB8B99A86B6535DA5E847FFE92((&___value0), NULL);
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_2 = (BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE*)il2cpp_codegen_object_new(BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		BsonString__ctor_mA28B714E7D11E7131A16CB152D171CA7A4A6BD56(L_2, L_1, (bool)1, NULL);
		BsonWriter_AddToken_m3B3692A74D77D31F63999E7E77DD4386B74A9901(__this, L_2, NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteValue_mFD86C81134810D4CD85941746F697C0A3CAD8A5C (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Uri_op_Equality_mD7D7AAB7023C0873B37D8B8C7195BEF34002A194(L_0, (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		VirtualActionInvoker0::Invoke(82 /* System.Void Newtonsoft.Json.JsonWriter::WriteNull() */, __this);
		return;
	}

IL_0010:
	{
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_2 = ___value0;
		JsonWriter_WriteValue_mBEB204C502C7E1547FC955BDBF558C0D616CD65A(__this, L_2, NULL);
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_3 = ___value0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_3);
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_5 = (BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE*)il2cpp_codegen_object_new(BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		BsonString__ctor_mA28B714E7D11E7131A16CB152D171CA7A4A6BD56(L_5, L_4, (bool)1, NULL);
		BsonWriter_AddToken_m3B3692A74D77D31F63999E7E77DD4386B74A9901(__this, L_5, NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteObjectId(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteObjectId_mF118E0F427F73A1FEAFB3853F056E9BE87524452 (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		ValidationUtils_ArgumentNotNull_mC7EBE963D14FFCC7B90B08B403FF584EC520C888((RuntimeObject*)L_0, _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___value0;
		NullCheck(L_1);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))) == ((int32_t)((int32_t)12))))
		{
			goto IL_001f;
		}
	}
	{
		JsonWriterException_tF13EC07A2159B2C5951971D4AED5A195DEBE8AAA* L_2;
		L_2 = JsonWriterException_Create_mA440D59D85200435C7AFC40CDEF5773888D0F94B(__this, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral161567E318CEB965509FE84CE4198A12E62440AF)), (Exception_t*)NULL, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonWriter_WriteObjectId_mF118E0F427F73A1FEAFB3853F056E9BE87524452_RuntimeMethod_var)));
	}

IL_001f:
	{
		JsonWriter_SetWriteState_m5B9E16507E0F0539F8BD43ACBE7A4DE549DA9463(__this, ((int32_t)12), NULL, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___value0;
		BsonWriter_AddValue_m1EEA7A7873B2D58AAC37EB24AB9CFB3F81DB29A5(__this, (RuntimeObject*)L_3, 7, NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteRegex(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteRegex_m5A72DD206C8BA845F9F2B6AAC9BF61AC6480B71E (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, String_t* ___pattern0, String_t* ___options1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8CD2F2DA1948373D6BFA8C44122166BC25E3FC0);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___pattern0;
		ValidationUtils_ArgumentNotNull_mC7EBE963D14FFCC7B90B08B403FF584EC520C888(L_0, _stringLiteralD8CD2F2DA1948373D6BFA8C44122166BC25E3FC0, NULL);
		JsonWriter_SetWriteState_m5B9E16507E0F0539F8BD43ACBE7A4DE549DA9463(__this, ((int32_t)12), NULL, NULL);
		String_t* L_1 = ___pattern0;
		String_t* L_2 = ___options1;
		BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1* L_3 = (BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1*)il2cpp_codegen_object_new(BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		BsonRegex__ctor_mA823184E2E1262D62F38DC5D1ACC130B5B0EEE99(L_3, L_1, L_2, NULL);
		BsonWriter_AddToken_m3B3692A74D77D31F63999E7E77DD4386B74A9901(__this, L_3, NULL);
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
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_mD3F36EC5C78F193C349C41776297E0482C988A51 (String_t* ___s0, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* XmlNodeWrapper_get_WrappedNode_m95E187562E167E13524197070157B15EE0ABFDFF_inline (XmlNodeWrapper_tE399A7CC58A6C5CE54C6EFE0D075A7B88C71B991* __this, const RuntimeMethod* method) 
{
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_0 = __this->____node_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XmlDeclaration_get_Version_m50261F1E46B645E69A99504F494FFD3BF915E633_inline (XmlDeclaration_tA04662FA58C306A24C864BDE73D1B410858E7A79* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___version_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XmlDeclaration_get_Encoding_m09D89DCD8457C62A6E49B9506A65A271DDBD011F_inline (XmlDeclaration_tA04662FA58C306A24C864BDE73D1B410858E7A79* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___encoding_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XmlDeclaration_get_Standalone_m46CC1833EE3C478318FF865E98A6899E440DDC6C_inline (XmlDeclaration_tA04662FA58C306A24C864BDE73D1B410858E7A79* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___standalone_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XmlDocumentType_get_SystemId_m17B225C509C0F5A4ECBB838AA81D15DED4016909_inline (XmlDocumentType_tFD7379E45412FC2EBD65280ED3DE7A1C941A8D9E* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___systemId_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XmlDocumentType_get_PublicId_m9E81FAF2D0AA9DC847D118813CBEB085F0CE1955_inline (XmlDocumentType_tFD7379E45412FC2EBD65280ED3DE7A1C941A8D9E* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___publicId_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XmlDocumentType_get_InternalSubset_mBD8D585ED0401EE1FC02F6FD5445E2109B083FEF_inline (XmlDocumentType_tFD7379E45412FC2EBD65280ED3DE7A1C941A8D9E* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___internalSubset_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990* XDeclarationWrapper_get_Declaration_mD7686F2EC3F760FD0AECC4FC6DD5E21F9F888437_inline (XDeclarationWrapper_t30D8572D5BECE3E49B4F5BF8C17EE1A37A89AAE9* __this, const RuntimeMethod* method) 
{
	{
		XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990* L_0 = __this->___U3CDeclarationU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XDeclaration_get_Version_m675EDE875CAF23C6801015479393247D2B8A05E7_inline (XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____version_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XDeclaration_get_Encoding_mA27D7E3A1673EE7D2A52F7D93A17FD9A33C4D5E0_inline (XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____encoding_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XDeclaration_set_Encoding_m13C45B72D33CFE9CCBA3450D0D3DF6A56D46CCD9_inline (XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->____encoding_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____encoding_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XDeclaration_get_Standalone_mCC775D6A93C6ED7C87BFFA4E3565675B4139CE7D_inline (XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____standalone_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XDeclaration_set_Standalone_mBFF62587A08487D5C7332D76AD4D3C55FB81BF33_inline (XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->____standalone_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____standalone_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XDocumentType_get_Name_m297D10AE558AA29F11E05CCAEF2D74C43F980AE9_inline (XDocumentType_t195D491B418C3696FBCAEE34E53D734E0B53A817* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____name_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XDocumentType_get_SystemId_m864BD298982BDA1D5B9C4DB6CB904B78FAFA04A7_inline (XDocumentType_t195D491B418C3696FBCAEE34E53D734E0B53A817* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____systemId_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XDocumentType_get_PublicId_mAFD124B111C0B665C14A2078EE4E30C28F1854FC_inline (XDocumentType_t195D491B418C3696FBCAEE34E53D734E0B53A817* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____publicId_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XDocumentType_get_InternalSubset_m6914F698B32A68A55C15AD4B971FEBFA85183DA1_inline (XDocumentType_t195D491B418C3696FBCAEE34E53D734E0B53A817* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____internalSubset_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* XObjectWrapper_get_WrappedNode_m3CA9623838D4D4A96DCF882FC3C592D3D64D7573_inline (XObjectWrapper_t1932FA32F64A100673DEC2063AF00052A6CE1B16* __this, const RuntimeMethod* method) 
{
	{
		XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29* L_0 = __this->____xmlObject_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990* XDocument_get_Declaration_m54F6FE679582E4CC7FBC6FD3565260BC308D98CA_inline (XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1* __this, const RuntimeMethod* method) 
{
	{
		XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990* L_0 = __this->____declaration_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XDocument_set_Declaration_m3DAB9857DC323A55ABA6F973614AABE5FB59A672_inline (XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1* __this, XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990* ___value0, const RuntimeMethod* method) 
{
	{
		XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990* L_0 = ___value0;
		__this->____declaration_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____declaration_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XText_get_Value_m5B2A033755DE27DEC73860B9E94AA41BB55E208C_inline (XText_t006159E7F735736D41BBC0738FFB066A14B31AE2* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___text_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XComment_get_Value_mD2D3D9900752AD9FA019947C965FF6FAF2B3E7DA_inline (XComment_t2FD9205AC70AF739D97E5CE8B1CC29459191F43D* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___value_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XProcessingInstruction_get_Target_mBB98BD38B91EBDC03558F4990591BE33FC1EB0DE_inline (XProcessingInstruction_t920C9022DAD590F61972E400D46FC1C443265795* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___target_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XProcessingInstruction_get_Data_mF06C89FCF9F580497E3B59331676AFC9AA3F416B_inline (XProcessingInstruction_t920C9022DAD590F61972E400D46FC1C443265795* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___data_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XAttribute_get_Value_mDCE15378AC161DF20094EF77EFF017A6F6766EB1_inline (XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___value_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XName_tAF6D9533A7D11AC27118F656985AC325C2A50E5C* XAttribute_get_Name_m5EB28279BB8BB19266997CB15733BD72CFB1DCB1_inline (XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF* __this, const RuntimeMethod* method) 
{
	{
		XName_tAF6D9533A7D11AC27118F656985AC325C2A50E5C* L_0 = __this->___name_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XName_get_LocalName_m4CA50C151ADB8183972EA556868148AF0F5BED75_inline (XName_tAF6D9533A7D11AC27118F656985AC325C2A50E5C* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____localName_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XName_tAF6D9533A7D11AC27118F656985AC325C2A50E5C* XElement_get_Name_mAF691F0AFE4F732FE836AEAC566536C1231AA74D_inline (XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* __this, const RuntimeMethod* method) 
{
	{
		XName_tAF6D9533A7D11AC27118F656985AC325C2A50E5C* L_0 = __this->___name_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XmlNodeConverter_get_OmitRootObject_m39D54F5791FD93911139FB9E46BABBDE5D062184_inline (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3COmitRootObjectU3Ek__BackingField_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XmlNodeConverter_get_DeserializeRootElementName_m2A0B73747601E99F60881D50EF7D55F0EDBE85A4_inline (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CDeserializeRootElementNameU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XmlNodeConverter_get_EncodeSpecialCharacters_m343756B55466DB680EF3561E34A803C5D2FFC0BD_inline (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CEncodeSpecialCharactersU3Ek__BackingField_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XmlNodeConverter_get_WriteArrayAttribute_mB90AAB6C83E3DFD4E0F0FE8DBB9BF151248378F2_inline (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CWriteArrayAttributeU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BsonBinaryWriter_set_DateTimeKindHandling_mE5606CA1E2ADA134652CEC5A0306E5F728E80FC5_inline (BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CDateTimeKindHandlingU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BsonToken_get_CalculatedSize_mBEC94C9A9175992741A3554721F83D78CBC3CC0C_inline (BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CCalculatedSizeU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* BsonProperty_get_Value_m0DAFFE451F84BACD72C5FF9F592D351117DB85F2_inline (BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE* __this, const RuntimeMethod* method) 
{
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_0 = __this->___U3CValueU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* BsonProperty_get_Name_mF70295B575263AB7307995C119732FBA89FB6FA9_inline (BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE* __this, const RuntimeMethod* method) 
{
	{
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_0 = __this->___U3CNameU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* BsonValue_get_Value_m5CEBB13E31BA015930CF1D8E23C464599CE249D2_inline (BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____value_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BsonString_get_ByteCount_m513C4F508FF36F57B49B881321517CAC2CBE06E3_inline (BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CByteCountU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BsonBinaryWriter_get_DateTimeKindHandling_m90614E0F1C0F02A38281C923194D7339F536664F_inline (BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CDateTimeKindHandlingU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t BsonBinary_get_BinaryType_mDE0AC23257F594CDF9EECBBD6C9BF59D998DD91B_inline (BsonBinary_t10CD8515CA416C5958E3FA3290910E8FD2DFB8A8* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->___U3CBinaryTypeU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* BsonRegex_get_Pattern_mA699B72A76008CE662D1715632112D68F8BB85CC_inline (BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1* __this, const RuntimeMethod* method) 
{
	{
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_0 = __this->___U3CPatternU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* BsonRegex_get_Options_mDCE4C399FD3DB3BE40F013A3458CCCD0FCB44211_inline (BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1* __this, const RuntimeMethod* method) 
{
	{
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_0 = __this->___U3COptionsU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BsonToken_set_CalculatedSize_m50B0EAD822D053F2B1B5DCC6AC1413DF69B8FCAB_inline (BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CCalculatedSizeU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BsonString_set_ByteCount_m31A317821BECC7731FA48F92B5433200A6515BCF_inline (BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CByteCountU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BsonString_get_IncludeLength_m0E82D14B7DF5B53FBCD95D5891C3F79E96462D2D_inline (BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CIncludeLengthU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool JsonReader_get_CloseInput_m5D28FC12BD22B62AA1E493BC7A77402F1AA26DE4_inline (JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CCloseInputU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t JsonReader_get_CurrentState_m2B6FA669883053CDABF108A980F808CDC9F13699_inline (JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____currentState_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool JsonReader_get_SupportMultipleContent_m28769E9E99495F868A23A8F6BDF5CB90D9B792B6_inline (JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CSupportMultipleContentU3Ek__BackingField_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BsonReader_get_DateTimeKindHandling_m7A6ED156AAC7CD3D4343B0779E4ABD90E247333D_inline (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____dateTimeKindHandling_29;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BsonProperty_set_Name_mBF75E093501D61ABA9B44CD595A848386002EDA0_inline (BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE* __this, BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* ___value0, const RuntimeMethod* method) 
{
	{
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_0 = ___value0;
		__this->___U3CNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BsonProperty_set_Value_m7DAC5256E7337131CB0004255D86FBB812E5BAD8_inline (BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE* __this, BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* ___value0, const RuntimeMethod* method) 
{
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_0 = ___value0;
		__this->___U3CValueU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CValueU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BsonToken_set_Parent_m6FE9310A7BE7920BFBBB78D007D3326FE25861BC_inline (BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* __this, BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* ___value0, const RuntimeMethod* method) 
{
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_0 = ___value0;
		__this->___U3CParentU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CParentU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BsonBinary_set_BinaryType_m967019AC06E6A447F796DCA7A73CABEFF3C7402A_inline (BsonBinary_t10CD8515CA416C5958E3FA3290910E8FD2DFB8A8* __this, uint8_t ___value0, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = ___value0;
		__this->___U3CBinaryTypeU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BsonRegex_set_Pattern_m03387AC7A329EEAA6442715EA019B93C7D4A14FF_inline (BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1* __this, BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* ___value0, const RuntimeMethod* method) 
{
	{
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_0 = ___value0;
		__this->___U3CPatternU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPatternU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BsonRegex_set_Options_m8A305E5CD6B32F3A48F6BC31203892A26FE967FC_inline (BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1* __this, BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* ___value0, const RuntimeMethod* method) 
{
	{
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_0 = ___value0;
		__this->___U3COptionsU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COptionsU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool JsonWriter_get_CloseOutput_m0A40D11FF244B8766FA5A2467C78024B6E2F4736_inline (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CCloseOutputU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* BsonToken_get_Parent_m05A247A8B1E2FB87849EB7B6FE0B49A606BEF1A2_inline (BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* __this, const RuntimeMethod* method) 
{
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_0 = __this->___U3CParentU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t JsonWriter_get_DateTimeZoneHandling_m70A3776234605D953796332656844492C164F799_inline (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____dateTimeZoneHandling_9;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_0 = (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230)__this->____current_3;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
