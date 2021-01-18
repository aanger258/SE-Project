#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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

// System.Action`2<System.Object,System.EventArgs>
struct Action_2_tC27C27AF2F38BC3A52153621D61F10F9421E87D2;
// System.Action`2<System.Object,System.Object>
struct Action_2_t0DB6FD6F515527EAB552B690A291778C6F00D48C;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Collections.Generic.Dictionary`2/Entry<System.Object,System.Object>[]
struct EntryU5BU5D_tDF76BDF98210D70C971EBDB07E96E9A8B9CBC6C6;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_t0394DE2BA7C2C82605C6E9DEBB21A8C5C792E97C;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t0816666499CBD11E58E1E7C79A4EFC2AA47E08A2;
// System.Collections.Generic.IDictionary`2<System.Object,System.Object>
struct IDictionary_2_tF77278125F2C7A401884F0168E974ADB442020AF;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_tA584FE06D8A4CAE8198F82001C2BC17C422A76AB;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_tAE7A8756D8CF0882DD348DC328FB36FEE0FB7DD0;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t4594E4068980FD80C0C538F4F8042A626BC1F262;
// System.Collections.IEnumerator
struct IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.EventArgs
struct EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// ZXing.Common.DecodingOptions/ChangeNotifyDictionary`2<System.Object,System.Object>
struct ChangeNotifyDictionary_2_t2A41DC55F0C32F4E6C3F40A9BF912C7D7213DC4F;

extern RuntimeClass* Action_2_tC27C27AF2F38BC3A52153621D61F10F9421E87D2_il2cpp_TypeInfo_var;
extern RuntimeClass* EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerable_tD74549CEA1AA48E768382B94FEACBB07E2E3FA2C_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Action_2_Invoke_mB37CF1918B6A880806FCFADAE61902476CBC4E98_RuntimeMethod_var;
extern const uint32_t ChangeNotifyDictionary_2_OnValueChanged_mF732B283EC92655FC4E393266A98D187FB55C529_MetadataUsageId;
extern const uint32_t ChangeNotifyDictionary_2_System_Collections_IEnumerable_GetEnumerator_m1B97C2CCDB168FDE8AE9F1E364EF371E654F5A8D_MetadataUsageId;
extern const uint32_t ChangeNotifyDictionary_2_add_ValueChanged_m7638C3542BA196F1FD90E1FD8910B64CEB67FE9C_MetadataUsageId;
extern const uint32_t ChangeNotifyDictionary_2_remove_ValueChanged_mDAFC775E8A901E733D8A8EDAB396CF5CE42A43D1_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct KeyValuePair_2U5BU5D_t4594E4068980FD80C0C538F4F8042A626BC1F262;


#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef DICTIONARY_2_T32F25F093828AA9F93CB11C2A2B4648FD62A09BA_H
#define DICTIONARY_2_T32F25F093828AA9F93CB11C2A2B4648FD62A09BA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct  Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tDF76BDF98210D70C971EBDB07E96E9A8B9CBC6C6* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t0394DE2BA7C2C82605C6E9DEBB21A8C5C792E97C * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t0816666499CBD11E58E1E7C79A4EFC2AA47E08A2 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_0), value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ___entries_1)); }
	inline EntryU5BU5D_tDF76BDF98210D70C971EBDB07E96E9A8B9CBC6C6* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tDF76BDF98210D70C971EBDB07E96E9A8B9CBC6C6** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tDF76BDF98210D70C971EBDB07E96E9A8B9CBC6C6* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((&___entries_1), value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_6), value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ___keys_7)); }
	inline KeyCollection_t0394DE2BA7C2C82605C6E9DEBB21A8C5C792E97C * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t0394DE2BA7C2C82605C6E9DEBB21A8C5C792E97C ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t0394DE2BA7C2C82605C6E9DEBB21A8C5C792E97C * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((&___keys_7), value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ___values_8)); }
	inline ValueCollection_t0816666499CBD11E58E1E7C79A4EFC2AA47E08A2 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t0816666499CBD11E58E1E7C79A4EFC2AA47E08A2 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t0816666499CBD11E58E1E7C79A4EFC2AA47E08A2 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((&___values_8), value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T32F25F093828AA9F93CB11C2A2B4648FD62A09BA_H
#ifndef EVENTARGS_T8E6CA180BE0E56674C6407011A94BAF7C757352E_H
#define EVENTARGS_T8E6CA180BE0E56674C6407011A94BAF7C757352E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventArgs
struct  EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E  : public RuntimeObject
{
public:

public:
};

struct EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_StaticFields, ___Empty_0)); }
	inline EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTARGS_T8E6CA180BE0E56674C6407011A94BAF7C757352E_H
