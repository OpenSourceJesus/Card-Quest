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

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericVirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// Ludiq.OdinSerializer.BaseDictionaryKeyPathProvider`1<UnityEngine.Vector2>
struct BaseDictionaryKeyPathProvider_1_tB5A2BD91A9D7DC73F11900E0E311FA56800E4494;
// Ludiq.OdinSerializer.BaseDictionaryKeyPathProvider`1<UnityEngine.Vector3>
struct BaseDictionaryKeyPathProvider_1_tE66BE6796D65DC85103E5D644423949DE3FFFA44;
// Ludiq.OdinSerializer.BaseDictionaryKeyPathProvider`1<UnityEngine.Vector4>
struct BaseDictionaryKeyPathProvider_1_t810148F5A0717BD985DAB0213958177D177D2AE5;
// Ludiq.OdinSerializer.IDataReader
struct IDataReader_t36A8365ED06F501DDF659B8F1BE86E430B876664;
// Ludiq.OdinSerializer.IDataWriter
struct IDataWriter_t9747AB7836BDAE0DF8C849143B789A5C561E31C9;
// Ludiq.OdinSerializer.MinimalBaseFormatter`1<System.Object>
struct MinimalBaseFormatter_1_t7A7BFD2E9E993F61CE8BA5B2628F22733F7D5606;
// Ludiq.OdinSerializer.MinimalBaseFormatter`1<System.Version>
struct MinimalBaseFormatter_1_tF12994EA9D174D87E4F68634C0C3600E58272E55;
// Ludiq.OdinSerializer.MinimalBaseFormatter`1<UnityEngine.Vector2>
struct MinimalBaseFormatter_1_t3FEF32251D23D78F0F5718CCF8313661795D0F4F;
// Ludiq.OdinSerializer.MinimalBaseFormatter`1<UnityEngine.Vector3>
struct MinimalBaseFormatter_1_tE2EE91A4B8AE5422EA403BCA9F754F9A11C67994;
// Ludiq.OdinSerializer.MinimalBaseFormatter`1<UnityEngine.Vector4>
struct MinimalBaseFormatter_1_tB70FC2FB8F1AE89EB60830477575D52702E1FDE3;
// Ludiq.OdinSerializer.Serializer`1<System.Single>
struct Serializer_1_tB5154B4A9ADD83AA51ACE4FBB4D5F0602FBBFA6A;
// Ludiq.OdinSerializer.Utilities.TypeExtensions/<>c__DisplayClass22_0
struct U3CU3Ec__DisplayClass22_0_t734F8858DFA873056131FD471FF4ED3DA5277437;
// Ludiq.OdinSerializer.Utilities.TypeExtensions/<>c__DisplayClass35_0
struct U3CU3Ec__DisplayClass35_0_t526AC3F36F6B204BC4F69FEEA03AC1F1940247D2;
// Ludiq.OdinSerializer.Utilities.TypeExtensions/<>c__DisplayClass40_0
struct U3CU3Ec__DisplayClass40_0_tB2769865F46220037F929292B4B4846936CEB73C;
// Ludiq.OdinSerializer.Utilities.TypeExtensions/<>c__DisplayClass41_0
struct U3CU3Ec__DisplayClass41_0_t7C518137717CF4AFE071953FCD0AA08BE9CB214F;
// Ludiq.OdinSerializer.Utilities.TypeExtensions/<GetAllMembers>d__42
struct U3CGetAllMembersU3Ed__42_t68E5B620E2E2E9C9956B9A66F2AF28E1725A9DA4;
// Ludiq.OdinSerializer.Utilities.TypeExtensions/<GetAllMembers>d__43
struct U3CGetAllMembersU3Ed__43_tF8A98A5535517B649FB8CBEAAF09E8FBC233950B;
// Ludiq.OdinSerializer.Utilities.TypeExtensions/<GetBaseClasses>d__48
struct U3CGetBaseClassesU3Ed__48_t6A93C122A61B9DAF31979EA6922ADC799C2A9B3E;
// Ludiq.OdinSerializer.Utilities.ValueGetter`2<System.Object,System.IntPtr>
struct ValueGetter_2_t640D8AC75E1EAF823B009C631B88B332B15034C1;
// Ludiq.OdinSerializer.Utilities.ValueGetter`2<UnityEngine.Object,System.IntPtr>
struct ValueGetter_2_tF20DFE4637797CF9A6FD6CEEB79F1A9A6DF91B1A;
// Ludiq.OdinSerializer.Utilities.WeakValueGetter
struct WeakValueGetter_tA5763EEB4102B42423DEA22F2FE523106F14B643;
// Ludiq.OdinSerializer.Utilities.WeakValueSetter
struct WeakValueSetter_t15EA7B7FA91E88F413E0512CCABA3348E83B94BF;
// Ludiq.OdinSerializer.Vector2DictionaryKeyPathProvider
struct Vector2DictionaryKeyPathProvider_t44A64799A6D0A2F9A916BF1858FDB1BC017CD062;
// Ludiq.OdinSerializer.Vector2Formatter
struct Vector2Formatter_tD255F733B7C2E92F275552805687312FE984A599;
// Ludiq.OdinSerializer.Vector3DictionaryKeyPathProvider
struct Vector3DictionaryKeyPathProvider_t1661256BFACF448B0933BDA7BE07D499877D20E1;
// Ludiq.OdinSerializer.Vector3Formatter
struct Vector3Formatter_t8D5B221A255A7F8E8765B487C881CD2498D6855C;
// Ludiq.OdinSerializer.Vector4DictionaryKeyPathProvider
struct Vector4DictionaryKeyPathProvider_t94C11F8EEF6EC16608738A695E77A69F20BE8CA6;
// Ludiq.OdinSerializer.Vector4Formatter
struct Vector4Formatter_tAA4AB5D5086266E8369233F0CC4A28C49207FA26;
// Ludiq.OdinSerializer.VersionFormatter
struct VersionFormatter_t78111BF59B957DE7A6E16668A1EE195503701AF1;
// System.ArgumentException
struct ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25;
// System.Collections.Generic.Dictionary`2<System.Type,Ludiq.OdinSerializer.Serializer>
struct Dictionary_2_t835DA0CED9A450C92ACB1048895094E12F62EB89;
// System.Collections.Generic.Dictionary`2<System.Type,System.Type>
struct Dictionary_2_t8A9CF8D5841CD80050386F6DCD8209C6E5853F2A;
// System.Collections.Generic.IEnumerable`1<System.Reflection.MemberInfo>
struct IEnumerable_1_t7FD352CD84740777D0C2732F0F63D13741D636BB;
// System.Collections.Generic.IEnumerator`1<System.Reflection.MemberInfo>
struct IEnumerator_1_t2D9BC58107505273DB7B0FC53358697221FA5831;
// System.Collections.Generic.IEnumerator`1<System.Type>
struct IEnumerator_1_t9F60FD6E97DB04D8FC2044CDD1C2F74C8FC3678E;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.IEnumerator
struct IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Globalization.Calendar
struct Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5;
// System.Globalization.CompareInfo
struct CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1;
// System.Globalization.CultureData
struct CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD;
// System.Globalization.CultureInfo
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8;
// System.Globalization.TextInfo
struct TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.IFormatProvider
struct IFormatProvider_t4247E13AE2D97A079B88D594B7ABABF313259901;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.LocalDataStoreHolder
struct LocalDataStoreHolder_tE0636E08496405406FD63190AC51EEB2EE51E304;
// System.LocalDataStoreMgr
struct LocalDataStoreMgr_t1964DDB9F2BE154BE3159A7507D0D0CCBF8FDCA9;
// System.MulticastDelegate
struct MulticastDelegate_t;
// System.NotSupportedException
struct NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MemberInfo[]
struct MemberInfoU5BU5D_t6A57DDAF4E5321D22FB4C021559637EB126BF6B6;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.Security.Principal.IPrincipal
struct IPrincipal_t63FD7F58FBBE134C8FE4D31710AAEA00B000F0BF;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo>
struct AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A;
// System.Threading.ExecutionContext
struct ExecutionContext_t0E11C30308A4CC964D8A2EA9132F9BDCE5362C70;
// System.Threading.InternalThread
struct InternalThread_tA4C58C2A7D15AF43C3E7507375E6D31DBBE7D192;
// System.Threading.Thread
struct Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.UInt32[]
struct UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB;
// System.Version
struct Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDataReader_t36A8365ED06F501DDF659B8F1BE86E430B876664_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDataWriter_t9747AB7836BDAE0DF8C849143B789A5C561E31C9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t7FD352CD84740777D0C2732F0F63D13741D636BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t2D9BC58107505273DB7B0FC53358697221FA5831_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MinimalBaseFormatter_1_t3FEF32251D23D78F0F5718CCF8313661795D0F4F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MinimalBaseFormatter_1_tB70FC2FB8F1AE89EB60830477575D52702E1FDE3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MinimalBaseFormatter_1_tE2EE91A4B8AE5422EA403BCA9F754F9A11C67994_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MinimalBaseFormatter_1_tF12994EA9D174D87E4F68634C0C3600E58272E55_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Serializer_tC51784B7099FCC3F2894FFE9C6E394C71953A32C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeExtensions_t65A31AE2B07ADFEAA80E7287D95B2E95D5C374F8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetAllMembersU3Ed__42_t68E5B620E2E2E9C9956B9A66F2AF28E1725A9DA4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetAllMembersU3Ed__43_tF8A98A5535517B649FB8CBEAAF09E8FBC233950B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetBaseClassesU3Ed__48_t6A93C122A61B9DAF31979EA6922ADC799C2A9B3E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityExtensions_tD984E5BCE5092481B76015B36CD6C2BF40F2353B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityVersion_t24EBAA036670F68F63EDA0CCB9B032AC9350A407_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2Formatter_tD255F733B7C2E92F275552805687312FE984A599_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3Formatter_t8D5B221A255A7F8E8765B487C881CD2498D6855C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector4Formatter_tAA4AB5D5086266E8369233F0CC4A28C49207FA26_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral06576556D1AD802F247CAD11AE748BE47B70CD9C;
IL2CPP_EXTERN_C String_t* _stringLiteral0B6CD6C0B1E998C35D8C067B064C7CAC865C304B;
IL2CPP_EXTERN_C String_t* _stringLiteral13BE6B22B0C95437F4DA465B7DEFB2E37369A08B;
IL2CPP_EXTERN_C String_t* _stringLiteral1538BF31994D24FD7B2382394F8E3CE6A4B4E065;
IL2CPP_EXTERN_C String_t* _stringLiteral230CBCD98614DBAE7D1C5E0DD27FB03AB087E75F;
IL2CPP_EXTERN_C String_t* _stringLiteral28ED3A797DA3C48C309A4EF792147F3C56CFEC40;
IL2CPP_EXTERN_C String_t* _stringLiteral29790FD9022663D29477A26A15ECAEDA3DDFD99F;
IL2CPP_EXTERN_C String_t* _stringLiteral3EB416223E9E69E6BB8EE19793911AD1AD2027D8;
IL2CPP_EXTERN_C String_t* _stringLiteral4F4CEBC5625B561FD6B81EA2FFB62B1D63065977;
IL2CPP_EXTERN_C String_t* _stringLiteral8090FD368C8382FD4B216C5BAA04C99769DFCC49;
IL2CPP_EXTERN_C String_t* _stringLiteralA1047EAB1035D58682A53557E0B2A75EDBFD15FD;
IL2CPP_EXTERN_C String_t* _stringLiteralA1E69250C037D4F5DD3D125D9E0F1A8908E26161;
IL2CPP_EXTERN_C String_t* _stringLiteralA515B50AAD9837414760E159CBC5BB45FE134859;
IL2CPP_EXTERN_C String_t* _stringLiteralACFE4ABCE6FC0D9569D757B931C52394ABE7D2CF;
IL2CPP_EXTERN_C String_t* _stringLiteralC5E31D5915661DE4393E3F1489B00EBC4497DD48;
IL2CPP_EXTERN_C String_t* _stringLiteralE7064F0B80F61DBC65915311032D27BAA569AE2A;
IL2CPP_EXTERN_C String_t* _stringLiteralF87FE0D20BB3ADE6992F292AFF25ED70935CE01A;
IL2CPP_EXTERN_C String_t* _stringLiteralFAFBA073700296227A7D1B4785C63F0194C967FA;
IL2CPP_EXTERN_C String_t* _stringLiteralFFB57D26A3F91EBAA96F67A05A00A7339D18D9EA;
IL2CPP_EXTERN_C const RuntimeMethod* BaseDictionaryKeyPathProvider_1__ctor_m5F094D95F603BCD0D8C662174583875DBD3FB40C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseDictionaryKeyPathProvider_1__ctor_m88A5D08C95D7FC76DA3618B1736D513A4D584F58_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseDictionaryKeyPathProvider_1__ctor_mDDF4CA5FA8103572F762F49186C6759AFDD1DCE4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EmitUtilities_CreateInstanceFieldGetter_TisObject_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_TisIntPtr_t_mC2B602FBABF8F9FCD6B2B0B7E2F70A2EC1C0515B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MinimalBaseFormatter_1__ctor_m170B716A39106DD5F885CB36DD4324F3BB9B3E26_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MinimalBaseFormatter_1__ctor_m25E0E8BC1FA61D6B170DDAE16E35DCE11FB2121E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MinimalBaseFormatter_1__ctor_mB1C34FCE002A775AB36373BFEF82C410D2107554_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MinimalBaseFormatter_1__ctor_mBEA12891C161AEDD804540F839473E762DF392AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Serializer_1_WriteValue_m86E725E1508B079D64713F8ECA68875392FE5529_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Serializer_Get_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_m9DCCE8CFFEF171F01BD500D95B42E26011BC77DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetAllMembersU3Ed__42_System_Collections_IEnumerator_Reset_mABCF2C71FA03FED987843D90800F8A5F8A19D4C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetAllMembersU3Ed__43_System_Collections_IEnumerator_Reset_mC998C56191C7160B92ACBF33B60FF6005BB77ADF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetBaseClassesU3Ed__48_System_Collections_IEnumerator_Reset_m1296C29C0882372383E70ECD94770167073DE384_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityExtensions_SafeIsUnityNull_m580D12E121D06024D7514293CF359E4C90F408A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeUtilities_MemoryCopy_mE28930317141E90B8A3E0D1FFF2B086E70A6EB44_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeUtilities_StringFromBytes_m2467B8E2FC65D182FAF1DC835045E1C2F4D07157_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeUtilities_StringToBytes_m0CBFC1D1AD056DF9CD678B05683F3BAC49BD6962_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueGetter_2_Invoke_mD53843423A931C3627E41E1780527D7AC5127653_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_0_0_0_var;
IL2CPP_EXTERN_C const uint32_t U3CGetAllMembersU3Ed__42_System_Collections_Generic_IEnumerableU3CSystem_Reflection_MemberInfoU3E_GetEnumerator_m36AAF0BD9EB425A889D73E123FCD8E3E58D7317B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CGetAllMembersU3Ed__42_System_Collections_IEnumerator_Reset_mABCF2C71FA03FED987843D90800F8A5F8A19D4C0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CGetAllMembersU3Ed__43_MoveNext_m8644AC5C1A26810B4C31A5D8BBB366807C618C89_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CGetAllMembersU3Ed__43_System_Collections_Generic_IEnumerableU3CSystem_Reflection_MemberInfoU3E_GetEnumerator_m024A480FF629D0B90E698EF51556115C140FDD0A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CGetAllMembersU3Ed__43_System_Collections_IEnumerator_Reset_mC998C56191C7160B92ACBF33B60FF6005BB77ADF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CGetAllMembersU3Ed__43_U3CU3Em__Finally1_m4398A3B829DA2E04A89539516D4B471D1B27580A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CGetBaseClassesU3Ed__48_System_Collections_Generic_IEnumerableU3CSystem_TypeU3E_GetEnumerator_mF6DD7024E358B44DD797BA48D883199E07BB1F27_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CGetBaseClassesU3Ed__48_System_Collections_IEnumerator_Reset_m1296C29C0882372383E70ECD94770167073DE384_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass22_0_U3CGetCastMethodDelegateU3Eb__0_mCC4BEFF57F3E182286462CBDDC43EAB184106F31_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass35_0_U3CImplementsOpenGenericInterfaceU3Eb__0_m330357036B4B454753E86EB1232CFF5B8AAB9FC9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityExtensions_SafeIsUnityNull_m580D12E121D06024D7514293CF359E4C90F408A2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityExtensions__cctor_mB8DE5A5A280C9060015AEA3416D9CF494646661B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityVersion_IsVersionOrGreater_m8DECD34E07FC62987B41EE7FD745F6AC77AAA0F3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityVersion__cctor_m2CB82D282C0D5DA47F219B30584A3E884D9445AD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnsafeUtilities_MemoryCopy_mE28930317141E90B8A3E0D1FFF2B086E70A6EB44_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnsafeUtilities_StringFromBytes_m2467B8E2FC65D182FAF1DC835045E1C2F4D07157_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnsafeUtilities_StringToBytes_m0CBFC1D1AD056DF9CD678B05683F3BAC49BD6962_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Vector2DictionaryKeyPathProvider_GetPathStringFromKey_mC3A6F3EDECA418B55C99B7C73F43320515DD91F1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Vector2DictionaryKeyPathProvider__ctor_m3A367E9503646523DD61FF17512A68456C94D3DD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Vector2DictionaryKeyPathProvider_get_ProviderID_m80CAA6CF1CBCBF33D2422242AC148B84703CE3DB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Vector2Formatter_Read_mD23202AC95B6D7789005A6A2A3F93477BCEF418E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Vector2Formatter_Write_m8C9567C61B71164A901D1159922A924278D6EF03_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Vector2Formatter__cctor_m7789BF81BF0A1BC7D8943B487825C85B2752759A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Vector2Formatter__ctor_mC89FCEE82313CBED427E513D24E3FE549F47875B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Vector3DictionaryKeyPathProvider_GetPathStringFromKey_mF331030740529A33E1664CC8278E324F76C64402_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Vector3DictionaryKeyPathProvider__ctor_m4563D0145B144F77D4F5445FBB5E7884CEF2DAF9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Vector3DictionaryKeyPathProvider_get_ProviderID_mD1820825360A12573C4BF19A3EFEEFF48418DABE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Vector3Formatter_Read_m5595E0681B4DA079AC1A7BD242852597E639AD7C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Vector3Formatter_Write_m8678F45DB0F2309756726A33403DEE7737A108F7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Vector3Formatter__cctor_m8DE41C86A9086B627BB8575ED02603EB77C020AC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Vector3Formatter__ctor_m451D7591D3C70DA07B3093FEAF98E552BDD0BB2A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Vector4DictionaryKeyPathProvider_GetPathStringFromKey_mE527172ED6FF61E874978097B9DB30C2ADE4667A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Vector4DictionaryKeyPathProvider__ctor_mEE254E0D753D4317653DAF4EB96636EAFE3B91C5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Vector4DictionaryKeyPathProvider_get_ProviderID_mB3E637780301835CD9870536799CD56312BEA86C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Vector4Formatter_Read_m12BE19469B51963594B55362374D56A0A94F08E5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Vector4Formatter_Write_m679899479B4766CA824517F8B0D76C15A70D6D00_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Vector4Formatter__cctor_m238BF7BEBC4DC2FE5E7B83E2276C299A294BB11F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Vector4Formatter__ctor_mA7903DE789F310AD1E14377EB1D21D226B673A3D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VersionFormatter_Read_m384FBAD9DB228F0F1584A290F177CB5C7EFD1816_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VersionFormatter_Write_mAA9B9747D664B5E943E7C5C6735102D0D6AC1E48_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VersionFormatter__ctor_m84DB4D01E41F28F02D2107FE11D756EE66A5F174_MetadataUsageId;
struct CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshaled_com;
struct CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshaled_pinvoke;
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_com;
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct MemberInfoU5BU5D_t6A57DDAF4E5321D22FB4C021559637EB126BF6B6;
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// Ludiq.OdinSerializer.BaseDictionaryKeyPathProvider`1<UnityEngine.Vector2>
struct  BaseDictionaryKeyPathProvider_1_tB5A2BD91A9D7DC73F11900E0E311FA56800E4494  : public RuntimeObject
{
public:

public:
};


// Ludiq.OdinSerializer.BaseDictionaryKeyPathProvider`1<UnityEngine.Vector3>
struct  BaseDictionaryKeyPathProvider_1_tE66BE6796D65DC85103E5D644423949DE3FFFA44  : public RuntimeObject
{
public:

public:
};


// Ludiq.OdinSerializer.BaseDictionaryKeyPathProvider`1<UnityEngine.Vector4>
struct  BaseDictionaryKeyPathProvider_1_t810148F5A0717BD985DAB0213958177D177D2AE5  : public RuntimeObject
{
public:

public:
};


// Ludiq.OdinSerializer.MinimalBaseFormatter`1<System.Version>
struct  MinimalBaseFormatter_1_tF12994EA9D174D87E4F68634C0C3600E58272E55  : public RuntimeObject
{
public:

public:
};

struct MinimalBaseFormatter_1_tF12994EA9D174D87E4F68634C0C3600E58272E55_StaticFields
{
public:
	// System.Boolean Ludiq.OdinSerializer.MinimalBaseFormatter`1::IsValueType
	bool ___IsValueType_0;

public:
	inline static int32_t get_offset_of_IsValueType_0() { return static_cast<int32_t>(offsetof(MinimalBaseFormatter_1_tF12994EA9D174D87E4F68634C0C3600E58272E55_StaticFields, ___IsValueType_0)); }
	inline bool get_IsValueType_0() const { return ___IsValueType_0; }
	inline bool* get_address_of_IsValueType_0() { return &___IsValueType_0; }
	inline void set_IsValueType_0(bool value)
	{
		___IsValueType_0 = value;
	}
};


// Ludiq.OdinSerializer.MinimalBaseFormatter`1<UnityEngine.Vector2>
struct  MinimalBaseFormatter_1_t3FEF32251D23D78F0F5718CCF8313661795D0F4F  : public RuntimeObject
{
public:

public:
};

struct MinimalBaseFormatter_1_t3FEF32251D23D78F0F5718CCF8313661795D0F4F_StaticFields
{
public:
	// System.Boolean Ludiq.OdinSerializer.MinimalBaseFormatter`1::IsValueType
	bool ___IsValueType_0;

public:
	inline static int32_t get_offset_of_IsValueType_0() { return static_cast<int32_t>(offsetof(MinimalBaseFormatter_1_t3FEF32251D23D78F0F5718CCF8313661795D0F4F_StaticFields, ___IsValueType_0)); }
	inline bool get_IsValueType_0() const { return ___IsValueType_0; }
	inline bool* get_address_of_IsValueType_0() { return &___IsValueType_0; }
	inline void set_IsValueType_0(bool value)
	{
		___IsValueType_0 = value;
	}
};


// Ludiq.OdinSerializer.MinimalBaseFormatter`1<UnityEngine.Vector3>
struct  MinimalBaseFormatter_1_tE2EE91A4B8AE5422EA403BCA9F754F9A11C67994  : public RuntimeObject
{
public:

public:
};

struct MinimalBaseFormatter_1_tE2EE91A4B8AE5422EA403BCA9F754F9A11C67994_StaticFields
{
public:
	// System.Boolean Ludiq.OdinSerializer.MinimalBaseFormatter`1::IsValueType
	bool ___IsValueType_0;

public:
	inline static int32_t get_offset_of_IsValueType_0() { return static_cast<int32_t>(offsetof(MinimalBaseFormatter_1_tE2EE91A4B8AE5422EA403BCA9F754F9A11C67994_StaticFields, ___IsValueType_0)); }
	inline bool get_IsValueType_0() const { return ___IsValueType_0; }
	inline bool* get_address_of_IsValueType_0() { return &___IsValueType_0; }
	inline void set_IsValueType_0(bool value)
	{
		___IsValueType_0 = value;
	}
};


// Ludiq.OdinSerializer.MinimalBaseFormatter`1<UnityEngine.Vector4>
struct  MinimalBaseFormatter_1_tB70FC2FB8F1AE89EB60830477575D52702E1FDE3  : public RuntimeObject
{
public:

public:
};

struct MinimalBaseFormatter_1_tB70FC2FB8F1AE89EB60830477575D52702E1FDE3_StaticFields
{
public:
	// System.Boolean Ludiq.OdinSerializer.MinimalBaseFormatter`1::IsValueType
	bool ___IsValueType_0;

public:
	inline static int32_t get_offset_of_IsValueType_0() { return static_cast<int32_t>(offsetof(MinimalBaseFormatter_1_tB70FC2FB8F1AE89EB60830477575D52702E1FDE3_StaticFields, ___IsValueType_0)); }
	inline bool get_IsValueType_0() const { return ___IsValueType_0; }
	inline bool* get_address_of_IsValueType_0() { return &___IsValueType_0; }
	inline void set_IsValueType_0(bool value)
	{
		___IsValueType_0 = value;
	}
};


// Ludiq.OdinSerializer.Serializer
struct  Serializer_tC51784B7099FCC3F2894FFE9C6E394C71953A32C  : public RuntimeObject
{
public:

public:
};

struct Serializer_tC51784B7099FCC3F2894FFE9C6E394C71953A32C_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Type,System.Type> Ludiq.OdinSerializer.Serializer::PrimitiveReaderWriterTypes
	Dictionary_2_t8A9CF8D5841CD80050386F6DCD8209C6E5853F2A * ___PrimitiveReaderWriterTypes_0;
	// System.Object Ludiq.OdinSerializer.Serializer::LOCK
	RuntimeObject * ___LOCK_1;
	// System.Collections.Generic.Dictionary`2<System.Type,Ludiq.OdinSerializer.Serializer> Ludiq.OdinSerializer.Serializer::ReaderWriterCache
	Dictionary_2_t835DA0CED9A450C92ACB1048895094E12F62EB89 * ___ReaderWriterCache_2;

public:
	inline static int32_t get_offset_of_PrimitiveReaderWriterTypes_0() { return static_cast<int32_t>(offsetof(Serializer_tC51784B7099FCC3F2894FFE9C6E394C71953A32C_StaticFields, ___PrimitiveReaderWriterTypes_0)); }
	inline Dictionary_2_t8A9CF8D5841CD80050386F6DCD8209C6E5853F2A * get_PrimitiveReaderWriterTypes_0() const { return ___PrimitiveReaderWriterTypes_0; }
	inline Dictionary_2_t8A9CF8D5841CD80050386F6DCD8209C6E5853F2A ** get_address_of_PrimitiveReaderWriterTypes_0() { return &___PrimitiveReaderWriterTypes_0; }
	inline void set_PrimitiveReaderWriterTypes_0(Dictionary_2_t8A9CF8D5841CD80050386F6DCD8209C6E5853F2A * value)
	{
		___PrimitiveReaderWriterTypes_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PrimitiveReaderWriterTypes_0), (void*)value);
	}

	inline static int32_t get_offset_of_LOCK_1() { return static_cast<int32_t>(offsetof(Serializer_tC51784B7099FCC3F2894FFE9C6E394C71953A32C_StaticFields, ___LOCK_1)); }
	inline RuntimeObject * get_LOCK_1() const { return ___LOCK_1; }
	inline RuntimeObject ** get_address_of_LOCK_1() { return &___LOCK_1; }
	inline void set_LOCK_1(RuntimeObject * value)
	{
		___LOCK_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LOCK_1), (void*)value);
	}

	inline static int32_t get_offset_of_ReaderWriterCache_2() { return static_cast<int32_t>(offsetof(Serializer_tC51784B7099FCC3F2894FFE9C6E394C71953A32C_StaticFields, ___ReaderWriterCache_2)); }
	inline Dictionary_2_t835DA0CED9A450C92ACB1048895094E12F62EB89 * get_ReaderWriterCache_2() const { return ___ReaderWriterCache_2; }
	inline Dictionary_2_t835DA0CED9A450C92ACB1048895094E12F62EB89 ** get_address_of_ReaderWriterCache_2() { return &___ReaderWriterCache_2; }
	inline void set_ReaderWriterCache_2(Dictionary_2_t835DA0CED9A450C92ACB1048895094E12F62EB89 * value)
	{
		___ReaderWriterCache_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ReaderWriterCache_2), (void*)value);
	}
};


// Ludiq.OdinSerializer.Utilities.TypeExtensions_<>c__DisplayClass22_0
struct  U3CU3Ec__DisplayClass22_0_t734F8858DFA873056131FD471FF4ED3DA5277437  : public RuntimeObject
{
public:
	// System.Reflection.MethodInfo Ludiq.OdinSerializer.Utilities.TypeExtensions_<>c__DisplayClass22_0::method
	MethodInfo_t * ___method_0;

public:
	inline static int32_t get_offset_of_method_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass22_0_t734F8858DFA873056131FD471FF4ED3DA5277437, ___method_0)); }
	inline MethodInfo_t * get_method_0() const { return ___method_0; }
	inline MethodInfo_t ** get_address_of_method_0() { return &___method_0; }
	inline void set_method_0(MethodInfo_t * value)
	{
		___method_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_0), (void*)value);
	}
};


// Ludiq.OdinSerializer.Utilities.TypeExtensions_<>c__DisplayClass35_0
struct  U3CU3Ec__DisplayClass35_0_t526AC3F36F6B204BC4F69FEEA03AC1F1940247D2  : public RuntimeObject
{
public:
	// System.Type Ludiq.OdinSerializer.Utilities.TypeExtensions_<>c__DisplayClass35_0::openGenericInterfaceType
	Type_t * ___openGenericInterfaceType_0;

public:
	inline static int32_t get_offset_of_openGenericInterfaceType_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass35_0_t526AC3F36F6B204BC4F69FEEA03AC1F1940247D2, ___openGenericInterfaceType_0)); }
	inline Type_t * get_openGenericInterfaceType_0() const { return ___openGenericInterfaceType_0; }
	inline Type_t ** get_address_of_openGenericInterfaceType_0() { return &___openGenericInterfaceType_0; }
	inline void set_openGenericInterfaceType_0(Type_t * value)
	{
		___openGenericInterfaceType_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___openGenericInterfaceType_0), (void*)value);
	}
};


// Ludiq.OdinSerializer.Utilities.TypeExtensions_<>c__DisplayClass40_0
struct  U3CU3Ec__DisplayClass40_0_tB2769865F46220037F929292B4B4846936CEB73C  : public RuntimeObject
{
public:
	// System.String Ludiq.OdinSerializer.Utilities.TypeExtensions_<>c__DisplayClass40_0::methodName
	String_t* ___methodName_0;

public:
	inline static int32_t get_offset_of_methodName_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass40_0_tB2769865F46220037F929292B4B4846936CEB73C, ___methodName_0)); }
	inline String_t* get_methodName_0() const { return ___methodName_0; }
	inline String_t** get_address_of_methodName_0() { return &___methodName_0; }
	inline void set_methodName_0(String_t* value)
	{
		___methodName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___methodName_0), (void*)value);
	}
};


// Ludiq.OdinSerializer.Utilities.TypeExtensions_<>c__DisplayClass41_0
struct  U3CU3Ec__DisplayClass41_0_t7C518137717CF4AFE071953FCD0AA08BE9CB214F  : public RuntimeObject
{
public:
	// System.String Ludiq.OdinSerializer.Utilities.TypeExtensions_<>c__DisplayClass41_0::methodName
	String_t* ___methodName_0;

public:
	inline static int32_t get_offset_of_methodName_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass41_0_t7C518137717CF4AFE071953FCD0AA08BE9CB214F, ___methodName_0)); }
	inline String_t* get_methodName_0() const { return ___methodName_0; }
	inline String_t** get_address_of_methodName_0() { return &___methodName_0; }
	inline void set_methodName_0(String_t* value)
	{
		___methodName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___methodName_0), (void*)value);
	}
};


