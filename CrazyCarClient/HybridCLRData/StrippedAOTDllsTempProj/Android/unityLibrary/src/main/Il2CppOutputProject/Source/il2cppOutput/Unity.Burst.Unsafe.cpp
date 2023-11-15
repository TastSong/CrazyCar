#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>



// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct IsReadOnlyAttribute_t0F24CF54B4D1245C4463E7C989E457CB05E113F8;
// System.Runtime.Versioning.NonVersionableAttribute
struct NonVersionableAttribute_t1DB218A79D38828C49D22FA63D91E463687ABDF5;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tF47F9AD17E4C851F27F94EF9A1FB29A52BA6B8A8 
{
};
struct Il2CppArrayBounds;

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// Unity.Burst.Unsafe
struct Unsafe_t7A5BFA4CCC4DE54D6A25FB6312C3DB95A35D2B9E  : public RuntimeObject
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

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct IsReadOnlyAttribute_t0F24CF54B4D1245C4463E7C989E457CB05E113F8  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Runtime.Versioning.NonVersionableAttribute
struct NonVersionableAttribute_t1DB218A79D38828C49D22FA63D91E463687ABDF5  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
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
// System.Void Unity.Burst.Unsafe::CopyBlock(System.Void*,System.Void*,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unsafe_CopyBlock_mEE549E5B722DBA08465F585E64B08C6F0851C63A (void* ___destination0, void* ___source1, uint32_t ___byteCount2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		void* L_1 = ___source1;
		uint32_t L_2 = ___byteCount2;
		il2cpp_codegen_memcpy(L_0, L_1, L_2);
		return;
	}
}
// System.Void Unity.Burst.Unsafe::CopyBlock(System.Byte&,System.Byte&,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unsafe_CopyBlock_mB2F0061CE4AC8B365EA84000AB91A07EC0688CFB (uint8_t* ___destination0, uint8_t* ___source1, uint32_t ___byteCount2, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___destination0;
		uint8_t* L_1 = ___source1;
		uint32_t L_2 = ___byteCount2;
		il2cpp_codegen_memcpy(L_0, L_1, L_2);
		return;
	}
}
// System.Void Unity.Burst.Unsafe::CopyBlockUnaligned(System.Void*,System.Void*,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unsafe_CopyBlockUnaligned_mA98259D4AD22A90DC7F39A97ECCF621E891613F3 (void* ___destination0, void* ___source1, uint32_t ___byteCount2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		void* L_1 = ___source1;
		uint32_t L_2 = ___byteCount2;
		il2cpp_codegen_memcpy(L_0, L_1, L_2);
		return;
	}
}
// System.Void Unity.Burst.Unsafe::CopyBlockUnaligned(System.Byte&,System.Byte&,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unsafe_CopyBlockUnaligned_m98682FA9FBBC2E6A5D4CD90EAC1D02E4E5F7B1BA (uint8_t* ___destination0, uint8_t* ___source1, uint32_t ___byteCount2, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___destination0;
		uint8_t* L_1 = ___source1;
		uint32_t L_2 = ___byteCount2;
		il2cpp_codegen_memcpy(L_0, L_1, L_2);
		return;
	}
}
// System.Void Unity.Burst.Unsafe::InitBlock(System.Void*,System.Byte,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unsafe_InitBlock_mA585B84FCBCAAC1BB9050AE53969FF1AF0EBD369 (void* ___startAddress0, uint8_t ___value1, uint32_t ___byteCount2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___startAddress0;
		uint8_t L_1 = ___value1;
		uint32_t L_2 = ___byteCount2;
		il2cpp_codegen_memset(L_0, L_1, L_2);
		return;
	}
}
// System.Void Unity.Burst.Unsafe::InitBlock(System.Byte&,System.Byte,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unsafe_InitBlock_m9632C2B0D7D0ECC88CA7398C83BE8EBD151E81D9 (uint8_t* ___startAddress0, uint8_t ___value1, uint32_t ___byteCount2, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___startAddress0;
		uint8_t L_1 = ___value1;
		uint32_t L_2 = ___byteCount2;
		il2cpp_codegen_memset(L_0, L_1, L_2);
		return;
	}
}
// System.Void Unity.Burst.Unsafe::InitBlockUnaligned(System.Void*,System.Byte,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unsafe_InitBlockUnaligned_m88E390D0E318E19F7680301AD5D3810DE69CD9DE (void* ___startAddress0, uint8_t ___value1, uint32_t ___byteCount2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___startAddress0;
		uint8_t L_1 = ___value1;
		uint32_t L_2 = ___byteCount2;
		il2cpp_codegen_memset(L_0, L_1, L_2);
		return;
	}
}
// System.Void Unity.Burst.Unsafe::InitBlockUnaligned(System.Byte&,System.Byte,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unsafe_InitBlockUnaligned_m617B4B62CFE8A1E30DE4B9F0AC6BF9CAB113D94A (uint8_t* ___startAddress0, uint8_t ___value1, uint32_t ___byteCount2, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___startAddress0;
		uint8_t L_1 = ___value1;
		uint32_t L_2 = ___byteCount2;
		il2cpp_codegen_memset(L_0, L_1, L_2);
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
// System.Void System.Runtime.Versioning.NonVersionableAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonVersionableAttribute__ctor_mBC3056ECFEE16B17F3779A50EBDCCD519078E862 (NonVersionableAttribute_t1DB218A79D38828C49D22FA63D91E463687ABDF5* __this, const RuntimeMethod* method) 
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
// System.Void System.Runtime.CompilerServices.IsReadOnlyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsReadOnlyAttribute__ctor_m5CCFBC2EDEEA918A10A9C5A57A355234A495046D (IsReadOnlyAttribute_t0F24CF54B4D1245C4463E7C989E457CB05E113F8* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