#ifndef VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#define VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};
#endif // VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifndef CHANGENOTIFYDICTIONARY_2_T2A41DC55F0C32F4E6C3F40A9BF912C7D7213DC4F_H
#define CHANGENOTIFYDICTIONARY_2_T2A41DC55F0C32F4E6C3F40A9BF912C7D7213DC4F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.Common.DecodingOptions_ChangeNotifyDictionary`2<System.Object,System.Object>
struct  ChangeNotifyDictionary_2_t2A41DC55F0C32F4E6C3F40A9BF912C7D7213DC4F  : public RuntimeObject
{
public:
	// System.Collections.Generic.IDictionary`2<TKey,TValue> ZXing.Common.DecodingOptions_ChangeNotifyDictionary`2::values
	RuntimeObject* ___values_0;
	// System.Action`2<System.Object,System.EventArgs> ZXing.Common.DecodingOptions_ChangeNotifyDictionary`2::ValueChanged
	Action_2_tC27C27AF2F38BC3A52153621D61F10F9421E87D2 * ___ValueChanged_1;

public:
	inline static int32_t get_offset_of_values_0() { return static_cast<int32_t>(offsetof(ChangeNotifyDictionary_2_t2A41DC55F0C32F4E6C3F40A9BF912C7D7213DC4F, ___values_0)); }
	inline RuntimeObject* get_values_0() const { return ___values_0; }
	inline RuntimeObject** get_address_of_values_0() { return &___values_0; }
	inline void set_values_0(RuntimeObject* value)
	{
		___values_0 = value;
		Il2CppCodeGenWriteBarrier((&___values_0), value);
	}