// Ludiq.OdinSerializer.Utilities.TypeExtensions_<GetBaseClasses>d__48
struct  U3CGetBaseClassesU3Ed__48_t6A93C122A61B9DAF31979EA6922ADC799C2A9B3E  : public RuntimeObject
{
public:
	// System.Int32 Ludiq.OdinSerializer.Utilities.TypeExtensions_<GetBaseClasses>d__48::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Type Ludiq.OdinSerializer.Utilities.TypeExtensions_<GetBaseClasses>d__48::<>2__current
	Type_t * ___U3CU3E2__current_1;
	// System.Int32 Ludiq.OdinSerializer.Utilities.TypeExtensions_<GetBaseClasses>d__48::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Type Ludiq.OdinSerializer.Utilities.TypeExtensions_<GetBaseClasses>d__48::type
	Type_t * ___type_3;
	// System.Type Ludiq.OdinSerializer.Utilities.TypeExtensions_<GetBaseClasses>d__48::<>3__type
	Type_t * ___U3CU3E3__type_4;
	// System.Boolean Ludiq.OdinSerializer.Utilities.TypeExtensions_<GetBaseClasses>d__48::includeSelf
	bool ___includeSelf_5;
	// System.Boolean Ludiq.OdinSerializer.Utilities.TypeExtensions_<GetBaseClasses>d__48::<>3__includeSelf
	bool ___U3CU3E3__includeSelf_6;
	// System.Type Ludiq.OdinSerializer.Utilities.TypeExtensions_<GetBaseClasses>d__48::<current>5__1
	Type_t * ___U3CcurrentU3E5__1_7;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetBaseClassesU3Ed__48_t6A93C122A61B9DAF31979EA6922ADC799C2A9B3E, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetBaseClassesU3Ed__48_t6A93C122A61B9DAF31979EA6922ADC799C2A9B3E, ___U3CU3E2__current_1)); }
	inline Type_t * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline Type_t ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(Type_t * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CGetBaseClassesU3Ed__48_t6A93C122A61B9DAF31979EA6922ADC799C2A9B3E, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_type_3() { return static_cast<int32_t>(offsetof(U3CGetBaseClassesU3Ed__48_t6A93C122A61B9DAF31979EA6922ADC799C2A9B3E, ___type_3)); }
	inline Type_t * get_type_3() const { return ___type_3; }
	inline Type_t ** get_address_of_type_3() { return &___type_3; }
	inline void set_type_3(Type_t * value)
	{
		___type_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__type_4() { return static_cast<int32_t>(offsetof(U3CGetBaseClassesU3Ed__48_t6A93C122A61B9DAF31979EA6922ADC799C2A9B3E, ___U3CU3E3__type_4)); }
	inline Type_t * get_U3CU3E3__type_4() const { return ___U3CU3E3__type_4; }
	inline Type_t ** get_address_of_U3CU3E3__type_4() { return &___U3CU3E3__type_4; }
	inline void set_U3CU3E3__type_4(Type_t * value)
	{
		___U3CU3E3__type_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__type_4), (void*)value);
	}

	inline static int32_t get_offset_of_includeSelf_5() { return static_cast<int32_t>(offsetof(U3CGetBaseClassesU3Ed__48_t6A93C122A61B9DAF31979EA6922ADC799C2A9B3E, ___includeSelf_5)); }
	inline bool get_includeSelf_5() const { return ___includeSelf_5; }
	inline bool* get_address_of_includeSelf_5() { return &___includeSelf_5; }
	inline void set_includeSelf_5(bool value)
	{
		___includeSelf_5 = value;
	}

	inline static int32_t get_offset_of_U3CU3E3__includeSelf_6() { return static_cast<int32_t>(offsetof(U3CGetBaseClassesU3Ed__48_t6A93C122A61B9DAF31979EA6922ADC799C2A9B3E, ___U3CU3E3__includeSelf_6)); }
	inline bool get_U3CU3E3__includeSelf_6() const { return ___U3CU3E3__includeSelf_6; }
	inline bool* get_address_of_U3CU3E3__includeSelf_6() { return &___U3CU3E3__includeSelf_6; }
	inline void set_U3CU3E3__includeSelf_6(bool value)
	{
		___U3CU3E3__includeSelf_6 = value;
	}

	inline static int32_t get_offset_of_U3CcurrentU3E5__1_7() { return static_cast<int32_t>(offsetof(U3CGetBaseClassesU3Ed__48_t6A93C122A61B9DAF31979EA6922ADC799C2A9B3E, ___U3CcurrentU3E5__1_7)); }
	inline Type_t * get_U3CcurrentU3E5__1_7() const { return ___U3CcurrentU3E5__1_7; }
	inline Type_t ** get_address_of_U3CcurrentU3E5__1_7() { return &___U3CcurrentU3E5__1_7; }
	inline void set_U3CcurrentU3E5__1_7(Type_t * value)
	{
		___U3CcurrentU3E5__1_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcurrentU3E5__1_7), (void*)value);
	}
};


// Ludiq.OdinSerializer.Utilities.UnityExtensions
struct  UnityExtensions_tD984E5BCE5092481B76015B36CD6C2BF40F2353B  : public RuntimeObject
{
public:

public:
};

struct UnityExtensions_tD984E5BCE5092481B76015B36CD6C2BF40F2353B_StaticFields
{
public:
	// Ludiq.OdinSerializer.Utilities.ValueGetter`2<UnityEngine.Object,System.IntPtr> Ludiq.OdinSerializer.Utilities.UnityExtensions::UnityObjectCachedPtrFieldGetter
	ValueGetter_2_tF20DFE4637797CF9A6FD6CEEB79F1A9A6DF91B1A * ___UnityObjectCachedPtrFieldGetter_0;

public:
	inline static int32_t get_offset_of_UnityObjectCachedPtrFieldGetter_0() { return static_cast<int32_t>(offsetof(UnityExtensions_tD984E5BCE5092481B76015B36CD6C2BF40F2353B_StaticFields, ___UnityObjectCachedPtrFieldGetter_0)); }
	inline ValueGetter_2_tF20DFE4637797CF9A6FD6CEEB79F1A9A6DF91B1A * get_UnityObjectCachedPtrFieldGetter_0() const { return ___UnityObjectCachedPtrFieldGetter_0; }
	inline ValueGetter_2_tF20DFE4637797CF9A6FD6CEEB79F1A9A6DF91B1A ** get_address_of_UnityObjectCachedPtrFieldGetter_0() { return &___UnityObjectCachedPtrFieldGetter_0; }
	inline void set_UnityObjectCachedPtrFieldGetter_0(ValueGetter_2_tF20DFE4637797CF9A6FD6CEEB79F1A9A6DF91B1A * value)
	{
		___UnityObjectCachedPtrFieldGetter_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UnityObjectCachedPtrFieldGetter_0), (void*)value);
	}
};


// Ludiq.OdinSerializer.Utilities.UnityVersion
struct  UnityVersion_t24EBAA036670F68F63EDA0CCB9B032AC9350A407  : public RuntimeObject
{
public:

public:
};

struct UnityVersion_t24EBAA036670F68F63EDA0CCB9B032AC9350A407_StaticFields
{
public:
	// System.Int32 Ludiq.OdinSerializer.Utilities.UnityVersion::Major
	int32_t ___Major_0;
	// System.Int32 Ludiq.OdinSerializer.Utilities.UnityVersion::Minor
	int32_t ___Minor_1;

public:
	inline static int32_t get_offset_of_Major_0() { return static_cast<int32_t>(offsetof(UnityVersion_t24EBAA036670F68F63EDA0CCB9B032AC9350A407_StaticFields, ___Major_0)); }
	inline int32_t get_Major_0() const { return ___Major_0; }
	inline int32_t* get_address_of_Major_0() { return &___Major_0; }
	inline void set_Major_0(int32_t value)
	{
		___Major_0 = value;
	}

	inline static int32_t get_offset_of_Minor_1() { return static_cast<int32_t>(offsetof(UnityVersion_t24EBAA036670F68F63EDA0CCB9B032AC9350A407_StaticFields, ___Minor_1)); }
	inline int32_t get_Minor_1() const { return ___Minor_1; }
	inline int32_t* get_address_of_Minor_1() { return &___Minor_1; }
	inline void set_Minor_1(int32_t value)
	{
		___Minor_1 = value;
	}
};


// Ludiq.OdinSerializer.Utilities.Unsafe.UnsafeUtilities
struct  UnsafeUtilities_t76FFB6734FB7B2B1BE9F2702FC4E335327B1B81B  : public RuntimeObject
{
public:

public:
};

struct Il2CppArrayBounds;

// System.Array


// System.BitConverter
struct  BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE  : public RuntimeObject
{
public:

public:
};

struct BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_StaticFields
{
public:
	// System.Boolean System.BitConverter::IsLittleEndian
	bool ___IsLittleEndian_0;

public:
	inline static int32_t get_offset_of_IsLittleEndian_0() { return static_cast<int32_t>(offsetof(BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_StaticFields, ___IsLittleEndian_0)); }
	inline bool get_IsLittleEndian_0() const { return ___IsLittleEndian_0; }
	inline bool* get_address_of_IsLittleEndian_0() { return &___IsLittleEndian_0; }
	inline void set_IsLittleEndian_0(bool value)
	{
		___IsLittleEndian_0 = value;
	}
};


// System.Globalization.CultureInfo
struct  CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F  : public RuntimeObject
{
public:
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
	NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * ___textInfo_12;
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
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD * ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;

public:
	inline static int32_t get_offset_of_m_isReadOnly_3() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_isReadOnly_3)); }
	inline bool get_m_isReadOnly_3() const { return ___m_isReadOnly_3; }
	inline bool* get_address_of_m_isReadOnly_3() { return &___m_isReadOnly_3; }
	inline void set_m_isReadOnly_3(bool value)
	{
		___m_isReadOnly_3 = value;
	}

	inline static int32_t get_offset_of_cultureID_4() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___cultureID_4)); }
	inline int32_t get_cultureID_4() const { return ___cultureID_4; }
	inline int32_t* get_address_of_cultureID_4() { return &___cultureID_4; }
	inline void set_cultureID_4(int32_t value)
	{
		___cultureID_4 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_5() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___parent_lcid_5)); }
	inline int32_t get_parent_lcid_5() const { return ___parent_lcid_5; }
	inline int32_t* get_address_of_parent_lcid_5() { return &___parent_lcid_5; }
	inline void set_parent_lcid_5(int32_t value)
	{
		___parent_lcid_5 = value;
	}

	inline static int32_t get_offset_of_datetime_index_6() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___datetime_index_6)); }
	inline int32_t get_datetime_index_6() const { return ___datetime_index_6; }
	inline int32_t* get_address_of_datetime_index_6() { return &___datetime_index_6; }
	inline void set_datetime_index_6(int32_t value)
	{
		___datetime_index_6 = value;
	}

	inline static int32_t get_offset_of_number_index_7() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___number_index_7)); }
	inline int32_t get_number_index_7() const { return ___number_index_7; }
	inline int32_t* get_address_of_number_index_7() { return &___number_index_7; }
	inline void set_number_index_7(int32_t value)
	{
		___number_index_7 = value;
	}

	inline static int32_t get_offset_of_default_calendar_type_8() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___default_calendar_type_8)); }
	inline int32_t get_default_calendar_type_8() const { return ___default_calendar_type_8; }
	inline int32_t* get_address_of_default_calendar_type_8() { return &___default_calendar_type_8; }
	inline void set_default_calendar_type_8(int32_t value)
	{
		___default_calendar_type_8 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_9() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_useUserOverride_9)); }
	inline bool get_m_useUserOverride_9() const { return ___m_useUserOverride_9; }
	inline bool* get_address_of_m_useUserOverride_9() { return &___m_useUserOverride_9; }
	inline void set_m_useUserOverride_9(bool value)
	{
		___m_useUserOverride_9 = value;
	}

	inline static int32_t get_offset_of_numInfo_10() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___numInfo_10)); }
	inline NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * get_numInfo_10() const { return ___numInfo_10; }
	inline NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 ** get_address_of_numInfo_10() { return &___numInfo_10; }
	inline void set_numInfo_10(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * value)
	{
		___numInfo_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numInfo_10), (void*)value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_11() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___dateTimeInfo_11)); }
	inline DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * get_dateTimeInfo_11() const { return ___dateTimeInfo_11; }
	inline DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F ** get_address_of_dateTimeInfo_11() { return &___dateTimeInfo_11; }
	inline void set_dateTimeInfo_11(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * value)
	{
		___dateTimeInfo_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dateTimeInfo_11), (void*)value);
	}

	inline static int32_t get_offset_of_textInfo_12() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___textInfo_12)); }
	inline TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * get_textInfo_12() const { return ___textInfo_12; }
	inline TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 ** get_address_of_textInfo_12() { return &___textInfo_12; }
	inline void set_textInfo_12(TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * value)
	{
		___textInfo_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textInfo_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_name_13() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_name_13)); }
	inline String_t* get_m_name_13() const { return ___m_name_13; }
	inline String_t** get_address_of_m_name_13() { return &___m_name_13; }
	inline void set_m_name_13(String_t* value)
	{
		___m_name_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_name_13), (void*)value);
	}

	inline static int32_t get_offset_of_englishname_14() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___englishname_14)); }
	inline String_t* get_englishname_14() const { return ___englishname_14; }
	inline String_t** get_address_of_englishname_14() { return &___englishname_14; }
	inline void set_englishname_14(String_t* value)
	{
		___englishname_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___englishname_14), (void*)value);
	}

	inline static int32_t get_offset_of_nativename_15() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___nativename_15)); }
	inline String_t* get_nativename_15() const { return ___nativename_15; }
	inline String_t** get_address_of_nativename_15() { return &___nativename_15; }
	inline void set_nativename_15(String_t* value)
	{
		___nativename_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nativename_15), (void*)value);
	}

	inline static int32_t get_offset_of_iso3lang_16() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___iso3lang_16)); }
	inline String_t* get_iso3lang_16() const { return ___iso3lang_16; }
	inline String_t** get_address_of_iso3lang_16() { return &___iso3lang_16; }
	inline void set_iso3lang_16(String_t* value)
	{
		___iso3lang_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso3lang_16), (void*)value);
	}

	inline static int32_t get_offset_of_iso2lang_17() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___iso2lang_17)); }
	inline String_t* get_iso2lang_17() const { return ___iso2lang_17; }
	inline String_t** get_address_of_iso2lang_17() { return &___iso2lang_17; }
	inline void set_iso2lang_17(String_t* value)
	{
		___iso2lang_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso2lang_17), (void*)value);
	}

	inline static int32_t get_offset_of_win3lang_18() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___win3lang_18)); }
	inline String_t* get_win3lang_18() const { return ___win3lang_18; }
	inline String_t** get_address_of_win3lang_18() { return &___win3lang_18; }
	inline void set_win3lang_18(String_t* value)
	{
		___win3lang_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___win3lang_18), (void*)value);
	}

	inline static int32_t get_offset_of_territory_19() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___territory_19)); }
	inline String_t* get_territory_19() const { return ___territory_19; }
	inline String_t** get_address_of_territory_19() { return &___territory_19; }
	inline void set_territory_19(String_t* value)
	{
		___territory_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___territory_19), (void*)value);
	}

	inline static int32_t get_offset_of_native_calendar_names_20() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___native_calendar_names_20)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_native_calendar_names_20() const { return ___native_calendar_names_20; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_native_calendar_names_20() { return &___native_calendar_names_20; }
	inline void set_native_calendar_names_20(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___native_calendar_names_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_calendar_names_20), (void*)value);
	}

	inline static int32_t get_offset_of_compareInfo_21() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___compareInfo_21)); }
	inline CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * get_compareInfo_21() const { return ___compareInfo_21; }
	inline CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 ** get_address_of_compareInfo_21() { return &___compareInfo_21; }
	inline void set_compareInfo_21(CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * value)
	{
		___compareInfo_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___compareInfo_21), (void*)value);
	}

	inline static int32_t get_offset_of_textinfo_data_22() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___textinfo_data_22)); }
	inline void* get_textinfo_data_22() const { return ___textinfo_data_22; }
	inline void** get_address_of_textinfo_data_22() { return &___textinfo_data_22; }
	inline void set_textinfo_data_22(void* value)
	{
		___textinfo_data_22 = value;
	}

	inline static int32_t get_offset_of_m_dataItem_23() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_dataItem_23)); }
	inline int32_t get_m_dataItem_23() const { return ___m_dataItem_23; }
	inline int32_t* get_address_of_m_dataItem_23() { return &___m_dataItem_23; }
	inline void set_m_dataItem_23(int32_t value)
	{
		___m_dataItem_23 = value;
	}

	inline static int32_t get_offset_of_calendar_24() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___calendar_24)); }
	inline Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * get_calendar_24() const { return ___calendar_24; }
	inline Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 ** get_address_of_calendar_24() { return &___calendar_24; }
	inline void set_calendar_24(Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * value)
	{
		___calendar_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___calendar_24), (void*)value);
	}

	inline static int32_t get_offset_of_parent_culture_25() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___parent_culture_25)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_parent_culture_25() const { return ___parent_culture_25; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_parent_culture_25() { return &___parent_culture_25; }
	inline void set_parent_culture_25(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___parent_culture_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_culture_25), (void*)value);
	}

	inline static int32_t get_offset_of_constructed_26() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___constructed_26)); }
	inline bool get_constructed_26() const { return ___constructed_26; }
	inline bool* get_address_of_constructed_26() { return &___constructed_26; }
	inline void set_constructed_26(bool value)
	{
		___constructed_26 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_27() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___cached_serialized_form_27)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_cached_serialized_form_27() const { return ___cached_serialized_form_27; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_cached_serialized_form_27() { return &___cached_serialized_form_27; }
	inline void set_cached_serialized_form_27(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___cached_serialized_form_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cached_serialized_form_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_cultureData_28() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_cultureData_28)); }
	inline CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD * get_m_cultureData_28() const { return ___m_cultureData_28; }
	inline CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD ** get_address_of_m_cultureData_28() { return &___m_cultureData_28; }
	inline void set_m_cultureData_28(CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD * value)
	{
		___m_cultureData_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cultureData_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_isInherited_29() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_isInherited_29)); }
	inline bool get_m_isInherited_29() const { return ___m_isInherited_29; }
	inline bool* get_address_of_m_isInherited_29() { return &___m_isInherited_29; }
	inline void set_m_isInherited_29(bool value)
	{
		___m_isInherited_29 = value;
	}
};

struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___s_DefaultThreadCurrentUICulture_33;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___s_DefaultThreadCurrentCulture_34;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B * ___shared_by_number_35;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25 * ___shared_by_name_36;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_37;

public:
	inline static int32_t get_offset_of_invariant_culture_info_0() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___invariant_culture_info_0)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_invariant_culture_info_0() const { return ___invariant_culture_info_0; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_invariant_culture_info_0() { return &___invariant_culture_info_0; }
	inline void set_invariant_culture_info_0(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___invariant_culture_info_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invariant_culture_info_0), (void*)value);
	}

	inline static int32_t get_offset_of_shared_table_lock_1() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___shared_table_lock_1)); }
	inline RuntimeObject * get_shared_table_lock_1() const { return ___shared_table_lock_1; }
	inline RuntimeObject ** get_address_of_shared_table_lock_1() { return &___shared_table_lock_1; }
	inline void set_shared_table_lock_1(RuntimeObject * value)
	{
		___shared_table_lock_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_table_lock_1), (void*)value);
	}

	inline static int32_t get_offset_of_default_current_culture_2() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___default_current_culture_2)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_default_current_culture_2() const { return ___default_current_culture_2; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_default_current_culture_2() { return &___default_current_culture_2; }
	inline void set_default_current_culture_2(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___default_current_culture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___default_current_culture_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentUICulture_33() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___s_DefaultThreadCurrentUICulture_33)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_s_DefaultThreadCurrentUICulture_33() const { return ___s_DefaultThreadCurrentUICulture_33; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_s_DefaultThreadCurrentUICulture_33() { return &___s_DefaultThreadCurrentUICulture_33; }
	inline void set_s_DefaultThreadCurrentUICulture_33(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___s_DefaultThreadCurrentUICulture_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentUICulture_33), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentCulture_34() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___s_DefaultThreadCurrentCulture_34)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_s_DefaultThreadCurrentCulture_34() const { return ___s_DefaultThreadCurrentCulture_34; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_s_DefaultThreadCurrentCulture_34() { return &___s_DefaultThreadCurrentCulture_34; }
	inline void set_s_DefaultThreadCurrentCulture_34(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___s_DefaultThreadCurrentCulture_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentCulture_34), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_number_35() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___shared_by_number_35)); }
	inline Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B * get_shared_by_number_35() const { return ___shared_by_number_35; }
	inline Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B ** get_address_of_shared_by_number_35() { return &___shared_by_number_35; }
	inline void set_shared_by_number_35(Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B * value)
	{
		___shared_by_number_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_number_35), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_name_36() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___shared_by_name_36)); }
	inline Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25 * get_shared_by_name_36() const { return ___shared_by_name_36; }
	inline Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25 ** get_address_of_shared_by_name_36() { return &___shared_by_name_36; }
	inline void set_shared_by_name_36(Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25 * value)
	{
		___shared_by_name_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_name_36), (void*)value);
	}

	inline static int32_t get_offset_of_IsTaiwanSku_37() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___IsTaiwanSku_37)); }
	inline bool get_IsTaiwanSku_37() const { return ___IsTaiwanSku_37; }
	inline bool* get_address_of_IsTaiwanSku_37() { return &___IsTaiwanSku_37; }
	inline void set_IsTaiwanSku_37(bool value)
	{
		___IsTaiwanSku_37 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * ___numInfo_10;
	DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * ___dateTimeInfo_11;
	TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * ___calendar_24;
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * ___numInfo_10;
	DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * ___dateTimeInfo_11;
	TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * ___calendar_24;
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct  CriticalFinalizerObject_t8B006E1DEE084E781F5C0F3283E9226E28894DD9  : public RuntimeObject
{
public:

public:
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// System.Version
struct  Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD  : public RuntimeObject
{
public:
	// System.Int32 System.Version::_Major
	int32_t ____Major_0;
	// System.Int32 System.Version::_Minor
	int32_t ____Minor_1;
	// System.Int32 System.Version::_Build
	int32_t ____Build_2;
	// System.Int32 System.Version::_Revision
	int32_t ____Revision_3;

public:
	inline static int32_t get_offset_of__Major_0() { return static_cast<int32_t>(offsetof(Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD, ____Major_0)); }
	inline int32_t get__Major_0() const { return ____Major_0; }
	inline int32_t* get_address_of__Major_0() { return &____Major_0; }
	inline void set__Major_0(int32_t value)
	{
		____Major_0 = value;
	}

	inline static int32_t get_offset_of__Minor_1() { return static_cast<int32_t>(offsetof(Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD, ____Minor_1)); }
	inline int32_t get__Minor_1() const { return ____Minor_1; }
	inline int32_t* get_address_of__Minor_1() { return &____Minor_1; }
	inline void set__Minor_1(int32_t value)
	{
		____Minor_1 = value;
	}

	inline static int32_t get_offset_of__Build_2() { return static_cast<int32_t>(offsetof(Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD, ____Build_2)); }
	inline int32_t get__Build_2() const { return ____Build_2; }
	inline int32_t* get_address_of__Build_2() { return &____Build_2; }
	inline void set__Build_2(int32_t value)
	{
		____Build_2 = value;
	}

	inline static int32_t get_offset_of__Revision_3() { return static_cast<int32_t>(offsetof(Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD, ____Revision_3)); }
	inline int32_t get__Revision_3() const { return ____Revision_3; }
	inline int32_t* get_address_of__Revision_3() { return &____Revision_3; }
	inline void set__Revision_3(int32_t value)
	{
		____Revision_3 = value;
	}
};

struct Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD_StaticFields
{
public:
	// System.Char[] System.Version::SeparatorsArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___SeparatorsArray_4;

public:
	inline static int32_t get_offset_of_SeparatorsArray_4() { return static_cast<int32_t>(offsetof(Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD_StaticFields, ___SeparatorsArray_4)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_SeparatorsArray_4() const { return ___SeparatorsArray_4; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_SeparatorsArray_4() { return &___SeparatorsArray_4; }
	inline void set_SeparatorsArray_4(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___SeparatorsArray_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SeparatorsArray_4), (void*)value);
	}
};


// Ludiq.OdinSerializer.Serializer`1<System.Single>
struct  Serializer_1_tB5154B4A9ADD83AA51ACE4FBB4D5F0602FBBFA6A  : public Serializer_tC51784B7099FCC3F2894FFE9C6E394C71953A32C
{
public:

public:
};


// Ludiq.OdinSerializer.Vector2DictionaryKeyPathProvider
struct  Vector2DictionaryKeyPathProvider_t44A64799A6D0A2F9A916BF1858FDB1BC017CD062  : public BaseDictionaryKeyPathProvider_1_tB5A2BD91A9D7DC73F11900E0E311FA56800E4494
{
public:

public:
};


// Ludiq.OdinSerializer.Vector2Formatter
struct  Vector2Formatter_tD255F733B7C2E92F275552805687312FE984A599  : public MinimalBaseFormatter_1_t3FEF32251D23D78F0F5718CCF8313661795D0F4F
{
public:

public:
};

struct Vector2Formatter_tD255F733B7C2E92F275552805687312FE984A599_StaticFields
{
public:
	// Ludiq.OdinSerializer.Serializer`1<System.Single> Ludiq.OdinSerializer.Vector2Formatter::FloatSerializer
	Serializer_1_tB5154B4A9ADD83AA51ACE4FBB4D5F0602FBBFA6A * ___FloatSerializer_1;

public:
	inline static int32_t get_offset_of_FloatSerializer_1() { return static_cast<int32_t>(offsetof(Vector2Formatter_tD255F733B7C2E92F275552805687312FE984A599_StaticFields, ___FloatSerializer_1)); }
	inline Serializer_1_tB5154B4A9ADD83AA51ACE4FBB4D5F0602FBBFA6A * get_FloatSerializer_1() const { return ___FloatSerializer_1; }
	inline Serializer_1_tB5154B4A9ADD83AA51ACE4FBB4D5F0602FBBFA6A ** get_address_of_FloatSerializer_1() { return &___FloatSerializer_1; }
	inline void set_FloatSerializer_1(Serializer_1_tB5154B4A9ADD83AA51ACE4FBB4D5F0602FBBFA6A * value)
	{
		___FloatSerializer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FloatSerializer_1), (void*)value);
	}
};


// Ludiq.OdinSerializer.Vector3DictionaryKeyPathProvider
struct  Vector3DictionaryKeyPathProvider_t1661256BFACF448B0933BDA7BE07D499877D20E1  : public BaseDictionaryKeyPathProvider_1_tE66BE6796D65DC85103E5D644423949DE3FFFA44
{
public:

public:
};


// Ludiq.OdinSerializer.Vector3Formatter
struct  Vector3Formatter_t8D5B221A255A7F8E8765B487C881CD2498D6855C  : public MinimalBaseFormatter_1_tE2EE91A4B8AE5422EA403BCA9F754F9A11C67994
{
public:

public:
};

struct Vector3Formatter_t8D5B221A255A7F8E8765B487C881CD2498D6855C_StaticFields
{
public:
	// Ludiq.OdinSerializer.Serializer`1<System.Single> Ludiq.OdinSerializer.Vector3Formatter::FloatSerializer
	Serializer_1_tB5154B4A9ADD83AA51ACE4FBB4D5F0602FBBFA6A * ___FloatSerializer_1;

public:
	inline static int32_t get_offset_of_FloatSerializer_1() { return static_cast<int32_t>(offsetof(Vector3Formatter_t8D5B221A255A7F8E8765B487C881CD2498D6855C_StaticFields, ___FloatSerializer_1)); }
	inline Serializer_1_tB5154B4A9ADD83AA51ACE4FBB4D5F0602FBBFA6A * get_FloatSerializer_1() const { return ___FloatSerializer_1; }
	inline Serializer_1_tB5154B4A9ADD83AA51ACE4FBB4D5F0602FBBFA6A ** get_address_of_FloatSerializer_1() { return &___FloatSerializer_1; }
	inline void set_FloatSerializer_1(Serializer_1_tB5154B4A9ADD83AA51ACE4FBB4D5F0602FBBFA6A * value)
	{
		___FloatSerializer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FloatSerializer_1), (void*)value);
	}
};


// Ludiq.OdinSerializer.Vector4DictionaryKeyPathProvider
struct  Vector4DictionaryKeyPathProvider_t94C11F8EEF6EC16608738A695E77A69F20BE8CA6  : public BaseDictionaryKeyPathProvider_1_t810148F5A0717BD985DAB0213958177D177D2AE5
{
public:

public:
};


// Ludiq.OdinSerializer.Vector4Formatter
struct  Vector4Formatter_tAA4AB5D5086266E8369233F0CC4A28C49207FA26  : public MinimalBaseFormatter_1_tB70FC2FB8F1AE89EB60830477575D52702E1FDE3
{
public:

public:
};

struct Vector4Formatter_tAA4AB5D5086266E8369233F0CC4A28C49207FA26_StaticFields
{
public:
	// Ludiq.OdinSerializer.Serializer`1<System.Single> Ludiq.OdinSerializer.Vector4Formatter::FloatSerializer
	Serializer_1_tB5154B4A9ADD83AA51ACE4FBB4D5F0602FBBFA6A * ___FloatSerializer_1;

public:
	inline static int32_t get_offset_of_FloatSerializer_1() { return static_cast<int32_t>(offsetof(Vector4Formatter_tAA4AB5D5086266E8369233F0CC4A28C49207FA26_StaticFields, ___FloatSerializer_1)); }
	inline Serializer_1_tB5154B4A9ADD83AA51ACE4FBB4D5F0602FBBFA6A * get_FloatSerializer_1() const { return ___FloatSerializer_1; }
	inline Serializer_1_tB5154B4A9ADD83AA51ACE4FBB4D5F0602FBBFA6A ** get_address_of_FloatSerializer_1() { return &___FloatSerializer_1; }
	inline void set_FloatSerializer_1(Serializer_1_tB5154B4A9ADD83AA51ACE4FBB4D5F0602FBBFA6A * value)
	{
		___FloatSerializer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FloatSerializer_1), (void*)value);
	}
};


// Ludiq.OdinSerializer.VersionFormatter
struct  VersionFormatter_t78111BF59B957DE7A6E16668A1EE195503701AF1  : public MinimalBaseFormatter_1_tF12994EA9D174D87E4F68634C0C3600E58272E55
{
public:

public:
};


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
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct  Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Char
struct  Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// System.Decimal
struct  Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 
{
public:
	// System.Int32 System.Decimal::flags
	int32_t ___flags_14;
	// System.Int32 System.Decimal::hi
	int32_t ___hi_15;
	// System.Int32 System.Decimal::lo
	int32_t ___lo_16;
	// System.Int32 System.Decimal::mid
	int32_t ___mid_17;

public:
	inline static int32_t get_offset_of_flags_14() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___flags_14)); }
	inline int32_t get_flags_14() const { return ___flags_14; }
	inline int32_t* get_address_of_flags_14() { return &___flags_14; }
	inline void set_flags_14(int32_t value)
	{
		___flags_14 = value;
	}

	inline static int32_t get_offset_of_hi_15() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___hi_15)); }
	inline int32_t get_hi_15() const { return ___hi_15; }
	inline int32_t* get_address_of_hi_15() { return &___hi_15; }
	inline void set_hi_15(int32_t value)
	{
		___hi_15 = value;
	}

	inline static int32_t get_offset_of_lo_16() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___lo_16)); }
	inline int32_t get_lo_16() const { return ___lo_16; }
	inline int32_t* get_address_of_lo_16() { return &___lo_16; }
	inline void set_lo_16(int32_t value)
	{
		___lo_16 = value;
	}

	inline static int32_t get_offset_of_mid_17() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___mid_17)); }
	inline int32_t get_mid_17() const { return ___mid_17; }
	inline int32_t* get_address_of_mid_17() { return &___mid_17; }
	inline void set_mid_17(int32_t value)
	{
		___mid_17 = value;
	}
};

