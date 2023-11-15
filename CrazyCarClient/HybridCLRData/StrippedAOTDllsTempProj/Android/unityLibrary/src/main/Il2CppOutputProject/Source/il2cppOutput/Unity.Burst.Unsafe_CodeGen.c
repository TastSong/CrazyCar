#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 T Unity.Burst.Unsafe::Read(System.Void*)
// 0x00000002 T Unity.Burst.Unsafe::ReadUnaligned(System.Void*)
// 0x00000003 T Unity.Burst.Unsafe::ReadUnaligned(System.Byte&)
// 0x00000004 System.Void Unity.Burst.Unsafe::Write(System.Void*,T)
// 0x00000005 System.Void Unity.Burst.Unsafe::WriteUnaligned(System.Void*,T)
// 0x00000006 System.Void Unity.Burst.Unsafe::WriteUnaligned(System.Byte&,T)
// 0x00000007 System.Void Unity.Burst.Unsafe::Copy(System.Void*,T&)
// 0x00000008 System.Void Unity.Burst.Unsafe::Copy(T&,System.Void*)
// 0x00000009 System.Void* Unity.Burst.Unsafe::AsPointer(T&)
// 0x0000000A System.Int32 Unity.Burst.Unsafe::SizeOf()
// 0x0000000B System.Void Unity.Burst.Unsafe::CopyBlock(System.Void*,System.Void*,System.UInt32)
extern void Unsafe_CopyBlock_mEE549E5B722DBA08465F585E64B08C6F0851C63A (void);
// 0x0000000C System.Void Unity.Burst.Unsafe::CopyBlock(System.Byte&,System.Byte&,System.UInt32)
extern void Unsafe_CopyBlock_mB2F0061CE4AC8B365EA84000AB91A07EC0688CFB (void);
// 0x0000000D System.Void Unity.Burst.Unsafe::CopyBlockUnaligned(System.Void*,System.Void*,System.UInt32)
extern void Unsafe_CopyBlockUnaligned_mA98259D4AD22A90DC7F39A97ECCF621E891613F3 (void);
// 0x0000000E System.Void Unity.Burst.Unsafe::CopyBlockUnaligned(System.Byte&,System.Byte&,System.UInt32)
extern void Unsafe_CopyBlockUnaligned_m98682FA9FBBC2E6A5D4CD90EAC1D02E4E5F7B1BA (void);
// 0x0000000F System.Void Unity.Burst.Unsafe::InitBlock(System.Void*,System.Byte,System.UInt32)
extern void Unsafe_InitBlock_mA585B84FCBCAAC1BB9050AE53969FF1AF0EBD369 (void);
// 0x00000010 System.Void Unity.Burst.Unsafe::InitBlock(System.Byte&,System.Byte,System.UInt32)
extern void Unsafe_InitBlock_m9632C2B0D7D0ECC88CA7398C83BE8EBD151E81D9 (void);
// 0x00000011 System.Void Unity.Burst.Unsafe::InitBlockUnaligned(System.Void*,System.Byte,System.UInt32)
extern void Unsafe_InitBlockUnaligned_m88E390D0E318E19F7680301AD5D3810DE69CD9DE (void);
// 0x00000012 System.Void Unity.Burst.Unsafe::InitBlockUnaligned(System.Byte&,System.Byte,System.UInt32)
extern void Unsafe_InitBlockUnaligned_m617B4B62CFE8A1E30DE4B9F0AC6BF9CAB113D94A (void);
// 0x00000013 T Unity.Burst.Unsafe::As(System.Object)
// 0x00000014 T& Unity.Burst.Unsafe::AsRef(System.Void*)
// 0x00000015 T& Unity.Burst.Unsafe::AsRef(T&)
// 0x00000016 TTo& Unity.Burst.Unsafe::As(TFrom&)
// 0x00000017 T& Unity.Burst.Unsafe::Unbox(System.Object)
// 0x00000018 T& Unity.Burst.Unsafe::Add(T&,System.Int32)
// 0x00000019 System.Void* Unity.Burst.Unsafe::Add(System.Void*,System.Int32)
// 0x0000001A T& Unity.Burst.Unsafe::Add(T&,System.IntPtr)
// 0x0000001B T& Unity.Burst.Unsafe::AddByteOffset(T&,System.IntPtr)
// 0x0000001C T& Unity.Burst.Unsafe::Subtract(T&,System.Int32)
// 0x0000001D System.Void* Unity.Burst.Unsafe::Subtract(System.Void*,System.Int32)
// 0x0000001E T& Unity.Burst.Unsafe::Subtract(T&,System.IntPtr)
// 0x0000001F T& Unity.Burst.Unsafe::SubtractByteOffset(T&,System.IntPtr)
// 0x00000020 System.IntPtr Unity.Burst.Unsafe::ByteOffset(T&,T&)
// 0x00000021 System.Boolean Unity.Burst.Unsafe::AreSame(T&,T&)
// 0x00000022 System.Boolean Unity.Burst.Unsafe::IsAddressGreaterThan(T&,T&)
// 0x00000023 System.Boolean Unity.Burst.Unsafe::IsAddressLessThan(T&,T&)
// 0x00000024 System.Void System.Runtime.Versioning.NonVersionableAttribute::.ctor()
extern void NonVersionableAttribute__ctor_mBC3056ECFEE16B17F3779A50EBDCCD519078E862 (void);
// 0x00000025 System.Void System.Runtime.CompilerServices.IsReadOnlyAttribute::.ctor()
extern void IsReadOnlyAttribute__ctor_m5CCFBC2EDEEA918A10A9C5A57A355234A495046D (void);
static Il2CppMethodPointer s_methodPointers[37] = 
{
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	Unsafe_CopyBlock_mEE549E5B722DBA08465F585E64B08C6F0851C63A,
	Unsafe_CopyBlock_mB2F0061CE4AC8B365EA84000AB91A07EC0688CFB,
	Unsafe_CopyBlockUnaligned_mA98259D4AD22A90DC7F39A97ECCF621E891613F3,
	Unsafe_CopyBlockUnaligned_m98682FA9FBBC2E6A5D4CD90EAC1D02E4E5F7B1BA,
	Unsafe_InitBlock_mA585B84FCBCAAC1BB9050AE53969FF1AF0EBD369,
	Unsafe_InitBlock_m9632C2B0D7D0ECC88CA7398C83BE8EBD151E81D9,
	Unsafe_InitBlockUnaligned_m88E390D0E318E19F7680301AD5D3810DE69CD9DE,
	Unsafe_InitBlockUnaligned_m617B4B62CFE8A1E30DE4B9F0AC6BF9CAB113D94A,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NonVersionableAttribute__ctor_mBC3056ECFEE16B17F3779A50EBDCCD519078E862,
	IsReadOnlyAttribute__ctor_m5CCFBC2EDEEA918A10A9C5A57A355234A495046D,
};
static const int32_t s_InvokerIndices[37] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	14788,
	14788,
	14788,
	14788,
	14793,
	14793,
	14793,
	14793,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	12103,
	12103,
};
static const Il2CppTokenRangePair s_rgctxIndices[8] = 
{
	{ 0x0600000A, { 0, 1 } },
	{ 0x06000017, { 1, 1 } },
	{ 0x06000018, { 2, 1 } },
	{ 0x06000019, { 3, 1 } },
	{ 0x0600001A, { 4, 1 } },
	{ 0x0600001C, { 5, 1 } },
	{ 0x0600001D, { 6, 1 } },
	{ 0x0600001E, { 7, 1 } },
};
extern const uint32_t g_rgctx_T_t1FDEFCA0B0E530419C707125EE8E74E3221D3778;
extern const uint32_t g_rgctx_T_t97B5BE2F3817B8961E8509DF5982D2B810BCE818;
extern const uint32_t g_rgctx_T_tEEBA3842B319E4DD94173281BA41EA604298A6D8;
extern const uint32_t g_rgctx_T_t3DF4F371C547F52D537F3A819B23EB9BEC9C55AE;
extern const uint32_t g_rgctx_T_t0DA05DAAE1602D536B9336ECFD5023C7250185BB;
extern const uint32_t g_rgctx_T_tD9B75C3A90F5ADAE1D4CB286BF589C64D6F826CF;
extern const uint32_t g_rgctx_T_t6431A832C0FE9B48DEC156C6F433FD40910285B7;
extern const uint32_t g_rgctx_T_t3B1E77C02DB4AAB58F90922E3099FF9917049F54;
static const Il2CppRGCTXDefinition s_rgctxValues[8] = 
{
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t1FDEFCA0B0E530419C707125EE8E74E3221D3778 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t97B5BE2F3817B8961E8509DF5982D2B810BCE818 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_tEEBA3842B319E4DD94173281BA41EA604298A6D8 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t3DF4F371C547F52D537F3A819B23EB9BEC9C55AE },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t0DA05DAAE1602D536B9336ECFD5023C7250185BB },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_tD9B75C3A90F5ADAE1D4CB286BF589C64D6F826CF },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t6431A832C0FE9B48DEC156C6F433FD40910285B7 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t3B1E77C02DB4AAB58F90922E3099FF9917049F54 },
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_Unity_Burst_Unsafe_CodeGenModule;
const Il2CppCodeGenModule g_Unity_Burst_Unsafe_CodeGenModule = 
{
	"Unity.Burst.Unsafe.dll",
	37,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	8,
	s_rgctxIndices,
	8,
	s_rgctxValues,
	NULL,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