	inline static int32_t get_offset_of_ValueChanged_1() { return static_cast<int32_t>(offsetof(ChangeNotifyDictionary_2_t2A41DC55F0C32F4E6C3F40A9BF912C7D7213DC4F, ___ValueChanged_1)); }
	inline Action_2_tC27C27AF2F38BC3A52153621D61F10F9421E87D2 * get_ValueChanged_1() const { return ___ValueChanged_1; }
	inline Action_2_tC27C27AF2F38BC3A52153621D61F10F9421E87D2 ** get_address_of_ValueChanged_1() { return &___ValueChanged_1; }
	inline void set_ValueChanged_1(Action_2_tC27C27AF2F38BC3A52153621D61F10F9421E87D2 * value)
	{
		___ValueChanged_1 = value;
		Il2CppCodeGenWriteBarrier((&___ValueChanged_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHANGENOTIFYDICTIONARY_2_T2A41DC55F0C32F4E6C3F40A9BF912C7D7213DC4F_H
#ifndef BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#define BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_5), value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#ifndef KEYVALUEPAIR_2_T23481547E419E16E3B96A303578C1EB685C99EEE_H
#define KEYVALUEPAIR_2_T23481547E419E16E3B96A303578C1EB685C99EEE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct  KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T23481547E419E16E3B96A303578C1EB685C99EEE_H
#ifndef INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#define INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#define VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifndef DELEGATE_T_H
#define DELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_7), value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_8), value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((&___data_9), value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
#endif // DELEGATE_T_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((&___delegates_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};
#endif // MULTICASTDELEGATE_T_H
#ifndef ACTION_2_TC27C27AF2F38BC3A52153621D61F10F9421E87D2_H
#define ACTION_2_TC27C27AF2F38BC3A52153621D61F10F9421E87D2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`2<System.Object,System.EventArgs>
struct  Action_2_tC27C27AF2F38BC3A52153621D61F10F9421E87D2  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_2_TC27C27AF2F38BC3A52153621D61F10F9421E87D2_H
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t4594E4068980FD80C0C538F4F8042A626BC1F262  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  m_Items[1];

public:
	inline KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Action`2<System.Object,System.Object>::Invoke(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Action_2_Invoke_m1738FFAE74BE5E599FD42520FA2BEF69D1AC4709_gshared (Action_2_t0DB6FD6F515527EAB552B690A291778C6F00D48C * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);

// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
extern "C" IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1 (Delegate_t * p0, Delegate_t * p1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
extern "C" IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D (Delegate_t * p0, Delegate_t * p1, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,System.EventArgs>::Invoke(!0,!1)
inline void Action_2_Invoke_mB37CF1918B6A880806FCFADAE61902476CBC4E98 (Action_2_tC27C27AF2F38BC3A52153621D61F10F9421E87D2 * __this, RuntimeObject * p0, EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * p1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tC27C27AF2F38BC3A52153621D61F10F9421E87D2 *, RuntimeObject *, EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E *, const RuntimeMethod*))Action_2_Invoke_m1738FFAE74BE5E599FD42520FA2BEF69D1AC4709_gshared)(__this, p0, p1, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ZXing.Common.DecodingOptions_ChangeNotifyDictionary`2<System.Object,System.Object>::add_ValueChanged(System.Action`2<System.Object,System.EventArgs>)
extern "C" IL2CPP_METHOD_ATTR void ChangeNotifyDictionary_2_add_ValueChanged_m7638C3542BA196F1FD90E1FD8910B64CEB67FE9C_gshared (ChangeNotifyDictionary_2_t2A41DC55F0C32F4E6C3F40A9BF912C7D7213DC4F * __this, Action_2_tC27C27AF2F38BC3A52153621D61F10F9421E87D2 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChangeNotifyDictionary_2_add_ValueChanged_m7638C3542BA196F1FD90E1FD8910B64CEB67FE9C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_tC27C27AF2F38BC3A52153621D61F10F9421E87D2 * V_0 = NULL;
	Action_2_tC27C27AF2F38BC3A52153621D61F10F9421E87D2 * V_1 = NULL;
	Action_2_tC27C27AF2F38BC3A52153621D61F10F9421E87D2 * V_2 = NULL;
	{
		Action_2_tC27C27AF2F38BC3A52153621D61F10F9421E87D2 * L_0 = (Action_2_tC27C27AF2F38BC3A52153621D61F10F9421E87D2 *)__this->get_ValueChanged_1();
		V_0 = (Action_2_tC27C27AF2F38BC3A52153621D61F10F9421E87D2 *)L_0;
	}

IL_0007:
	{
		Action_2_tC27C27AF2F38BC3A52153621D61F10F9421E87D2 * L_1 = V_0;
		V_1 = (Action_2_tC27C27AF2F38BC3A52153621D61F10F9421E87D2 *)L_1;
		Action_2_tC27C27AF2F38BC3A52153621D61F10F9421E87D2 * L_2 = V_1;
		Action_2_tC27C27AF2F38BC3A52153621D61F10F9421E87D2 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1((Delegate_t *)L_2, (Delegate_t *)L_3, /*hidden argument*/NULL);
		V_2 = (Action_2_tC27C27AF2F38BC3A52153621D61F10F9421E87D2 *)((Action_2_tC27C27AF2F38BC3A52153621D61F10F9421E87D2 *)Castclass((RuntimeObject*)L_4, Action_2_tC27C27AF2F38BC3A52153621D61F10F9421E87D2_il2cpp_TypeInfo_var));
		Action_2_tC27C27AF2F38BC3A52153621D61F10F9421E87D2 ** L_5 = (Action_2_tC27C27AF2F38BC3A52153621D61F10F9421E87D2 **)__this->get_address_of_ValueChanged_1();
		Action_2_tC27C27AF2F38BC3A52153621D61F10F9421E87D2 * L_6 = V_2;
		Action_2_tC27C27AF2F38BC3A52153621D61F10F9421E87D2 * L_7 = V_1;
		Action_2_tC27C27AF2F38BC3A52153621D61F10F9421E87D2 * L_8 = InterlockedCompareExchangeImpl<Action_2_tC27C27AF2F38BC3A52153621D61F10F9421E87D2 *>((Action_2_tC27C27AF2F38BC3A52153621D61F10F9421E87D2 **)(Action_2_tC27C27AF2F38BC3A52153621D61F10F9421E87D2 **)L_5, (Action_2_tC27C27AF2F38BC3A52153621D61F10F9421E87D2 *)L_6, (Action_2_tC27C27AF2F38BC3A52153621D61F10F9421E87D2 *)L_7);
		V_0 = (Action_2_tC27C27AF2F38BC3A52153621D61F10F9421E87D2 *)L_8;
		Action_2_tC27C27AF2F38BC3A52153621D61F10F9421E87D2 * L_9 = V_0;
		Action_2_tC27C27AF2F38BC3A52153621D61F10F9421E87D2 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_2_tC27C27AF2F38BC3A52153621D61F10F9421E87D2 *)L_9) == ((RuntimeObject*)(Action_2_tC27C27AF2F38BC3A52153621D61F10F9421E87D2 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void ZXing.Common.DecodingOptions_ChangeNotifyDictionary`2<System.Object,System.Object>::remove_ValueChanged(System.Action`2<System.Object,System.EventArgs>)
extern "C" IL2CPP_METHOD_ATTR void ChangeNotifyDictionary_2_remove_ValueChanged_mDAFC775E8A901E733D8A8EDAB396CF5CE42A43D1_gshared (ChangeNotifyDictionary_2_t2A41DC55F0C32F4E6C3F40A9BF912C7D7213DC4F * __this, Action_2_tC27C27AF2F38BC3A52153621D61F10F9421E87D2 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChangeNotifyDictionary_2_remove_ValueChanged_mDAFC775E8A901E733D8A8EDAB396CF5CE42A43D1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_tC27C27AF2F38BC3A52153621D61F10F9421E87D2 * V_0 = NULL;
	Action_2_tC27C27AF2F38BC3A52153621D61F10F9421E87D2 * V_1 = NULL;
	Action_2_tC27C27AF2F38BC3A52153621D61F10F9421E87D2 * V_2 = NULL;
	{
		Action_2_tC27C27AF2F38BC3A52153621D61F10F9421E87D2 * L_0 = (Action_2_tC27C27AF2F38BC3A52153621D61F10F9421E87D2 *)__this->get_ValueChanged_1();
		V_0 = (Action_2_tC27C27AF2F38BC3A52153621D61F10F9421E87D2 *)L_0;
	}

IL_0007:
	{
		Action_2_tC27C27AF2F38BC3A52153621D61F10F9421E87D2 * L_1 = V_0;
		V_1 = (Action_2_tC27C27AF2F38BC3A52153621D61F10F9421E87D2 *)L_1;
		Action_2_tC27C27AF2F38BC3A52153621D61F10F9421E87D2 * L_2 = V_1;
		Action_2_tC27C27AF2F38BC3A52153621D61F10F9421E87D2 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D((Delegate_t *)L_2, (Delegate_t *)L_3, /*hidden argument*/NULL);
		V_2 = (Action_2_tC27C27AF2F38BC3A52153621D61F10F9421E87D2 *)((Action_2_tC27C27AF2F38BC3A52153621D61F10F9421E87D2 *)Castclass((RuntimeObject*)L_4, Action_2_tC27C27AF2F38BC3A52153621D61F10F9421E87D2_il2cpp_TypeInfo_var));
		Action_2_tC27C27AF2F38BC3A52153621D61F10F9421E87D2 ** L_5 = (Action_2_tC27C27AF2F38BC3A52153621D61F10F9421E87D2 **)__this->get_address_of_ValueChanged_1();
		Action_2_tC27C27AF2F38BC3A52153621D61F10F9421E87D2 * L_6 = V_2;
		Action_2_tC27C27AF2F38BC3A52153621D61F10F9421E87D2 * L_7 = V_1;
		Action_2_tC27C27AF2F38BC3A52153621D61F10F9421E87D2 * L_8 = InterlockedCompareExchangeImpl<Action_2_tC27C27AF2F38BC3A52153621D61F10F9421E87D2 *>((Action_2_tC27C27AF2F38BC3A52153621D61F10F9421E87D2 **)(Action_2_tC27C27AF2F38BC3A52153621D61F10F9421E87D2 **)L_5, (Action_2_tC27C27AF2F38BC3A52153621D61F10F9421E87D2 *)L_6, (Action_2_tC27C27AF2F38BC3A52153621D61F10F9421E87D2 *)L_7);
		V_0 = (Action_2_tC27C27AF2F38BC3A52153621D61F10F9421E87D2 *)L_8;
		Action_2_tC27C27AF2F38BC3A52153621D61F10F9421E87D2 * L_9 = V_0;
		Action_2_tC27C27AF2F38BC3A52153621D61F10F9421E87D2 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_2_tC27C27AF2F38BC3A52153621D61F10F9421E87D2 *)L_9) == ((RuntimeObject*)(Action_2_tC27C27AF2F38BC3A52153621D61F10F9421E87D2 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void ZXing.Common.DecodingOptions_ChangeNotifyDictionary`2<System.Object,System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ChangeNotifyDictionary_2__ctor_m35E6354F084A25C3E86B092B6610A06212E97632_gshared (ChangeNotifyDictionary_2_t2A41DC55F0C32F4E6C3F40A9BF912C7D7213DC4F * __this, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
		Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * L_0 = (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0));
		((  void (*) (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		__this->set_values_0(L_0);
		return;
	}
}
// System.Void ZXing.Common.DecodingOptions_ChangeNotifyDictionary`2<System.Object,System.Object>::OnValueChanged()
extern "C" IL2CPP_METHOD_ATTR void ChangeNotifyDictionary_2_OnValueChanged_mF732B283EC92655FC4E393266A98D187FB55C529_gshared (ChangeNotifyDictionary_2_t2A41DC55F0C32F4E6C3F40A9BF912C7D7213DC4F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChangeNotifyDictionary_2_OnValueChanged_mF732B283EC92655FC4E393266A98D187FB55C529_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_2_tC27C27AF2F38BC3A52153621D61F10F9421E87D2 * L_0 = (Action_2_tC27C27AF2F38BC3A52153621D61F10F9421E87D2 *)__this->get_ValueChanged_1();
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		Action_2_tC27C27AF2F38BC3A52153621D61F10F9421E87D2 * L_1 = (Action_2_tC27C27AF2F38BC3A52153621D61F10F9421E87D2 *)__this->get_ValueChanged_1();
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_il2cpp_TypeInfo_var);
		EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * L_2 = ((EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_il2cpp_TypeInfo_var))->get_Empty_0();
		NullCheck((Action_2_tC27C27AF2F38BC3A52153621D61F10F9421E87D2 *)L_1);
		Action_2_Invoke_mB37CF1918B6A880806FCFADAE61902476CBC4E98((Action_2_tC27C27AF2F38BC3A52153621D61F10F9421E87D2 *)L_1, (RuntimeObject *)__this, (EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E *)L_2, /*hidden argument*/Action_2_Invoke_mB37CF1918B6A880806FCFADAE61902476CBC4E98_RuntimeMethod_var);
	}

IL_0019:
	{
		return;
	}
}
// System.Void ZXing.Common.DecodingOptions_ChangeNotifyDictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" IL2CPP_METHOD_ATTR void ChangeNotifyDictionary_2_Add_mB78AB833B8D043A85D5BA92743D8CDFCD91E9713_gshared (ChangeNotifyDictionary_2_t2A41DC55F0C32F4E6C3F40A9BF912C7D7213DC4F * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_values_0();
		RuntimeObject * L_1 = ___key0;
		RuntimeObject * L_2 = ___value1;
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(3 /* System.Void System.Collections.Generic.IDictionary`2<System.Object,System.Object>::Add(!0,!1) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), (RuntimeObject*)L_0, (RuntimeObject *)L_1, (RuntimeObject *)L_2);
		NullCheck((ChangeNotifyDictionary_2_t2A41DC55F0C32F4E6C3F40A9BF912C7D7213DC4F *)__this);
		((  void (*) (ChangeNotifyDictionary_2_t2A41DC55F0C32F4E6C3F40A9BF912C7D7213DC4F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((ChangeNotifyDictionary_2_t2A41DC55F0C32F4E6C3F40A9BF912C7D7213DC4F *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return;
	}
}
// System.Boolean ZXing.Common.DecodingOptions_ChangeNotifyDictionary`2<System.Object,System.Object>::ContainsKey(TKey)
extern "C" IL2CPP_METHOD_ATTR bool ChangeNotifyDictionary_2_ContainsKey_mE0DEC07DD353B51C6692CFCC18DBE6D690EA655C_gshared (ChangeNotifyDictionary_2_t2A41DC55F0C32F4E6C3F40A9BF912C7D7213DC4F * __this, RuntimeObject * ___key0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_values_0();
		RuntimeObject * L_1 = ___key0;
		NullCheck((RuntimeObject*)L_0);
		bool L_2 = InterfaceFuncInvoker1< bool, RuntimeObject * >::Invoke(2 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Object>::ContainsKey(!0) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), (RuntimeObject*)L_0, (RuntimeObject *)L_1);
		return L_2;
	}
}
// System.Boolean ZXing.Common.DecodingOptions_ChangeNotifyDictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C" IL2CPP_METHOD_ATTR bool ChangeNotifyDictionary_2_Remove_m7483EB3C281F14C93E096B254129A3AE24D9C20B_gshared (ChangeNotifyDictionary_2_t2A41DC55F0C32F4E6C3F40A9BF912C7D7213DC4F * __this, RuntimeObject * ___key0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_values_0();
		RuntimeObject * L_1 = ___key0;
		NullCheck((RuntimeObject*)L_0);
		bool L_2 = InterfaceFuncInvoker1< bool, RuntimeObject * >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Object>::Remove(!0) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), (RuntimeObject*)L_0, (RuntimeObject *)L_1);
		NullCheck((ChangeNotifyDictionary_2_t2A41DC55F0C32F4E6C3F40A9BF912C7D7213DC4F *)__this);
		((  void (*) (ChangeNotifyDictionary_2_t2A41DC55F0C32F4E6C3F40A9BF912C7D7213DC4F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((ChangeNotifyDictionary_2_t2A41DC55F0C32F4E6C3F40A9BF912C7D7213DC4F *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return L_2;
	}
}
// System.Boolean ZXing.Common.DecodingOptions_ChangeNotifyDictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValueU26)
extern "C" IL2CPP_METHOD_ATTR bool ChangeNotifyDictionary_2_TryGetValue_m5625922FA96CFD375F156E452E913730964D0774_gshared (ChangeNotifyDictionary_2_t2A41DC55F0C32F4E6C3F40A9BF912C7D7213DC4F * __this, RuntimeObject * ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_values_0();
		RuntimeObject * L_1 = ___key0;
		RuntimeObject ** L_2 = ___value1;
		NullCheck((RuntimeObject*)L_0);
		bool L_3 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject ** >::Invoke(5 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), (RuntimeObject*)L_0, (RuntimeObject *)L_1, (RuntimeObject **)(RuntimeObject **)L_2);
		return L_3;
	}
}
// TValue ZXing.Common.DecodingOptions_ChangeNotifyDictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * ChangeNotifyDictionary_2_get_Item_m498123AADDC5F2B4E21498F29C5C0B19838F6480_gshared (ChangeNotifyDictionary_2_t2A41DC55F0C32F4E6C3F40A9BF912C7D7213DC4F * __this, RuntimeObject * ___key0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_values_0();
		RuntimeObject * L_1 = ___key0;
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject * L_2 = InterfaceFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.Object,System.Object>::get_Item(!0) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), (RuntimeObject*)L_0, (RuntimeObject *)L_1);
		return L_2;
	}
}
// System.Void ZXing.Common.DecodingOptions_ChangeNotifyDictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" IL2CPP_METHOD_ATTR void ChangeNotifyDictionary_2_set_Item_m97BBA0B843A1AAEF52861BE3ACE2DC1C89838453_gshared (ChangeNotifyDictionary_2_t2A41DC55F0C32F4E6C3F40A9BF912C7D7213DC4F * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_values_0();
		RuntimeObject * L_1 = ___key0;
		RuntimeObject * L_2 = ___value1;
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Object,System.Object>::set_Item(!0,!1) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), (RuntimeObject*)L_0, (RuntimeObject *)L_1, (RuntimeObject *)L_2);
		NullCheck((ChangeNotifyDictionary_2_t2A41DC55F0C32F4E6C3F40A9BF912C7D7213DC4F *)__this);
		((  void (*) (ChangeNotifyDictionary_2_t2A41DC55F0C32F4E6C3F40A9BF912C7D7213DC4F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((ChangeNotifyDictionary_2_t2A41DC55F0C32F4E6C3F40A9BF912C7D7213DC4F *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return;
	}
}
// System.Void ZXing.Common.DecodingOptions_ChangeNotifyDictionary`2<System.Object,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" IL2CPP_METHOD_ATTR void ChangeNotifyDictionary_2_Add_m6356A378280E6957E49F0D8AEF4B3968E1DACBCC_gshared (ChangeNotifyDictionary_2_t2A41DC55F0C32F4E6C3F40A9BF912C7D7213DC4F * __this, KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  ___item0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_values_0();
		KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  L_1 = ___item0;
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker1< KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Add(!0) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4), (RuntimeObject*)L_0, (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE )L_1);
		NullCheck((ChangeNotifyDictionary_2_t2A41DC55F0C32F4E6C3F40A9BF912C7D7213DC4F *)__this);
		((  void (*) (ChangeNotifyDictionary_2_t2A41DC55F0C32F4E6C3F40A9BF912C7D7213DC4F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((ChangeNotifyDictionary_2_t2A41DC55F0C32F4E6C3F40A9BF912C7D7213DC4F *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return;
	}
}
// System.Void ZXing.Common.DecodingOptions_ChangeNotifyDictionary`2<System.Object,System.Object>::Clear()
extern "C" IL2CPP_METHOD_ATTR void ChangeNotifyDictionary_2_Clear_mF4F7667F0DFAFE0A833CD99D421541698262830F_gshared (ChangeNotifyDictionary_2_t2A41DC55F0C32F4E6C3F40A9BF912C7D7213DC4F * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_values_0();
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Clear() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4), (RuntimeObject*)L_0);
		NullCheck((ChangeNotifyDictionary_2_t2A41DC55F0C32F4E6C3F40A9BF912C7D7213DC4F *)__this);
		((  void (*) (ChangeNotifyDictionary_2_t2A41DC55F0C32F4E6C3F40A9BF912C7D7213DC4F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((ChangeNotifyDictionary_2_t2A41DC55F0C32F4E6C3F40A9BF912C7D7213DC4F *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return;
	}
}
// System.Boolean ZXing.Common.DecodingOptions_ChangeNotifyDictionary`2<System.Object,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" IL2CPP_METHOD_ATTR bool ChangeNotifyDictionary_2_Contains_mD54DDFDA3CFFBBBBF50FD00A3B404A5FBBADCD0D_gshared (ChangeNotifyDictionary_2_t2A41DC55F0C32F4E6C3F40A9BF912C7D7213DC4F * __this, KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  ___item0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_values_0();
		KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  L_1 = ___item0;
		NullCheck((RuntimeObject*)L_0);
		bool L_2 = InterfaceFuncInvoker1< bool, KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Contains(!0) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4), (RuntimeObject*)L_0, (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE )L_1);
		return L_2;
	}
}
// System.Void ZXing.Common.DecodingOptions_ChangeNotifyDictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ChangeNotifyDictionary_2_CopyTo_m50242F57B9F125C17963C331AA7D0030D66D6A1C_gshared (ChangeNotifyDictionary_2_t2A41DC55F0C32F4E6C3F40A9BF912C7D7213DC4F * __this, KeyValuePair_2U5BU5D_t4594E4068980FD80C0C538F4F8042A626BC1F262* ___array0, int32_t ___arrayIndex1, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_values_0();
		KeyValuePair_2U5BU5D_t4594E4068980FD80C0C538F4F8042A626BC1F262* L_1 = ___array0;
		int32_t L_2 = ___arrayIndex1;
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker2< KeyValuePair_2U5BU5D_t4594E4068980FD80C0C538F4F8042A626BC1F262*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyTo(!0[],System.Int32) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4), (RuntimeObject*)L_0, (KeyValuePair_2U5BU5D_t4594E4068980FD80C0C538F4F8042A626BC1F262*)L_1, (int32_t)L_2);
		return;
	}
}
// System.Int32 ZXing.Common.DecodingOptions_ChangeNotifyDictionary`2<System.Object,System.Object>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t ChangeNotifyDictionary_2_get_Count_m052939504F7B89389998BACE48F70B8970CB3E75_gshared (ChangeNotifyDictionary_2_t2A41DC55F0C32F4E6C3F40A9BF912C7D7213DC4F * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_values_0();
		NullCheck((RuntimeObject*)L_0);
		int32_t L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4), (RuntimeObject*)L_0);
		return L_1;
	}
}
// System.Boolean ZXing.Common.DecodingOptions_ChangeNotifyDictionary`2<System.Object,System.Object>::get_IsReadOnly()
extern "C" IL2CPP_METHOD_ATTR bool ChangeNotifyDictionary_2_get_IsReadOnly_m65DA15E5599F6FF445E1A4B43CEABE488582B402_gshared (ChangeNotifyDictionary_2_t2A41DC55F0C32F4E6C3F40A9BF912C7D7213DC4F * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_values_0();
		NullCheck((RuntimeObject*)L_0);
		bool L_1 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_IsReadOnly() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4), (RuntimeObject*)L_0);
		return L_1;
	}
}
// System.Boolean ZXing.Common.DecodingOptions_ChangeNotifyDictionary`2<System.Object,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" IL2CPP_METHOD_ATTR bool ChangeNotifyDictionary_2_Remove_m9F38BF4AE58DB5B8FE79D5D89405C594839FD1CA_gshared (ChangeNotifyDictionary_2_t2A41DC55F0C32F4E6C3F40A9BF912C7D7213DC4F * __this, KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  ___item0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_values_0();
		KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  L_1 = ___item0;
		NullCheck((RuntimeObject*)L_0);
		bool L_2 = InterfaceFuncInvoker1< bool, KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  >::Invoke(6 /* System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Remove(!0) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4), (RuntimeObject*)L_0, (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE )L_1);
		NullCheck((ChangeNotifyDictionary_2_t2A41DC55F0C32F4E6C3F40A9BF912C7D7213DC4F *)__this);
		((  void (*) (ChangeNotifyDictionary_2_t2A41DC55F0C32F4E6C3F40A9BF912C7D7213DC4F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((ChangeNotifyDictionary_2_t2A41DC55F0C32F4E6C3F40A9BF912C7D7213DC4F *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> ZXing.Common.DecodingOptions_ChangeNotifyDictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* ChangeNotifyDictionary_2_GetEnumerator_mDC933B18FC76F92DEF0A4D344A3E6F0ED4D13B23_gshared (ChangeNotifyDictionary_2_t2A41DC55F0C32F4E6C3F40A9BF912C7D7213DC4F * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_values_0();
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_0);
		return L_1;
	}
}
// System.Collections.IEnumerator ZXing.Common.DecodingOptions_ChangeNotifyDictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* ChangeNotifyDictionary_2_System_Collections_IEnumerable_GetEnumerator_m1B97C2CCDB168FDE8AE9F1E364EF371E654F5A8D_gshared (ChangeNotifyDictionary_2_t2A41DC55F0C32F4E6C3F40A9BF912C7D7213DC4F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChangeNotifyDictionary_2_System_Collections_IEnumerable_GetEnumerator_m1B97C2CCDB168FDE8AE9F1E364EF371E654F5A8D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_values_0();
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_tD74549CEA1AA48E768382B94FEACBB07E2E3FA2C_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
