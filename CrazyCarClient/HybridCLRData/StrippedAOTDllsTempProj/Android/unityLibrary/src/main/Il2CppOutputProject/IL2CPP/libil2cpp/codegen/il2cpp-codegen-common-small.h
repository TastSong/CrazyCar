#pragma once

#include "il2cpp-codegen-common.h"
#include "il2cpp-object-internals.h"
#include <cmath>
#include <limits>
#include <type_traits>

template<typename TInput, typename TOutput, typename TFloat>
inline TOutput il2cpp_codegen_cast_floating_point(TFloat value)
{
    // In release builds and on ARM, a cast from a floating point to
    // integer value will use the min or max value if the cast is out
    // of range (instead of overflowing like x86/x64 debug builds).
    // So first do a cast to the output type (which is signed in
    // .NET - the value stack does not have unsigned types) to try to
    // get the value into a range that will actually be cast the way .NET does.
    if (value < 0)
        return (TOutput)((TInput)(TOutput)value);
    return (TOutput)((TInput)value);
}

// ARM targets handle a cast of floating point positive infinity (0x7F800000)
// differently from Intel targets. The expected behavior for .NET is from Intel,
// where the cast to a 32-bit int produces the value 0x80000000. On ARM, the sign
// is unchanged, producing 0x7FFFFFFF. To work around this change the positive
// infinity value to negative infinity.
template<typename T>
inline T il2cpp_codegen_cast_double_to_int(double value)
{
#if IL2CPP_TARGET_ARM64 || IL2CPP_TARGET_ARMV7
    if (value == HUGE_VAL)
    {
        if (std::is_same<T, int64_t>::value)
            return INT64_MIN;
        if (std::is_same<T, int32_t>::value)
            return INT32_MIN;
        return 0;
    }
#endif
    return (T)value;
}

template<bool, class T, class U>
struct pick_first;

template<class T, class U>
struct pick_first<true, T, U>
{
    typedef T type;
};

template<class T, class U>
struct pick_first<false, T, U>
{
    typedef U type;
};

template<class T, class U>
struct pick_bigger
{
    typedef typename pick_first<(sizeof(T) >= sizeof(U)), T, U>::type type;
};

template<typename T, typename U>
inline typename pick_bigger<T, U>::type il2cpp_codegen_multiply(T left, U right)
{
    return left * right;
}

template<typename T, typename U>
inline typename pick_bigger<T, U>::type il2cpp_codegen_add(T left, U right)
{
    return left + right;
}

template<typename T, typename U>
inline typename pick_bigger<T, U>::type il2cpp_codegen_subtract(T left, U right)
{
    return left - right;
}

NORETURN void il2cpp_codegen_raise_exception(Exception_t* ex, RuntimeMethod* lastManagedFrame = NULL);

// NativeArray macros
#define IL2CPP_NATIVEARRAY_GET_ITEM(TElementType, TTField, TIndex) \
    *(reinterpret_cast<TElementType*>(TTField) + TIndex)

#define IL2CPP_NATIVEARRAY_SET_ITEM(TElementType, TTField, TIndex, TValue) \
   *(reinterpret_cast<TElementType*>(TTField) + TIndex) = TValue;

#define IL2CPP_NATIVEARRAY_GET_LENGTH(TLengthField) \
   (TLengthField)

#if IL2CPP_TINY

#include "utils/StringUtils.h"

String_t* il2cpp_codegen_string_new_utf16(const il2cpp::utils::StringView<Il2CppChar>& str);

inline String_t* il2cpp_codegen_string_new_from_char_array(Il2CppArray* characterArray, size_t startIndex, size_t length)
{
    il2cpp_array_size_t arraySize = characterArray->max_length;
    if (startIndex + length > arraySize || startIndex < 0)
        il2cpp_codegen_raise_exception(NULL);

    return il2cpp_codegen_string_new_utf16(il2cpp::utils::StringView<Il2CppChar>(reinterpret_cast<Il2CppChar*>(characterArray + 1), startIndex, length));
}

inline int il2cpp_codegen_get_offset_to_string_data()
{
    return offsetof(Il2CppString, chars);
}

inline int32_t il2cpp_codegen_get_array_length(Il2CppArray* szArray)
{
    return static_cast<int32_t>(szArray->max_length);
}

int il2cpp_codegen_double_to_string(double value, uint8_t* format, uint8_t* buffer, int bufferLength);

struct Delegate_t;

inline intptr_t il2cpp_codegen_marshal_get_function_pointer_for_delegate(const Delegate_t* d)
{
    return reinterpret_cast<intptr_t>(reinterpret_cast<const Il2CppDelegate*>(d)->m_ReversePInvokeWrapperPtr);
}

inline void* il2cpp_codegen_get_reverse_pinvoke_function_ptr(void* d)
{
    return d;
}

#endif // IL2CPP_TINY

template<typename T>
constexpr bool il2cpp_codegen_is_floating_point_type()
{
    return std::is_same<T, float>::value || std::is_same<T, double>::value;
}

NORETURN void il2cpp_codegen_raise_overflow_exception(const RuntimeMethod* method);

template<typename TDest, typename TSource, typename TILStackType, bool checkOverflow, bool treatInputAsUnsigned, bool destIsFloatingPoint, bool sourceIsFloatingPoint>
class ConvImpl
{
    static TDest Conv(TSource srcValue, const RuntimeMethod* method);
};

