#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>



// System.__Il2CppComDelegate
struct __Il2CppComDelegate_tD0DD2BBA6AC8F151D32B6DFD02F6BDA339F8DC4D;
// System.__Il2CppComObject
struct Il2CppComObject;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct Il2CppArrayBounds;

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

// System.__Il2CppComDelegate
struct __Il2CppComDelegate_tD0DD2BBA6AC8F151D32B6DFD02F6BDA339F8DC4D  : public Il2CppComObject
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.__Il2CppComObject::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void __Il2CppComObject_Finalize_m720B2062F661A0770A32D24B731AD4AFE314A5CD (Il2CppComObject* __this, const RuntimeMethod* method) ;
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
// System.Void System.__Il2CppComObject::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void __Il2CppComObject_Finalize_m720B2062F661A0770A32D24B731AD4AFE314A5CD (Il2CppComObject* __this, const RuntimeMethod* method) 
{
	if (__this->identity != NULL)
	{
		il2cpp_codegen_il2cpp_com_object_cleanup(__this);
		__this->identity->Release();
		__this->identity = NULL;
	}

	Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.__Il2CppComDelegate::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void __Il2CppComDelegate_Finalize_mC9F8EA94444C3AF0A43CC723A23EE4D8B7984F8C (__Il2CppComDelegate_tD0DD2BBA6AC8F151D32B6DFD02F6BDA339F8DC4D* __this, const RuntimeMethod* method) 
{
	__Il2CppComObject_Finalize_m720B2062F661A0770A32D24B731AD4AFE314A5CD(__this, NULL);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