struct Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields
{
public:
	// System.UInt32[] System.Decimal::Powers10
	UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* ___Powers10_6;
	// System.Decimal System.Decimal::Zero
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___Zero_7;
	// System.Decimal System.Decimal::One
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___One_8;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___MinusOne_9;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___MaxValue_10;
	// System.Decimal System.Decimal::MinValue
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___MinValue_11;
	// System.Decimal System.Decimal::NearNegativeZero
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___NearNegativeZero_12;
	// System.Decimal System.Decimal::NearPositiveZero
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___NearPositiveZero_13;

public:
	inline static int32_t get_offset_of_Powers10_6() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___Powers10_6)); }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* get_Powers10_6() const { return ___Powers10_6; }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB** get_address_of_Powers10_6() { return &___Powers10_6; }
	inline void set_Powers10_6(UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* value)
	{
		___Powers10_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Powers10_6), (void*)value);
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___Zero_7)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_Zero_7() const { return ___Zero_7; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___Zero_7 = value;
	}

	inline static int32_t get_offset_of_One_8() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___One_8)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_One_8() const { return ___One_8; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_One_8() { return &___One_8; }
	inline void set_One_8(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___One_8 = value;
	}

	inline static int32_t get_offset_of_MinusOne_9() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___MinusOne_9)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_MinusOne_9() const { return ___MinusOne_9; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_MinusOne_9() { return &___MinusOne_9; }
	inline void set_MinusOne_9(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___MinusOne_9 = value;
	}

	inline static int32_t get_offset_of_MaxValue_10() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___MaxValue_10)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_MaxValue_10() const { return ___MaxValue_10; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_MaxValue_10() { return &___MaxValue_10; }
	inline void set_MaxValue_10(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___MaxValue_10 = value;
	}

	inline static int32_t get_offset_of_MinValue_11() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___MinValue_11)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_MinValue_11() const { return ___MinValue_11; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_MinValue_11() { return &___MinValue_11; }
	inline void set_MinValue_11(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___MinValue_11 = value;
	}

	inline static int32_t get_offset_of_NearNegativeZero_12() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___NearNegativeZero_12)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_NearNegativeZero_12() const { return ___NearNegativeZero_12; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_NearNegativeZero_12() { return &___NearNegativeZero_12; }
	inline void set_NearNegativeZero_12(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___NearNegativeZero_12 = value;
	}

	inline static int32_t get_offset_of_NearPositiveZero_13() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___NearPositiveZero_13)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_NearPositiveZero_13() const { return ___NearPositiveZero_13; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_NearPositiveZero_13() { return &___NearPositiveZero_13; }
	inline void set_NearPositiveZero_13(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___NearPositiveZero_13 = value;
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

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


// System.Reflection.FieldInfo
struct  FieldInfo_t  : public MemberInfo_t
{
public:

public:
};


// System.Reflection.MethodBase
struct  MethodBase_t  : public MemberInfo_t
{
public:

public:
};


// System.Runtime.InteropServices.GCHandle
struct  GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};


// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.Threading.Thread
struct  Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7  : public CriticalFinalizerObject_t8B006E1DEE084E781F5C0F3283E9226E28894DD9
{
public:
	// System.Threading.InternalThread System.Threading.Thread::internal_thread
	InternalThread_tA4C58C2A7D15AF43C3E7507375E6D31DBBE7D192 * ___internal_thread_6;
	// System.Object System.Threading.Thread::m_ThreadStartArg
	RuntimeObject * ___m_ThreadStartArg_7;
	// System.Object System.Threading.Thread::pending_exception
	RuntimeObject * ___pending_exception_8;
	// System.Security.Principal.IPrincipal System.Threading.Thread::principal
	RuntimeObject* ___principal_9;
	// System.Int32 System.Threading.Thread::principal_version
	int32_t ___principal_version_10;
	// System.MulticastDelegate System.Threading.Thread::m_Delegate
	MulticastDelegate_t * ___m_Delegate_12;
	// System.Threading.ExecutionContext System.Threading.Thread::m_ExecutionContext
	ExecutionContext_t0E11C30308A4CC964D8A2EA9132F9BDCE5362C70 * ___m_ExecutionContext_13;
	// System.Boolean System.Threading.Thread::m_ExecutionContextBelongsToOuterScope
	bool ___m_ExecutionContextBelongsToOuterScope_14;

public:
	inline static int32_t get_offset_of_internal_thread_6() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___internal_thread_6)); }
	inline InternalThread_tA4C58C2A7D15AF43C3E7507375E6D31DBBE7D192 * get_internal_thread_6() const { return ___internal_thread_6; }
	inline InternalThread_tA4C58C2A7D15AF43C3E7507375E6D31DBBE7D192 ** get_address_of_internal_thread_6() { return &___internal_thread_6; }
	inline void set_internal_thread_6(InternalThread_tA4C58C2A7D15AF43C3E7507375E6D31DBBE7D192 * value)
	{
		___internal_thread_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___internal_thread_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_ThreadStartArg_7() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___m_ThreadStartArg_7)); }
	inline RuntimeObject * get_m_ThreadStartArg_7() const { return ___m_ThreadStartArg_7; }
	inline RuntimeObject ** get_address_of_m_ThreadStartArg_7() { return &___m_ThreadStartArg_7; }
	inline void set_m_ThreadStartArg_7(RuntimeObject * value)
	{
		___m_ThreadStartArg_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ThreadStartArg_7), (void*)value);
	}

	inline static int32_t get_offset_of_pending_exception_8() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___pending_exception_8)); }
	inline RuntimeObject * get_pending_exception_8() const { return ___pending_exception_8; }
	inline RuntimeObject ** get_address_of_pending_exception_8() { return &___pending_exception_8; }
	inline void set_pending_exception_8(RuntimeObject * value)
	{
		___pending_exception_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pending_exception_8), (void*)value);
	}

	inline static int32_t get_offset_of_principal_9() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___principal_9)); }
	inline RuntimeObject* get_principal_9() const { return ___principal_9; }
	inline RuntimeObject** get_address_of_principal_9() { return &___principal_9; }
	inline void set_principal_9(RuntimeObject* value)
	{
		___principal_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___principal_9), (void*)value);
	}

	inline static int32_t get_offset_of_principal_version_10() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___principal_version_10)); }
	inline int32_t get_principal_version_10() const { return ___principal_version_10; }
	inline int32_t* get_address_of_principal_version_10() { return &___principal_version_10; }
	inline void set_principal_version_10(int32_t value)
	{
		___principal_version_10 = value;
	}

	inline static int32_t get_offset_of_m_Delegate_12() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___m_Delegate_12)); }
	inline MulticastDelegate_t * get_m_Delegate_12() const { return ___m_Delegate_12; }
	inline MulticastDelegate_t ** get_address_of_m_Delegate_12() { return &___m_Delegate_12; }
	inline void set_m_Delegate_12(MulticastDelegate_t * value)
	{
		___m_Delegate_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Delegate_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExecutionContext_13() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___m_ExecutionContext_13)); }
	inline ExecutionContext_t0E11C30308A4CC964D8A2EA9132F9BDCE5362C70 * get_m_ExecutionContext_13() const { return ___m_ExecutionContext_13; }
	inline ExecutionContext_t0E11C30308A4CC964D8A2EA9132F9BDCE5362C70 ** get_address_of_m_ExecutionContext_13() { return &___m_ExecutionContext_13; }
	inline void set_m_ExecutionContext_13(ExecutionContext_t0E11C30308A4CC964D8A2EA9132F9BDCE5362C70 * value)
	{
		___m_ExecutionContext_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ExecutionContext_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExecutionContextBelongsToOuterScope_14() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___m_ExecutionContextBelongsToOuterScope_14)); }
	inline bool get_m_ExecutionContextBelongsToOuterScope_14() const { return ___m_ExecutionContextBelongsToOuterScope_14; }
	inline bool* get_address_of_m_ExecutionContextBelongsToOuterScope_14() { return &___m_ExecutionContextBelongsToOuterScope_14; }
	inline void set_m_ExecutionContextBelongsToOuterScope_14(bool value)
	{
		___m_ExecutionContextBelongsToOuterScope_14 = value;
	}
};

struct Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_StaticFields
{
public:
	// System.LocalDataStoreMgr System.Threading.Thread::s_LocalDataStoreMgr
	LocalDataStoreMgr_t1964DDB9F2BE154BE3159A7507D0D0CCBF8FDCA9 * ___s_LocalDataStoreMgr_0;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentCulture
	AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A * ___s_asyncLocalCurrentCulture_4;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentUICulture
	AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A * ___s_asyncLocalCurrentUICulture_5;

public:
	inline static int32_t get_offset_of_s_LocalDataStoreMgr_0() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_StaticFields, ___s_LocalDataStoreMgr_0)); }
	inline LocalDataStoreMgr_t1964DDB9F2BE154BE3159A7507D0D0CCBF8FDCA9 * get_s_LocalDataStoreMgr_0() const { return ___s_LocalDataStoreMgr_0; }
	inline LocalDataStoreMgr_t1964DDB9F2BE154BE3159A7507D0D0CCBF8FDCA9 ** get_address_of_s_LocalDataStoreMgr_0() { return &___s_LocalDataStoreMgr_0; }
	inline void set_s_LocalDataStoreMgr_0(LocalDataStoreMgr_t1964DDB9F2BE154BE3159A7507D0D0CCBF8FDCA9 * value)
	{
		___s_LocalDataStoreMgr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_LocalDataStoreMgr_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncLocalCurrentCulture_4() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_StaticFields, ___s_asyncLocalCurrentCulture_4)); }
	inline AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A * get_s_asyncLocalCurrentCulture_4() const { return ___s_asyncLocalCurrentCulture_4; }
	inline AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A ** get_address_of_s_asyncLocalCurrentCulture_4() { return &___s_asyncLocalCurrentCulture_4; }
	inline void set_s_asyncLocalCurrentCulture_4(AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A * value)
	{
		___s_asyncLocalCurrentCulture_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_asyncLocalCurrentCulture_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncLocalCurrentUICulture_5() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_StaticFields, ___s_asyncLocalCurrentUICulture_5)); }
	inline AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A * get_s_asyncLocalCurrentUICulture_5() const { return ___s_asyncLocalCurrentUICulture_5; }
	inline AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A ** get_address_of_s_asyncLocalCurrentUICulture_5() { return &___s_asyncLocalCurrentUICulture_5; }
	inline void set_s_asyncLocalCurrentUICulture_5(AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A * value)
	{
		___s_asyncLocalCurrentUICulture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_asyncLocalCurrentUICulture_5), (void*)value);
	}
};

struct Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_ThreadStaticFields
{
public:
	// System.LocalDataStoreHolder System.Threading.Thread::s_LocalDataStore
	LocalDataStoreHolder_tE0636E08496405406FD63190AC51EEB2EE51E304 * ___s_LocalDataStore_1;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentCulture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___m_CurrentCulture_2;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentUICulture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___m_CurrentUICulture_3;
	// System.Threading.Thread System.Threading.Thread::current_thread
	Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * ___current_thread_11;

public:
	inline static int32_t get_offset_of_s_LocalDataStore_1() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_ThreadStaticFields, ___s_LocalDataStore_1)); }
	inline LocalDataStoreHolder_tE0636E08496405406FD63190AC51EEB2EE51E304 * get_s_LocalDataStore_1() const { return ___s_LocalDataStore_1; }
	inline LocalDataStoreHolder_tE0636E08496405406FD63190AC51EEB2EE51E304 ** get_address_of_s_LocalDataStore_1() { return &___s_LocalDataStore_1; }
	inline void set_s_LocalDataStore_1(LocalDataStoreHolder_tE0636E08496405406FD63190AC51EEB2EE51E304 * value)
	{
		___s_LocalDataStore_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_LocalDataStore_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentCulture_2() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_ThreadStaticFields, ___m_CurrentCulture_2)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_m_CurrentCulture_2() const { return ___m_CurrentCulture_2; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_m_CurrentCulture_2() { return &___m_CurrentCulture_2; }
	inline void set_m_CurrentCulture_2(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___m_CurrentCulture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentCulture_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentUICulture_3() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_ThreadStaticFields, ___m_CurrentUICulture_3)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_m_CurrentUICulture_3() const { return ___m_CurrentUICulture_3; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_m_CurrentUICulture_3() { return &___m_CurrentUICulture_3; }
	inline void set_m_CurrentUICulture_3(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___m_CurrentUICulture_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentUICulture_3), (void*)value);
	}

	inline static int32_t get_offset_of_current_thread_11() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_ThreadStaticFields, ___current_thread_11)); }
	inline Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * get_current_thread_11() const { return ___current_thread_11; }
	inline Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 ** get_address_of_current_thread_11() { return &___current_thread_11; }
	inline void set_current_thread_11(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * value)
	{
		___current_thread_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_thread_11), (void*)value);
	}
};


// System.UInt16
struct  UInt16_tAE45CEF73BF720100519F6867F32145D075F928E 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_tAE45CEF73BF720100519F6867F32145D075F928E, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt64
struct  UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};


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


// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct  Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___zeroVector_5)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___oneVector_6)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// Ludiq.OdinSerializer.Utilities.Unsafe.UnsafeUtilities_Struct256Bit
struct  Struct256Bit_tDDE97BD3B8C451085C1BCC7564432921A2B583FF 
{
public:
	// System.Decimal Ludiq.OdinSerializer.Utilities.Unsafe.UnsafeUtilities_Struct256Bit::d1
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___d1_0;
	// System.Decimal Ludiq.OdinSerializer.Utilities.Unsafe.UnsafeUtilities_Struct256Bit::d2
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___d2_1;

public:
	inline static int32_t get_offset_of_d1_0() { return static_cast<int32_t>(offsetof(Struct256Bit_tDDE97BD3B8C451085C1BCC7564432921A2B583FF, ___d1_0)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_d1_0() const { return ___d1_0; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_d1_0() { return &___d1_0; }
	inline void set_d1_0(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___d1_0 = value;
	}

	inline static int32_t get_offset_of_d2_1() { return static_cast<int32_t>(offsetof(Struct256Bit_tDDE97BD3B8C451085C1BCC7564432921A2B583FF, ___d2_1)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_d2_1() const { return ___d2_1; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_d2_1() { return &___d2_1; }
	inline void set_d2_1(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___d2_1 = value;
	}
};


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
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
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

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Reflection.BindingFlags
struct  BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.MethodInfo
struct  MethodInfo_t  : public MethodBase_t
{
public:

public:
};


// System.Runtime.InteropServices.GCHandleType
struct  GCHandleType_t7155EF9CB120186C6753EE17470D37E148CB2EF1 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandleType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GCHandleType_t7155EF9CB120186C6753EE17470D37E148CB2EF1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Ludiq.OdinSerializer.Utilities.TypeExtensions_<GetAllMembers>d__42
struct  U3CGetAllMembersU3Ed__42_t68E5B620E2E2E9C9956B9A66F2AF28E1725A9DA4  : public RuntimeObject
{
public:
	// System.Int32 Ludiq.OdinSerializer.Utilities.TypeExtensions_<GetAllMembers>d__42::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Reflection.MemberInfo Ludiq.OdinSerializer.Utilities.TypeExtensions_<GetAllMembers>d__42::<>2__current
	MemberInfo_t * ___U3CU3E2__current_1;
	// System.Int32 Ludiq.OdinSerializer.Utilities.TypeExtensions_<GetAllMembers>d__42::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Type Ludiq.OdinSerializer.Utilities.TypeExtensions_<GetAllMembers>d__42::type
	Type_t * ___type_3;
	// System.Type Ludiq.OdinSerializer.Utilities.TypeExtensions_<GetAllMembers>d__42::<>3__type
	Type_t * ___U3CU3E3__type_4;
	// System.Reflection.BindingFlags Ludiq.OdinSerializer.Utilities.TypeExtensions_<GetAllMembers>d__42::flags
	int32_t ___flags_5;
	// System.Reflection.BindingFlags Ludiq.OdinSerializer.Utilities.TypeExtensions_<GetAllMembers>d__42::<>3__flags
	int32_t ___U3CU3E3__flags_6;
	// System.Type Ludiq.OdinSerializer.Utilities.TypeExtensions_<GetAllMembers>d__42::<currentType>5__1
	Type_t * ___U3CcurrentTypeU3E5__1_7;
	// System.Reflection.MemberInfo[] Ludiq.OdinSerializer.Utilities.TypeExtensions_<GetAllMembers>d__42::<>7__wrap1
	MemberInfoU5BU5D_t6A57DDAF4E5321D22FB4C021559637EB126BF6B6* ___U3CU3E7__wrap1_8;
	// System.Int32 Ludiq.OdinSerializer.Utilities.TypeExtensions_<GetAllMembers>d__42::<>7__wrap2
	int32_t ___U3CU3E7__wrap2_9;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetAllMembersU3Ed__42_t68E5B620E2E2E9C9956B9A66F2AF28E1725A9DA4, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetAllMembersU3Ed__42_t68E5B620E2E2E9C9956B9A66F2AF28E1725A9DA4, ___U3CU3E2__current_1)); }
	inline MemberInfo_t * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline MemberInfo_t ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(MemberInfo_t * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CGetAllMembersU3Ed__42_t68E5B620E2E2E9C9956B9A66F2AF28E1725A9DA4, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_type_3() { return static_cast<int32_t>(offsetof(U3CGetAllMembersU3Ed__42_t68E5B620E2E2E9C9956B9A66F2AF28E1725A9DA4, ___type_3)); }
	inline Type_t * get_type_3() const { return ___type_3; }
	inline Type_t ** get_address_of_type_3() { return &___type_3; }
	inline void set_type_3(Type_t * value)
	{
		___type_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__type_4() { return static_cast<int32_t>(offsetof(U3CGetAllMembersU3Ed__42_t68E5B620E2E2E9C9956B9A66F2AF28E1725A9DA4, ___U3CU3E3__type_4)); }
	inline Type_t * get_U3CU3E3__type_4() const { return ___U3CU3E3__type_4; }
	inline Type_t ** get_address_of_U3CU3E3__type_4() { return &___U3CU3E3__type_4; }
	inline void set_U3CU3E3__type_4(Type_t * value)
	{
		___U3CU3E3__type_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__type_4), (void*)value);
	}

	inline static int32_t get_offset_of_flags_5() { return static_cast<int32_t>(offsetof(U3CGetAllMembersU3Ed__42_t68E5B620E2E2E9C9956B9A66F2AF28E1725A9DA4, ___flags_5)); }
	inline int32_t get_flags_5() const { return ___flags_5; }
	inline int32_t* get_address_of_flags_5() { return &___flags_5; }
	inline void set_flags_5(int32_t value)
	{
		___flags_5 = value;
	}

	inline static int32_t get_offset_of_U3CU3E3__flags_6() { return static_cast<int32_t>(offsetof(U3CGetAllMembersU3Ed__42_t68E5B620E2E2E9C9956B9A66F2AF28E1725A9DA4, ___U3CU3E3__flags_6)); }
	inline int32_t get_U3CU3E3__flags_6() const { return ___U3CU3E3__flags_6; }
	inline int32_t* get_address_of_U3CU3E3__flags_6() { return &___U3CU3E3__flags_6; }
	inline void set_U3CU3E3__flags_6(int32_t value)
	{
		___U3CU3E3__flags_6 = value;
	}

	inline static int32_t get_offset_of_U3CcurrentTypeU3E5__1_7() { return static_cast<int32_t>(offsetof(U3CGetAllMembersU3Ed__42_t68E5B620E2E2E9C9956B9A66F2AF28E1725A9DA4, ___U3CcurrentTypeU3E5__1_7)); }
	inline Type_t * get_U3CcurrentTypeU3E5__1_7() const { return ___U3CcurrentTypeU3E5__1_7; }
	inline Type_t ** get_address_of_U3CcurrentTypeU3E5__1_7() { return &___U3CcurrentTypeU3E5__1_7; }
	inline void set_U3CcurrentTypeU3E5__1_7(Type_t * value)
	{
		___U3CcurrentTypeU3E5__1_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcurrentTypeU3E5__1_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_8() { return static_cast<int32_t>(offsetof(U3CGetAllMembersU3Ed__42_t68E5B620E2E2E9C9956B9A66F2AF28E1725A9DA4, ___U3CU3E7__wrap1_8)); }
	inline MemberInfoU5BU5D_t6A57DDAF4E5321D22FB4C021559637EB126BF6B6* get_U3CU3E7__wrap1_8() const { return ___U3CU3E7__wrap1_8; }
	inline MemberInfoU5BU5D_t6A57DDAF4E5321D22FB4C021559637EB126BF6B6** get_address_of_U3CU3E7__wrap1_8() { return &___U3CU3E7__wrap1_8; }
	inline void set_U3CU3E7__wrap1_8(MemberInfoU5BU5D_t6A57DDAF4E5321D22FB4C021559637EB126BF6B6* value)
	{
		___U3CU3E7__wrap1_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap1_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap2_9() { return static_cast<int32_t>(offsetof(U3CGetAllMembersU3Ed__42_t68E5B620E2E2E9C9956B9A66F2AF28E1725A9DA4, ___U3CU3E7__wrap2_9)); }
	inline int32_t get_U3CU3E7__wrap2_9() const { return ___U3CU3E7__wrap2_9; }
	inline int32_t* get_address_of_U3CU3E7__wrap2_9() { return &___U3CU3E7__wrap2_9; }
	inline void set_U3CU3E7__wrap2_9(int32_t value)
	{
		___U3CU3E7__wrap2_9 = value;
	}
};


// Ludiq.OdinSerializer.Utilities.TypeExtensions_<GetAllMembers>d__43
struct  U3CGetAllMembersU3Ed__43_tF8A98A5535517B649FB8CBEAAF09E8FBC233950B  : public RuntimeObject
{
public:
	// System.Int32 Ludiq.OdinSerializer.Utilities.TypeExtensions_<GetAllMembers>d__43::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Reflection.MemberInfo Ludiq.OdinSerializer.Utilities.TypeExtensions_<GetAllMembers>d__43::<>2__current
	MemberInfo_t * ___U3CU3E2__current_1;
	// System.Int32 Ludiq.OdinSerializer.Utilities.TypeExtensions_<GetAllMembers>d__43::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Type Ludiq.OdinSerializer.Utilities.TypeExtensions_<GetAllMembers>d__43::type
	Type_t * ___type_3;
	// System.Type Ludiq.OdinSerializer.Utilities.TypeExtensions_<GetAllMembers>d__43::<>3__type
	Type_t * ___U3CU3E3__type_4;
	// System.Reflection.BindingFlags Ludiq.OdinSerializer.Utilities.TypeExtensions_<GetAllMembers>d__43::flags
	int32_t ___flags_5;
	// System.Reflection.BindingFlags Ludiq.OdinSerializer.Utilities.TypeExtensions_<GetAllMembers>d__43::<>3__flags
	int32_t ___U3CU3E3__flags_6;
	// System.String Ludiq.OdinSerializer.Utilities.TypeExtensions_<GetAllMembers>d__43::name
	String_t* ___name_7;
	// System.String Ludiq.OdinSerializer.Utilities.TypeExtensions_<GetAllMembers>d__43::<>3__name
	String_t* ___U3CU3E3__name_8;
	// System.Collections.Generic.IEnumerator`1<System.Reflection.MemberInfo> Ludiq.OdinSerializer.Utilities.TypeExtensions_<GetAllMembers>d__43::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_9;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetAllMembersU3Ed__43_tF8A98A5535517B649FB8CBEAAF09E8FBC233950B, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetAllMembersU3Ed__43_tF8A98A5535517B649FB8CBEAAF09E8FBC233950B, ___U3CU3E2__current_1)); }
	inline MemberInfo_t * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline MemberInfo_t ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(MemberInfo_t * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CGetAllMembersU3Ed__43_tF8A98A5535517B649FB8CBEAAF09E8FBC233950B, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_type_3() { return static_cast<int32_t>(offsetof(U3CGetAllMembersU3Ed__43_tF8A98A5535517B649FB8CBEAAF09E8FBC233950B, ___type_3)); }
	inline Type_t * get_type_3() const { return ___type_3; }
	inline Type_t ** get_address_of_type_3() { return &___type_3; }
	inline void set_type_3(Type_t * value)
	{
		___type_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__type_4() { return static_cast<int32_t>(offsetof(U3CGetAllMembersU3Ed__43_tF8A98A5535517B649FB8CBEAAF09E8FBC233950B, ___U3CU3E3__type_4)); }
	inline Type_t * get_U3CU3E3__type_4() const { return ___U3CU3E3__type_4; }
	inline Type_t ** get_address_of_U3CU3E3__type_4() { return &___U3CU3E3__type_4; }
	inline void set_U3CU3E3__type_4(Type_t * value)
	{
		___U3CU3E3__type_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__type_4), (void*)value);
	}

	inline static int32_t get_offset_of_flags_5() { return static_cast<int32_t>(offsetof(U3CGetAllMembersU3Ed__43_tF8A98A5535517B649FB8CBEAAF09E8FBC233950B, ___flags_5)); }
	inline int32_t get_flags_5() const { return ___flags_5; }
	inline int32_t* get_address_of_flags_5() { return &___flags_5; }
	inline void set_flags_5(int32_t value)
	{
		___flags_5 = value;
	}

	inline static int32_t get_offset_of_U3CU3E3__flags_6() { return static_cast<int32_t>(offsetof(U3CGetAllMembersU3Ed__43_tF8A98A5535517B649FB8CBEAAF09E8FBC233950B, ___U3CU3E3__flags_6)); }
	inline int32_t get_U3CU3E3__flags_6() const { return ___U3CU3E3__flags_6; }
	inline int32_t* get_address_of_U3CU3E3__flags_6() { return &___U3CU3E3__flags_6; }
	inline void set_U3CU3E3__flags_6(int32_t value)
	{
		___U3CU3E3__flags_6 = value;
	}

	inline static int32_t get_offset_of_name_7() { return static_cast<int32_t>(offsetof(U3CGetAllMembersU3Ed__43_tF8A98A5535517B649FB8CBEAAF09E8FBC233950B, ___name_7)); }
	inline String_t* get_name_7() const { return ___name_7; }
	inline String_t** get_address_of_name_7() { return &___name_7; }
	inline void set_name_7(String_t* value)
	{
		___name_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__name_8() { return static_cast<int32_t>(offsetof(U3CGetAllMembersU3Ed__43_tF8A98A5535517B649FB8CBEAAF09E8FBC233950B, ___U3CU3E3__name_8)); }
	inline String_t* get_U3CU3E3__name_8() const { return ___U3CU3E3__name_8; }
	inline String_t** get_address_of_U3CU3E3__name_8() { return &___U3CU3E3__name_8; }
	inline void set_U3CU3E3__name_8(String_t* value)
	{
		___U3CU3E3__name_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__name_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_9() { return static_cast<int32_t>(offsetof(U3CGetAllMembersU3Ed__43_tF8A98A5535517B649FB8CBEAAF09E8FBC233950B, ___U3CU3E7__wrap1_9)); }
	inline RuntimeObject* get_U3CU3E7__wrap1_9() const { return ___U3CU3E7__wrap1_9; }
	inline RuntimeObject** get_address_of_U3CU3E7__wrap1_9() { return &___U3CU3E7__wrap1_9; }
	inline void set_U3CU3E7__wrap1_9(RuntimeObject* value)
	{
		___U3CU3E7__wrap1_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap1_9), (void*)value);
	}
};


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
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

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

// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// Ludiq.OdinSerializer.Utilities.ValueGetter`2<UnityEngine.Object,System.IntPtr>
struct  ValueGetter_2_tF20DFE4637797CF9A6FD6CEEB79F1A9A6DF91B1A  : public MulticastDelegate_t
{
public:

public:
};


// Ludiq.OdinSerializer.Utilities.WeakValueGetter
struct  WeakValueGetter_tA5763EEB4102B42423DEA22F2FE523106F14B643  : public MulticastDelegate_t
{
public:

public:
};


// Ludiq.OdinSerializer.Utilities.WeakValueSetter
struct  WeakValueSetter_t15EA7B7FA91E88F413E0512CCABA3348E83B94BF  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentException
struct  ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.AsyncCallback
struct  AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};


// System.NotSupportedException
struct  NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.MemberInfo[]
struct MemberInfoU5BU5D_t6A57DDAF4E5321D22FB4C021559637EB126BF6B6  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MemberInfo_t * m_Items[1];

public:
	inline MemberInfo_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MemberInfo_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MemberInfo_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MemberInfo_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MemberInfo_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MemberInfo_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
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
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
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
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
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
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// Ludiq.OdinSerializer.Utilities.ValueGetter`2<InstanceType,FieldType> Ludiq.OdinSerializer.Utilities.EmitUtilities::CreateInstanceFieldGetter<System.Object,System.IntPtr>(System.Reflection.FieldInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueGetter_2_t640D8AC75E1EAF823B009C631B88B332B15034C1 * EmitUtilities_CreateInstanceFieldGetter_TisRuntimeObject_TisIntPtr_t_m0E425BF8F1DA7815C12379C13E8DCEF4845CEB1B_gshared (FieldInfo_t * ___fieldInfo0, const RuntimeMethod* method);
// FieldType Ludiq.OdinSerializer.Utilities.ValueGetter`2<System.Object,System.IntPtr>::Invoke(InstanceType&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ValueGetter_2_Invoke_m5C8F26DCBDBADB17D55D8E149C4751D185D1AA83_gshared (ValueGetter_2_t640D8AC75E1EAF823B009C631B88B332B15034C1 * __this, RuntimeObject ** ___instance0, const RuntimeMethod* method);
// System.Void Ludiq.OdinSerializer.BaseDictionaryKeyPathProvider`1<UnityEngine.Vector2>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseDictionaryKeyPathProvider_1__ctor_mDDF4CA5FA8103572F762F49186C6759AFDD1DCE4_gshared (BaseDictionaryKeyPathProvider_1_tB5A2BD91A9D7DC73F11900E0E311FA56800E4494 * __this, const RuntimeMethod* method);
// System.Void Ludiq.OdinSerializer.Serializer`1<System.Single>::WriteValue(T,Ludiq.OdinSerializer.IDataWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_1_WriteValue_m86E725E1508B079D64713F8ECA68875392FE5529_gshared (Serializer_1_tB5154B4A9ADD83AA51ACE4FBB4D5F0602FBBFA6A * __this, float ___value0, RuntimeObject* ___writer1, const RuntimeMethod* method);
// System.Void Ludiq.OdinSerializer.MinimalBaseFormatter`1<UnityEngine.Vector2>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinimalBaseFormatter_1__ctor_m25E0E8BC1FA61D6B170DDAE16E35DCE11FB2121E_gshared (MinimalBaseFormatter_1_t3FEF32251D23D78F0F5718CCF8313661795D0F4F * __this, const RuntimeMethod* method);
// Ludiq.OdinSerializer.Serializer`1<T> Ludiq.OdinSerializer.Serializer::Get<System.Single>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Serializer_1_tB5154B4A9ADD83AA51ACE4FBB4D5F0602FBBFA6A * Serializer_Get_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_m9DCCE8CFFEF171F01BD500D95B42E26011BC77DC_gshared (const RuntimeMethod* method);
// System.Void Ludiq.OdinSerializer.BaseDictionaryKeyPathProvider`1<UnityEngine.Vector3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseDictionaryKeyPathProvider_1__ctor_m5F094D95F603BCD0D8C662174583875DBD3FB40C_gshared (BaseDictionaryKeyPathProvider_1_tE66BE6796D65DC85103E5D644423949DE3FFFA44 * __this, const RuntimeMethod* method);
// System.Void Ludiq.OdinSerializer.MinimalBaseFormatter`1<UnityEngine.Vector3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinimalBaseFormatter_1__ctor_m170B716A39106DD5F885CB36DD4324F3BB9B3E26_gshared (MinimalBaseFormatter_1_tE2EE91A4B8AE5422EA403BCA9F754F9A11C67994 * __this, const RuntimeMethod* method);
// System.Void Ludiq.OdinSerializer.BaseDictionaryKeyPathProvider`1<UnityEngine.Vector4>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseDictionaryKeyPathProvider_1__ctor_m88A5D08C95D7FC76DA3618B1736D513A4D584F58_gshared (BaseDictionaryKeyPathProvider_1_t810148F5A0717BD985DAB0213958177D177D2AE5 * __this, const RuntimeMethod* method);
// System.Void Ludiq.OdinSerializer.MinimalBaseFormatter`1<UnityEngine.Vector4>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinimalBaseFormatter_1__ctor_mBEA12891C161AEDD804540F839473E762DF392AB_gshared (MinimalBaseFormatter_1_tB70FC2FB8F1AE89EB60830477575D52702E1FDE3 * __this, const RuntimeMethod* method);
// System.Void Ludiq.OdinSerializer.MinimalBaseFormatter`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinimalBaseFormatter_1__ctor_m9010B17520E2616CD3A9E5D9AC8BDB83686AEC2D_gshared (MinimalBaseFormatter_1_t7A7BFD2E9E993F61CE8BA5B2628F22733F7D5606 * __this, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * MethodBase_Invoke_m471794D56262D9DB5B5A324883030AB16BD39674 (MethodBase_t * __this, RuntimeObject * ___obj0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___parameters1, const RuntimeMethod* method);
// System.Boolean Ludiq.OdinSerializer.Utilities.TypeExtensions::ImplementsOpenGenericInterface(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeExtensions_ImplementsOpenGenericInterface_mEB8C8B4C6FB9F7D0E14F7634784E47CD636DBE8B (Type_t * ___candidateType0, Type_t * ___openGenericInterfaceType1, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Threading.Thread System.Threading.Thread::get_CurrentThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * Thread_get_CurrentThread_mB7A83CAE2B9A74CEA053196DFD1AF1E7AB30A70E (const RuntimeMethod* method);
// System.Int32 System.Threading.Thread::get_ManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Thread_get_ManagedThreadId_m7FA85162CB00713B94EF5708B19120F791D3AAD1 (Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33 (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * __this, const RuntimeMethod* method);
// System.Void Ludiq.OdinSerializer.Utilities.TypeExtensions/<GetAllMembers>d__42::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllMembersU3Ed__42__ctor_m3CD7A37A1A06BB50155CCC709382313C7451AB1E (U3CGetAllMembersU3Ed__42_t68E5B620E2E2E9C9956B9A66F2AF28E1725A9DA4 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<System.Reflection.MemberInfo> Ludiq.OdinSerializer.Utilities.TypeExtensions/<GetAllMembers>d__42::System.Collections.Generic.IEnumerable<System.Reflection.MemberInfo>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetAllMembersU3Ed__42_System_Collections_Generic_IEnumerableU3CSystem_Reflection_MemberInfoU3E_GetEnumerator_m36AAF0BD9EB425A889D73E123FCD8E3E58D7317B (U3CGetAllMembersU3Ed__42_t68E5B620E2E2E9C9956B9A66F2AF28E1725A9DA4 * __this, const RuntimeMethod* method);
// System.Void Ludiq.OdinSerializer.Utilities.TypeExtensions/<GetAllMembers>d__43::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllMembersU3Ed__43_U3CU3Em__Finally1_m4398A3B829DA2E04A89539516D4B471D1B27580A (U3CGetAllMembersU3Ed__43_tF8A98A5535517B649FB8CBEAAF09E8FBC233950B * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<System.Reflection.MemberInfo> Ludiq.OdinSerializer.Utilities.TypeExtensions::GetAllMembers(System.Type,System.Reflection.BindingFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeExtensions_GetAllMembers_m113793A689AE445A41734228D3E4934BC664E068 (Type_t * ___type0, int32_t ___flags1, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m0BD184A74F453A72376E81CC6CAEE2556B80493E (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void Ludiq.OdinSerializer.Utilities.TypeExtensions/<GetAllMembers>d__43::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllMembersU3Ed__43_System_IDisposable_Dispose_mB7A32713621CAB91BC400D58857B2838AF48A9B3 (U3CGetAllMembersU3Ed__43_tF8A98A5535517B649FB8CBEAAF09E8FBC233950B * __this, const RuntimeMethod* method);
// System.Void Ludiq.OdinSerializer.Utilities.TypeExtensions/<GetAllMembers>d__43::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllMembersU3Ed__43__ctor_m9D96F4D21018AF9A7EE304EA359F9F758C92DEBE (U3CGetAllMembersU3Ed__43_tF8A98A5535517B649FB8CBEAAF09E8FBC233950B * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<System.Reflection.MemberInfo> Ludiq.OdinSerializer.Utilities.TypeExtensions/<GetAllMembers>d__43::System.Collections.Generic.IEnumerable<System.Reflection.MemberInfo>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetAllMembersU3Ed__43_System_Collections_Generic_IEnumerableU3CSystem_Reflection_MemberInfoU3E_GetEnumerator_m024A480FF629D0B90E698EF51556115C140FDD0A (U3CGetAllMembersU3Ed__43_tF8A98A5535517B649FB8CBEAAF09E8FBC233950B * __this, const RuntimeMethod* method);
// System.Void Ludiq.OdinSerializer.Utilities.TypeExtensions/<GetBaseClasses>d__48::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetBaseClassesU3Ed__48__ctor_m1B088EFD85597FC3561C532E4EB65E14B9546918 (U3CGetBaseClassesU3Ed__48_t6A93C122A61B9DAF31979EA6922ADC799C2A9B3E * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<System.Type> Ludiq.OdinSerializer.Utilities.TypeExtensions/<GetBaseClasses>d__48::System.Collections.Generic.IEnumerable<System.Type>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetBaseClassesU3Ed__48_System_Collections_Generic_IEnumerableU3CSystem_TypeU3E_GetEnumerator_mF6DD7024E358B44DD797BA48D883199E07BB1F27 (U3CGetBaseClassesU3Ed__48_t6A93C122A61B9DAF31979EA6922ADC799C2A9B3E * __this, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6 (RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ___handle0, const RuntimeMethod* method);
// Ludiq.OdinSerializer.Utilities.ValueGetter`2<InstanceType,FieldType> Ludiq.OdinSerializer.Utilities.EmitUtilities::CreateInstanceFieldGetter<UnityEngine.Object,System.IntPtr>(System.Reflection.FieldInfo)
inline ValueGetter_2_tF20DFE4637797CF9A6FD6CEEB79F1A9A6DF91B1A * EmitUtilities_CreateInstanceFieldGetter_TisObject_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_TisIntPtr_t_mC2B602FBABF8F9FCD6B2B0B7E2F70A2EC1C0515B (FieldInfo_t * ___fieldInfo0, const RuntimeMethod* method)
{
	return ((  ValueGetter_2_tF20DFE4637797CF9A6FD6CEEB79F1A9A6DF91B1A * (*) (FieldInfo_t *, const RuntimeMethod*))EmitUtilities_CreateInstanceFieldGetter_TisRuntimeObject_TisIntPtr_t_m0E425BF8F1DA7815C12379C13E8DCEF4845CEB1B_gshared)(___fieldInfo0, method);
}
// System.Void System.NotSupportedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mD023A89A5C1F740F43F0A9CD6C49DC21230B3CEE (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * __this, String_t* ___message0, const RuntimeMethod* method);
// FieldType Ludiq.OdinSerializer.Utilities.ValueGetter`2<UnityEngine.Object,System.IntPtr>::Invoke(InstanceType&)
inline intptr_t ValueGetter_2_Invoke_mD53843423A931C3627E41E1780527D7AC5127653 (ValueGetter_2_tF20DFE4637797CF9A6FD6CEEB79F1A9A6DF91B1A * __this, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 ** ___instance0, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (ValueGetter_2_tF20DFE4637797CF9A6FD6CEEB79F1A9A6DF91B1A *, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 **, const RuntimeMethod*))ValueGetter_2_Invoke_m5C8F26DCBDBADB17D55D8E149C4751D185D1AA83_gshared)(__this, ___instance0, method);
}
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.String UnityEngine.Application::get_unityVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_unityVersion_mC66901DE17E8F4F5BCA46CF3A4DCB34AF245CF99 (const RuntimeMethod* method);
// System.String[] System.String::Split(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* String_Split_m13262358217AD2C119FD1B9733C3C0289D608512 (String_t* __this, CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___separator0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF4626905368D6558695A823466A1AF65EADB9923 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Boolean System.Int32::TryParse(System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_TryParse_m03D31CAB7050E8286A8A90711C896B181006AD00 (String_t* ___s0, int32_t* ___result1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m232E857CA5107EA6AC52E7DD7018716C021F237B (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___values0, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m2E1F71C491D2429CC80A28745488FEA947BB7AAC (RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7 (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.String System.String::CreateString(System.Char,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_m0E7BBCE09E386877E2B63BF7FA36B956BF221C93 (String_t* __this, Il2CppChar ___c0, int32_t ___count1, const RuntimeMethod* method);
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object,System.Runtime.InteropServices.GCHandleType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  GCHandle_Alloc_m30DAF14F75E3A692C594965CE6724E2454DE9A2E (RuntimeObject * ___value0, int32_t ___type1, const RuntimeMethod* method);
// System.Int32 System.Runtime.CompilerServices.RuntimeHelpers::get_OffsetToStringData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RuntimeHelpers_get_OffsetToStringData_mF3B79A906181F1A2734590DA161E2AF183853F8B (const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.GCHandle::AddrOfPinnedObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GCHandle_AddrOfPinnedObject_mA20090CB8274F28D087A6E8AD36D3230B6741EA5 (GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 * __this, const RuntimeMethod* method);
// System.Void* System.IntPtr::ToPointer()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void* IntPtr_ToPointer_mC56A17E597E9F767B889DA10DB866F0B96CF0D65_inline (intptr_t* __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.InteropServices.GCHandle::get_IsAllocated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GCHandle_get_IsAllocated_m91323BCB568B1150F90515EF862B00F193E77808 (GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.GCHandle::Free()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GCHandle_Free_m392ECC9B1058E35A0FD5CF21A65F212873FC26F0 (GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 * __this, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline (String_t* __this, const RuntimeMethod* method);
// System.Int32 System.Single::CompareTo(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Single_CompareTo_mFBF2345D81E00F834E558A4ACFD4E5137582DBBC (float* __this, float ___value0, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_m2909B8CF585E1BD0C81E11ACA2F48012156FD5BD (String_t* __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB593C0A320C683E6E47EFFC0A12B7A465E5E43BB (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method);
// System.String System.String::Trim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Trim_mB52EB7876C7132358B76B7DC95DEACA20722EF4D (String_t* __this, const RuntimeMethod* method);
// System.Single System.Single::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Single_Parse_m643ECE18CB0499B2B3EC76C8B941020122003DC6 (String_t* ___s0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72 (const RuntimeMethod* method);
// System.String System.Single::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mCF682C2751EC9B98F1CE5455066B92D7D3356756 (float* __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.String System.String::Replace(System.Char,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_m276641366A463205C185A9B3DC0E24ECB95122C9 (String_t* __this, Il2CppChar ___oldChar0, Il2CppChar ___newChar1, const RuntimeMethod* method);
// System.Void Ludiq.OdinSerializer.BaseDictionaryKeyPathProvider`1<UnityEngine.Vector2>::.ctor()
inline void BaseDictionaryKeyPathProvider_1__ctor_mDDF4CA5FA8103572F762F49186C6759AFDD1DCE4 (BaseDictionaryKeyPathProvider_1_tB5A2BD91A9D7DC73F11900E0E311FA56800E4494 * __this, const RuntimeMethod* method)
{
	((  void (*) (BaseDictionaryKeyPathProvider_1_tB5A2BD91A9D7DC73F11900E0E311FA56800E4494 *, const RuntimeMethod*))BaseDictionaryKeyPathProvider_1__ctor_mDDF4CA5FA8103572F762F49186C6759AFDD1DCE4_gshared)(__this, method);
}
// System.Void Ludiq.OdinSerializer.Serializer`1<System.Single>::WriteValue(T,Ludiq.OdinSerializer.IDataWriter)
inline void Serializer_1_WriteValue_m86E725E1508B079D64713F8ECA68875392FE5529 (Serializer_1_tB5154B4A9ADD83AA51ACE4FBB4D5F0602FBBFA6A * __this, float ___value0, RuntimeObject* ___writer1, const RuntimeMethod* method)
{
	((  void (*) (Serializer_1_tB5154B4A9ADD83AA51ACE4FBB4D5F0602FBBFA6A *, float, RuntimeObject*, const RuntimeMethod*))Serializer_1_WriteValue_m86E725E1508B079D64713F8ECA68875392FE5529_gshared)(__this, ___value0, ___writer1, method);
}
// System.Void Ludiq.OdinSerializer.MinimalBaseFormatter`1<UnityEngine.Vector2>::.ctor()
inline void MinimalBaseFormatter_1__ctor_m25E0E8BC1FA61D6B170DDAE16E35DCE11FB2121E (MinimalBaseFormatter_1_t3FEF32251D23D78F0F5718CCF8313661795D0F4F * __this, const RuntimeMethod* method)
{
	((  void (*) (MinimalBaseFormatter_1_t3FEF32251D23D78F0F5718CCF8313661795D0F4F *, const RuntimeMethod*))MinimalBaseFormatter_1__ctor_m25E0E8BC1FA61D6B170DDAE16E35DCE11FB2121E_gshared)(__this, method);
}
// Ludiq.OdinSerializer.Serializer`1<T> Ludiq.OdinSerializer.Serializer::Get<System.Single>()
inline Serializer_1_tB5154B4A9ADD83AA51ACE4FBB4D5F0602FBBFA6A * Serializer_Get_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_m9DCCE8CFFEF171F01BD500D95B42E26011BC77DC (const RuntimeMethod* method)
{
	return ((  Serializer_1_tB5154B4A9ADD83AA51ACE4FBB4D5F0602FBBFA6A * (*) (const RuntimeMethod*))Serializer_Get_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_m9DCCE8CFFEF171F01BD500D95B42E26011BC77DC_gshared)(method);
}
// System.Int32 System.String::IndexOf(System.Char,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_m66F6178DB4B2F61F4FAFD8B75787D0AB142ADD7D (String_t* __this, Il2CppChar ___value0, int32_t ___startIndex1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void Ludiq.OdinSerializer.BaseDictionaryKeyPathProvider`1<UnityEngine.Vector3>::.ctor()
inline void BaseDictionaryKeyPathProvider_1__ctor_m5F094D95F603BCD0D8C662174583875DBD3FB40C (BaseDictionaryKeyPathProvider_1_tE66BE6796D65DC85103E5D644423949DE3FFFA44 * __this, const RuntimeMethod* method)
{
	((  void (*) (BaseDictionaryKeyPathProvider_1_tE66BE6796D65DC85103E5D644423949DE3FFFA44 *, const RuntimeMethod*))BaseDictionaryKeyPathProvider_1__ctor_m5F094D95F603BCD0D8C662174583875DBD3FB40C_gshared)(__this, method);
}
// System.Void Ludiq.OdinSerializer.MinimalBaseFormatter`1<UnityEngine.Vector3>::.ctor()
inline void MinimalBaseFormatter_1__ctor_m170B716A39106DD5F885CB36DD4324F3BB9B3E26 (MinimalBaseFormatter_1_tE2EE91A4B8AE5422EA403BCA9F754F9A11C67994 * __this, const RuntimeMethod* method)
{
	((  void (*) (MinimalBaseFormatter_1_tE2EE91A4B8AE5422EA403BCA9F754F9A11C67994 *, const RuntimeMethod*))MinimalBaseFormatter_1__ctor_m170B716A39106DD5F885CB36DD4324F3BB9B3E26_gshared)(__this, method);
}
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector4__ctor_m545458525879607A5392A10B175D0C19B2BC715D (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method);
// System.Void Ludiq.OdinSerializer.BaseDictionaryKeyPathProvider`1<UnityEngine.Vector4>::.ctor()
inline void BaseDictionaryKeyPathProvider_1__ctor_m88A5D08C95D7FC76DA3618B1736D513A4D584F58 (BaseDictionaryKeyPathProvider_1_t810148F5A0717BD985DAB0213958177D177D2AE5 * __this, const RuntimeMethod* method)
{
	((  void (*) (BaseDictionaryKeyPathProvider_1_t810148F5A0717BD985DAB0213958177D177D2AE5 *, const RuntimeMethod*))BaseDictionaryKeyPathProvider_1__ctor_m88A5D08C95D7FC76DA3618B1736D513A4D584F58_gshared)(__this, method);
}
// System.Void Ludiq.OdinSerializer.MinimalBaseFormatter`1<UnityEngine.Vector4>::.ctor()
inline void MinimalBaseFormatter_1__ctor_mBEA12891C161AEDD804540F839473E762DF392AB (MinimalBaseFormatter_1_tB70FC2FB8F1AE89EB60830477575D52702E1FDE3 * __this, const RuntimeMethod* method)
{
	((  void (*) (MinimalBaseFormatter_1_tB70FC2FB8F1AE89EB60830477575D52702E1FDE3 *, const RuntimeMethod*))MinimalBaseFormatter_1__ctor_mBEA12891C161AEDD804540F839473E762DF392AB_gshared)(__this, method);
}
// System.Void System.Version::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Version__ctor_mFA5AABF2294D59FA7B3F32BB48CB238BCACBDF80 (Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * __this, int32_t ___major0, int32_t ___minor1, int32_t ___build2, int32_t ___revision3, const RuntimeMethod* method);
// System.Int32 System.Version::get_Major()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t Version_get_Major_m7A6BEEF367674B8C06B15F6675AFF0C32CCEE87C_inline (Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * __this, const RuntimeMethod* method);
// System.Int32 System.Version::get_Minor()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t Version_get_Minor_mCBAFA7052D1786A47B4BA971E7193A4EB9A7D059_inline (Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * __this, const RuntimeMethod* method);
// System.Int32 System.Version::get_Build()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t Version_get_Build_m184E3AAE13518CEA172E9C6860E9359D567E64DB_inline (Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * __this, const RuntimeMethod* method);
// System.Int32 System.Version::get_Revision()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t Version_get_Revision_mB0BADD4E233FA3001FB7BB4795A0A330880453BB_inline (Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * __this, const RuntimeMethod* method);
// System.Void Ludiq.OdinSerializer.MinimalBaseFormatter`1<System.Version>::.ctor()
inline void MinimalBaseFormatter_1__ctor_mB1C34FCE002A775AB36373BFEF82C410D2107554 (MinimalBaseFormatter_1_tF12994EA9D174D87E4F68634C0C3600E58272E55 * __this, const RuntimeMethod* method)
{
	((  void (*) (MinimalBaseFormatter_1_tF12994EA9D174D87E4F68634C0C3600E58272E55 *, const RuntimeMethod*))MinimalBaseFormatter_1__ctor_m9010B17520E2616CD3A9E5D9AC8BDB83686AEC2D_gshared)(__this, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Ludiq.OdinSerializer.Utilities.TypeExtensions_<>c__DisplayClass22_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass22_0__ctor_m4425FAB1883C8C3DE2E9613A8EF5B86B98ACFE70 (U3CU3Ec__DisplayClass22_0_t734F8858DFA873056131FD471FF4ED3DA5277437 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object Ludiq.OdinSerializer.Utilities.TypeExtensions_<>c__DisplayClass22_0::<GetCastMethodDelegate>b__0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec__DisplayClass22_0_U3CGetCastMethodDelegateU3Eb__0_mCC4BEFF57F3E182286462CBDDC43EAB184106F31 (U3CU3Ec__DisplayClass22_0_t734F8858DFA873056131FD471FF4ED3DA5277437 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass22_0_U3CGetCastMethodDelegateU3Eb__0_mCC4BEFF57F3E182286462CBDDC43EAB184106F31_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodInfo_t * L_0 = __this->get_method_0();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = L_1;
		RuntimeObject * L_3 = ___obj0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		NullCheck(L_0);
		RuntimeObject * L_4 = MethodBase_Invoke_m471794D56262D9DB5B5A324883030AB16BD39674(L_0, NULL, L_2, /*hidden argument*/NULL);
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
// System.Void Ludiq.OdinSerializer.Utilities.TypeExtensions_<>c__DisplayClass35_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass35_0__ctor_m259320E3C9E0C3B00E20DF178A422CAF9AE2B0FC (U3CU3Ec__DisplayClass35_0_t526AC3F36F6B204BC4F69FEEA03AC1F1940247D2 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Ludiq.OdinSerializer.Utilities.TypeExtensions_<>c__DisplayClass35_0::<ImplementsOpenGenericInterface>b__0(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass35_0_U3CImplementsOpenGenericInterfaceU3Eb__0_m330357036B4B454753E86EB1232CFF5B8AAB9FC9 (U3CU3Ec__DisplayClass35_0_t526AC3F36F6B204BC4F69FEEA03AC1F1940247D2 * __this, Type_t * ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass35_0_U3CImplementsOpenGenericInterfaceU3Eb__0_m330357036B4B454753E86EB1232CFF5B8AAB9FC9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t * L_0 = ___i0;
		NullCheck(L_0);
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(81 /* System.Boolean System.Type::get_IsGenericType() */, L_0);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		Type_t * L_2 = ___i0;
		Type_t * L_3 = __this->get_openGenericInterfaceType_0();
		IL2CPP_RUNTIME_CLASS_INIT(TypeExtensions_t65A31AE2B07ADFEAA80E7287D95B2E95D5C374F8_il2cpp_TypeInfo_var);
		bool L_4 = TypeExtensions_ImplementsOpenGenericInterface_mEB8C8B4C6FB9F7D0E14F7634784E47CD636DBE8B(L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0015:
	{
		return (bool)0;
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
// System.Void Ludiq.OdinSerializer.Utilities.TypeExtensions_<>c__DisplayClass40_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass40_0__ctor_mCBDD44F584D820B68AA2A0BEE0728231D4109AA5 (U3CU3Ec__DisplayClass40_0_tB2769865F46220037F929292B4B4846936CEB73C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Ludiq.OdinSerializer.Utilities.TypeExtensions_<>c__DisplayClass40_0::<GetOperatorMethod>b__0(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass40_0_U3CGetOperatorMethodU3Eb__0_m35D49F346D94FA470C8DF55F86B1FC2069CE12C1 (U3CU3Ec__DisplayClass40_0_tB2769865F46220037F929292B4B4846936CEB73C * __this, MethodInfo_t * ___m0, const RuntimeMethod* method)
{
	{
		MethodInfo_t * L_0 = ___m0;
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		String_t* L_2 = __this->get_methodName_0();
		bool L_3 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_1, L_2, /*hidden argument*/NULL);
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
// System.Void Ludiq.OdinSerializer.Utilities.TypeExtensions_<>c__DisplayClass41_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass41_0__ctor_m64968F549BC0326C1BEDE001700869B73CBB4468 (U3CU3Ec__DisplayClass41_0_t7C518137717CF4AFE071953FCD0AA08BE9CB214F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Ludiq.OdinSerializer.Utilities.TypeExtensions_<>c__DisplayClass41_0::<GetOperatorMethods>b__0(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass41_0_U3CGetOperatorMethodsU3Eb__0_m06B8591EC6D1FBF0402A39F6E6E46D4C4CA786F7 (U3CU3Ec__DisplayClass41_0_t7C518137717CF4AFE071953FCD0AA08BE9CB214F * __this, MethodInfo_t * ___x0, const RuntimeMethod* method)
{
	{
		MethodInfo_t * L_0 = ___x0;
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		String_t* L_2 = __this->get_methodName_0();
		bool L_3 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_1, L_2, /*hidden argument*/NULL);
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
// System.Void Ludiq.OdinSerializer.Utilities.TypeExtensions_<GetAllMembers>d__42::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllMembersU3Ed__42__ctor_m3CD7A37A1A06BB50155CCC709382313C7451AB1E (U3CGetAllMembersU3Ed__42_t68E5B620E2E2E9C9956B9A66F2AF28E1725A9DA4 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * L_1 = Thread_get_CurrentThread_mB7A83CAE2B9A74CEA053196DFD1AF1E7AB30A70E(/*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = Thread_get_ManagedThreadId_m7FA85162CB00713B94EF5708B19120F791D3AAD1(L_1, /*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_2);
		return;
	}
}
// System.Void Ludiq.OdinSerializer.Utilities.TypeExtensions_<GetAllMembers>d__42::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllMembersU3Ed__42_System_IDisposable_Dispose_m0F89E9234FBC29EFA31E5A2492C240922FA302ED (U3CGetAllMembersU3Ed__42_t68E5B620E2E2E9C9956B9A66F2AF28E1725A9DA4 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Ludiq.OdinSerializer.Utilities.TypeExtensions_<GetAllMembers>d__42::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetAllMembersU3Ed__42_MoveNext_m791E4D8747B43DADE170F3CBB6CEE8BD40257C76 (U3CGetAllMembersU3Ed__42_t68E5B620E2E2E9C9956B9A66F2AF28E1725A9DA4 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	MemberInfo_t * V_1 = NULL;
	MemberInfo_t * V_2 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_0077;
			}
			case 2:
			{
				goto IL_00f4;
			}
		}
	}
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->set_U3CU3E1__state_0((-1));
		Type_t * L_2 = __this->get_type_3();
		__this->set_U3CcurrentTypeU3E5__1_7(L_2);
		int32_t L_3 = __this->get_flags_5();
		if ((!(((uint32_t)((int32_t)((int32_t)L_3&(int32_t)2))) == ((uint32_t)2))))
		{
			goto IL_00a8;
		}
	}
	{
		Type_t * L_4 = __this->get_U3CcurrentTypeU3E5__1_7();
		int32_t L_5 = __this->get_flags_5();
		NullCheck(L_4);
		MemberInfoU5BU5D_t6A57DDAF4E5321D22FB4C021559637EB126BF6B6* L_6 = VirtFuncInvoker1< MemberInfoU5BU5D_t6A57DDAF4E5321D22FB4C021559637EB126BF6B6*, int32_t >::Invoke(62 /* System.Reflection.MemberInfo[] System.Type::GetMembers(System.Reflection.BindingFlags) */, L_4, L_5);
		__this->set_U3CU3E7__wrap1_8(L_6);
		__this->set_U3CU3E7__wrap2_9(0);
		goto IL_008c;
	}

IL_0059:
	{
		MemberInfoU5BU5D_t6A57DDAF4E5321D22FB4C021559637EB126BF6B6* L_7 = __this->get_U3CU3E7__wrap1_8();
		int32_t L_8 = __this->get_U3CU3E7__wrap2_9();
		NullCheck(L_7);
		int32_t L_9 = L_8;
		MemberInfo_t * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_1 = L_10;
		MemberInfo_t * L_11 = V_1;
		__this->set_U3CU3E2__current_1(L_11);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0077:
	{
		__this->set_U3CU3E1__state_0((-1));
		int32_t L_12 = __this->get_U3CU3E7__wrap2_9();
		__this->set_U3CU3E7__wrap2_9(((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1)));
	}

IL_008c:
	{
		int32_t L_13 = __this->get_U3CU3E7__wrap2_9();
		MemberInfoU5BU5D_t6A57DDAF4E5321D22FB4C021559637EB126BF6B6* L_14 = __this->get_U3CU3E7__wrap1_8();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))))
		{
			goto IL_0059;
		}
	}
	{
		__this->set_U3CU3E7__wrap1_8((MemberInfoU5BU5D_t6A57DDAF4E5321D22FB4C021559637EB126BF6B6*)NULL);
		goto IL_013c;
	}

IL_00a8:
	{
		int32_t L_15 = __this->get_flags_5();
		__this->set_flags_5(((int32_t)((int32_t)L_15|(int32_t)2)));
	}

IL_00b6:
	{
		Type_t * L_16 = __this->get_U3CcurrentTypeU3E5__1_7();
		int32_t L_17 = __this->get_flags_5();
		NullCheck(L_16);
		MemberInfoU5BU5D_t6A57DDAF4E5321D22FB4C021559637EB126BF6B6* L_18 = VirtFuncInvoker1< MemberInfoU5BU5D_t6A57DDAF4E5321D22FB4C021559637EB126BF6B6*, int32_t >::Invoke(62 /* System.Reflection.MemberInfo[] System.Type::GetMembers(System.Reflection.BindingFlags) */, L_16, L_17);
		__this->set_U3CU3E7__wrap1_8(L_18);
		__this->set_U3CU3E7__wrap2_9(0);
		goto IL_0109;
	}

IL_00d6:
	{
		MemberInfoU5BU5D_t6A57DDAF4E5321D22FB4C021559637EB126BF6B6* L_19 = __this->get_U3CU3E7__wrap1_8();
		int32_t L_20 = __this->get_U3CU3E7__wrap2_9();
		NullCheck(L_19);
		int32_t L_21 = L_20;
		MemberInfo_t * L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		V_2 = L_22;
		MemberInfo_t * L_23 = V_2;
		__this->set_U3CU3E2__current_1(L_23);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_00f4:
	{
		__this->set_U3CU3E1__state_0((-1));
		int32_t L_24 = __this->get_U3CU3E7__wrap2_9();
		__this->set_U3CU3E7__wrap2_9(((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1)));
	}

IL_0109:
	{
		int32_t L_25 = __this->get_U3CU3E7__wrap2_9();
		MemberInfoU5BU5D_t6A57DDAF4E5321D22FB4C021559637EB126BF6B6* L_26 = __this->get_U3CU3E7__wrap1_8();
		NullCheck(L_26);
		if ((((int32_t)L_25) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_26)->max_length)))))))
		{
			goto IL_00d6;
		}
	}
	{
		__this->set_U3CU3E7__wrap1_8((MemberInfoU5BU5D_t6A57DDAF4E5321D22FB4C021559637EB126BF6B6*)NULL);
		Type_t * L_27 = __this->get_U3CcurrentTypeU3E5__1_7();
		NullCheck(L_27);
		Type_t * L_28 = VirtFuncInvoker0< Type_t * >::Invoke(29 /* System.Type System.Type::get_BaseType() */, L_27);
		__this->set_U3CcurrentTypeU3E5__1_7(L_28);
		Type_t * L_29 = __this->get_U3CcurrentTypeU3E5__1_7();
		if (L_29)
		{
			goto IL_00b6;
		}
	}

IL_013c:
	{
		return (bool)0;
	}
}
// System.Reflection.MemberInfo Ludiq.OdinSerializer.Utilities.TypeExtensions_<GetAllMembers>d__42::System.Collections.Generic.IEnumerator<System.Reflection.MemberInfo>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MemberInfo_t * U3CGetAllMembersU3Ed__42_System_Collections_Generic_IEnumeratorU3CSystem_Reflection_MemberInfoU3E_get_Current_mF10B3484F7632252DA5CBBFAC2885897F12950C3 (U3CGetAllMembersU3Ed__42_t68E5B620E2E2E9C9956B9A66F2AF28E1725A9DA4 * __this, const RuntimeMethod* method)
{
	{
		MemberInfo_t * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Ludiq.OdinSerializer.Utilities.TypeExtensions_<GetAllMembers>d__42::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllMembersU3Ed__42_System_Collections_IEnumerator_Reset_mABCF2C71FA03FED987843D90800F8A5F8A19D4C0 (U3CGetAllMembersU3Ed__42_t68E5B620E2E2E9C9956B9A66F2AF28E1725A9DA4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetAllMembersU3Ed__42_System_Collections_IEnumerator_Reset_mABCF2C71FA03FED987843D90800F8A5F8A19D4C0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CGetAllMembersU3Ed__42_System_Collections_IEnumerator_Reset_mABCF2C71FA03FED987843D90800F8A5F8A19D4C0_RuntimeMethod_var);
	}
}
// System.Object Ludiq.OdinSerializer.Utilities.TypeExtensions_<GetAllMembers>d__42::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetAllMembersU3Ed__42_System_Collections_IEnumerator_get_Current_m6C1FDDD2B43378DC03B0D157CDFD11B54D000297 (U3CGetAllMembersU3Ed__42_t68E5B620E2E2E9C9956B9A66F2AF28E1725A9DA4 * __this, const RuntimeMethod* method)
{
	{
		MemberInfo_t * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Reflection.MemberInfo> Ludiq.OdinSerializer.Utilities.TypeExtensions_<GetAllMembers>d__42::System.Collections.Generic.IEnumerable<System.Reflection.MemberInfo>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetAllMembersU3Ed__42_System_Collections_Generic_IEnumerableU3CSystem_Reflection_MemberInfoU3E_GetEnumerator_m36AAF0BD9EB425A889D73E123FCD8E3E58D7317B (U3CGetAllMembersU3Ed__42_t68E5B620E2E2E9C9956B9A66F2AF28E1725A9DA4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetAllMembersU3Ed__42_System_Collections_Generic_IEnumerableU3CSystem_Reflection_MemberInfoU3E_GetEnumerator_m36AAF0BD9EB425A889D73E123FCD8E3E58D7317B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetAllMembersU3Ed__42_t68E5B620E2E2E9C9956B9A66F2AF28E1725A9DA4 * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * L_2 = Thread_get_CurrentThread_mB7A83CAE2B9A74CEA053196DFD1AF1E7AB30A70E(/*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = Thread_get_ManagedThreadId_m7FA85162CB00713B94EF5708B19120F791D3AAD1(L_2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_0027;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_002e;
	}

IL_0027:
	{
		U3CGetAllMembersU3Ed__42_t68E5B620E2E2E9C9956B9A66F2AF28E1725A9DA4 * L_4 = (U3CGetAllMembersU3Ed__42_t68E5B620E2E2E9C9956B9A66F2AF28E1725A9DA4 *)il2cpp_codegen_object_new(U3CGetAllMembersU3Ed__42_t68E5B620E2E2E9C9956B9A66F2AF28E1725A9DA4_il2cpp_TypeInfo_var);
		U3CGetAllMembersU3Ed__42__ctor_m3CD7A37A1A06BB50155CCC709382313C7451AB1E(L_4, 0, /*hidden argument*/NULL);
		V_0 = L_4;
	}

IL_002e:
	{
		U3CGetAllMembersU3Ed__42_t68E5B620E2E2E9C9956B9A66F2AF28E1725A9DA4 * L_5 = V_0;
		Type_t * L_6 = __this->get_U3CU3E3__type_4();
		NullCheck(L_5);
		L_5->set_type_3(L_6);
		U3CGetAllMembersU3Ed__42_t68E5B620E2E2E9C9956B9A66F2AF28E1725A9DA4 * L_7 = V_0;
		int32_t L_8 = __this->get_U3CU3E3__flags_6();
		NullCheck(L_7);
		L_7->set_flags_5(L_8);
		U3CGetAllMembersU3Ed__42_t68E5B620E2E2E9C9956B9A66F2AF28E1725A9DA4 * L_9 = V_0;
		return L_9;
	}
}
// System.Collections.IEnumerator Ludiq.OdinSerializer.Utilities.TypeExtensions_<GetAllMembers>d__42::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetAllMembersU3Ed__42_System_Collections_IEnumerable_GetEnumerator_m068E424C2E42BC8FC4E974B4ECD5CD5DE27FD17A (U3CGetAllMembersU3Ed__42_t68E5B620E2E2E9C9956B9A66F2AF28E1725A9DA4 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = U3CGetAllMembersU3Ed__42_System_Collections_Generic_IEnumerableU3CSystem_Reflection_MemberInfoU3E_GetEnumerator_m36AAF0BD9EB425A889D73E123FCD8E3E58D7317B(__this, /*hidden argument*/NULL);
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
// System.Void Ludiq.OdinSerializer.Utilities.TypeExtensions_<GetAllMembers>d__43::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllMembersU3Ed__43__ctor_m9D96F4D21018AF9A7EE304EA359F9F758C92DEBE (U3CGetAllMembersU3Ed__43_tF8A98A5535517B649FB8CBEAAF09E8FBC233950B * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * L_1 = Thread_get_CurrentThread_mB7A83CAE2B9A74CEA053196DFD1AF1E7AB30A70E(/*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = Thread_get_ManagedThreadId_m7FA85162CB00713B94EF5708B19120F791D3AAD1(L_1, /*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_2);
		return;
	}
}
// System.Void Ludiq.OdinSerializer.Utilities.TypeExtensions_<GetAllMembers>d__43::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllMembersU3Ed__43_System_IDisposable_Dispose_mB7A32713621CAB91BC400D58857B2838AF48A9B3 (U3CGetAllMembersU3Ed__43_tF8A98A5535517B649FB8CBEAAF09E8FBC233950B * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x1A, FINALLY_0013);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0013;
	}

FINALLY_0013:
	{ // begin finally (depth: 1)
		U3CGetAllMembersU3Ed__43_U3CU3Em__Finally1_m4398A3B829DA2E04A89539516D4B471D1B27580A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(19)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(19)
	{
		IL2CPP_JUMP_TBL(0x1A, IL_001a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean Ludiq.OdinSerializer.Utilities.TypeExtensions_<GetAllMembers>d__43::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetAllMembersU3Ed__43_MoveNext_m8644AC5C1A26810B4C31A5D8BBB366807C618C89 (U3CGetAllMembersU3Ed__43_tF8A98A5535517B649FB8CBEAAF09E8FBC233950B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetAllMembersU3Ed__43_MoveNext_m8644AC5C1A26810B4C31A5D8BBB366807C618C89_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	MemberInfo_t * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			int32_t L_1 = V_1;
			if (!L_1)
			{
				goto IL_0015;
			}
		}

IL_000a:
		{
			int32_t L_2 = V_1;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_0073;
			}
		}

IL_000e:
		{
			V_0 = (bool)0;
			goto IL_00a0;
		}

IL_0015:
		{
			__this->set_U3CU3E1__state_0((-1));
			Type_t * L_3 = __this->get_type_3();
			int32_t L_4 = __this->get_flags_5();
			IL2CPP_RUNTIME_CLASS_INIT(TypeExtensions_t65A31AE2B07ADFEAA80E7287D95B2E95D5C374F8_il2cpp_TypeInfo_var);
			RuntimeObject* L_5 = TypeExtensions_GetAllMembers_m113793A689AE445A41734228D3E4934BC664E068(L_3, L_4, /*hidden argument*/NULL);
			NullCheck(L_5);
			RuntimeObject* L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Reflection.MemberInfo>::GetEnumerator() */, IEnumerable_1_t7FD352CD84740777D0C2732F0F63D13741D636BB_il2cpp_TypeInfo_var, L_5);
			__this->set_U3CU3E7__wrap1_9(L_6);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			goto IL_007b;
		}

IL_0042:
		{
			RuntimeObject* L_7 = __this->get_U3CU3E7__wrap1_9();
			NullCheck(L_7);
			MemberInfo_t * L_8 = InterfaceFuncInvoker0< MemberInfo_t * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Reflection.MemberInfo>::get_Current() */, IEnumerator_1_t2D9BC58107505273DB7B0FC53358697221FA5831_il2cpp_TypeInfo_var, L_7);
			V_2 = L_8;
			MemberInfo_t * L_9 = V_2;
			NullCheck(L_9);
			String_t* L_10 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_9);
			String_t* L_11 = __this->get_name_7();
			bool L_12 = String_op_Inequality_m0BD184A74F453A72376E81CC6CAEE2556B80493E(L_10, L_11, /*hidden argument*/NULL);
			if (L_12)
			{
				goto IL_007b;
			}
		}