template<typename TDest, typename TSource, typename TILStackType, bool checkOverflow, bool treatInputAsUnsigned>
struct ConvImpl<TDest, TSource, TILStackType, checkOverflow, treatInputAsUnsigned, false, false>
{
    // Integer type to integer type
    static TDest Conv(TSource srcValue, const RuntimeMethod* method)
    {
        IL2CPP_ASSERT(!il2cpp_codegen_is_floating_point_type<TDest>() && !il2cpp_codegen_is_floating_point_type<TSource>());
        TILStackType ilStackValue = (TILStackType)srcValue;

        if (checkOverflow)
        {
            typedef typename pick_bigger<TDest, TILStackType>::type CompType;

            if (!treatInputAsUnsigned && !std::is_unsigned<TDest>::value)
            {
                if ((CompType)ilStackValue > (CompType)std::numeric_limits<TDest>::max())
                    il2cpp_codegen_raise_overflow_exception(method);
                if ((CompType)ilStackValue < (CompType)std::numeric_limits<TDest>::min())
                    il2cpp_codegen_raise_overflow_exception(method);
            }
            if (treatInputAsUnsigned || std::is_unsigned<TDest>::value)
            {
                if ((typename std::make_unsigned<TILStackType>::type)ilStackValue > (typename std::make_unsigned<TDest>::type) std::numeric_limits<TDest>::max())
                    il2cpp_codegen_raise_overflow_exception(method);
                if (!treatInputAsUnsigned && ilStackValue < 0)
                    il2cpp_codegen_raise_overflow_exception(method);
            }
        }

        if (std::is_unsigned<TDest>::value)
            return (TDest)(typename std::make_unsigned<TILStackType>::type)ilStackValue;

    #if __cplusplus < 202022L
        // Prior to C++ 20 conversion of integer types to smaller types is undefined behavior
        // In most implementations it works as expected, except the optimizer is allowed to optimize it out
        if (sizeof(TDest) >= sizeof(TILStackType))
            return (TDest)ilStackValue;
        constexpr TILStackType mask = (TILStackType)std::numeric_limits<typename std::make_unsigned<TDest>::type>::max();
        return (TDest)(ilStackValue & mask);
    #else
        return (TDest)ilStackValue;
    #endif
    }
};

template<typename TDest, typename TSource, typename TILStackType, bool checkOverflow, bool treatInputAsUnsigned>
struct ConvImpl<TDest, TSource, TILStackType, checkOverflow, treatInputAsUnsigned, false, true>
{
    // Floating point type to integer type
    static TDest Conv(TSource srcValue, const RuntimeMethod* method)
    {
        IL2CPP_ASSERT(!il2cpp_codegen_is_floating_point_type<TDest>() && il2cpp_codegen_is_floating_point_type<TSource>());
        TILStackType ilStackValue = (TILStackType)srcValue;

        if (checkOverflow)
        {
            if (ilStackValue > (TILStackType)std::numeric_limits<TDest>::max())
                il2cpp_codegen_raise_overflow_exception(method);
            if (std::is_signed<TDest>::value && ilStackValue < (TILStackType)std::numeric_limits<TDest>::min())
                il2cpp_codegen_raise_overflow_exception(method);
            if (std::is_unsigned<TDest>::value && ilStackValue < 0)
                il2cpp_codegen_raise_overflow_exception(method);
        }

        if (std::is_same<TDest, typename std::make_unsigned<TDest>::type>::value)
            return il2cpp_codegen_cast_floating_point<typename std::make_signed<TDest>::type, TDest, TSource>(ilStackValue);
        return il2cpp_codegen_cast_double_to_int<TDest>(ilStackValue);
    }
};

template<typename TDest, typename TSource, typename TILStackType, bool checkOverflow, bool treatInputAsUnsigned>
struct ConvImpl<TDest, TSource, TILStackType, checkOverflow, treatInputAsUnsigned, true, false>
{
    // Integer type to floating point type
    static TDest Conv(TSource srcValue, const RuntimeMethod * method)
    {
        IL2CPP_ASSERT(il2cpp_codegen_is_floating_point_type<TDest>() && !il2cpp_codegen_is_floating_point_type<TSource>());
        TILStackType ilStackValue = (TILStackType)srcValue;
        if (treatInputAsUnsigned)
            return (TDest)(typename std::make_unsigned<TILStackType>::type)ilStackValue;
        return (TDest)ilStackValue;
    }
};

template<typename TDest, typename TSource, typename TILStackType, bool checkOverflow, bool treatInputAsUnsigned>
struct ConvImpl<TDest, TSource, TILStackType, checkOverflow, treatInputAsUnsigned, true, true>
{
    // Floating point to floating point type
    static TDest Conv(TSource srcValue, const RuntimeMethod* method)
    {
        IL2CPP_ASSERT(il2cpp_codegen_is_floating_point_type<TDest>() && il2cpp_codegen_is_floating_point_type<TSource>());
        return (TDest)srcValue;
    }
};

template<typename TDest, typename TSource, typename TILStackType, bool checkOverflow, bool treatInputAsUnsigned>
TDest il2cpp_codegen_conv(TSource srcValue, const RuntimeMethod* method)
{
    return ConvImpl<TDest, TSource, TILStackType, checkOverflow, treatInputAsUnsigned, il2cpp_codegen_is_floating_point_type<TDest>(), il2cpp_codegen_is_floating_point_type<TSource>()>::Conv(srcValue, method);
}
