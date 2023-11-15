#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.String UnityEngine.JsonUtility::ToJsonInternal(System.Object,System.Boolean)
extern void JsonUtility_ToJsonInternal_mB893BE1511779B2E36B24BC77D2FB52BF5894CDD (void);
// 0x00000002 System.Object UnityEngine.JsonUtility::FromJsonInternal(System.String,System.Object,System.Type)
extern void JsonUtility_FromJsonInternal_m6C8155071DFF33D870873F945D1E4C965D1FE6C0 (void);
// 0x00000003 System.String UnityEngine.JsonUtility::ToJson(System.Object)
extern void JsonUtility_ToJson_m28CC6843B9D3723D88AD13EA3829B71FDE7826BA (void);
// 0x00000004 System.String UnityEngine.JsonUtility::ToJson(System.Object,System.Boolean)
extern void JsonUtility_ToJson_m53A1FEE0D388CF3A629E093C04B5E1A6D5463B53 (void);
// 0x00000005 T UnityEngine.JsonUtility::FromJson(System.String)
// 0x00000006 System.Object UnityEngine.JsonUtility::FromJson(System.String,System.Type)
extern void JsonUtility_FromJson_m6DF4F85BE40F8A96BAFEC189306813ECE30DF44A (void);
static Il2CppMethodPointer s_methodPointers[6] = 
{
	JsonUtility_ToJsonInternal_mB893BE1511779B2E36B24BC77D2FB52BF5894CDD,
	JsonUtility_FromJsonInternal_m6C8155071DFF33D870873F945D1E4C965D1FE6C0,
	JsonUtility_ToJson_m28CC6843B9D3723D88AD13EA3829B71FDE7826BA,
	JsonUtility_ToJson_m53A1FEE0D388CF3A629E093C04B5E1A6D5463B53,
	NULL,
	JsonUtility_FromJson_m6DF4F85BE40F8A96BAFEC189306813ECE30DF44A,
};
static const int32_t s_InvokerIndices[6] = 
{
	15653,
	14538,
	17346,
	15653,
	0,
	15665,
};
static const Il2CppTokenRangePair s_rgctxIndices[1] = 
{
	{ 0x06000005, { 0, 2 } },
};
extern const uint32_t g_rgctx_T_tB3191261F083EB0AE2454F736BF8A220615E222C;
extern const uint32_t g_rgctx_T_tB3191261F083EB0AE2454F736BF8A220615E222C;
static const Il2CppRGCTXDefinition s_rgctxValues[2] = 
{
	{ (Il2CppRGCTXDataType)1, (const void *)&g_rgctx_T_tB3191261F083EB0AE2454F736BF8A220615E222C },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_tB3191261F083EB0AE2454F736BF8A220615E222C },
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_UnityEngine_JSONSerializeModule_CodeGenModule;
const Il2CppCodeGenModule g_UnityEngine_JSONSerializeModule_CodeGenModule = 
{
	"UnityEngine.JSONSerializeModule.dll",
	6,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	1,
	s_rgctxIndices,
	2,
	s_rgctxValues,
	NULL,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