IL_0061:
		{
			MemberInfo_t * L_13 = V_2;
			__this->set_U3CU3E2__current_1(L_13);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_00a0;
		}

IL_0073:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
		}

IL_007b:
		{
			RuntimeObject* L_14 = __this->get_U3CU3E7__wrap1_9();
			NullCheck(L_14);
			bool L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_14);
			if (L_15)
			{
				goto IL_0042;
			}
		}

IL_0088:
		{
			U3CGetAllMembersU3Ed__43_U3CU3Em__Finally1_m4398A3B829DA2E04A89539516D4B471D1B27580A(__this, /*hidden argument*/NULL);
			__this->set_U3CU3E7__wrap1_9((RuntimeObject*)NULL);
			V_0 = (bool)0;
			goto IL_00a0;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_0099;
	}

FAULT_0099:
	{ // begin fault (depth: 1)
		U3CGetAllMembersU3Ed__43_System_IDisposable_Dispose_mB7A32713621CAB91BC400D58857B2838AF48A9B3(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(153)
	} // end fault
	IL2CPP_CLEANUP(153)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00a0:
	{
		bool L_16 = V_0;
		return L_16;
	}
}
// System.Void Ludiq.OdinSerializer.Utilities.TypeExtensions_<GetAllMembers>d__43::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllMembersU3Ed__43_U3CU3Em__Finally1_m4398A3B829DA2E04A89539516D4B471D1B27580A (U3CGetAllMembersU3Ed__43_tF8A98A5535517B649FB8CBEAAF09E8FBC233950B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetAllMembersU3Ed__43_U3CU3Em__Finally1_m4398A3B829DA2E04A89539516D4B471D1B27580A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		RuntimeObject* L_0 = __this->get_U3CU3E7__wrap1_9();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_U3CU3E7__wrap1_9();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Reflection.MemberInfo Ludiq.OdinSerializer.Utilities.TypeExtensions_<GetAllMembers>d__43::System.Collections.Generic.IEnumerator<System.Reflection.MemberInfo>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MemberInfo_t * U3CGetAllMembersU3Ed__43_System_Collections_Generic_IEnumeratorU3CSystem_Reflection_MemberInfoU3E_get_Current_m2B6BA6AF3FE5BB847E6458E61C229AF23F4F15DE (U3CGetAllMembersU3Ed__43_tF8A98A5535517B649FB8CBEAAF09E8FBC233950B * __this, const RuntimeMethod* method)
{
	{
		MemberInfo_t * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Ludiq.OdinSerializer.Utilities.TypeExtensions_<GetAllMembers>d__43::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllMembersU3Ed__43_System_Collections_IEnumerator_Reset_mC998C56191C7160B92ACBF33B60FF6005BB77ADF (U3CGetAllMembersU3Ed__43_tF8A98A5535517B649FB8CBEAAF09E8FBC233950B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetAllMembersU3Ed__43_System_Collections_IEnumerator_Reset_mC998C56191C7160B92ACBF33B60FF6005BB77ADF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CGetAllMembersU3Ed__43_System_Collections_IEnumerator_Reset_mC998C56191C7160B92ACBF33B60FF6005BB77ADF_RuntimeMethod_var);
	}
}
// System.Object Ludiq.OdinSerializer.Utilities.TypeExtensions_<GetAllMembers>d__43::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetAllMembersU3Ed__43_System_Collections_IEnumerator_get_Current_mCA3C86707EB49BBAFCFE85F40CEAD6180D178258 (U3CGetAllMembersU3Ed__43_tF8A98A5535517B649FB8CBEAAF09E8FBC233950B * __this, const RuntimeMethod* method)
{
	{
		MemberInfo_t * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Reflection.MemberInfo> Ludiq.OdinSerializer.Utilities.TypeExtensions_<GetAllMembers>d__43::System.Collections.Generic.IEnumerable<System.Reflection.MemberInfo>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetAllMembersU3Ed__43_System_Collections_Generic_IEnumerableU3CSystem_Reflection_MemberInfoU3E_GetEnumerator_m024A480FF629D0B90E698EF51556115C140FDD0A (U3CGetAllMembersU3Ed__43_tF8A98A5535517B649FB8CBEAAF09E8FBC233950B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetAllMembersU3Ed__43_System_Collections_Generic_IEnumerableU3CSystem_Reflection_MemberInfoU3E_GetEnumerator_m024A480FF629D0B90E698EF51556115C140FDD0A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetAllMembersU3Ed__43_tF8A98A5535517B649FB8CBEAAF09E8FBC233950B * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * L_2 = Thread_get_CurrentThread_mB7A83CAE2B9A74CEA053196DFD1AF1E7AB30A70E(/*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = Thread_get_ManagedThreadId_m7FA85162CB00713B94EF5708B19120F791D3AAD1(L_2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_0027;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_002e;
	}

IL_0027:
	{
		U3CGetAllMembersU3Ed__43_tF8A98A5535517B649FB8CBEAAF09E8FBC233950B * L_4 = (U3CGetAllMembersU3Ed__43_tF8A98A5535517B649FB8CBEAAF09E8FBC233950B *)il2cpp_codegen_object_new(U3CGetAllMembersU3Ed__43_tF8A98A5535517B649FB8CBEAAF09E8FBC233950B_il2cpp_TypeInfo_var);
		U3CGetAllMembersU3Ed__43__ctor_m9D96F4D21018AF9A7EE304EA359F9F758C92DEBE(L_4, 0, /*hidden argument*/NULL);
		V_0 = L_4;
	}

IL_002e:
	{
		U3CGetAllMembersU3Ed__43_tF8A98A5535517B649FB8CBEAAF09E8FBC233950B * L_5 = V_0;
		Type_t * L_6 = __this->get_U3CU3E3__type_4();
		NullCheck(L_5);
		L_5->set_type_3(L_6);
		U3CGetAllMembersU3Ed__43_tF8A98A5535517B649FB8CBEAAF09E8FBC233950B * L_7 = V_0;
		String_t* L_8 = __this->get_U3CU3E3__name_8();
		NullCheck(L_7);
		L_7->set_name_7(L_8);
		U3CGetAllMembersU3Ed__43_tF8A98A5535517B649FB8CBEAAF09E8FBC233950B * L_9 = V_0;
		int32_t L_10 = __this->get_U3CU3E3__flags_6();
		NullCheck(L_9);
		L_9->set_flags_5(L_10);
		U3CGetAllMembersU3Ed__43_tF8A98A5535517B649FB8CBEAAF09E8FBC233950B * L_11 = V_0;
		return L_11;
	}
}
// System.Collections.IEnumerator Ludiq.OdinSerializer.Utilities.TypeExtensions_<GetAllMembers>d__43::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetAllMembersU3Ed__43_System_Collections_IEnumerable_GetEnumerator_m4B91AE7D88FBF85ED7E7C844F813172BB6750126 (U3CGetAllMembersU3Ed__43_tF8A98A5535517B649FB8CBEAAF09E8FBC233950B * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = U3CGetAllMembersU3Ed__43_System_Collections_Generic_IEnumerableU3CSystem_Reflection_MemberInfoU3E_GetEnumerator_m024A480FF629D0B90E698EF51556115C140FDD0A(__this, /*hidden argument*/NULL);
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
// System.Void Ludiq.OdinSerializer.Utilities.TypeExtensions_<GetBaseClasses>d__48::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetBaseClassesU3Ed__48__ctor_m1B088EFD85597FC3561C532E4EB65E14B9546918 (U3CGetBaseClassesU3Ed__48_t6A93C122A61B9DAF31979EA6922ADC799C2A9B3E * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * L_1 = Thread_get_CurrentThread_mB7A83CAE2B9A74CEA053196DFD1AF1E7AB30A70E(/*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = Thread_get_ManagedThreadId_m7FA85162CB00713B94EF5708B19120F791D3AAD1(L_1, /*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_2);
		return;
	}
}
// System.Void Ludiq.OdinSerializer.Utilities.TypeExtensions_<GetBaseClasses>d__48::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetBaseClassesU3Ed__48_System_IDisposable_Dispose_mCC21293C1E22EC42DFF297F116DCA39F1A2D171C (U3CGetBaseClassesU3Ed__48_t6A93C122A61B9DAF31979EA6922ADC799C2A9B3E * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Ludiq.OdinSerializer.Utilities.TypeExtensions_<GetBaseClasses>d__48::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetBaseClassesU3Ed__48_MoveNext_m20FA8238213274C08E99587D2017483219EF3FE0 (U3CGetBaseClassesU3Ed__48_t6A93C122A61B9DAF31979EA6922ADC799C2A9B3E * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_0056;
			}
			case 2:
			{
				goto IL_0085;
			}
		}
	}
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->set_U3CU3E1__state_0((-1));
		Type_t * L_2 = __this->get_type_3();
		if (!L_2)
		{
			goto IL_0037;
		}
	}
	{
		Type_t * L_3 = __this->get_type_3();
		NullCheck(L_3);
		Type_t * L_4 = VirtFuncInvoker0< Type_t * >::Invoke(29 /* System.Type System.Type::get_BaseType() */, L_3);
		if (L_4)
		{
			goto IL_0039;
		}
	}

IL_0037:
	{
		return (bool)0;
	}

IL_0039:
	{
		bool L_5 = __this->get_includeSelf_5();
		if (!L_5)
		{
			goto IL_005d;
		}
	}
	{
		Type_t * L_6 = __this->get_type_3();
		__this->set_U3CU3E2__current_1(L_6);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0056:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_005d:
	{
		Type_t * L_7 = __this->get_type_3();
		NullCheck(L_7);
		Type_t * L_8 = VirtFuncInvoker0< Type_t * >::Invoke(29 /* System.Type System.Type::get_BaseType() */, L_7);
		__this->set_U3CcurrentU3E5__1_7(L_8);
		goto IL_009d;
	}

IL_0070:
	{
		Type_t * L_9 = __this->get_U3CcurrentU3E5__1_7();
		__this->set_U3CU3E2__current_1(L_9);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_0085:
	{
		__this->set_U3CU3E1__state_0((-1));
		Type_t * L_10 = __this->get_U3CcurrentU3E5__1_7();
		NullCheck(L_10);
		Type_t * L_11 = VirtFuncInvoker0< Type_t * >::Invoke(29 /* System.Type System.Type::get_BaseType() */, L_10);
		__this->set_U3CcurrentU3E5__1_7(L_11);
	}

IL_009d:
	{
		Type_t * L_12 = __this->get_U3CcurrentU3E5__1_7();
		if (L_12)
		{
			goto IL_0070;
		}
	}
	{
		return (bool)0;
	}
}
// System.Type Ludiq.OdinSerializer.Utilities.TypeExtensions_<GetBaseClasses>d__48::System.Collections.Generic.IEnumerator<System.Type>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * U3CGetBaseClassesU3Ed__48_System_Collections_Generic_IEnumeratorU3CSystem_TypeU3E_get_Current_mCE87570A8F300EB74A6F07A36A392EE8885D28D3 (U3CGetBaseClassesU3Ed__48_t6A93C122A61B9DAF31979EA6922ADC799C2A9B3E * __this, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Ludiq.OdinSerializer.Utilities.TypeExtensions_<GetBaseClasses>d__48::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetBaseClassesU3Ed__48_System_Collections_IEnumerator_Reset_m1296C29C0882372383E70ECD94770167073DE384 (U3CGetBaseClassesU3Ed__48_t6A93C122A61B9DAF31979EA6922ADC799C2A9B3E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetBaseClassesU3Ed__48_System_Collections_IEnumerator_Reset_m1296C29C0882372383E70ECD94770167073DE384_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CGetBaseClassesU3Ed__48_System_Collections_IEnumerator_Reset_m1296C29C0882372383E70ECD94770167073DE384_RuntimeMethod_var);
	}
}
// System.Object Ludiq.OdinSerializer.Utilities.TypeExtensions_<GetBaseClasses>d__48::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetBaseClassesU3Ed__48_System_Collections_IEnumerator_get_Current_m257D18BF1F4CDE73693599A5F8066124152212D7 (U3CGetBaseClassesU3Ed__48_t6A93C122A61B9DAF31979EA6922ADC799C2A9B3E * __this, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Type> Ludiq.OdinSerializer.Utilities.TypeExtensions_<GetBaseClasses>d__48::System.Collections.Generic.IEnumerable<System.Type>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetBaseClassesU3Ed__48_System_Collections_Generic_IEnumerableU3CSystem_TypeU3E_GetEnumerator_mF6DD7024E358B44DD797BA48D883199E07BB1F27 (U3CGetBaseClassesU3Ed__48_t6A93C122A61B9DAF31979EA6922ADC799C2A9B3E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetBaseClassesU3Ed__48_System_Collections_Generic_IEnumerableU3CSystem_TypeU3E_GetEnumerator_mF6DD7024E358B44DD797BA48D883199E07BB1F27_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetBaseClassesU3Ed__48_t6A93C122A61B9DAF31979EA6922ADC799C2A9B3E * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * L_2 = Thread_get_CurrentThread_mB7A83CAE2B9A74CEA053196DFD1AF1E7AB30A70E(/*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = Thread_get_ManagedThreadId_m7FA85162CB00713B94EF5708B19120F791D3AAD1(L_2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_0027;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_002e;
	}

IL_0027:
	{
		U3CGetBaseClassesU3Ed__48_t6A93C122A61B9DAF31979EA6922ADC799C2A9B3E * L_4 = (U3CGetBaseClassesU3Ed__48_t6A93C122A61B9DAF31979EA6922ADC799C2A9B3E *)il2cpp_codegen_object_new(U3CGetBaseClassesU3Ed__48_t6A93C122A61B9DAF31979EA6922ADC799C2A9B3E_il2cpp_TypeInfo_var);
		U3CGetBaseClassesU3Ed__48__ctor_m1B088EFD85597FC3561C532E4EB65E14B9546918(L_4, 0, /*hidden argument*/NULL);
		V_0 = L_4;
	}

IL_002e:
	{
		U3CGetBaseClassesU3Ed__48_t6A93C122A61B9DAF31979EA6922ADC799C2A9B3E * L_5 = V_0;
		Type_t * L_6 = __this->get_U3CU3E3__type_4();
		NullCheck(L_5);
		L_5->set_type_3(L_6);
		U3CGetBaseClassesU3Ed__48_t6A93C122A61B9DAF31979EA6922ADC799C2A9B3E * L_7 = V_0;
		bool L_8 = __this->get_U3CU3E3__includeSelf_6();
		NullCheck(L_7);
		L_7->set_includeSelf_5(L_8);
		U3CGetBaseClassesU3Ed__48_t6A93C122A61B9DAF31979EA6922ADC799C2A9B3E * L_9 = V_0;
		return L_9;
	}
}
// System.Collections.IEnumerator Ludiq.OdinSerializer.Utilities.TypeExtensions_<GetBaseClasses>d__48::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetBaseClassesU3Ed__48_System_Collections_IEnumerable_GetEnumerator_mC9AE666F5FB58E1E733017773FE0C06326A14E6F (U3CGetBaseClassesU3Ed__48_t6A93C122A61B9DAF31979EA6922ADC799C2A9B3E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = U3CGetBaseClassesU3Ed__48_System_Collections_Generic_IEnumerableU3CSystem_TypeU3E_GetEnumerator_mF6DD7024E358B44DD797BA48D883199E07BB1F27(__this, /*hidden argument*/NULL);
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
// System.Void Ludiq.OdinSerializer.Utilities.UnityExtensions::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityExtensions__cctor_mB8DE5A5A280C9060015AEA3416D9CF494646661B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityExtensions__cctor_mB8DE5A5A280C9060015AEA3416D9CF494646661B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	FieldInfo_t * V_0 = NULL;
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		FieldInfo_t * L_2 = VirtFuncInvoker2< FieldInfo_t *, String_t*, int32_t >::Invoke(43 /* System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags) */, L_1, _stringLiteral29790FD9022663D29477A26A15ECAEDA3DDFD99F, ((int32_t)52));
		V_0 = L_2;
		FieldInfo_t * L_3 = V_0;
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		FieldInfo_t * L_4 = V_0;
		ValueGetter_2_tF20DFE4637797CF9A6FD6CEEB79F1A9A6DF91B1A * L_5 = EmitUtilities_CreateInstanceFieldGetter_TisObject_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_TisIntPtr_t_mC2B602FBABF8F9FCD6B2B0B7E2F70A2EC1C0515B(L_4, /*hidden argument*/EmitUtilities_CreateInstanceFieldGetter_TisObject_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_TisIntPtr_t_mC2B602FBABF8F9FCD6B2B0B7E2F70A2EC1C0515B_RuntimeMethod_var);
		((UnityExtensions_tD984E5BCE5092481B76015B36CD6C2BF40F2353B_StaticFields*)il2cpp_codegen_static_fields_for(UnityExtensions_tD984E5BCE5092481B76015B36CD6C2BF40F2353B_il2cpp_TypeInfo_var))->set_UnityObjectCachedPtrFieldGetter_0(L_5);
	}

IL_0025:
	{
		return;
	}
}
// System.Boolean Ludiq.OdinSerializer.Utilities.UnityExtensions::SafeIsUnityNull(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityExtensions_SafeIsUnityNull_m580D12E121D06024D7514293CF359E4C90F408A2 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityExtensions_SafeIsUnityNull_m580D12E121D06024D7514293CF359E4C90F408A2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * L_0 = ___obj0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)1;
	}

IL_0005:
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnityExtensions_tD984E5BCE5092481B76015B36CD6C2BF40F2353B_il2cpp_TypeInfo_var);
		ValueGetter_2_tF20DFE4637797CF9A6FD6CEEB79F1A9A6DF91B1A * L_1 = ((UnityExtensions_tD984E5BCE5092481B76015B36CD6C2BF40F2353B_StaticFields*)il2cpp_codegen_static_fields_for(UnityExtensions_tD984E5BCE5092481B76015B36CD6C2BF40F2353B_il2cpp_TypeInfo_var))->get_UnityObjectCachedPtrFieldGetter_0();
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_2 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mD023A89A5C1F740F43F0A9CD6C49DC21230B3CEE(L_2, _stringLiteralF87FE0D20BB3ADE6992F292AFF25ED70935CE01A, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, UnityExtensions_SafeIsUnityNull_m580D12E121D06024D7514293CF359E4C90F408A2_RuntimeMethod_var);
	}

IL_0017:
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnityExtensions_tD984E5BCE5092481B76015B36CD6C2BF40F2353B_il2cpp_TypeInfo_var);
		ValueGetter_2_tF20DFE4637797CF9A6FD6CEEB79F1A9A6DF91B1A * L_3 = ((UnityExtensions_tD984E5BCE5092481B76015B36CD6C2BF40F2353B_StaticFields*)il2cpp_codegen_static_fields_for(UnityExtensions_tD984E5BCE5092481B76015B36CD6C2BF40F2353B_il2cpp_TypeInfo_var))->get_UnityObjectCachedPtrFieldGetter_0();
		NullCheck(L_3);
		intptr_t L_4 = ValueGetter_2_Invoke_mD53843423A931C3627E41E1780527D7AC5127653(L_3, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 **)(&___obj0), /*hidden argument*/ValueGetter_2_Invoke_mD53843423A931C3627E41E1780527D7AC5127653_RuntimeMethod_var);
		V_0 = (intptr_t)L_4;
		intptr_t L_5 = V_0;
		bool L_6 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_5, (intptr_t)(0), /*hidden argument*/NULL);
		return L_6;
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
// System.Void Ludiq.OdinSerializer.Utilities.UnityVersion::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityVersion__cctor_m2CB82D282C0D5DA47F219B30584A3E884D9445AD (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityVersion__cctor_m2CB82D282C0D5DA47F219B30584A3E884D9445AD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* V_0 = NULL;
	{
		String_t* L_0 = Application_get_unityVersion_mC66901DE17E8F4F5BCA46CF3A4DCB34AF245CF99(/*hidden argument*/NULL);
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_1 = (CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)SZArrayNew(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)46));
		NullCheck(L_0);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_3 = String_Split_m13262358217AD2C119FD1B9733C3C0289D608512(L_0, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_4 = V_0;
		NullCheck(L_4);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))) >= ((int32_t)2)))
		{
			goto IL_0036;
		}
	}
	{
		String_t* L_5 = Application_get_unityVersion_mC66901DE17E8F4F5BCA46CF3A4DCB34AF245CF99(/*hidden argument*/NULL);
		String_t* L_6 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(_stringLiteral4F4CEBC5625B561FD6B81EA2FFB62B1D63065977, L_5, _stringLiteralACFE4ABCE6FC0D9569D757B931C52394ABE7D2CF, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_6, /*hidden argument*/NULL);
		return;
	}

IL_0036:
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = 0;
		String_t* L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		bool L_10 = Int32_TryParse_m03D31CAB7050E8286A8A90711C896B181006AD00(L_9, (int32_t*)(((UnityVersion_t24EBAA036670F68F63EDA0CCB9B032AC9350A407_StaticFields*)il2cpp_codegen_static_fields_for(UnityVersion_t24EBAA036670F68F63EDA0CCB9B032AC9350A407_il2cpp_TypeInfo_var))->get_address_of_Major_0()), /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_007b;
		}
	}
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_11 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_12 = L_11;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral230CBCD98614DBAE7D1C5E0DD27FB03AB087E75F);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral230CBCD98614DBAE7D1C5E0DD27FB03AB087E75F);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_13 = L_12;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_14 = V_0;
		NullCheck(L_14);
		int32_t L_15 = 0;
		String_t* L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_16);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_17 = L_13;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, _stringLiteralA515B50AAD9837414760E159CBC5BB45FE134859);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralA515B50AAD9837414760E159CBC5BB45FE134859);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_18 = L_17;
		String_t* L_19 = Application_get_unityVersion_mC66901DE17E8F4F5BCA46CF3A4DCB34AF245CF99(/*hidden argument*/NULL);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_19);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_19);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_20 = L_18;
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, _stringLiteralFAFBA073700296227A7D1B4785C63F0194C967FA);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralFAFBA073700296227A7D1B4785C63F0194C967FA);
		String_t* L_21 = String_Concat_m232E857CA5107EA6AC52E7DD7018716C021F237B(L_20, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_21, /*hidden argument*/NULL);
	}

IL_007b:
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_22 = V_0;
		NullCheck(L_22);
		int32_t L_23 = 1;
		String_t* L_24 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		bool L_25 = Int32_TryParse_m03D31CAB7050E8286A8A90711C896B181006AD00(L_24, (int32_t*)(((UnityVersion_t24EBAA036670F68F63EDA0CCB9B032AC9350A407_StaticFields*)il2cpp_codegen_static_fields_for(UnityVersion_t24EBAA036670F68F63EDA0CCB9B032AC9350A407_il2cpp_TypeInfo_var))->get_address_of_Minor_1()), /*hidden argument*/NULL);
		if (L_25)
		{
			goto IL_00c0;
		}
	}
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_26 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_27 = L_26;
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, _stringLiteralA1E69250C037D4F5DD3D125D9E0F1A8908E26161);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralA1E69250C037D4F5DD3D125D9E0F1A8908E26161);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_28 = L_27;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_29 = V_0;
		NullCheck(L_29);
		int32_t L_30 = 1;
		String_t* L_31 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_31);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_31);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_32 = L_28;
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, _stringLiteralA515B50AAD9837414760E159CBC5BB45FE134859);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralA515B50AAD9837414760E159CBC5BB45FE134859);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_33 = L_32;
		String_t* L_34 = Application_get_unityVersion_mC66901DE17E8F4F5BCA46CF3A4DCB34AF245CF99(/*hidden argument*/NULL);
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, L_34);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_34);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_35 = L_33;
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, _stringLiteralFAFBA073700296227A7D1B4785C63F0194C967FA);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralFAFBA073700296227A7D1B4785C63F0194C967FA);
		String_t* L_36 = String_Concat_m232E857CA5107EA6AC52E7DD7018716C021F237B(L_35, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_36, /*hidden argument*/NULL);
	}

IL_00c0:
	{
		return;
	}
}
// System.Void Ludiq.OdinSerializer.Utilities.UnityVersion::EnsureLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityVersion_EnsureLoaded_mE7B5E8D74D41A7767940231E9866D604C134926B (const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Ludiq.OdinSerializer.Utilities.UnityVersion::IsVersionOrGreater(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityVersion_IsVersionOrGreater_m8DECD34E07FC62987B41EE7FD745F6AC77AAA0F3 (int32_t ___major0, int32_t ___minor1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityVersion_IsVersionOrGreater_m8DECD34E07FC62987B41EE7FD745F6AC77AAA0F3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnityVersion_t24EBAA036670F68F63EDA0CCB9B032AC9350A407_il2cpp_TypeInfo_var);
		int32_t L_0 = ((UnityVersion_t24EBAA036670F68F63EDA0CCB9B032AC9350A407_StaticFields*)il2cpp_codegen_static_fields_for(UnityVersion_t24EBAA036670F68F63EDA0CCB9B032AC9350A407_il2cpp_TypeInfo_var))->get_Major_0();
		int32_t L_1 = ___major0;
		if ((((int32_t)L_0) > ((int32_t)L_1)))
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnityVersion_t24EBAA036670F68F63EDA0CCB9B032AC9350A407_il2cpp_TypeInfo_var);
		int32_t L_2 = ((UnityVersion_t24EBAA036670F68F63EDA0CCB9B032AC9350A407_StaticFields*)il2cpp_codegen_static_fields_for(UnityVersion_t24EBAA036670F68F63EDA0CCB9B032AC9350A407_il2cpp_TypeInfo_var))->get_Major_0();
		int32_t L_3 = ___major0;
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_001c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnityVersion_t24EBAA036670F68F63EDA0CCB9B032AC9350A407_il2cpp_TypeInfo_var);
		int32_t L_4 = ((UnityVersion_t24EBAA036670F68F63EDA0CCB9B032AC9350A407_StaticFields*)il2cpp_codegen_static_fields_for(UnityVersion_t24EBAA036670F68F63EDA0CCB9B032AC9350A407_il2cpp_TypeInfo_var))->get_Minor_1();
		int32_t L_5 = ___minor1;
		return (bool)((((int32_t)((((int32_t)L_4) < ((int32_t)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_001c:
	{
		return (bool)0;
	}

IL_001e:
	{
		return (bool)1;
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
// System.String Ludiq.OdinSerializer.Utilities.Unsafe.UnsafeUtilities::StringFromBytes(System.Byte[],System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnsafeUtilities_StringFromBytes_m2467B8E2FC65D182FAF1DC835045E1C2F4D07157 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer0, int32_t ___charLength1, bool ___needs16BitSupport2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnsafeUtilities_StringFromBytes_m2467B8E2FC65D182FAF1DC835045E1C2F4D07157_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  V_1;
	memset((&V_1), 0, sizeof(V_1));
	String_t* V_2 = NULL;
	Il2CppChar* V_3 = NULL;
	String_t* V_4 = NULL;
	uint16_t* V_5 = NULL;
	uint16_t* V_6 = NULL;
	intptr_t V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t V_8 = 0;
	Il2CppChar* V_9 = NULL;
	String_t* V_10 = NULL;
	uint8_t* V_11 = NULL;
	uint8_t* V_12 = NULL;
	int32_t V_13 = 0;
	Il2CppChar* V_14 = NULL;
	String_t* V_15 = NULL;
	uint8_t* V_16 = NULL;
	uint8_t* V_17 = NULL;
	int32_t V_18 = 0;
	Il2CppChar* V_19 = NULL;
	String_t* V_20 = NULL;
	uint8_t* V_21 = NULL;
	uint8_t* V_22 = NULL;
	int32_t V_23 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 4);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B3_0 = 0;
	{
		bool L_0 = ___needs16BitSupport2;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_1 = ___charLength1;
		G_B3_0 = L_1;
		goto IL_0009;
	}

IL_0006:
	{
		int32_t L_2 = ___charLength1;
		G_B3_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_2, (int32_t)2));
	}

IL_0009:
	{
		V_0 = G_B3_0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = ___buffer0;
		NullCheck(L_3);
		int32_t L_4 = V_0;
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))) >= ((int32_t)L_4)))
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_5 = V_0;
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_6);
		String_t* L_8 = String_Concat_m2E1F71C491D2429CC80A28745488FEA947BB7AAC(_stringLiteral13BE6B22B0C95437F4DA465B7DEFB2E37369A08B, L_7, _stringLiteral1538BF31994D24FD7B2382394F8E3CE6A4B4E065, /*hidden argument*/NULL);
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_9 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_9, L_8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, UnsafeUtilities_StringFromBytes_m2467B8E2FC65D182FAF1DC835045E1C2F4D07157_RuntimeMethod_var);
	}

IL_002b:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 ));
		int32_t L_10 = ___charLength1;
		String_t* L_11 = String_CreateString_m0E7BBCE09E386877E2B63BF7FA36B956BF221C93(NULL, 0, L_10, /*hidden argument*/NULL);
		V_2 = L_11;
	}

IL_003b:
	try
	{ // begin try (depth: 1)
		{
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_12 = ___buffer0;
			GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  L_13 = GCHandle_Alloc_m30DAF14F75E3A692C594965CE6724E2454DE9A2E((RuntimeObject *)(RuntimeObject *)L_12, 3, /*hidden argument*/NULL);
			V_1 = L_13;
			bool L_14 = ___needs16BitSupport2;
			if (!L_14)
			{
				goto IL_0102;
			}
		}

IL_0049:
		{
			IL2CPP_RUNTIME_CLASS_INIT(BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_il2cpp_TypeInfo_var);
			bool L_15 = ((BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_StaticFields*)il2cpp_codegen_static_fields_for(BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_il2cpp_TypeInfo_var))->get_IsLittleEndian_0();
			if (!L_15)
			{
				goto IL_00a0;
			}
		}

IL_0050:
		try
		{ // begin try (depth: 2)
			{
				String_t* L_16 = V_2;
				V_4 = L_16;
				String_t* L_17 = V_4;
				V_3 = (Il2CppChar*)(((intptr_t)L_17));
				Il2CppChar* L_18 = V_3;
				if (!L_18)
				{
					goto IL_0062;
				}
			}

IL_005a:
			{
				Il2CppChar* L_19 = V_3;
				int32_t L_20 = RuntimeHelpers_get_OffsetToStringData_mF3B79A906181F1A2734590DA161E2AF183853F8B(/*hidden argument*/NULL);
				V_3 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_19, (int32_t)L_20));
			}

IL_0062:
			{
				intptr_t L_21 = GCHandle_AddrOfPinnedObject_mA20090CB8274F28D087A6E8AD36D3230B6741EA5((GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 *)(&V_1), /*hidden argument*/NULL);
				V_7 = (intptr_t)L_21;
				void* L_22 = IntPtr_ToPointer_mC56A17E597E9F767B889DA10DB866F0B96CF0D65_inline((intptr_t*)(&V_7), /*hidden argument*/NULL);
				V_5 = (uint16_t*)L_22;
				Il2CppChar* L_23 = V_3;
				V_6 = (uint16_t*)L_23;
				V_8 = 0;
				goto IL_0092;
			}

IL_007c:
			{
				uint16_t* L_24 = V_6;
				uint16_t* L_25 = (uint16_t*)L_24;
				V_6 = (uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_25, (int32_t)2));
				uint16_t* L_26 = V_5;
				uint16_t* L_27 = (uint16_t*)L_26;
				V_5 = (uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_27, (int32_t)2));
				int32_t L_28 = *((uint16_t*)L_27);
				*((int16_t*)L_25) = (int16_t)L_28;
				int32_t L_29 = V_8;
				V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)2));
			}

IL_0092:
			{
				int32_t L_30 = V_8;
				int32_t L_31 = V_0;
				if ((((int32_t)L_30) < ((int32_t)L_31)))
				{
					goto IL_007c;
				}
			}

IL_0097:
			{
				IL2CPP_LEAVE(0x1CB, FINALLY_009c);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_009c;
		}

