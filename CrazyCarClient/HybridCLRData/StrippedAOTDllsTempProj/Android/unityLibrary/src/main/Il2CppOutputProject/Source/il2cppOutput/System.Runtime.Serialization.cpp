#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>



// System.Runtime.Serialization.DataContractAttribute
struct DataContractAttribute_tD065D7D14CC8AA548815166AB8B8210D1B3C699F;
// System.Runtime.Serialization.DataMemberAttribute
struct DataMemberAttribute_t8AE446BE9032B9BC8E7B2EDC785F5C6FA0E5BB73;
// System.Runtime.Serialization.EnumMemberAttribute
struct EnumMemberAttribute_t65B5E85E642C96791DD6AE5EAD0276350954126F;
// System.String
struct String_t;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t5CFA55679A8E9D2525AFBC9C50BEC051BEA21310 
{
};
struct Il2CppArrayBounds;

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
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

// System.Runtime.Serialization.DataContractAttribute
struct DataContractAttribute_tD065D7D14CC8AA548815166AB8B8210D1B3C699F  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Boolean System.Runtime.Serialization.DataContractAttribute::isReference
	bool ___isReference_0;
};

// System.Runtime.Serialization.DataMemberAttribute
struct DataMemberAttribute_t8AE446BE9032B9BC8E7B2EDC785F5C6FA0E5BB73  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String System.Runtime.Serialization.DataMemberAttribute::name
	String_t* ___name_0;
	// System.Int32 System.Runtime.Serialization.DataMemberAttribute::order
	int32_t ___order_1;
	// System.Boolean System.Runtime.Serialization.DataMemberAttribute::isRequired
	bool ___isRequired_2;
	// System.Boolean System.Runtime.Serialization.DataMemberAttribute::emitDefaultValue
	bool ___emitDefaultValue_3;
};

// System.Runtime.Serialization.EnumMemberAttribute
struct EnumMemberAttribute_t65B5E85E642C96791DD6AE5EAD0276350954126F  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String System.Runtime.Serialization.EnumMemberAttribute::value
	String_t* ___value_0;
};

// System.Runtime.Serialization.IgnoreDataMemberAttribute
struct IgnoreDataMemberAttribute_tC1AC455123E5BF654B22396F3E5CB1C514D86777  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};
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
// System.Boolean System.Runtime.Serialization.DataContractAttribute::get_IsReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DataContractAttribute_get_IsReference_mEC2FFE0351B0DD896E7805670D6A614B1AE4C101 (DataContractAttribute_tD065D7D14CC8AA548815166AB8B8210D1B3C699F* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___isReference_0;
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
// System.String System.Runtime.Serialization.DataMemberAttribute::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DataMemberAttribute_get_Name_m8C4BF39A517D901076BAFF6FF89DD53C5F4B2B3E (DataMemberAttribute_t8AE446BE9032B9BC8E7B2EDC785F5C6FA0E5BB73* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___name_0;
		return L_0;
	}
}
// System.Int32 System.Runtime.Serialization.DataMemberAttribute::get_Order()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DataMemberAttribute_get_Order_m34D8C756AE07BD345011D887546DF54D71898956 (DataMemberAttribute_t8AE446BE9032B9BC8E7B2EDC785F5C6FA0E5BB73* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___order_1;
		return L_0;
	}
}
// System.Boolean System.Runtime.Serialization.DataMemberAttribute::get_IsRequired()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DataMemberAttribute_get_IsRequired_m318C586E28E349EA87096FE6FE473B4C4FD58C73 (DataMemberAttribute_t8AE446BE9032B9BC8E7B2EDC785F5C6FA0E5BB73* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___isRequired_2;
		return L_0;
	}
}
// System.Boolean System.Runtime.Serialization.DataMemberAttribute::get_EmitDefaultValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DataMemberAttribute_get_EmitDefaultValue_m430708B4CFB34DD522B6D01A66CE8FDEDCC088E8 (DataMemberAttribute_t8AE446BE9032B9BC8E7B2EDC785F5C6FA0E5BB73* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___emitDefaultValue_3;
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
// System.String System.Runtime.Serialization.EnumMemberAttribute::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EnumMemberAttribute_get_Value_mB41126B613B9FD1CD8A05D08FCEC4B6663864BE9 (EnumMemberAttribute_t65B5E85E642C96791DD6AE5EAD0276350954126F* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___value_0;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