FINALLY_009c:
		{ // begin finally (depth: 2)
			V_4 = (String_t*)NULL;
			IL2CPP_END_FINALLY(156)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(156)
		{
			IL2CPP_END_CLEANUP(0x1CB, FINALLY_01ba);
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_00a0:
		{
		}

IL_00a1:
		try
		{ // begin try (depth: 2)
			{
				String_t* L_32 = V_2;
				V_10 = L_32;
				String_t* L_33 = V_10;
				V_9 = (Il2CppChar*)(((intptr_t)L_33));
				Il2CppChar* L_34 = V_9;
				if (!L_34)
				{
					goto IL_00b7;
				}
			}

IL_00ad:
			{
				Il2CppChar* L_35 = V_9;
				int32_t L_36 = RuntimeHelpers_get_OffsetToStringData_mF3B79A906181F1A2734590DA161E2AF183853F8B(/*hidden argument*/NULL);
				V_9 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_35, (int32_t)L_36));
			}

IL_00b7:
			{
				intptr_t L_37 = GCHandle_AddrOfPinnedObject_mA20090CB8274F28D087A6E8AD36D3230B6741EA5((GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 *)(&V_1), /*hidden argument*/NULL);
				V_7 = (intptr_t)L_37;
				void* L_38 = IntPtr_ToPointer_mC56A17E597E9F767B889DA10DB866F0B96CF0D65_inline((intptr_t*)(&V_7), /*hidden argument*/NULL);
				V_11 = (uint8_t*)L_38;
				Il2CppChar* L_39 = V_9;
				V_12 = (uint8_t*)L_39;
				V_13 = 0;
				goto IL_00f4;
			}

IL_00d2:
			{
				uint8_t* L_40 = V_12;
				uint8_t* L_41 = V_11;
				int32_t L_42 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_41, (int32_t)1)));
				*((int8_t*)L_40) = (int8_t)L_42;
				uint8_t* L_43 = V_12;
				uint8_t* L_44 = V_11;
				int32_t L_45 = *((uint8_t*)L_44);
				*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, (int32_t)1))) = (int8_t)L_45;
				uint8_t* L_46 = V_11;
				V_11 = (uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_46, (int32_t)2));
				uint8_t* L_47 = V_12;
				V_12 = (uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_47, (int32_t)2));
				int32_t L_48 = V_13;
				V_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_48, (int32_t)2));
			}

IL_00f4:
			{
				int32_t L_49 = V_13;
				int32_t L_50 = V_0;
				if ((((int32_t)L_49) < ((int32_t)L_50)))
				{
					goto IL_00d2;
				}
			}

IL_00f9:
			{
				IL2CPP_LEAVE(0x1CB, FINALLY_00fe);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_00fe;
		}

FINALLY_00fe:
		{ // begin finally (depth: 2)
			V_10 = (String_t*)NULL;
			IL2CPP_END_FINALLY(254)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(254)
		{
			IL2CPP_END_CLEANUP(0x1CB, FINALLY_01ba);
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_0102:
		{
			IL2CPP_RUNTIME_CLASS_INIT(BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_il2cpp_TypeInfo_var);
			bool L_51 = ((BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_StaticFields*)il2cpp_codegen_static_fields_for(BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_il2cpp_TypeInfo_var))->get_IsLittleEndian_0();
			if (!L_51)
			{
				goto IL_0161;
			}
		}

IL_0109:
		try
		{ // begin try (depth: 2)
			{
				String_t* L_52 = V_2;
				V_15 = L_52;
				String_t* L_53 = V_15;
				V_14 = (Il2CppChar*)(((intptr_t)L_53));
				Il2CppChar* L_54 = V_14;
				if (!L_54)
				{
					goto IL_011f;
				}
			}

IL_0115:
			{
				Il2CppChar* L_55 = V_14;
				int32_t L_56 = RuntimeHelpers_get_OffsetToStringData_mF3B79A906181F1A2734590DA161E2AF183853F8B(/*hidden argument*/NULL);
				V_14 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_55, (int32_t)L_56));
			}

IL_011f:
			{
				intptr_t L_57 = GCHandle_AddrOfPinnedObject_mA20090CB8274F28D087A6E8AD36D3230B6741EA5((GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 *)(&V_1), /*hidden argument*/NULL);
				V_7 = (intptr_t)L_57;
				void* L_58 = IntPtr_ToPointer_mC56A17E597E9F767B889DA10DB866F0B96CF0D65_inline((intptr_t*)(&V_7), /*hidden argument*/NULL);
				V_16 = (uint8_t*)L_58;
				Il2CppChar* L_59 = V_14;
				V_17 = (uint8_t*)L_59;
				V_18 = 0;
				goto IL_0156;
			}

IL_013a:
			{
				uint8_t* L_60 = V_17;
				uint8_t* L_61 = (uint8_t*)L_60;
				V_17 = (uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_61, (int32_t)1));
				uint8_t* L_62 = V_16;
				uint8_t* L_63 = (uint8_t*)L_62;
				V_16 = (uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_63, (int32_t)1));
				int32_t L_64 = *((uint8_t*)L_63);
				*((int8_t*)L_61) = (int8_t)L_64;
				uint8_t* L_65 = V_17;
				V_17 = (uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_65, (int32_t)1));
				int32_t L_66 = V_18;
				V_18 = ((int32_t)il2cpp_codegen_add((int32_t)L_66, (int32_t)1));
			}

IL_0156:
			{
				int32_t L_67 = V_18;
				int32_t L_68 = V_0;
				if ((((int32_t)L_67) < ((int32_t)L_68)))
				{
					goto IL_013a;
				}
			}

IL_015b:
			{
				IL2CPP_LEAVE(0x1CB, FINALLY_015d);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_015d;
		}

FINALLY_015d:
		{ // begin finally (depth: 2)
			V_15 = (String_t*)NULL;
			IL2CPP_END_FINALLY(349)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(349)
		{
			IL2CPP_END_CLEANUP(0x1CB, FINALLY_01ba);
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_0161:
		{
		}

IL_0162:
		try
		{ // begin try (depth: 2)
			{
				String_t* L_69 = V_2;
				V_20 = L_69;
				String_t* L_70 = V_20;
				V_19 = (Il2CppChar*)(((intptr_t)L_70));
				Il2CppChar* L_71 = V_19;
				if (!L_71)
				{
					goto IL_0178;
				}
			}

IL_016e:
			{
				Il2CppChar* L_72 = V_19;
				int32_t L_73 = RuntimeHelpers_get_OffsetToStringData_mF3B79A906181F1A2734590DA161E2AF183853F8B(/*hidden argument*/NULL);
				V_19 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_72, (int32_t)L_73));
			}

IL_0178:
			{
				intptr_t L_74 = GCHandle_AddrOfPinnedObject_mA20090CB8274F28D087A6E8AD36D3230B6741EA5((GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 *)(&V_1), /*hidden argument*/NULL);
				V_7 = (intptr_t)L_74;
				void* L_75 = IntPtr_ToPointer_mC56A17E597E9F767B889DA10DB866F0B96CF0D65_inline((intptr_t*)(&V_7), /*hidden argument*/NULL);
				V_21 = (uint8_t*)L_75;
				Il2CppChar* L_76 = V_19;
				V_22 = (uint8_t*)L_76;
				V_23 = 0;
				goto IL_01af;
			}

IL_0193:
			{
				uint8_t* L_77 = V_22;
				V_22 = (uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_77, (int32_t)1));
				uint8_t* L_78 = V_22;
				uint8_t* L_79 = (uint8_t*)L_78;
				V_22 = (uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_79, (int32_t)1));
				uint8_t* L_80 = V_21;
				uint8_t* L_81 = (uint8_t*)L_80;
				V_21 = (uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_81, (int32_t)1));
				int32_t L_82 = *((uint8_t*)L_81);
				*((int8_t*)L_79) = (int8_t)L_82;
				int32_t L_83 = V_23;
				V_23 = ((int32_t)il2cpp_codegen_add((int32_t)L_83, (int32_t)1));
			}

IL_01af:
			{
				int32_t L_84 = V_23;
				int32_t L_85 = V_0;
				if ((((int32_t)L_84) < ((int32_t)L_85)))
				{
					goto IL_0193;
				}
			}

IL_01b4:
			{
				IL2CPP_LEAVE(0x1CB, FINALLY_01b6);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_01b6;
		}

FINALLY_01b6:
		{ // begin finally (depth: 2)
			V_20 = (String_t*)NULL;
			IL2CPP_END_FINALLY(438)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(438)
		{
			IL2CPP_END_CLEANUP(0x1CB, FINALLY_01ba);
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_01ba;
	}

FINALLY_01ba:
	{ // begin finally (depth: 1)
		{
			bool L_86 = GCHandle_get_IsAllocated_m91323BCB568B1150F90515EF862B00F193E77808((GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 *)(&V_1), /*hidden argument*/NULL);
			if (!L_86)
			{
				goto IL_01ca;
			}
		}

IL_01c3:
		{
			GCHandle_Free_m392ECC9B1058E35A0FD5CF21A65F212873FC26F0((GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 *)(&V_1), /*hidden argument*/NULL);
		}

IL_01ca:
		{
			IL2CPP_END_FINALLY(442)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(442)
	{
		IL2CPP_JUMP_TBL(0x1CB, IL_01cb)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_01cb:
	{
		String_t* L_87 = V_2;
		return L_87;
	}
}
// System.Int32 Ludiq.OdinSerializer.Utilities.Unsafe.UnsafeUtilities::StringToBytes(System.Byte[],System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilities_StringToBytes_m0CBFC1D1AD056DF9CD678B05683F3BAC49BD6962 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer0, String_t* ___value1, bool ___needs16BitSupport2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnsafeUtilities_StringToBytes_m0CBFC1D1AD056DF9CD678B05683F3BAC49BD6962_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Il2CppChar* V_2 = NULL;
	String_t* V_3 = NULL;
	uint16_t* V_4 = NULL;
	uint16_t* V_5 = NULL;
	intptr_t V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	Il2CppChar* V_8 = NULL;
	String_t* V_9 = NULL;
	uint8_t* V_10 = NULL;
	uint8_t* V_11 = NULL;
	int32_t V_12 = 0;
	Il2CppChar* V_13 = NULL;
	String_t* V_14 = NULL;
	uint8_t* V_15 = NULL;
	uint8_t* V_16 = NULL;
	int32_t V_17 = 0;
	Il2CppChar* V_18 = NULL;
	String_t* V_19 = NULL;
	uint8_t* V_20 = NULL;
	uint8_t* V_21 = NULL;
	int32_t V_22 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 4);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B3_0 = 0;
	{
		bool L_0 = ___needs16BitSupport2;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		String_t* L_1 = ___value1;
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_1, /*hidden argument*/NULL);
		G_B3_0 = L_2;
		goto IL_0013;
	}

IL_000b:
	{
		String_t* L_3 = ___value1;
		NullCheck(L_3);
		int32_t L_4 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_3, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_4, (int32_t)2));
	}

IL_0013:
	{
		V_0 = G_B3_0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_5 = ___buffer0;
		NullCheck(L_5);
		int32_t L_6 = V_0;
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))) >= ((int32_t)L_6)))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_7 = V_0;
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_8);
		String_t* L_10 = String_Concat_m2E1F71C491D2429CC80A28745488FEA947BB7AAC(_stringLiteral13BE6B22B0C95437F4DA465B7DEFB2E37369A08B, L_9, _stringLiteral1538BF31994D24FD7B2382394F8E3CE6A4B4E065, /*hidden argument*/NULL);
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_11 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_11, L_10, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, UnsafeUtilities_StringToBytes_m0CBFC1D1AD056DF9CD678B05683F3BAC49BD6962_RuntimeMethod_var);
	}

IL_0035:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 ));
	}

IL_003d:
	try
	{ // begin try (depth: 1)
		{
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_12 = ___buffer0;
			GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  L_13 = GCHandle_Alloc_m30DAF14F75E3A692C594965CE6724E2454DE9A2E((RuntimeObject *)(RuntimeObject *)L_12, 3, /*hidden argument*/NULL);
			V_1 = L_13;
			bool L_14 = ___needs16BitSupport2;
			if (!L_14)
			{
				goto IL_0101;
			}
		}

IL_004b:
		{
			IL2CPP_RUNTIME_CLASS_INIT(BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_il2cpp_TypeInfo_var);
			bool L_15 = ((BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_StaticFields*)il2cpp_codegen_static_fields_for(BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_il2cpp_TypeInfo_var))->get_IsLittleEndian_0();
			if (!L_15)
			{
				goto IL_009f;
			}
		}

IL_0052:
		try
		{ // begin try (depth: 2)
			{
				String_t* L_16 = ___value1;
				V_3 = L_16;
				String_t* L_17 = V_3;
				V_2 = (Il2CppChar*)(((intptr_t)L_17));
				Il2CppChar* L_18 = V_2;
				if (!L_18)
				{
					goto IL_0062;
				}
			}

IL_005a:
			{
				Il2CppChar* L_19 = V_2;
				int32_t L_20 = RuntimeHelpers_get_OffsetToStringData_mF3B79A906181F1A2734590DA161E2AF183853F8B(/*hidden argument*/NULL);
				V_2 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_19, (int32_t)L_20));
			}

IL_0062:
			{
				Il2CppChar* L_21 = V_2;
				V_4 = (uint16_t*)L_21;
				intptr_t L_22 = GCHandle_AddrOfPinnedObject_mA20090CB8274F28D087A6E8AD36D3230B6741EA5((GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 *)(&V_1), /*hidden argument*/NULL);
				V_6 = (intptr_t)L_22;
				void* L_23 = IntPtr_ToPointer_mC56A17E597E9F767B889DA10DB866F0B96CF0D65_inline((intptr_t*)(&V_6), /*hidden argument*/NULL);
				V_5 = (uint16_t*)L_23;
				V_7 = 0;
				goto IL_0092;
			}

IL_007c:
			{
				uint16_t* L_24 = V_5;
				uint16_t* L_25 = (uint16_t*)L_24;
				V_5 = (uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_25, (int32_t)2));
				uint16_t* L_26 = V_4;
				uint16_t* L_27 = (uint16_t*)L_26;
				V_4 = (uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_27, (int32_t)2));
				int32_t L_28 = *((uint16_t*)L_27);
				*((int16_t*)L_25) = (int16_t)L_28;
				int32_t L_29 = V_7;
				V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)2));
			}

IL_0092:
			{
				int32_t L_30 = V_7;
				int32_t L_31 = V_0;
				if ((((int32_t)L_30) < ((int32_t)L_31)))
				{
					goto IL_007c;
				}
			}

IL_0097:
			{
				IL2CPP_LEAVE(0x1CA, FINALLY_009c);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_009c;
		}

FINALLY_009c:
		{ // begin finally (depth: 2)
			V_3 = (String_t*)NULL;
			IL2CPP_END_FINALLY(156)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(156)
		{
			IL2CPP_END_CLEANUP(0x1CA, FINALLY_01b9);
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_009f:
		{
		}

IL_00a0:
		try
		{ // begin try (depth: 2)
			{
				String_t* L_32 = ___value1;
				V_9 = L_32;
				String_t* L_33 = V_9;
				V_8 = (Il2CppChar*)(((intptr_t)L_33));
				Il2CppChar* L_34 = V_8;
				if (!L_34)
				{
					goto IL_00b6;
				}
			}

IL_00ac:
			{
				Il2CppChar* L_35 = V_8;
				int32_t L_36 = RuntimeHelpers_get_OffsetToStringData_mF3B79A906181F1A2734590DA161E2AF183853F8B(/*hidden argument*/NULL);
				V_8 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_35, (int32_t)L_36));
			}

IL_00b6:
			{
				Il2CppChar* L_37 = V_8;
				V_10 = (uint8_t*)L_37;
				intptr_t L_38 = GCHandle_AddrOfPinnedObject_mA20090CB8274F28D087A6E8AD36D3230B6741EA5((GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 *)(&V_1), /*hidden argument*/NULL);
				V_6 = (intptr_t)L_38;
				void* L_39 = IntPtr_ToPointer_mC56A17E597E9F767B889DA10DB866F0B96CF0D65_inline((intptr_t*)(&V_6), /*hidden argument*/NULL);
				V_11 = (uint8_t*)L_39;
				V_12 = 0;
				goto IL_00f3;
			}

IL_00d1:
			{
				uint8_t* L_40 = V_11;
				uint8_t* L_41 = V_10;
				int32_t L_42 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_41, (int32_t)1)));
				*((int8_t*)L_40) = (int8_t)L_42;
				uint8_t* L_43 = V_11;
				uint8_t* L_44 = V_10;
				int32_t L_45 = *((uint8_t*)L_44);
				*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, (int32_t)1))) = (int8_t)L_45;
				uint8_t* L_46 = V_10;
				V_10 = (uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_46, (int32_t)2));
				uint8_t* L_47 = V_11;
				V_11 = (uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_47, (int32_t)2));
				int32_t L_48 = V_12;
				V_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_48, (int32_t)2));
			}

IL_00f3:
			{
				int32_t L_49 = V_12;
				int32_t L_50 = V_0;
				if ((((int32_t)L_49) < ((int32_t)L_50)))
				{
					goto IL_00d1;
				}
			}

IL_00f8:
			{
				IL2CPP_LEAVE(0x1CA, FINALLY_00fd);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_00fd;
		}

FINALLY_00fd:
		{ // begin finally (depth: 2)
			V_9 = (String_t*)NULL;
			IL2CPP_END_FINALLY(253)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(253)
		{
			IL2CPP_END_CLEANUP(0x1CA, FINALLY_01b9);
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_0101:
		{
			IL2CPP_RUNTIME_CLASS_INIT(BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_il2cpp_TypeInfo_var);
			bool L_51 = ((BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_StaticFields*)il2cpp_codegen_static_fields_for(BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_il2cpp_TypeInfo_var))->get_IsLittleEndian_0();
			if (!L_51)
			{
				goto IL_0160;
			}
		}

IL_0108:
		try
		{ // begin try (depth: 2)
			{
				String_t* L_52 = ___value1;
				V_14 = L_52;
				String_t* L_53 = V_14;
				V_13 = (Il2CppChar*)(((intptr_t)L_53));
				Il2CppChar* L_54 = V_13;
				if (!L_54)
				{
					goto IL_011e;
				}
			}

IL_0114:
			{
				Il2CppChar* L_55 = V_13;
				int32_t L_56 = RuntimeHelpers_get_OffsetToStringData_mF3B79A906181F1A2734590DA161E2AF183853F8B(/*hidden argument*/NULL);
				V_13 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_55, (int32_t)L_56));
			}

IL_011e:
			{
				Il2CppChar* L_57 = V_13;
				V_15 = (uint8_t*)L_57;
				intptr_t L_58 = GCHandle_AddrOfPinnedObject_mA20090CB8274F28D087A6E8AD36D3230B6741EA5((GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 *)(&V_1), /*hidden argument*/NULL);
				V_6 = (intptr_t)L_58;
				void* L_59 = IntPtr_ToPointer_mC56A17E597E9F767B889DA10DB866F0B96CF0D65_inline((intptr_t*)(&V_6), /*hidden argument*/NULL);
				V_16 = (uint8_t*)L_59;
				V_17 = 0;
				goto IL_0155;
			}

IL_0139:
			{
				uint8_t* L_60 = V_15;
				V_15 = (uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_60, (int32_t)1));
				uint8_t* L_61 = V_16;
				uint8_t* L_62 = (uint8_t*)L_61;
				V_16 = (uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_62, (int32_t)1));
				uint8_t* L_63 = V_15;
				uint8_t* L_64 = (uint8_t*)L_63;
				V_15 = (uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_64, (int32_t)1));
				int32_t L_65 = *((uint8_t*)L_64);
				*((int8_t*)L_62) = (int8_t)L_65;
				int32_t L_66 = V_17;
				V_17 = ((int32_t)il2cpp_codegen_add((int32_t)L_66, (int32_t)1));
			}

IL_0155:
			{
				int32_t L_67 = V_17;
				int32_t L_68 = V_0;
				if ((((int32_t)L_67) < ((int32_t)L_68)))
				{
					goto IL_0139;
				}
			}

IL_015a:
			{
				IL2CPP_LEAVE(0x1CA, FINALLY_015c);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_015c;
		}

FINALLY_015c:
		{ // begin finally (depth: 2)
			V_14 = (String_t*)NULL;
			IL2CPP_END_FINALLY(348)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(348)
		{
			IL2CPP_END_CLEANUP(0x1CA, FINALLY_01b9);
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_0160:
		{
		}

IL_0161:
		try
		{ // begin try (depth: 2)
			{
				String_t* L_69 = ___value1;
				V_19 = L_69;
				String_t* L_70 = V_19;
				V_18 = (Il2CppChar*)(((intptr_t)L_70));
				Il2CppChar* L_71 = V_18;
				if (!L_71)
				{
					goto IL_0177;
				}
			}

IL_016d:
			{
				Il2CppChar* L_72 = V_18;
				int32_t L_73 = RuntimeHelpers_get_OffsetToStringData_mF3B79A906181F1A2734590DA161E2AF183853F8B(/*hidden argument*/NULL);
				V_18 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_72, (int32_t)L_73));
			}

IL_0177:
			{
				Il2CppChar* L_74 = V_18;
				V_20 = (uint8_t*)L_74;
				intptr_t L_75 = GCHandle_AddrOfPinnedObject_mA20090CB8274F28D087A6E8AD36D3230B6741EA5((GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 *)(&V_1), /*hidden argument*/NULL);
				V_6 = (intptr_t)L_75;
				void* L_76 = IntPtr_ToPointer_mC56A17E597E9F767B889DA10DB866F0B96CF0D65_inline((intptr_t*)(&V_6), /*hidden argument*/NULL);
				V_21 = (uint8_t*)L_76;
				V_22 = 0;
				goto IL_01ae;
			}

IL_0192:
			{
				uint8_t* L_77 = V_21;
				uint8_t* L_78 = (uint8_t*)L_77;
				V_21 = (uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_78, (int32_t)1));
				uint8_t* L_79 = V_20;
				uint8_t* L_80 = (uint8_t*)L_79;
				V_20 = (uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_80, (int32_t)1));
				int32_t L_81 = *((uint8_t*)L_80);
				*((int8_t*)L_78) = (int8_t)L_81;
				uint8_t* L_82 = V_20;
				V_20 = (uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_82, (int32_t)1));
				int32_t L_83 = V_22;
				V_22 = ((int32_t)il2cpp_codegen_add((int32_t)L_83, (int32_t)1));
			}

IL_01ae:
			{
				int32_t L_84 = V_22;
				int32_t L_85 = V_0;
				if ((((int32_t)L_84) < ((int32_t)L_85)))
				{
					goto IL_0192;
				}
			}

IL_01b3:
			{
				IL2CPP_LEAVE(0x1CA, FINALLY_01b5);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_01b5;
		}

FINALLY_01b5:
		{ // begin finally (depth: 2)
			V_19 = (String_t*)NULL;
			IL2CPP_END_FINALLY(437)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(437)
		{
			IL2CPP_END_CLEANUP(0x1CA, FINALLY_01b9);
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_01b9;
	}

FINALLY_01b9:
	{ // begin finally (depth: 1)
		{
			bool L_86 = GCHandle_get_IsAllocated_m91323BCB568B1150F90515EF862B00F193E77808((GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 *)(&V_1), /*hidden argument*/NULL);
			if (!L_86)
			{
				goto IL_01c9;
			}
		}

IL_01c2:
		{
			GCHandle_Free_m392ECC9B1058E35A0FD5CF21A65F212873FC26F0((GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 *)(&V_1), /*hidden argument*/NULL);
		}

IL_01c9:
		{
			IL2CPP_END_FINALLY(441)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(441)
	{
		IL2CPP_JUMP_TBL(0x1CA, IL_01ca)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_01ca:
	{
		int32_t L_87 = V_0;
		return L_87;
	}
}
// System.Void Ludiq.OdinSerializer.Utilities.Unsafe.UnsafeUtilities::MemoryCopy(System.Void*,System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtilities_MemoryCopy_m9EC8515643B4CF1143FEFF054537DC404C5004D1 (void* ___from0, void* ___to1, int32_t ___bytes2, const RuntimeMethod* method)
{
	uint8_t* V_0 = NULL;
	Struct256Bit_tDDE97BD3B8C451085C1BCC7564432921A2B583FF * V_1 = NULL;
	Struct256Bit_tDDE97BD3B8C451085C1BCC7564432921A2B583FF * V_2 = NULL;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	Struct256Bit_tDDE97BD3B8C451085C1BCC7564432921A2B583FF * V_5 = NULL;
	{
		void* L_0 = ___to1;
		int32_t L_1 = ___bytes2;
		V_0 = (uint8_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (int32_t)L_1));
		void* L_2 = ___from0;
		V_1 = (Struct256Bit_tDDE97BD3B8C451085C1BCC7564432921A2B583FF *)L_2;
		void* L_3 = ___to1;
		V_2 = (Struct256Bit_tDDE97BD3B8C451085C1BCC7564432921A2B583FF *)L_3;
		goto IL_0032;
	}

IL_000a:
	{
		Struct256Bit_tDDE97BD3B8C451085C1BCC7564432921A2B583FF * L_4 = V_2;
		V_5 = (Struct256Bit_tDDE97BD3B8C451085C1BCC7564432921A2B583FF *)L_4;
		Struct256Bit_tDDE97BD3B8C451085C1BCC7564432921A2B583FF * L_5 = V_5;
		uint32_t L_6 = sizeof(Struct256Bit_tDDE97BD3B8C451085C1BCC7564432921A2B583FF );
		V_2 = (Struct256Bit_tDDE97BD3B8C451085C1BCC7564432921A2B583FF *)((Struct256Bit_tDDE97BD3B8C451085C1BCC7564432921A2B583FF *)il2cpp_codegen_add((intptr_t)L_5, (int32_t)L_6));
		Struct256Bit_tDDE97BD3B8C451085C1BCC7564432921A2B583FF * L_7 = V_5;
		Struct256Bit_tDDE97BD3B8C451085C1BCC7564432921A2B583FF * L_8 = V_1;
		V_5 = (Struct256Bit_tDDE97BD3B8C451085C1BCC7564432921A2B583FF *)L_8;
		Struct256Bit_tDDE97BD3B8C451085C1BCC7564432921A2B583FF * L_9 = V_5;
		uint32_t L_10 = sizeof(Struct256Bit_tDDE97BD3B8C451085C1BCC7564432921A2B583FF );
		V_1 = (Struct256Bit_tDDE97BD3B8C451085C1BCC7564432921A2B583FF *)((Struct256Bit_tDDE97BD3B8C451085C1BCC7564432921A2B583FF *)il2cpp_codegen_add((intptr_t)L_9, (int32_t)L_10));
		Struct256Bit_tDDE97BD3B8C451085C1BCC7564432921A2B583FF * L_11 = V_5;
		Struct256Bit_tDDE97BD3B8C451085C1BCC7564432921A2B583FF  L_12 = (*(Struct256Bit_tDDE97BD3B8C451085C1BCC7564432921A2B583FF *)L_11);
		*(Struct256Bit_tDDE97BD3B8C451085C1BCC7564432921A2B583FF *)L_7 = L_12;
	}

IL_0032:
	{
		Struct256Bit_tDDE97BD3B8C451085C1BCC7564432921A2B583FF * L_13 = V_2;
		uint32_t L_14 = sizeof(Struct256Bit_tDDE97BD3B8C451085C1BCC7564432921A2B583FF );
		uint8_t* L_15 = V_0;
		if ((!(((uintptr_t)((Struct256Bit_tDDE97BD3B8C451085C1BCC7564432921A2B583FF *)il2cpp_codegen_add((intptr_t)L_13, (int32_t)L_14))) > ((uintptr_t)L_15))))
		{
			goto IL_000a;
		}
	}
	{
		Struct256Bit_tDDE97BD3B8C451085C1BCC7564432921A2B583FF * L_16 = V_1;
		V_3 = (uint8_t*)L_16;
		Struct256Bit_tDDE97BD3B8C451085C1BCC7564432921A2B583FF * L_17 = V_2;
		V_4 = (uint8_t*)L_17;
		goto IL_0052;
	}

IL_0044:
	{
		uint8_t* L_18 = V_4;
		uint8_t* L_19 = (uint8_t*)L_18;
		V_4 = (uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_19, (int32_t)1));
		uint8_t* L_20 = V_3;
		uint8_t* L_21 = (uint8_t*)L_20;
		V_3 = (uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_21, (int32_t)1));
		int32_t L_22 = *((uint8_t*)L_21);
		*((int8_t*)L_19) = (int8_t)L_22;
	}

IL_0052:
	{
		uint8_t* L_23 = V_4;
		uint8_t* L_24 = V_0;
		if ((!(((uintptr_t)L_23) >= ((uintptr_t)L_24))))
		{
			goto IL_0044;
		}
	}
	{
		return;
	}
}
// System.Void Ludiq.OdinSerializer.Utilities.Unsafe.UnsafeUtilities::MemoryCopy(System.Object,System.Object,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtilities_MemoryCopy_mE28930317141E90B8A3E0D1FFF2B086E70A6EB44 (RuntimeObject * ___from0, RuntimeObject * ___to1, int32_t ___byteCount2, int32_t ___fromByteOffset3, int32_t ___toByteOffset4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnsafeUtilities_MemoryCopy_mE28930317141E90B8A3E0D1FFF2B086E70A6EB44_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  V_0;
	memset((&V_0), 0, sizeof(V_0));
	GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	uint64_t* V_6 = NULL;
	uint64_t* V_7 = NULL;
	intptr_t V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	uint8_t* V_10 = NULL;
	uint8_t* V_11 = NULL;
	int32_t V_12 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		il2cpp_codegen_initobj((&V_0), sizeof(GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 ));
		il2cpp_codegen_initobj((&V_1), sizeof(GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 ));
		int32_t L_0 = ___fromByteOffset3;
		if (((int32_t)((int32_t)L_0%(int32_t)8)))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_1 = ___toByteOffset4;
		if (!((int32_t)((int32_t)L_1%(int32_t)8)))
		{
			goto IL_0036;
		}
	}

IL_001b:
	{
		int32_t L_2 = 8;
		RuntimeObject * L_3 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4 = String_Concat_m2E1F71C491D2429CC80A28745488FEA947BB7AAC(_stringLiteralFFB57D26A3F91EBAA96F67A05A00A7339D18D9EA, L_3, _stringLiteral0B6CD6C0B1E998C35D8C067B064C7CAC865C304B, /*hidden argument*/NULL);
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_5 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_5, L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, UnsafeUtilities_MemoryCopy_mE28930317141E90B8A3E0D1FFF2B086E70A6EB44_RuntimeMethod_var);
	}

IL_0036:
	{
	}

IL_0037:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_6 = ___byteCount2;
			V_2 = ((int32_t)((int32_t)L_6%(int32_t)8));
			int32_t L_7 = ___byteCount2;
			int32_t L_8 = V_2;
			V_3 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)L_8))/(int32_t)8));
			int32_t L_9 = ___fromByteOffset3;
			V_4 = ((int32_t)((int32_t)L_9/(int32_t)8));
			int32_t L_10 = ___toByteOffset4;
			V_5 = ((int32_t)((int32_t)L_10/(int32_t)8));
			RuntimeObject * L_11 = ___from0;
			GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  L_12 = GCHandle_Alloc_m30DAF14F75E3A692C594965CE6724E2454DE9A2E(L_11, 3, /*hidden argument*/NULL);
			V_0 = L_12;
			RuntimeObject * L_13 = ___to1;
			GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  L_14 = GCHandle_Alloc_m30DAF14F75E3A692C594965CE6724E2454DE9A2E(L_13, 3, /*hidden argument*/NULL);
			V_1 = L_14;
			intptr_t L_15 = GCHandle_AddrOfPinnedObject_mA20090CB8274F28D087A6E8AD36D3230B6741EA5((GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 *)(&V_0), /*hidden argument*/NULL);
			V_8 = (intptr_t)L_15;
			void* L_16 = IntPtr_ToPointer_mC56A17E597E9F767B889DA10DB866F0B96CF0D65_inline((intptr_t*)(&V_8), /*hidden argument*/NULL);
			V_6 = (uint64_t*)L_16;
			intptr_t L_17 = GCHandle_AddrOfPinnedObject_mA20090CB8274F28D087A6E8AD36D3230B6741EA5((GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 *)(&V_1), /*hidden argument*/NULL);
			V_8 = (intptr_t)L_17;
			void* L_18 = IntPtr_ToPointer_mC56A17E597E9F767B889DA10DB866F0B96CF0D65_inline((intptr_t*)(&V_8), /*hidden argument*/NULL);
			V_7 = (uint64_t*)L_18;
			int32_t L_19 = V_4;
			if ((((int32_t)L_19) <= ((int32_t)0)))
			{
				goto IL_008f;
			}
		}

IL_0085:
		{
			uint64_t* L_20 = V_6;
			int32_t L_21 = V_4;
			V_6 = (uint64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_20, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)(((intptr_t)L_21)), (int32_t)8))));
		}

IL_008f:
		{
			int32_t L_22 = V_5;
			if ((((int32_t)L_22) <= ((int32_t)0)))
			{
				goto IL_009e;
			}
		}

IL_0094:
		{
			uint64_t* L_23 = V_7;
			int32_t L_24 = V_5;
			V_7 = (uint64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_23, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)(((intptr_t)L_24)), (int32_t)8))));
		}

IL_009e:
		{
			V_9 = 0;
			goto IL_00b9;
		}

IL_00a3:
		{
			uint64_t* L_25 = V_7;
			uint64_t* L_26 = (uint64_t*)L_25;
			V_7 = (uint64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_26, (int32_t)8));
			uint64_t* L_27 = V_6;
			uint64_t* L_28 = (uint64_t*)L_27;
			V_6 = (uint64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_28, (int32_t)8));
			int64_t L_29 = *((int64_t*)L_28);
			*((int64_t*)L_26) = (int64_t)L_29;
			int32_t L_30 = V_9;
			V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
		}

IL_00b9:
		{
			int32_t L_31 = V_9;
			int32_t L_32 = V_3;
			if ((((int32_t)L_31) < ((int32_t)L_32)))
			{
				goto IL_00a3;
			}
		}

IL_00be:
		{
			int32_t L_33 = V_2;
			if ((((int32_t)L_33) <= ((int32_t)0)))
			{
				goto IL_00ea;
			}
		}

IL_00c2:
		{
			uint64_t* L_34 = V_6;
			V_10 = (uint8_t*)L_34;
			uint64_t* L_35 = V_7;
			V_11 = (uint8_t*)L_35;
			V_12 = 0;
			goto IL_00e5;
		}

IL_00cf:
		{
			uint8_t* L_36 = V_11;
			uint8_t* L_37 = (uint8_t*)L_36;
			V_11 = (uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_37, (int32_t)1));
			uint8_t* L_38 = V_10;
			uint8_t* L_39 = (uint8_t*)L_38;
			V_10 = (uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_39, (int32_t)1));
			int32_t L_40 = *((uint8_t*)L_39);
			*((int8_t*)L_37) = (int8_t)L_40;
			int32_t L_41 = V_12;
			V_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)1));
		}

IL_00e5:
		{
			int32_t L_42 = V_12;
			int32_t L_43 = V_2;
			if ((((int32_t)L_42) < ((int32_t)L_43)))
			{
				goto IL_00cf;
			}
		}

IL_00ea:
		{
			IL2CPP_LEAVE(0x10D, FINALLY_00ec);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00ec;
	}

FINALLY_00ec:
	{ // begin finally (depth: 1)
		{
			bool L_44 = GCHandle_get_IsAllocated_m91323BCB568B1150F90515EF862B00F193E77808((GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 *)(&V_0), /*hidden argument*/NULL);
			if (!L_44)
			{
				goto IL_00fc;
			}
		}

IL_00f5:
		{
			GCHandle_Free_m392ECC9B1058E35A0FD5CF21A65F212873FC26F0((GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 *)(&V_0), /*hidden argument*/NULL);
		}

IL_00fc:
		{
			bool L_45 = GCHandle_get_IsAllocated_m91323BCB568B1150F90515EF862B00F193E77808((GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 *)(&V_1), /*hidden argument*/NULL);
			if (!L_45)
			{
				goto IL_010c;
			}
		}

IL_0105:
		{
			GCHandle_Free_m392ECC9B1058E35A0FD5CF21A65F212873FC26F0((GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 *)(&V_1), /*hidden argument*/NULL);
		}

IL_010c:
		{
			IL2CPP_END_FINALLY(236)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(236)
	{
		IL2CPP_JUMP_TBL(0x10D, IL_010d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_010d:
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Ludiq.OdinSerializer.Utilities.WeakValueGetter::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakValueGetter__ctor_mFF89CBB8C27F3E523569FCE3D92BBBA83EBB4442 (WeakValueGetter_tA5763EEB4102B42423DEA22F2FE523106F14B643 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Object Ludiq.OdinSerializer.Utilities.WeakValueGetter::Invoke(System.Object&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * WeakValueGetter_Invoke_m5CA2B097B81040C44CE8C0032590CD8A7171BAC2 (WeakValueGetter_tA5763EEB4102B42423DEA22F2FE523106F14B643 * __this, RuntimeObject ** ___instance0, const RuntimeMethod* method)
{
	RuntimeObject * result = NULL;
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject **, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___instance0, targetMethod);
			}
			else
			{
				// closed
				typedef RuntimeObject * (*FunctionPointerType) (void*, RuntimeObject **, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___instance0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject **, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___instance0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< RuntimeObject *, RuntimeObject ** >::Invoke(targetMethod, targetThis, ___instance0);
					else
						result = GenericVirtFuncInvoker1< RuntimeObject *, RuntimeObject ** >::Invoke(targetMethod, targetThis, ___instance0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< RuntimeObject *, RuntimeObject ** >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___instance0);
					else
						result = VirtFuncInvoker1< RuntimeObject *, RuntimeObject ** >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___instance0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___instance0) - 1), targetMethod);
				}
				else
				{
					typedef RuntimeObject * (*FunctionPointerType) (void*, RuntimeObject **, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___instance0, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Ludiq.OdinSerializer.Utilities.WeakValueGetter::BeginInvoke(System.Object&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WeakValueGetter_BeginInvoke_m53464DFB6ACD925EE880F38E2693FF921F3AAE4D (WeakValueGetter_tA5763EEB4102B42423DEA22F2FE523106F14B643 * __this, RuntimeObject ** ___instance0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = *___instance0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Object Ludiq.OdinSerializer.Utilities.WeakValueGetter::EndInvoke(System.Object&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * WeakValueGetter_EndInvoke_mA7E7DFE805602ACC53DDD8C4F8E2AE2288A9CD43 (WeakValueGetter_tA5763EEB4102B42423DEA22F2FE523106F14B643 * __this, RuntimeObject ** ___instance0, RuntimeObject* ___result1, const RuntimeMethod* method)
{
	void* ___out_args[] = {
	___instance0,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, ___out_args);
	return (RuntimeObject *)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Ludiq.OdinSerializer.Utilities.WeakValueSetter::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakValueSetter__ctor_mBD4C0167E17EE697EB2EB5A101922DE7D6F1CF8F (WeakValueSetter_t15EA7B7FA91E88F413E0512CCABA3348E83B94BF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Ludiq.OdinSerializer.Utilities.WeakValueSetter::Invoke(System.Object&,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakValueSetter_Invoke_mD7591CC5E95D051335FA5A53A102FD7A039EEB61 (WeakValueSetter_t15EA7B7FA91E88F413E0512CCABA3348E83B94BF * __this, RuntimeObject ** ___instance0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (RuntimeObject **, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___instance0, ___value1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject **, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___instance0, ___value1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject **, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___instance0, ___value1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< RuntimeObject **, RuntimeObject * >::Invoke(targetMethod, targetThis, ___instance0, ___value1);
					else
						GenericVirtActionInvoker2< RuntimeObject **, RuntimeObject * >::Invoke(targetMethod, targetThis, ___instance0, ___value1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< RuntimeObject **, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___instance0, ___value1);
					else
						VirtActionInvoker2< RuntimeObject **, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___instance0, ___value1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___instance0) - 1), ___value1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RuntimeObject **, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___instance0, ___value1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Ludiq.OdinSerializer.Utilities.WeakValueSetter::BeginInvoke(System.Object&,System.Object,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WeakValueSetter_BeginInvoke_m775D0C1858F9B2FF829FC08219A69AEFEF94D640 (WeakValueSetter_t15EA7B7FA91E88F413E0512CCABA3348E83B94BF * __this, RuntimeObject ** ___instance0, RuntimeObject * ___value1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = *___instance0;
	__d_args[1] = ___value1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void Ludiq.OdinSerializer.Utilities.WeakValueSetter::EndInvoke(System.Object&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakValueSetter_EndInvoke_mEBE03F2EF63B1C0CF5C4F950CB7C7885C1C5AE5B (WeakValueSetter_t15EA7B7FA91E88F413E0512CCABA3348E83B94BF * __this, RuntimeObject ** ___instance0, RuntimeObject* ___result1, const RuntimeMethod* method)
{
	void* ___out_args[] = {
	___instance0,
	};
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, ___out_args);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Ludiq.OdinSerializer.Vector2DictionaryKeyPathProvider::get_ProviderID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector2DictionaryKeyPathProvider_get_ProviderID_m80CAA6CF1CBCBF33D2422242AC148B84703CE3DB (Vector2DictionaryKeyPathProvider_t44A64799A6D0A2F9A916BF1858FDB1BC017CD062 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector2DictionaryKeyPathProvider_get_ProviderID_m80CAA6CF1CBCBF33D2422242AC148B84703CE3DB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralA1047EAB1035D58682A53557E0B2A75EDBFD15FD;
	}
}
// System.Int32 Ludiq.OdinSerializer.Vector2DictionaryKeyPathProvider::Compare(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector2DictionaryKeyPathProvider_Compare_m560C024184B526838FC9604FBC38BAE58AF222F5 (Vector2DictionaryKeyPathProvider_t44A64799A6D0A2F9A916BF1858FDB1BC017CD062 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___x0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___y1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		float* L_0 = (&___x0)->get_address_of_x_0();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_1 = ___y1;
		float L_2 = L_1.get_x_0();
		int32_t L_3 = Single_CompareTo_mFBF2345D81E00F834E558A4ACFD4E5137582DBBC((float*)L_0, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		if (L_4)
		{
			goto IL_0029;
		}
	}
	{
		float* L_5 = (&___x0)->get_address_of_y_1();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_6 = ___y1;
		float L_7 = L_6.get_y_1();
		int32_t L_8 = Single_CompareTo_mFBF2345D81E00F834E558A4ACFD4E5137582DBBC((float*)L_5, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
	}

IL_0029:
	{
		int32_t L_9 = V_0;
		return L_9;
	}
}
// UnityEngine.Vector2 Ludiq.OdinSerializer.Vector2DictionaryKeyPathProvider::GetKeyFromPathString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2DictionaryKeyPathProvider_GetKeyFromPathString_mD59BFCB8450DB37958D385BEBB42CEF141661442 (Vector2DictionaryKeyPathProvider_t44A64799A6D0A2F9A916BF1858FDB1BC017CD062 * __this, String_t* ___pathStr0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	{
		String_t* L_0 = ___pathStr0;
		NullCheck(L_0);
		int32_t L_1 = String_IndexOf_m2909B8CF585E1BD0C81E11ACA2F48012156FD5BD(L_0, ((int32_t)124), /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = ___pathStr0;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		String_t* L_4 = String_Substring_mB593C0A320C683E6E47EFFC0A12B7A465E5E43BB(L_2, 1, ((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)1)), /*hidden argument*/NULL);
		NullCheck(L_4);
		String_t* L_5 = String_Trim_mB52EB7876C7132358B76B7DC95DEACA20722EF4D(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		String_t* L_6 = ___pathStr0;
		int32_t L_7 = V_0;
		String_t* L_8 = ___pathStr0;
		NullCheck(L_8);
		int32_t L_9 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_8, /*hidden argument*/NULL);
		int32_t L_10 = V_0;
		NullCheck(L_6);
		String_t* L_11 = String_Substring_mB593C0A320C683E6E47EFFC0A12B7A465E5E43BB(L_6, ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1)), ((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)2)))), /*hidden argument*/NULL);
		NullCheck(L_11);
		String_t* L_12 = String_Trim_mB52EB7876C7132358B76B7DC95DEACA20722EF4D(L_11, /*hidden argument*/NULL);
		V_2 = L_12;
		String_t* L_13 = V_1;
		float L_14 = Single_Parse_m643ECE18CB0499B2B3EC76C8B941020122003DC6(L_13, /*hidden argument*/NULL);
		String_t* L_15 = V_2;
		float L_16 = Single_Parse_m643ECE18CB0499B2B3EC76C8B941020122003DC6(L_15, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_17), L_14, L_16, /*hidden argument*/NULL);
		return L_17;
	}
}
// System.String Ludiq.OdinSerializer.Vector2DictionaryKeyPathProvider::GetPathStringFromKey(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector2DictionaryKeyPathProvider_GetPathStringFromKey_mC3A6F3EDECA418B55C99B7C73F43320515DD91F1 (Vector2DictionaryKeyPathProvider_t44A64799A6D0A2F9A916BF1858FDB1BC017CD062 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___key0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector2DictionaryKeyPathProvider_GetPathStringFromKey_mC3A6F3EDECA418B55C99B7C73F43320515DD91F1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		float* L_0 = (&___key0)->get_address_of_x_0();
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var);
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_1 = CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72(/*hidden argument*/NULL);
		String_t* L_2 = Single_ToString_mCF682C2751EC9B98F1CE5455066B92D7D3356756((float*)L_0, _stringLiteral06576556D1AD802F247CAD11AE748BE47B70CD9C, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		float* L_3 = (&___key0)->get_address_of_y_1();
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_4 = CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72(/*hidden argument*/NULL);
		String_t* L_5 = Single_ToString_mCF682C2751EC9B98F1CE5455066B92D7D3356756((float*)L_3, _stringLiteral06576556D1AD802F247CAD11AE748BE47B70CD9C, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_6 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_7 = L_6;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral28ED3A797DA3C48C309A4EF792147F3C56CFEC40);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral28ED3A797DA3C48C309A4EF792147F3C56CFEC40);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_8 = L_7;
		String_t* L_9 = V_0;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_9);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_10 = L_8;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteral3EB416223E9E69E6BB8EE19793911AD1AD2027D8);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral3EB416223E9E69E6BB8EE19793911AD1AD2027D8);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_11 = L_10;
		String_t* L_12 = V_1;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_12);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_13 = L_11;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteralE7064F0B80F61DBC65915311032D27BAA569AE2A);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralE7064F0B80F61DBC65915311032D27BAA569AE2A);
		String_t* L_14 = String_Concat_m232E857CA5107EA6AC52E7DD7018716C021F237B(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		String_t* L_15 = String_Replace_m276641366A463205C185A9B3DC0E24ECB95122C9(L_14, ((int32_t)46), ((int32_t)44), /*hidden argument*/NULL);
		return L_15;
	}
}
// System.Void Ludiq.OdinSerializer.Vector2DictionaryKeyPathProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2DictionaryKeyPathProvider__ctor_m3A367E9503646523DD61FF17512A68456C94D3DD (Vector2DictionaryKeyPathProvider_t44A64799A6D0A2F9A916BF1858FDB1BC017CD062 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector2DictionaryKeyPathProvider__ctor_m3A367E9503646523DD61FF17512A68456C94D3DD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		BaseDictionaryKeyPathProvider_1__ctor_mDDF4CA5FA8103572F762F49186C6759AFDD1DCE4(__this, /*hidden argument*/BaseDictionaryKeyPathProvider_1__ctor_mDDF4CA5FA8103572F762F49186C6759AFDD1DCE4_RuntimeMethod_var);
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
// System.Void Ludiq.OdinSerializer.Vector2Formatter::Read(UnityEngine.Vector2&,Ludiq.OdinSerializer.IDataReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2Formatter_Read_mD23202AC95B6D7789005A6A2A3F93477BCEF418E (Vector2Formatter_tD255F733B7C2E92F275552805687312FE984A599 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * ___value0, RuntimeObject* ___reader1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector2Formatter_Read_mD23202AC95B6D7789005A6A2A3F93477BCEF418E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2Formatter_tD255F733B7C2E92F275552805687312FE984A599_il2cpp_TypeInfo_var);
		Serializer_1_tB5154B4A9ADD83AA51ACE4FBB4D5F0602FBBFA6A * L_1 = ((Vector2Formatter_tD255F733B7C2E92F275552805687312FE984A599_StaticFields*)il2cpp_codegen_static_fields_for(Vector2Formatter_tD255F733B7C2E92F275552805687312FE984A599_il2cpp_TypeInfo_var))->get_FloatSerializer_1();
		RuntimeObject* L_2 = ___reader1;
		NullCheck(L_1);
		float L_3 = VirtFuncInvoker1< float, RuntimeObject* >::Invoke(6 /* T Ludiq.OdinSerializer.Serializer`1<System.Single>::ReadValue(Ludiq.OdinSerializer.IDataReader) */, L_1, L_2);
		L_0->set_x_0(L_3);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_4 = ___value0;
		Serializer_1_tB5154B4A9ADD83AA51ACE4FBB4D5F0602FBBFA6A * L_5 = ((Vector2Formatter_tD255F733B7C2E92F275552805687312FE984A599_StaticFields*)il2cpp_codegen_static_fields_for(Vector2Formatter_tD255F733B7C2E92F275552805687312FE984A599_il2cpp_TypeInfo_var))->get_FloatSerializer_1();
		RuntimeObject* L_6 = ___reader1;
		NullCheck(L_5);
		float L_7 = VirtFuncInvoker1< float, RuntimeObject* >::Invoke(6 /* T Ludiq.OdinSerializer.Serializer`1<System.Single>::ReadValue(Ludiq.OdinSerializer.IDataReader) */, L_5, L_6);
		L_4->set_y_1(L_7);
		return;
	}
}
// System.Void Ludiq.OdinSerializer.Vector2Formatter::Write(UnityEngine.Vector2&,Ludiq.OdinSerializer.IDataWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2Formatter_Write_m8C9567C61B71164A901D1159922A924278D6EF03 (Vector2Formatter_tD255F733B7C2E92F275552805687312FE984A599 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * ___value0, RuntimeObject* ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector2Formatter_Write_m8C9567C61B71164A901D1159922A924278D6EF03_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector2Formatter_tD255F733B7C2E92F275552805687312FE984A599_il2cpp_TypeInfo_var);
		Serializer_1_tB5154B4A9ADD83AA51ACE4FBB4D5F0602FBBFA6A * L_0 = ((Vector2Formatter_tD255F733B7C2E92F275552805687312FE984A599_StaticFields*)il2cpp_codegen_static_fields_for(Vector2Formatter_tD255F733B7C2E92F275552805687312FE984A599_il2cpp_TypeInfo_var))->get_FloatSerializer_1();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_1 = ___value0;
		float L_2 = L_1->get_x_0();
		RuntimeObject* L_3 = ___writer1;
		NullCheck(L_0);
		Serializer_1_WriteValue_m86E725E1508B079D64713F8ECA68875392FE5529(L_0, L_2, L_3, /*hidden argument*/Serializer_1_WriteValue_m86E725E1508B079D64713F8ECA68875392FE5529_RuntimeMethod_var);
		Serializer_1_tB5154B4A9ADD83AA51ACE4FBB4D5F0602FBBFA6A * L_4 = ((Vector2Formatter_tD255F733B7C2E92F275552805687312FE984A599_StaticFields*)il2cpp_codegen_static_fields_for(Vector2Formatter_tD255F733B7C2E92F275552805687312FE984A599_il2cpp_TypeInfo_var))->get_FloatSerializer_1();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_5 = ___value0;
		float L_6 = L_5->get_y_1();
		RuntimeObject* L_7 = ___writer1;
		NullCheck(L_4);
		Serializer_1_WriteValue_m86E725E1508B079D64713F8ECA68875392FE5529(L_4, L_6, L_7, /*hidden argument*/Serializer_1_WriteValue_m86E725E1508B079D64713F8ECA68875392FE5529_RuntimeMethod_var);
		return;
	}
}
// System.Void Ludiq.OdinSerializer.Vector2Formatter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2Formatter__ctor_mC89FCEE82313CBED427E513D24E3FE549F47875B (Vector2Formatter_tD255F733B7C2E92F275552805687312FE984A599 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector2Formatter__ctor_mC89FCEE82313CBED427E513D24E3FE549F47875B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(MinimalBaseFormatter_1_t3FEF32251D23D78F0F5718CCF8313661795D0F4F_il2cpp_TypeInfo_var);
		MinimalBaseFormatter_1__ctor_m25E0E8BC1FA61D6B170DDAE16E35DCE11FB2121E(__this, /*hidden argument*/MinimalBaseFormatter_1__ctor_m25E0E8BC1FA61D6B170DDAE16E35DCE11FB2121E_RuntimeMethod_var);
		return;
	}
}
// System.Void Ludiq.OdinSerializer.Vector2Formatter::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2Formatter__cctor_m7789BF81BF0A1BC7D8943B487825C85B2752759A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector2Formatter__cctor_m7789BF81BF0A1BC7D8943B487825C85B2752759A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Serializer_tC51784B7099FCC3F2894FFE9C6E394C71953A32C_il2cpp_TypeInfo_var);
		Serializer_1_tB5154B4A9ADD83AA51ACE4FBB4D5F0602FBBFA6A * L_0 = Serializer_Get_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_m9DCCE8CFFEF171F01BD500D95B42E26011BC77DC(/*hidden argument*/Serializer_Get_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_m9DCCE8CFFEF171F01BD500D95B42E26011BC77DC_RuntimeMethod_var);
		((Vector2Formatter_tD255F733B7C2E92F275552805687312FE984A599_StaticFields*)il2cpp_codegen_static_fields_for(Vector2Formatter_tD255F733B7C2E92F275552805687312FE984A599_il2cpp_TypeInfo_var))->set_FloatSerializer_1(L_0);
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
// System.String Ludiq.OdinSerializer.Vector3DictionaryKeyPathProvider::get_ProviderID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector3DictionaryKeyPathProvider_get_ProviderID_mD1820825360A12573C4BF19A3EFEEFF48418DABE (Vector3DictionaryKeyPathProvider_t1661256BFACF448B0933BDA7BE07D499877D20E1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector3DictionaryKeyPathProvider_get_ProviderID_mD1820825360A12573C4BF19A3EFEEFF48418DABE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralC5E31D5915661DE4393E3F1489B00EBC4497DD48;
	}
}
// System.Int32 Ludiq.OdinSerializer.Vector3DictionaryKeyPathProvider::Compare(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector3DictionaryKeyPathProvider_Compare_mD7105806FC7BA05A80ECD595A8A586548D451DFE (Vector3DictionaryKeyPathProvider_t1661256BFACF448B0933BDA7BE07D499877D20E1 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___x0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___y1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		float* L_0 = (&___x0)->get_address_of_x_2();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___y1;
		float L_2 = L_1.get_x_2();
		int32_t L_3 = Single_CompareTo_mFBF2345D81E00F834E558A4ACFD4E5137582DBBC((float*)L_0, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		if (L_4)
		{
			goto IL_0029;
		}
	}
	{
		float* L_5 = (&___x0)->get_address_of_y_3();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = ___y1;
		float L_7 = L_6.get_y_3();
		int32_t L_8 = Single_CompareTo_mFBF2345D81E00F834E558A4ACFD4E5137582DBBC((float*)L_5, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
	}

IL_0029:
	{
		int32_t L_9 = V_0;
		if (L_9)
		{
			goto IL_003f;
		}
	}
	{
		float* L_10 = (&___x0)->get_address_of_z_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = ___y1;
		float L_12 = L_11.get_z_4();
		int32_t L_13 = Single_CompareTo_mFBF2345D81E00F834E558A4ACFD4E5137582DBBC((float*)L_10, L_12, /*hidden argument*/NULL);
		V_0 = L_13;
	}

IL_003f:
	{
		int32_t L_14 = V_0;
		return L_14;
	}
}
// UnityEngine.Vector3 Ludiq.OdinSerializer.Vector3DictionaryKeyPathProvider::GetKeyFromPathString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3DictionaryKeyPathProvider_GetKeyFromPathString_mEF561D92110D5EEB9724A15E3CF192573F7258CF (Vector3DictionaryKeyPathProvider_t1661256BFACF448B0933BDA7BE07D499877D20E1 * __this, String_t* ___pathStr0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		String_t* L_0 = ___pathStr0;
		NullCheck(L_0);
		int32_t L_1 = String_IndexOf_m2909B8CF585E1BD0C81E11ACA2F48012156FD5BD(L_0, ((int32_t)124), /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = ___pathStr0;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = String_IndexOf_m66F6178DB4B2F61F4FAFD8B75787D0AB142ADD7D(L_2, ((int32_t)124), ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)), /*hidden argument*/NULL);
		V_1 = L_4;
		String_t* L_5 = ___pathStr0;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		String_t* L_7 = String_Substring_mB593C0A320C683E6E47EFFC0A12B7A465E5E43BB(L_5, 1, ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1)), /*hidden argument*/NULL);
		NullCheck(L_7);
		String_t* L_8 = String_Trim_mB52EB7876C7132358B76B7DC95DEACA20722EF4D(L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		String_t* L_9 = ___pathStr0;
		int32_t L_10 = V_0;
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		NullCheck(L_9);
		String_t* L_13 = String_Substring_mB593C0A320C683E6E47EFFC0A12B7A465E5E43BB(L_9, ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1)), ((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1)))), /*hidden argument*/NULL);
		NullCheck(L_13);
		String_t* L_14 = String_Trim_mB52EB7876C7132358B76B7DC95DEACA20722EF4D(L_13, /*hidden argument*/NULL);
		V_3 = L_14;
		String_t* L_15 = ___pathStr0;
		int32_t L_16 = V_1;
		String_t* L_17 = ___pathStr0;
		NullCheck(L_17);
		int32_t L_18 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_17, /*hidden argument*/NULL);
		int32_t L_19 = V_1;
		NullCheck(L_15);
		String_t* L_20 = String_Substring_mB593C0A320C683E6E47EFFC0A12B7A465E5E43BB(L_15, ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1)), ((int32_t)il2cpp_codegen_subtract((int32_t)L_18, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)2)))), /*hidden argument*/NULL);
		NullCheck(L_20);
		String_t* L_21 = String_Trim_mB52EB7876C7132358B76B7DC95DEACA20722EF4D(L_20, /*hidden argument*/NULL);
		V_4 = L_21;
		String_t* L_22 = V_2;
		float L_23 = Single_Parse_m643ECE18CB0499B2B3EC76C8B941020122003DC6(L_22, /*hidden argument*/NULL);
		String_t* L_24 = V_3;
		float L_25 = Single_Parse_m643ECE18CB0499B2B3EC76C8B941020122003DC6(L_24, /*hidden argument*/NULL);
		String_t* L_26 = V_4;
		float L_27 = Single_Parse_m643ECE18CB0499B2B3EC76C8B941020122003DC6(L_26, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_28;
		memset((&L_28), 0, sizeof(L_28));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_28), L_23, L_25, L_27, /*hidden argument*/NULL);
		return L_28;
	}
}
// System.String Ludiq.OdinSerializer.Vector3DictionaryKeyPathProvider::GetPathStringFromKey(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector3DictionaryKeyPathProvider_GetPathStringFromKey_mF331030740529A33E1664CC8278E324F76C64402 (Vector3DictionaryKeyPathProvider_t1661256BFACF448B0933BDA7BE07D499877D20E1 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___key0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector3DictionaryKeyPathProvider_GetPathStringFromKey_mF331030740529A33E1664CC8278E324F76C64402_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	{
		float* L_0 = (&___key0)->get_address_of_x_2();
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var);
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_1 = CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72(/*hidden argument*/NULL);
		String_t* L_2 = Single_ToString_mCF682C2751EC9B98F1CE5455066B92D7D3356756((float*)L_0, _stringLiteral06576556D1AD802F247CAD11AE748BE47B70CD9C, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		float* L_3 = (&___key0)->get_address_of_y_3();
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_4 = CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72(/*hidden argument*/NULL);
		String_t* L_5 = Single_ToString_mCF682C2751EC9B98F1CE5455066B92D7D3356756((float*)L_3, _stringLiteral06576556D1AD802F247CAD11AE748BE47B70CD9C, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		float* L_6 = (&___key0)->get_address_of_z_4();
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_7 = CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72(/*hidden argument*/NULL);
		String_t* L_8 = Single_ToString_mCF682C2751EC9B98F1CE5455066B92D7D3356756((float*)L_6, _stringLiteral06576556D1AD802F247CAD11AE748BE47B70CD9C, L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_9 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)7);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_10 = L_9;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteral28ED3A797DA3C48C309A4EF792147F3C56CFEC40);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral28ED3A797DA3C48C309A4EF792147F3C56CFEC40);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_11 = L_10;
		String_t* L_12 = V_0;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_12);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_13 = L_11;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteral3EB416223E9E69E6BB8EE19793911AD1AD2027D8);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral3EB416223E9E69E6BB8EE19793911AD1AD2027D8);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_14 = L_13;
		String_t* L_15 = V_1;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_15);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_15);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_16 = L_14;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, _stringLiteral3EB416223E9E69E6BB8EE19793911AD1AD2027D8);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral3EB416223E9E69E6BB8EE19793911AD1AD2027D8);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_17 = L_16;
		String_t* L_18 = V_2;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_18);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_19 = L_17;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, _stringLiteralE7064F0B80F61DBC65915311032D27BAA569AE2A);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteralE7064F0B80F61DBC65915311032D27BAA569AE2A);
		String_t* L_20 = String_Concat_m232E857CA5107EA6AC52E7DD7018716C021F237B(L_19, /*hidden argument*/NULL);
		NullCheck(L_20);
		String_t* L_21 = String_Replace_m276641366A463205C185A9B3DC0E24ECB95122C9(L_20, ((int32_t)46), ((int32_t)44), /*hidden argument*/NULL);
		return L_21;
	}
}
// System.Void Ludiq.OdinSerializer.Vector3DictionaryKeyPathProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3DictionaryKeyPathProvider__ctor_m4563D0145B144F77D4F5445FBB5E7884CEF2DAF9 (Vector3DictionaryKeyPathProvider_t1661256BFACF448B0933BDA7BE07D499877D20E1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector3DictionaryKeyPathProvider__ctor_m4563D0145B144F77D4F5445FBB5E7884CEF2DAF9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		BaseDictionaryKeyPathProvider_1__ctor_m5F094D95F603BCD0D8C662174583875DBD3FB40C(__this, /*hidden argument*/BaseDictionaryKeyPathProvider_1__ctor_m5F094D95F603BCD0D8C662174583875DBD3FB40C_RuntimeMethod_var);
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
// System.Void Ludiq.OdinSerializer.Vector3Formatter::Read(UnityEngine.Vector3&,Ludiq.OdinSerializer.IDataReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3Formatter_Read_m5595E0681B4DA079AC1A7BD242852597E639AD7C (Vector3Formatter_t8D5B221A255A7F8E8765B487C881CD2498D6855C * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___value0, RuntimeObject* ___reader1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector3Formatter_Read_m5595E0681B4DA079AC1A7BD242852597E639AD7C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3Formatter_t8D5B221A255A7F8E8765B487C881CD2498D6855C_il2cpp_TypeInfo_var);
		Serializer_1_tB5154B4A9ADD83AA51ACE4FBB4D5F0602FBBFA6A * L_1 = ((Vector3Formatter_t8D5B221A255A7F8E8765B487C881CD2498D6855C_StaticFields*)il2cpp_codegen_static_fields_for(Vector3Formatter_t8D5B221A255A7F8E8765B487C881CD2498D6855C_il2cpp_TypeInfo_var))->get_FloatSerializer_1();
		RuntimeObject* L_2 = ___reader1;
		NullCheck(L_1);
		float L_3 = VirtFuncInvoker1< float, RuntimeObject* >::Invoke(6 /* T Ludiq.OdinSerializer.Serializer`1<System.Single>::ReadValue(Ludiq.OdinSerializer.IDataReader) */, L_1, L_2);
		L_0->set_x_2(L_3);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_4 = ___value0;
		Serializer_1_tB5154B4A9ADD83AA51ACE4FBB4D5F0602FBBFA6A * L_5 = ((Vector3Formatter_t8D5B221A255A7F8E8765B487C881CD2498D6855C_StaticFields*)il2cpp_codegen_static_fields_for(Vector3Formatter_t8D5B221A255A7F8E8765B487C881CD2498D6855C_il2cpp_TypeInfo_var))->get_FloatSerializer_1();
		RuntimeObject* L_6 = ___reader1;
		NullCheck(L_5);
		float L_7 = VirtFuncInvoker1< float, RuntimeObject* >::Invoke(6 /* T Ludiq.OdinSerializer.Serializer`1<System.Single>::ReadValue(Ludiq.OdinSerializer.IDataReader) */, L_5, L_6);
		L_4->set_y_3(L_7);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_8 = ___value0;
		Serializer_1_tB5154B4A9ADD83AA51ACE4FBB4D5F0602FBBFA6A * L_9 = ((Vector3Formatter_t8D5B221A255A7F8E8765B487C881CD2498D6855C_StaticFields*)il2cpp_codegen_static_fields_for(Vector3Formatter_t8D5B221A255A7F8E8765B487C881CD2498D6855C_il2cpp_TypeInfo_var))->get_FloatSerializer_1();
		RuntimeObject* L_10 = ___reader1;
		NullCheck(L_9);
		float L_11 = VirtFuncInvoker1< float, RuntimeObject* >::Invoke(6 /* T Ludiq.OdinSerializer.Serializer`1<System.Single>::ReadValue(Ludiq.OdinSerializer.IDataReader) */, L_9, L_10);
		L_8->set_z_4(L_11);
		return;
	}
}
// System.Void Ludiq.OdinSerializer.Vector3Formatter::Write(UnityEngine.Vector3&,Ludiq.OdinSerializer.IDataWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3Formatter_Write_m8678F45DB0F2309756726A33403DEE7737A108F7 (Vector3Formatter_t8D5B221A255A7F8E8765B487C881CD2498D6855C * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___value0, RuntimeObject* ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector3Formatter_Write_m8678F45DB0F2309756726A33403DEE7737A108F7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3Formatter_t8D5B221A255A7F8E8765B487C881CD2498D6855C_il2cpp_TypeInfo_var);
		Serializer_1_tB5154B4A9ADD83AA51ACE4FBB4D5F0602FBBFA6A * L_0 = ((Vector3Formatter_t8D5B221A255A7F8E8765B487C881CD2498D6855C_StaticFields*)il2cpp_codegen_static_fields_for(Vector3Formatter_t8D5B221A255A7F8E8765B487C881CD2498D6855C_il2cpp_TypeInfo_var))->get_FloatSerializer_1();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_1 = ___value0;
		float L_2 = L_1->get_x_2();
		RuntimeObject* L_3 = ___writer1;
		NullCheck(L_0);
		Serializer_1_WriteValue_m86E725E1508B079D64713F8ECA68875392FE5529(L_0, L_2, L_3, /*hidden argument*/Serializer_1_WriteValue_m86E725E1508B079D64713F8ECA68875392FE5529_RuntimeMethod_var);
		Serializer_1_tB5154B4A9ADD83AA51ACE4FBB4D5F0602FBBFA6A * L_4 = ((Vector3Formatter_t8D5B221A255A7F8E8765B487C881CD2498D6855C_StaticFields*)il2cpp_codegen_static_fields_for(Vector3Formatter_t8D5B221A255A7F8E8765B487C881CD2498D6855C_il2cpp_TypeInfo_var))->get_FloatSerializer_1();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_5 = ___value0;
		float L_6 = L_5->get_y_3();
		RuntimeObject* L_7 = ___writer1;
		NullCheck(L_4);
		Serializer_1_WriteValue_m86E725E1508B079D64713F8ECA68875392FE5529(L_4, L_6, L_7, /*hidden argument*/Serializer_1_WriteValue_m86E725E1508B079D64713F8ECA68875392FE5529_RuntimeMethod_var);
		Serializer_1_tB5154B4A9ADD83AA51ACE4FBB4D5F0602FBBFA6A * L_8 = ((Vector3Formatter_t8D5B221A255A7F8E8765B487C881CD2498D6855C_StaticFields*)il2cpp_codegen_static_fields_for(Vector3Formatter_t8D5B221A255A7F8E8765B487C881CD2498D6855C_il2cpp_TypeInfo_var))->get_FloatSerializer_1();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_9 = ___value0;
		float L_10 = L_9->get_z_4();
		RuntimeObject* L_11 = ___writer1;
		NullCheck(L_8);
		Serializer_1_WriteValue_m86E725E1508B079D64713F8ECA68875392FE5529(L_8, L_10, L_11, /*hidden argument*/Serializer_1_WriteValue_m86E725E1508B079D64713F8ECA68875392FE5529_RuntimeMethod_var);
		return;
	}
}
// System.Void Ludiq.OdinSerializer.Vector3Formatter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3Formatter__ctor_m451D7591D3C70DA07B3093FEAF98E552BDD0BB2A (Vector3Formatter_t8D5B221A255A7F8E8765B487C881CD2498D6855C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector3Formatter__ctor_m451D7591D3C70DA07B3093FEAF98E552BDD0BB2A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(MinimalBaseFormatter_1_tE2EE91A4B8AE5422EA403BCA9F754F9A11C67994_il2cpp_TypeInfo_var);
		MinimalBaseFormatter_1__ctor_m170B716A39106DD5F885CB36DD4324F3BB9B3E26(__this, /*hidden argument*/MinimalBaseFormatter_1__ctor_m170B716A39106DD5F885CB36DD4324F3BB9B3E26_RuntimeMethod_var);
		return;
	}
}
// System.Void Ludiq.OdinSerializer.Vector3Formatter::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3Formatter__cctor_m8DE41C86A9086B627BB8575ED02603EB77C020AC (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector3Formatter__cctor_m8DE41C86A9086B627BB8575ED02603EB77C020AC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Serializer_tC51784B7099FCC3F2894FFE9C6E394C71953A32C_il2cpp_TypeInfo_var);
		Serializer_1_tB5154B4A9ADD83AA51ACE4FBB4D5F0602FBBFA6A * L_0 = Serializer_Get_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_m9DCCE8CFFEF171F01BD500D95B42E26011BC77DC(/*hidden argument*/Serializer_Get_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_m9DCCE8CFFEF171F01BD500D95B42E26011BC77DC_RuntimeMethod_var);
		((Vector3Formatter_t8D5B221A255A7F8E8765B487C881CD2498D6855C_StaticFields*)il2cpp_codegen_static_fields_for(Vector3Formatter_t8D5B221A255A7F8E8765B487C881CD2498D6855C_il2cpp_TypeInfo_var))->set_FloatSerializer_1(L_0);
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
// System.String Ludiq.OdinSerializer.Vector4DictionaryKeyPathProvider::get_ProviderID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector4DictionaryKeyPathProvider_get_ProviderID_mB3E637780301835CD9870536799CD56312BEA86C (Vector4DictionaryKeyPathProvider_t94C11F8EEF6EC16608738A695E77A69F20BE8CA6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector4DictionaryKeyPathProvider_get_ProviderID_mB3E637780301835CD9870536799CD56312BEA86C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral8090FD368C8382FD4B216C5BAA04C99769DFCC49;
	}
}
// System.Int32 Ludiq.OdinSerializer.Vector4DictionaryKeyPathProvider::Compare(UnityEngine.Vector4,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector4DictionaryKeyPathProvider_Compare_mFB77EFFB94AF6DD23E206EE0844D871B4BF341B2 (Vector4DictionaryKeyPathProvider_t94C11F8EEF6EC16608738A695E77A69F20BE8CA6 * __this, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___x0, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___y1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		float* L_0 = (&___x0)->get_address_of_x_1();
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_1 = ___y1;
		float L_2 = L_1.get_x_1();
		int32_t L_3 = Single_CompareTo_mFBF2345D81E00F834E558A4ACFD4E5137582DBBC((float*)L_0, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		if (L_4)
		{
			goto IL_0029;
		}
	}
	{
		float* L_5 = (&___x0)->get_address_of_y_2();
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_6 = ___y1;
		float L_7 = L_6.get_y_2();
		int32_t L_8 = Single_CompareTo_mFBF2345D81E00F834E558A4ACFD4E5137582DBBC((float*)L_5, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
	}

IL_0029:
	{
		int32_t L_9 = V_0;
		if (L_9)
		{
			goto IL_003f;
		}
	}
	{
		float* L_10 = (&___x0)->get_address_of_z_3();
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_11 = ___y1;
		float L_12 = L_11.get_z_3();
		int32_t L_13 = Single_CompareTo_mFBF2345D81E00F834E558A4ACFD4E5137582DBBC((float*)L_10, L_12, /*hidden argument*/NULL);
		V_0 = L_13;
	}

IL_003f:
	{
		int32_t L_14 = V_0;
		if (L_14)
		{
			goto IL_0055;
		}
	}
	{
		float* L_15 = (&___x0)->get_address_of_w_4();
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_16 = ___y1;
		float L_17 = L_16.get_w_4();
		int32_t L_18 = Single_CompareTo_mFBF2345D81E00F834E558A4ACFD4E5137582DBBC((float*)L_15, L_17, /*hidden argument*/NULL);
		V_0 = L_18;
	}

IL_0055:
	{
		int32_t L_19 = V_0;
		return L_19;
	}
}
// UnityEngine.Vector4 Ludiq.OdinSerializer.Vector4DictionaryKeyPathProvider::GetKeyFromPathString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  Vector4DictionaryKeyPathProvider_GetKeyFromPathString_m6DC14A5EB2468C05F9358D4C85665B83F9B3948D (Vector4DictionaryKeyPathProvider_t94C11F8EEF6EC16608738A695E77A69F20BE8CA6 * __this, String_t* ___pathStr0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	String_t* V_5 = NULL;
	String_t* V_6 = NULL;
	{
		String_t* L_0 = ___pathStr0;
		NullCheck(L_0);
		int32_t L_1 = String_IndexOf_m2909B8CF585E1BD0C81E11ACA2F48012156FD5BD(L_0, ((int32_t)124), /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = ___pathStr0;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = String_IndexOf_m66F6178DB4B2F61F4FAFD8B75787D0AB142ADD7D(L_2, ((int32_t)124), ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)), /*hidden argument*/NULL);
		V_1 = L_4;
		String_t* L_5 = ___pathStr0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		int32_t L_7 = String_IndexOf_m66F6178DB4B2F61F4FAFD8B75787D0AB142ADD7D(L_5, ((int32_t)124), ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1)), /*hidden argument*/NULL);
		V_2 = L_7;
		String_t* L_8 = ___pathStr0;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		String_t* L_10 = String_Substring_mB593C0A320C683E6E47EFFC0A12B7A465E5E43BB(L_8, 1, ((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)1)), /*hidden argument*/NULL);
		NullCheck(L_10);
		String_t* L_11 = String_Trim_mB52EB7876C7132358B76B7DC95DEACA20722EF4D(L_10, /*hidden argument*/NULL);
		V_3 = L_11;
		String_t* L_12 = ___pathStr0;
		int32_t L_13 = V_0;
		int32_t L_14 = V_1;
		int32_t L_15 = V_0;
		NullCheck(L_12);
		String_t* L_16 = String_Substring_mB593C0A320C683E6E47EFFC0A12B7A465E5E43BB(L_12, ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1)), ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1)))), /*hidden argument*/NULL);
		NullCheck(L_16);
		String_t* L_17 = String_Trim_mB52EB7876C7132358B76B7DC95DEACA20722EF4D(L_16, /*hidden argument*/NULL);
		V_4 = L_17;
		String_t* L_18 = ___pathStr0;
		int32_t L_19 = V_1;
		int32_t L_20 = V_2;
		int32_t L_21 = V_1;
		NullCheck(L_18);
		String_t* L_22 = String_Substring_mB593C0A320C683E6E47EFFC0A12B7A465E5E43BB(L_18, ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1)), ((int32_t)il2cpp_codegen_subtract((int32_t)L_20, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1)))), /*hidden argument*/NULL);
		NullCheck(L_22);
		String_t* L_23 = String_Trim_mB52EB7876C7132358B76B7DC95DEACA20722EF4D(L_22, /*hidden argument*/NULL);
		V_5 = L_23;
		String_t* L_24 = ___pathStr0;
		int32_t L_25 = V_2;
		String_t* L_26 = ___pathStr0;
		NullCheck(L_26);
		int32_t L_27 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_26, /*hidden argument*/NULL);
		int32_t L_28 = V_2;
		NullCheck(L_24);
		String_t* L_29 = String_Substring_mB593C0A320C683E6E47EFFC0A12B7A465E5E43BB(L_24, ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1)), ((int32_t)il2cpp_codegen_subtract((int32_t)L_27, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)2)))), /*hidden argument*/NULL);
		NullCheck(L_29);
		String_t* L_30 = String_Trim_mB52EB7876C7132358B76B7DC95DEACA20722EF4D(L_29, /*hidden argument*/NULL);
		V_6 = L_30;
		String_t* L_31 = V_3;
		float L_32 = Single_Parse_m643ECE18CB0499B2B3EC76C8B941020122003DC6(L_31, /*hidden argument*/NULL);
		String_t* L_33 = V_4;
		float L_34 = Single_Parse_m643ECE18CB0499B2B3EC76C8B941020122003DC6(L_33, /*hidden argument*/NULL);
		String_t* L_35 = V_5;
		float L_36 = Single_Parse_m643ECE18CB0499B2B3EC76C8B941020122003DC6(L_35, /*hidden argument*/NULL);
		String_t* L_37 = V_6;
		float L_38 = Single_Parse_m643ECE18CB0499B2B3EC76C8B941020122003DC6(L_37, /*hidden argument*/NULL);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_39;
		memset((&L_39), 0, sizeof(L_39));
		Vector4__ctor_m545458525879607A5392A10B175D0C19B2BC715D((&L_39), L_32, L_34, L_36, L_38, /*hidden argument*/NULL);
		return L_39;
	}
}
// System.String Ludiq.OdinSerializer.Vector4DictionaryKeyPathProvider::GetPathStringFromKey(UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector4DictionaryKeyPathProvider_GetPathStringFromKey_mE527172ED6FF61E874978097B9DB30C2ADE4667A (Vector4DictionaryKeyPathProvider_t94C11F8EEF6EC16608738A695E77A69F20BE8CA6 * __this, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___key0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector4DictionaryKeyPathProvider_GetPathStringFromKey_mE527172ED6FF61E874978097B9DB30C2ADE4667A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	{
		float* L_0 = (&___key0)->get_address_of_x_1();
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var);
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_1 = CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72(/*hidden argument*/NULL);
		String_t* L_2 = Single_ToString_mCF682C2751EC9B98F1CE5455066B92D7D3356756((float*)L_0, _stringLiteral06576556D1AD802F247CAD11AE748BE47B70CD9C, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		float* L_3 = (&___key0)->get_address_of_y_2();
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_4 = CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72(/*hidden argument*/NULL);
		String_t* L_5 = Single_ToString_mCF682C2751EC9B98F1CE5455066B92D7D3356756((float*)L_3, _stringLiteral06576556D1AD802F247CAD11AE748BE47B70CD9C, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		float* L_6 = (&___key0)->get_address_of_z_3();
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_7 = CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72(/*hidden argument*/NULL);
		String_t* L_8 = Single_ToString_mCF682C2751EC9B98F1CE5455066B92D7D3356756((float*)L_6, _stringLiteral06576556D1AD802F247CAD11AE748BE47B70CD9C, L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		float* L_9 = (&___key0)->get_address_of_w_4();
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_10 = CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72(/*hidden argument*/NULL);
		String_t* L_11 = Single_ToString_mCF682C2751EC9B98F1CE5455066B92D7D3356756((float*)L_9, _stringLiteral06576556D1AD802F247CAD11AE748BE47B70CD9C, L_10, /*hidden argument*/NULL);
		V_3 = L_11;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_12 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_13 = L_12;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteral28ED3A797DA3C48C309A4EF792147F3C56CFEC40);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral28ED3A797DA3C48C309A4EF792147F3C56CFEC40);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_14 = L_13;
		String_t* L_15 = V_0;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_15);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_15);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_16 = L_14;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, _stringLiteral3EB416223E9E69E6BB8EE19793911AD1AD2027D8);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral3EB416223E9E69E6BB8EE19793911AD1AD2027D8);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_17 = L_16;
		String_t* L_18 = V_1;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_18);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_19 = L_17;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, _stringLiteral3EB416223E9E69E6BB8EE19793911AD1AD2027D8);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral3EB416223E9E69E6BB8EE19793911AD1AD2027D8);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_20 = L_19;
		String_t* L_21 = V_2;
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_21);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_21);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_22 = L_20;
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, _stringLiteral3EB416223E9E69E6BB8EE19793911AD1AD2027D8);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral3EB416223E9E69E6BB8EE19793911AD1AD2027D8);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_23 = L_22;
		String_t* L_24 = V_3;
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_24);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)L_24);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_25 = L_23;
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, _stringLiteralE7064F0B80F61DBC65915311032D27BAA569AE2A);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteralE7064F0B80F61DBC65915311032D27BAA569AE2A);
		String_t* L_26 = String_Concat_m232E857CA5107EA6AC52E7DD7018716C021F237B(L_25, /*hidden argument*/NULL);
		NullCheck(L_26);
		String_t* L_27 = String_Replace_m276641366A463205C185A9B3DC0E24ECB95122C9(L_26, ((int32_t)46), ((int32_t)44), /*hidden argument*/NULL);
		return L_27;
	}
}
// System.Void Ludiq.OdinSerializer.Vector4DictionaryKeyPathProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector4DictionaryKeyPathProvider__ctor_mEE254E0D753D4317653DAF4EB96636EAFE3B91C5 (Vector4DictionaryKeyPathProvider_t94C11F8EEF6EC16608738A695E77A69F20BE8CA6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector4DictionaryKeyPathProvider__ctor_mEE254E0D753D4317653DAF4EB96636EAFE3B91C5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		BaseDictionaryKeyPathProvider_1__ctor_m88A5D08C95D7FC76DA3618B1736D513A4D584F58(__this, /*hidden argument*/BaseDictionaryKeyPathProvider_1__ctor_m88A5D08C95D7FC76DA3618B1736D513A4D584F58_RuntimeMethod_var);
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
// System.Void Ludiq.OdinSerializer.Vector4Formatter::Read(UnityEngine.Vector4&,Ludiq.OdinSerializer.IDataReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector4Formatter_Read_m12BE19469B51963594B55362374D56A0A94F08E5 (Vector4Formatter_tAA4AB5D5086266E8369233F0CC4A28C49207FA26 * __this, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * ___value0, RuntimeObject* ___reader1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector4Formatter_Read_m12BE19469B51963594B55362374D56A0A94F08E5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector4Formatter_tAA4AB5D5086266E8369233F0CC4A28C49207FA26_il2cpp_TypeInfo_var);
		Serializer_1_tB5154B4A9ADD83AA51ACE4FBB4D5F0602FBBFA6A * L_1 = ((Vector4Formatter_tAA4AB5D5086266E8369233F0CC4A28C49207FA26_StaticFields*)il2cpp_codegen_static_fields_for(Vector4Formatter_tAA4AB5D5086266E8369233F0CC4A28C49207FA26_il2cpp_TypeInfo_var))->get_FloatSerializer_1();
		RuntimeObject* L_2 = ___reader1;
		NullCheck(L_1);
		float L_3 = VirtFuncInvoker1< float, RuntimeObject* >::Invoke(6 /* T Ludiq.OdinSerializer.Serializer`1<System.Single>::ReadValue(Ludiq.OdinSerializer.IDataReader) */, L_1, L_2);
		L_0->set_x_1(L_3);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * L_4 = ___value0;
		Serializer_1_tB5154B4A9ADD83AA51ACE4FBB4D5F0602FBBFA6A * L_5 = ((Vector4Formatter_tAA4AB5D5086266E8369233F0CC4A28C49207FA26_StaticFields*)il2cpp_codegen_static_fields_for(Vector4Formatter_tAA4AB5D5086266E8369233F0CC4A28C49207FA26_il2cpp_TypeInfo_var))->get_FloatSerializer_1();
		RuntimeObject* L_6 = ___reader1;
		NullCheck(L_5);
		float L_7 = VirtFuncInvoker1< float, RuntimeObject* >::Invoke(6 /* T Ludiq.OdinSerializer.Serializer`1<System.Single>::ReadValue(Ludiq.OdinSerializer.IDataReader) */, L_5, L_6);
		L_4->set_y_2(L_7);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * L_8 = ___value0;
		Serializer_1_tB5154B4A9ADD83AA51ACE4FBB4D5F0602FBBFA6A * L_9 = ((Vector4Formatter_tAA4AB5D5086266E8369233F0CC4A28C49207FA26_StaticFields*)il2cpp_codegen_static_fields_for(Vector4Formatter_tAA4AB5D5086266E8369233F0CC4A28C49207FA26_il2cpp_TypeInfo_var))->get_FloatSerializer_1();
		RuntimeObject* L_10 = ___reader1;
		NullCheck(L_9);
		float L_11 = VirtFuncInvoker1< float, RuntimeObject* >::Invoke(6 /* T Ludiq.OdinSerializer.Serializer`1<System.Single>::ReadValue(Ludiq.OdinSerializer.IDataReader) */, L_9, L_10);
		L_8->set_z_3(L_11);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * L_12 = ___value0;
		Serializer_1_tB5154B4A9ADD83AA51ACE4FBB4D5F0602FBBFA6A * L_13 = ((Vector4Formatter_tAA4AB5D5086266E8369233F0CC4A28C49207FA26_StaticFields*)il2cpp_codegen_static_fields_for(Vector4Formatter_tAA4AB5D5086266E8369233F0CC4A28C49207FA26_il2cpp_TypeInfo_var))->get_FloatSerializer_1();
		RuntimeObject* L_14 = ___reader1;
		NullCheck(L_13);
		float L_15 = VirtFuncInvoker1< float, RuntimeObject* >::Invoke(6 /* T Ludiq.OdinSerializer.Serializer`1<System.Single>::ReadValue(Ludiq.OdinSerializer.IDataReader) */, L_13, L_14);
		L_12->set_w_4(L_15);
		return;
	}
}
// System.Void Ludiq.OdinSerializer.Vector4Formatter::Write(UnityEngine.Vector4&,Ludiq.OdinSerializer.IDataWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector4Formatter_Write_m679899479B4766CA824517F8B0D76C15A70D6D00 (Vector4Formatter_tAA4AB5D5086266E8369233F0CC4A28C49207FA26 * __this, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * ___value0, RuntimeObject* ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector4Formatter_Write_m679899479B4766CA824517F8B0D76C15A70D6D00_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector4Formatter_tAA4AB5D5086266E8369233F0CC4A28C49207FA26_il2cpp_TypeInfo_var);
		Serializer_1_tB5154B4A9ADD83AA51ACE4FBB4D5F0602FBBFA6A * L_0 = ((Vector4Formatter_tAA4AB5D5086266E8369233F0CC4A28C49207FA26_StaticFields*)il2cpp_codegen_static_fields_for(Vector4Formatter_tAA4AB5D5086266E8369233F0CC4A28C49207FA26_il2cpp_TypeInfo_var))->get_FloatSerializer_1();
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * L_1 = ___value0;
		float L_2 = L_1->get_x_1();
		RuntimeObject* L_3 = ___writer1;
		NullCheck(L_0);
		Serializer_1_WriteValue_m86E725E1508B079D64713F8ECA68875392FE5529(L_0, L_2, L_3, /*hidden argument*/Serializer_1_WriteValue_m86E725E1508B079D64713F8ECA68875392FE5529_RuntimeMethod_var);
		Serializer_1_tB5154B4A9ADD83AA51ACE4FBB4D5F0602FBBFA6A * L_4 = ((Vector4Formatter_tAA4AB5D5086266E8369233F0CC4A28C49207FA26_StaticFields*)il2cpp_codegen_static_fields_for(Vector4Formatter_tAA4AB5D5086266E8369233F0CC4A28C49207FA26_il2cpp_TypeInfo_var))->get_FloatSerializer_1();
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * L_5 = ___value0;
		float L_6 = L_5->get_y_2();
		RuntimeObject* L_7 = ___writer1;
		NullCheck(L_4);
		Serializer_1_WriteValue_m86E725E1508B079D64713F8ECA68875392FE5529(L_4, L_6, L_7, /*hidden argument*/Serializer_1_WriteValue_m86E725E1508B079D64713F8ECA68875392FE5529_RuntimeMethod_var);
		Serializer_1_tB5154B4A9ADD83AA51ACE4FBB4D5F0602FBBFA6A * L_8 = ((Vector4Formatter_tAA4AB5D5086266E8369233F0CC4A28C49207FA26_StaticFields*)il2cpp_codegen_static_fields_for(Vector4Formatter_tAA4AB5D5086266E8369233F0CC4A28C49207FA26_il2cpp_TypeInfo_var))->get_FloatSerializer_1();
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * L_9 = ___value0;
		float L_10 = L_9->get_z_3();
		RuntimeObject* L_11 = ___writer1;
		NullCheck(L_8);
		Serializer_1_WriteValue_m86E725E1508B079D64713F8ECA68875392FE5529(L_8, L_10, L_11, /*hidden argument*/Serializer_1_WriteValue_m86E725E1508B079D64713F8ECA68875392FE5529_RuntimeMethod_var);
		Serializer_1_tB5154B4A9ADD83AA51ACE4FBB4D5F0602FBBFA6A * L_12 = ((Vector4Formatter_tAA4AB5D5086266E8369233F0CC4A28C49207FA26_StaticFields*)il2cpp_codegen_static_fields_for(Vector4Formatter_tAA4AB5D5086266E8369233F0CC4A28C49207FA26_il2cpp_TypeInfo_var))->get_FloatSerializer_1();
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * L_13 = ___value0;
		float L_14 = L_13->get_w_4();
		RuntimeObject* L_15 = ___writer1;
		NullCheck(L_12);
		Serializer_1_WriteValue_m86E725E1508B079D64713F8ECA68875392FE5529(L_12, L_14, L_15, /*hidden argument*/Serializer_1_WriteValue_m86E725E1508B079D64713F8ECA68875392FE5529_RuntimeMethod_var);
		return;
	}
}
// System.Void Ludiq.OdinSerializer.Vector4Formatter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector4Formatter__ctor_mA7903DE789F310AD1E14377EB1D21D226B673A3D (Vector4Formatter_tAA4AB5D5086266E8369233F0CC4A28C49207FA26 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector4Formatter__ctor_mA7903DE789F310AD1E14377EB1D21D226B673A3D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(MinimalBaseFormatter_1_tB70FC2FB8F1AE89EB60830477575D52702E1FDE3_il2cpp_TypeInfo_var);
		MinimalBaseFormatter_1__ctor_mBEA12891C161AEDD804540F839473E762DF392AB(__this, /*hidden argument*/MinimalBaseFormatter_1__ctor_mBEA12891C161AEDD804540F839473E762DF392AB_RuntimeMethod_var);
		return;
	}
}
// System.Void Ludiq.OdinSerializer.Vector4Formatter::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector4Formatter__cctor_m238BF7BEBC4DC2FE5E7B83E2276C299A294BB11F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector4Formatter__cctor_m238BF7BEBC4DC2FE5E7B83E2276C299A294BB11F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Serializer_tC51784B7099FCC3F2894FFE9C6E394C71953A32C_il2cpp_TypeInfo_var);
		Serializer_1_tB5154B4A9ADD83AA51ACE4FBB4D5F0602FBBFA6A * L_0 = Serializer_Get_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_m9DCCE8CFFEF171F01BD500D95B42E26011BC77DC(/*hidden argument*/Serializer_Get_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_m9DCCE8CFFEF171F01BD500D95B42E26011BC77DC_RuntimeMethod_var);
		((Vector4Formatter_tAA4AB5D5086266E8369233F0CC4A28C49207FA26_StaticFields*)il2cpp_codegen_static_fields_for(Vector4Formatter_tAA4AB5D5086266E8369233F0CC4A28C49207FA26_il2cpp_TypeInfo_var))->set_FloatSerializer_1(L_0);
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
// System.Version Ludiq.OdinSerializer.VersionFormatter::GetUninitializedObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * VersionFormatter_GetUninitializedObject_m84074161332D0181A79AE80419855A2236676A2D (VersionFormatter_t78111BF59B957DE7A6E16668A1EE195503701AF1 * __this, const RuntimeMethod* method)
{
	{
		return (Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD *)NULL;
	}
}
// System.Void Ludiq.OdinSerializer.VersionFormatter::Read(System.Version&,Ludiq.OdinSerializer.IDataReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VersionFormatter_Read_m384FBAD9DB228F0F1584A290F177CB5C7EFD1816 (VersionFormatter_t78111BF59B957DE7A6E16668A1EE195503701AF1 * __this, Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD ** ___value0, RuntimeObject* ___reader1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VersionFormatter_Read_m384FBAD9DB228F0F1584A290F177CB5C7EFD1816_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		V_2 = 0;
		V_3 = 0;
		RuntimeObject* L_0 = ___reader1;
		NullCheck(L_0);
		InterfaceFuncInvoker1< bool, int32_t* >::Invoke(26 /* System.Boolean Ludiq.OdinSerializer.IDataReader::ReadInt32(System.Int32&) */, IDataReader_t36A8365ED06F501DDF659B8F1BE86E430B876664_il2cpp_TypeInfo_var, L_0, (int32_t*)(&V_0));
		RuntimeObject* L_1 = ___reader1;
		NullCheck(L_1);
		InterfaceFuncInvoker1< bool, int32_t* >::Invoke(26 /* System.Boolean Ludiq.OdinSerializer.IDataReader::ReadInt32(System.Int32&) */, IDataReader_t36A8365ED06F501DDF659B8F1BE86E430B876664_il2cpp_TypeInfo_var, L_1, (int32_t*)(&V_1));
		RuntimeObject* L_2 = ___reader1;
		NullCheck(L_2);
		InterfaceFuncInvoker1< bool, int32_t* >::Invoke(26 /* System.Boolean Ludiq.OdinSerializer.IDataReader::ReadInt32(System.Int32&) */, IDataReader_t36A8365ED06F501DDF659B8F1BE86E430B876664_il2cpp_TypeInfo_var, L_2, (int32_t*)(&V_2));
		RuntimeObject* L_3 = ___reader1;
		NullCheck(L_3);
		InterfaceFuncInvoker1< bool, int32_t* >::Invoke(26 /* System.Boolean Ludiq.OdinSerializer.IDataReader::ReadInt32(System.Int32&) */, IDataReader_t36A8365ED06F501DDF659B8F1BE86E430B876664_il2cpp_TypeInfo_var, L_3, (int32_t*)(&V_3));
		Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD ** L_4 = ___value0;
		int32_t L_5 = V_0;
		int32_t L_6 = V_1;
		int32_t L_7 = V_2;
		int32_t L_8 = V_3;
		Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * L_9 = (Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD *)il2cpp_codegen_object_new(Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD_il2cpp_TypeInfo_var);
		Version__ctor_mFA5AABF2294D59FA7B3F32BB48CB238BCACBDF80(L_9, L_5, L_6, L_7, L_8, /*hidden argument*/NULL);
		*((RuntimeObject **)L_4) = (RuntimeObject *)L_9;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_4, (void*)(RuntimeObject *)L_9);
		return;
	}
}
// System.Void Ludiq.OdinSerializer.VersionFormatter::Write(System.Version&,Ludiq.OdinSerializer.IDataWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VersionFormatter_Write_mAA9B9747D664B5E943E7C5C6735102D0D6AC1E48 (VersionFormatter_t78111BF59B957DE7A6E16668A1EE195503701AF1 * __this, Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD ** ___value0, RuntimeObject* ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VersionFormatter_Write_mAA9B9747D664B5E943E7C5C6735102D0D6AC1E48_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___writer1;
		Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD ** L_1 = ___value0;
		Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * L_2 = *((Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD **)L_1);
		NullCheck(L_2);
		int32_t L_3 = Version_get_Major_m7A6BEEF367674B8C06B15F6675AFF0C32CCEE87C_inline(L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(25 /* System.Void Ludiq.OdinSerializer.IDataWriter::WriteInt32(System.String,System.Int32) */, IDataWriter_t9747AB7836BDAE0DF8C849143B789A5C561E31C9_il2cpp_TypeInfo_var, L_0, (String_t*)NULL, L_3);
		RuntimeObject* L_4 = ___writer1;
		Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD ** L_5 = ___value0;
		Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * L_6 = *((Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD **)L_5);
		NullCheck(L_6);
		int32_t L_7 = Version_get_Minor_mCBAFA7052D1786A47B4BA971E7193A4EB9A7D059_inline(L_6, /*hidden argument*/NULL);
		NullCheck(L_4);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(25 /* System.Void Ludiq.OdinSerializer.IDataWriter::WriteInt32(System.String,System.Int32) */, IDataWriter_t9747AB7836BDAE0DF8C849143B789A5C561E31C9_il2cpp_TypeInfo_var, L_4, (String_t*)NULL, L_7);
		RuntimeObject* L_8 = ___writer1;
		Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD ** L_9 = ___value0;
		Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * L_10 = *((Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD **)L_9);
		NullCheck(L_10);
		int32_t L_11 = Version_get_Build_m184E3AAE13518CEA172E9C6860E9359D567E64DB_inline(L_10, /*hidden argument*/NULL);
		NullCheck(L_8);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(25 /* System.Void Ludiq.OdinSerializer.IDataWriter::WriteInt32(System.String,System.Int32) */, IDataWriter_t9747AB7836BDAE0DF8C849143B789A5C561E31C9_il2cpp_TypeInfo_var, L_8, (String_t*)NULL, L_11);
		RuntimeObject* L_12 = ___writer1;
		Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD ** L_13 = ___value0;
		Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * L_14 = *((Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD **)L_13);
		NullCheck(L_14);
		int32_t L_15 = Version_get_Revision_mB0BADD4E233FA3001FB7BB4795A0A330880453BB_inline(L_14, /*hidden argument*/NULL);
		NullCheck(L_12);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(25 /* System.Void Ludiq.OdinSerializer.IDataWriter::WriteInt32(System.String,System.Int32) */, IDataWriter_t9747AB7836BDAE0DF8C849143B789A5C561E31C9_il2cpp_TypeInfo_var, L_12, (String_t*)NULL, L_15);
		return;
	}
}
// System.Void Ludiq.OdinSerializer.VersionFormatter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VersionFormatter__ctor_m84DB4D01E41F28F02D2107FE11D756EE66A5F174 (VersionFormatter_t78111BF59B957DE7A6E16668A1EE195503701AF1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VersionFormatter__ctor_m84DB4D01E41F28F02D2107FE11D756EE66A5F174_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(MinimalBaseFormatter_1_tF12994EA9D174D87E4F68634C0C3600E58272E55_il2cpp_TypeInfo_var);
		MinimalBaseFormatter_1__ctor_mB1C34FCE002A775AB36373BFEF82C410D2107554(__this, /*hidden argument*/MinimalBaseFormatter_1__ctor_mB1C34FCE002A775AB36373BFEF82C410D2107554_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void* IntPtr_ToPointer_mC56A17E597E9F767B889DA10DB866F0B96CF0D65_inline (intptr_t* __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = *__this;
		return (void*)(L_0);
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t Version_get_Major_m7A6BEEF367674B8C06B15F6675AFF0C32CCEE87C_inline (Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__Major_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t Version_get_Minor_mCBAFA7052D1786A47B4BA971E7193A4EB9A7D059_inline (Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__Minor_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t Version_get_Build_m184E3AAE13518CEA172E9C6860E9359D567E64DB_inline (Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__Build_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t Version_get_Revision_mB0BADD4E233FA3001FB7BB4795A0A330880453BB_inline (Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__Revision_3();
		return L_0;
	}
}
