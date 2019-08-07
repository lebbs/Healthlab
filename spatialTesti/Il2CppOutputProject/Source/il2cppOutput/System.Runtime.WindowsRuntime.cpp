﻿#include "il2cpp-config.h"

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
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InterfaceActionInvoker6
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_t51DB35FF382E636FF3B868D87816733894D46CF2;
// System.Action
struct Action_t591D2A86165F896B4B800BB5C25CE18672A55579;
// System.Action`1<System.Object>
struct Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0;
// System.Action`2<System.Object,System.Object>
struct Action_2_t0DB6FD6F515527EAB552B690A291778C6F00D48C;
// System.Action`2<System.Threading.Tasks.Task,System.Object>
struct Action_2_tC5CBC473593FC52892A3A27575658B0C050584D8;
// System.ArgumentException
struct ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1;
// System.ArgumentNullException
struct ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Byte
struct Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.EventHandler`1<System.Threading.Tasks.UnobservedTaskExceptionEventArgs>
struct EventHandler_1_tF704D003AB4792AFE4B10D9127FF82EEC18615BC;
// System.Exception
struct Exception_t;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F;
// System.Func`2<System.Threading.CancellationToken,System.Object>
struct Func_2_t97B2CD242CD12647751691A96969A9F0688EC20A;
// System.Func`2<System.Threading.CancellationToken,System.Threading.Tasks.Task`1<System.Boolean>>
struct Func_2_tBAECAB30BE1F21ACC73D0A7C4ACB219CA858CABD;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Boolean>>
struct Func_2_t185FBBAFD46813778C35A8D4A5FA3AFB4FC0E14C;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Int32>>
struct Func_2_tBCA034BF330CE1C3008C166BF27F309CD4C41C24;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.UInt32>>
struct Func_2_t2DE17BAAB7C8A395FFA1D553866D96ABC5F46C97;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.VoidValueTypeParameter>>
struct Func_2_tCF92B89EA717C53455F13CB9ADFF9F97988DC755;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<Windows.Storage.Streams.IBuffer>>
struct Func_2_tF6DFA2E681528B410B6796B6D05C01C31A5DDDE0;
// System.Func`3<System.Threading.CancellationToken,System.IProgress`1<System.UInt32>,System.Threading.Tasks.Task`1<System.Object>>
struct Func_3_tDD02D5A1599A9D3792DD2702D901E3BA36C63CF0;
// System.Func`3<System.Threading.CancellationToken,System.IProgress`1<System.UInt32>,System.Threading.Tasks.Task`1<System.UInt32>>
struct Func_3_tA53508562A6317892513AEFC0328405DBBD51375;
// System.Func`3<System.Threading.CancellationToken,System.IProgress`1<System.UInt32>,System.Threading.Tasks.Task`1<Windows.Storage.Streams.IBuffer>>
struct Func_3_t10591BE50BF875E1CE2515E7AAE2A31E3D110A49;
// System.Func`3<System.Threading.CancellationToken,System.Object,System.Object>
struct Func_3_tA1ED789B28FBED27E11AB85BFB02658BF0671EDB;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.IFormatProvider
struct IFormatProvider_t4247E13AE2D97A079B88D594B7ABABF313259901;
// System.IO.BufferedStream
struct BufferedStream_tA4070368D71992D14E131A8230BAA273A71A0CE9;
// System.IO.IOException
struct IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA;
// System.IO.MemoryStream
struct MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C;
// System.IO.NetFxToWinRtStreamAdapter
struct NetFxToWinRtStreamAdapter_tD3F51448566787B72221C59C2FC89BF1A3987485;
// System.IO.Stream
struct Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80;
// System.IO.StreamFlushAsyncResult
struct StreamFlushAsyncResult_t52BD92B64AE7A59F49326A470FBCD61172206E6A;
// System.IO.StreamOperationAsyncResult
struct StreamOperationAsyncResult_t675AB408CDF1B11AC6F446E24352B441F6422E0F;
// System.IO.StreamOperationsImplementation/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_t9B61E42C5DA9BB4B29626074CC9C84D1012DF563;
// System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_tF7A26B09867A566BC9F7FE9AF41DD97CF7DD9C14;
// System.IO.StreamOperationsImplementation/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t38CB4DCBE909850E7FF45FA79C292F5EFC11B339;
// System.IO.StreamReadAsyncResult
struct StreamReadAsyncResult_t897354343EA051942262510D5B3DE4B408B3E048;
// System.IO.StreamWriteAsyncResult
struct StreamWriteAsyncResult_t4A2F6C2119D655E60142F74DD7687412F81F9A2B;
// System.IO.UnmanagedMemoryStream
struct UnmanagedMemoryStream_tB2905D85030C9C1E831E3EB02AD7E5B1B1A5FE4E;
// System.IO.WinRtToNetFxStreamAdapter
struct WinRtToNetFxStreamAdapter_t5DF3E266765C62B1F96383772091E1E54DD48397;
// System.IO.WindowsRuntimeStreamExtensions/<>c
struct U3CU3Ec_tCF7C165934A47FEBA482A40AF7181C4ABE09CF4E;
// System.IO.WindowsRuntimeStreamExtensions/<>c__DisplayClass12_0
struct U3CU3Ec__DisplayClass12_0_t2B7F2A65F291CBC86E58650B3B7F0250618BB1EA;
// System.IProgress`1<System.UInt32>
struct IProgress_1_t8476E09305DBDFA85A24783C4C7E68BFD2C51DB6;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.InvalidOperationException
struct InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1;
// System.NotImplementedException
struct NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4;
// System.NotSupportedException
struct NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010;
// System.NullReferenceException
struct NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC;
// System.ObjectDisposedException
struct ObjectDisposedException_tF68E471ECD1419AD7C51137B742837395F50B69A;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Predicate`1<System.Object>
struct Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335;
// System.Random
struct Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.CompilerServices.ConditionalWeakTable`2/CreateValueCallback<System.Object,System.IO.Stream>
struct CreateValueCallback_tB3A24270F8E2AC16575A1201853CAE071E560E5F;
// System.Runtime.CompilerServices.ConditionalWeakTable`2/CreateValueCallback<System.Object,System.Object>
struct CreateValueCallback_tBCCB4685658A4B0DE8153A79A7E365983D58381F;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.IO.Stream,System.IO.NetFxToWinRtStreamAdapter>
struct ConditionalWeakTable_2_tFE3F49537A7EF477176850178016C4512DA2731C;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.IO.Stream>
struct ConditionalWeakTable_2_tB9E14FC9F1A4E05AD5EB57785FA2CE688D31D2D1;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Object>
struct ConditionalWeakTable_2_tAD6736E4C6A9AF930D360966499D999E3CE45BF3;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Threading.Tasks.TaskScheduler,System.Object>
struct ConditionalWeakTable_2_t9E56EEB44502999EDAA6E212D522D7863829D95C;
// System.Runtime.CompilerServices.Ephemeron[]
struct EphemeronU5BU5D_t575534899E3EE9D8B85CAF11342BA22D164C7C10;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_tEFDFBE18E061A6065AB2FF735F1425FB59F919BC;
// System.Runtime.ExceptionServices.ExceptionDispatchInfo
struct ExceptionDispatchInfo_t0C54083F3909DAF986A4DEAA7C047559531E0E2A;
// System.Runtime.InteropServices.IMarshal
struct IMarshal_t9798E44C73E4A0170F6E91C6FCE5FD6CAC06001C;
// System.Runtime.InteropServices.SafeBuffer
struct SafeBuffer_t9C39972A6152D9B18D97894AF4EB871581B64208;
// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer
struct WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22;
// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions/WindowsRuntimeBufferUnmanagedMemoryStream
struct WindowsRuntimeBufferUnmanagedMemoryStream_t1DC0F5C0CC488E863931D7C6F1DF68ADB95DA625;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Threading.CancellationCallbackInfo
struct CancellationCallbackInfo_t8CDEA0AA9C9D1A2321FE2F88878F4B5E0901CF36;
// System.Threading.CancellationTokenRegistration[]
struct CancellationTokenRegistrationU5BU5D_t4B36771A6344CFC66696BB16419C664E286DAF1B;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE;
// System.Threading.ContextCallback
struct ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676;
// System.Threading.EventWaitHandle
struct EventWaitHandle_t7603BF1D3D30FE42DD07A450C8D09E2684DC4D98;
// System.Threading.ManualResetEvent
struct ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t3F9C0164860E4AA5138DF8B4488DFB0D33147F01;
// System.Threading.SparselyPopulatedArrayFragment`1<System.Threading.CancellationCallbackInfo>
struct SparselyPopulatedArrayFragment_1_tA54224D01E2FDC03AC2867CDDC8C53E17FA933D7;
// System.Threading.SparselyPopulatedArray`1<System.Threading.CancellationCallbackInfo>[]
struct SparselyPopulatedArray_1U5BU5D_tF1A5F348104DB1ECF18799250B41740FCAA77813;
// System.Threading.SynchronizationContext
struct SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7;
// System.Threading.Tasks.AsyncInfoToTaskBridge`1<System.VoidValueTypeParameter>
struct AsyncInfoToTaskBridge_1_tFF70BDD04454A6EBC5FE97283B11BB664C836B27;
// System.Threading.Tasks.BeginEndAwaitableAdapter
struct BeginEndAwaitableAdapter_t3F4E9B174FC5DB91246385E132CFC023CA370471;
// System.Threading.Tasks.ExceptionDispatchHelper/<>c
struct U3CU3Ec_t91FD53796C718A16C4B6E8D317F8FE03125A2DA8;
// System.Threading.Tasks.StackGuard
struct StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9;
// System.Threading.Tasks.Task
struct Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08;
// System.Threading.Tasks.TaskCompletionSource`1<System.VoidValueTypeParameter>
struct TaskCompletionSource_1_t58B1B163F59487E469888F92C0D132BC81B574FF;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155;
// System.Threading.Tasks.TaskFactory`1<System.Boolean>
struct TaskFactory_1_t90DBF289FBDBB845B0FA55E1773164F06FBDEA17;
// System.Threading.Tasks.TaskFactory`1<System.Int32>
struct TaskFactory_1_t35BBF03CDA9AA94D2BE8CB805D2C764236F56CC7;
// System.Threading.Tasks.TaskFactory`1<System.UInt32>
struct TaskFactory_1_t4B1CB177FC575AD49A8B6BDA308F06C7075F366B;
// System.Threading.Tasks.TaskFactory`1<System.VoidValueTypeParameter>
struct TaskFactory_1_t410DD5370290DF7924E2357F4FAF09116A3366E9;
// System.Threading.Tasks.TaskFactory`1<Windows.Storage.Streams.IBuffer>
struct TaskFactory_1_t3D3F8CFD20FEF77056A4029C26A3D6992C5573E9;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114;
// System.Threading.Tasks.TaskToAsyncActionAdapter
struct TaskToAsyncActionAdapter_t1498B22A4F941563A016F194BD85FBFA44C4528C;
// System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.VoidValueTypeParameter,System.VoidValueTypeParameter>
struct TaskToAsyncInfoAdapter_4_t7ED2445CF03BB4D275242341EA404EAA6634929F;
// System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncActionCompletedHandler,System.VoidReferenceTypeParameter,System.VoidValueTypeParameter,System.VoidValueTypeParameter>
struct TaskToAsyncInfoAdapter_4_t6939D2A566A48D499669B8B0865212D2FB4A22BF;
// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_tD6131FE3A3A2F1D58DB886B6CF31A2672B75B439;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09;
// System.Threading.Tasks.Task`1<System.UInt32>
struct Task_1_tB8C8430765AEE1D5F24261F5BAD009C22AC7872F;
// System.Threading.Tasks.Task`1<System.VoidValueTypeParameter>
struct Task_1_tC00A207FB8C25E4498366C42466B6F913AF48F5E;
// System.Threading.Tasks.Task`1<Windows.Storage.Streams.IBuffer>
struct Task_1_t84A3E8ADA0C56D0776B0FCEBCEA98E253DB4385C;
// System.Threading.Timer
struct Timer_t67FAB8E41573B4FA09CA56AE30725AF4297C2553;
// System.Threading.TimerCallback
struct TimerCallback_tC89F2FB1294A86F64DEB2C1F68024954018AA219;
// System.Threading.WaitHandle
struct WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.UnauthorizedAccessException
struct UnauthorizedAccessException_tC2210A745BFDD3AE3559A87A4219E2945EEC9F75;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// System.VoidReferenceTypeParameter
struct VoidReferenceTypeParameter_t255142D4EFCF5C11FA3FC962097F7D9B2D3B4F6E;
// System.WindowsRuntimeSystemExtensions/<>c
struct U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E;
// Windows.Foundation.AsyncActionCompletedHandler
struct AsyncActionCompletedHandler_t1820A7A20AA2CF935463CD8EB21800005EFE488D;
// Windows.Foundation.AsyncOperationCompletedHandler`1<System.Boolean>
struct AsyncOperationCompletedHandler_1_t60A0D16C078315F375831514827E7956934AFB66;
// Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.Object,System.UInt32>
struct AsyncOperationWithProgressCompletedHandler_2_tD97B7CC6004FBEA3D052F954E4EC2123FCAECD85;
// Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.UInt32,System.UInt32>
struct AsyncOperationWithProgressCompletedHandler_2_tF449555B6EE977A7635D662ED0C1D414CC60792B;
// Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct AsyncOperationWithProgressCompletedHandler_2_tF04CE0C0951B83CB6BD82DC4376B10B01A3B1CE6;
// Windows.Foundation.IAsyncAction
struct IAsyncAction_t763952C2BD8AC50CEB26803FF37B2111537736CB;
// Windows.Foundation.IAsyncInfo
struct IAsyncInfo_t9B58E0D0A013D06029CDEAE127A910A69D13FBB5;
// Windows.Foundation.IAsyncOperationWithProgress`2<System.Object,System.UInt32>
struct IAsyncOperationWithProgress_2_t58A307F07CC4DEF3DB0E5155D12C31CFFEF4A55D;
// Windows.Foundation.IAsyncOperationWithProgress`2<System.UInt32,System.UInt32>
struct IAsyncOperationWithProgress_2_tC8BD3FE106054920900E2389AD70276493A309B3;
// Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct IAsyncOperationWithProgress_2_t9F077679BB6FBB6BF4C0E8B56C7FEF3D661EA792;
// Windows.Foundation.IAsyncOperation`1<System.Boolean>
struct IAsyncOperation_1_t27E018F764B0C6E8EB0FA611CB25A52C1FD0FB18;
// Windows.Storage.Streams.IBuffer
struct IBuffer_t13BCDB1D6DE32F79AB9F9E149514026CA6B4AAEF;
// Windows.Storage.Streams.IInputStream
struct IInputStream_tE16D3C1553F5E6BAC4E7E8D7DE411ADD049B1B13;
// Windows.Storage.Streams.IOutputStream
struct IOutputStream_t0BFFD9F35BD49DAF121DEB9BECC544772AF35C6B;
// Windows.Storage.Streams.IRandomAccessStream
struct IRandomAccessStream_tF45B1A1FE1DC95209EC2F32A0134C4BCDD756E10;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_tC5CBC473593FC52892A3A27575658B0C050584D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncActionCompletedHandler_t1820A7A20AA2CF935463CD8EB21800005EFE488D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncInfoIdGenerator_t55EA89C24441260F8C3BA5D14A724A154210BF0E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncInfoToTaskBridge_1_tFF70BDD04454A6EBC5FE97283B11BB664C836B27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncOperationCompletedHandler_1_t60A0D16C078315F375831514827E7956934AFB66_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncOperationWithProgressCompletedHandler_2_tF04CE0C0951B83CB6BD82DC4376B10B01A3B1CE6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncOperationWithProgressCompletedHandler_2_tF449555B6EE977A7635D662ED0C1D414CC60792B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_t822D24686214CB8B967C66DA507CD66A5C853079_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_tD386300660CF74FF8FB22C6C3C937BBA9F7E8DED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_tFC83304E06E318479094E86E267206CBFA9E1423_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BufferedStream_tA4070368D71992D14E131A8230BAA273A71A0CE9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConditionalWeakTable_2_tB9E14FC9F1A4E05AD5EB57785FA2CE688D31D2D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConditionalWeakTable_2_tFE3F49537A7EF477176850178016C4512DA2731C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CreateValueCallback_tB3A24270F8E2AC16575A1201853CAE071E560E5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DllNotFoundException_tED90B6A78D4CF5AA565288E0BA88A990062A7F76_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExceptionDispatchInfo_t0C54083F3909DAF986A4DEAA7C047559531E0E2A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tBAECAB30BE1F21ACC73D0A7C4ACB219CA858CABD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_3_t10591BE50BF875E1CE2515E7AAE2A31E3D110A49_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_3_tA53508562A6317892513AEFC0328405DBBD51375_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAsyncAction_t763952C2BD8AC50CEB26803FF37B2111537736CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAsyncInfo_t9B58E0D0A013D06029CDEAE127A910A69D13FBB5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAsyncOperationWithProgress_2_t9F077679BB6FBB6BF4C0E8B56C7FEF3D661EA792_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAsyncOperationWithProgress_2_tC8BD3FE106054920900E2389AD70276493A309B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAsyncOperation_1_t27E018F764B0C6E8EB0FA611CB25A52C1FD0FB18_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IBufferByteAccess_tFCEF19FBAF4E19CB5BD75DC16CDE5061DC9758D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IBuffer_t13BCDB1D6DE32F79AB9F9E149514026CA6B4AAEF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IInputStream_tE16D3C1553F5E6BAC4E7E8D7DE411ADD049B1B13_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMarshal_t9798E44C73E4A0170F6E91C6FCE5FD6CAC06001C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOutputStream_t0BFFD9F35BD49DAF121DEB9BECC544772AF35C6B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IProgress_1_t8476E09305DBDFA85A24783C4C7E68BFD2C51DB6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IRandomAccessStream_tF45B1A1FE1DC95209EC2F32A0134C4BCDD756E10_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Il2CppComObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetFxToWinRtStreamAdapter_tD3F51448566787B72221C59C2FC89BF1A3987485_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectDisposedException_tF68E471ECD1419AD7C51137B742837395F50B69A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OperationCanceledException_tD28B1AE59ACCE4D46333BFE398395B8D75D76A90_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SendOrPostCallback_t3F9C0164860E4AA5138DF8B4488DFB0D33147F01_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamFlushAsyncResult_t52BD92B64AE7A59F49326A470FBCD61172206E6A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamOperationAsyncResult_t675AB408CDF1B11AC6F446E24352B441F6422E0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamReadAsyncResult_t897354343EA051942262510D5B3DE4B408B3E048_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamWriteAsyncResult_t4A2F6C2119D655E60142F74DD7687412F81F9A2B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskToAsyncActionAdapter_t1498B22A4F941563A016F194BD85FBFA44C4528C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass12_0_t2B7F2A65F291CBC86E58650B3B7F0250618BB1EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass1_0_t9B61E42C5DA9BB4B29626074CC9C84D1012DF563_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass2_0_tF7A26B09867A566BC9F7FE9AF41DD97CF7DD9C14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass3_0_t38CB4DCBE909850E7FF45FA79C292F5EFC11B339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t91FD53796C718A16C4B6E8D317F8FE03125A2DA8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tCF7C165934A47FEBA482A40AF7181C4ABE09CF4E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnauthorizedAccessException_tC2210A745BFDD3AE3559A87A4219E2945EEC9F75_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WinRtToNetFxStreamAdapter_t5DF3E266765C62B1F96383772091E1E54DD48397_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowsRuntimeBufferUnmanagedMemoryStream_t1DC0F5C0CC488E863931D7C6F1DF68ADB95DA625_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowsRuntimeStreamExtensions_tB2579CDBD2DBFEE07F8602FCC099051A1DA1D07E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0760357C4DD0D8AC4FA5F1F969ED4F9A107AA448;
IL2CPP_EXTERN_C String_t* _stringLiteral0B881241160DF901C4FCFE164C2DCC43FE2DE47B;
IL2CPP_EXTERN_C String_t* _stringLiteral0CF1BC84BB8BACA804F9015A158E88642D415FFA;
IL2CPP_EXTERN_C String_t* _stringLiteral1C0C2E1B769D2D03A725D05C16F75E075F9AB1DA;
IL2CPP_EXTERN_C String_t* _stringLiteral20C2D8FEFC31CFAD5BD68301FE9A3DCC3D9D29B4;
IL2CPP_EXTERN_C String_t* _stringLiteral2227DD7A1AB9EF8052F7AFDCD6C95AD8E2EE9625;
IL2CPP_EXTERN_C String_t* _stringLiteral238EC4C85B4911E758E20D944D167F97A2F2CF83;
IL2CPP_EXTERN_C String_t* _stringLiteral276C616C673407A8C290D65B72355DD2AA03BCF3;
IL2CPP_EXTERN_C String_t* _stringLiteral2A0EF97DFF673043032D8100C4FBF8E025C2AD15;
IL2CPP_EXTERN_C String_t* _stringLiteral2A3A72D60FE5EEE144584595AF1EBE73035BDDF5;
IL2CPP_EXTERN_C String_t* _stringLiteral3159FE421B3221381B3C778DC1C3C26E4540BE37;
IL2CPP_EXTERN_C String_t* _stringLiteral384A0A50452330828086C72A8F95A5C2DC583E57;
IL2CPP_EXTERN_C String_t* _stringLiteral386BBD755C10FBAADDE3FD0D3B3C64A6C3DAD203;
IL2CPP_EXTERN_C String_t* _stringLiteral3D54973F528B01019A58A52D34D518405A01B891;
IL2CPP_EXTERN_C String_t* _stringLiteral44AC91F010ECDD855BA22A4FE5878DA9B04839E4;
IL2CPP_EXTERN_C String_t* _stringLiteral47EDB6769D0051A56CF33DC6C3F3C719DC5ACE2B;
IL2CPP_EXTERN_C String_t* _stringLiteral4D886BE0DC57669474623D6348BB1555D6489AAF;
IL2CPP_EXTERN_C String_t* _stringLiteral4E9DBDE61B5DADBC3F242C5DEA103B2AC13F5E57;
IL2CPP_EXTERN_C String_t* _stringLiteral513F8DE9259FE7658FE14D1352C54CCF070E911F;
IL2CPP_EXTERN_C String_t* _stringLiteral53A610E925BBC0A175E365D31241AE75AEEAD651;
IL2CPP_EXTERN_C String_t* _stringLiteral58B2D91FD6A4CD3EB40D16D2CDAA0AED435EA030;
IL2CPP_EXTERN_C String_t* _stringLiteral5B3BD2481D1A6E4A5654FB0FCDF9C6265B5A959F;
IL2CPP_EXTERN_C String_t* _stringLiteral5D3FD8BD4049B89DCC077CB8C12BDD8F4FBC1BFC;
IL2CPP_EXTERN_C String_t* _stringLiteral5DC3AD1745595D154D8ABE55B7BA1D4345987B24;
IL2CPP_EXTERN_C String_t* _stringLiteral65C54AF7D57AD75DF46F453FD3C90E405989F966;
IL2CPP_EXTERN_C String_t* _stringLiteral68228C5C8300C32D0053E80C760644B3887AAB81;
IL2CPP_EXTERN_C String_t* _stringLiteral6905F850EE139FEF18EE2BDBB20F1F47C1FFA559;
IL2CPP_EXTERN_C String_t* _stringLiteral6B3CB685CC566A445B0072B307F675ED68731A9C;
IL2CPP_EXTERN_C String_t* _stringLiteral6BF57FEE9CE875C916CC7865D27804395F4B031D;
IL2CPP_EXTERN_C String_t* _stringLiteral6C27F676EEAFD1142A5F7127B9E9A6300C4D1BB9;
IL2CPP_EXTERN_C String_t* _stringLiteral706ACFB2C5459B5262636AC35F9607BA047F2B8A;
IL2CPP_EXTERN_C String_t* _stringLiteral72C0524EEA13FCC14BCAF12A82609443F543B1C3;
IL2CPP_EXTERN_C String_t* _stringLiteral7441938D5F79A2DBB130D9141124EE2D6FC20CD1;
IL2CPP_EXTERN_C String_t* _stringLiteral76A15848F7533364121337F4C643FBA1A0F325D4;
IL2CPP_EXTERN_C String_t* _stringLiteral7CB1F56D3FBE09E809244FC8E13671CD876E3860;
IL2CPP_EXTERN_C String_t* _stringLiteral828D338A9B04221C9CBE286F50CD389F68DE4ECF;
IL2CPP_EXTERN_C String_t* _stringLiteral92246E68663462B3D7A29B98365EBFEC1298A1C5;
IL2CPP_EXTERN_C String_t* _stringLiteralA17C9AAA61E80A1BF71D0D850AF4E5BAA9800BBD;
IL2CPP_EXTERN_C String_t* _stringLiteralA495EDFA3284045D000F3BC7BD74216D48F52738;
IL2CPP_EXTERN_C String_t* _stringLiteralA7512A2545D962556CA62F28AA7BD8D840985DA9;
IL2CPP_EXTERN_C String_t* _stringLiteralA9F1BA056E1E0571A7B28FDAC15ACDDFBA051A97;
IL2CPP_EXTERN_C String_t* _stringLiteralABD95F778374F343EA482BA4F8022A44D38AE71D;
IL2CPP_EXTERN_C String_t* _stringLiteralB284F94827DB1FA2970D9E2014F080413B547A7E;
IL2CPP_EXTERN_C String_t* _stringLiteralB621359599DEAFE3E9A370BB6E87AC8690707AA4;
IL2CPP_EXTERN_C String_t* _stringLiteralC07E66423E254AD3F245E459E85CFED12D7082DD;
IL2CPP_EXTERN_C String_t* _stringLiteralC2B7DF6201FDD3362399091F0A29550DF3505B6A;
IL2CPP_EXTERN_C String_t* _stringLiteralC660CFFD96225F6CC69535C891358260250F4BB0;
IL2CPP_EXTERN_C String_t* _stringLiteralCA96269491D1B54BAE78372F8D395C9208E1C361;
IL2CPP_EXTERN_C String_t* _stringLiteralCAEEAB05C2A175307D7167265BB744072B8D72BE;
IL2CPP_EXTERN_C String_t* _stringLiteralCF1C85ADBA548E8D681255278976584A7E4A44DE;
IL2CPP_EXTERN_C String_t* _stringLiteralD011B3DDE8AABE1933A3802E8F1DAD1CAC43FD68;
IL2CPP_EXTERN_C String_t* _stringLiteralD0776B8B068AB55CF5329D31787927B4AEC05D19;
IL2CPP_EXTERN_C String_t* _stringLiteralD8A4F1B621B23EE058344EAE0BCF400E0F478274;
IL2CPP_EXTERN_C String_t* _stringLiteralDA95CC741B3DDD6710CEC3B8B24A4FB0609EB1C1;
IL2CPP_EXTERN_C String_t* _stringLiteralDF4E334F97E5D7E89909BA2F34EFDC05E9D3A548;
IL2CPP_EXTERN_C String_t* _stringLiteralE2ADD12470D36B78AD7A750A69608557CECC3E83;
IL2CPP_EXTERN_C String_t* _stringLiteralE34101DCC6A12C98FDA3373872BD273EFAD4C651;
IL2CPP_EXTERN_C String_t* _stringLiteralE53C2EA1FE4BD2B78BF4723C7C155A578E020A25;
IL2CPP_EXTERN_C String_t* _stringLiteralE65A824D4C7FD82E16029B46CB62FF7C677CCA3D;
IL2CPP_EXTERN_C String_t* _stringLiteralEE9F38E186BA06F57B7B74D7E626B94E13CE2556;
IL2CPP_EXTERN_C String_t* _stringLiteralF00101EF62DC55B11167FC24AEA4A30C88F05BA6;
IL2CPP_EXTERN_C String_t* _stringLiteralF32B67C7E26342AF42EFABC674D441DCA0A281C5;
IL2CPP_EXTERN_C String_t* _stringLiteralF58480FA5B5655160156C9504C0CDEEB869FD296;
IL2CPP_EXTERN_C String_t* _stringLiteralF5948B04AE471713F9168EC57782B460CF1E14CD;
IL2CPP_EXTERN_C String_t* _stringLiteralF6E20C08203632CDFE275B48045FDBE66859C457;
IL2CPP_EXTERN_C String_t* _stringLiteralF75E94DCC92ECC309EF861E9A10FFFB6B1A383AF;
IL2CPP_EXTERN_C String_t* _stringLiteralFBFD8740C5AE8DDF9BAFD2055D01B2FCA2854E47;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_mAFC7442D9D3CEC6701C3C5599F8CF12476095510_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_m58B3F295A5FFFD735D3E3C72214C7CF4476317E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1_get_Array_m41D93EFB7EAB3081C0A27ED9891E7177F5F361B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1_get_Offset_m6651443913CC50A02AE5D7C4CDC6F6744D39B483_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncInfoToTaskBridge_1_CompleteFromAsyncAction_mA94CADFE8C912F942BAEADC65E4B8E212F5A92E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncInfoToTaskBridge_1_RegisterForCancellation_m15301858DFDD9573474DCCD4C3ED3F7B7E112CB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncInfoToTaskBridge_1__ctor_mF7CD592EF952F225806871F14672CE77BDDAB0C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncInfo_CreateCompletedOperation_TisIBuffer_t13BCDB1D6DE32F79AB9F9E149514026CA6B4AAEF_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_m4BBBA45332D7BF768A73731B47BD0157505415D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncInfo_CreateFaultedOperation_TisIBuffer_t13BCDB1D6DE32F79AB9F9E149514026CA6B4AAEF_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_m34BD41652A8DE822B2D096EF80B99E894E760FED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncInfo_Run_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_m8F84AC2AB21D2BF30640B0719BB41FAE13177195_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncInfo_Run_TisIBuffer_t13BCDB1D6DE32F79AB9F9E149514026CA6B4AAEF_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_m3AD268CB4DAC7A0084F1CBC76525A7E6FF4CFE54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncInfo_Run_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_mB060DC01F0DE191B5057E0DDACF3A3ABCBDF2FBE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationCompletedHandler_1__ctor_m0807C8539F5F05DA00A3A257AFB7254C6F99EC9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationWithProgressCompletedHandler_2__ctor_m96C27552CFBCABAAE91832CF8C52B7BCBE419603_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationWithProgressCompletedHandler_2__ctor_mC9AB4C28FB905E212B935E1C3E8834011ED4D0B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t18D0589F789FFE82A30A223888FB7C5BED32C63E_TisU3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_tD986623175A57F547465B50AED2AC7B903115FD7_mDA09C9E512AF36506F0CBC85775A4FB17F906D37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t24BCF0C8B4E4A7F263C9F2AFCC9528025F667E77_TisU3CReadAsyncInternalU3Ed__43_tD4B002D0FA17B3DBF89A3C6C93A5DE0DE0A78308_m5BE2194AB8A2A0C0FBE40F00282C4CD332D1729C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874_TisU3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t33297D8BAD10F1F6FA496D0DC2B75DFCFFF6936D_m2AA05CF867293C40A7E0C8F297A600CD09FAFCF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874_TisU3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_tC5B27594871B0D4D6540AEF8F8175C68ECB1F243_m6A90BC625CF91D31293276B6DA5D5D6A05C80E23_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874_TisU3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_tE07FA298A0F1283378FE03DCD280D757C505C510_m012F5C73E480F7D4C555E2CD5ABE0D3B896DBF64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_mB155504875E2454883E034E847877A9DEA85E318_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_mCF6DDD6F426AE0A5B0C59A7147E4FE08FE463F8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_mEB49F32EAEB3E6C469F3A1194FBC34CD1D91CBBF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_mFA0E603D8EEE094438B0465D1E57747E2E12FC70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m21285A09F0A9D6C0F245EB498300064F66DAAF18_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m3ED63AEBB9A3BC66582F32FD3FC1B66F48CF679B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m4BCFE40068BC66F1C48B5C7C7C9F93F5E48EF00B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_mC6242DDCD4119CD73267E4B9888FF3474D795821_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_m887E134B6FD52D8CA2116A466F69BC8E1EA6ED5E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_mAFB12C1766B74D412E293BA7AB711615A14C2230_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_mCF07BE7A4F16080B49751FF5A4159E2ADDAC723F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_mE8D89333A763D06C5B5BE336A729D897A24DD9C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_m2C2B09AB812EDEDAB3C9E89B8A2BF19C4EC8B45F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_m34089C89A112F9460E7981F551DE769C72289246_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_m6C16FFAECC8CE76F82289A87141A9524F5B09C60_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_mADB2F2ED219BD69EC85F7516C62FB23F840BB877_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CReadAsyncInternalU3Ed__43_tD4B002D0FA17B3DBF89A3C6C93A5DE0DE0A78308_m0E020F3B06CE3E60416AEFE4439B21482B69FB8D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t33297D8BAD10F1F6FA496D0DC2B75DFCFFF6936D_m4FD800D60A2E430DCAE817F4E3965A528B83FD8D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_tD986623175A57F547465B50AED2AC7B903115FD7_m526004CDBB786CD58BCFB32169C0C2CB82250E98_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_tC5B27594871B0D4D6540AEF8F8175C68ECB1F243_mF6393D5F03E579671815F1DA96BB1D7780BB7835_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_tE07FA298A0F1283378FE03DCD280D757C505C510_m0F53440B958A7F25B8826E8D3A50547C34076FF0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_m157191133E216D7561AD02E894BCA819FD5F98FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_m6483744D75093B4167F14A0F978411B9FA29214D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_m939AAFF5841821CC09C627DCDEB2DFD5B933DFC2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_mE71F3C1D2587BE90812781280F0175E9CE14BA66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2_GetValue_mA59C58BABE481F361C721F5013E57CD9093CA4AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2_TryGetValue_m9AEE82B601427812996482E5F9AA431AEF088D40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2__ctor_m268322A19324E19F6526491B300F3B02ADE3535F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2__ctor_mB323587022A6BE4AC796E5FE55A8793AC025CD19_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaitable_1_GetAwaiter_m10B0B84F72A27E623BD94882380E582459F8B8DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaitable_1_GetAwaiter_mF233FB8E021BBCB43F03D9B10FDCB32FA67FAE7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaiter_GetResult_m05FB789E6901C9496B94A722DF99239A979A2623_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaiter_GetResult_m4C300DC98B92A2E8F698BB925618055536D84B43_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaiter_get_IsCompleted_m9FC73A84D3836AE90DE75FB2D785BEA90A7CF508_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaiter_get_IsCompleted_mCBD6C3EF024E1D7C538268F338BD0C4BA712FA92_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CreateValueCallback__ctor_m6F285B29502E61253A32187195968C317A608F06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m29051657C83E90759D06A6805A5F6B3DAB1FAE43_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_3__ctor_m3C72D49DA993114739E2A1DBF5E0112FB24AF119_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_3__ctor_m55C79006B4906B0377A4440C3F4B828A743C1A6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetFxToWinRtStreamAdapter_EnsureNotDisposed_m466B61758BD6C0C41F56B3808AE5ACD7A5FBA706_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetFxToWinRtStreamAdapter_ReadAsync_m0BCE9E83CEA36191BAA72C43F84A1AF6AAC60AA7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetFxToWinRtStreamAdapter_Seek_m7914695973A6682573EEE713DD10046D58129592_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetFxToWinRtStreamAdapter_WriteAsync_mBA9F702910E1F7290AC20A43982C7EFA5A84C4F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StreamOperationAsyncResult_ProcessCompletedOperation_InvalidOperationThrowHelper_mA1ED7D2F3D5DE6F75ED044EDA456FA877548F4A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StreamOperationAsyncResult_ProcessCompletedOperation_mCEAD13DA8A64F3CF722EE656F850716F26F9DEFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StreamOperationAsyncResult_StreamOperationCompletedCallback_m830CE1407A7C8E1AFFC4534BCE28959467019B0C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StreamOperationAsyncResult__ctor_m1297A6A7E44BF5D57AD6CAFBC14FA870E21D9D8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StreamReadAsyncResult__ctor_m1037B23E12C21BA0F4C92D48C76DA3EECD4435F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_get_Task_m1B3F59275853FCC22B8C1E010D77B79865170D90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncInfoAdapter_4_GetResultsInternal_mF43000DAD4E9558371BBAE8BA101B0AACA1CC91E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncInfoAdapter_4_get_CancelTokenSource_mE43B201053633B912705D401B7DE5EA95B7823E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncInfoAdapter_4_get_CompletedSynchronously_mC67FCE18ECC4CB0A3E87766A7EBD5AA5B155406B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncInfoAdapter_4_get_Task_mC4F1D9CF70B7D90F5E5E5FC6B9A16895D6CE5053_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_ConfigureAwait_m5B90AE151869448AA06D236EC66E66FDA7149345_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_ConfigureAwait_m88DF0C431456B72CA5CF2534AE96969FDB86F982_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_MoveNext_m71F1405BAE4A1E1B2D5FF6D4AC425053EEB34FC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CConcatenateCancelTokensU3Eb__0_0_mD2C070F430A2E1950C85E28ED328545E22E50AFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CConcatenateCancelTokensU3Eb__0_1_mF440B6D95BB892E1298E16F45195EC36D4AF82DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CThrowAsyncU3Eb__0_0_m7E81F2FB2E8DCA066244624DA953798D574F1AEB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CThrowAsyncU3Eb__0_1_mF770BC3A2CAB8D6FA854F629FFD668408AEBA176_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CWinRtToNetFxAdapterMap_GetValueU3Eb__11_0_mA2B332AFE10C81364AF1DC25BF618D4200F2D5E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass12_0_U3CWinRtToNetFxAdapterMap_GetValueU3Eb__0_m107DC14B8D25DF84D0CBBDBB0F2B52E8F7F51B01_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass1_0_U3CReadAsync_AbstractStreamU3Eb__0_mF7B09B203A347D87A4D31F2BD0CF916B98250325_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass2_0_U3CWriteAsync_AbstractStreamU3Eb__0_m3AEE1111FD567723DE3694810471BA166AD0668B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass2_0_U3CWriteAsync_AbstractStreamU3Eb__1_m9041D8EDB0504B8C6D7E82BE5746FB980F713EBA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass3_0_U3CFlushAsync_AbstractStreamU3Eb__0_m98A2ECB7B86585805445D61AA12109EB9C64CC91_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WinRtToNetFxStreamAdapter_BeginRead_mC32A604951DD11227CCFCAF1E5F121CB57FE1A68_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WinRtToNetFxStreamAdapter_BeginWrite_mD4A1A86E30CA5CE6BC6BEFABF3A11F42B1021916_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WinRtToNetFxStreamAdapter_Create_mCCF171C3466E68BBBF31CBB0C98C3F282F5A5B45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WinRtToNetFxStreamAdapter_EndRead_mA6F6842E1D4637C10E496EAAFB8789F9BA7CC4F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WinRtToNetFxStreamAdapter_EndWrite_m2B931CFE24E318D4F4AE2BB00D24E7162A9E0EA5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WinRtToNetFxStreamAdapter_EnsureCanRead_m47456E779147FE03374BC5272A195835BDCF8434_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WinRtToNetFxStreamAdapter_EnsureCanWrite_mC94E5B0115A84E45BED38ECE64E5D6A84F19873C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIInputStream_tE16D3C1553F5E6BAC4E7E8D7DE411ADD049B1B13_m1D884805AFF82A522F0A70539E6E880A3F5D0384_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIOutputStream_t0BFFD9F35BD49DAF121DEB9BECC544772AF35C6B_mBD26486F2545F104BBAB7AD5F27776B5ED315F8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIRandomAccessStream_tF45B1A1FE1DC95209EC2F32A0134C4BCDD756E10_mE5EE512F0D38F38E3D777E1ED265896D6949F8A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WinRtToNetFxStreamAdapter_EnsureNotDisposed_mF8858E644BF5B6A230329F688972B99A0F624150_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WinRtToNetFxStreamAdapter_ReadAsync_m5160A87A3A863EDAB5BF53534B5A6B7802B57042_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WinRtToNetFxStreamAdapter_Seek_mF2618732D60CA7E27B4C51EA6F0A06AF7CFD3CC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WinRtToNetFxStreamAdapter_SetLength_mDFE007865B79420FD114317808EA21FB302A9BF1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WinRtToNetFxStreamAdapter_WriteAsync_mDB11DF92164A01D1126F85109E1C5462B33168E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WinRtToNetFxStreamAdapter_get_Length_m2A7C8A84DCE6624EB6109F7D887B8ED2A276A7F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WinRtToNetFxStreamAdapter_get_Position_m4C38E9A2900B580B06A16E9C936397D3C92F08BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WinRtToNetFxStreamAdapter_set_Position_m38D3A3BC8CE9CD7B48E5DD6DAEFFABC0FFE6D100_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsRuntimeBufferExtensions_AsBuffer_m44E577DC4024FAA0BB691593F68FBD5A972CE870_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsRuntimeBufferExtensions_AsStream_mB5E2DF21974CD23F3A864422B0DC0FB844BF3691_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsRuntimeBufferExtensions_CopyTo_m6EAD61B4D602858DC439F92678DA5EEDFA560136_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsRuntimeBufferExtensions_CopyTo_m79A250A6B56898E32F6F8697DFE3A60FDE66B19B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsRuntimeBufferExtensions_GetWindowsRuntimeBuffer_m3F14338C22A85130806184FA004EA1E0868AC147_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsRuntimeBufferExtensions_IsSameData_m11E5D0B5671D2C8852413DD894003B6CE2CC6260_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsRuntimeBufferExtensions_TryGetUnderlyingData_m4FDB38F7DC5B4E354B3D043A73E6CC55D47C2F02_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsRuntimeBuffer_Create_mE44C1ABEE68D89B3BBF4899C90EB6FBC8FE5101F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsRuntimeBuffer_EnsureHasMarshalProxy_m8EA99F1848DDC7E830545DC80A8C53983B3E0879_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsRuntimeBuffer_Windows_Storage_Streams_IBuffer_put_Length_m89636F8978B5A5D597CFB74C2EF3509E52E190B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsRuntimeBuffer__ctor_m057CF397F8500BB4BE049EF15809461062E5DC00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsRuntimeBuffer__ctor_m647E546ED9196E78CF024F9D126E689F068F0CEA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsRuntimeStreamExtensions_AsStreamInternal_m74F95A24B8F32CA25CFEB7B0C142EB3CE87652B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsRuntimeStreamExtensions_EnsureAdapterBufferSize_m6507CF9C4E53D85596F7E39A221BE248CA06CB6E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsRuntimeSystemExtensions_AsTask_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_m46E828D5A0C87D1B9B5892F0722AD984B428AE4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsRuntimeSystemExtensions_AsTask_TisIBuffer_t13BCDB1D6DE32F79AB9F9E149514026CA6B4AAEF_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_mD56E35DB9823FDDCE9DF131A09A088D6D8085F49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsRuntimeSystemExtensions_AsTask_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_m2B704B1F08F199445D3A99B454B3E9BE75A5FFE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsRuntimeSystemExtensions_AsTask_m72AC4CCE64FA5914EF4CC7826C969C80BC5CCC3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Exception_t_0_0_0_var;
IL2CPP_EXTERN_C const uint32_t AsyncInfoIdGenerator_CreateNext_mD4F9BEA5E88D2BD92E0CF0B7112A612B3E06285E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AsyncInfoIdGenerator_EnsureInitializedThreadsafe_m8B7055212D6AAAD782FC163797AB67BE11D07C5E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AsyncInfoIdGenerator__cctor_m0160C31D854AFE61A802EB0ADB2E00E85AC90B10_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ExceptionDispatchHelper_ThrowAsync_m2F6A6A11D813192180D84E5EDEEF6A5411729253_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetFxToWinRtStreamAdapter_EnsureNotDisposed_m466B61758BD6C0C41F56B3808AE5ACD7A5FBA706_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetFxToWinRtStreamAdapter_ReadAsync_m0BCE9E83CEA36191BAA72C43F84A1AF6AAC60AA7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetFxToWinRtStreamAdapter_Seek_m7914695973A6682573EEE713DD10046D58129592_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetFxToWinRtStreamAdapter_WriteAsync_mBA9F702910E1F7290AC20A43982C7EFA5A84C4F8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Point_ConvertToString_m6E52855EA4919577AD9678EB50CA60A433F49803_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Point_Equals_m3BA55D50EECD9ACD235E1CF9F34373C325973DB6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Rect_ConvertToString_mDD63C220964456CF26A0D2B0F129110F19FEE9B7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Rect_Equals_m8F195999C4E1C9356E3234E2E9A762DC2F6E3735_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Size_Equals_mCE363B6FB51F2B28CE43FABB1D6A0CEE7722658C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Size_ToString_m7AD2DBD2743AAB5FE6BF01022D45475C1A8636AA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StreamFlushAsyncResult_ProcessConcreteCompletedOperation_m63A273FF3E89F299C27102C58BC1A4F38AA51072_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StreamFlushAsyncResult_ProcessConcreteCompletedOperation_mD81B4C15CD17D3753E3023D194165FF82FC37E50_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StreamFlushAsyncResult__ctor_mB90A83C265CA4BFC9EEFC5A0CFE76A2DFF0A13D8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StreamOperationAsyncResult_CancelStreamOperation_m97B799E99AD4809761BE6A0D3E55DDEEA4DD4443_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StreamOperationAsyncResult_CloseStreamOperation_mD2F52A21BFD94DC2A34E260CA631BBDA3CC6721A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StreamOperationAsyncResult_ProcessCompletedOperation_InvalidOperationThrowHelper_mA1ED7D2F3D5DE6F75ED044EDA456FA877548F4A7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StreamOperationAsyncResult_ProcessCompletedOperation_mCEAD13DA8A64F3CF722EE656F850716F26F9DEFB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StreamOperationAsyncResult_StreamOperationCompletedCallback_m830CE1407A7C8E1AFFC4534BCE28959467019B0C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StreamOperationAsyncResult_ThrowWithIOExceptionDispatchInfo_mB5A5574130A4DB6D1D6412D9EBDEC2BEA118C795_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StreamOperationAsyncResult__ctor_m1297A6A7E44BF5D57AD6CAFBC14FA870E21D9D8F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StreamOperationAsyncResult_get_AsyncWaitHandle_m77AD43084D44615B1A5B18FD41FACE99F34B715C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StreamOperationsImplementation_FlushAsync_AbstractStream_m9FC5EE6670A05587FD927A09D8F8F8FF8194F557_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StreamOperationsImplementation_ReadAsync_AbstractStream_m778BD91CC4C43AEBE54B44DE842503DE52948317_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StreamOperationsImplementation_ReadAsync_MemoryStream_mD332B977EA293A31B70F8475EAA0D270BB8FE0AB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StreamOperationsImplementation_WriteAsync_AbstractStream_m21017F427664FD8D13B2408E5338ED0FFD7F253C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StreamReadAsyncResult_ProcessConcreteCompletedOperation_m987DE967C55CCDAE3928BE1D2AEF3B64FC58FB43_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StreamReadAsyncResult_ProcessConcreteCompletedOperation_mF0CBA3E175E98A2581B71286C8A3261D4EF3A482_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StreamReadAsyncResult__ctor_m1037B23E12C21BA0F4C92D48C76DA3EECD4435F0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StreamWriteAsyncResult_ProcessConcreteCompletedOperation_m46753CC71BFD4F752E35B693E9AF7258D36FF829_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StreamWriteAsyncResult_ProcessConcreteCompletedOperation_mFFEAD203431B5EB168068C0CDC881CC7A12DF5E4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StreamWriteAsyncResult__ctor_m3948E7124A04878E7BCAAFCEBCB0B079BA6B6908_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TaskToAsyncActionAdapter_GetResults_m507FE1CE48032133AA7ADA483475806B3D2C51F6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CReadAsyncInternalU3Ed__43_MoveNext_mB0715FAA82A73010EFAC342878C9B52220943AEA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CReadAsyncInternalU3Ed__43_SetStateMachine_m1A8819589C373A620E6A76D362FB02B94CBF5E19_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_MoveNext_m543F90A39823888C932491D4018A559436C08EBE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_SetStateMachine_m6ECBDD41F0403D71AF9534B0E63161865104118F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_MoveNext_m71F1405BAE4A1E1B2D5FF6D4AC425053EEB34FC9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_SetStateMachine_mAB18BD9CD69ADDCFBE2B48E4ABB35872BAE54483_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_MoveNext_mE88D6EDC8FF01BB4B7832CA4FD9F063AE5CDCD4D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_SetStateMachine_m2A079EF5348EE858F047D58EEA127EAFB2F2BF1B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_MoveNext_mD3C1D72E476D85F6143C00F1DE1D449EAA690E26_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_SetStateMachine_mCE60114066AA2B6050E71DD82848D3DDBEACB3F5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3CConcatenateCancelTokensU3Eb__0_0_mD2C070F430A2E1950C85E28ED328545E22E50AFB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3CConcatenateCancelTokensU3Eb__0_1_mF440B6D95BB892E1298E16F45195EC36D4AF82DC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3CThrowAsyncU3Eb__0_0_m7E81F2FB2E8DCA066244624DA953798D574F1AEB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3CThrowAsyncU3Eb__0_1_mF770BC3A2CAB8D6FA854F629FFD668408AEBA176_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass12_0_U3CWinRtToNetFxAdapterMap_GetValueU3Eb__0_m107DC14B8D25DF84D0CBBDBB0F2B52E8F7F51B01_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass1_0_U3CReadAsync_AbstractStreamU3Eb__0_mF7B09B203A347D87A4D31F2BD0CF916B98250325_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass2_0_U3CWriteAsync_AbstractStreamU3Eb__0_m3AEE1111FD567723DE3694810471BA166AD0668B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass2_0_U3CWriteAsync_AbstractStreamU3Eb__1_m9041D8EDB0504B8C6D7E82BE5746FB980F713EBA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass3_0_U3CFlushAsync_AbstractStreamU3Eb__0_m98A2ECB7B86585805445D61AA12109EB9C64CC91_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_m253A27693DA3D1A9A90FD949D4D58340D592FA5B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_mBF52595DB23256E5B7B4724C6DDE9640684FB582_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_mC2AE3130C3434353465BEDA10C3C5D3553E06611_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WinRtIOHelper_EnsureResultsInUserBuffer_m24B0C6BDACD1A06D7FBB9EC91361DA5137E34FB1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WinRtIOHelper_NativeExceptionToIOExceptionInfo_m1CA2440467C50E50B6448BBCC86B4B7DB9A394AD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WinRtToNetFxStreamAdapter_BeginRead_mC32A604951DD11227CCFCAF1E5F121CB57FE1A68_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WinRtToNetFxStreamAdapter_BeginWrite_mD4A1A86E30CA5CE6BC6BEFABF3A11F42B1021916_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WinRtToNetFxStreamAdapter_Create_mCCF171C3466E68BBBF31CBB0C98C3F282F5A5B45_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WinRtToNetFxStreamAdapter_Dispose_m4B0059F4DFD1068CB4EFB7BEBA5BA2C19F40BEA4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WinRtToNetFxStreamAdapter_EndRead_mA6F6842E1D4637C10E496EAAFB8789F9BA7CC4F9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WinRtToNetFxStreamAdapter_EndWrite_m2B931CFE24E318D4F4AE2BB00D24E7162A9E0EA5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WinRtToNetFxStreamAdapter_EnsureCanRead_m47456E779147FE03374BC5272A195835BDCF8434_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WinRtToNetFxStreamAdapter_EnsureCanWrite_mC94E5B0115A84E45BED38ECE64E5D6A84F19873C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WinRtToNetFxStreamAdapter_EnsureNotDisposed_mF8858E644BF5B6A230329F688972B99A0F624150_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WinRtToNetFxStreamAdapter_FlushAsync_m35A5193481BF4AE2CBD79F7378F47CBD6B63FCD3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WinRtToNetFxStreamAdapter_Flush_m6EA4ADC50C604800CEBA54B8554A64E4312DC94D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WinRtToNetFxStreamAdapter_ReadAsyncInternal_m808223D75DD1A59959A6B9F14F623CC50050B593_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WinRtToNetFxStreamAdapter_ReadAsync_m5160A87A3A863EDAB5BF53534B5A6B7802B57042_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WinRtToNetFxStreamAdapter_Seek_mF2618732D60CA7E27B4C51EA6F0A06AF7CFD3CC3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WinRtToNetFxStreamAdapter_SetLength_mDFE007865B79420FD114317808EA21FB302A9BF1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WinRtToNetFxStreamAdapter_WriteAsync_mDB11DF92164A01D1126F85109E1C5462B33168E2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WinRtToNetFxStreamAdapter__ctor_m32DFDE65034486518FEF279121FF1BCEF328FCDF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WinRtToNetFxStreamAdapter_get_Length_m2A7C8A84DCE6624EB6109F7D887B8ED2A276A7F2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WinRtToNetFxStreamAdapter_get_OneByteBuffer_mBD6829138522F26FED20CEF828A3048B910B016D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WinRtToNetFxStreamAdapter_get_Position_m4C38E9A2900B580B06A16E9C936397D3C92F08BF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WinRtToNetFxStreamAdapter_set_Position_m38D3A3BC8CE9CD7B48E5DD6DAEFFABC0FFE6D100_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsRuntimeBufferExtensions_AsBuffer_m44E577DC4024FAA0BB691593F68FBD5A972CE870_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsRuntimeBufferExtensions_AsStream_mB5E2DF21974CD23F3A864422B0DC0FB844BF3691_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsRuntimeBufferExtensions_CopyTo_m6EAD61B4D602858DC439F92678DA5EEDFA560136_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsRuntimeBufferExtensions_CopyTo_m79A250A6B56898E32F6F8697DFE3A60FDE66B19B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsRuntimeBufferExtensions_GetPointerAtOffset_m6C3741A634A9E5B437B80B297CBC3F0027C0A8A5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsRuntimeBufferExtensions_GetWindowsRuntimeBuffer_m3F14338C22A85130806184FA004EA1E0868AC147_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsRuntimeBufferExtensions_IsSameData_m11E5D0B5671D2C8852413DD894003B6CE2CC6260_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsRuntimeBufferExtensions_MemCopy_m3835D54F66AEC471C41534C69772989315F78927_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsRuntimeBufferExtensions_TryGetUnderlyingData_m4FDB38F7DC5B4E354B3D043A73E6CC55D47C2F02_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsRuntimeBufferUnmanagedMemoryStream__ctor_m28B44E02160B58BD85CA8596463059C4C0975347_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsRuntimeBuffer_Create_mE44C1ABEE68D89B3BBF4899C90EB6FBC8FE5101F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsRuntimeBuffer_EnsureHasMarshalProxy_m8EA99F1848DDC7E830545DC80A8C53983B3E0879_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsRuntimeBuffer_PinUnderlyingData_mD31E1965F0ABF312675E6F3AEA70C773C4CA057B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsRuntimeBuffer_RoGetBufferMarshaler_m92635310D29611651BA2CEAE7078C4D60657EEAF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_DisconnectObject_m6508BA598A7093C8CAA21518740C488A13CB9055_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_GetMarshalSizeMax_m6A46F1695F97BDE4587C8CCE174FEE16A11B814B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_GetUnmarshalClass_mEE39B87F550E9BB968B24C873F3E2048C4C67F5A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_MarshalInterface_mAFC02F5CA4608E72AB872D21D1AEAB0C9E76808B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_ReleaseMarshalData_m521849BEE7B8AE233B26A1BE492C4060B7BE678D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_UnmarshalInterface_mB0B055B69C3BE22A68704EB42B4D0077360F59BF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsRuntimeBuffer_System_Runtime_InteropServices_WindowsRuntime_IBufferByteAccess_GetBuffer_mA4B0277D88CF6BE1640E0ABF95A4DBBD0A99E1B6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsRuntimeBuffer_Windows_Storage_Streams_IBuffer_put_Length_m89636F8978B5A5D597CFB74C2EF3509E52E190B9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsRuntimeBuffer__ctor_m057CF397F8500BB4BE049EF15809461062E5DC00_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsRuntimeBuffer__ctor_m647E546ED9196E78CF024F9D126E689F068F0CEA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsRuntimeStreamExtensions_AsStreamForRead_m0C215C31D3FDB1F656DA5A4D81AD0628A3EE7AAB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsRuntimeStreamExtensions_AsStreamInternalFactoryHelper_mFE2CE486791EE8D4492D53EDD64BAF930250778E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsRuntimeStreamExtensions_AsStreamInternal_m74F95A24B8F32CA25CFEB7B0C142EB3CE87652B4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsRuntimeStreamExtensions_EnsureAdapterBufferSize_m6507CF9C4E53D85596F7E39A221BE248CA06CB6E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsRuntimeStreamExtensions_WinRtToNetFxAdapterMap_GetValue_m5048E8F721D5BC6AA46B31B8BF638373569A96EE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsRuntimeStreamExtensions_WinRtToNetFxAdapterMap_GetValue_m5B24DC84F0AB904CA8679AB5852AA66D6B25C625_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsRuntimeStreamExtensions__cctor_m2A925362C13A804653EF4AB2739E897711359841_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsRuntimeSystemExtensions_AsTask_m5D87CC8E008C9C3A4DC66F6BD108691CF8119ED1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsRuntimeSystemExtensions_AsTask_m72AC4CCE64FA5914EF4CC7826C969C80BC5CCC3D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsRuntimeSystemExtensions_ConcatenateCancelTokens_mE6D63868E79DE3EBCC91E8BC0BBF73D12E31E4D9_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct Guid_t ;
struct IAsyncActionCompletedHandler_t1820A7A20AA2CF935463CD8EB21800005EFE488D_ComCallableWrapper;
struct IAsyncAction_t763952C2BD8AC50CEB26803FF37B2111537736CB;
struct IAsyncOperationCompletedHandler_1_t60A0D16C078315F375831514827E7956934AFB66_ComCallableWrapper;
struct IAsyncOperationProgressHandler_2_t59B024515C6DBD5934C514163689545A8EBEF367_ComCallableWrapper;
struct IAsyncOperationProgressHandler_2_t63E8FDA8EB19569C2F25132499D6D4AEB5E52A89_ComCallableWrapper;
struct IAsyncOperationWithProgressCompletedHandler_2_tF04CE0C0951B83CB6BD82DC4376B10B01A3B1CE6_ComCallableWrapper;
struct IAsyncOperationWithProgressCompletedHandler_2_tF449555B6EE977A7635D662ED0C1D414CC60792B_ComCallableWrapper;
struct IAsyncOperationWithProgress_2_t9F077679BB6FBB6BF4C0E8B56C7FEF3D661EA792;
struct IAsyncOperationWithProgress_2_tC8BD3FE106054920900E2389AD70276493A309B3;
struct IAsyncOperation_1_t27E018F764B0C6E8EB0FA611CB25A52C1FD0FB18;
struct IBuffer_t13BCDB1D6DE32F79AB9F9E149514026CA6B4AAEF;

struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tDDFD2BEF9E39DE01EC991F5AED0D048A17F81E22 
{
public:

public:
};


// System.Object

// System.Runtime.InteropServices.IAgileObject
struct NOVTABLE IAgileObject_t725A33FE8879B717322060E4A76D34D63D700548 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
};
// Windows.Foundation.IAsyncAction
struct NOVTABLE IAsyncAction_t763952C2BD8AC50CEB26803FF37B2111537736CB : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncAction_put_Completed_m0632776C609159F4E6D0D5F6DECCE64CC355B779(IAsyncActionCompletedHandler_t1820A7A20AA2CF935463CD8EB21800005EFE488D_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncAction_get_Completed_mEF447B408CEF9BD7882E596CF87C4355CC17E71B(IAsyncActionCompletedHandler_t1820A7A20AA2CF935463CD8EB21800005EFE488D_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncAction_GetResults_m192BCF4CC6EE9E2E66722E3D2BFBBAEE124D7AD7() = 0;
};
// Windows.Foundation.IAsyncOperationWithProgress`2<System.UInt32,System.UInt32>
struct NOVTABLE IAsyncOperationWithProgress_2_tC8BD3FE106054920900E2389AD70276493A309B3 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_put_Progress_m350E9B9254A685DFB8C3FC2D3131246B8E51D04A(IAsyncOperationProgressHandler_2_t59B024515C6DBD5934C514163689545A8EBEF367_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_get_Progress_m52E5FA65A83D323DD051DE07DCD1197F3BAB915A(IAsyncOperationProgressHandler_2_t59B024515C6DBD5934C514163689545A8EBEF367_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_put_Completed_mFB0F42569BF3A6EA84B17C7FC562E077E24E1C1E(IAsyncOperationWithProgressCompletedHandler_2_tF449555B6EE977A7635D662ED0C1D414CC60792B_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_get_Completed_mA97E7AD6FFA70605BC3D85B2BA81D9E73477C83C(IAsyncOperationWithProgressCompletedHandler_2_tF449555B6EE977A7635D662ED0C1D414CC60792B_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_GetResults_m192AC6B35298E03A2B3C136B3077DF2053FDB6A2(uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct NOVTABLE IAsyncOperationWithProgress_2_t9F077679BB6FBB6BF4C0E8B56C7FEF3D661EA792 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_put_Progress_mFF848C5B5B7BC734F5632ED85E95D7A6754DD09E(IAsyncOperationProgressHandler_2_t63E8FDA8EB19569C2F25132499D6D4AEB5E52A89_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_get_Progress_mECB0EFC8434856820CFF2023D53326ADE094E8D0(IAsyncOperationProgressHandler_2_t63E8FDA8EB19569C2F25132499D6D4AEB5E52A89_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_put_Completed_m65D2AFD798AB869DF9E4B7BC5ECED5113CFEC342(IAsyncOperationWithProgressCompletedHandler_2_tF04CE0C0951B83CB6BD82DC4376B10B01A3B1CE6_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_get_Completed_m7CB5DF03EAE5A06808E15B2C9C6C8247529DA35B(IAsyncOperationWithProgressCompletedHandler_2_tF04CE0C0951B83CB6BD82DC4376B10B01A3B1CE6_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_GetResults_m66D7DB6053679B7E90EB2C24271FCBC3DC2F6207(IBuffer_t13BCDB1D6DE32F79AB9F9E149514026CA6B4AAEF** comReturnValue) = 0;
};
// Windows.Foundation.IAsyncOperation`1<System.Boolean>
struct NOVTABLE IAsyncOperation_1_t27E018F764B0C6E8EB0FA611CB25A52C1FD0FB18 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_put_Completed_mCD6E096799210DC80FFCA3C09D67B27800A90520(IAsyncOperationCompletedHandler_1_t60A0D16C078315F375831514827E7956934AFB66_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_get_Completed_m07CAA5869A884FEC2A68E5C00C7DA01E4576826B(IAsyncOperationCompletedHandler_1_t60A0D16C078315F375831514827E7956934AFB66_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_GetResults_mD43ABCF581D914A85D4B9445991877915DFF56DA(bool* comReturnValue) = 0;
};
// Windows.Storage.Streams.IBuffer
struct NOVTABLE IBuffer_t13BCDB1D6DE32F79AB9F9E149514026CA6B4AAEF : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBuffer_get_Capacity_m5745CFEF40ED7190B05A09CE37B07650634038C9(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBuffer_get_Length_mDADF6292B118D0FD40831F9C33D7EFE7AEDB889B(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBuffer_put_Length_m60458A1E0C478452AFD6A20A5B7090AEA469A8B0(uint32_t ___value0) = 0;
};
// Windows.Storage.Streams.IOutputStream
struct NOVTABLE IOutputStream_t0BFFD9F35BD49DAF121DEB9BECC544772AF35C6B : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IOutputStream_WriteAsync_mBE75066C704E76E8AC90135CE779B83A3DD71921(IBuffer_t13BCDB1D6DE32F79AB9F9E149514026CA6B4AAEF* ___buffer0, IAsyncOperationWithProgress_2_tC8BD3FE106054920900E2389AD70276493A309B3** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IOutputStream_FlushAsync_mCD6E8AF55B37FFF946B184F22B390E2E652F9ADB(IAsyncOperation_1_t27E018F764B0C6E8EB0FA611CB25A52C1FD0FB18** comReturnValue) = 0;
};
// Windows.Storage.Streams.IRandomAccessStream
struct NOVTABLE IRandomAccessStream_tF45B1A1FE1DC95209EC2F32A0134C4BCDD756E10 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_get_Size_mC7C3FD2E620A221E63F7F6AD1E806A68B3E76C03(uint64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_put_Size_m0501A392E49E4FF49F7A2B165DDEC5ABC0C69C6E(uint64_t ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_U24__Stripped0_GetInputStreamAt_mA4F529A42195A0FAB0261516A83ED7CE7D79FD62() = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_U24__Stripped1_GetOutputStreamAt_m96EAE33666AE61ED9382006F2E42A8A2484B8004() = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_get_Position_m48DEBF691715522B04ED7539AE7F22041221F646(uint64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_Seek_m591EC62FCE22806BA0B5A1EFDEA9E58DC63E6D1A(uint64_t ___position0) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_U24__Stripped2_CloneStream_mB833F36377C2557D2ACC2A7A41D3B2C2C7271CCE() = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_get_CanRead_mC556996DA2DF65C97288F7474DE32FAD8EBFF2BD(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_get_CanWrite_m494C042532256B5EB0A66ADFBD50C8F3CC8E5580(bool* comReturnValue) = 0;
};
struct Il2CppArrayBounds;

// System.Array


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
	intptr_t* ___native_trace_ips_15;
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
	intptr_t* ___native_trace_ips_15;
};

// System.IO.StreamOperationsImplementation
struct  StreamOperationsImplementation_t4C519F88F2B49028481787C00E11CC0EAB841407  : public RuntimeObject
{
public:

public:
};


// System.IO.StreamOperationsImplementation_<>c__DisplayClass2_0
struct  U3CU3Ec__DisplayClass2_0_tF7A26B09867A566BC9F7FE9AF41DD97CF7DD9C14  : public RuntimeObject
{
public:
	// Windows.Storage.Streams.IBuffer System.IO.StreamOperationsImplementation_<>c__DisplayClass2_0::buffer
	RuntimeObject* ___buffer_0;
	// System.IO.Stream System.IO.StreamOperationsImplementation_<>c__DisplayClass2_0::stream
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___stream_1;
	// System.Byte[] System.IO.StreamOperationsImplementation_<>c__DisplayClass2_0::data
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___data_2;
	// System.Int32 System.IO.StreamOperationsImplementation_<>c__DisplayClass2_0::offset
	int32_t ___offset_3;

public:
	inline static int32_t get_offset_of_buffer_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_tF7A26B09867A566BC9F7FE9AF41DD97CF7DD9C14, ___buffer_0)); }
	inline RuntimeObject* get_buffer_0() const { return ___buffer_0; }
	inline RuntimeObject** get_address_of_buffer_0() { return &___buffer_0; }
	inline void set_buffer_0(RuntimeObject* value)
	{
		___buffer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buffer_0), (void*)value);
	}

	inline static int32_t get_offset_of_stream_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_tF7A26B09867A566BC9F7FE9AF41DD97CF7DD9C14, ___stream_1)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get_stream_1() const { return ___stream_1; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of_stream_1() { return &___stream_1; }
	inline void set_stream_1(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		___stream_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stream_1), (void*)value);
	}

	inline static int32_t get_offset_of_data_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_tF7A26B09867A566BC9F7FE9AF41DD97CF7DD9C14, ___data_2)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_data_2() const { return ___data_2; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_data_2() { return &___data_2; }
	inline void set_data_2(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___data_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_2), (void*)value);
	}

	inline static int32_t get_offset_of_offset_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_tF7A26B09867A566BC9F7FE9AF41DD97CF7DD9C14, ___offset_3)); }
	inline int32_t get_offset_3() const { return ___offset_3; }
	inline int32_t* get_address_of_offset_3() { return &___offset_3; }
	inline void set_offset_3(int32_t value)
	{
		___offset_3 = value;
	}
};


// System.IO.StreamOperationsImplementation_<>c__DisplayClass3_0
struct  U3CU3Ec__DisplayClass3_0_t38CB4DCBE909850E7FF45FA79C292F5EFC11B339  : public RuntimeObject
{
public:
	// System.IO.Stream System.IO.StreamOperationsImplementation_<>c__DisplayClass3_0::stream
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___stream_0;

public:
	inline static int32_t get_offset_of_stream_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_t38CB4DCBE909850E7FF45FA79C292F5EFC11B339, ___stream_0)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get_stream_0() const { return ___stream_0; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of_stream_0() { return &___stream_0; }
	inline void set_stream_0(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		___stream_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stream_0), (void*)value);
	}
};


// System.IO.WinRtIOHelper
struct  WinRtIOHelper_tC3DAD80CE58137CBBAB0E43F1BA2B5EC7D78C050  : public RuntimeObject
{
public:

public:
};


// System.IO.WindowsRuntimeStreamExtensions
struct  WindowsRuntimeStreamExtensions_tB2579CDBD2DBFEE07F8602FCC099051A1DA1D07E  : public RuntimeObject
{
public:

public:
};

struct WindowsRuntimeStreamExtensions_tB2579CDBD2DBFEE07F8602FCC099051A1DA1D07E_StaticFields
{
public:
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.IO.Stream> System.IO.WindowsRuntimeStreamExtensions::s_winRtToNetFxAdapterMap
	ConditionalWeakTable_2_tB9E14FC9F1A4E05AD5EB57785FA2CE688D31D2D1 * ___s_winRtToNetFxAdapterMap_0;
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.IO.Stream,System.IO.NetFxToWinRtStreamAdapter> System.IO.WindowsRuntimeStreamExtensions::s_netFxToWinRtAdapterMap
	ConditionalWeakTable_2_tFE3F49537A7EF477176850178016C4512DA2731C * ___s_netFxToWinRtAdapterMap_1;

public:
	inline static int32_t get_offset_of_s_winRtToNetFxAdapterMap_0() { return static_cast<int32_t>(offsetof(WindowsRuntimeStreamExtensions_tB2579CDBD2DBFEE07F8602FCC099051A1DA1D07E_StaticFields, ___s_winRtToNetFxAdapterMap_0)); }
	inline ConditionalWeakTable_2_tB9E14FC9F1A4E05AD5EB57785FA2CE688D31D2D1 * get_s_winRtToNetFxAdapterMap_0() const { return ___s_winRtToNetFxAdapterMap_0; }
	inline ConditionalWeakTable_2_tB9E14FC9F1A4E05AD5EB57785FA2CE688D31D2D1 ** get_address_of_s_winRtToNetFxAdapterMap_0() { return &___s_winRtToNetFxAdapterMap_0; }
	inline void set_s_winRtToNetFxAdapterMap_0(ConditionalWeakTable_2_tB9E14FC9F1A4E05AD5EB57785FA2CE688D31D2D1 * value)
	{
		___s_winRtToNetFxAdapterMap_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_winRtToNetFxAdapterMap_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_netFxToWinRtAdapterMap_1() { return static_cast<int32_t>(offsetof(WindowsRuntimeStreamExtensions_tB2579CDBD2DBFEE07F8602FCC099051A1DA1D07E_StaticFields, ___s_netFxToWinRtAdapterMap_1)); }
	inline ConditionalWeakTable_2_tFE3F49537A7EF477176850178016C4512DA2731C * get_s_netFxToWinRtAdapterMap_1() const { return ___s_netFxToWinRtAdapterMap_1; }
	inline ConditionalWeakTable_2_tFE3F49537A7EF477176850178016C4512DA2731C ** get_address_of_s_netFxToWinRtAdapterMap_1() { return &___s_netFxToWinRtAdapterMap_1; }
	inline void set_s_netFxToWinRtAdapterMap_1(ConditionalWeakTable_2_tFE3F49537A7EF477176850178016C4512DA2731C * value)
	{
		___s_netFxToWinRtAdapterMap_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_netFxToWinRtAdapterMap_1), (void*)value);
	}
};


// System.IO.WindowsRuntimeStreamExtensions_<>c
struct  U3CU3Ec_tCF7C165934A47FEBA482A40AF7181C4ABE09CF4E  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tCF7C165934A47FEBA482A40AF7181C4ABE09CF4E_StaticFields
{
public:
	// System.IO.WindowsRuntimeStreamExtensions_<>c System.IO.WindowsRuntimeStreamExtensions_<>c::<>9
	U3CU3Ec_tCF7C165934A47FEBA482A40AF7181C4ABE09CF4E * ___U3CU3E9_0;
	// System.Runtime.CompilerServices.ConditionalWeakTable`2_CreateValueCallback<System.Object,System.IO.Stream> System.IO.WindowsRuntimeStreamExtensions_<>c::<>9__11_0
	CreateValueCallback_tB3A24270F8E2AC16575A1201853CAE071E560E5F * ___U3CU3E9__11_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCF7C165934A47FEBA482A40AF7181C4ABE09CF4E_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tCF7C165934A47FEBA482A40AF7181C4ABE09CF4E * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tCF7C165934A47FEBA482A40AF7181C4ABE09CF4E ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tCF7C165934A47FEBA482A40AF7181C4ABE09CF4E * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__11_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCF7C165934A47FEBA482A40AF7181C4ABE09CF4E_StaticFields, ___U3CU3E9__11_0_1)); }
	inline CreateValueCallback_tB3A24270F8E2AC16575A1201853CAE071E560E5F * get_U3CU3E9__11_0_1() const { return ___U3CU3E9__11_0_1; }
	inline CreateValueCallback_tB3A24270F8E2AC16575A1201853CAE071E560E5F ** get_address_of_U3CU3E9__11_0_1() { return &___U3CU3E9__11_0_1; }
	inline void set_U3CU3E9__11_0_1(CreateValueCallback_tB3A24270F8E2AC16575A1201853CAE071E560E5F * value)
	{
		___U3CU3E9__11_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__11_0_1), (void*)value);
	}
};


// System.IO.WindowsRuntimeStreamExtensions_<>c__DisplayClass12_0
struct  U3CU3Ec__DisplayClass12_0_t2B7F2A65F291CBC86E58650B3B7F0250618BB1EA  : public RuntimeObject
{
public:
	// System.Int32 System.IO.WindowsRuntimeStreamExtensions_<>c__DisplayClass12_0::bufferSize
	int32_t ___bufferSize_0;

public:
	inline static int32_t get_offset_of_bufferSize_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass12_0_t2B7F2A65F291CBC86E58650B3B7F0250618BB1EA, ___bufferSize_0)); }
	inline int32_t get_bufferSize_0() const { return ___bufferSize_0; }
	inline int32_t* get_address_of_bufferSize_0() { return &___bufferSize_0; }
	inline void set_bufferSize_0(int32_t value)
	{
		___bufferSize_0 = value;
	}
};


// System.MarshalByRefObject
struct  MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Random
struct  Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F  : public RuntimeObject
{
public:
	// System.Int32 System.Random::inext
	int32_t ___inext_3;
	// System.Int32 System.Random::inextp
	int32_t ___inextp_4;
	// System.Int32[] System.Random::SeedArray
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___SeedArray_5;

public:
	inline static int32_t get_offset_of_inext_3() { return static_cast<int32_t>(offsetof(Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F, ___inext_3)); }
	inline int32_t get_inext_3() const { return ___inext_3; }
	inline int32_t* get_address_of_inext_3() { return &___inext_3; }
	inline void set_inext_3(int32_t value)
	{
		___inext_3 = value;
	}

	inline static int32_t get_offset_of_inextp_4() { return static_cast<int32_t>(offsetof(Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F, ___inextp_4)); }
	inline int32_t get_inextp_4() const { return ___inextp_4; }
	inline int32_t* get_address_of_inextp_4() { return &___inextp_4; }
	inline void set_inextp_4(int32_t value)
	{
		___inextp_4 = value;
	}

	inline static int32_t get_offset_of_SeedArray_5() { return static_cast<int32_t>(offsetof(Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F, ___SeedArray_5)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_SeedArray_5() const { return ___SeedArray_5; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_SeedArray_5() { return &___SeedArray_5; }
	inline void set_SeedArray_5(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___SeedArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SeedArray_5), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.IO.Stream,System.IO.NetFxToWinRtStreamAdapter>
struct  ConditionalWeakTable_2_tFE3F49537A7EF477176850178016C4512DA2731C  : public RuntimeObject
{
public:
	// System.Runtime.CompilerServices.Ephemeron[] System.Runtime.CompilerServices.ConditionalWeakTable`2::data
	EphemeronU5BU5D_t575534899E3EE9D8B85CAF11342BA22D164C7C10* ___data_4;
	// System.Object System.Runtime.CompilerServices.ConditionalWeakTable`2::_lock
	RuntimeObject * ____lock_5;
	// System.Int32 System.Runtime.CompilerServices.ConditionalWeakTable`2::size
	int32_t ___size_6;

public:
	inline static int32_t get_offset_of_data_4() { return static_cast<int32_t>(offsetof(ConditionalWeakTable_2_tFE3F49537A7EF477176850178016C4512DA2731C, ___data_4)); }
	inline EphemeronU5BU5D_t575534899E3EE9D8B85CAF11342BA22D164C7C10* get_data_4() const { return ___data_4; }
	inline EphemeronU5BU5D_t575534899E3EE9D8B85CAF11342BA22D164C7C10** get_address_of_data_4() { return &___data_4; }
	inline void set_data_4(EphemeronU5BU5D_t575534899E3EE9D8B85CAF11342BA22D164C7C10* value)
	{
		___data_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_4), (void*)value);
	}

	inline static int32_t get_offset_of__lock_5() { return static_cast<int32_t>(offsetof(ConditionalWeakTable_2_tFE3F49537A7EF477176850178016C4512DA2731C, ____lock_5)); }
	inline RuntimeObject * get__lock_5() const { return ____lock_5; }
	inline RuntimeObject ** get_address_of__lock_5() { return &____lock_5; }
	inline void set__lock_5(RuntimeObject * value)
	{
		____lock_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lock_5), (void*)value);
	}

	inline static int32_t get_offset_of_size_6() { return static_cast<int32_t>(offsetof(ConditionalWeakTable_2_tFE3F49537A7EF477176850178016C4512DA2731C, ___size_6)); }
	inline int32_t get_size_6() const { return ___size_6; }
	inline int32_t* get_address_of_size_6() { return &___size_6; }
	inline void set_size_6(int32_t value)
	{
		___size_6 = value;
	}
};


// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.IO.Stream>
struct  ConditionalWeakTable_2_tB9E14FC9F1A4E05AD5EB57785FA2CE688D31D2D1  : public RuntimeObject
{
public:
	// System.Runtime.CompilerServices.Ephemeron[] System.Runtime.CompilerServices.ConditionalWeakTable`2::data
	EphemeronU5BU5D_t575534899E3EE9D8B85CAF11342BA22D164C7C10* ___data_4;
	// System.Object System.Runtime.CompilerServices.ConditionalWeakTable`2::_lock
	RuntimeObject * ____lock_5;
	// System.Int32 System.Runtime.CompilerServices.ConditionalWeakTable`2::size
	int32_t ___size_6;

public:
	inline static int32_t get_offset_of_data_4() { return static_cast<int32_t>(offsetof(ConditionalWeakTable_2_tB9E14FC9F1A4E05AD5EB57785FA2CE688D31D2D1, ___data_4)); }
	inline EphemeronU5BU5D_t575534899E3EE9D8B85CAF11342BA22D164C7C10* get_data_4() const { return ___data_4; }
	inline EphemeronU5BU5D_t575534899E3EE9D8B85CAF11342BA22D164C7C10** get_address_of_data_4() { return &___data_4; }
	inline void set_data_4(EphemeronU5BU5D_t575534899E3EE9D8B85CAF11342BA22D164C7C10* value)
	{
		___data_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_4), (void*)value);
	}

	inline static int32_t get_offset_of__lock_5() { return static_cast<int32_t>(offsetof(ConditionalWeakTable_2_tB9E14FC9F1A4E05AD5EB57785FA2CE688D31D2D1, ____lock_5)); }
	inline RuntimeObject * get__lock_5() const { return ____lock_5; }
	inline RuntimeObject ** get_address_of__lock_5() { return &____lock_5; }
	inline void set__lock_5(RuntimeObject * value)
	{
		____lock_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lock_5), (void*)value);
	}

	inline static int32_t get_offset_of_size_6() { return static_cast<int32_t>(offsetof(ConditionalWeakTable_2_tB9E14FC9F1A4E05AD5EB57785FA2CE688D31D2D1, ___size_6)); }
	inline int32_t get_size_6() const { return ___size_6; }
	inline int32_t* get_address_of_size_6() { return &___size_6; }
	inline void set_size_6(int32_t value)
	{
		___size_6 = value;
	}
};


// System.Runtime.ExceptionServices.ExceptionDispatchInfo
struct  ExceptionDispatchInfo_t0C54083F3909DAF986A4DEAA7C047559531E0E2A  : public RuntimeObject
{
public:
	// System.Exception System.Runtime.ExceptionServices.ExceptionDispatchInfo::m_Exception
	Exception_t * ___m_Exception_0;
	// System.Object System.Runtime.ExceptionServices.ExceptionDispatchInfo::m_stackTrace
	RuntimeObject * ___m_stackTrace_1;

public:
	inline static int32_t get_offset_of_m_Exception_0() { return static_cast<int32_t>(offsetof(ExceptionDispatchInfo_t0C54083F3909DAF986A4DEAA7C047559531E0E2A, ___m_Exception_0)); }
	inline Exception_t * get_m_Exception_0() const { return ___m_Exception_0; }
	inline Exception_t ** get_address_of_m_Exception_0() { return &___m_Exception_0; }
	inline void set_m_Exception_0(Exception_t * value)
	{
		___m_Exception_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Exception_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_stackTrace_1() { return static_cast<int32_t>(offsetof(ExceptionDispatchInfo_t0C54083F3909DAF986A4DEAA7C047559531E0E2A, ___m_stackTrace_1)); }
	inline RuntimeObject * get_m_stackTrace_1() const { return ___m_stackTrace_1; }
	inline RuntimeObject ** get_address_of_m_stackTrace_1() { return &___m_stackTrace_1; }
	inline void set_m_stackTrace_1(RuntimeObject * value)
	{
		___m_stackTrace_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stackTrace_1), (void*)value);
	}
};


// System.Runtime.InteropServices.WindowsRuntime.AsyncInfo
struct  AsyncInfo_tE62FD160CC8AD7F05240D607293C55A4535595AD  : public RuntimeObject
{
public:

public:
};


// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions
struct  WindowsRuntimeBufferExtensions_t6C6C86A0BF5285EAC9C96756390AA4E5EE822291  : public RuntimeObject
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


// System.Threading.Tasks.AsyncInfoIdGenerator
struct  AsyncInfoIdGenerator_t55EA89C24441260F8C3BA5D14A724A154210BF0E  : public RuntimeObject
{
public:

public:
};

struct AsyncInfoIdGenerator_t55EA89C24441260F8C3BA5D14A724A154210BF0E_StaticFields
{
public:
	// System.Random System.Threading.Tasks.AsyncInfoIdGenerator::s_idGenerator
	Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F * ___s_idGenerator_0;

public:
	inline static int32_t get_offset_of_s_idGenerator_0() { return static_cast<int32_t>(offsetof(AsyncInfoIdGenerator_t55EA89C24441260F8C3BA5D14A724A154210BF0E_StaticFields, ___s_idGenerator_0)); }
	inline Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F * get_s_idGenerator_0() const { return ___s_idGenerator_0; }
	inline Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F ** get_address_of_s_idGenerator_0() { return &___s_idGenerator_0; }
	inline void set_s_idGenerator_0(Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F * value)
	{
		___s_idGenerator_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_idGenerator_0), (void*)value);
	}
};


// System.Threading.Tasks.ExceptionDispatchHelper
struct  ExceptionDispatchHelper_tDC95DE5A0AF0F4ACB896D7AFFA88BC8B95C925B8  : public RuntimeObject
{
public:

public:
};


// System.Threading.Tasks.ExceptionDispatchHelper_<>c
struct  U3CU3Ec_t91FD53796C718A16C4B6E8D317F8FE03125A2DA8  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t91FD53796C718A16C4B6E8D317F8FE03125A2DA8_StaticFields
{
public:
	// System.Threading.Tasks.ExceptionDispatchHelper_<>c System.Threading.Tasks.ExceptionDispatchHelper_<>c::<>9
	U3CU3Ec_t91FD53796C718A16C4B6E8D317F8FE03125A2DA8 * ___U3CU3E9_0;
	// System.Threading.SendOrPostCallback System.Threading.Tasks.ExceptionDispatchHelper_<>c::<>9__0_0
	SendOrPostCallback_t3F9C0164860E4AA5138DF8B4488DFB0D33147F01 * ___U3CU3E9__0_0_1;
	// System.Threading.SendOrPostCallback System.Threading.Tasks.ExceptionDispatchHelper_<>c::<>9__0_1
	SendOrPostCallback_t3F9C0164860E4AA5138DF8B4488DFB0D33147F01 * ___U3CU3E9__0_1_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t91FD53796C718A16C4B6E8D317F8FE03125A2DA8_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t91FD53796C718A16C4B6E8D317F8FE03125A2DA8 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t91FD53796C718A16C4B6E8D317F8FE03125A2DA8 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t91FD53796C718A16C4B6E8D317F8FE03125A2DA8 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__0_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t91FD53796C718A16C4B6E8D317F8FE03125A2DA8_StaticFields, ___U3CU3E9__0_0_1)); }
	inline SendOrPostCallback_t3F9C0164860E4AA5138DF8B4488DFB0D33147F01 * get_U3CU3E9__0_0_1() const { return ___U3CU3E9__0_0_1; }
	inline SendOrPostCallback_t3F9C0164860E4AA5138DF8B4488DFB0D33147F01 ** get_address_of_U3CU3E9__0_0_1() { return &___U3CU3E9__0_0_1; }
	inline void set_U3CU3E9__0_0_1(SendOrPostCallback_t3F9C0164860E4AA5138DF8B4488DFB0D33147F01 * value)
	{
		___U3CU3E9__0_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__0_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__0_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t91FD53796C718A16C4B6E8D317F8FE03125A2DA8_StaticFields, ___U3CU3E9__0_1_2)); }
	inline SendOrPostCallback_t3F9C0164860E4AA5138DF8B4488DFB0D33147F01 * get_U3CU3E9__0_1_2() const { return ___U3CU3E9__0_1_2; }
	inline SendOrPostCallback_t3F9C0164860E4AA5138DF8B4488DFB0D33147F01 ** get_address_of_U3CU3E9__0_1_2() { return &___U3CU3E9__0_1_2; }
	inline void set_U3CU3E9__0_1_2(SendOrPostCallback_t3F9C0164860E4AA5138DF8B4488DFB0D33147F01 * value)
	{
		___U3CU3E9__0_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__0_1_2), (void*)value);
	}
};


// System.Threading.Tasks.TaskCompletionSource`1<System.VoidValueTypeParameter>
struct  TaskCompletionSource_1_t58B1B163F59487E469888F92C0D132BC81B574FF  : public RuntimeObject
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::m_task
	Task_1_tC00A207FB8C25E4498366C42466B6F913AF48F5E * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskCompletionSource_1_t58B1B163F59487E469888F92C0D132BC81B574FF, ___m_task_0)); }
	inline Task_1_tC00A207FB8C25E4498366C42466B6F913AF48F5E * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tC00A207FB8C25E4498366C42466B6F913AF48F5E ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tC00A207FB8C25E4498366C42466B6F913AF48F5E * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
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

// System.VoidReferenceTypeParameter
struct  VoidReferenceTypeParameter_t255142D4EFCF5C11FA3FC962097F7D9B2D3B4F6E  : public RuntimeObject
{
public:

public:
};


// System.WindowsRuntimeSystemExtensions
struct  WindowsRuntimeSystemExtensions_tD8301806431F3B8A2D37F2B637BA6BC69C3AFEA8  : public RuntimeObject
{
public:

public:
};


// System.WindowsRuntimeSystemExtensions_<>c
struct  U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E_StaticFields
{
public:
	// System.WindowsRuntimeSystemExtensions_<>c System.WindowsRuntimeSystemExtensions_<>c::<>9
	U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E * ___U3CU3E9_0;
	// System.Action`1<System.Object> System.WindowsRuntimeSystemExtensions_<>c::<>9__0_0
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ___U3CU3E9__0_0_1;
	// System.Action`2<System.Threading.Tasks.Task,System.Object> System.WindowsRuntimeSystemExtensions_<>c::<>9__0_1
	Action_2_tC5CBC473593FC52892A3A27575658B0C050584D8 * ___U3CU3E9__0_1_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__0_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E_StaticFields, ___U3CU3E9__0_0_1)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get_U3CU3E9__0_0_1() const { return ___U3CU3E9__0_0_1; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of_U3CU3E9__0_0_1() { return &___U3CU3E9__0_0_1; }
	inline void set_U3CU3E9__0_0_1(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		___U3CU3E9__0_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__0_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__0_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E_StaticFields, ___U3CU3E9__0_1_2)); }
	inline Action_2_tC5CBC473593FC52892A3A27575658B0C050584D8 * get_U3CU3E9__0_1_2() const { return ___U3CU3E9__0_1_2; }
	inline Action_2_tC5CBC473593FC52892A3A27575658B0C050584D8 ** get_address_of_U3CU3E9__0_1_2() { return &___U3CU3E9__0_1_2; }
	inline void set_U3CU3E9__0_1_2(Action_2_tC5CBC473593FC52892A3A27575658B0C050584D8 * value)
	{
		___U3CU3E9__0_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__0_1_2), (void*)value);
	}
};


// Windows.Foundation.TokenizerHelper
struct  TokenizerHelper_t9D86A6D6BA313EFDFCFD740BDB8CD8F36CDD4539  : public RuntimeObject
{
public:

public:
};


// System.ArraySegment`1<System.Byte>
struct  ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA 
{
public:
	// T[] System.ArraySegment`1::_array
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____array_0;
	// System.Int32 System.ArraySegment`1::_offset
	int32_t ____offset_1;
	// System.Int32 System.ArraySegment`1::_count
	int32_t ____count_2;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA, ____array_0)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get__array_0() const { return ____array_0; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__offset_1() { return static_cast<int32_t>(offsetof(ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA, ____offset_1)); }
	inline int32_t get__offset_1() const { return ____offset_1; }
	inline int32_t* get_address_of__offset_1() { return &____offset_1; }
	inline void set__offset_1(int32_t value)
	{
		____offset_1 = value;
	}

	inline static int32_t get_offset_of__count_2() { return static_cast<int32_t>(offsetof(ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA, ____count_2)); }
	inline int32_t get__count_2() const { return ____count_2; }
	inline int32_t* get_address_of__count_2() { return &____count_2; }
	inline void set__count_2(int32_t value)
	{
		____count_2 = value;
	}
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


// System.Double
struct  Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
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

// System.Guid
struct  Guid_t 
{
public:
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

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rngAccess_12), (void*)value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_13), (void*)value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fastRng_14), (void*)value);
	}
};


// System.IO.Stream
struct  Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7  : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF
{
public:
	// System.IO.Stream_ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * ____activeReadWriteTask_3;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * ____asyncActiveSemaphore_4;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_3() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7, ____activeReadWriteTask_3)); }
	inline ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * get__activeReadWriteTask_3() const { return ____activeReadWriteTask_3; }
	inline ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 ** get_address_of__activeReadWriteTask_3() { return &____activeReadWriteTask_3; }
	inline void set__activeReadWriteTask_3(ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * value)
	{
		____activeReadWriteTask_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_3), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_4() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7, ____asyncActiveSemaphore_4)); }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * get__asyncActiveSemaphore_4() const { return ____asyncActiveSemaphore_4; }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 ** get_address_of__asyncActiveSemaphore_4() { return &____asyncActiveSemaphore_4; }
	inline void set__asyncActiveSemaphore_4(SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * value)
	{
		____asyncActiveSemaphore_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_4), (void*)value);
	}
};

struct Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7_StaticFields, ___Null_1)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get_Null_1() const { return ___Null_1; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}
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


// System.Int64
struct  Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
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


// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct  AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01 
{
public:
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___m_defaultContextAction_1;

public:
	inline static int32_t get_offset_of_m_stateMachine_0() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01, ___m_stateMachine_0)); }
	inline RuntimeObject* get_m_stateMachine_0() const { return ___m_stateMachine_0; }
	inline RuntimeObject** get_address_of_m_stateMachine_0() { return &___m_stateMachine_0; }
	inline void set_m_stateMachine_0(RuntimeObject* value)
	{
		___m_stateMachine_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateMachine_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_defaultContextAction_1() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01, ___m_defaultContextAction_1)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_m_defaultContextAction_1() const { return ___m_defaultContextAction_1; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_m_defaultContextAction_1() { return &___m_defaultContextAction_1; }
	inline void set_m_defaultContextAction_1(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___m_defaultContextAction_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultContextAction_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable_ConfiguredTaskAwaiter
struct  ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874 
{
public:
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.ConfiguredTaskAwaitable_ConfiguredTaskAwaiter::m_task
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable_ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874, ___m_task_0)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get_m_task_0() const { return ___m_task_0; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_continueOnCapturedContext_1() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874, ___m_continueOnCapturedContext_1)); }
	inline bool get_m_continueOnCapturedContext_1() const { return ___m_continueOnCapturedContext_1; }
	inline bool* get_address_of_m_continueOnCapturedContext_1() { return &___m_continueOnCapturedContext_1; }
	inline void set_m_continueOnCapturedContext_1(bool value)
	{
		___m_continueOnCapturedContext_1 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
struct ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874_marshaled_pinvoke
{
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___m_task_0;
	int32_t ___m_continueOnCapturedContext_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
struct ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874_marshaled_com
{
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___m_task_0;
	int32_t ___m_continueOnCapturedContext_1;
};

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter<System.Int32>
struct  ConfiguredTaskAwaiter_t18D0589F789FFE82A30A223888FB7C5BED32C63E 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter::m_task
	Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87 * ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_t18D0589F789FFE82A30A223888FB7C5BED32C63E, ___m_task_0)); }
	inline Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_continueOnCapturedContext_1() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_t18D0589F789FFE82A30A223888FB7C5BED32C63E, ___m_continueOnCapturedContext_1)); }
	inline bool get_m_continueOnCapturedContext_1() const { return ___m_continueOnCapturedContext_1; }
	inline bool* get_address_of_m_continueOnCapturedContext_1() { return &___m_continueOnCapturedContext_1; }
	inline void set_m_continueOnCapturedContext_1(bool value)
	{
		___m_continueOnCapturedContext_1 = value;
	}
};


// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter<System.Object>
struct  ConfiguredTaskAwaiter_tFB3C4197768C6CF02BE088F703AA6E46D703D46E 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter::m_task
	Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_tFB3C4197768C6CF02BE088F703AA6E46D703D46E, ___m_task_0)); }
	inline Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_continueOnCapturedContext_1() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_tFB3C4197768C6CF02BE088F703AA6E46D703D46E, ___m_continueOnCapturedContext_1)); }
	inline bool get_m_continueOnCapturedContext_1() const { return ___m_continueOnCapturedContext_1; }
	inline bool* get_address_of_m_continueOnCapturedContext_1() { return &___m_continueOnCapturedContext_1; }
	inline void set_m_continueOnCapturedContext_1(bool value)
	{
		___m_continueOnCapturedContext_1 = value;
	}
};


// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter<Windows.Storage.Streams.IBuffer>
struct  ConfiguredTaskAwaiter_t24BCF0C8B4E4A7F263C9F2AFCC9528025F667E77 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter::m_task
	Task_1_t84A3E8ADA0C56D0776B0FCEBCEA98E253DB4385C * ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_t24BCF0C8B4E4A7F263C9F2AFCC9528025F667E77, ___m_task_0)); }
	inline Task_1_t84A3E8ADA0C56D0776B0FCEBCEA98E253DB4385C * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t84A3E8ADA0C56D0776B0FCEBCEA98E253DB4385C ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t84A3E8ADA0C56D0776B0FCEBCEA98E253DB4385C * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_continueOnCapturedContext_1() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_t24BCF0C8B4E4A7F263C9F2AFCC9528025F667E77, ___m_continueOnCapturedContext_1)); }
	inline bool get_m_continueOnCapturedContext_1() const { return ___m_continueOnCapturedContext_1; }
	inline bool* get_address_of_m_continueOnCapturedContext_1() { return &___m_continueOnCapturedContext_1; }
	inline void set_m_continueOnCapturedContext_1(bool value)
	{
		___m_continueOnCapturedContext_1 = value;
	}
};


// System.Runtime.CompilerServices.TaskAwaiter
struct  TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F 
{
public:
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.TaskAwaiter::m_task
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F, ___m_task_0)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get_m_task_0() const { return ___m_task_0; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_marshaled_pinvoke
{
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___m_task_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_marshaled_com
{
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___m_task_0;
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


// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// System.Threading.CancellationToken
struct  CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB 
{
public:
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::m_source
	CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * ___m_source_0;

public:
	inline static int32_t get_offset_of_m_source_0() { return static_cast<int32_t>(offsetof(CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB, ___m_source_0)); }
	inline CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * get_m_source_0() const { return ___m_source_0; }
	inline CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE ** get_address_of_m_source_0() { return &___m_source_0; }
	inline void set_m_source_0(CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * value)
	{
		___m_source_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_source_0), (void*)value);
	}
};

struct CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB_StaticFields
{
public:
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_ActionToActionObjShunt
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ___s_ActionToActionObjShunt_1;

public:
	inline static int32_t get_offset_of_s_ActionToActionObjShunt_1() { return static_cast<int32_t>(offsetof(CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB_StaticFields, ___s_ActionToActionObjShunt_1)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get_s_ActionToActionObjShunt_1() const { return ___s_ActionToActionObjShunt_1; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of_s_ActionToActionObjShunt_1() { return &___s_ActionToActionObjShunt_1; }
	inline void set_s_ActionToActionObjShunt_1(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		___s_ActionToActionObjShunt_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ActionToActionObjShunt_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB_marshaled_pinvoke
{
	CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * ___m_source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB_marshaled_com
{
	CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * ___m_source_0;
};

// System.Threading.SparselyPopulatedArrayAddInfo`1<System.Threading.CancellationCallbackInfo>
struct  SparselyPopulatedArrayAddInfo_1_t0A76BDD84EBF76BEF894419FC221D25BB3D4FBEE 
{
public:
	// System.Threading.SparselyPopulatedArrayFragment`1<T> System.Threading.SparselyPopulatedArrayAddInfo`1::m_source
	SparselyPopulatedArrayFragment_1_tA54224D01E2FDC03AC2867CDDC8C53E17FA933D7 * ___m_source_0;
	// System.Int32 System.Threading.SparselyPopulatedArrayAddInfo`1::m_index
	int32_t ___m_index_1;

public:
	inline static int32_t get_offset_of_m_source_0() { return static_cast<int32_t>(offsetof(SparselyPopulatedArrayAddInfo_1_t0A76BDD84EBF76BEF894419FC221D25BB3D4FBEE, ___m_source_0)); }
	inline SparselyPopulatedArrayFragment_1_tA54224D01E2FDC03AC2867CDDC8C53E17FA933D7 * get_m_source_0() const { return ___m_source_0; }
	inline SparselyPopulatedArrayFragment_1_tA54224D01E2FDC03AC2867CDDC8C53E17FA933D7 ** get_address_of_m_source_0() { return &___m_source_0; }
	inline void set_m_source_0(SparselyPopulatedArrayFragment_1_tA54224D01E2FDC03AC2867CDDC8C53E17FA933D7 * value)
	{
		___m_source_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_source_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_index_1() { return static_cast<int32_t>(offsetof(SparselyPopulatedArrayAddInfo_1_t0A76BDD84EBF76BEF894419FC221D25BB3D4FBEE, ___m_index_1)); }
	inline int32_t get_m_index_1() const { return ___m_index_1; }
	inline int32_t* get_address_of_m_index_1() { return &___m_index_1; }
	inline void set_m_index_1(int32_t value)
	{
		___m_index_1 = value;
	}
};


// System.UInt32
struct  UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
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


// System.VoidValueTypeParameter
struct  VoidValueTypeParameter_t4218889FC907F3892F775433493F080BD1A41CAA 
{
public:
	union
	{
		struct
		{
		};
		uint8_t VoidValueTypeParameter_t4218889FC907F3892F775433493F080BD1A41CAA__padding[1];
	};

public:
};


// Windows.Foundation.Point
struct  Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC 
{
public:
	// System.Single Windows.Foundation.Point::_x
	float ____x_0;
	// System.Single Windows.Foundation.Point::_y
	float ____y_1;

public:
	inline static int32_t get_offset_of__x_0() { return static_cast<int32_t>(offsetof(Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC, ____x_0)); }
	inline float get__x_0() const { return ____x_0; }
	inline float* get_address_of__x_0() { return &____x_0; }
	inline void set__x_0(float value)
	{
		____x_0 = value;
	}

	inline static int32_t get_offset_of__y_1() { return static_cast<int32_t>(offsetof(Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC, ____y_1)); }
	inline float get__y_1() const { return ____y_1; }
	inline float* get_address_of__y_1() { return &____y_1; }
	inline void set__y_1(float value)
	{
		____y_1 = value;
	}
};


// Windows.Foundation.Rect
struct  Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 
{
public:
	// System.Single Windows.Foundation.Rect::_x
	float ____x_0;
	// System.Single Windows.Foundation.Rect::_y
	float ____y_1;
	// System.Single Windows.Foundation.Rect::_width
	float ____width_2;
	// System.Single Windows.Foundation.Rect::_height
	float ____height_3;

public:
	inline static int32_t get_offset_of__x_0() { return static_cast<int32_t>(offsetof(Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0, ____x_0)); }
	inline float get__x_0() const { return ____x_0; }
	inline float* get_address_of__x_0() { return &____x_0; }
	inline void set__x_0(float value)
	{
		____x_0 = value;
	}

	inline static int32_t get_offset_of__y_1() { return static_cast<int32_t>(offsetof(Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0, ____y_1)); }
	inline float get__y_1() const { return ____y_1; }
	inline float* get_address_of__y_1() { return &____y_1; }
	inline void set__y_1(float value)
	{
		____y_1 = value;
	}

	inline static int32_t get_offset_of__width_2() { return static_cast<int32_t>(offsetof(Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0, ____width_2)); }
	inline float get__width_2() const { return ____width_2; }
	inline float* get_address_of__width_2() { return &____width_2; }
	inline void set__width_2(float value)
	{
		____width_2 = value;
	}

	inline static int32_t get_offset_of__height_3() { return static_cast<int32_t>(offsetof(Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0, ____height_3)); }
	inline float get__height_3() const { return ____height_3; }
	inline float* get_address_of__height_3() { return &____height_3; }
	inline void set__height_3(float value)
	{
		____height_3 = value;
	}
};


// Windows.Foundation.Size
struct  Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 
{
public:
	// System.Single Windows.Foundation.Size::_width
	float ____width_0;
	// System.Single Windows.Foundation.Size::_height
	float ____height_1;

public:
	inline static int32_t get_offset_of__width_0() { return static_cast<int32_t>(offsetof(Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2, ____width_0)); }
	inline float get__width_0() const { return ____width_0; }
	inline float* get_address_of__width_0() { return &____width_0; }
	inline void set__width_0(float value)
	{
		____width_0 = value;
	}

	inline static int32_t get_offset_of__height_1() { return static_cast<int32_t>(offsetof(Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2, ____height_1)); }
	inline float get__height_1() const { return ____height_1; }
	inline float* get_address_of__height_1() { return &____height_1; }
	inline void set__height_1(float value)
	{
		____height_1 = value;
	}
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

// System.Globalization.NumberStyles
struct  NumberStyles_tB0ADA2D9CCAA236331AED14C42BE5832B2351592 
{
public:
	// System.Int32 System.Globalization.NumberStyles::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NumberStyles_tB0ADA2D9CCAA236331AED14C42BE5832B2351592, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.BufferedStream
struct  BufferedStream_tA4070368D71992D14E131A8230BAA273A71A0CE9  : public Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7
{
public:
	// System.IO.Stream System.IO.BufferedStream::_stream
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ____stream_5;
	// System.Byte[] System.IO.BufferedStream::_buffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____buffer_6;
	// System.Int32 System.IO.BufferedStream::_bufferSize
	int32_t ____bufferSize_7;
	// System.Int32 System.IO.BufferedStream::_readPos
	int32_t ____readPos_8;
	// System.Int32 System.IO.BufferedStream::_readLen
	int32_t ____readLen_9;
	// System.Int32 System.IO.BufferedStream::_writePos
	int32_t ____writePos_10;
	// System.Threading.Tasks.BeginEndAwaitableAdapter System.IO.BufferedStream::_beginEndAwaitable
	BeginEndAwaitableAdapter_t3F4E9B174FC5DB91246385E132CFC023CA370471 * ____beginEndAwaitable_11;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.BufferedStream::_lastSyncCompletedReadTask
	Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87 * ____lastSyncCompletedReadTask_12;

public:
	inline static int32_t get_offset_of__stream_5() { return static_cast<int32_t>(offsetof(BufferedStream_tA4070368D71992D14E131A8230BAA273A71A0CE9, ____stream_5)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get__stream_5() const { return ____stream_5; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of__stream_5() { return &____stream_5; }
	inline void set__stream_5(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		____stream_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stream_5), (void*)value);
	}

	inline static int32_t get_offset_of__buffer_6() { return static_cast<int32_t>(offsetof(BufferedStream_tA4070368D71992D14E131A8230BAA273A71A0CE9, ____buffer_6)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get__buffer_6() const { return ____buffer_6; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of__buffer_6() { return &____buffer_6; }
	inline void set__buffer_6(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		____buffer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buffer_6), (void*)value);
	}

	inline static int32_t get_offset_of__bufferSize_7() { return static_cast<int32_t>(offsetof(BufferedStream_tA4070368D71992D14E131A8230BAA273A71A0CE9, ____bufferSize_7)); }
	inline int32_t get__bufferSize_7() const { return ____bufferSize_7; }
	inline int32_t* get_address_of__bufferSize_7() { return &____bufferSize_7; }
	inline void set__bufferSize_7(int32_t value)
	{
		____bufferSize_7 = value;
	}

	inline static int32_t get_offset_of__readPos_8() { return static_cast<int32_t>(offsetof(BufferedStream_tA4070368D71992D14E131A8230BAA273A71A0CE9, ____readPos_8)); }
	inline int32_t get__readPos_8() const { return ____readPos_8; }
	inline int32_t* get_address_of__readPos_8() { return &____readPos_8; }
	inline void set__readPos_8(int32_t value)
	{
		____readPos_8 = value;
	}

	inline static int32_t get_offset_of__readLen_9() { return static_cast<int32_t>(offsetof(BufferedStream_tA4070368D71992D14E131A8230BAA273A71A0CE9, ____readLen_9)); }
	inline int32_t get__readLen_9() const { return ____readLen_9; }
	inline int32_t* get_address_of__readLen_9() { return &____readLen_9; }
	inline void set__readLen_9(int32_t value)
	{
		____readLen_9 = value;
	}

	inline static int32_t get_offset_of__writePos_10() { return static_cast<int32_t>(offsetof(BufferedStream_tA4070368D71992D14E131A8230BAA273A71A0CE9, ____writePos_10)); }
	inline int32_t get__writePos_10() const { return ____writePos_10; }
	inline int32_t* get_address_of__writePos_10() { return &____writePos_10; }
	inline void set__writePos_10(int32_t value)
	{
		____writePos_10 = value;
	}

	inline static int32_t get_offset_of__beginEndAwaitable_11() { return static_cast<int32_t>(offsetof(BufferedStream_tA4070368D71992D14E131A8230BAA273A71A0CE9, ____beginEndAwaitable_11)); }
	inline BeginEndAwaitableAdapter_t3F4E9B174FC5DB91246385E132CFC023CA370471 * get__beginEndAwaitable_11() const { return ____beginEndAwaitable_11; }
	inline BeginEndAwaitableAdapter_t3F4E9B174FC5DB91246385E132CFC023CA370471 ** get_address_of__beginEndAwaitable_11() { return &____beginEndAwaitable_11; }
	inline void set__beginEndAwaitable_11(BeginEndAwaitableAdapter_t3F4E9B174FC5DB91246385E132CFC023CA370471 * value)
	{
		____beginEndAwaitable_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____beginEndAwaitable_11), (void*)value);
	}

	inline static int32_t get_offset_of__lastSyncCompletedReadTask_12() { return static_cast<int32_t>(offsetof(BufferedStream_tA4070368D71992D14E131A8230BAA273A71A0CE9, ____lastSyncCompletedReadTask_12)); }
	inline Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87 * get__lastSyncCompletedReadTask_12() const { return ____lastSyncCompletedReadTask_12; }
	inline Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87 ** get_address_of__lastSyncCompletedReadTask_12() { return &____lastSyncCompletedReadTask_12; }
	inline void set__lastSyncCompletedReadTask_12(Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87 * value)
	{
		____lastSyncCompletedReadTask_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lastSyncCompletedReadTask_12), (void*)value);
	}
};


// System.IO.FileAccess
struct  FileAccess_t31950F3A853EAE886AC8F13EA7FC03A3EB46E3F6 
{
public:
	// System.Int32 System.IO.FileAccess::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileAccess_t31950F3A853EAE886AC8F13EA7FC03A3EB46E3F6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.IOException
struct  IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.IO.IOException::_maybeFullPath
	String_t* ____maybeFullPath_17;

public:
	inline static int32_t get_offset_of__maybeFullPath_17() { return static_cast<int32_t>(offsetof(IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA, ____maybeFullPath_17)); }
	inline String_t* get__maybeFullPath_17() const { return ____maybeFullPath_17; }
	inline String_t** get_address_of__maybeFullPath_17() { return &____maybeFullPath_17; }
	inline void set__maybeFullPath_17(String_t* value)
	{
		____maybeFullPath_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____maybeFullPath_17), (void*)value);
	}
};


// System.IO.MemoryStream
struct  MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C  : public Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7
{
public:
	// System.Byte[] System.IO.MemoryStream::_buffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____buffer_5;
	// System.Int32 System.IO.MemoryStream::_origin
	int32_t ____origin_6;
	// System.Int32 System.IO.MemoryStream::_position
	int32_t ____position_7;
	// System.Int32 System.IO.MemoryStream::_length
	int32_t ____length_8;
	// System.Int32 System.IO.MemoryStream::_capacity
	int32_t ____capacity_9;
	// System.Boolean System.IO.MemoryStream::_expandable
	bool ____expandable_10;
	// System.Boolean System.IO.MemoryStream::_writable
	bool ____writable_11;
	// System.Boolean System.IO.MemoryStream::_exposable
	bool ____exposable_12;
	// System.Boolean System.IO.MemoryStream::_isOpen
	bool ____isOpen_13;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.MemoryStream::_lastReadTask
	Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87 * ____lastReadTask_14;

public:
	inline static int32_t get_offset_of__buffer_5() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____buffer_5)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get__buffer_5() const { return ____buffer_5; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of__buffer_5() { return &____buffer_5; }
	inline void set__buffer_5(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		____buffer_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buffer_5), (void*)value);
	}

	inline static int32_t get_offset_of__origin_6() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____origin_6)); }
	inline int32_t get__origin_6() const { return ____origin_6; }
	inline int32_t* get_address_of__origin_6() { return &____origin_6; }
	inline void set__origin_6(int32_t value)
	{
		____origin_6 = value;
	}

	inline static int32_t get_offset_of__position_7() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____position_7)); }
	inline int32_t get__position_7() const { return ____position_7; }
	inline int32_t* get_address_of__position_7() { return &____position_7; }
	inline void set__position_7(int32_t value)
	{
		____position_7 = value;
	}

	inline static int32_t get_offset_of__length_8() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____length_8)); }
	inline int32_t get__length_8() const { return ____length_8; }
	inline int32_t* get_address_of__length_8() { return &____length_8; }
	inline void set__length_8(int32_t value)
	{
		____length_8 = value;
	}

	inline static int32_t get_offset_of__capacity_9() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____capacity_9)); }
	inline int32_t get__capacity_9() const { return ____capacity_9; }
	inline int32_t* get_address_of__capacity_9() { return &____capacity_9; }
	inline void set__capacity_9(int32_t value)
	{
		____capacity_9 = value;
	}

	inline static int32_t get_offset_of__expandable_10() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____expandable_10)); }
	inline bool get__expandable_10() const { return ____expandable_10; }
	inline bool* get_address_of__expandable_10() { return &____expandable_10; }
	inline void set__expandable_10(bool value)
	{
		____expandable_10 = value;
	}

	inline static int32_t get_offset_of__writable_11() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____writable_11)); }
	inline bool get__writable_11() const { return ____writable_11; }
	inline bool* get_address_of__writable_11() { return &____writable_11; }
	inline void set__writable_11(bool value)
	{
		____writable_11 = value;
	}

	inline static int32_t get_offset_of__exposable_12() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____exposable_12)); }
	inline bool get__exposable_12() const { return ____exposable_12; }
	inline bool* get_address_of__exposable_12() { return &____exposable_12; }
	inline void set__exposable_12(bool value)
	{
		____exposable_12 = value;
	}

	inline static int32_t get_offset_of__isOpen_13() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____isOpen_13)); }
	inline bool get__isOpen_13() const { return ____isOpen_13; }
	inline bool* get_address_of__isOpen_13() { return &____isOpen_13; }
	inline void set__isOpen_13(bool value)
	{
		____isOpen_13 = value;
	}

	inline static int32_t get_offset_of__lastReadTask_14() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____lastReadTask_14)); }
	inline Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87 * get__lastReadTask_14() const { return ____lastReadTask_14; }
	inline Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87 ** get_address_of__lastReadTask_14() { return &____lastReadTask_14; }
	inline void set__lastReadTask_14(Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87 * value)
	{
		____lastReadTask_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lastReadTask_14), (void*)value);
	}
};


// System.IO.NetFxToWinRtStreamAdapter_StreamReadOperationOptimization
struct  StreamReadOperationOptimization_t3274CAF0EEE6936221755682B9F82DFEE5564DF9 
{
public:
	// System.Int32 System.IO.NetFxToWinRtStreamAdapter_StreamReadOperationOptimization::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StreamReadOperationOptimization_t3274CAF0EEE6936221755682B9F82DFEE5564DF9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.SeekOrigin
struct  SeekOrigin_tAC0AF155E3D8B36359FAD8A95FACA23169D55BB3 
{
public:
	// System.Int32 System.IO.SeekOrigin::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SeekOrigin_tAC0AF155E3D8B36359FAD8A95FACA23169D55BB3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.StreamOperationAsyncResult
struct  StreamOperationAsyncResult_t675AB408CDF1B11AC6F446E24352B441F6422E0F  : public RuntimeObject
{
public:
	// System.AsyncCallback System.IO.StreamOperationAsyncResult::_userCompletionCallback
	AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ____userCompletionCallback_0;
	// System.Object System.IO.StreamOperationAsyncResult::_userAsyncStateInfo
	RuntimeObject * ____userAsyncStateInfo_1;
	// Windows.Foundation.IAsyncInfo System.IO.StreamOperationAsyncResult::_asyncStreamOperation
	RuntimeObject* ____asyncStreamOperation_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.IO.StreamOperationAsyncResult::_completed
	bool ____completed_3;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.IO.StreamOperationAsyncResult::_callbackInvoked
	bool ____callbackInvoked_4;
	// System.Threading.ManualResetEvent modreq(System.Runtime.CompilerServices.IsVolatile) System.IO.StreamOperationAsyncResult::_waitHandle
	ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 * ____waitHandle_5;
	// System.Int64 System.IO.StreamOperationAsyncResult::_bytesCompleted
	int64_t ____bytesCompleted_6;
	// System.Runtime.ExceptionServices.ExceptionDispatchInfo System.IO.StreamOperationAsyncResult::_errorInfo
	ExceptionDispatchInfo_t0C54083F3909DAF986A4DEAA7C047559531E0E2A * ____errorInfo_7;
	// System.Boolean System.IO.StreamOperationAsyncResult::_processCompletedOperationInCallback
	bool ____processCompletedOperationInCallback_8;
	// Windows.Foundation.IAsyncInfo System.IO.StreamOperationAsyncResult::_completedOperation
	RuntimeObject* ____completedOperation_9;

public:
	inline static int32_t get_offset_of__userCompletionCallback_0() { return static_cast<int32_t>(offsetof(StreamOperationAsyncResult_t675AB408CDF1B11AC6F446E24352B441F6422E0F, ____userCompletionCallback_0)); }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * get__userCompletionCallback_0() const { return ____userCompletionCallback_0; }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 ** get_address_of__userCompletionCallback_0() { return &____userCompletionCallback_0; }
	inline void set__userCompletionCallback_0(AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * value)
	{
		____userCompletionCallback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____userCompletionCallback_0), (void*)value);
	}

	inline static int32_t get_offset_of__userAsyncStateInfo_1() { return static_cast<int32_t>(offsetof(StreamOperationAsyncResult_t675AB408CDF1B11AC6F446E24352B441F6422E0F, ____userAsyncStateInfo_1)); }
	inline RuntimeObject * get__userAsyncStateInfo_1() const { return ____userAsyncStateInfo_1; }
	inline RuntimeObject ** get_address_of__userAsyncStateInfo_1() { return &____userAsyncStateInfo_1; }
	inline void set__userAsyncStateInfo_1(RuntimeObject * value)
	{
		____userAsyncStateInfo_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____userAsyncStateInfo_1), (void*)value);
	}

	inline static int32_t get_offset_of__asyncStreamOperation_2() { return static_cast<int32_t>(offsetof(StreamOperationAsyncResult_t675AB408CDF1B11AC6F446E24352B441F6422E0F, ____asyncStreamOperation_2)); }
	inline RuntimeObject* get__asyncStreamOperation_2() const { return ____asyncStreamOperation_2; }
	inline RuntimeObject** get_address_of__asyncStreamOperation_2() { return &____asyncStreamOperation_2; }
	inline void set__asyncStreamOperation_2(RuntimeObject* value)
	{
		____asyncStreamOperation_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncStreamOperation_2), (void*)value);
	}

	inline static int32_t get_offset_of__completed_3() { return static_cast<int32_t>(offsetof(StreamOperationAsyncResult_t675AB408CDF1B11AC6F446E24352B441F6422E0F, ____completed_3)); }
	inline bool get__completed_3() const { return ____completed_3; }
	inline bool* get_address_of__completed_3() { return &____completed_3; }
	inline void set__completed_3(bool value)
	{
		____completed_3 = value;
	}

	inline static int32_t get_offset_of__callbackInvoked_4() { return static_cast<int32_t>(offsetof(StreamOperationAsyncResult_t675AB408CDF1B11AC6F446E24352B441F6422E0F, ____callbackInvoked_4)); }
	inline bool get__callbackInvoked_4() const { return ____callbackInvoked_4; }
	inline bool* get_address_of__callbackInvoked_4() { return &____callbackInvoked_4; }
	inline void set__callbackInvoked_4(bool value)
	{
		____callbackInvoked_4 = value;
	}

	inline static int32_t get_offset_of__waitHandle_5() { return static_cast<int32_t>(offsetof(StreamOperationAsyncResult_t675AB408CDF1B11AC6F446E24352B441F6422E0F, ____waitHandle_5)); }
	inline ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 * get__waitHandle_5() const { return ____waitHandle_5; }
	inline ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 ** get_address_of__waitHandle_5() { return &____waitHandle_5; }
	inline void set__waitHandle_5(ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 * value)
	{
		____waitHandle_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____waitHandle_5), (void*)value);
	}

	inline static int32_t get_offset_of__bytesCompleted_6() { return static_cast<int32_t>(offsetof(StreamOperationAsyncResult_t675AB408CDF1B11AC6F446E24352B441F6422E0F, ____bytesCompleted_6)); }
	inline int64_t get__bytesCompleted_6() const { return ____bytesCompleted_6; }
	inline int64_t* get_address_of__bytesCompleted_6() { return &____bytesCompleted_6; }
	inline void set__bytesCompleted_6(int64_t value)
	{
		____bytesCompleted_6 = value;
	}

	inline static int32_t get_offset_of__errorInfo_7() { return static_cast<int32_t>(offsetof(StreamOperationAsyncResult_t675AB408CDF1B11AC6F446E24352B441F6422E0F, ____errorInfo_7)); }
	inline ExceptionDispatchInfo_t0C54083F3909DAF986A4DEAA7C047559531E0E2A * get__errorInfo_7() const { return ____errorInfo_7; }
	inline ExceptionDispatchInfo_t0C54083F3909DAF986A4DEAA7C047559531E0E2A ** get_address_of__errorInfo_7() { return &____errorInfo_7; }
	inline void set__errorInfo_7(ExceptionDispatchInfo_t0C54083F3909DAF986A4DEAA7C047559531E0E2A * value)
	{
		____errorInfo_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____errorInfo_7), (void*)value);
	}

	inline static int32_t get_offset_of__processCompletedOperationInCallback_8() { return static_cast<int32_t>(offsetof(StreamOperationAsyncResult_t675AB408CDF1B11AC6F446E24352B441F6422E0F, ____processCompletedOperationInCallback_8)); }
	inline bool get__processCompletedOperationInCallback_8() const { return ____processCompletedOperationInCallback_8; }
	inline bool* get_address_of__processCompletedOperationInCallback_8() { return &____processCompletedOperationInCallback_8; }
	inline void set__processCompletedOperationInCallback_8(bool value)
	{
		____processCompletedOperationInCallback_8 = value;
	}

	inline static int32_t get_offset_of__completedOperation_9() { return static_cast<int32_t>(offsetof(StreamOperationAsyncResult_t675AB408CDF1B11AC6F446E24352B441F6422E0F, ____completedOperation_9)); }
	inline RuntimeObject* get__completedOperation_9() const { return ____completedOperation_9; }
	inline RuntimeObject** get_address_of__completedOperation_9() { return &____completedOperation_9; }
	inline void set__completedOperation_9(RuntimeObject* value)
	{
		____completedOperation_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____completedOperation_9), (void*)value);
	}
};


// System.IO.WinRtToNetFxStreamAdapter
struct  WinRtToNetFxStreamAdapter_t5DF3E266765C62B1F96383772091E1E54DD48397  : public Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7
{
public:
	// System.Byte[] System.IO.WinRtToNetFxStreamAdapter::_oneByteBuffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____oneByteBuffer_5;
	// System.Boolean System.IO.WinRtToNetFxStreamAdapter::_leaveUnderlyingStreamOpen
	bool ____leaveUnderlyingStreamOpen_6;
	// System.Object System.IO.WinRtToNetFxStreamAdapter::_winRtStream
	RuntimeObject * ____winRtStream_7;
	// System.Boolean System.IO.WinRtToNetFxStreamAdapter::_canRead
	bool ____canRead_8;
	// System.Boolean System.IO.WinRtToNetFxStreamAdapter::_canWrite
	bool ____canWrite_9;
	// System.Boolean System.IO.WinRtToNetFxStreamAdapter::_canSeek
	bool ____canSeek_10;

public:
	inline static int32_t get_offset_of__oneByteBuffer_5() { return static_cast<int32_t>(offsetof(WinRtToNetFxStreamAdapter_t5DF3E266765C62B1F96383772091E1E54DD48397, ____oneByteBuffer_5)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get__oneByteBuffer_5() const { return ____oneByteBuffer_5; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of__oneByteBuffer_5() { return &____oneByteBuffer_5; }
	inline void set__oneByteBuffer_5(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		____oneByteBuffer_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____oneByteBuffer_5), (void*)value);
	}

	inline static int32_t get_offset_of__leaveUnderlyingStreamOpen_6() { return static_cast<int32_t>(offsetof(WinRtToNetFxStreamAdapter_t5DF3E266765C62B1F96383772091E1E54DD48397, ____leaveUnderlyingStreamOpen_6)); }
	inline bool get__leaveUnderlyingStreamOpen_6() const { return ____leaveUnderlyingStreamOpen_6; }
	inline bool* get_address_of__leaveUnderlyingStreamOpen_6() { return &____leaveUnderlyingStreamOpen_6; }
	inline void set__leaveUnderlyingStreamOpen_6(bool value)
	{
		____leaveUnderlyingStreamOpen_6 = value;
	}

	inline static int32_t get_offset_of__winRtStream_7() { return static_cast<int32_t>(offsetof(WinRtToNetFxStreamAdapter_t5DF3E266765C62B1F96383772091E1E54DD48397, ____winRtStream_7)); }
	inline RuntimeObject * get__winRtStream_7() const { return ____winRtStream_7; }
	inline RuntimeObject ** get_address_of__winRtStream_7() { return &____winRtStream_7; }
	inline void set__winRtStream_7(RuntimeObject * value)
	{
		____winRtStream_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____winRtStream_7), (void*)value);
	}

	inline static int32_t get_offset_of__canRead_8() { return static_cast<int32_t>(offsetof(WinRtToNetFxStreamAdapter_t5DF3E266765C62B1F96383772091E1E54DD48397, ____canRead_8)); }
	inline bool get__canRead_8() const { return ____canRead_8; }
	inline bool* get_address_of__canRead_8() { return &____canRead_8; }
	inline void set__canRead_8(bool value)
	{
		____canRead_8 = value;
	}

	inline static int32_t get_offset_of__canWrite_9() { return static_cast<int32_t>(offsetof(WinRtToNetFxStreamAdapter_t5DF3E266765C62B1F96383772091E1E54DD48397, ____canWrite_9)); }
	inline bool get__canWrite_9() const { return ____canWrite_9; }
	inline bool* get_address_of__canWrite_9() { return &____canWrite_9; }
	inline void set__canWrite_9(bool value)
	{
		____canWrite_9 = value;
	}

	inline static int32_t get_offset_of__canSeek_10() { return static_cast<int32_t>(offsetof(WinRtToNetFxStreamAdapter_t5DF3E266765C62B1F96383772091E1E54DD48397, ____canSeek_10)); }
	inline bool get__canSeek_10() const { return ____canSeek_10; }
	inline bool* get_address_of__canSeek_10() { return &____canSeek_10; }
	inline void set__canSeek_10(bool value)
	{
		____canSeek_10 = value;
	}
};


// System.InvalidOperationException
struct  InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.NotImplementedException
struct  NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
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


// System.NullReferenceException
struct  NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.OperationCanceledException
struct  OperationCanceledException_tD28B1AE59ACCE4D46333BFE398395B8D75D76A90  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.Threading.CancellationToken System.OperationCanceledException::_cancellationToken
	CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  ____cancellationToken_17;

public:
	inline static int32_t get_offset_of__cancellationToken_17() { return static_cast<int32_t>(offsetof(OperationCanceledException_tD28B1AE59ACCE4D46333BFE398395B8D75D76A90, ____cancellationToken_17)); }
	inline CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  get__cancellationToken_17() const { return ____cancellationToken_17; }
	inline CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB * get_address_of__cancellationToken_17() { return &____cancellationToken_17; }
	inline void set__cancellationToken_17(CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  value)
	{
		____cancellationToken_17 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____cancellationToken_17))->___m_source_0), (void*)NULL);
	}
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


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>
struct  AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tD6131FE3A3A2F1D58DB886B6CF31A2672B75B439 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE, ___m_task_2)); }
	inline Task_1_tD6131FE3A3A2F1D58DB886B6CF31A2672B75B439 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_tD6131FE3A3A2F1D58DB886B6CF31A2672B75B439 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_tD6131FE3A3A2F1D58DB886B6CF31A2672B75B439 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_tD6131FE3A3A2F1D58DB886B6CF31A2672B75B439 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_tD6131FE3A3A2F1D58DB886B6CF31A2672B75B439 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_tD6131FE3A3A2F1D58DB886B6CF31A2672B75B439 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_tD6131FE3A3A2F1D58DB886B6CF31A2672B75B439 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32>
struct  AsyncTaskMethodBuilder_1_t822D24686214CB8B967C66DA507CD66A5C853079 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t822D24686214CB8B967C66DA507CD66A5C853079, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t822D24686214CB8B967C66DA507CD66A5C853079, ___m_task_2)); }
	inline Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_t822D24686214CB8B967C66DA507CD66A5C853079_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t822D24686214CB8B967C66DA507CD66A5C853079_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>
struct  AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663, ___m_task_2)); }
	inline Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.UInt32>
struct  AsyncTaskMethodBuilder_1_tD386300660CF74FF8FB22C6C3C937BBA9F7E8DED 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tB8C8430765AEE1D5F24261F5BAD009C22AC7872F * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tD386300660CF74FF8FB22C6C3C937BBA9F7E8DED, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tD386300660CF74FF8FB22C6C3C937BBA9F7E8DED, ___m_task_2)); }
	inline Task_1_tB8C8430765AEE1D5F24261F5BAD009C22AC7872F * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_tB8C8430765AEE1D5F24261F5BAD009C22AC7872F ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_tB8C8430765AEE1D5F24261F5BAD009C22AC7872F * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_tD386300660CF74FF8FB22C6C3C937BBA9F7E8DED_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_tB8C8430765AEE1D5F24261F5BAD009C22AC7872F * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tD386300660CF74FF8FB22C6C3C937BBA9F7E8DED_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_tB8C8430765AEE1D5F24261F5BAD009C22AC7872F * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_tB8C8430765AEE1D5F24261F5BAD009C22AC7872F ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_tB8C8430765AEE1D5F24261F5BAD009C22AC7872F * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Windows.Storage.Streams.IBuffer>
struct  AsyncTaskMethodBuilder_1_tFC83304E06E318479094E86E267206CBFA9E1423 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t84A3E8ADA0C56D0776B0FCEBCEA98E253DB4385C * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tFC83304E06E318479094E86E267206CBFA9E1423, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tFC83304E06E318479094E86E267206CBFA9E1423, ___m_task_2)); }
	inline Task_1_t84A3E8ADA0C56D0776B0FCEBCEA98E253DB4385C * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t84A3E8ADA0C56D0776B0FCEBCEA98E253DB4385C ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t84A3E8ADA0C56D0776B0FCEBCEA98E253DB4385C * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_tFC83304E06E318479094E86E267206CBFA9E1423_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t84A3E8ADA0C56D0776B0FCEBCEA98E253DB4385C * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tFC83304E06E318479094E86E267206CBFA9E1423_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t84A3E8ADA0C56D0776B0FCEBCEA98E253DB4385C * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t84A3E8ADA0C56D0776B0FCEBCEA98E253DB4385C ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t84A3E8ADA0C56D0776B0FCEBCEA98E253DB4385C * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.ConfiguredTaskAwaitable
struct  ConfiguredTaskAwaitable_t24DE1415466EE20060BE5AD528DC5C812CFA53A9 
{
public:
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable_ConfiguredTaskAwaiter System.Runtime.CompilerServices.ConfiguredTaskAwaitable::m_configuredTaskAwaiter
	ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874  ___m_configuredTaskAwaiter_0;

public:
	inline static int32_t get_offset_of_m_configuredTaskAwaiter_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaitable_t24DE1415466EE20060BE5AD528DC5C812CFA53A9, ___m_configuredTaskAwaiter_0)); }
	inline ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874  get_m_configuredTaskAwaiter_0() const { return ___m_configuredTaskAwaiter_0; }
	inline ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874 * get_address_of_m_configuredTaskAwaiter_0() { return &___m_configuredTaskAwaiter_0; }
	inline void set_m_configuredTaskAwaiter_0(ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874  value)
	{
		___m_configuredTaskAwaiter_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_configuredTaskAwaiter_0))->___m_task_0), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable
struct ConfiguredTaskAwaitable_t24DE1415466EE20060BE5AD528DC5C812CFA53A9_marshaled_pinvoke
{
	ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874_marshaled_pinvoke ___m_configuredTaskAwaiter_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable
struct ConfiguredTaskAwaitable_t24DE1415466EE20060BE5AD528DC5C812CFA53A9_marshaled_com
{
	ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874_marshaled_com ___m_configuredTaskAwaiter_0;
};

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Int32>
struct  ConfiguredTaskAwaitable_1_t10E65A50D6EC08956E9F550CD64330F4DED0D38A 
{
public:
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::m_configuredTaskAwaiter
	ConfiguredTaskAwaiter_t18D0589F789FFE82A30A223888FB7C5BED32C63E  ___m_configuredTaskAwaiter_0;

public:
	inline static int32_t get_offset_of_m_configuredTaskAwaiter_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaitable_1_t10E65A50D6EC08956E9F550CD64330F4DED0D38A, ___m_configuredTaskAwaiter_0)); }
	inline ConfiguredTaskAwaiter_t18D0589F789FFE82A30A223888FB7C5BED32C63E  get_m_configuredTaskAwaiter_0() const { return ___m_configuredTaskAwaiter_0; }
	inline ConfiguredTaskAwaiter_t18D0589F789FFE82A30A223888FB7C5BED32C63E * get_address_of_m_configuredTaskAwaiter_0() { return &___m_configuredTaskAwaiter_0; }
	inline void set_m_configuredTaskAwaiter_0(ConfiguredTaskAwaiter_t18D0589F789FFE82A30A223888FB7C5BED32C63E  value)
	{
		___m_configuredTaskAwaiter_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_configuredTaskAwaiter_0))->___m_task_0), (void*)NULL);
	}
};


// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Object>
struct  ConfiguredTaskAwaitable_1_tA36F8230F9392F8C09FD6FDBAEA3F1A41388CCA8 
{
public:
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::m_configuredTaskAwaiter
	ConfiguredTaskAwaiter_tFB3C4197768C6CF02BE088F703AA6E46D703D46E  ___m_configuredTaskAwaiter_0;

public:
	inline static int32_t get_offset_of_m_configuredTaskAwaiter_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaitable_1_tA36F8230F9392F8C09FD6FDBAEA3F1A41388CCA8, ___m_configuredTaskAwaiter_0)); }
	inline ConfiguredTaskAwaiter_tFB3C4197768C6CF02BE088F703AA6E46D703D46E  get_m_configuredTaskAwaiter_0() const { return ___m_configuredTaskAwaiter_0; }
	inline ConfiguredTaskAwaiter_tFB3C4197768C6CF02BE088F703AA6E46D703D46E * get_address_of_m_configuredTaskAwaiter_0() { return &___m_configuredTaskAwaiter_0; }
	inline void set_m_configuredTaskAwaiter_0(ConfiguredTaskAwaiter_tFB3C4197768C6CF02BE088F703AA6E46D703D46E  value)
	{
		___m_configuredTaskAwaiter_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_configuredTaskAwaiter_0))->___m_task_0), (void*)NULL);
	}
};


// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<Windows.Storage.Streams.IBuffer>
struct  ConfiguredTaskAwaitable_1_t68A1326495296F7020FAFDD4974E2E0E1BBC9244 
{
public:
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::m_configuredTaskAwaiter
	ConfiguredTaskAwaiter_t24BCF0C8B4E4A7F263C9F2AFCC9528025F667E77  ___m_configuredTaskAwaiter_0;

public:
	inline static int32_t get_offset_of_m_configuredTaskAwaiter_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaitable_1_t68A1326495296F7020FAFDD4974E2E0E1BBC9244, ___m_configuredTaskAwaiter_0)); }
	inline ConfiguredTaskAwaiter_t24BCF0C8B4E4A7F263C9F2AFCC9528025F667E77  get_m_configuredTaskAwaiter_0() const { return ___m_configuredTaskAwaiter_0; }
	inline ConfiguredTaskAwaiter_t24BCF0C8B4E4A7F263C9F2AFCC9528025F667E77 * get_address_of_m_configuredTaskAwaiter_0() { return &___m_configuredTaskAwaiter_0; }
	inline void set_m_configuredTaskAwaiter_0(ConfiguredTaskAwaiter_t24BCF0C8B4E4A7F263C9F2AFCC9528025F667E77  value)
	{
		___m_configuredTaskAwaiter_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_configuredTaskAwaiter_0))->___m_task_0), (void*)NULL);
	}
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

// System.Runtime.InteropServices.IMarshal
struct NOVTABLE IMarshal_t9798E44C73E4A0170F6E91C6FCE5FD6CAC06001C : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMarshal_GetUnmarshalClass_m394D399AF3D58E5C260D663B63E34F4A37BF6F76(Guid_t * ___riid0, intptr_t ___pv1, uint32_t ___dwDestContext2, intptr_t ___pvDestContext3, uint32_t ___mshlFlags4, Guid_t * ___pCid5) = 0;
	virtual il2cpp_hresult_t STDCALL IMarshal_GetMarshalSizeMax_mBAF33A0B75ABDA690A09809CBC0758AC94C591A1(Guid_t * ___riid0, intptr_t ___pv1, uint32_t ___dwDestContext2, intptr_t ___pvDestContext3, uint32_t ___mshlflags4, uint32_t* ___pSize5) = 0;
	virtual il2cpp_hresult_t STDCALL IMarshal_MarshalInterface_m00480B6CD7532674DAA33AB7D4379125D03FC616(intptr_t ___pStm0, Guid_t * ___riid1, intptr_t ___pv2, uint32_t ___dwDestContext3, intptr_t ___pvDestContext4, uint32_t ___mshlflags5) = 0;
	virtual il2cpp_hresult_t STDCALL IMarshal_UnmarshalInterface_mDD2463F15F49EA8390415A654870C8A2482E2BEA(intptr_t ___pStm0, Guid_t * ___riid1, intptr_t* ___ppv2) = 0;
	virtual il2cpp_hresult_t STDCALL IMarshal_ReleaseMarshalData_m03292BAE558EA56FAA11F9CBF8136DDB3D31E298(intptr_t ___pStm0) = 0;
	virtual il2cpp_hresult_t STDCALL IMarshal_DisconnectObject_mE3689A76176F7E4FC4D556C9DF8D3F55DC8C9207(uint32_t ___dwReserved0) = 0;
};
// System.Runtime.InteropServices.WindowsRuntime.IBufferByteAccess
struct NOVTABLE IBufferByteAccess_tFCEF19FBAF4E19CB5BD75DC16CDE5061DC9758D7 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBufferByteAccess_GetBuffer_m0047AB72261718E613B316AE41337C99050B2058(intptr_t* comReturnValue) = 0;
};

// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer
struct  WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22  : public RuntimeObject
{
public:
	// System.Byte[] System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::_data
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____data_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::_dataStartOffs
	int32_t ____dataStartOffs_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::_usefulDataLength
	int32_t ____usefulDataLength_3;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::_maxDataCapacity
	int32_t ____maxDataCapacity_4;
	// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::_pinHandle
	GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  ____pinHandle_5;
	// System.IntPtr System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::_dataPtr
	intptr_t ____dataPtr_6;

public:
	inline static int32_t get_offset_of__data_1() { return static_cast<int32_t>(offsetof(WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22, ____data_1)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get__data_1() const { return ____data_1; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of__data_1() { return &____data_1; }
	inline void set__data_1(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		____data_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_1), (void*)value);
	}

	inline static int32_t get_offset_of__dataStartOffs_2() { return static_cast<int32_t>(offsetof(WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22, ____dataStartOffs_2)); }
	inline int32_t get__dataStartOffs_2() const { return ____dataStartOffs_2; }
	inline int32_t* get_address_of__dataStartOffs_2() { return &____dataStartOffs_2; }
	inline void set__dataStartOffs_2(int32_t value)
	{
		____dataStartOffs_2 = value;
	}

	inline static int32_t get_offset_of__usefulDataLength_3() { return static_cast<int32_t>(offsetof(WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22, ____usefulDataLength_3)); }
	inline int32_t get__usefulDataLength_3() const { return ____usefulDataLength_3; }
	inline int32_t* get_address_of__usefulDataLength_3() { return &____usefulDataLength_3; }
	inline void set__usefulDataLength_3(int32_t value)
	{
		____usefulDataLength_3 = value;
	}

	inline static int32_t get_offset_of__maxDataCapacity_4() { return static_cast<int32_t>(offsetof(WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22, ____maxDataCapacity_4)); }
	inline int32_t get__maxDataCapacity_4() const { return ____maxDataCapacity_4; }
	inline int32_t* get_address_of__maxDataCapacity_4() { return &____maxDataCapacity_4; }
	inline void set__maxDataCapacity_4(int32_t value)
	{
		____maxDataCapacity_4 = value;
	}

	inline static int32_t get_offset_of__pinHandle_5() { return static_cast<int32_t>(offsetof(WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22, ____pinHandle_5)); }
	inline GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  get__pinHandle_5() const { return ____pinHandle_5; }
	inline GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 * get_address_of__pinHandle_5() { return &____pinHandle_5; }
	inline void set__pinHandle_5(GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  value)
	{
		____pinHandle_5 = value;
	}

	inline static int32_t get_offset_of__dataPtr_6() { return static_cast<int32_t>(offsetof(WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22, ____dataPtr_6)); }
	inline intptr_t get__dataPtr_6() const { return ____dataPtr_6; }
	inline intptr_t* get_address_of__dataPtr_6() { return &____dataPtr_6; }
	inline void set__dataPtr_6(intptr_t value)
	{
		____dataPtr_6 = value;
	}
};

struct WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22_ThreadStaticFields
{
public:
	// System.Runtime.InteropServices.IMarshal System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::s_winRtMarshalProxy
	RuntimeObject* ___s_winRtMarshalProxy_0;

public:
	inline static int32_t get_offset_of_s_winRtMarshalProxy_0() { return static_cast<int32_t>(offsetof(WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22_ThreadStaticFields, ___s_winRtMarshalProxy_0)); }
	inline RuntimeObject* get_s_winRtMarshalProxy_0() const { return ___s_winRtMarshalProxy_0; }
	inline RuntimeObject** get_address_of_s_winRtMarshalProxy_0() { return &___s_winRtMarshalProxy_0; }
	inline void set_s_winRtMarshalProxy_0(RuntimeObject* value)
	{
		___s_winRtMarshalProxy_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_winRtMarshalProxy_0), (void*)value);
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


// System.Threading.CancellationTokenRegistration
struct  CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2 
{
public:
	// System.Threading.CancellationCallbackInfo System.Threading.CancellationTokenRegistration::m_callbackInfo
	CancellationCallbackInfo_t8CDEA0AA9C9D1A2321FE2F88878F4B5E0901CF36 * ___m_callbackInfo_0;
	// System.Threading.SparselyPopulatedArrayAddInfo`1<System.Threading.CancellationCallbackInfo> System.Threading.CancellationTokenRegistration::m_registrationInfo
	SparselyPopulatedArrayAddInfo_1_t0A76BDD84EBF76BEF894419FC221D25BB3D4FBEE  ___m_registrationInfo_1;

public:
	inline static int32_t get_offset_of_m_callbackInfo_0() { return static_cast<int32_t>(offsetof(CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2, ___m_callbackInfo_0)); }
	inline CancellationCallbackInfo_t8CDEA0AA9C9D1A2321FE2F88878F4B5E0901CF36 * get_m_callbackInfo_0() const { return ___m_callbackInfo_0; }
	inline CancellationCallbackInfo_t8CDEA0AA9C9D1A2321FE2F88878F4B5E0901CF36 ** get_address_of_m_callbackInfo_0() { return &___m_callbackInfo_0; }
	inline void set_m_callbackInfo_0(CancellationCallbackInfo_t8CDEA0AA9C9D1A2321FE2F88878F4B5E0901CF36 * value)
	{
		___m_callbackInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_callbackInfo_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_registrationInfo_1() { return static_cast<int32_t>(offsetof(CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2, ___m_registrationInfo_1)); }
	inline SparselyPopulatedArrayAddInfo_1_t0A76BDD84EBF76BEF894419FC221D25BB3D4FBEE  get_m_registrationInfo_1() const { return ___m_registrationInfo_1; }
	inline SparselyPopulatedArrayAddInfo_1_t0A76BDD84EBF76BEF894419FC221D25BB3D4FBEE * get_address_of_m_registrationInfo_1() { return &___m_registrationInfo_1; }
	inline void set_m_registrationInfo_1(SparselyPopulatedArrayAddInfo_1_t0A76BDD84EBF76BEF894419FC221D25BB3D4FBEE  value)
	{
		___m_registrationInfo_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_registrationInfo_1))->___m_source_0), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2_marshaled_pinvoke
{
	CancellationCallbackInfo_t8CDEA0AA9C9D1A2321FE2F88878F4B5E0901CF36 * ___m_callbackInfo_0;
	SparselyPopulatedArrayAddInfo_1_t0A76BDD84EBF76BEF894419FC221D25BB3D4FBEE  ___m_registrationInfo_1;
};
// Native definition for COM marshalling of System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2_marshaled_com
{
	CancellationCallbackInfo_t8CDEA0AA9C9D1A2321FE2F88878F4B5E0901CF36 * ___m_callbackInfo_0;
	SparselyPopulatedArrayAddInfo_1_t0A76BDD84EBF76BEF894419FC221D25BB3D4FBEE  ___m_registrationInfo_1;
};

// System.Threading.CancellationTokenSource
struct  CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE  : public RuntimeObject
{
public:
	// System.Threading.ManualResetEvent modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::m_kernelEvent
	ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 * ___m_kernelEvent_3;
	// System.Threading.SparselyPopulatedArray`1<System.Threading.CancellationCallbackInfo>[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::m_registeredCallbacksLists
	SparselyPopulatedArray_1U5BU5D_tF1A5F348104DB1ECF18799250B41740FCAA77813* ___m_registeredCallbacksLists_4;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::m_state
	int32_t ___m_state_9;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::m_threadIDExecutingCallbacks
	int32_t ___m_threadIDExecutingCallbacks_10;
	// System.Boolean System.Threading.CancellationTokenSource::m_disposed
	bool ___m_disposed_11;
	// System.Threading.CancellationTokenRegistration[] System.Threading.CancellationTokenSource::m_linkingRegistrations
	CancellationTokenRegistrationU5BU5D_t4B36771A6344CFC66696BB16419C664E286DAF1B* ___m_linkingRegistrations_12;
	// System.Threading.CancellationCallbackInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::m_executingCallback
	CancellationCallbackInfo_t8CDEA0AA9C9D1A2321FE2F88878F4B5E0901CF36 * ___m_executingCallback_14;
	// System.Threading.Timer modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::m_timer
	Timer_t67FAB8E41573B4FA09CA56AE30725AF4297C2553 * ___m_timer_15;

public:
	inline static int32_t get_offset_of_m_kernelEvent_3() { return static_cast<int32_t>(offsetof(CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE, ___m_kernelEvent_3)); }
	inline ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 * get_m_kernelEvent_3() const { return ___m_kernelEvent_3; }
	inline ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 ** get_address_of_m_kernelEvent_3() { return &___m_kernelEvent_3; }
	inline void set_m_kernelEvent_3(ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 * value)
	{
		___m_kernelEvent_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_kernelEvent_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_registeredCallbacksLists_4() { return static_cast<int32_t>(offsetof(CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE, ___m_registeredCallbacksLists_4)); }
	inline SparselyPopulatedArray_1U5BU5D_tF1A5F348104DB1ECF18799250B41740FCAA77813* get_m_registeredCallbacksLists_4() const { return ___m_registeredCallbacksLists_4; }
	inline SparselyPopulatedArray_1U5BU5D_tF1A5F348104DB1ECF18799250B41740FCAA77813** get_address_of_m_registeredCallbacksLists_4() { return &___m_registeredCallbacksLists_4; }
	inline void set_m_registeredCallbacksLists_4(SparselyPopulatedArray_1U5BU5D_tF1A5F348104DB1ECF18799250B41740FCAA77813* value)
	{
		___m_registeredCallbacksLists_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_registeredCallbacksLists_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_state_9() { return static_cast<int32_t>(offsetof(CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE, ___m_state_9)); }
	inline int32_t get_m_state_9() const { return ___m_state_9; }
	inline int32_t* get_address_of_m_state_9() { return &___m_state_9; }
	inline void set_m_state_9(int32_t value)
	{
		___m_state_9 = value;
	}

	inline static int32_t get_offset_of_m_threadIDExecutingCallbacks_10() { return static_cast<int32_t>(offsetof(CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE, ___m_threadIDExecutingCallbacks_10)); }
	inline int32_t get_m_threadIDExecutingCallbacks_10() const { return ___m_threadIDExecutingCallbacks_10; }
	inline int32_t* get_address_of_m_threadIDExecutingCallbacks_10() { return &___m_threadIDExecutingCallbacks_10; }
	inline void set_m_threadIDExecutingCallbacks_10(int32_t value)
	{
		___m_threadIDExecutingCallbacks_10 = value;
	}

	inline static int32_t get_offset_of_m_disposed_11() { return static_cast<int32_t>(offsetof(CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE, ___m_disposed_11)); }
	inline bool get_m_disposed_11() const { return ___m_disposed_11; }
	inline bool* get_address_of_m_disposed_11() { return &___m_disposed_11; }
	inline void set_m_disposed_11(bool value)
	{
		___m_disposed_11 = value;
	}

	inline static int32_t get_offset_of_m_linkingRegistrations_12() { return static_cast<int32_t>(offsetof(CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE, ___m_linkingRegistrations_12)); }
	inline CancellationTokenRegistrationU5BU5D_t4B36771A6344CFC66696BB16419C664E286DAF1B* get_m_linkingRegistrations_12() const { return ___m_linkingRegistrations_12; }
	inline CancellationTokenRegistrationU5BU5D_t4B36771A6344CFC66696BB16419C664E286DAF1B** get_address_of_m_linkingRegistrations_12() { return &___m_linkingRegistrations_12; }
	inline void set_m_linkingRegistrations_12(CancellationTokenRegistrationU5BU5D_t4B36771A6344CFC66696BB16419C664E286DAF1B* value)
	{
		___m_linkingRegistrations_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_linkingRegistrations_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_executingCallback_14() { return static_cast<int32_t>(offsetof(CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE, ___m_executingCallback_14)); }
	inline CancellationCallbackInfo_t8CDEA0AA9C9D1A2321FE2F88878F4B5E0901CF36 * get_m_executingCallback_14() const { return ___m_executingCallback_14; }
	inline CancellationCallbackInfo_t8CDEA0AA9C9D1A2321FE2F88878F4B5E0901CF36 ** get_address_of_m_executingCallback_14() { return &___m_executingCallback_14; }
	inline void set_m_executingCallback_14(CancellationCallbackInfo_t8CDEA0AA9C9D1A2321FE2F88878F4B5E0901CF36 * value)
	{
		___m_executingCallback_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_executingCallback_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_timer_15() { return static_cast<int32_t>(offsetof(CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE, ___m_timer_15)); }
	inline Timer_t67FAB8E41573B4FA09CA56AE30725AF4297C2553 * get_m_timer_15() const { return ___m_timer_15; }
	inline Timer_t67FAB8E41573B4FA09CA56AE30725AF4297C2553 ** get_address_of_m_timer_15() { return &___m_timer_15; }
	inline void set_m_timer_15(Timer_t67FAB8E41573B4FA09CA56AE30725AF4297C2553 * value)
	{
		___m_timer_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_timer_15), (void*)value);
	}
};

struct CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE_StaticFields
{
public:
	// System.Threading.CancellationTokenSource System.Threading.CancellationTokenSource::_staticSource_Set
	CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * ____staticSource_Set_0;
	// System.Threading.CancellationTokenSource System.Threading.CancellationTokenSource::_staticSource_NotCancelable
	CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * ____staticSource_NotCancelable_1;
	// System.Int32 System.Threading.CancellationTokenSource::s_nLists
	int32_t ___s_nLists_2;
	// System.Action`1<System.Object> System.Threading.CancellationTokenSource::s_LinkedTokenCancelDelegate
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ___s_LinkedTokenCancelDelegate_13;
	// System.Threading.TimerCallback System.Threading.CancellationTokenSource::s_timerCallback
	TimerCallback_tC89F2FB1294A86F64DEB2C1F68024954018AA219 * ___s_timerCallback_16;

public:
	inline static int32_t get_offset_of__staticSource_Set_0() { return static_cast<int32_t>(offsetof(CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE_StaticFields, ____staticSource_Set_0)); }
	inline CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * get__staticSource_Set_0() const { return ____staticSource_Set_0; }
	inline CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE ** get_address_of__staticSource_Set_0() { return &____staticSource_Set_0; }
	inline void set__staticSource_Set_0(CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * value)
	{
		____staticSource_Set_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____staticSource_Set_0), (void*)value);
	}

	inline static int32_t get_offset_of__staticSource_NotCancelable_1() { return static_cast<int32_t>(offsetof(CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE_StaticFields, ____staticSource_NotCancelable_1)); }
	inline CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * get__staticSource_NotCancelable_1() const { return ____staticSource_NotCancelable_1; }
	inline CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE ** get_address_of__staticSource_NotCancelable_1() { return &____staticSource_NotCancelable_1; }
	inline void set__staticSource_NotCancelable_1(CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * value)
	{
		____staticSource_NotCancelable_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____staticSource_NotCancelable_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_nLists_2() { return static_cast<int32_t>(offsetof(CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE_StaticFields, ___s_nLists_2)); }
	inline int32_t get_s_nLists_2() const { return ___s_nLists_2; }
	inline int32_t* get_address_of_s_nLists_2() { return &___s_nLists_2; }
	inline void set_s_nLists_2(int32_t value)
	{
		___s_nLists_2 = value;
	}

	inline static int32_t get_offset_of_s_LinkedTokenCancelDelegate_13() { return static_cast<int32_t>(offsetof(CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE_StaticFields, ___s_LinkedTokenCancelDelegate_13)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get_s_LinkedTokenCancelDelegate_13() const { return ___s_LinkedTokenCancelDelegate_13; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of_s_LinkedTokenCancelDelegate_13() { return &___s_LinkedTokenCancelDelegate_13; }
	inline void set_s_LinkedTokenCancelDelegate_13(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		___s_LinkedTokenCancelDelegate_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_LinkedTokenCancelDelegate_13), (void*)value);
	}

	inline static int32_t get_offset_of_s_timerCallback_16() { return static_cast<int32_t>(offsetof(CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE_StaticFields, ___s_timerCallback_16)); }
	inline TimerCallback_tC89F2FB1294A86F64DEB2C1F68024954018AA219 * get_s_timerCallback_16() const { return ___s_timerCallback_16; }
	inline TimerCallback_tC89F2FB1294A86F64DEB2C1F68024954018AA219 ** get_address_of_s_timerCallback_16() { return &___s_timerCallback_16; }
	inline void set_s_timerCallback_16(TimerCallback_tC89F2FB1294A86F64DEB2C1F68024954018AA219 * value)
	{
		___s_timerCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_timerCallback_16), (void*)value);
	}
};


// System.Threading.SynchronizationContextProperties
struct  SynchronizationContextProperties_t28DF1E05A79EFDBA201C9F5FEF61A6D546151AA9 
{
public:
	// System.Int32 System.Threading.SynchronizationContextProperties::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SynchronizationContextProperties_t28DF1E05A79EFDBA201C9F5FEF61A6D546151AA9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.Tasks.Task
struct  Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_28;
	// System.Threading.Tasks.Task_ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 * ___m_contingentProperties_33;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_action_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_taskScheduler_7)); }
	inline TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_taskScheduler_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_parent_8)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parent_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_28() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_continuationObject_28)); }
	inline RuntimeObject * get_m_continuationObject_28() const { return ___m_continuationObject_28; }
	inline RuntimeObject ** get_address_of_m_continuationObject_28() { return &___m_continuationObject_28; }
	inline void set_m_continuationObject_28(RuntimeObject * value)
	{
		___m_continuationObject_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_continuationObject_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_33() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_contingentProperties_33)); }
	inline ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 * get_m_contingentProperties_33() const { return ___m_contingentProperties_33; }
	inline ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 ** get_address_of_m_contingentProperties_33() { return &___m_contingentProperties_33; }
	inline void set_m_contingentProperties_33(ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 * value)
	{
		___m_contingentProperties_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_contingentProperties_33), (void*)value);
	}
};

struct Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155 * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_29;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_30;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F * ___s_currentActiveTasks_31;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_32;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ___s_taskCancelCallback_34;
	// System.Func`1<System.Threading.Tasks.Task_ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F * ___s_createContingentProperties_35;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___s_completedTask_36;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335 * ___s_IsExceptionObservedByParentPredicate_37;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676 * ___s_ecCallback_38;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * ___s_IsTaskContinuationNullPredicate_39;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_factory_3)); }
	inline TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155 * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155 ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155 * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_factory_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_29() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_taskCompletionSentinel_29)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_29() const { return ___s_taskCompletionSentinel_29; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_29() { return &___s_taskCompletionSentinel_29; }
	inline void set_s_taskCompletionSentinel_29(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCompletionSentinel_29), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_30() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_asyncDebuggingEnabled_30)); }
	inline bool get_s_asyncDebuggingEnabled_30() const { return ___s_asyncDebuggingEnabled_30; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_30() { return &___s_asyncDebuggingEnabled_30; }
	inline void set_s_asyncDebuggingEnabled_30(bool value)
	{
		___s_asyncDebuggingEnabled_30 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_31() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_currentActiveTasks_31)); }
	inline Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F * get_s_currentActiveTasks_31() const { return ___s_currentActiveTasks_31; }
	inline Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F ** get_address_of_s_currentActiveTasks_31() { return &___s_currentActiveTasks_31; }
	inline void set_s_currentActiveTasks_31(Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F * value)
	{
		___s_currentActiveTasks_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_currentActiveTasks_31), (void*)value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_32() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_activeTasksLock_32)); }
	inline RuntimeObject * get_s_activeTasksLock_32() const { return ___s_activeTasksLock_32; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_32() { return &___s_activeTasksLock_32; }
	inline void set_s_activeTasksLock_32(RuntimeObject * value)
	{
		___s_activeTasksLock_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTasksLock_32), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_34() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_taskCancelCallback_34)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get_s_taskCancelCallback_34() const { return ___s_taskCancelCallback_34; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of_s_taskCancelCallback_34() { return &___s_taskCancelCallback_34; }
	inline void set_s_taskCancelCallback_34(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		___s_taskCancelCallback_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCancelCallback_34), (void*)value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_35() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_createContingentProperties_35)); }
	inline Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F * get_s_createContingentProperties_35() const { return ___s_createContingentProperties_35; }
	inline Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F ** get_address_of_s_createContingentProperties_35() { return &___s_createContingentProperties_35; }
	inline void set_s_createContingentProperties_35(Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F * value)
	{
		___s_createContingentProperties_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_createContingentProperties_35), (void*)value);
	}

	inline static int32_t get_offset_of_s_completedTask_36() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_completedTask_36)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get_s_completedTask_36() const { return ___s_completedTask_36; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of_s_completedTask_36() { return &___s_completedTask_36; }
	inline void set_s_completedTask_36(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		___s_completedTask_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completedTask_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_37() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_IsExceptionObservedByParentPredicate_37)); }
	inline Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335 * get_s_IsExceptionObservedByParentPredicate_37() const { return ___s_IsExceptionObservedByParentPredicate_37; }
	inline Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335 ** get_address_of_s_IsExceptionObservedByParentPredicate_37() { return &___s_IsExceptionObservedByParentPredicate_37; }
	inline void set_s_IsExceptionObservedByParentPredicate_37(Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335 * value)
	{
		___s_IsExceptionObservedByParentPredicate_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsExceptionObservedByParentPredicate_37), (void*)value);
	}

	inline static int32_t get_offset_of_s_ecCallback_38() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_ecCallback_38)); }
	inline ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676 * get_s_ecCallback_38() const { return ___s_ecCallback_38; }
	inline ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676 ** get_address_of_s_ecCallback_38() { return &___s_ecCallback_38; }
	inline void set_s_ecCallback_38(ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676 * value)
	{
		___s_ecCallback_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ecCallback_38), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_39() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_IsTaskContinuationNullPredicate_39)); }
	inline Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * get_s_IsTaskContinuationNullPredicate_39() const { return ___s_IsTaskContinuationNullPredicate_39; }
	inline Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 ** get_address_of_s_IsTaskContinuationNullPredicate_39() { return &___s_IsTaskContinuationNullPredicate_39; }
	inline void set_s_IsTaskContinuationNullPredicate_39(Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * value)
	{
		___s_IsTaskContinuationNullPredicate_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsTaskContinuationNullPredicate_39), (void*)value);
	}
};

struct Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9 * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_currentTask_0), (void*)value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9 * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9 ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9 * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_stackGuard_1), (void*)value);
	}
};


// System.Threading.Tasks.TaskContinuationOptions
struct  TaskContinuationOptions_t749581ABDD24D74BD051F09EC4E3408C209121A2 
{
public:
	// System.Int32 System.Threading.Tasks.TaskContinuationOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TaskContinuationOptions_t749581ABDD24D74BD051F09EC4E3408C209121A2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.Tasks.TaskScheduler
struct  TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.TaskScheduler::m_taskSchedulerId
	int32_t ___m_taskSchedulerId_3;

public:
	inline static int32_t get_offset_of_m_taskSchedulerId_3() { return static_cast<int32_t>(offsetof(TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114, ___m_taskSchedulerId_3)); }
	inline int32_t get_m_taskSchedulerId_3() const { return ___m_taskSchedulerId_3; }
	inline int32_t* get_address_of_m_taskSchedulerId_3() { return &___m_taskSchedulerId_3; }
	inline void set_m_taskSchedulerId_3(int32_t value)
	{
		___m_taskSchedulerId_3 = value;
	}
};

struct TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114_StaticFields
{
public:
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Threading.Tasks.TaskScheduler,System.Object> System.Threading.Tasks.TaskScheduler::s_activeTaskSchedulers
	ConditionalWeakTable_2_t9E56EEB44502999EDAA6E212D522D7863829D95C * ___s_activeTaskSchedulers_0;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskScheduler::s_defaultTaskScheduler
	TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * ___s_defaultTaskScheduler_1;
	// System.Int32 System.Threading.Tasks.TaskScheduler::s_taskSchedulerIdCounter
	int32_t ___s_taskSchedulerIdCounter_2;
	// System.EventHandler`1<System.Threading.Tasks.UnobservedTaskExceptionEventArgs> System.Threading.Tasks.TaskScheduler::_unobservedTaskException
	EventHandler_1_tF704D003AB4792AFE4B10D9127FF82EEC18615BC * ____unobservedTaskException_4;
	// System.Object System.Threading.Tasks.TaskScheduler::_unobservedTaskExceptionLockObject
	RuntimeObject * ____unobservedTaskExceptionLockObject_5;

public:
	inline static int32_t get_offset_of_s_activeTaskSchedulers_0() { return static_cast<int32_t>(offsetof(TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114_StaticFields, ___s_activeTaskSchedulers_0)); }
	inline ConditionalWeakTable_2_t9E56EEB44502999EDAA6E212D522D7863829D95C * get_s_activeTaskSchedulers_0() const { return ___s_activeTaskSchedulers_0; }
	inline ConditionalWeakTable_2_t9E56EEB44502999EDAA6E212D522D7863829D95C ** get_address_of_s_activeTaskSchedulers_0() { return &___s_activeTaskSchedulers_0; }
	inline void set_s_activeTaskSchedulers_0(ConditionalWeakTable_2_t9E56EEB44502999EDAA6E212D522D7863829D95C * value)
	{
		___s_activeTaskSchedulers_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTaskSchedulers_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_defaultTaskScheduler_1() { return static_cast<int32_t>(offsetof(TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114_StaticFields, ___s_defaultTaskScheduler_1)); }
	inline TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * get_s_defaultTaskScheduler_1() const { return ___s_defaultTaskScheduler_1; }
	inline TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 ** get_address_of_s_defaultTaskScheduler_1() { return &___s_defaultTaskScheduler_1; }
	inline void set_s_defaultTaskScheduler_1(TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * value)
	{
		___s_defaultTaskScheduler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultTaskScheduler_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskSchedulerIdCounter_2() { return static_cast<int32_t>(offsetof(TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114_StaticFields, ___s_taskSchedulerIdCounter_2)); }
	inline int32_t get_s_taskSchedulerIdCounter_2() const { return ___s_taskSchedulerIdCounter_2; }
	inline int32_t* get_address_of_s_taskSchedulerIdCounter_2() { return &___s_taskSchedulerIdCounter_2; }
	inline void set_s_taskSchedulerIdCounter_2(int32_t value)
	{
		___s_taskSchedulerIdCounter_2 = value;
	}

	inline static int32_t get_offset_of__unobservedTaskException_4() { return static_cast<int32_t>(offsetof(TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114_StaticFields, ____unobservedTaskException_4)); }
	inline EventHandler_1_tF704D003AB4792AFE4B10D9127FF82EEC18615BC * get__unobservedTaskException_4() const { return ____unobservedTaskException_4; }
	inline EventHandler_1_tF704D003AB4792AFE4B10D9127FF82EEC18615BC ** get_address_of__unobservedTaskException_4() { return &____unobservedTaskException_4; }
	inline void set__unobservedTaskException_4(EventHandler_1_tF704D003AB4792AFE4B10D9127FF82EEC18615BC * value)
	{
		____unobservedTaskException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____unobservedTaskException_4), (void*)value);
	}

	inline static int32_t get_offset_of__unobservedTaskExceptionLockObject_5() { return static_cast<int32_t>(offsetof(TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114_StaticFields, ____unobservedTaskExceptionLockObject_5)); }
	inline RuntimeObject * get__unobservedTaskExceptionLockObject_5() const { return ____unobservedTaskExceptionLockObject_5; }
	inline RuntimeObject ** get_address_of__unobservedTaskExceptionLockObject_5() { return &____unobservedTaskExceptionLockObject_5; }
	inline void set__unobservedTaskExceptionLockObject_5(RuntimeObject * value)
	{
		____unobservedTaskExceptionLockObject_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____unobservedTaskExceptionLockObject_5), (void*)value);
	}
};


// System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncActionCompletedHandler,System.VoidReferenceTypeParameter,System.VoidValueTypeParameter,System.VoidValueTypeParameter>
struct  TaskToAsyncInfoAdapter_4_t6939D2A566A48D499669B8B0865212D2FB4A22BF  : public RuntimeObject
{
public:
	// System.Threading.CancellationTokenSource System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_cancelTokenSource
	CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * ____cancelTokenSource_0;
	// System.UInt32 System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_id
	uint32_t ____id_1;
	// System.Exception System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_error
	Exception_t * ____error_2;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_state
	int32_t ____state_3;
	// System.Object System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_dataContainer
	RuntimeObject * ____dataContainer_4;
	// TCompletedHandler System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_completedHandler
	AsyncActionCompletedHandler_t1820A7A20AA2CF935463CD8EB21800005EFE488D * ____completedHandler_5;
	// TProgressHandler System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_progressHandler
	VoidReferenceTypeParameter_t255142D4EFCF5C11FA3FC962097F7D9B2D3B4F6E * ____progressHandler_6;
	// System.Threading.SynchronizationContext System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_startingContext
	SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7 * ____startingContext_7;

public:
	inline static int32_t get_offset_of__cancelTokenSource_0() { return static_cast<int32_t>(offsetof(TaskToAsyncInfoAdapter_4_t6939D2A566A48D499669B8B0865212D2FB4A22BF, ____cancelTokenSource_0)); }
	inline CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * get__cancelTokenSource_0() const { return ____cancelTokenSource_0; }
	inline CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE ** get_address_of__cancelTokenSource_0() { return &____cancelTokenSource_0; }
	inline void set__cancelTokenSource_0(CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * value)
	{
		____cancelTokenSource_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____cancelTokenSource_0), (void*)value);
	}

	inline static int32_t get_offset_of__id_1() { return static_cast<int32_t>(offsetof(TaskToAsyncInfoAdapter_4_t6939D2A566A48D499669B8B0865212D2FB4A22BF, ____id_1)); }
	inline uint32_t get__id_1() const { return ____id_1; }
	inline uint32_t* get_address_of__id_1() { return &____id_1; }
	inline void set__id_1(uint32_t value)
	{
		____id_1 = value;
	}

	inline static int32_t get_offset_of__error_2() { return static_cast<int32_t>(offsetof(TaskToAsyncInfoAdapter_4_t6939D2A566A48D499669B8B0865212D2FB4A22BF, ____error_2)); }
	inline Exception_t * get__error_2() const { return ____error_2; }
	inline Exception_t ** get_address_of__error_2() { return &____error_2; }
	inline void set__error_2(Exception_t * value)
	{
		____error_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____error_2), (void*)value);
	}

	inline static int32_t get_offset_of__state_3() { return static_cast<int32_t>(offsetof(TaskToAsyncInfoAdapter_4_t6939D2A566A48D499669B8B0865212D2FB4A22BF, ____state_3)); }
	inline int32_t get__state_3() const { return ____state_3; }
	inline int32_t* get_address_of__state_3() { return &____state_3; }
	inline void set__state_3(int32_t value)
	{
		____state_3 = value;
	}

	inline static int32_t get_offset_of__dataContainer_4() { return static_cast<int32_t>(offsetof(TaskToAsyncInfoAdapter_4_t6939D2A566A48D499669B8B0865212D2FB4A22BF, ____dataContainer_4)); }
	inline RuntimeObject * get__dataContainer_4() const { return ____dataContainer_4; }
	inline RuntimeObject ** get_address_of__dataContainer_4() { return &____dataContainer_4; }
	inline void set__dataContainer_4(RuntimeObject * value)
	{
		____dataContainer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dataContainer_4), (void*)value);
	}

	inline static int32_t get_offset_of__completedHandler_5() { return static_cast<int32_t>(offsetof(TaskToAsyncInfoAdapter_4_t6939D2A566A48D499669B8B0865212D2FB4A22BF, ____completedHandler_5)); }
	inline AsyncActionCompletedHandler_t1820A7A20AA2CF935463CD8EB21800005EFE488D * get__completedHandler_5() const { return ____completedHandler_5; }
	inline AsyncActionCompletedHandler_t1820A7A20AA2CF935463CD8EB21800005EFE488D ** get_address_of__completedHandler_5() { return &____completedHandler_5; }
	inline void set__completedHandler_5(AsyncActionCompletedHandler_t1820A7A20AA2CF935463CD8EB21800005EFE488D * value)
	{
		____completedHandler_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____completedHandler_5), (void*)value);
	}

	inline static int32_t get_offset_of__progressHandler_6() { return static_cast<int32_t>(offsetof(TaskToAsyncInfoAdapter_4_t6939D2A566A48D499669B8B0865212D2FB4A22BF, ____progressHandler_6)); }
	inline VoidReferenceTypeParameter_t255142D4EFCF5C11FA3FC962097F7D9B2D3B4F6E * get__progressHandler_6() const { return ____progressHandler_6; }
	inline VoidReferenceTypeParameter_t255142D4EFCF5C11FA3FC962097F7D9B2D3B4F6E ** get_address_of__progressHandler_6() { return &____progressHandler_6; }
	inline void set__progressHandler_6(VoidReferenceTypeParameter_t255142D4EFCF5C11FA3FC962097F7D9B2D3B4F6E * value)
	{
		____progressHandler_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____progressHandler_6), (void*)value);
	}

	inline static int32_t get_offset_of__startingContext_7() { return static_cast<int32_t>(offsetof(TaskToAsyncInfoAdapter_4_t6939D2A566A48D499669B8B0865212D2FB4A22BF, ____startingContext_7)); }
	inline SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7 * get__startingContext_7() const { return ____startingContext_7; }
	inline SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7 ** get_address_of__startingContext_7() { return &____startingContext_7; }
	inline void set__startingContext_7(SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7 * value)
	{
		____startingContext_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____startingContext_7), (void*)value);
	}
};


// System.Threading.WaitHandle
struct  WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6  : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF
{
public:
	// System.IntPtr System.Threading.WaitHandle::waitHandle
	intptr_t ___waitHandle_3;
	// Microsoft.Win32.SafeHandles.SafeWaitHandle modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.WaitHandle::safeWaitHandle
	SafeWaitHandle_t51DB35FF382E636FF3B868D87816733894D46CF2 * ___safeWaitHandle_4;
	// System.Boolean System.Threading.WaitHandle::hasThreadAffinity
	bool ___hasThreadAffinity_5;

public:
	inline static int32_t get_offset_of_waitHandle_3() { return static_cast<int32_t>(offsetof(WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6, ___waitHandle_3)); }
	inline intptr_t get_waitHandle_3() const { return ___waitHandle_3; }
	inline intptr_t* get_address_of_waitHandle_3() { return &___waitHandle_3; }
	inline void set_waitHandle_3(intptr_t value)
	{
		___waitHandle_3 = value;
	}

	inline static int32_t get_offset_of_safeWaitHandle_4() { return static_cast<int32_t>(offsetof(WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6, ___safeWaitHandle_4)); }
	inline SafeWaitHandle_t51DB35FF382E636FF3B868D87816733894D46CF2 * get_safeWaitHandle_4() const { return ___safeWaitHandle_4; }
	inline SafeWaitHandle_t51DB35FF382E636FF3B868D87816733894D46CF2 ** get_address_of_safeWaitHandle_4() { return &___safeWaitHandle_4; }
	inline void set_safeWaitHandle_4(SafeWaitHandle_t51DB35FF382E636FF3B868D87816733894D46CF2 * value)
	{
		___safeWaitHandle_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___safeWaitHandle_4), (void*)value);
	}

	inline static int32_t get_offset_of_hasThreadAffinity_5() { return static_cast<int32_t>(offsetof(WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6, ___hasThreadAffinity_5)); }
	inline bool get_hasThreadAffinity_5() const { return ___hasThreadAffinity_5; }
	inline bool* get_address_of_hasThreadAffinity_5() { return &___hasThreadAffinity_5; }
	inline void set_hasThreadAffinity_5(bool value)
	{
		___hasThreadAffinity_5 = value;
	}
};

struct WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6_StaticFields
{
public:
	// System.IntPtr System.Threading.WaitHandle::InvalidHandle
	intptr_t ___InvalidHandle_10;

public:
	inline static int32_t get_offset_of_InvalidHandle_10() { return static_cast<int32_t>(offsetof(WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6_StaticFields, ___InvalidHandle_10)); }
	inline intptr_t get_InvalidHandle_10() const { return ___InvalidHandle_10; }
	inline intptr_t* get_address_of_InvalidHandle_10() { return &___InvalidHandle_10; }
	inline void set_InvalidHandle_10(intptr_t value)
	{
		___InvalidHandle_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Threading.WaitHandle
struct WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6_marshaled_pinvoke : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_pinvoke
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};
// Native definition for COM marshalling of System.Threading.WaitHandle
struct WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6_marshaled_com : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_com
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};

// System.TypeLoadException
struct  TypeLoadException_t510963B29CB27C6EA3ACDF5FB76E72E1BC372CD1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.TypeLoadException::ClassName
	String_t* ___ClassName_17;
	// System.String System.TypeLoadException::AssemblyName
	String_t* ___AssemblyName_18;
	// System.String System.TypeLoadException::MessageArg
	String_t* ___MessageArg_19;
	// System.Int32 System.TypeLoadException::ResourceId
	int32_t ___ResourceId_20;

public:
	inline static int32_t get_offset_of_ClassName_17() { return static_cast<int32_t>(offsetof(TypeLoadException_t510963B29CB27C6EA3ACDF5FB76E72E1BC372CD1, ___ClassName_17)); }
	inline String_t* get_ClassName_17() const { return ___ClassName_17; }
	inline String_t** get_address_of_ClassName_17() { return &___ClassName_17; }
	inline void set_ClassName_17(String_t* value)
	{
		___ClassName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ClassName_17), (void*)value);
	}

	inline static int32_t get_offset_of_AssemblyName_18() { return static_cast<int32_t>(offsetof(TypeLoadException_t510963B29CB27C6EA3ACDF5FB76E72E1BC372CD1, ___AssemblyName_18)); }
	inline String_t* get_AssemblyName_18() const { return ___AssemblyName_18; }
	inline String_t** get_address_of_AssemblyName_18() { return &___AssemblyName_18; }
	inline void set_AssemblyName_18(String_t* value)
	{
		___AssemblyName_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AssemblyName_18), (void*)value);
	}

	inline static int32_t get_offset_of_MessageArg_19() { return static_cast<int32_t>(offsetof(TypeLoadException_t510963B29CB27C6EA3ACDF5FB76E72E1BC372CD1, ___MessageArg_19)); }
	inline String_t* get_MessageArg_19() const { return ___MessageArg_19; }
	inline String_t** get_address_of_MessageArg_19() { return &___MessageArg_19; }
	inline void set_MessageArg_19(String_t* value)
	{
		___MessageArg_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MessageArg_19), (void*)value);
	}

	inline static int32_t get_offset_of_ResourceId_20() { return static_cast<int32_t>(offsetof(TypeLoadException_t510963B29CB27C6EA3ACDF5FB76E72E1BC372CD1, ___ResourceId_20)); }
	inline int32_t get_ResourceId_20() const { return ___ResourceId_20; }
	inline int32_t* get_address_of_ResourceId_20() { return &___ResourceId_20; }
	inline void set_ResourceId_20(int32_t value)
	{
		___ResourceId_20 = value;
	}
};


// System.UnauthorizedAccessException
struct  UnauthorizedAccessException_tC2210A745BFDD3AE3559A87A4219E2945EEC9F75  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// Windows.Foundation.AsyncStatus
struct  AsyncStatus_tBDA7F4CE333BAE130A8BB6DF88FBC68E6A54340E 
{
public:
	// System.Int32 Windows.Foundation.AsyncStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AsyncStatus_tBDA7F4CE333BAE130A8BB6DF88FBC68E6A54340E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Windows.Storage.Streams.InputStreamOptions
struct  InputStreamOptions_t84A663CC3616A0D05994D54C1DA6B2E877F7FF82 
{
public:
	// System.UInt32 Windows.Storage.Streams.InputStreamOptions::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputStreamOptions_t84A663CC3616A0D05994D54C1DA6B2E877F7FF82, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};


// System.ArgumentNullException
struct  ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD  : public ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1
{
public:

public:
};


// System.ArgumentOutOfRangeException
struct  ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA  : public ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1
{
public:
	// System.Object System.ArgumentOutOfRangeException::m_actualValue
	RuntimeObject * ___m_actualValue_19;

public:
	inline static int32_t get_offset_of_m_actualValue_19() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA, ___m_actualValue_19)); }
	inline RuntimeObject * get_m_actualValue_19() const { return ___m_actualValue_19; }
	inline RuntimeObject ** get_address_of_m_actualValue_19() { return &___m_actualValue_19; }
	inline void set_m_actualValue_19(RuntimeObject * value)
	{
		___m_actualValue_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_actualValue_19), (void*)value);
	}
};

struct ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_StaticFields
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.ArgumentOutOfRangeException::_rangeMessage
	String_t* ____rangeMessage_18;

public:
	inline static int32_t get_offset_of__rangeMessage_18() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_StaticFields, ____rangeMessage_18)); }
	inline String_t* get__rangeMessage_18() const { return ____rangeMessage_18; }
	inline String_t** get_address_of__rangeMessage_18() { return &____rangeMessage_18; }
	inline void set__rangeMessage_18(String_t* value)
	{
		____rangeMessage_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rangeMessage_18), (void*)value);
	}
};


// System.DllNotFoundException
struct  DllNotFoundException_tED90B6A78D4CF5AA565288E0BA88A990062A7F76  : public TypeLoadException_t510963B29CB27C6EA3ACDF5FB76E72E1BC372CD1
{
public:

public:
};


// System.Globalization.NumberFormatInfo
struct  NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8  : public RuntimeObject
{
public:
	// System.Int32[] System.Globalization.NumberFormatInfo::numberGroupSizes
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___numberGroupSizes_1;
	// System.Int32[] System.Globalization.NumberFormatInfo::currencyGroupSizes
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___currencyGroupSizes_2;
	// System.Int32[] System.Globalization.NumberFormatInfo::percentGroupSizes
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___percentGroupSizes_3;
	// System.String System.Globalization.NumberFormatInfo::positiveSign
	String_t* ___positiveSign_4;
	// System.String System.Globalization.NumberFormatInfo::negativeSign
	String_t* ___negativeSign_5;
	// System.String System.Globalization.NumberFormatInfo::numberDecimalSeparator
	String_t* ___numberDecimalSeparator_6;
	// System.String System.Globalization.NumberFormatInfo::numberGroupSeparator
	String_t* ___numberGroupSeparator_7;
	// System.String System.Globalization.NumberFormatInfo::currencyGroupSeparator
	String_t* ___currencyGroupSeparator_8;
	// System.String System.Globalization.NumberFormatInfo::currencyDecimalSeparator
	String_t* ___currencyDecimalSeparator_9;
	// System.String System.Globalization.NumberFormatInfo::currencySymbol
	String_t* ___currencySymbol_10;
	// System.String System.Globalization.NumberFormatInfo::ansiCurrencySymbol
	String_t* ___ansiCurrencySymbol_11;
	// System.String System.Globalization.NumberFormatInfo::nanSymbol
	String_t* ___nanSymbol_12;
	// System.String System.Globalization.NumberFormatInfo::positiveInfinitySymbol
	String_t* ___positiveInfinitySymbol_13;
	// System.String System.Globalization.NumberFormatInfo::negativeInfinitySymbol
	String_t* ___negativeInfinitySymbol_14;
	// System.String System.Globalization.NumberFormatInfo::percentDecimalSeparator
	String_t* ___percentDecimalSeparator_15;
	// System.String System.Globalization.NumberFormatInfo::percentGroupSeparator
	String_t* ___percentGroupSeparator_16;
	// System.String System.Globalization.NumberFormatInfo::percentSymbol
	String_t* ___percentSymbol_17;
	// System.String System.Globalization.NumberFormatInfo::perMilleSymbol
	String_t* ___perMilleSymbol_18;
	// System.String[] System.Globalization.NumberFormatInfo::nativeDigits
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___nativeDigits_19;
	// System.Int32 System.Globalization.NumberFormatInfo::m_dataItem
	int32_t ___m_dataItem_20;
	// System.Int32 System.Globalization.NumberFormatInfo::numberDecimalDigits
	int32_t ___numberDecimalDigits_21;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyDecimalDigits
	int32_t ___currencyDecimalDigits_22;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyPositivePattern
	int32_t ___currencyPositivePattern_23;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyNegativePattern
	int32_t ___currencyNegativePattern_24;
	// System.Int32 System.Globalization.NumberFormatInfo::numberNegativePattern
	int32_t ___numberNegativePattern_25;
	// System.Int32 System.Globalization.NumberFormatInfo::percentPositivePattern
	int32_t ___percentPositivePattern_26;
	// System.Int32 System.Globalization.NumberFormatInfo::percentNegativePattern
	int32_t ___percentNegativePattern_27;
	// System.Int32 System.Globalization.NumberFormatInfo::percentDecimalDigits
	int32_t ___percentDecimalDigits_28;
	// System.Int32 System.Globalization.NumberFormatInfo::digitSubstitution
	int32_t ___digitSubstitution_29;
	// System.Boolean System.Globalization.NumberFormatInfo::isReadOnly
	bool ___isReadOnly_30;
	// System.Boolean System.Globalization.NumberFormatInfo::m_useUserOverride
	bool ___m_useUserOverride_31;
	// System.Boolean System.Globalization.NumberFormatInfo::m_isInvariant
	bool ___m_isInvariant_32;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsNumber
	bool ___validForParseAsNumber_33;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsCurrency
	bool ___validForParseAsCurrency_34;

public:
	inline static int32_t get_offset_of_numberGroupSizes_1() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___numberGroupSizes_1)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_numberGroupSizes_1() const { return ___numberGroupSizes_1; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_numberGroupSizes_1() { return &___numberGroupSizes_1; }
	inline void set_numberGroupSizes_1(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___numberGroupSizes_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numberGroupSizes_1), (void*)value);
	}

	inline static int32_t get_offset_of_currencyGroupSizes_2() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___currencyGroupSizes_2)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_currencyGroupSizes_2() const { return ___currencyGroupSizes_2; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_currencyGroupSizes_2() { return &___currencyGroupSizes_2; }
	inline void set_currencyGroupSizes_2(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___currencyGroupSizes_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currencyGroupSizes_2), (void*)value);
	}

	inline static int32_t get_offset_of_percentGroupSizes_3() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___percentGroupSizes_3)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_percentGroupSizes_3() const { return ___percentGroupSizes_3; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_percentGroupSizes_3() { return &___percentGroupSizes_3; }
	inline void set_percentGroupSizes_3(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___percentGroupSizes_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___percentGroupSizes_3), (void*)value);
	}

	inline static int32_t get_offset_of_positiveSign_4() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___positiveSign_4)); }
	inline String_t* get_positiveSign_4() const { return ___positiveSign_4; }
	inline String_t** get_address_of_positiveSign_4() { return &___positiveSign_4; }
	inline void set_positiveSign_4(String_t* value)
	{
		___positiveSign_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___positiveSign_4), (void*)value);
	}

	inline static int32_t get_offset_of_negativeSign_5() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___negativeSign_5)); }
	inline String_t* get_negativeSign_5() const { return ___negativeSign_5; }
	inline String_t** get_address_of_negativeSign_5() { return &___negativeSign_5; }
	inline void set_negativeSign_5(String_t* value)
	{
		___negativeSign_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___negativeSign_5), (void*)value);
	}

	inline static int32_t get_offset_of_numberDecimalSeparator_6() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___numberDecimalSeparator_6)); }
	inline String_t* get_numberDecimalSeparator_6() const { return ___numberDecimalSeparator_6; }
	inline String_t** get_address_of_numberDecimalSeparator_6() { return &___numberDecimalSeparator_6; }
	inline void set_numberDecimalSeparator_6(String_t* value)
	{
		___numberDecimalSeparator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numberDecimalSeparator_6), (void*)value);
	}

	inline static int32_t get_offset_of_numberGroupSeparator_7() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___numberGroupSeparator_7)); }
	inline String_t* get_numberGroupSeparator_7() const { return ___numberGroupSeparator_7; }
	inline String_t** get_address_of_numberGroupSeparator_7() { return &___numberGroupSeparator_7; }
	inline void set_numberGroupSeparator_7(String_t* value)
	{
		___numberGroupSeparator_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numberGroupSeparator_7), (void*)value);
	}

	inline static int32_t get_offset_of_currencyGroupSeparator_8() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___currencyGroupSeparator_8)); }
	inline String_t* get_currencyGroupSeparator_8() const { return ___currencyGroupSeparator_8; }
	inline String_t** get_address_of_currencyGroupSeparator_8() { return &___currencyGroupSeparator_8; }
	inline void set_currencyGroupSeparator_8(String_t* value)
	{
		___currencyGroupSeparator_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currencyGroupSeparator_8), (void*)value);
	}

	inline static int32_t get_offset_of_currencyDecimalSeparator_9() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___currencyDecimalSeparator_9)); }
	inline String_t* get_currencyDecimalSeparator_9() const { return ___currencyDecimalSeparator_9; }
	inline String_t** get_address_of_currencyDecimalSeparator_9() { return &___currencyDecimalSeparator_9; }
	inline void set_currencyDecimalSeparator_9(String_t* value)
	{
		___currencyDecimalSeparator_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currencyDecimalSeparator_9), (void*)value);
	}

	inline static int32_t get_offset_of_currencySymbol_10() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___currencySymbol_10)); }
	inline String_t* get_currencySymbol_10() const { return ___currencySymbol_10; }
	inline String_t** get_address_of_currencySymbol_10() { return &___currencySymbol_10; }
	inline void set_currencySymbol_10(String_t* value)
	{
		___currencySymbol_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currencySymbol_10), (void*)value);
	}

	inline static int32_t get_offset_of_ansiCurrencySymbol_11() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___ansiCurrencySymbol_11)); }
	inline String_t* get_ansiCurrencySymbol_11() const { return ___ansiCurrencySymbol_11; }
	inline String_t** get_address_of_ansiCurrencySymbol_11() { return &___ansiCurrencySymbol_11; }
	inline void set_ansiCurrencySymbol_11(String_t* value)
	{
		___ansiCurrencySymbol_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ansiCurrencySymbol_11), (void*)value);
	}

	inline static int32_t get_offset_of_nanSymbol_12() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___nanSymbol_12)); }
	inline String_t* get_nanSymbol_12() const { return ___nanSymbol_12; }
	inline String_t** get_address_of_nanSymbol_12() { return &___nanSymbol_12; }
	inline void set_nanSymbol_12(String_t* value)
	{
		___nanSymbol_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nanSymbol_12), (void*)value);
	}

	inline static int32_t get_offset_of_positiveInfinitySymbol_13() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___positiveInfinitySymbol_13)); }
	inline String_t* get_positiveInfinitySymbol_13() const { return ___positiveInfinitySymbol_13; }
	inline String_t** get_address_of_positiveInfinitySymbol_13() { return &___positiveInfinitySymbol_13; }
	inline void set_positiveInfinitySymbol_13(String_t* value)
	{
		___positiveInfinitySymbol_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___positiveInfinitySymbol_13), (void*)value);
	}

	inline static int32_t get_offset_of_negativeInfinitySymbol_14() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___negativeInfinitySymbol_14)); }
	inline String_t* get_negativeInfinitySymbol_14() const { return ___negativeInfinitySymbol_14; }
	inline String_t** get_address_of_negativeInfinitySymbol_14() { return &___negativeInfinitySymbol_14; }
	inline void set_negativeInfinitySymbol_14(String_t* value)
	{
		___negativeInfinitySymbol_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___negativeInfinitySymbol_14), (void*)value);
	}

	inline static int32_t get_offset_of_percentDecimalSeparator_15() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___percentDecimalSeparator_15)); }
	inline String_t* get_percentDecimalSeparator_15() const { return ___percentDecimalSeparator_15; }
	inline String_t** get_address_of_percentDecimalSeparator_15() { return &___percentDecimalSeparator_15; }
	inline void set_percentDecimalSeparator_15(String_t* value)
	{
		___percentDecimalSeparator_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___percentDecimalSeparator_15), (void*)value);
	}

	inline static int32_t get_offset_of_percentGroupSeparator_16() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___percentGroupSeparator_16)); }
	inline String_t* get_percentGroupSeparator_16() const { return ___percentGroupSeparator_16; }
	inline String_t** get_address_of_percentGroupSeparator_16() { return &___percentGroupSeparator_16; }
	inline void set_percentGroupSeparator_16(String_t* value)
	{
		___percentGroupSeparator_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___percentGroupSeparator_16), (void*)value);
	}

	inline static int32_t get_offset_of_percentSymbol_17() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___percentSymbol_17)); }
	inline String_t* get_percentSymbol_17() const { return ___percentSymbol_17; }
	inline String_t** get_address_of_percentSymbol_17() { return &___percentSymbol_17; }
	inline void set_percentSymbol_17(String_t* value)
	{
		___percentSymbol_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___percentSymbol_17), (void*)value);
	}

	inline static int32_t get_offset_of_perMilleSymbol_18() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___perMilleSymbol_18)); }
	inline String_t* get_perMilleSymbol_18() const { return ___perMilleSymbol_18; }
	inline String_t** get_address_of_perMilleSymbol_18() { return &___perMilleSymbol_18; }
	inline void set_perMilleSymbol_18(String_t* value)
	{
		___perMilleSymbol_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___perMilleSymbol_18), (void*)value);
	}

	inline static int32_t get_offset_of_nativeDigits_19() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___nativeDigits_19)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_nativeDigits_19() const { return ___nativeDigits_19; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_nativeDigits_19() { return &___nativeDigits_19; }
	inline void set_nativeDigits_19(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___nativeDigits_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nativeDigits_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_dataItem_20() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___m_dataItem_20)); }
	inline int32_t get_m_dataItem_20() const { return ___m_dataItem_20; }
	inline int32_t* get_address_of_m_dataItem_20() { return &___m_dataItem_20; }
	inline void set_m_dataItem_20(int32_t value)
	{
		___m_dataItem_20 = value;
	}

	inline static int32_t get_offset_of_numberDecimalDigits_21() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___numberDecimalDigits_21)); }
	inline int32_t get_numberDecimalDigits_21() const { return ___numberDecimalDigits_21; }
	inline int32_t* get_address_of_numberDecimalDigits_21() { return &___numberDecimalDigits_21; }
	inline void set_numberDecimalDigits_21(int32_t value)
	{
		___numberDecimalDigits_21 = value;
	}

	inline static int32_t get_offset_of_currencyDecimalDigits_22() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___currencyDecimalDigits_22)); }
	inline int32_t get_currencyDecimalDigits_22() const { return ___currencyDecimalDigits_22; }
	inline int32_t* get_address_of_currencyDecimalDigits_22() { return &___currencyDecimalDigits_22; }
	inline void set_currencyDecimalDigits_22(int32_t value)
	{
		___currencyDecimalDigits_22 = value;
	}

	inline static int32_t get_offset_of_currencyPositivePattern_23() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___currencyPositivePattern_23)); }
	inline int32_t get_currencyPositivePattern_23() const { return ___currencyPositivePattern_23; }
	inline int32_t* get_address_of_currencyPositivePattern_23() { return &___currencyPositivePattern_23; }
	inline void set_currencyPositivePattern_23(int32_t value)
	{
		___currencyPositivePattern_23 = value;
	}

	inline static int32_t get_offset_of_currencyNegativePattern_24() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___currencyNegativePattern_24)); }
	inline int32_t get_currencyNegativePattern_24() const { return ___currencyNegativePattern_24; }
	inline int32_t* get_address_of_currencyNegativePattern_24() { return &___currencyNegativePattern_24; }
	inline void set_currencyNegativePattern_24(int32_t value)
	{
		___currencyNegativePattern_24 = value;
	}

	inline static int32_t get_offset_of_numberNegativePattern_25() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___numberNegativePattern_25)); }
	inline int32_t get_numberNegativePattern_25() const { return ___numberNegativePattern_25; }
	inline int32_t* get_address_of_numberNegativePattern_25() { return &___numberNegativePattern_25; }
	inline void set_numberNegativePattern_25(int32_t value)
	{
		___numberNegativePattern_25 = value;
	}

	inline static int32_t get_offset_of_percentPositivePattern_26() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___percentPositivePattern_26)); }
	inline int32_t get_percentPositivePattern_26() const { return ___percentPositivePattern_26; }
	inline int32_t* get_address_of_percentPositivePattern_26() { return &___percentPositivePattern_26; }
	inline void set_percentPositivePattern_26(int32_t value)
	{
		___percentPositivePattern_26 = value;
	}

	inline static int32_t get_offset_of_percentNegativePattern_27() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___percentNegativePattern_27)); }
	inline int32_t get_percentNegativePattern_27() const { return ___percentNegativePattern_27; }
	inline int32_t* get_address_of_percentNegativePattern_27() { return &___percentNegativePattern_27; }
	inline void set_percentNegativePattern_27(int32_t value)
	{
		___percentNegativePattern_27 = value;
	}

	inline static int32_t get_offset_of_percentDecimalDigits_28() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___percentDecimalDigits_28)); }
	inline int32_t get_percentDecimalDigits_28() const { return ___percentDecimalDigits_28; }
	inline int32_t* get_address_of_percentDecimalDigits_28() { return &___percentDecimalDigits_28; }
	inline void set_percentDecimalDigits_28(int32_t value)
	{
		___percentDecimalDigits_28 = value;
	}

	inline static int32_t get_offset_of_digitSubstitution_29() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___digitSubstitution_29)); }
	inline int32_t get_digitSubstitution_29() const { return ___digitSubstitution_29; }
	inline int32_t* get_address_of_digitSubstitution_29() { return &___digitSubstitution_29; }
	inline void set_digitSubstitution_29(int32_t value)
	{
		___digitSubstitution_29 = value;
	}

	inline static int32_t get_offset_of_isReadOnly_30() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___isReadOnly_30)); }
	inline bool get_isReadOnly_30() const { return ___isReadOnly_30; }
	inline bool* get_address_of_isReadOnly_30() { return &___isReadOnly_30; }
	inline void set_isReadOnly_30(bool value)
	{
		___isReadOnly_30 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_31() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___m_useUserOverride_31)); }
	inline bool get_m_useUserOverride_31() const { return ___m_useUserOverride_31; }
	inline bool* get_address_of_m_useUserOverride_31() { return &___m_useUserOverride_31; }
	inline void set_m_useUserOverride_31(bool value)
	{
		___m_useUserOverride_31 = value;
	}

	inline static int32_t get_offset_of_m_isInvariant_32() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___m_isInvariant_32)); }
	inline bool get_m_isInvariant_32() const { return ___m_isInvariant_32; }
	inline bool* get_address_of_m_isInvariant_32() { return &___m_isInvariant_32; }
	inline void set_m_isInvariant_32(bool value)
	{
		___m_isInvariant_32 = value;
	}

	inline static int32_t get_offset_of_validForParseAsNumber_33() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___validForParseAsNumber_33)); }
	inline bool get_validForParseAsNumber_33() const { return ___validForParseAsNumber_33; }
	inline bool* get_address_of_validForParseAsNumber_33() { return &___validForParseAsNumber_33; }
	inline void set_validForParseAsNumber_33(bool value)
	{
		___validForParseAsNumber_33 = value;
	}

	inline static int32_t get_offset_of_validForParseAsCurrency_34() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___validForParseAsCurrency_34)); }
	inline bool get_validForParseAsCurrency_34() const { return ___validForParseAsCurrency_34; }
	inline bool* get_address_of_validForParseAsCurrency_34() { return &___validForParseAsCurrency_34; }
	inline void set_validForParseAsCurrency_34(bool value)
	{
		___validForParseAsCurrency_34 = value;
	}
};

struct NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8_StaticFields
{
public:
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.NumberFormatInfo::invariantInfo
	NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * ___invariantInfo_0;

public:
	inline static int32_t get_offset_of_invariantInfo_0() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8_StaticFields, ___invariantInfo_0)); }
	inline NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * get_invariantInfo_0() const { return ___invariantInfo_0; }
	inline NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 ** get_address_of_invariantInfo_0() { return &___invariantInfo_0; }
	inline void set_invariantInfo_0(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * value)
	{
		___invariantInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invariantInfo_0), (void*)value);
	}
};


// System.IO.NetFxToWinRtStreamAdapter
struct  NetFxToWinRtStreamAdapter_tD3F51448566787B72221C59C2FC89BF1A3987485  : public RuntimeObject
{
public:
	// System.IO.Stream System.IO.NetFxToWinRtStreamAdapter::_managedStream
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ____managedStream_0;
	// System.Boolean System.IO.NetFxToWinRtStreamAdapter::_leaveUnderlyingStreamOpen
	bool ____leaveUnderlyingStreamOpen_1;
	// System.IO.NetFxToWinRtStreamAdapter_StreamReadOperationOptimization System.IO.NetFxToWinRtStreamAdapter::_readOptimization
	int32_t ____readOptimization_2;

public:
	inline static int32_t get_offset_of__managedStream_0() { return static_cast<int32_t>(offsetof(NetFxToWinRtStreamAdapter_tD3F51448566787B72221C59C2FC89BF1A3987485, ____managedStream_0)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get__managedStream_0() const { return ____managedStream_0; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of__managedStream_0() { return &____managedStream_0; }
	inline void set__managedStream_0(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		____managedStream_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____managedStream_0), (void*)value);
	}

	inline static int32_t get_offset_of__leaveUnderlyingStreamOpen_1() { return static_cast<int32_t>(offsetof(NetFxToWinRtStreamAdapter_tD3F51448566787B72221C59C2FC89BF1A3987485, ____leaveUnderlyingStreamOpen_1)); }
	inline bool get__leaveUnderlyingStreamOpen_1() const { return ____leaveUnderlyingStreamOpen_1; }
	inline bool* get_address_of__leaveUnderlyingStreamOpen_1() { return &____leaveUnderlyingStreamOpen_1; }
	inline void set__leaveUnderlyingStreamOpen_1(bool value)
	{
		____leaveUnderlyingStreamOpen_1 = value;
	}

	inline static int32_t get_offset_of__readOptimization_2() { return static_cast<int32_t>(offsetof(NetFxToWinRtStreamAdapter_tD3F51448566787B72221C59C2FC89BF1A3987485, ____readOptimization_2)); }
	inline int32_t get__readOptimization_2() const { return ____readOptimization_2; }
	inline int32_t* get_address_of__readOptimization_2() { return &____readOptimization_2; }
	inline void set__readOptimization_2(int32_t value)
	{
		____readOptimization_2 = value;
	}
};


// System.IO.StreamFlushAsyncResult
struct  StreamFlushAsyncResult_t52BD92B64AE7A59F49326A470FBCD61172206E6A  : public StreamOperationAsyncResult_t675AB408CDF1B11AC6F446E24352B441F6422E0F
{
public:

public:
};


// System.IO.StreamOperationsImplementation_<>c__DisplayClass1_0
struct  U3CU3Ec__DisplayClass1_0_t9B61E42C5DA9BB4B29626074CC9C84D1012DF563  : public RuntimeObject
{
public:
	// Windows.Storage.Streams.IBuffer System.IO.StreamOperationsImplementation_<>c__DisplayClass1_0::dataBuffer
	RuntimeObject* ___dataBuffer_0;
	// System.IO.Stream System.IO.StreamOperationsImplementation_<>c__DisplayClass1_0::stream
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___stream_1;
	// System.Int32 System.IO.StreamOperationsImplementation_<>c__DisplayClass1_0::bytesRequested
	int32_t ___bytesRequested_2;
	// Windows.Storage.Streams.InputStreamOptions System.IO.StreamOperationsImplementation_<>c__DisplayClass1_0::options
	uint32_t ___options_3;

public:
	inline static int32_t get_offset_of_dataBuffer_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass1_0_t9B61E42C5DA9BB4B29626074CC9C84D1012DF563, ___dataBuffer_0)); }
	inline RuntimeObject* get_dataBuffer_0() const { return ___dataBuffer_0; }
	inline RuntimeObject** get_address_of_dataBuffer_0() { return &___dataBuffer_0; }
	inline void set_dataBuffer_0(RuntimeObject* value)
	{
		___dataBuffer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataBuffer_0), (void*)value);
	}

	inline static int32_t get_offset_of_stream_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass1_0_t9B61E42C5DA9BB4B29626074CC9C84D1012DF563, ___stream_1)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get_stream_1() const { return ___stream_1; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of_stream_1() { return &___stream_1; }
	inline void set_stream_1(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		___stream_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stream_1), (void*)value);
	}

	inline static int32_t get_offset_of_bytesRequested_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass1_0_t9B61E42C5DA9BB4B29626074CC9C84D1012DF563, ___bytesRequested_2)); }
	inline int32_t get_bytesRequested_2() const { return ___bytesRequested_2; }
	inline int32_t* get_address_of_bytesRequested_2() { return &___bytesRequested_2; }
	inline void set_bytesRequested_2(int32_t value)
	{
		___bytesRequested_2 = value;
	}

	inline static int32_t get_offset_of_options_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass1_0_t9B61E42C5DA9BB4B29626074CC9C84D1012DF563, ___options_3)); }
	inline uint32_t get_options_3() const { return ___options_3; }
	inline uint32_t* get_address_of_options_3() { return &___options_3; }
	inline void set_options_3(uint32_t value)
	{
		___options_3 = value;
	}
};


// System.IO.StreamOperationsImplementation_<>c__DisplayClass1_0_<<ReadAsync_AbstractStream>b__0>d
struct  U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_tD986623175A57F547465B50AED2AC7B903115FD7 
{
public:
	// System.Int32 System.IO.StreamOperationsImplementation_<>c__DisplayClass1_0_<<ReadAsync_AbstractStream>b__0>d::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Windows.Storage.Streams.IBuffer> System.IO.StreamOperationsImplementation_<>c__DisplayClass1_0_<<ReadAsync_AbstractStream>b__0>d::<>t__builder
	AsyncTaskMethodBuilder_1_tFC83304E06E318479094E86E267206CBFA9E1423  ___U3CU3Et__builder_1;
	// System.IO.StreamOperationsImplementation_<>c__DisplayClass1_0 System.IO.StreamOperationsImplementation_<>c__DisplayClass1_0_<<ReadAsync_AbstractStream>b__0>d::<>4__this
	U3CU3Ec__DisplayClass1_0_t9B61E42C5DA9BB4B29626074CC9C84D1012DF563 * ___U3CU3E4__this_2;
	// System.Threading.CancellationToken System.IO.StreamOperationsImplementation_<>c__DisplayClass1_0_<<ReadAsync_AbstractStream>b__0>d::cancelToken
	CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  ___cancelToken_3;
	// System.IProgress`1<System.UInt32> System.IO.StreamOperationsImplementation_<>c__DisplayClass1_0_<<ReadAsync_AbstractStream>b__0>d::progressListener
	RuntimeObject* ___progressListener_4;
	// System.Byte[] System.IO.StreamOperationsImplementation_<>c__DisplayClass1_0_<<ReadAsync_AbstractStream>b__0>d::<data>5__2
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___U3CdataU3E5__2_5;
	// System.Int32 System.IO.StreamOperationsImplementation_<>c__DisplayClass1_0_<<ReadAsync_AbstractStream>b__0>d::<offset>5__3
	int32_t ___U3CoffsetU3E5__3_6;
	// System.Int32 System.IO.StreamOperationsImplementation_<>c__DisplayClass1_0_<<ReadAsync_AbstractStream>b__0>d::<bytesCompleted>5__4
	int32_t ___U3CbytesCompletedU3E5__4_7;
	// System.Int32 System.IO.StreamOperationsImplementation_<>c__DisplayClass1_0_<<ReadAsync_AbstractStream>b__0>d::<bytesRead>5__5
	int32_t ___U3CbytesReadU3E5__5_8;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter<System.Int32> System.IO.StreamOperationsImplementation_<>c__DisplayClass1_0_<<ReadAsync_AbstractStream>b__0>d::<>u__1
	ConfiguredTaskAwaiter_t18D0589F789FFE82A30A223888FB7C5BED32C63E  ___U3CU3Eu__1_9;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_tD986623175A57F547465B50AED2AC7B903115FD7, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_tD986623175A57F547465B50AED2AC7B903115FD7, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_tFC83304E06E318479094E86E267206CBFA9E1423  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_tFC83304E06E318479094E86E267206CBFA9E1423 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_tFC83304E06E318479094E86E267206CBFA9E1423  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_tD986623175A57F547465B50AED2AC7B903115FD7, ___U3CU3E4__this_2)); }
	inline U3CU3Ec__DisplayClass1_0_t9B61E42C5DA9BB4B29626074CC9C84D1012DF563 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline U3CU3Ec__DisplayClass1_0_t9B61E42C5DA9BB4B29626074CC9C84D1012DF563 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(U3CU3Ec__DisplayClass1_0_t9B61E42C5DA9BB4B29626074CC9C84D1012DF563 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_cancelToken_3() { return static_cast<int32_t>(offsetof(U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_tD986623175A57F547465B50AED2AC7B903115FD7, ___cancelToken_3)); }
	inline CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  get_cancelToken_3() const { return ___cancelToken_3; }
	inline CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB * get_address_of_cancelToken_3() { return &___cancelToken_3; }
	inline void set_cancelToken_3(CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  value)
	{
		___cancelToken_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___cancelToken_3))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_progressListener_4() { return static_cast<int32_t>(offsetof(U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_tD986623175A57F547465B50AED2AC7B903115FD7, ___progressListener_4)); }
	inline RuntimeObject* get_progressListener_4() const { return ___progressListener_4; }
	inline RuntimeObject** get_address_of_progressListener_4() { return &___progressListener_4; }
	inline void set_progressListener_4(RuntimeObject* value)
	{
		___progressListener_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___progressListener_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdataU3E5__2_5() { return static_cast<int32_t>(offsetof(U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_tD986623175A57F547465B50AED2AC7B903115FD7, ___U3CdataU3E5__2_5)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_U3CdataU3E5__2_5() const { return ___U3CdataU3E5__2_5; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_U3CdataU3E5__2_5() { return &___U3CdataU3E5__2_5; }
	inline void set_U3CdataU3E5__2_5(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___U3CdataU3E5__2_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdataU3E5__2_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CoffsetU3E5__3_6() { return static_cast<int32_t>(offsetof(U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_tD986623175A57F547465B50AED2AC7B903115FD7, ___U3CoffsetU3E5__3_6)); }
	inline int32_t get_U3CoffsetU3E5__3_6() const { return ___U3CoffsetU3E5__3_6; }
	inline int32_t* get_address_of_U3CoffsetU3E5__3_6() { return &___U3CoffsetU3E5__3_6; }
	inline void set_U3CoffsetU3E5__3_6(int32_t value)
	{
		___U3CoffsetU3E5__3_6 = value;
	}

	inline static int32_t get_offset_of_U3CbytesCompletedU3E5__4_7() { return static_cast<int32_t>(offsetof(U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_tD986623175A57F547465B50AED2AC7B903115FD7, ___U3CbytesCompletedU3E5__4_7)); }
	inline int32_t get_U3CbytesCompletedU3E5__4_7() const { return ___U3CbytesCompletedU3E5__4_7; }
	inline int32_t* get_address_of_U3CbytesCompletedU3E5__4_7() { return &___U3CbytesCompletedU3E5__4_7; }
	inline void set_U3CbytesCompletedU3E5__4_7(int32_t value)
	{
		___U3CbytesCompletedU3E5__4_7 = value;
	}

	inline static int32_t get_offset_of_U3CbytesReadU3E5__5_8() { return static_cast<int32_t>(offsetof(U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_tD986623175A57F547465B50AED2AC7B903115FD7, ___U3CbytesReadU3E5__5_8)); }
	inline int32_t get_U3CbytesReadU3E5__5_8() const { return ___U3CbytesReadU3E5__5_8; }
	inline int32_t* get_address_of_U3CbytesReadU3E5__5_8() { return &___U3CbytesReadU3E5__5_8; }
	inline void set_U3CbytesReadU3E5__5_8(int32_t value)
	{
		___U3CbytesReadU3E5__5_8 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_9() { return static_cast<int32_t>(offsetof(U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_tD986623175A57F547465B50AED2AC7B903115FD7, ___U3CU3Eu__1_9)); }
	inline ConfiguredTaskAwaiter_t18D0589F789FFE82A30A223888FB7C5BED32C63E  get_U3CU3Eu__1_9() const { return ___U3CU3Eu__1_9; }
	inline ConfiguredTaskAwaiter_t18D0589F789FFE82A30A223888FB7C5BED32C63E * get_address_of_U3CU3Eu__1_9() { return &___U3CU3Eu__1_9; }
	inline void set_U3CU3Eu__1_9(ConfiguredTaskAwaiter_t18D0589F789FFE82A30A223888FB7C5BED32C63E  value)
	{
		___U3CU3Eu__1_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_9))->___m_task_0), (void*)NULL);
	}
};


// System.IO.StreamOperationsImplementation_<>c__DisplayClass2_0_<<WriteAsync_AbstractStream>b__0>d
struct  U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_tC5B27594871B0D4D6540AEF8F8175C68ECB1F243 
{
public:
	// System.Int32 System.IO.StreamOperationsImplementation_<>c__DisplayClass2_0_<<WriteAsync_AbstractStream>b__0>d::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.UInt32> System.IO.StreamOperationsImplementation_<>c__DisplayClass2_0_<<WriteAsync_AbstractStream>b__0>d::<>t__builder
	AsyncTaskMethodBuilder_1_tD386300660CF74FF8FB22C6C3C937BBA9F7E8DED  ___U3CU3Et__builder_1;
	// System.Threading.CancellationToken System.IO.StreamOperationsImplementation_<>c__DisplayClass2_0_<<WriteAsync_AbstractStream>b__0>d::cancelToken
	CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  ___cancelToken_2;
	// System.IO.StreamOperationsImplementation_<>c__DisplayClass2_0 System.IO.StreamOperationsImplementation_<>c__DisplayClass2_0_<<WriteAsync_AbstractStream>b__0>d::<>4__this
	U3CU3Ec__DisplayClass2_0_tF7A26B09867A566BC9F7FE9AF41DD97CF7DD9C14 * ___U3CU3E4__this_3;
	// System.IProgress`1<System.UInt32> System.IO.StreamOperationsImplementation_<>c__DisplayClass2_0_<<WriteAsync_AbstractStream>b__0>d::progressListener
	RuntimeObject* ___progressListener_4;
	// System.Int32 System.IO.StreamOperationsImplementation_<>c__DisplayClass2_0_<<WriteAsync_AbstractStream>b__0>d::<bytesToWrite>5__2
	int32_t ___U3CbytesToWriteU3E5__2_5;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable_ConfiguredTaskAwaiter System.IO.StreamOperationsImplementation_<>c__DisplayClass2_0_<<WriteAsync_AbstractStream>b__0>d::<>u__1
	ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874  ___U3CU3Eu__1_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_tC5B27594871B0D4D6540AEF8F8175C68ECB1F243, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_tC5B27594871B0D4D6540AEF8F8175C68ECB1F243, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_tD386300660CF74FF8FB22C6C3C937BBA9F7E8DED  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_tD386300660CF74FF8FB22C6C3C937BBA9F7E8DED * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_tD386300660CF74FF8FB22C6C3C937BBA9F7E8DED  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_cancelToken_2() { return static_cast<int32_t>(offsetof(U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_tC5B27594871B0D4D6540AEF8F8175C68ECB1F243, ___cancelToken_2)); }
	inline CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  get_cancelToken_2() const { return ___cancelToken_2; }
	inline CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB * get_address_of_cancelToken_2() { return &___cancelToken_2; }
	inline void set_cancelToken_2(CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  value)
	{
		___cancelToken_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___cancelToken_2))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_tC5B27594871B0D4D6540AEF8F8175C68ECB1F243, ___U3CU3E4__this_3)); }
	inline U3CU3Ec__DisplayClass2_0_tF7A26B09867A566BC9F7FE9AF41DD97CF7DD9C14 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline U3CU3Ec__DisplayClass2_0_tF7A26B09867A566BC9F7FE9AF41DD97CF7DD9C14 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(U3CU3Ec__DisplayClass2_0_tF7A26B09867A566BC9F7FE9AF41DD97CF7DD9C14 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_progressListener_4() { return static_cast<int32_t>(offsetof(U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_tC5B27594871B0D4D6540AEF8F8175C68ECB1F243, ___progressListener_4)); }
	inline RuntimeObject* get_progressListener_4() const { return ___progressListener_4; }
	inline RuntimeObject** get_address_of_progressListener_4() { return &___progressListener_4; }
	inline void set_progressListener_4(RuntimeObject* value)
	{
		___progressListener_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___progressListener_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CbytesToWriteU3E5__2_5() { return static_cast<int32_t>(offsetof(U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_tC5B27594871B0D4D6540AEF8F8175C68ECB1F243, ___U3CbytesToWriteU3E5__2_5)); }
	inline int32_t get_U3CbytesToWriteU3E5__2_5() const { return ___U3CbytesToWriteU3E5__2_5; }
	inline int32_t* get_address_of_U3CbytesToWriteU3E5__2_5() { return &___U3CbytesToWriteU3E5__2_5; }
	inline void set_U3CbytesToWriteU3E5__2_5(int32_t value)
	{
		___U3CbytesToWriteU3E5__2_5 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_6() { return static_cast<int32_t>(offsetof(U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_tC5B27594871B0D4D6540AEF8F8175C68ECB1F243, ___U3CU3Eu__1_6)); }
	inline ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874  get_U3CU3Eu__1_6() const { return ___U3CU3Eu__1_6; }
	inline ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874 * get_address_of_U3CU3Eu__1_6() { return &___U3CU3Eu__1_6; }
	inline void set_U3CU3Eu__1_6(ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874  value)
	{
		___U3CU3Eu__1_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_6))->___m_task_0), (void*)NULL);
	}
};


// System.IO.StreamOperationsImplementation_<>c__DisplayClass2_0_<<WriteAsync_AbstractStream>b__1>d
struct  U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_tE07FA298A0F1283378FE03DCD280D757C505C510 
{
public:
	// System.Int32 System.IO.StreamOperationsImplementation_<>c__DisplayClass2_0_<<WriteAsync_AbstractStream>b__1>d::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.UInt32> System.IO.StreamOperationsImplementation_<>c__DisplayClass2_0_<<WriteAsync_AbstractStream>b__1>d::<>t__builder
	AsyncTaskMethodBuilder_1_tD386300660CF74FF8FB22C6C3C937BBA9F7E8DED  ___U3CU3Et__builder_1;
	// System.Threading.CancellationToken System.IO.StreamOperationsImplementation_<>c__DisplayClass2_0_<<WriteAsync_AbstractStream>b__1>d::cancelToken
	CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  ___cancelToken_2;
	// System.IO.StreamOperationsImplementation_<>c__DisplayClass2_0 System.IO.StreamOperationsImplementation_<>c__DisplayClass2_0_<<WriteAsync_AbstractStream>b__1>d::<>4__this
	U3CU3Ec__DisplayClass2_0_tF7A26B09867A566BC9F7FE9AF41DD97CF7DD9C14 * ___U3CU3E4__this_3;
	// System.IProgress`1<System.UInt32> System.IO.StreamOperationsImplementation_<>c__DisplayClass2_0_<<WriteAsync_AbstractStream>b__1>d::progressListener
	RuntimeObject* ___progressListener_4;
	// System.UInt32 System.IO.StreamOperationsImplementation_<>c__DisplayClass2_0_<<WriteAsync_AbstractStream>b__1>d::<bytesToWrite>5__2
	uint32_t ___U3CbytesToWriteU3E5__2_5;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable_ConfiguredTaskAwaiter System.IO.StreamOperationsImplementation_<>c__DisplayClass2_0_<<WriteAsync_AbstractStream>b__1>d::<>u__1
	ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874  ___U3CU3Eu__1_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_tE07FA298A0F1283378FE03DCD280D757C505C510, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_tE07FA298A0F1283378FE03DCD280D757C505C510, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_tD386300660CF74FF8FB22C6C3C937BBA9F7E8DED  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_tD386300660CF74FF8FB22C6C3C937BBA9F7E8DED * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_tD386300660CF74FF8FB22C6C3C937BBA9F7E8DED  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_cancelToken_2() { return static_cast<int32_t>(offsetof(U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_tE07FA298A0F1283378FE03DCD280D757C505C510, ___cancelToken_2)); }
	inline CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  get_cancelToken_2() const { return ___cancelToken_2; }
	inline CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB * get_address_of_cancelToken_2() { return &___cancelToken_2; }
	inline void set_cancelToken_2(CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  value)
	{
		___cancelToken_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___cancelToken_2))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_tE07FA298A0F1283378FE03DCD280D757C505C510, ___U3CU3E4__this_3)); }
	inline U3CU3Ec__DisplayClass2_0_tF7A26B09867A566BC9F7FE9AF41DD97CF7DD9C14 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline U3CU3Ec__DisplayClass2_0_tF7A26B09867A566BC9F7FE9AF41DD97CF7DD9C14 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(U3CU3Ec__DisplayClass2_0_tF7A26B09867A566BC9F7FE9AF41DD97CF7DD9C14 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_progressListener_4() { return static_cast<int32_t>(offsetof(U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_tE07FA298A0F1283378FE03DCD280D757C505C510, ___progressListener_4)); }
	inline RuntimeObject* get_progressListener_4() const { return ___progressListener_4; }
	inline RuntimeObject** get_address_of_progressListener_4() { return &___progressListener_4; }
	inline void set_progressListener_4(RuntimeObject* value)
	{
		___progressListener_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___progressListener_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CbytesToWriteU3E5__2_5() { return static_cast<int32_t>(offsetof(U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_tE07FA298A0F1283378FE03DCD280D757C505C510, ___U3CbytesToWriteU3E5__2_5)); }
	inline uint32_t get_U3CbytesToWriteU3E5__2_5() const { return ___U3CbytesToWriteU3E5__2_5; }
	inline uint32_t* get_address_of_U3CbytesToWriteU3E5__2_5() { return &___U3CbytesToWriteU3E5__2_5; }
	inline void set_U3CbytesToWriteU3E5__2_5(uint32_t value)
	{
		___U3CbytesToWriteU3E5__2_5 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_6() { return static_cast<int32_t>(offsetof(U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_tE07FA298A0F1283378FE03DCD280D757C505C510, ___U3CU3Eu__1_6)); }
	inline ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874  get_U3CU3Eu__1_6() const { return ___U3CU3Eu__1_6; }
	inline ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874 * get_address_of_U3CU3Eu__1_6() { return &___U3CU3Eu__1_6; }
	inline void set_U3CU3Eu__1_6(ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874  value)
	{
		___U3CU3Eu__1_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_6))->___m_task_0), (void*)NULL);
	}
};


// System.IO.StreamOperationsImplementation_<>c__DisplayClass3_0_<<FlushAsync_AbstractStream>b__0>d
struct  U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t33297D8BAD10F1F6FA496D0DC2B75DFCFFF6936D 
{
public:
	// System.Int32 System.IO.StreamOperationsImplementation_<>c__DisplayClass3_0_<<FlushAsync_AbstractStream>b__0>d::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean> System.IO.StreamOperationsImplementation_<>c__DisplayClass3_0_<<FlushAsync_AbstractStream>b__0>d::<>t__builder
	AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE  ___U3CU3Et__builder_1;
	// System.Threading.CancellationToken System.IO.StreamOperationsImplementation_<>c__DisplayClass3_0_<<FlushAsync_AbstractStream>b__0>d::cancelToken
	CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  ___cancelToken_2;
	// System.IO.StreamOperationsImplementation_<>c__DisplayClass3_0 System.IO.StreamOperationsImplementation_<>c__DisplayClass3_0_<<FlushAsync_AbstractStream>b__0>d::<>4__this
	U3CU3Ec__DisplayClass3_0_t38CB4DCBE909850E7FF45FA79C292F5EFC11B339 * ___U3CU3E4__this_3;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable_ConfiguredTaskAwaiter System.IO.StreamOperationsImplementation_<>c__DisplayClass3_0_<<FlushAsync_AbstractStream>b__0>d::<>u__1
	ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874  ___U3CU3Eu__1_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t33297D8BAD10F1F6FA496D0DC2B75DFCFFF6936D, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t33297D8BAD10F1F6FA496D0DC2B75DFCFFF6936D, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_cancelToken_2() { return static_cast<int32_t>(offsetof(U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t33297D8BAD10F1F6FA496D0DC2B75DFCFFF6936D, ___cancelToken_2)); }
	inline CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  get_cancelToken_2() const { return ___cancelToken_2; }
	inline CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB * get_address_of_cancelToken_2() { return &___cancelToken_2; }
	inline void set_cancelToken_2(CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  value)
	{
		___cancelToken_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___cancelToken_2))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t33297D8BAD10F1F6FA496D0DC2B75DFCFFF6936D, ___U3CU3E4__this_3)); }
	inline U3CU3Ec__DisplayClass3_0_t38CB4DCBE909850E7FF45FA79C292F5EFC11B339 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline U3CU3Ec__DisplayClass3_0_t38CB4DCBE909850E7FF45FA79C292F5EFC11B339 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(U3CU3Ec__DisplayClass3_0_t38CB4DCBE909850E7FF45FA79C292F5EFC11B339 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_4() { return static_cast<int32_t>(offsetof(U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t33297D8BAD10F1F6FA496D0DC2B75DFCFFF6936D, ___U3CU3Eu__1_4)); }
	inline ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874  get_U3CU3Eu__1_4() const { return ___U3CU3Eu__1_4; }
	inline ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874 * get_address_of_U3CU3Eu__1_4() { return &___U3CU3Eu__1_4; }
	inline void set_U3CU3Eu__1_4(ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874  value)
	{
		___U3CU3Eu__1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
	}
};


// System.IO.StreamReadAsyncResult
struct  StreamReadAsyncResult_t897354343EA051942262510D5B3DE4B408B3E048  : public StreamOperationAsyncResult_t675AB408CDF1B11AC6F446E24352B441F6422E0F
{
public:
	// Windows.Storage.Streams.IBuffer System.IO.StreamReadAsyncResult::_userBuffer
	RuntimeObject* ____userBuffer_10;

public:
	inline static int32_t get_offset_of__userBuffer_10() { return static_cast<int32_t>(offsetof(StreamReadAsyncResult_t897354343EA051942262510D5B3DE4B408B3E048, ____userBuffer_10)); }
	inline RuntimeObject* get__userBuffer_10() const { return ____userBuffer_10; }
	inline RuntimeObject** get_address_of__userBuffer_10() { return &____userBuffer_10; }
	inline void set__userBuffer_10(RuntimeObject* value)
	{
		____userBuffer_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____userBuffer_10), (void*)value);
	}
};


// System.IO.StreamWriteAsyncResult
struct  StreamWriteAsyncResult_t4A2F6C2119D655E60142F74DD7687412F81F9A2B  : public StreamOperationAsyncResult_t675AB408CDF1B11AC6F446E24352B441F6422E0F
{
public:

public:
};


// System.IO.UnmanagedMemoryStream
struct  UnmanagedMemoryStream_tB2905D85030C9C1E831E3EB02AD7E5B1B1A5FE4E  : public Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7
{
public:
	// System.Runtime.InteropServices.SafeBuffer System.IO.UnmanagedMemoryStream::_buffer
	SafeBuffer_t9C39972A6152D9B18D97894AF4EB871581B64208 * ____buffer_5;
	// System.Byte* System.IO.UnmanagedMemoryStream::_mem
	uint8_t* ____mem_6;
	// System.Int64 System.IO.UnmanagedMemoryStream::_length
	int64_t ____length_7;
	// System.Int64 System.IO.UnmanagedMemoryStream::_capacity
	int64_t ____capacity_8;
	// System.Int64 System.IO.UnmanagedMemoryStream::_position
	int64_t ____position_9;
	// System.Int64 System.IO.UnmanagedMemoryStream::_offset
	int64_t ____offset_10;
	// System.IO.FileAccess System.IO.UnmanagedMemoryStream::_access
	int32_t ____access_11;
	// System.Boolean System.IO.UnmanagedMemoryStream::_isOpen
	bool ____isOpen_12;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.UnmanagedMemoryStream::_lastReadTask
	Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87 * ____lastReadTask_13;

public:
	inline static int32_t get_offset_of__buffer_5() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_tB2905D85030C9C1E831E3EB02AD7E5B1B1A5FE4E, ____buffer_5)); }
	inline SafeBuffer_t9C39972A6152D9B18D97894AF4EB871581B64208 * get__buffer_5() const { return ____buffer_5; }
	inline SafeBuffer_t9C39972A6152D9B18D97894AF4EB871581B64208 ** get_address_of__buffer_5() { return &____buffer_5; }
	inline void set__buffer_5(SafeBuffer_t9C39972A6152D9B18D97894AF4EB871581B64208 * value)
	{
		____buffer_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buffer_5), (void*)value);
	}

	inline static int32_t get_offset_of__mem_6() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_tB2905D85030C9C1E831E3EB02AD7E5B1B1A5FE4E, ____mem_6)); }
	inline uint8_t* get__mem_6() const { return ____mem_6; }
	inline uint8_t** get_address_of__mem_6() { return &____mem_6; }
	inline void set__mem_6(uint8_t* value)
	{
		____mem_6 = value;
	}

	inline static int32_t get_offset_of__length_7() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_tB2905D85030C9C1E831E3EB02AD7E5B1B1A5FE4E, ____length_7)); }
	inline int64_t get__length_7() const { return ____length_7; }
	inline int64_t* get_address_of__length_7() { return &____length_7; }
	inline void set__length_7(int64_t value)
	{
		____length_7 = value;
	}

	inline static int32_t get_offset_of__capacity_8() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_tB2905D85030C9C1E831E3EB02AD7E5B1B1A5FE4E, ____capacity_8)); }
	inline int64_t get__capacity_8() const { return ____capacity_8; }
	inline int64_t* get_address_of__capacity_8() { return &____capacity_8; }
	inline void set__capacity_8(int64_t value)
	{
		____capacity_8 = value;
	}

	inline static int32_t get_offset_of__position_9() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_tB2905D85030C9C1E831E3EB02AD7E5B1B1A5FE4E, ____position_9)); }
	inline int64_t get__position_9() const { return ____position_9; }
	inline int64_t* get_address_of__position_9() { return &____position_9; }
	inline void set__position_9(int64_t value)
	{
		____position_9 = value;
	}

	inline static int32_t get_offset_of__offset_10() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_tB2905D85030C9C1E831E3EB02AD7E5B1B1A5FE4E, ____offset_10)); }
	inline int64_t get__offset_10() const { return ____offset_10; }
	inline int64_t* get_address_of__offset_10() { return &____offset_10; }
	inline void set__offset_10(int64_t value)
	{
		____offset_10 = value;
	}

	inline static int32_t get_offset_of__access_11() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_tB2905D85030C9C1E831E3EB02AD7E5B1B1A5FE4E, ____access_11)); }
	inline int32_t get__access_11() const { return ____access_11; }
	inline int32_t* get_address_of__access_11() { return &____access_11; }
	inline void set__access_11(int32_t value)
	{
		____access_11 = value;
	}

	inline static int32_t get_offset_of__isOpen_12() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_tB2905D85030C9C1E831E3EB02AD7E5B1B1A5FE4E, ____isOpen_12)); }
	inline bool get__isOpen_12() const { return ____isOpen_12; }
	inline bool* get_address_of__isOpen_12() { return &____isOpen_12; }
	inline void set__isOpen_12(bool value)
	{
		____isOpen_12 = value;
	}

	inline static int32_t get_offset_of__lastReadTask_13() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_tB2905D85030C9C1E831E3EB02AD7E5B1B1A5FE4E, ____lastReadTask_13)); }
	inline Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87 * get__lastReadTask_13() const { return ____lastReadTask_13; }
	inline Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87 ** get_address_of__lastReadTask_13() { return &____lastReadTask_13; }
	inline void set__lastReadTask_13(Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87 * value)
	{
		____lastReadTask_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lastReadTask_13), (void*)value);
	}
};


// System.IO.WinRtToNetFxStreamAdapter_<ReadAsyncInternal>d__43
struct  U3CReadAsyncInternalU3Ed__43_tD4B002D0FA17B3DBF89A3C6C93A5DE0DE0A78308 
{
public:
	// System.Int32 System.IO.WinRtToNetFxStreamAdapter_<ReadAsyncInternal>d__43::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32> System.IO.WinRtToNetFxStreamAdapter_<ReadAsyncInternal>d__43::<>t__builder
	AsyncTaskMethodBuilder_1_t822D24686214CB8B967C66DA507CD66A5C853079  ___U3CU3Et__builder_1;
	// System.IO.WinRtToNetFxStreamAdapter System.IO.WinRtToNetFxStreamAdapter_<ReadAsyncInternal>d__43::<>4__this
	WinRtToNetFxStreamAdapter_t5DF3E266765C62B1F96383772091E1E54DD48397 * ___U3CU3E4__this_2;
	// System.Byte[] System.IO.WinRtToNetFxStreamAdapter_<ReadAsyncInternal>d__43::buffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer_3;
	// System.Int32 System.IO.WinRtToNetFxStreamAdapter_<ReadAsyncInternal>d__43::offset
	int32_t ___offset_4;
	// System.Int32 System.IO.WinRtToNetFxStreamAdapter_<ReadAsyncInternal>d__43::count
	int32_t ___count_5;
	// System.Threading.CancellationToken System.IO.WinRtToNetFxStreamAdapter_<ReadAsyncInternal>d__43::cancellationToken
	CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  ___cancellationToken_6;
	// Windows.Storage.Streams.IBuffer System.IO.WinRtToNetFxStreamAdapter_<ReadAsyncInternal>d__43::<userBuffer>5__2
	RuntimeObject* ___U3CuserBufferU3E5__2_7;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter<Windows.Storage.Streams.IBuffer> System.IO.WinRtToNetFxStreamAdapter_<ReadAsyncInternal>d__43::<>u__1
	ConfiguredTaskAwaiter_t24BCF0C8B4E4A7F263C9F2AFCC9528025F667E77  ___U3CU3Eu__1_8;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CReadAsyncInternalU3Ed__43_tD4B002D0FA17B3DBF89A3C6C93A5DE0DE0A78308, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CReadAsyncInternalU3Ed__43_tD4B002D0FA17B3DBF89A3C6C93A5DE0DE0A78308, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_t822D24686214CB8B967C66DA507CD66A5C853079  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_t822D24686214CB8B967C66DA507CD66A5C853079 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_t822D24686214CB8B967C66DA507CD66A5C853079  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CReadAsyncInternalU3Ed__43_tD4B002D0FA17B3DBF89A3C6C93A5DE0DE0A78308, ___U3CU3E4__this_2)); }
	inline WinRtToNetFxStreamAdapter_t5DF3E266765C62B1F96383772091E1E54DD48397 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline WinRtToNetFxStreamAdapter_t5DF3E266765C62B1F96383772091E1E54DD48397 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(WinRtToNetFxStreamAdapter_t5DF3E266765C62B1F96383772091E1E54DD48397 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_buffer_3() { return static_cast<int32_t>(offsetof(U3CReadAsyncInternalU3Ed__43_tD4B002D0FA17B3DBF89A3C6C93A5DE0DE0A78308, ___buffer_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_buffer_3() const { return ___buffer_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_buffer_3() { return &___buffer_3; }
	inline void set_buffer_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___buffer_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buffer_3), (void*)value);
	}

	inline static int32_t get_offset_of_offset_4() { return static_cast<int32_t>(offsetof(U3CReadAsyncInternalU3Ed__43_tD4B002D0FA17B3DBF89A3C6C93A5DE0DE0A78308, ___offset_4)); }
	inline int32_t get_offset_4() const { return ___offset_4; }
	inline int32_t* get_address_of_offset_4() { return &___offset_4; }
	inline void set_offset_4(int32_t value)
	{
		___offset_4 = value;
	}

	inline static int32_t get_offset_of_count_5() { return static_cast<int32_t>(offsetof(U3CReadAsyncInternalU3Ed__43_tD4B002D0FA17B3DBF89A3C6C93A5DE0DE0A78308, ___count_5)); }
	inline int32_t get_count_5() const { return ___count_5; }
	inline int32_t* get_address_of_count_5() { return &___count_5; }
	inline void set_count_5(int32_t value)
	{
		___count_5 = value;
	}

	inline static int32_t get_offset_of_cancellationToken_6() { return static_cast<int32_t>(offsetof(U3CReadAsyncInternalU3Ed__43_tD4B002D0FA17B3DBF89A3C6C93A5DE0DE0A78308, ___cancellationToken_6)); }
	inline CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  get_cancellationToken_6() const { return ___cancellationToken_6; }
	inline CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB * get_address_of_cancellationToken_6() { return &___cancellationToken_6; }
	inline void set_cancellationToken_6(CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  value)
	{
		___cancellationToken_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___cancellationToken_6))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CuserBufferU3E5__2_7() { return static_cast<int32_t>(offsetof(U3CReadAsyncInternalU3Ed__43_tD4B002D0FA17B3DBF89A3C6C93A5DE0DE0A78308, ___U3CuserBufferU3E5__2_7)); }
	inline RuntimeObject* get_U3CuserBufferU3E5__2_7() const { return ___U3CuserBufferU3E5__2_7; }
	inline RuntimeObject** get_address_of_U3CuserBufferU3E5__2_7() { return &___U3CuserBufferU3E5__2_7; }
	inline void set_U3CuserBufferU3E5__2_7(RuntimeObject* value)
	{
		___U3CuserBufferU3E5__2_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CuserBufferU3E5__2_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_8() { return static_cast<int32_t>(offsetof(U3CReadAsyncInternalU3Ed__43_tD4B002D0FA17B3DBF89A3C6C93A5DE0DE0A78308, ___U3CU3Eu__1_8)); }
	inline ConfiguredTaskAwaiter_t24BCF0C8B4E4A7F263C9F2AFCC9528025F667E77  get_U3CU3Eu__1_8() const { return ___U3CU3Eu__1_8; }
	inline ConfiguredTaskAwaiter_t24BCF0C8B4E4A7F263C9F2AFCC9528025F667E77 * get_address_of_U3CU3Eu__1_8() { return &___U3CU3Eu__1_8; }
	inline void set_U3CU3Eu__1_8(ConfiguredTaskAwaiter_t24BCF0C8B4E4A7F263C9F2AFCC9528025F667E77  value)
	{
		___U3CU3Eu__1_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_8))->___m_task_0), (void*)NULL);
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

// System.ObjectDisposedException
struct  ObjectDisposedException_tF68E471ECD1419AD7C51137B742837395F50B69A  : public InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1
{
public:
	// System.String System.ObjectDisposedException::objectName
	String_t* ___objectName_17;

public:
	inline static int32_t get_offset_of_objectName_17() { return static_cast<int32_t>(offsetof(ObjectDisposedException_tF68E471ECD1419AD7C51137B742837395F50B69A, ___objectName_17)); }
	inline String_t* get_objectName_17() const { return ___objectName_17; }
	inline String_t** get_address_of_objectName_17() { return &___objectName_17; }
	inline void set_objectName_17(String_t* value)
	{
		___objectName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objectName_17), (void*)value);
	}
};


// System.Threading.EventWaitHandle
struct  EventWaitHandle_t7603BF1D3D30FE42DD07A450C8D09E2684DC4D98  : public WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6
{
public:

public:
};


// System.Threading.SynchronizationContext
struct  SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7  : public RuntimeObject
{
public:
	// System.Threading.SynchronizationContextProperties System.Threading.SynchronizationContext::_props
	int32_t ____props_0;

public:
	inline static int32_t get_offset_of__props_0() { return static_cast<int32_t>(offsetof(SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7, ____props_0)); }
	inline int32_t get__props_0() const { return ____props_0; }
	inline int32_t* get_address_of__props_0() { return &____props_0; }
	inline void set__props_0(int32_t value)
	{
		____props_0 = value;
	}
};

struct SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7_StaticFields
{
public:
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType1
	Type_t * ___s_cachedPreparedType1_1;
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType2
	Type_t * ___s_cachedPreparedType2_2;
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType3
	Type_t * ___s_cachedPreparedType3_3;
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType4
	Type_t * ___s_cachedPreparedType4_4;
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType5
	Type_t * ___s_cachedPreparedType5_5;

public:
	inline static int32_t get_offset_of_s_cachedPreparedType1_1() { return static_cast<int32_t>(offsetof(SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7_StaticFields, ___s_cachedPreparedType1_1)); }
	inline Type_t * get_s_cachedPreparedType1_1() const { return ___s_cachedPreparedType1_1; }
	inline Type_t ** get_address_of_s_cachedPreparedType1_1() { return &___s_cachedPreparedType1_1; }
	inline void set_s_cachedPreparedType1_1(Type_t * value)
	{
		___s_cachedPreparedType1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_cachedPreparedType1_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_cachedPreparedType2_2() { return static_cast<int32_t>(offsetof(SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7_StaticFields, ___s_cachedPreparedType2_2)); }
	inline Type_t * get_s_cachedPreparedType2_2() const { return ___s_cachedPreparedType2_2; }
	inline Type_t ** get_address_of_s_cachedPreparedType2_2() { return &___s_cachedPreparedType2_2; }
	inline void set_s_cachedPreparedType2_2(Type_t * value)
	{
		___s_cachedPreparedType2_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_cachedPreparedType2_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_cachedPreparedType3_3() { return static_cast<int32_t>(offsetof(SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7_StaticFields, ___s_cachedPreparedType3_3)); }
	inline Type_t * get_s_cachedPreparedType3_3() const { return ___s_cachedPreparedType3_3; }
	inline Type_t ** get_address_of_s_cachedPreparedType3_3() { return &___s_cachedPreparedType3_3; }
	inline void set_s_cachedPreparedType3_3(Type_t * value)
	{
		___s_cachedPreparedType3_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_cachedPreparedType3_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_cachedPreparedType4_4() { return static_cast<int32_t>(offsetof(SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7_StaticFields, ___s_cachedPreparedType4_4)); }
	inline Type_t * get_s_cachedPreparedType4_4() const { return ___s_cachedPreparedType4_4; }
	inline Type_t ** get_address_of_s_cachedPreparedType4_4() { return &___s_cachedPreparedType4_4; }
	inline void set_s_cachedPreparedType4_4(Type_t * value)
	{
		___s_cachedPreparedType4_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_cachedPreparedType4_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_cachedPreparedType5_5() { return static_cast<int32_t>(offsetof(SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7_StaticFields, ___s_cachedPreparedType5_5)); }
	inline Type_t * get_s_cachedPreparedType5_5() const { return ___s_cachedPreparedType5_5; }
	inline Type_t ** get_address_of_s_cachedPreparedType5_5() { return &___s_cachedPreparedType5_5; }
	inline void set_s_cachedPreparedType5_5(Type_t * value)
	{
		___s_cachedPreparedType5_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_cachedPreparedType5_5), (void*)value);
	}
};


// System.Threading.Tasks.AsyncInfoToTaskBridge`1<System.VoidValueTypeParameter>
struct  AsyncInfoToTaskBridge_1_tFF70BDD04454A6EBC5FE97283B11BB664C836B27  : public TaskCompletionSource_1_t58B1B163F59487E469888F92C0D132BC81B574FF
{
public:
	// System.Threading.CancellationToken System.Threading.Tasks.AsyncInfoToTaskBridge`1::_ct
	CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  ____ct_1;
	// System.Threading.CancellationTokenRegistration System.Threading.Tasks.AsyncInfoToTaskBridge`1::_ctr
	CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2  ____ctr_2;
	// System.Boolean System.Threading.Tasks.AsyncInfoToTaskBridge`1::_completing
	bool ____completing_3;

public:
	inline static int32_t get_offset_of__ct_1() { return static_cast<int32_t>(offsetof(AsyncInfoToTaskBridge_1_tFF70BDD04454A6EBC5FE97283B11BB664C836B27, ____ct_1)); }
	inline CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  get__ct_1() const { return ____ct_1; }
	inline CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB * get_address_of__ct_1() { return &____ct_1; }
	inline void set__ct_1(CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  value)
	{
		____ct_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____ct_1))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of__ctr_2() { return static_cast<int32_t>(offsetof(AsyncInfoToTaskBridge_1_tFF70BDD04454A6EBC5FE97283B11BB664C836B27, ____ctr_2)); }
	inline CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2  get__ctr_2() const { return ____ctr_2; }
	inline CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2 * get_address_of__ctr_2() { return &____ctr_2; }
	inline void set__ctr_2(CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2  value)
	{
		____ctr_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____ctr_2))->___m_callbackInfo_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&____ctr_2))->___m_registrationInfo_1))->___m_source_0), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of__completing_3() { return static_cast<int32_t>(offsetof(AsyncInfoToTaskBridge_1_tFF70BDD04454A6EBC5FE97283B11BB664C836B27, ____completing_3)); }
	inline bool get__completing_3() const { return ____completing_3; }
	inline bool* get_address_of__completing_3() { return &____completing_3; }
	inline void set__completing_3(bool value)
	{
		____completing_3 = value;
	}
};


// System.Threading.Tasks.TaskToAsyncActionAdapter
struct  TaskToAsyncActionAdapter_t1498B22A4F941563A016F194BD85FBFA44C4528C  : public TaskToAsyncInfoAdapter_4_t6939D2A566A48D499669B8B0865212D2FB4A22BF
{
public:

public:
};


// System.Threading.Tasks.Task`1<System.Boolean>
struct  Task_1_tD6131FE3A3A2F1D58DB886B6CF31A2672B75B439  : public Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	bool ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_tD6131FE3A3A2F1D58DB886B6CF31A2672B75B439, ___m_result_40)); }
	inline bool get_m_result_40() const { return ___m_result_40; }
	inline bool* get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(bool value)
	{
		___m_result_40 = value;
	}
};

struct Task_1_tD6131FE3A3A2F1D58DB886B6CF31A2672B75B439_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t90DBF289FBDBB845B0FA55E1773164F06FBDEA17 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t185FBBAFD46813778C35A8D4A5FA3AFB4FC0E14C * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_tD6131FE3A3A2F1D58DB886B6CF31A2672B75B439_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t90DBF289FBDBB845B0FA55E1773164F06FBDEA17 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t90DBF289FBDBB845B0FA55E1773164F06FBDEA17 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t90DBF289FBDBB845B0FA55E1773164F06FBDEA17 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_tD6131FE3A3A2F1D58DB886B6CF31A2672B75B439_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t185FBBAFD46813778C35A8D4A5FA3AFB4FC0E14C * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t185FBBAFD46813778C35A8D4A5FA3AFB4FC0E14C ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t185FBBAFD46813778C35A8D4A5FA3AFB4FC0E14C * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.Int32>
struct  Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87  : public Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	int32_t ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87, ___m_result_40)); }
	inline int32_t get_m_result_40() const { return ___m_result_40; }
	inline int32_t* get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(int32_t value)
	{
		___m_result_40 = value;
	}
};

struct Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t35BBF03CDA9AA94D2BE8CB805D2C764236F56CC7 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_tBCA034BF330CE1C3008C166BF27F309CD4C41C24 * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t35BBF03CDA9AA94D2BE8CB805D2C764236F56CC7 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t35BBF03CDA9AA94D2BE8CB805D2C764236F56CC7 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t35BBF03CDA9AA94D2BE8CB805D2C764236F56CC7 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_tBCA034BF330CE1C3008C166BF27F309CD4C41C24 * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_tBCA034BF330CE1C3008C166BF27F309CD4C41C24 ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_tBCA034BF330CE1C3008C166BF27F309CD4C41C24 * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.UInt32>
struct  Task_1_tB8C8430765AEE1D5F24261F5BAD009C22AC7872F  : public Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	uint32_t ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_tB8C8430765AEE1D5F24261F5BAD009C22AC7872F, ___m_result_40)); }
	inline uint32_t get_m_result_40() const { return ___m_result_40; }
	inline uint32_t* get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(uint32_t value)
	{
		___m_result_40 = value;
	}
};

struct Task_1_tB8C8430765AEE1D5F24261F5BAD009C22AC7872F_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t4B1CB177FC575AD49A8B6BDA308F06C7075F366B * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t2DE17BAAB7C8A395FFA1D553866D96ABC5F46C97 * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_tB8C8430765AEE1D5F24261F5BAD009C22AC7872F_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t4B1CB177FC575AD49A8B6BDA308F06C7075F366B * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t4B1CB177FC575AD49A8B6BDA308F06C7075F366B ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t4B1CB177FC575AD49A8B6BDA308F06C7075F366B * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_tB8C8430765AEE1D5F24261F5BAD009C22AC7872F_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t2DE17BAAB7C8A395FFA1D553866D96ABC5F46C97 * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t2DE17BAAB7C8A395FFA1D553866D96ABC5F46C97 ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t2DE17BAAB7C8A395FFA1D553866D96ABC5F46C97 * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.VoidValueTypeParameter>
struct  Task_1_tC00A207FB8C25E4498366C42466B6F913AF48F5E  : public Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	VoidValueTypeParameter_t4218889FC907F3892F775433493F080BD1A41CAA  ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_tC00A207FB8C25E4498366C42466B6F913AF48F5E, ___m_result_40)); }
	inline VoidValueTypeParameter_t4218889FC907F3892F775433493F080BD1A41CAA  get_m_result_40() const { return ___m_result_40; }
	inline VoidValueTypeParameter_t4218889FC907F3892F775433493F080BD1A41CAA * get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(VoidValueTypeParameter_t4218889FC907F3892F775433493F080BD1A41CAA  value)
	{
		___m_result_40 = value;
	}
};

struct Task_1_tC00A207FB8C25E4498366C42466B6F913AF48F5E_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t410DD5370290DF7924E2357F4FAF09116A3366E9 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_tCF92B89EA717C53455F13CB9ADFF9F97988DC755 * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_tC00A207FB8C25E4498366C42466B6F913AF48F5E_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t410DD5370290DF7924E2357F4FAF09116A3366E9 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t410DD5370290DF7924E2357F4FAF09116A3366E9 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t410DD5370290DF7924E2357F4FAF09116A3366E9 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_tC00A207FB8C25E4498366C42466B6F913AF48F5E_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_tCF92B89EA717C53455F13CB9ADFF9F97988DC755 * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_tCF92B89EA717C53455F13CB9ADFF9F97988DC755 ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_tCF92B89EA717C53455F13CB9ADFF9F97988DC755 * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<Windows.Storage.Streams.IBuffer>
struct  Task_1_t84A3E8ADA0C56D0776B0FCEBCEA98E253DB4385C  : public Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	RuntimeObject* ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_t84A3E8ADA0C56D0776B0FCEBCEA98E253DB4385C, ___m_result_40)); }
	inline RuntimeObject* get_m_result_40() const { return ___m_result_40; }
	inline RuntimeObject** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(RuntimeObject* value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};

struct Task_1_t84A3E8ADA0C56D0776B0FCEBCEA98E253DB4385C_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t3D3F8CFD20FEF77056A4029C26A3D6992C5573E9 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_tF6DFA2E681528B410B6796B6D05C01C31A5DDDE0 * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_t84A3E8ADA0C56D0776B0FCEBCEA98E253DB4385C_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t3D3F8CFD20FEF77056A4029C26A3D6992C5573E9 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t3D3F8CFD20FEF77056A4029C26A3D6992C5573E9 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t3D3F8CFD20FEF77056A4029C26A3D6992C5573E9 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_t84A3E8ADA0C56D0776B0FCEBCEA98E253DB4385C_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_tF6DFA2E681528B410B6796B6D05C01C31A5DDDE0 * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_tF6DFA2E681528B410B6796B6D05C01C31A5DDDE0 ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_tF6DFA2E681528B410B6796B6D05C01C31A5DDDE0 * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
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

// Windows.Foundation.IAsyncInfo
struct NOVTABLE IAsyncInfo_t9B58E0D0A013D06029CDEAE127A910A69D13FBB5 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncInfo_get_Id_mFB9E7E5D042A091EEA5ADBBB479329CE1248351B(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncInfo_get_Status_m3D1D43B45DDBE38620B5178B88307B0759171F7A(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncInfo_get_ErrorCode_m9A8D01260F4211B8E794B3FC73D212F3F8CAB584(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncInfo_Cancel_m71EA200C07A5E2B5A9BAE4BC2AB00EFF1D3AB5A8() = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncInfo_Close_m197A13662E7E9A888B0E3FFAFDBA15410AA850E7() = 0;
};
// Windows.Storage.Streams.IInputStream
struct NOVTABLE IInputStream_tE16D3C1553F5E6BAC4E7E8D7DE411ADD049B1B13 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IInputStream_ReadAsync_mCCC52942D8DECE2C743C51DD683483531F495C88(IBuffer_t13BCDB1D6DE32F79AB9F9E149514026CA6B4AAEF* ___buffer0, uint32_t ___count1, uint32_t ___options2, IAsyncOperationWithProgress_2_t9F077679BB6FBB6BF4C0E8B56C7FEF3D661EA792** comReturnValue) = 0;
};

// System.Action`1<System.Object>
struct  Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<System.Threading.Tasks.Task,System.Object>
struct  Action_2_tC5CBC473593FC52892A3A27575658B0C050584D8  : public MulticastDelegate_t
{
public:

public:
};


// System.AsyncCallback
struct  AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Threading.CancellationToken,System.Threading.Tasks.Task`1<System.Boolean>>
struct  Func_2_tBAECAB30BE1F21ACC73D0A7C4ACB219CA858CABD  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`3<System.Threading.CancellationToken,System.IProgress`1<System.UInt32>,System.Threading.Tasks.Task`1<System.UInt32>>
struct  Func_3_tA53508562A6317892513AEFC0328405DBBD51375  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`3<System.Threading.CancellationToken,System.IProgress`1<System.UInt32>,System.Threading.Tasks.Task`1<Windows.Storage.Streams.IBuffer>>
struct  Func_3_t10591BE50BF875E1CE2515E7AAE2A31E3D110A49  : public MulticastDelegate_t
{
public:

public:
};


// System.Runtime.CompilerServices.ConditionalWeakTable`2_CreateValueCallback<System.Object,System.IO.Stream>
struct  CreateValueCallback_tB3A24270F8E2AC16575A1201853CAE071E560E5F  : public MulticastDelegate_t
{
public:

public:
};


// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions_WindowsRuntimeBufferUnmanagedMemoryStream
struct  WindowsRuntimeBufferUnmanagedMemoryStream_t1DC0F5C0CC488E863931D7C6F1DF68ADB95DA625  : public UnmanagedMemoryStream_tB2905D85030C9C1E831E3EB02AD7E5B1B1A5FE4E
{
public:
	// Windows.Storage.Streams.IBuffer System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions_WindowsRuntimeBufferUnmanagedMemoryStream::_sourceBuffer
	RuntimeObject* ____sourceBuffer_14;

public:
	inline static int32_t get_offset_of__sourceBuffer_14() { return static_cast<int32_t>(offsetof(WindowsRuntimeBufferUnmanagedMemoryStream_t1DC0F5C0CC488E863931D7C6F1DF68ADB95DA625, ____sourceBuffer_14)); }
	inline RuntimeObject* get__sourceBuffer_14() const { return ____sourceBuffer_14; }
	inline RuntimeObject** get_address_of__sourceBuffer_14() { return &____sourceBuffer_14; }
	inline void set__sourceBuffer_14(RuntimeObject* value)
	{
		____sourceBuffer_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____sourceBuffer_14), (void*)value);
	}
};


// System.Threading.ManualResetEvent
struct  ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408  : public EventWaitHandle_t7603BF1D3D30FE42DD07A450C8D09E2684DC4D98
{
public:

public:
};


// System.Threading.SendOrPostCallback
struct  SendOrPostCallback_t3F9C0164860E4AA5138DF8B4488DFB0D33147F01  : public MulticastDelegate_t
{
public:

public:
};


// Windows.Foundation.AsyncActionCompletedHandler
struct  AsyncActionCompletedHandler_t1820A7A20AA2CF935463CD8EB21800005EFE488D  : public MulticastDelegate_t
{
public:

public:
};

// COM Callable Wrapper interface definition for Windows.Foundation.AsyncActionCompletedHandler
struct IAsyncActionCompletedHandler_t1820A7A20AA2CF935463CD8EB21800005EFE488D_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncAction_t763952C2BD8AC50CEB26803FF37B2111537736CB* ___asyncInfo0, int32_t ___asyncStatus1) = 0;
};


// Windows.Foundation.AsyncOperationCompletedHandler`1<System.Boolean>
struct  AsyncOperationCompletedHandler_1_t60A0D16C078315F375831514827E7956934AFB66  : public MulticastDelegate_t
{
public:

public:
};

// COM Callable Wrapper interface definition for Windows.Foundation.AsyncOperationCompletedHandler`1<System.Boolean>
struct IAsyncOperationCompletedHandler_1_t60A0D16C078315F375831514827E7956934AFB66_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperation_1_t27E018F764B0C6E8EB0FA611CB25A52C1FD0FB18* ___asyncInfo0, int32_t ___asyncStatus1) = 0;
};


// Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.UInt32,System.UInt32>
struct  AsyncOperationWithProgressCompletedHandler_2_tF449555B6EE977A7635D662ED0C1D414CC60792B  : public MulticastDelegate_t
{
public:

public:
};

// COM Callable Wrapper interface definition for Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.UInt32,System.UInt32>
struct IAsyncOperationWithProgressCompletedHandler_2_tF449555B6EE977A7635D662ED0C1D414CC60792B_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperationWithProgress_2_tC8BD3FE106054920900E2389AD70276493A309B3* ___asyncInfo0, int32_t ___asyncStatus1) = 0;
};


// Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct  AsyncOperationWithProgressCompletedHandler_2_tF04CE0C0951B83CB6BD82DC4376B10B01A3B1CE6  : public MulticastDelegate_t
{
public:

public:
};

// COM Callable Wrapper interface definition for Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct IAsyncOperationWithProgressCompletedHandler_2_tF04CE0C0951B83CB6BD82DC4376B10B01A3B1CE6_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperationWithProgress_2_t9F077679BB6FBB6BF4C0E8B56C7FEF3D661EA792* ___asyncInfo0, int32_t ___asyncStatus1) = 0;
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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


// System.Void Windows.Foundation.AsyncOperationCompletedHandler`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationCompletedHandler_1__ctor_m0807C8539F5F05DA00A3A257AFB7254C6F99EC9C_gshared (AsyncOperationCompletedHandler_1_t60A0D16C078315F375831514827E7956934AFB66 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// Windows.Foundation.IAsyncOperationWithProgress`2<TResult,TProgress> System.Runtime.InteropServices.WindowsRuntime.AsyncInfo::CreateCompletedOperation<System.Object,System.UInt32>(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AsyncInfo_CreateCompletedOperation_TisRuntimeObject_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_m8D02605E48AFCD41068E91DB43E292FAB90B2D65_gshared (RuntimeObject * ___synchronousResult0, const RuntimeMethod* method);
// Windows.Foundation.IAsyncOperationWithProgress`2<TResult,TProgress> System.Runtime.InteropServices.WindowsRuntime.AsyncInfo::CreateFaultedOperation<System.Object,System.UInt32>(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AsyncInfo_CreateFaultedOperation_TisRuntimeObject_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_m2D15316659D35CEE75C15B4E36B1C383679EB1F7_gshared (Exception_t * ___error0, const RuntimeMethod* method);
// System.Void System.Func`3<System.Threading.CancellationToken,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_3__ctor_m9A52400E36ED807F69BD2DAA97B0F77CD397B10C_gshared (Func_3_tA1ED789B28FBED27E11AB85BFB02658BF0671EDB * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// Windows.Foundation.IAsyncOperationWithProgress`2<TResult,TProgress> System.Runtime.InteropServices.WindowsRuntime.AsyncInfo::Run<System.Object,System.UInt32>(System.Func`3<System.Threading.CancellationToken,System.IProgress`1<TProgress>,System.Threading.Tasks.Task`1<TResult>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AsyncInfo_Run_TisRuntimeObject_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_mAB13563D9FD809F0E89CBB6AEA5DBF25211F3464_gshared (Func_3_tDD02D5A1599A9D3792DD2702D901E3BA36C63CF0 * ___taskProvider0, const RuntimeMethod* method);
// Windows.Foundation.IAsyncOperationWithProgress`2<TResult,TProgress> System.Runtime.InteropServices.WindowsRuntime.AsyncInfo::Run<System.UInt32,System.UInt32>(System.Func`3<System.Threading.CancellationToken,System.IProgress`1<TProgress>,System.Threading.Tasks.Task`1<TResult>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AsyncInfo_Run_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_mB060DC01F0DE191B5057E0DDACF3A3ABCBDF2FBE_gshared (Func_3_tA53508562A6317892513AEFC0328405DBBD51375 * ___taskProvider0, const RuntimeMethod* method);
// System.Void System.Func`2<System.Threading.CancellationToken,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mD54D4E199C5B1CBAC175755A6C40E51D22AFC171_gshared (Func_2_t97B2CD242CD12647751691A96969A9F0688EC20A * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// Windows.Foundation.IAsyncOperation`1<TResult> System.Runtime.InteropServices.WindowsRuntime.AsyncInfo::Run<System.Boolean>(System.Func`2<System.Threading.CancellationToken,System.Threading.Tasks.Task`1<TResult>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AsyncInfo_Run_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_m8F84AC2AB21D2BF30640B0719BB41FAE13177195_gshared (Func_2_tBAECAB30BE1F21ACC73D0A7C4ACB219CA858CABD * ___taskProvider0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663  AsyncTaskMethodBuilder_1_Create_mC7806A5C115ED2239A5073313AA3564D8244156E_gshared (const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<System.IO.StreamOperationsImplementation/<>c__DisplayClass1_0/<<ReadAsync_AbstractStream>b__0>d>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_tD986623175A57F547465B50AED2AC7B903115FD7_m75489CE9E69350487176ACF7FF6596B4FCC19449_gshared (AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663 * __this, U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_tD986623175A57F547465B50AED2AC7B903115FD7 * p0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * AsyncTaskMethodBuilder_1_get_Task_m19C5664D70C4FC799BEFB8D0FC98E687F97059FA_gshared (AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663 * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<!0> System.Threading.Tasks.Task`1<System.Int32>::ConfigureAwait(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfiguredTaskAwaitable_1_t10E65A50D6EC08956E9F550CD64330F4DED0D38A  Task_1_ConfigureAwait_m88DF0C431456B72CA5CF2534AE96969FDB86F982_gshared (Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87 * __this, bool p0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<!0> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Int32>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_t18D0589F789FFE82A30A223888FB7C5BED32C63E  ConfiguredTaskAwaitable_1_GetAwaiter_m10B0B84F72A27E623BD94882380E582459F8B8DE_gshared (ConfiguredTaskAwaitable_1_t10E65A50D6EC08956E9F550CD64330F4DED0D38A * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Int32>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConfiguredTaskAwaiter_get_IsCompleted_mCBD6C3EF024E1D7C538268F338BD0C4BA712FA92_gshared (ConfiguredTaskAwaiter_t18D0589F789FFE82A30A223888FB7C5BED32C63E * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Int32>,System.IO.StreamOperationsImplementation/<>c__DisplayClass1_0/<<ReadAsync_AbstractStream>b__0>d>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t18D0589F789FFE82A30A223888FB7C5BED32C63E_TisU3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_tD986623175A57F547465B50AED2AC7B903115FD7_m859FAB168BE1ABFB465BAB7C94632A4641753ED9_gshared (AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663 * __this, ConfiguredTaskAwaiter_t18D0589F789FFE82A30A223888FB7C5BED32C63E * p0, U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_tD986623175A57F547465B50AED2AC7B903115FD7 * p1, const RuntimeMethod* method);
// !0 System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Int32>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConfiguredTaskAwaiter_GetResult_m05FB789E6901C9496B94A722DF99239A979A2623_gshared (ConfiguredTaskAwaiter_t18D0589F789FFE82A30A223888FB7C5BED32C63E * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_m4C0B5462ECCB520FACA3C90B353DF596DAAF586D_gshared (AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663 * __this, Exception_t * p0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetResult(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_mD7DA7A17DC0610B11A0AAA364C3CA51FEC1271DB_gshared (AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_m5CC21A02320CF3D2DD7894A31123DFD82A428E4C_gshared (AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.UInt32>::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_1_tD386300660CF74FF8FB22C6C3C937BBA9F7E8DED  AsyncTaskMethodBuilder_1_Create_mFA0E603D8EEE094438B0465D1E57747E2E12FC70_gshared (const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.UInt32>::Start<System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__0>d>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_tC5B27594871B0D4D6540AEF8F8175C68ECB1F243_mF6393D5F03E579671815F1DA96BB1D7780BB7835_gshared (AsyncTaskMethodBuilder_1_tD386300660CF74FF8FB22C6C3C937BBA9F7E8DED * __this, U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_tC5B27594871B0D4D6540AEF8F8175C68ECB1F243 * p0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.UInt32>::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tB8C8430765AEE1D5F24261F5BAD009C22AC7872F * AsyncTaskMethodBuilder_1_get_Task_m157191133E216D7561AD02E894BCA819FD5F98FF_gshared (AsyncTaskMethodBuilder_1_tD386300660CF74FF8FB22C6C3C937BBA9F7E8DED * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.UInt32>::Start<System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__1>d>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_tE07FA298A0F1283378FE03DCD280D757C505C510_m0F53440B958A7F25B8826E8D3A50547C34076FF0_gshared (AsyncTaskMethodBuilder_1_tD386300660CF74FF8FB22C6C3C937BBA9F7E8DED * __this, U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_tE07FA298A0F1283378FE03DCD280D757C505C510 * p0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.UInt32>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter,System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__0>d>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874_TisU3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_tC5B27594871B0D4D6540AEF8F8175C68ECB1F243_m6A90BC625CF91D31293276B6DA5D5D6A05C80E23_gshared (AsyncTaskMethodBuilder_1_tD386300660CF74FF8FB22C6C3C937BBA9F7E8DED * __this, ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874 * p0, U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_tC5B27594871B0D4D6540AEF8F8175C68ECB1F243 * p1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.UInt32>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_m4BCFE40068BC66F1C48B5C7C7C9F93F5E48EF00B_gshared (AsyncTaskMethodBuilder_1_tD386300660CF74FF8FB22C6C3C937BBA9F7E8DED * __this, Exception_t * p0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.UInt32>::SetResult(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m887E134B6FD52D8CA2116A466F69BC8E1EA6ED5E_gshared (AsyncTaskMethodBuilder_1_tD386300660CF74FF8FB22C6C3C937BBA9F7E8DED * __this, uint32_t p0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.UInt32>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_m2C2B09AB812EDEDAB3C9E89B8A2BF19C4EC8B45F_gshared (AsyncTaskMethodBuilder_1_tD386300660CF74FF8FB22C6C3C937BBA9F7E8DED * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.UInt32>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter,System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__1>d>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874_TisU3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_tE07FA298A0F1283378FE03DCD280D757C505C510_m012F5C73E480F7D4C555E2CD5ABE0D3B896DBF64_gshared (AsyncTaskMethodBuilder_1_tD386300660CF74FF8FB22C6C3C937BBA9F7E8DED * __this, ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874 * p0, U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_tE07FA298A0F1283378FE03DCD280D757C505C510 * p1, const RuntimeMethod* method);
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE  AsyncTaskMethodBuilder_1_Create_mEB49F32EAEB3E6C469F3A1194FBC34CD1D91CBBF_gshared (const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::Start<System.IO.StreamOperationsImplementation/<>c__DisplayClass3_0/<<FlushAsync_AbstractStream>b__0>d>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t33297D8BAD10F1F6FA496D0DC2B75DFCFFF6936D_m4FD800D60A2E430DCAE817F4E3965A528B83FD8D_gshared (AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * __this, U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t33297D8BAD10F1F6FA496D0DC2B75DFCFFF6936D * p0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tD6131FE3A3A2F1D58DB886B6CF31A2672B75B439 * AsyncTaskMethodBuilder_1_get_Task_mE71F3C1D2587BE90812781280F0175E9CE14BA66_gshared (AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter,System.IO.StreamOperationsImplementation/<>c__DisplayClass3_0/<<FlushAsync_AbstractStream>b__0>d>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874_TisU3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t33297D8BAD10F1F6FA496D0DC2B75DFCFFF6936D_m2AA05CF867293C40A7E0C8F297A600CD09FAFCF7_gshared (AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * __this, ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874 * p0, U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t33297D8BAD10F1F6FA496D0DC2B75DFCFFF6936D * p1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_m21285A09F0A9D6C0F245EB498300064F66DAAF18_gshared (AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * __this, Exception_t * p0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetResult(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_mCF07BE7A4F16080B49751FF5A4159E2ADDAC723F_gshared (AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * __this, bool p0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_m6C16FFAECC8CE76F82289A87141A9524F5B09C60_gshared (AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.Object,System.UInt32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationWithProgressCompletedHandler_2__ctor_mBC870D4299D9476FE2CCC4B932777F216C2554FD_gshared (AsyncOperationWithProgressCompletedHandler_2_tD97B7CC6004FBEA3D052F954E4EC2123FCAECD85 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.UInt32,System.UInt32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationWithProgressCompletedHandler_2__ctor_m96C27552CFBCABAAE91832CF8C52B7BCBE419603_gshared (AsyncOperationWithProgressCompletedHandler_2_tF449555B6EE977A7635D662ED0C1D414CC60792B * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// TWinRtStream System.IO.WinRtToNetFxStreamAdapter::EnsureNotDisposed<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisRuntimeObject_mF08CDC251A308816DA16F7BFC89892B62F9226B8_gshared (WinRtToNetFxStreamAdapter_t5DF3E266765C62B1F96383772091E1E54DD48397 * __this, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<TResult> System.WindowsRuntimeSystemExtensions::AsTask<System.UInt32,System.UInt32>(Windows.Foundation.IAsyncOperationWithProgress`2<TResult,TProgress>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tB8C8430765AEE1D5F24261F5BAD009C22AC7872F * WindowsRuntimeSystemExtensions_AsTask_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_m2B704B1F08F199445D3A99B454B3E9BE75A5FFE0_gshared (RuntimeObject* ___source0, CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  ___cancellationToken1, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<TResult> System.WindowsRuntimeSystemExtensions::AsTask<System.Boolean>(Windows.Foundation.IAsyncOperation`1<TResult>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tD6131FE3A3A2F1D58DB886B6CF31A2672B75B439 * WindowsRuntimeSystemExtensions_AsTask_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_m46E828D5A0C87D1B9B5892F0722AD984B428AE4A_gshared (RuntimeObject* ___source0, CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  ___cancellationToken1, const RuntimeMethod* method);
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32>::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_1_t822D24686214CB8B967C66DA507CD66A5C853079  AsyncTaskMethodBuilder_1_Create_mB155504875E2454883E034E847877A9DEA85E318_gshared (const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32>::Start<System.IO.WinRtToNetFxStreamAdapter/<ReadAsyncInternal>d__43>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CReadAsyncInternalU3Ed__43_tD4B002D0FA17B3DBF89A3C6C93A5DE0DE0A78308_m0E020F3B06CE3E60416AEFE4439B21482B69FB8D_gshared (AsyncTaskMethodBuilder_1_t822D24686214CB8B967C66DA507CD66A5C853079 * __this, U3CReadAsyncInternalU3Ed__43_tD4B002D0FA17B3DBF89A3C6C93A5DE0DE0A78308 * p0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32>::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87 * AsyncTaskMethodBuilder_1_get_Task_m939AAFF5841821CC09C627DCDEB2DFD5B933DFC2_gshared (AsyncTaskMethodBuilder_1_t822D24686214CB8B967C66DA507CD66A5C853079 * __this, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<TResult> System.WindowsRuntimeSystemExtensions::AsTask<System.Object,System.UInt32>(Windows.Foundation.IAsyncOperationWithProgress`2<TResult,TProgress>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * WindowsRuntimeSystemExtensions_AsTask_TisRuntimeObject_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_m0B789C0841ACE15620820CA18F6090E041D65958_gshared (RuntimeObject* ___source0, CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  ___cancellationToken1, const RuntimeMethod* method);
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<!0> System.Threading.Tasks.Task`1<System.Object>::ConfigureAwait(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfiguredTaskAwaitable_1_tA36F8230F9392F8C09FD6FDBAEA3F1A41388CCA8  Task_1_ConfigureAwait_m60DD864D9488EACBA6C087E87E448797C1C8B76B_gshared (Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * __this, bool p0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<!0> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Object>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_tFB3C4197768C6CF02BE088F703AA6E46D703D46E  ConfiguredTaskAwaitable_1_GetAwaiter_m86C543D72022CB5D0C43053C4AF5F37EA4E690A7_gshared (ConfiguredTaskAwaitable_1_tA36F8230F9392F8C09FD6FDBAEA3F1A41388CCA8 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConfiguredTaskAwaiter_get_IsCompleted_mA1F08104B225C8640528B38BFD0AAAEE84541586_gshared (ConfiguredTaskAwaiter_tFB3C4197768C6CF02BE088F703AA6E46D703D46E * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>,System.IO.WinRtToNetFxStreamAdapter/<ReadAsyncInternal>d__43>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tFB3C4197768C6CF02BE088F703AA6E46D703D46E_TisU3CReadAsyncInternalU3Ed__43_tD4B002D0FA17B3DBF89A3C6C93A5DE0DE0A78308_mC110859C66627F85FB77F3ED2222F4D08670955E_gshared (AsyncTaskMethodBuilder_1_t822D24686214CB8B967C66DA507CD66A5C853079 * __this, ConfiguredTaskAwaiter_tFB3C4197768C6CF02BE088F703AA6E46D703D46E * p0, U3CReadAsyncInternalU3Ed__43_tD4B002D0FA17B3DBF89A3C6C93A5DE0DE0A78308 * p1, const RuntimeMethod* method);
// !0 System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ConfiguredTaskAwaiter_GetResult_m4EE5BF4F8536CCC951CA3F4E3C494411AE2D507E_gshared (ConfiguredTaskAwaiter_tFB3C4197768C6CF02BE088F703AA6E46D703D46E * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_mC6242DDCD4119CD73267E4B9888FF3474D795821_gshared (AsyncTaskMethodBuilder_1_t822D24686214CB8B967C66DA507CD66A5C853079 * __this, Exception_t * p0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32>::SetResult(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_mAFB12C1766B74D412E293BA7AB711615A14C2230_gshared (AsyncTaskMethodBuilder_1_t822D24686214CB8B967C66DA507CD66A5C853079 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_mADB2F2ED219BD69EC85F7516C62FB23F840BB877_gshared (AsyncTaskMethodBuilder_1_t822D24686214CB8B967C66DA507CD66A5C853079 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConditionalWeakTable_2_TryGetValue_m281BFEF9AF914D26E08E1DE24C8A88D3CA8D557D_gshared (ConditionalWeakTable_2_tAD6736E4C6A9AF930D360966499D999E3CE45BF3 * __this, RuntimeObject * p0, RuntimeObject ** p1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.ConditionalWeakTable`2/CreateValueCallback<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateValueCallback__ctor_m0C8279CA67355F638D6C7A3AAFFFA9CEA2570AB1_gshared (CreateValueCallback_tBCCB4685658A4B0DE8153A79A7E365983D58381F * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// !1 System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Object>::GetValue(!0,System.Runtime.CompilerServices.ConditionalWeakTable`2/CreateValueCallback<!0,!1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ConditionalWeakTable_2_GetValue_m838D9EF0BF4891909CA39673B6057E0E913AB829_gshared (ConditionalWeakTable_2_tAD6736E4C6A9AF930D360966499D999E3CE45BF3 * __this, RuntimeObject * p0, CreateValueCallback_tBCCB4685658A4B0DE8153A79A7E365983D58381F * p1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConditionalWeakTable_2__ctor_m1BF7C98CA314D99CE58778C0C661D5F1628B6563_gshared (ConditionalWeakTable_2_tAD6736E4C6A9AF930D360966499D999E3CE45BF3 * __this, const RuntimeMethod* method);
// System.Int32 System.ArraySegment`1<System.Byte>::get_Offset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Offset_m6651443913CC50A02AE5D7C4CDC6F6744D39B483_gshared (ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA * __this, const RuntimeMethod* method);
// !0[] System.ArraySegment`1<System.Byte>::get_Array()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ArraySegment_1_get_Array_m41D93EFB7EAB3081C0A27ED9891E7177F5F361B7_gshared (ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA * __this, const RuntimeMethod* method);
// TResult System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.VoidValueTypeParameter,System.VoidValueTypeParameter>::GetResultsInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VoidValueTypeParameter_t4218889FC907F3892F775433493F080BD1A41CAA  TaskToAsyncInfoAdapter_4_GetResultsInternal_mBF7D2CE18369609722053397E88496835BECAC8C_gshared (TaskToAsyncInfoAdapter_4_t7ED2445CF03BB4D275242341EA404EAA6634929F * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mAFC7442D9D3CEC6701C3C5599F8CF12476095510_gshared (Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_mB83B0C1C61CED5B54803D334FFC7187881D32EFB_gshared (Action_2_t0DB6FD6F515527EAB552B690A291778C6F00D48C * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Boolean System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.VoidValueTypeParameter,System.VoidValueTypeParameter>::get_CompletedSynchronously()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskToAsyncInfoAdapter_4_get_CompletedSynchronously_m1ED1A32AEDB768B25DB552FC59276375B5A1E7D0_gshared (TaskToAsyncInfoAdapter_4_t7ED2445CF03BB4D275242341EA404EAA6634929F * __this, const RuntimeMethod* method);
// System.Threading.Tasks.Task System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.VoidValueTypeParameter,System.VoidValueTypeParameter>::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * TaskToAsyncInfoAdapter_4_get_Task_mF37BC466DB6D1ABD538C7085BF6150C2A99A6952_gshared (TaskToAsyncInfoAdapter_4_t7ED2445CF03BB4D275242341EA404EAA6634929F * __this, const RuntimeMethod* method);
// System.Threading.CancellationTokenSource System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.VoidValueTypeParameter,System.VoidValueTypeParameter>::get_CancelTokenSource()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * TaskToAsyncInfoAdapter_4_get_CancelTokenSource_m1F8BAF325E6DF5F1C687FE2A165F36975CB37EA5_gshared (TaskToAsyncInfoAdapter_4_t7ED2445CF03BB4D275242341EA404EAA6634929F * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.AsyncInfoToTaskBridge`1<System.VoidValueTypeParameter>::.ctor(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncInfoToTaskBridge_1__ctor_mF7CD592EF952F225806871F14672CE77BDDAB0C4_gshared (AsyncInfoToTaskBridge_1_tFF70BDD04454A6EBC5FE97283B11BB664C836B27 * __this, CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  p0, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.AsyncInfoToTaskBridge`1<System.VoidValueTypeParameter>::RegisterForCancellation(Windows.Foundation.IAsyncInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncInfoToTaskBridge_1_RegisterForCancellation_m15301858DFDD9573474DCCD4C3ED3F7B7E112CB4_gshared (AsyncInfoToTaskBridge_1_tFF70BDD04454A6EBC5FE97283B11BB664C836B27 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!0> System.Threading.Tasks.TaskCompletionSource`1<System.VoidValueTypeParameter>::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tC00A207FB8C25E4498366C42466B6F913AF48F5E * TaskCompletionSource_1_get_Task_m1B3F59275853FCC22B8C1E010D77B79865170D90_gshared (TaskCompletionSource_1_t58B1B163F59487E469888F92C0D132BC81B574FF * __this, const RuntimeMethod* method);

// System.Void System.ObjectDisposedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectDisposedException__ctor_m8B5D23EA08E42BDE6BC5233CC666295F19BBD2F9 (ObjectDisposedException_tF68E471ECD1419AD7C51137B742837395F50B69A * __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.Exception::SetErrorCode(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception_SetErrorCode_m742C1E687C82E56F445893685007EF4FC017F4A7 (Exception_t * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.IO.Stream::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream_Dispose_m186A8E680F2528DEDFF8F0069CC33BD813FFB1C7 (Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * __this, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6 (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7 (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m300CE4D04A068C209FD858101AC361C1B600B5AE (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * __this, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.IO.Stream System.IO.NetFxToWinRtStreamAdapter::EnsureNotDisposed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * NetFxToWinRtStreamAdapter_EnsureNotDisposed_m466B61758BD6C0C41F56B3808AE5ACD7A5FBA706 (NetFxToWinRtStreamAdapter_tD3F51448566787B72221C59C2FC89BF1A3987485 * __this, const RuntimeMethod* method);
// Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32> System.IO.StreamOperationsImplementation::ReadAsync_MemoryStream(System.IO.Stream,Windows.Storage.Streams.IBuffer,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StreamOperationsImplementation_ReadAsync_MemoryStream_mD332B977EA293A31B70F8475EAA0D270BB8FE0AB (Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___stream0, RuntimeObject* ___buffer1, uint32_t ___count2, const RuntimeMethod* method);
// Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32> System.IO.StreamOperationsImplementation::ReadAsync_AbstractStream(System.IO.Stream,Windows.Storage.Streams.IBuffer,System.UInt32,Windows.Storage.Streams.InputStreamOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StreamOperationsImplementation_ReadAsync_AbstractStream_m778BD91CC4C43AEBE54B44DE842503DE52948317 (Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___stream0, RuntimeObject* ___buffer1, uint32_t ___count2, uint32_t ___options3, const RuntimeMethod* method);
// Windows.Foundation.IAsyncOperationWithProgress`2<System.UInt32,System.UInt32> System.IO.StreamOperationsImplementation::WriteAsync_AbstractStream(System.IO.Stream,Windows.Storage.Streams.IBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StreamOperationsImplementation_WriteAsync_AbstractStream_m21017F427664FD8D13B2408E5338ED0FFD7F253C (Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___stream0, RuntimeObject* ___buffer1, const RuntimeMethod* method);
// Windows.Foundation.IAsyncOperation`1<System.Boolean> System.IO.StreamOperationsImplementation::FlushAsync_AbstractStream(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StreamOperationsImplementation_FlushAsync_AbstractStream_m9FC5EE6670A05587FD927A09D8F8F8FF8194F557 (Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___stream0, const RuntimeMethod* method);
// System.Void System.IO.StreamOperationAsyncResult::.ctor(Windows.Foundation.IAsyncInfo,System.AsyncCallback,System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamOperationAsyncResult__ctor_m1297A6A7E44BF5D57AD6CAFBC14FA870E21D9D8F (StreamOperationAsyncResult_t675AB408CDF1B11AC6F446E24352B441F6422E0F * __this, RuntimeObject* ___asyncStreamOperation0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___userCompletionCallback1, RuntimeObject * ___userAsyncStateInfo2, bool ___processCompletedOperationInCallback3, const RuntimeMethod* method);
// System.Void Windows.Foundation.AsyncOperationCompletedHandler`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void AsyncOperationCompletedHandler_1__ctor_m0807C8539F5F05DA00A3A257AFB7254C6F99EC9C (AsyncOperationCompletedHandler_1_t60A0D16C078315F375831514827E7956934AFB66 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (AsyncOperationCompletedHandler_1_t60A0D16C078315F375831514827E7956934AFB66 *, RuntimeObject *, intptr_t, const RuntimeMethod*))AsyncOperationCompletedHandler_1__ctor_m0807C8539F5F05DA00A3A257AFB7254C6F99EC9C_gshared)(__this, p0, p1, method);
}
// System.Void System.IO.StreamFlushAsyncResult::ProcessConcreteCompletedOperation(Windows.Foundation.IAsyncOperation`1<System.Boolean>,System.Int64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamFlushAsyncResult_ProcessConcreteCompletedOperation_mD81B4C15CD17D3753E3023D194165FF82FC37E50 (StreamFlushAsyncResult_t52BD92B64AE7A59F49326A470FBCD61172206E6A * __this, RuntimeObject* ___completedOperation0, int64_t* ___bytesCompleted1, const RuntimeMethod* method);
// System.Exception System.WindowsRuntimeSystemExtensions::AttachRestrictedErrorInfo(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * WindowsRuntimeSystemExtensions_AttachRestrictedErrorInfo_mF39F00CA42F45D3F2EB5B8DB5B450C55A206113C (Exception_t * ___e0, const RuntimeMethod* method);
// System.Runtime.ExceptionServices.ExceptionDispatchInfo System.IO.WinRtIOHelper::NativeExceptionToIOExceptionInfo(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExceptionDispatchInfo_t0C54083F3909DAF986A4DEAA7C047559531E0E2A * WinRtIOHelper_NativeExceptionToIOExceptionInfo_m1CA2440467C50E50B6448BBCC86B4B7DB9A394AD (Exception_t * ___nativeException0, const RuntimeMethod* method);
// System.Void System.Runtime.ExceptionServices.ExceptionDispatchInfo::Throw()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDispatchInfo_Throw_m9630C06EF8D7CDF5BD5DC76144CD98C4D9E8D26F (ExceptionDispatchInfo_t0C54083F3909DAF986A4DEAA7C047559531E0E2A * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Threading.ManualResetEvent::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetEvent__ctor_m8973D9E3C622B9602641C017A33870F51D0311E1 (ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 * __this, bool p0, const RuntimeMethod* method);
// System.Void System.Threading.WaitHandle::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitHandle_Dispose_m47D6F15A6D36EFBF147D238B794AE6436FD5159C (WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6 * __this, const RuntimeMethod* method);
// System.Threading.WaitHandle System.IO.StreamOperationAsyncResult::get_AsyncWaitHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6 * StreamOperationAsyncResult_get_AsyncWaitHandle_m77AD43084D44615B1A5B18FD41FACE99F34B715C (StreamOperationAsyncResult_t675AB408CDF1B11AC6F446E24352B441F6422E0F * __this, const RuntimeMethod* method);
// System.Boolean System.IO.StreamOperationAsyncResult::CancelStreamOperation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StreamOperationAsyncResult_CancelStreamOperation_m97B799E99AD4809761BE6A0D3E55DDEEA4DD4443 (StreamOperationAsyncResult_t675AB408CDF1B11AC6F446E24352B441F6422E0F * __this, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_m4015B7D3A44DE125C5FE34D7276CD4697C06F380 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Exception System.Runtime.ExceptionServices.ExceptionDispatchInfo::get_SourceException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * ExceptionDispatchInfo_get_SourceException_m212F50A437B8B18AFECE39F2A9F7231787F45F28 (ExceptionDispatchInfo_t0C54083F3909DAF986A4DEAA7C047559531E0E2A * __this, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706 (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mC40AA9579B996C6FBAE023590139C16304D81DC6 (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * __this, String_t* p0, Exception_t * p1, const RuntimeMethod* method);
// System.Void System.IO.StreamOperationAsyncResult::ProcessCompletedOperation_InvalidOperationThrowHelper(System.Runtime.ExceptionServices.ExceptionDispatchInfo,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamOperationAsyncResult_ProcessCompletedOperation_InvalidOperationThrowHelper_mA1ED7D2F3D5DE6F75ED044EDA456FA877548F4A7 (ExceptionDispatchInfo_t0C54083F3909DAF986A4DEAA7C047559531E0E2A * ___errInfo0, String_t* ___errMsg1, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m9C4D78DFA0979504FE31429B64A4C26DF48020D1 (String_t* __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.IO.StreamOperationAsyncResult::ThrowWithIOExceptionDispatchInfo(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamOperationAsyncResult_ThrowWithIOExceptionDispatchInfo_mB5A5574130A4DB6D1D6412D9EBDEC2BEA118C795 (StreamOperationAsyncResult_t675AB408CDF1B11AC6F446E24352B441F6422E0F * __this, Exception_t * ___e0, const RuntimeMethod* method);
// System.Void System.NullReferenceException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullReferenceException__ctor_mAD32CA6CD05808ED531D14BA18B7AA1E99B8D349 (NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC * __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.IO.StreamOperationAsyncResult::ProcessCompletedOperation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamOperationAsyncResult_ProcessCompletedOperation_mCEAD13DA8A64F3CF722EE656F850716F26F9DEFB (StreamOperationAsyncResult_t675AB408CDF1B11AC6F446E24352B441F6422E0F * __this, const RuntimeMethod* method);
// System.Runtime.ExceptionServices.ExceptionDispatchInfo System.Runtime.ExceptionServices.ExceptionDispatchInfo::Capture(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExceptionDispatchInfo_t0C54083F3909DAF986A4DEAA7C047559531E0E2A * ExceptionDispatchInfo_Capture_m8E5F721466EDFE9AA8BC532F9AE7A859E0766E23 (Exception_t * p0, const RuntimeMethod* method);
// System.Void System.Threading.Interlocked::MemoryBarrier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interlocked_MemoryBarrier_m1C58A0425F80BBD7E9811A603B4F48312BFD83FD (const RuntimeMethod* method);
// System.Boolean System.Threading.EventWaitHandle::Set()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventWaitHandle_Set_m7959A86A39735296FC949EC86FDA42A6CFAAB94C (EventWaitHandle_t7603BF1D3D30FE42DD07A450C8D09E2684DC4D98 * __this, const RuntimeMethod* method);
// System.Void System.AsyncCallback::Invoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncCallback_Invoke_m1830E56CD41BDD255C144AA16A9426EEE301617C (AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// Windows.Storage.Streams.IBuffer System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions::GetWindowsRuntimeBuffer(System.IO.MemoryStream,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WindowsRuntimeBufferExtensions_GetWindowsRuntimeBuffer_m3F14338C22A85130806184FA004EA1E0868AC147 (MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * ___underlyingStream0, int32_t ___positionInStream1, int32_t ___length2, const RuntimeMethod* method);
// Windows.Foundation.IAsyncOperationWithProgress`2<TResult,TProgress> System.Runtime.InteropServices.WindowsRuntime.AsyncInfo::CreateCompletedOperation<Windows.Storage.Streams.IBuffer,System.UInt32>(TResult)
inline RuntimeObject* AsyncInfo_CreateCompletedOperation_TisIBuffer_t13BCDB1D6DE32F79AB9F9E149514026CA6B4AAEF_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_m4BBBA45332D7BF768A73731B47BD0157505415D7 (RuntimeObject* ___synchronousResult0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))AsyncInfo_CreateCompletedOperation_TisRuntimeObject_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_m8D02605E48AFCD41068E91DB43E292FAB90B2D65_gshared)(___synchronousResult0, method);
}
// Windows.Foundation.IAsyncOperationWithProgress`2<TResult,TProgress> System.Runtime.InteropServices.WindowsRuntime.AsyncInfo::CreateFaultedOperation<Windows.Storage.Streams.IBuffer,System.UInt32>(System.Exception)
inline RuntimeObject* AsyncInfo_CreateFaultedOperation_TisIBuffer_t13BCDB1D6DE32F79AB9F9E149514026CA6B4AAEF_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_m34BD41652A8DE822B2D096EF80B99E894E760FED (Exception_t * ___error0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Exception_t *, const RuntimeMethod*))AsyncInfo_CreateFaultedOperation_TisRuntimeObject_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_m2D15316659D35CEE75C15B4E36B1C383679EB1F7_gshared)(___error0, method);
}
// System.Void System.IO.StreamOperationsImplementation/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_m3F1B229C6A9B7ADAA910766D1243B532076D313D (U3CU3Ec__DisplayClass1_0_t9B61E42C5DA9BB4B29626074CC9C84D1012DF563 * __this, const RuntimeMethod* method);
// System.UInt32 System.Math::Min(System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Math_Min_mD7CBC84B8943F900245120DABABF771D701A1655 (uint32_t p0, uint32_t p1, const RuntimeMethod* method);
// Windows.Storage.Streams.IBuffer System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::Create(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WindowsRuntimeBuffer_Create_mE44C1ABEE68D89B3BBF4899C90EB6FBC8FE5101F (int32_t ___capacity0, const RuntimeMethod* method);
// System.Void System.Func`3<System.Threading.CancellationToken,System.IProgress`1<System.UInt32>,System.Threading.Tasks.Task`1<Windows.Storage.Streams.IBuffer>>::.ctor(System.Object,System.IntPtr)
inline void Func_3__ctor_m55C79006B4906B0377A4440C3F4B828A743C1A6F (Func_3_t10591BE50BF875E1CE2515E7AAE2A31E3D110A49 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Func_3_t10591BE50BF875E1CE2515E7AAE2A31E3D110A49 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_3__ctor_m9A52400E36ED807F69BD2DAA97B0F77CD397B10C_gshared)(__this, p0, p1, method);
}
// Windows.Foundation.IAsyncOperationWithProgress`2<TResult,TProgress> System.Runtime.InteropServices.WindowsRuntime.AsyncInfo::Run<Windows.Storage.Streams.IBuffer,System.UInt32>(System.Func`3<System.Threading.CancellationToken,System.IProgress`1<TProgress>,System.Threading.Tasks.Task`1<TResult>>)
inline RuntimeObject* AsyncInfo_Run_TisIBuffer_t13BCDB1D6DE32F79AB9F9E149514026CA6B4AAEF_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_m3AD268CB4DAC7A0084F1CBC76525A7E6FF4CFE54 (Func_3_t10591BE50BF875E1CE2515E7AAE2A31E3D110A49 * ___taskProvider0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Func_3_t10591BE50BF875E1CE2515E7AAE2A31E3D110A49 *, const RuntimeMethod*))AsyncInfo_Run_TisRuntimeObject_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_mAB13563D9FD809F0E89CBB6AEA5DBF25211F3464_gshared)(___taskProvider0, method);
}
// System.Void System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_mFDAE4C079FE8B880EF7687062561C35FC65BA223 (U3CU3Ec__DisplayClass2_0_tF7A26B09867A566BC9F7FE9AF41DD97CF7DD9C14 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions::TryGetUnderlyingData(Windows.Storage.Streams.IBuffer,System.Byte[]&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsRuntimeBufferExtensions_TryGetUnderlyingData_m4FDB38F7DC5B4E354B3D043A73E6CC55D47C2F02 (RuntimeObject* ___buffer0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** ___underlyingDataArray1, int32_t* ___underlyingDataArrayStartOffset2, const RuntimeMethod* method);
// System.Void System.Func`3<System.Threading.CancellationToken,System.IProgress`1<System.UInt32>,System.Threading.Tasks.Task`1<System.UInt32>>::.ctor(System.Object,System.IntPtr)
inline void Func_3__ctor_m3C72D49DA993114739E2A1DBF5E0112FB24AF119 (Func_3_tA53508562A6317892513AEFC0328405DBBD51375 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Func_3_tA53508562A6317892513AEFC0328405DBBD51375 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_3__ctor_m9A52400E36ED807F69BD2DAA97B0F77CD397B10C_gshared)(__this, p0, p1, method);
}
// Windows.Foundation.IAsyncOperationWithProgress`2<TResult,TProgress> System.Runtime.InteropServices.WindowsRuntime.AsyncInfo::Run<System.UInt32,System.UInt32>(System.Func`3<System.Threading.CancellationToken,System.IProgress`1<TProgress>,System.Threading.Tasks.Task`1<TResult>>)
inline RuntimeObject* AsyncInfo_Run_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_mB060DC01F0DE191B5057E0DDACF3A3ABCBDF2FBE (Func_3_tA53508562A6317892513AEFC0328405DBBD51375 * ___taskProvider0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Func_3_tA53508562A6317892513AEFC0328405DBBD51375 *, const RuntimeMethod*))AsyncInfo_Run_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_mB060DC01F0DE191B5057E0DDACF3A3ABCBDF2FBE_gshared)(___taskProvider0, method);
}
// System.Void System.IO.StreamOperationsImplementation/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_m1F36BD3249B8808F4F2A5707250834193E6FDC67 (U3CU3Ec__DisplayClass3_0_t38CB4DCBE909850E7FF45FA79C292F5EFC11B339 * __this, const RuntimeMethod* method);
// System.Void System.Func`2<System.Threading.CancellationToken,System.Threading.Tasks.Task`1<System.Boolean>>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m29051657C83E90759D06A6805A5F6B3DAB1FAE43 (Func_2_tBAECAB30BE1F21ACC73D0A7C4ACB219CA858CABD * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tBAECAB30BE1F21ACC73D0A7C4ACB219CA858CABD *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mD54D4E199C5B1CBAC175755A6C40E51D22AFC171_gshared)(__this, p0, p1, method);
}
// Windows.Foundation.IAsyncOperation`1<TResult> System.Runtime.InteropServices.WindowsRuntime.AsyncInfo::Run<System.Boolean>(System.Func`2<System.Threading.CancellationToken,System.Threading.Tasks.Task`1<TResult>>)
inline RuntimeObject* AsyncInfo_Run_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_m8F84AC2AB21D2BF30640B0719BB41FAE13177195 (Func_2_tBAECAB30BE1F21ACC73D0A7C4ACB219CA858CABD * ___taskProvider0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Func_2_tBAECAB30BE1F21ACC73D0A7C4ACB219CA858CABD *, const RuntimeMethod*))AsyncInfo_Run_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_m8F84AC2AB21D2BF30640B0719BB41FAE13177195_gshared)(___taskProvider0, method);
}
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Windows.Storage.Streams.IBuffer>::Create()
inline AsyncTaskMethodBuilder_1_tFC83304E06E318479094E86E267206CBFA9E1423  AsyncTaskMethodBuilder_1_Create_mCF6DDD6F426AE0A5B0C59A7147E4FE08FE463F8A (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_tFC83304E06E318479094E86E267206CBFA9E1423  (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_mC7806A5C115ED2239A5073313AA3564D8244156E_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Windows.Storage.Streams.IBuffer>::Start<System.IO.StreamOperationsImplementation/<>c__DisplayClass1_0/<<ReadAsync_AbstractStream>b__0>d>(!!0&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_tD986623175A57F547465B50AED2AC7B903115FD7_m526004CDBB786CD58BCFB32169C0C2CB82250E98 (AsyncTaskMethodBuilder_1_tFC83304E06E318479094E86E267206CBFA9E1423 * __this, U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_tD986623175A57F547465B50AED2AC7B903115FD7 * p0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tFC83304E06E318479094E86E267206CBFA9E1423 *, U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_tD986623175A57F547465B50AED2AC7B903115FD7 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_tD986623175A57F547465B50AED2AC7B903115FD7_m75489CE9E69350487176ACF7FF6596B4FCC19449_gshared)(__this, p0, method);
}
// System.Threading.Tasks.Task`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Windows.Storage.Streams.IBuffer>::get_Task()
inline Task_1_t84A3E8ADA0C56D0776B0FCEBCEA98E253DB4385C * AsyncTaskMethodBuilder_1_get_Task_m6483744D75093B4167F14A0F978411B9FA29214D (AsyncTaskMethodBuilder_1_tFC83304E06E318479094E86E267206CBFA9E1423 * __this, const RuntimeMethod* method)
{
	return ((  Task_1_t84A3E8ADA0C56D0776B0FCEBCEA98E253DB4385C * (*) (AsyncTaskMethodBuilder_1_tFC83304E06E318479094E86E267206CBFA9E1423 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_m19C5664D70C4FC799BEFB8D0FC98E687F97059FA_gshared)(__this, method);
}
// System.Boolean System.Threading.CancellationToken::get_IsCancellationRequested()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CancellationToken_get_IsCancellationRequested_mCF3521778F20F7048B7121885794B9562324447D (CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<!0> System.Threading.Tasks.Task`1<System.Int32>::ConfigureAwait(System.Boolean)
inline ConfiguredTaskAwaitable_1_t10E65A50D6EC08956E9F550CD64330F4DED0D38A  Task_1_ConfigureAwait_m88DF0C431456B72CA5CF2534AE96969FDB86F982 (Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87 * __this, bool p0, const RuntimeMethod* method)
{
	return ((  ConfiguredTaskAwaitable_1_t10E65A50D6EC08956E9F550CD64330F4DED0D38A  (*) (Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87 *, bool, const RuntimeMethod*))Task_1_ConfigureAwait_m88DF0C431456B72CA5CF2534AE96969FDB86F982_gshared)(__this, p0, method);
}
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<!0> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Int32>::GetAwaiter()
inline ConfiguredTaskAwaiter_t18D0589F789FFE82A30A223888FB7C5BED32C63E  ConfiguredTaskAwaitable_1_GetAwaiter_m10B0B84F72A27E623BD94882380E582459F8B8DE (ConfiguredTaskAwaitable_1_t10E65A50D6EC08956E9F550CD64330F4DED0D38A * __this, const RuntimeMethod* method)
{
	return ((  ConfiguredTaskAwaiter_t18D0589F789FFE82A30A223888FB7C5BED32C63E  (*) (ConfiguredTaskAwaitable_1_t10E65A50D6EC08956E9F550CD64330F4DED0D38A *, const RuntimeMethod*))ConfiguredTaskAwaitable_1_GetAwaiter_m10B0B84F72A27E623BD94882380E582459F8B8DE_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Int32>::get_IsCompleted()
inline bool ConfiguredTaskAwaiter_get_IsCompleted_mCBD6C3EF024E1D7C538268F338BD0C4BA712FA92 (ConfiguredTaskAwaiter_t18D0589F789FFE82A30A223888FB7C5BED32C63E * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (ConfiguredTaskAwaiter_t18D0589F789FFE82A30A223888FB7C5BED32C63E *, const RuntimeMethod*))ConfiguredTaskAwaiter_get_IsCompleted_mCBD6C3EF024E1D7C538268F338BD0C4BA712FA92_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Windows.Storage.Streams.IBuffer>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Int32>,System.IO.StreamOperationsImplementation/<>c__DisplayClass1_0/<<ReadAsync_AbstractStream>b__0>d>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t18D0589F789FFE82A30A223888FB7C5BED32C63E_TisU3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_tD986623175A57F547465B50AED2AC7B903115FD7_mDA09C9E512AF36506F0CBC85775A4FB17F906D37 (AsyncTaskMethodBuilder_1_tFC83304E06E318479094E86E267206CBFA9E1423 * __this, ConfiguredTaskAwaiter_t18D0589F789FFE82A30A223888FB7C5BED32C63E * p0, U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_tD986623175A57F547465B50AED2AC7B903115FD7 * p1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tFC83304E06E318479094E86E267206CBFA9E1423 *, ConfiguredTaskAwaiter_t18D0589F789FFE82A30A223888FB7C5BED32C63E *, U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_tD986623175A57F547465B50AED2AC7B903115FD7 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t18D0589F789FFE82A30A223888FB7C5BED32C63E_TisU3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_tD986623175A57F547465B50AED2AC7B903115FD7_m859FAB168BE1ABFB465BAB7C94632A4641753ED9_gshared)(__this, p0, p1, method);
}
// !0 System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Int32>::GetResult()
inline int32_t ConfiguredTaskAwaiter_GetResult_m05FB789E6901C9496B94A722DF99239A979A2623 (ConfiguredTaskAwaiter_t18D0589F789FFE82A30A223888FB7C5BED32C63E * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ConfiguredTaskAwaiter_t18D0589F789FFE82A30A223888FB7C5BED32C63E *, const RuntimeMethod*))ConfiguredTaskAwaiter_GetResult_m05FB789E6901C9496B94A722DF99239A979A2623_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Windows.Storage.Streams.IBuffer>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_m3ED63AEBB9A3BC66582F32FD3FC1B66F48CF679B (AsyncTaskMethodBuilder_1_tFC83304E06E318479094E86E267206CBFA9E1423 * __this, Exception_t * p0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tFC83304E06E318479094E86E267206CBFA9E1423 *, Exception_t *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_m4C0B5462ECCB520FACA3C90B353DF596DAAF586D_gshared)(__this, p0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Windows.Storage.Streams.IBuffer>::SetResult(!0)
inline void AsyncTaskMethodBuilder_1_SetResult_mE8D89333A763D06C5B5BE336A729D897A24DD9C6 (AsyncTaskMethodBuilder_1_tFC83304E06E318479094E86E267206CBFA9E1423 * __this, RuntimeObject* p0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tFC83304E06E318479094E86E267206CBFA9E1423 *, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_mD7DA7A17DC0610B11A0AAA364C3CA51FEC1271DB_gshared)(__this, p0, method);
}
// System.Void System.IO.StreamOperationsImplementation/<>c__DisplayClass1_0/<<ReadAsync_AbstractStream>b__0>d::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_MoveNext_m71F1405BAE4A1E1B2D5FF6D4AC425053EEB34FC9 (U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_tD986623175A57F547465B50AED2AC7B903115FD7 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Windows.Storage.Streams.IBuffer>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m34089C89A112F9460E7981F551DE769C72289246 (AsyncTaskMethodBuilder_1_tFC83304E06E318479094E86E267206CBFA9E1423 * __this, RuntimeObject* p0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tFC83304E06E318479094E86E267206CBFA9E1423 *, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m5CC21A02320CF3D2DD7894A31123DFD82A428E4C_gshared)(__this, p0, method);
}
// System.Void System.IO.StreamOperationsImplementation/<>c__DisplayClass1_0/<<ReadAsync_AbstractStream>b__0>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_SetStateMachine_mAB18BD9CD69ADDCFBE2B48E4ABB35872BAE54483 (U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_tD986623175A57F547465B50AED2AC7B903115FD7 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.UInt32>::Create()
inline AsyncTaskMethodBuilder_1_tD386300660CF74FF8FB22C6C3C937BBA9F7E8DED  AsyncTaskMethodBuilder_1_Create_mFA0E603D8EEE094438B0465D1E57747E2E12FC70 (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_tD386300660CF74FF8FB22C6C3C937BBA9F7E8DED  (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_mFA0E603D8EEE094438B0465D1E57747E2E12FC70_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.UInt32>::Start<System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__0>d>(!!0&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_tC5B27594871B0D4D6540AEF8F8175C68ECB1F243_mF6393D5F03E579671815F1DA96BB1D7780BB7835 (AsyncTaskMethodBuilder_1_tD386300660CF74FF8FB22C6C3C937BBA9F7E8DED * __this, U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_tC5B27594871B0D4D6540AEF8F8175C68ECB1F243 * p0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tD386300660CF74FF8FB22C6C3C937BBA9F7E8DED *, U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_tC5B27594871B0D4D6540AEF8F8175C68ECB1F243 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_tC5B27594871B0D4D6540AEF8F8175C68ECB1F243_mF6393D5F03E579671815F1DA96BB1D7780BB7835_gshared)(__this, p0, method);
}
// System.Threading.Tasks.Task`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.UInt32>::get_Task()
inline Task_1_tB8C8430765AEE1D5F24261F5BAD009C22AC7872F * AsyncTaskMethodBuilder_1_get_Task_m157191133E216D7561AD02E894BCA819FD5F98FF (AsyncTaskMethodBuilder_1_tD386300660CF74FF8FB22C6C3C937BBA9F7E8DED * __this, const RuntimeMethod* method)
{
	return ((  Task_1_tB8C8430765AEE1D5F24261F5BAD009C22AC7872F * (*) (AsyncTaskMethodBuilder_1_tD386300660CF74FF8FB22C6C3C937BBA9F7E8DED *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_m157191133E216D7561AD02E894BCA819FD5F98FF_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.UInt32>::Start<System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__1>d>(!!0&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_tE07FA298A0F1283378FE03DCD280D757C505C510_m0F53440B958A7F25B8826E8D3A50547C34076FF0 (AsyncTaskMethodBuilder_1_tD386300660CF74FF8FB22C6C3C937BBA9F7E8DED * __this, U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_tE07FA298A0F1283378FE03DCD280D757C505C510 * p0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tD386300660CF74FF8FB22C6C3C937BBA9F7E8DED *, U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_tE07FA298A0F1283378FE03DCD280D757C505C510 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_tE07FA298A0F1283378FE03DCD280D757C505C510_m0F53440B958A7F25B8826E8D3A50547C34076FF0_gshared)(__this, p0, method);
}
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable System.Threading.Tasks.Task::ConfigureAwait(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfiguredTaskAwaitable_t24DE1415466EE20060BE5AD528DC5C812CFA53A9  Task_ConfigureAwait_m2FB91172F9031B0CC520D9D09B658ACC5FD6CE02 (Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * __this, bool p0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter System.Runtime.CompilerServices.ConfiguredTaskAwaitable::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874  ConfiguredTaskAwaitable_GetAwaiter_m1EF40F198D32924E2D0F41E20B99CADBF5DDD303 (ConfiguredTaskAwaitable_t24DE1415466EE20060BE5AD528DC5C812CFA53A9 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConfiguredTaskAwaiter_get_IsCompleted_mDD0292137E15882AF385AE9D2FB1C8B0BEE89BDD (ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.UInt32>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter,System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__0>d>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874_TisU3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_tC5B27594871B0D4D6540AEF8F8175C68ECB1F243_m6A90BC625CF91D31293276B6DA5D5D6A05C80E23 (AsyncTaskMethodBuilder_1_tD386300660CF74FF8FB22C6C3C937BBA9F7E8DED * __this, ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874 * p0, U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_tC5B27594871B0D4D6540AEF8F8175C68ECB1F243 * p1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tD386300660CF74FF8FB22C6C3C937BBA9F7E8DED *, ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874 *, U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_tC5B27594871B0D4D6540AEF8F8175C68ECB1F243 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874_TisU3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_tC5B27594871B0D4D6540AEF8F8175C68ECB1F243_m6A90BC625CF91D31293276B6DA5D5D6A05C80E23_gshared)(__this, p0, p1, method);
}
// System.Void System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfiguredTaskAwaiter_GetResult_m7DFE5EAFB3C1F70B40948EFF46E9B13F1E260062 (ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.UInt32>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_m4BCFE40068BC66F1C48B5C7C7C9F93F5E48EF00B (AsyncTaskMethodBuilder_1_tD386300660CF74FF8FB22C6C3C937BBA9F7E8DED * __this, Exception_t * p0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tD386300660CF74FF8FB22C6C3C937BBA9F7E8DED *, Exception_t *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_m4BCFE40068BC66F1C48B5C7C7C9F93F5E48EF00B_gshared)(__this, p0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.UInt32>::SetResult(!0)
inline void AsyncTaskMethodBuilder_1_SetResult_m887E134B6FD52D8CA2116A466F69BC8E1EA6ED5E (AsyncTaskMethodBuilder_1_tD386300660CF74FF8FB22C6C3C937BBA9F7E8DED * __this, uint32_t p0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tD386300660CF74FF8FB22C6C3C937BBA9F7E8DED *, uint32_t, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m887E134B6FD52D8CA2116A466F69BC8E1EA6ED5E_gshared)(__this, p0, method);
}
// System.Void System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__0>d::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_MoveNext_mE88D6EDC8FF01BB4B7832CA4FD9F063AE5CDCD4D (U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_tC5B27594871B0D4D6540AEF8F8175C68ECB1F243 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.UInt32>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m2C2B09AB812EDEDAB3C9E89B8A2BF19C4EC8B45F (AsyncTaskMethodBuilder_1_tD386300660CF74FF8FB22C6C3C937BBA9F7E8DED * __this, RuntimeObject* p0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tD386300660CF74FF8FB22C6C3C937BBA9F7E8DED *, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m2C2B09AB812EDEDAB3C9E89B8A2BF19C4EC8B45F_gshared)(__this, p0, method);
}
// System.Void System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__0>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_SetStateMachine_m2A079EF5348EE858F047D58EEA127EAFB2F2BF1B (U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_tC5B27594871B0D4D6540AEF8F8175C68ECB1F243 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.IO.Stream System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions::AsStream(Windows.Storage.Streams.IBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * WindowsRuntimeBufferExtensions_AsStream_mB5E2DF21974CD23F3A864422B0DC0FB844BF3691 (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.UInt32>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter,System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__1>d>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874_TisU3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_tE07FA298A0F1283378FE03DCD280D757C505C510_m012F5C73E480F7D4C555E2CD5ABE0D3B896DBF64 (AsyncTaskMethodBuilder_1_tD386300660CF74FF8FB22C6C3C937BBA9F7E8DED * __this, ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874 * p0, U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_tE07FA298A0F1283378FE03DCD280D757C505C510 * p1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tD386300660CF74FF8FB22C6C3C937BBA9F7E8DED *, ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874 *, U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_tE07FA298A0F1283378FE03DCD280D757C505C510 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874_TisU3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_tE07FA298A0F1283378FE03DCD280D757C505C510_m012F5C73E480F7D4C555E2CD5ABE0D3B896DBF64_gshared)(__this, p0, p1, method);
}
// System.Void System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__1>d::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_MoveNext_mD3C1D72E476D85F6143C00F1DE1D449EAA690E26 (U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_tE07FA298A0F1283378FE03DCD280D757C505C510 * __this, const RuntimeMethod* method);
// System.Void System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__1>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_SetStateMachine_mCE60114066AA2B6050E71DD82848D3DDBEACB3F5 (U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_tE07FA298A0F1283378FE03DCD280D757C505C510 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::Create()
inline AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE  AsyncTaskMethodBuilder_1_Create_mEB49F32EAEB3E6C469F3A1194FBC34CD1D91CBBF (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE  (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_mEB49F32EAEB3E6C469F3A1194FBC34CD1D91CBBF_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::Start<System.IO.StreamOperationsImplementation/<>c__DisplayClass3_0/<<FlushAsync_AbstractStream>b__0>d>(!!0&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t33297D8BAD10F1F6FA496D0DC2B75DFCFFF6936D_m4FD800D60A2E430DCAE817F4E3965A528B83FD8D (AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * __this, U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t33297D8BAD10F1F6FA496D0DC2B75DFCFFF6936D * p0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE *, U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t33297D8BAD10F1F6FA496D0DC2B75DFCFFF6936D *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t33297D8BAD10F1F6FA496D0DC2B75DFCFFF6936D_m4FD800D60A2E430DCAE817F4E3965A528B83FD8D_gshared)(__this, p0, method);
}
// System.Threading.Tasks.Task`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::get_Task()
inline Task_1_tD6131FE3A3A2F1D58DB886B6CF31A2672B75B439 * AsyncTaskMethodBuilder_1_get_Task_mE71F3C1D2587BE90812781280F0175E9CE14BA66 (AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * __this, const RuntimeMethod* method)
{
	return ((  Task_1_tD6131FE3A3A2F1D58DB886B6CF31A2672B75B439 * (*) (AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_mE71F3C1D2587BE90812781280F0175E9CE14BA66_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter,System.IO.StreamOperationsImplementation/<>c__DisplayClass3_0/<<FlushAsync_AbstractStream>b__0>d>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874_TisU3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t33297D8BAD10F1F6FA496D0DC2B75DFCFFF6936D_m2AA05CF867293C40A7E0C8F297A600CD09FAFCF7 (AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * __this, ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874 * p0, U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t33297D8BAD10F1F6FA496D0DC2B75DFCFFF6936D * p1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE *, ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874 *, U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t33297D8BAD10F1F6FA496D0DC2B75DFCFFF6936D *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874_TisU3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t33297D8BAD10F1F6FA496D0DC2B75DFCFFF6936D_m2AA05CF867293C40A7E0C8F297A600CD09FAFCF7_gshared)(__this, p0, p1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_m21285A09F0A9D6C0F245EB498300064F66DAAF18 (AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * __this, Exception_t * p0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE *, Exception_t *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_m21285A09F0A9D6C0F245EB498300064F66DAAF18_gshared)(__this, p0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetResult(!0)
inline void AsyncTaskMethodBuilder_1_SetResult_mCF07BE7A4F16080B49751FF5A4159E2ADDAC723F (AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * __this, bool p0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE *, bool, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_mCF07BE7A4F16080B49751FF5A4159E2ADDAC723F_gshared)(__this, p0, method);
}
// System.Void System.IO.StreamOperationsImplementation/<>c__DisplayClass3_0/<<FlushAsync_AbstractStream>b__0>d::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_MoveNext_m543F90A39823888C932491D4018A559436C08EBE (U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t33297D8BAD10F1F6FA496D0DC2B75DFCFFF6936D * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m6C16FFAECC8CE76F82289A87141A9524F5B09C60 (AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * __this, RuntimeObject* p0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE *, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m6C16FFAECC8CE76F82289A87141A9524F5B09C60_gshared)(__this, p0, method);
}
// System.Void System.IO.StreamOperationsImplementation/<>c__DisplayClass3_0/<<FlushAsync_AbstractStream>b__0>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_SetStateMachine_m6ECBDD41F0403D71AF9534B0E63161865104118F (U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t33297D8BAD10F1F6FA496D0DC2B75DFCFFF6936D * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>::.ctor(System.Object,System.IntPtr)
inline void AsyncOperationWithProgressCompletedHandler_2__ctor_mC9AB4C28FB905E212B935E1C3E8834011ED4D0B9 (AsyncOperationWithProgressCompletedHandler_2_tF04CE0C0951B83CB6BD82DC4376B10B01A3B1CE6 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (AsyncOperationWithProgressCompletedHandler_2_tF04CE0C0951B83CB6BD82DC4376B10B01A3B1CE6 *, RuntimeObject *, intptr_t, const RuntimeMethod*))AsyncOperationWithProgressCompletedHandler_2__ctor_mBC870D4299D9476FE2CCC4B932777F216C2554FD_gshared)(__this, p0, p1, method);
}
// System.Void System.IO.StreamReadAsyncResult::ProcessConcreteCompletedOperation(Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32>,System.Int64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamReadAsyncResult_ProcessConcreteCompletedOperation_mF0CBA3E175E98A2581B71286C8A3261D4EF3A482 (StreamReadAsyncResult_t897354343EA051942262510D5B3DE4B408B3E048 * __this, RuntimeObject* ___completedOperation0, int64_t* ___bytesCompleted1, const RuntimeMethod* method);
// System.Void System.IO.WinRtIOHelper::EnsureResultsInUserBuffer(Windows.Storage.Streams.IBuffer,Windows.Storage.Streams.IBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinRtIOHelper_EnsureResultsInUserBuffer_m24B0C6BDACD1A06D7FBB9EC91361DA5137E34FB1 (RuntimeObject* ___userBuffer0, RuntimeObject* ___resultBuffer1, const RuntimeMethod* method);
// System.Void Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.UInt32,System.UInt32>::.ctor(System.Object,System.IntPtr)
inline void AsyncOperationWithProgressCompletedHandler_2__ctor_m96C27552CFBCABAAE91832CF8C52B7BCBE419603 (AsyncOperationWithProgressCompletedHandler_2_tF449555B6EE977A7635D662ED0C1D414CC60792B * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (AsyncOperationWithProgressCompletedHandler_2_tF449555B6EE977A7635D662ED0C1D414CC60792B *, RuntimeObject *, intptr_t, const RuntimeMethod*))AsyncOperationWithProgressCompletedHandler_2__ctor_m96C27552CFBCABAAE91832CF8C52B7BCBE419603_gshared)(__this, p0, p1, method);
}
// System.Void System.IO.StreamWriteAsyncResult::ProcessConcreteCompletedOperation(Windows.Foundation.IAsyncOperationWithProgress`2<System.UInt32,System.UInt32>,System.Int64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamWriteAsyncResult_ProcessConcreteCompletedOperation_m46753CC71BFD4F752E35B693E9AF7258D36FF829 (StreamWriteAsyncResult_t4A2F6C2119D655E60142F74DD7687412F81F9A2B * __this, RuntimeObject* ___completedOperation0, int64_t* ___bytesCompleted1, const RuntimeMethod* method);
// System.Type System.Exception::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Exception_GetType_mA3390B9D538D5FAC3802D9D8A2FCAC31465130F3 (Exception_t * __this, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6 (RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  p0, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrWhiteSpace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrWhiteSpace_m62102CA65546AE151DC8254B72110F4AA48E2135 (String_t* p0, const RuntimeMethod* method);
// System.Void System.IO.IOException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOException__ctor_m37262C706BEB979358ABEFEA9F9F253E8773D2B7 (IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA * __this, String_t* p0, Exception_t * p1, const RuntimeMethod* method);
// System.Boolean System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions::IsSameData(Windows.Storage.Streams.IBuffer,Windows.Storage.Streams.IBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsRuntimeBufferExtensions_IsSameData_m11E5D0B5671D2C8852413DD894003B6CE2CC6260 (RuntimeObject* ___buffer0, RuntimeObject* ___otherBuffer1, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions::CopyTo(Windows.Storage.Streams.IBuffer,Windows.Storage.Streams.IBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBufferExtensions_CopyTo_m6EAD61B4D602858DC439F92678DA5EEDFA560136 (RuntimeObject* ___source0, RuntimeObject* ___destination1, const RuntimeMethod* method);
// System.Void System.IO.WinRtToNetFxStreamAdapter::.ctor(System.Object,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinRtToNetFxStreamAdapter__ctor_m32DFDE65034486518FEF279121FF1BCEF328FCDF (WinRtToNetFxStreamAdapter_t5DF3E266765C62B1F96383772091E1E54DD48397 * __this, RuntimeObject * ___winRtStream0, bool ___canRead1, bool ___canWrite2, bool ___canSeek3, const RuntimeMethod* method);
// System.Void System.IO.Stream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream__ctor_m58342D6FD95230C6BA1058E5698AB4BAF0A4DBF5 (Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mD023A89A5C1F740F43F0A9CD6C49DC21230B3CEE (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.IO.Stream::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream_Dispose_mC0F23B2D31DC853B12A10F0233173A278FF21B05 (Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * __this, bool p0, const RuntimeMethod* method);
// TWinRtStream System.IO.WinRtToNetFxStreamAdapter::EnsureNotDisposed<Windows.Storage.Streams.IRandomAccessStream>()
inline RuntimeObject* WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIRandomAccessStream_tF45B1A1FE1DC95209EC2F32A0134C4BCDD756E10_mE5EE512F0D38F38E3D777E1ED265896D6949F8A2 (WinRtToNetFxStreamAdapter_t5DF3E266765C62B1F96383772091E1E54DD48397 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (WinRtToNetFxStreamAdapter_t5DF3E266765C62B1F96383772091E1E54DD48397 *, const RuntimeMethod*))WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisRuntimeObject_mF08CDC251A308816DA16F7BFC89892B62F9226B8_gshared)(__this, method);
}
// System.Void System.IO.IOException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOException__ctor_mB64DEFB376AA8E279A647A3770F913B20EF65175 (IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA * __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m26DC3463C6F3C98BF33EA39598DD2B32F0249CA8 (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * __this, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void System.IO.WinRtToNetFxStreamAdapter::EnsureCanWrite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinRtToNetFxStreamAdapter_EnsureCanWrite_mC94E5B0115A84E45BED38ECE64E5D6A84F19873C (WinRtToNetFxStreamAdapter_t5DF3E266765C62B1F96383772091E1E54DD48397 * __this, const RuntimeMethod* method);
// TWinRtStream System.IO.WinRtToNetFxStreamAdapter::EnsureNotDisposed<Windows.Storage.Streams.IInputStream>()
inline RuntimeObject* WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIInputStream_tE16D3C1553F5E6BAC4E7E8D7DE411ADD049B1B13_m1D884805AFF82A522F0A70539E6E880A3F5D0384 (WinRtToNetFxStreamAdapter_t5DF3E266765C62B1F96383772091E1E54DD48397 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (WinRtToNetFxStreamAdapter_t5DF3E266765C62B1F96383772091E1E54DD48397 *, const RuntimeMethod*))WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisRuntimeObject_mF08CDC251A308816DA16F7BFC89892B62F9226B8_gshared)(__this, method);
}
// System.Void System.IO.WinRtToNetFxStreamAdapter::EnsureCanRead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinRtToNetFxStreamAdapter_EnsureCanRead_m47456E779147FE03374BC5272A195835BDCF8434 (WinRtToNetFxStreamAdapter_t5DF3E266765C62B1F96383772091E1E54DD48397 * __this, const RuntimeMethod* method);
// Windows.Storage.Streams.IBuffer System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions::AsBuffer(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WindowsRuntimeBufferExtensions_AsBuffer_m8A7ECFC4D04B98BD389D03A8478CBCC14427650F (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___source0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method);
// System.Void System.IO.StreamReadAsyncResult::.ctor(Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32>,Windows.Storage.Streams.IBuffer,System.AsyncCallback,System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamReadAsyncResult__ctor_m1037B23E12C21BA0F4C92D48C76DA3EECD4435F0 (StreamReadAsyncResult_t897354343EA051942262510D5B3DE4B408B3E048 * __this, RuntimeObject* ___asyncStreamReadOperation0, RuntimeObject* ___buffer1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___userCompletionCallback2, RuntimeObject * ___userAsyncStateInfo3, bool ___processCompletedOperationInCallback4, const RuntimeMethod* method);
// System.Void System.IO.WinRtToNetFxStreamAdapter::EnsureNotDisposed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinRtToNetFxStreamAdapter_EnsureNotDisposed_mF8858E644BF5B6A230329F688972B99A0F624150 (WinRtToNetFxStreamAdapter_t5DF3E266765C62B1F96383772091E1E54DD48397 * __this, const RuntimeMethod* method);
// System.Void System.IO.StreamOperationAsyncResult::Wait()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamOperationAsyncResult_Wait_m7E111C3451B661E20090E85DF665934453D1403E (StreamOperationAsyncResult_t675AB408CDF1B11AC6F446E24352B441F6422E0F * __this, const RuntimeMethod* method);
// System.Boolean System.IO.StreamOperationAsyncResult::get_ProcessCompletedOperationInCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StreamOperationAsyncResult_get_ProcessCompletedOperationInCallback_mAEBF8906F074143BECE20D7233B58FBE7F89D08D (StreamOperationAsyncResult_t675AB408CDF1B11AC6F446E24352B441F6422E0F * __this, const RuntimeMethod* method);
// System.Boolean System.IO.StreamOperationAsyncResult::get_HasError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StreamOperationAsyncResult_get_HasError_m51A52788DC3613F241D5A0D17CB8EBFDA5E05F8D (StreamOperationAsyncResult_t675AB408CDF1B11AC6F446E24352B441F6422E0F * __this, const RuntimeMethod* method);
// System.Void System.IO.StreamOperationAsyncResult::CloseStreamOperation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamOperationAsyncResult_CloseStreamOperation_mD2F52A21BFD94DC2A34E260CA631BBDA3CC6721A (StreamOperationAsyncResult_t675AB408CDF1B11AC6F446E24352B441F6422E0F * __this, const RuntimeMethod* method);
// System.Void System.IO.StreamOperationAsyncResult::ThrowCachedError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamOperationAsyncResult_ThrowCachedError_m4E9122EE3CD20858BB4570D95912EF3A48038D3A (StreamOperationAsyncResult_t675AB408CDF1B11AC6F446E24352B441F6422E0F * __this, const RuntimeMethod* method);
// System.Int64 System.IO.StreamOperationAsyncResult::get_BytesCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t StreamOperationAsyncResult_get_BytesCompleted_m9874C092BA3E62466B1A0AA4DC6564962571D8B4 (StreamOperationAsyncResult_t675AB408CDF1B11AC6F446E24352B441F6422E0F * __this, const RuntimeMethod* method);
// System.Void System.Threading.CancellationToken::ThrowIfCancellationRequested()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationToken_ThrowIfCancellationRequested_m13AB667F961F83D8ED759BA402325638F43B0938 (CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB * __this, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<System.Int32> System.IO.WinRtToNetFxStreamAdapter::ReadAsyncInternal(System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87 * WinRtToNetFxStreamAdapter_ReadAsyncInternal_m808223D75DD1A59959A6B9F14F623CC50050B593 (WinRtToNetFxStreamAdapter_t5DF3E266765C62B1F96383772091E1E54DD48397 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer0, int32_t ___offset1, int32_t ___count2, CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  ___cancellationToken3, const RuntimeMethod* method);
// System.IAsyncResult System.IO.WinRtToNetFxStreamAdapter::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WinRtToNetFxStreamAdapter_BeginRead_mC32A604951DD11227CCFCAF1E5F121CB57FE1A68 (WinRtToNetFxStreamAdapter_t5DF3E266765C62B1F96383772091E1E54DD48397 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer0, int32_t ___offset1, int32_t ___count2, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback3, RuntimeObject * ___state4, bool ___usedByBlockingWrapper5, const RuntimeMethod* method);
// System.Byte[] System.IO.WinRtToNetFxStreamAdapter::get_OneByteBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* WinRtToNetFxStreamAdapter_get_OneByteBuffer_mBD6829138522F26FED20CEF828A3048B910B016D (WinRtToNetFxStreamAdapter_t5DF3E266765C62B1F96383772091E1E54DD48397 * __this, const RuntimeMethod* method);
// System.IAsyncResult System.IO.WinRtToNetFxStreamAdapter::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WinRtToNetFxStreamAdapter_BeginWrite_mD4A1A86E30CA5CE6BC6BEFABF3A11F42B1021916 (WinRtToNetFxStreamAdapter_t5DF3E266765C62B1F96383772091E1E54DD48397 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer0, int32_t ___offset1, int32_t ___count2, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback3, RuntimeObject * ___state4, bool ___usedByBlockingWrapper5, const RuntimeMethod* method);
// TWinRtStream System.IO.WinRtToNetFxStreamAdapter::EnsureNotDisposed<Windows.Storage.Streams.IOutputStream>()
inline RuntimeObject* WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIOutputStream_t0BFFD9F35BD49DAF121DEB9BECC544772AF35C6B_mBD26486F2545F104BBAB7AD5F27776B5ED315F8A (WinRtToNetFxStreamAdapter_t5DF3E266765C62B1F96383772091E1E54DD48397 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (WinRtToNetFxStreamAdapter_t5DF3E266765C62B1F96383772091E1E54DD48397 *, const RuntimeMethod*))WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisRuntimeObject_mF08CDC251A308816DA16F7BFC89892B62F9226B8_gshared)(__this, method);
}
// System.Void System.IO.StreamWriteAsyncResult::.ctor(Windows.Foundation.IAsyncOperationWithProgress`2<System.UInt32,System.UInt32>,System.AsyncCallback,System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamWriteAsyncResult__ctor_m3948E7124A04878E7BCAAFCEBCB0B079BA6B6908 (StreamWriteAsyncResult_t4A2F6C2119D655E60142F74DD7687412F81F9A2B * __this, RuntimeObject* ___asyncStreamWriteOperation0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___userCompletionCallback1, RuntimeObject * ___userAsyncStateInfo2, bool ___processCompletedOperationInCallback3, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<TResult> System.WindowsRuntimeSystemExtensions::AsTask<System.UInt32,System.UInt32>(Windows.Foundation.IAsyncOperationWithProgress`2<TResult,TProgress>,System.Threading.CancellationToken)
inline Task_1_tB8C8430765AEE1D5F24261F5BAD009C22AC7872F * WindowsRuntimeSystemExtensions_AsTask_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_m2B704B1F08F199445D3A99B454B3E9BE75A5FFE0 (RuntimeObject* ___source0, CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  ___cancellationToken1, const RuntimeMethod* method)
{
	return ((  Task_1_tB8C8430765AEE1D5F24261F5BAD009C22AC7872F * (*) (RuntimeObject*, CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB , const RuntimeMethod*))WindowsRuntimeSystemExtensions_AsTask_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_m2B704B1F08F199445D3A99B454B3E9BE75A5FFE0_gshared)(___source0, ___cancellationToken1, method);
}
// System.Void System.IO.StreamFlushAsyncResult::.ctor(Windows.Foundation.IAsyncOperation`1<System.Boolean>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamFlushAsyncResult__ctor_mB90A83C265CA4BFC9EEFC5A0CFE76A2DFF0A13D8 (StreamFlushAsyncResult_t52BD92B64AE7A59F49326A470FBCD61172206E6A * __this, RuntimeObject* ___asyncStreamFlushOperation0, bool ___processCompletedOperationInCallback1, const RuntimeMethod* method);
// System.Threading.Tasks.Task System.Threading.Tasks.Task::get_CompletedTask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * Task_get_CompletedTask_mBB0764E7FDE04E900FFBE5B1BE6B815193681E86 (const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<TResult> System.WindowsRuntimeSystemExtensions::AsTask<System.Boolean>(Windows.Foundation.IAsyncOperation`1<TResult>,System.Threading.CancellationToken)
inline Task_1_tD6131FE3A3A2F1D58DB886B6CF31A2672B75B439 * WindowsRuntimeSystemExtensions_AsTask_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_m46E828D5A0C87D1B9B5892F0722AD984B428AE4A (RuntimeObject* ___source0, CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  ___cancellationToken1, const RuntimeMethod* method)
{
	return ((  Task_1_tD6131FE3A3A2F1D58DB886B6CF31A2672B75B439 * (*) (RuntimeObject*, CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB , const RuntimeMethod*))WindowsRuntimeSystemExtensions_AsTask_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_m46E828D5A0C87D1B9B5892F0722AD984B428AE4A_gshared)(___source0, ___cancellationToken1, method);
}
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32>::Create()
inline AsyncTaskMethodBuilder_1_t822D24686214CB8B967C66DA507CD66A5C853079  AsyncTaskMethodBuilder_1_Create_mB155504875E2454883E034E847877A9DEA85E318 (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_t822D24686214CB8B967C66DA507CD66A5C853079  (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_mB155504875E2454883E034E847877A9DEA85E318_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32>::Start<System.IO.WinRtToNetFxStreamAdapter/<ReadAsyncInternal>d__43>(!!0&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CReadAsyncInternalU3Ed__43_tD4B002D0FA17B3DBF89A3C6C93A5DE0DE0A78308_m0E020F3B06CE3E60416AEFE4439B21482B69FB8D (AsyncTaskMethodBuilder_1_t822D24686214CB8B967C66DA507CD66A5C853079 * __this, U3CReadAsyncInternalU3Ed__43_tD4B002D0FA17B3DBF89A3C6C93A5DE0DE0A78308 * p0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t822D24686214CB8B967C66DA507CD66A5C853079 *, U3CReadAsyncInternalU3Ed__43_tD4B002D0FA17B3DBF89A3C6C93A5DE0DE0A78308 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CReadAsyncInternalU3Ed__43_tD4B002D0FA17B3DBF89A3C6C93A5DE0DE0A78308_m0E020F3B06CE3E60416AEFE4439B21482B69FB8D_gshared)(__this, p0, method);
}
// System.Threading.Tasks.Task`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32>::get_Task()
inline Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87 * AsyncTaskMethodBuilder_1_get_Task_m939AAFF5841821CC09C627DCDEB2DFD5B933DFC2 (AsyncTaskMethodBuilder_1_t822D24686214CB8B967C66DA507CD66A5C853079 * __this, const RuntimeMethod* method)
{
	return ((  Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87 * (*) (AsyncTaskMethodBuilder_1_t822D24686214CB8B967C66DA507CD66A5C853079 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_m939AAFF5841821CC09C627DCDEB2DFD5B933DFC2_gshared)(__this, method);
}
// System.Threading.Tasks.Task`1<TResult> System.WindowsRuntimeSystemExtensions::AsTask<Windows.Storage.Streams.IBuffer,System.UInt32>(Windows.Foundation.IAsyncOperationWithProgress`2<TResult,TProgress>,System.Threading.CancellationToken)
inline Task_1_t84A3E8ADA0C56D0776B0FCEBCEA98E253DB4385C * WindowsRuntimeSystemExtensions_AsTask_TisIBuffer_t13BCDB1D6DE32F79AB9F9E149514026CA6B4AAEF_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_mD56E35DB9823FDDCE9DF131A09A088D6D8085F49 (RuntimeObject* ___source0, CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  ___cancellationToken1, const RuntimeMethod* method)
{
	return ((  Task_1_t84A3E8ADA0C56D0776B0FCEBCEA98E253DB4385C * (*) (RuntimeObject*, CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB , const RuntimeMethod*))WindowsRuntimeSystemExtensions_AsTask_TisRuntimeObject_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_m0B789C0841ACE15620820CA18F6090E041D65958_gshared)(___source0, ___cancellationToken1, method);
}
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<!0> System.Threading.Tasks.Task`1<Windows.Storage.Streams.IBuffer>::ConfigureAwait(System.Boolean)
inline ConfiguredTaskAwaitable_1_t68A1326495296F7020FAFDD4974E2E0E1BBC9244  Task_1_ConfigureAwait_m5B90AE151869448AA06D236EC66E66FDA7149345 (Task_1_t84A3E8ADA0C56D0776B0FCEBCEA98E253DB4385C * __this, bool p0, const RuntimeMethod* method)
{
	return ((  ConfiguredTaskAwaitable_1_t68A1326495296F7020FAFDD4974E2E0E1BBC9244  (*) (Task_1_t84A3E8ADA0C56D0776B0FCEBCEA98E253DB4385C *, bool, const RuntimeMethod*))Task_1_ConfigureAwait_m60DD864D9488EACBA6C087E87E448797C1C8B76B_gshared)(__this, p0, method);
}
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<!0> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<Windows.Storage.Streams.IBuffer>::GetAwaiter()
inline ConfiguredTaskAwaiter_t24BCF0C8B4E4A7F263C9F2AFCC9528025F667E77  ConfiguredTaskAwaitable_1_GetAwaiter_mF233FB8E021BBCB43F03D9B10FDCB32FA67FAE7A (ConfiguredTaskAwaitable_1_t68A1326495296F7020FAFDD4974E2E0E1BBC9244 * __this, const RuntimeMethod* method)
{
	return ((  ConfiguredTaskAwaiter_t24BCF0C8B4E4A7F263C9F2AFCC9528025F667E77  (*) (ConfiguredTaskAwaitable_1_t68A1326495296F7020FAFDD4974E2E0E1BBC9244 *, const RuntimeMethod*))ConfiguredTaskAwaitable_1_GetAwaiter_m86C543D72022CB5D0C43053C4AF5F37EA4E690A7_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<Windows.Storage.Streams.IBuffer>::get_IsCompleted()
inline bool ConfiguredTaskAwaiter_get_IsCompleted_m9FC73A84D3836AE90DE75FB2D785BEA90A7CF508 (ConfiguredTaskAwaiter_t24BCF0C8B4E4A7F263C9F2AFCC9528025F667E77 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (ConfiguredTaskAwaiter_t24BCF0C8B4E4A7F263C9F2AFCC9528025F667E77 *, const RuntimeMethod*))ConfiguredTaskAwaiter_get_IsCompleted_mA1F08104B225C8640528B38BFD0AAAEE84541586_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<Windows.Storage.Streams.IBuffer>,System.IO.WinRtToNetFxStreamAdapter/<ReadAsyncInternal>d__43>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t24BCF0C8B4E4A7F263C9F2AFCC9528025F667E77_TisU3CReadAsyncInternalU3Ed__43_tD4B002D0FA17B3DBF89A3C6C93A5DE0DE0A78308_m5BE2194AB8A2A0C0FBE40F00282C4CD332D1729C (AsyncTaskMethodBuilder_1_t822D24686214CB8B967C66DA507CD66A5C853079 * __this, ConfiguredTaskAwaiter_t24BCF0C8B4E4A7F263C9F2AFCC9528025F667E77 * p0, U3CReadAsyncInternalU3Ed__43_tD4B002D0FA17B3DBF89A3C6C93A5DE0DE0A78308 * p1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t822D24686214CB8B967C66DA507CD66A5C853079 *, ConfiguredTaskAwaiter_t24BCF0C8B4E4A7F263C9F2AFCC9528025F667E77 *, U3CReadAsyncInternalU3Ed__43_tD4B002D0FA17B3DBF89A3C6C93A5DE0DE0A78308 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tFB3C4197768C6CF02BE088F703AA6E46D703D46E_TisU3CReadAsyncInternalU3Ed__43_tD4B002D0FA17B3DBF89A3C6C93A5DE0DE0A78308_mC110859C66627F85FB77F3ED2222F4D08670955E_gshared)(__this, p0, p1, method);
}
// !0 System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<Windows.Storage.Streams.IBuffer>::GetResult()
inline RuntimeObject* ConfiguredTaskAwaiter_GetResult_m4C300DC98B92A2E8F698BB925618055536D84B43 (ConfiguredTaskAwaiter_t24BCF0C8B4E4A7F263C9F2AFCC9528025F667E77 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ConfiguredTaskAwaiter_t24BCF0C8B4E4A7F263C9F2AFCC9528025F667E77 *, const RuntimeMethod*))ConfiguredTaskAwaiter_GetResult_m4EE5BF4F8536CCC951CA3F4E3C494411AE2D507E_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_mC6242DDCD4119CD73267E4B9888FF3474D795821 (AsyncTaskMethodBuilder_1_t822D24686214CB8B967C66DA507CD66A5C853079 * __this, Exception_t * p0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t822D24686214CB8B967C66DA507CD66A5C853079 *, Exception_t *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_mC6242DDCD4119CD73267E4B9888FF3474D795821_gshared)(__this, p0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32>::SetResult(!0)
inline void AsyncTaskMethodBuilder_1_SetResult_mAFB12C1766B74D412E293BA7AB711615A14C2230 (AsyncTaskMethodBuilder_1_t822D24686214CB8B967C66DA507CD66A5C853079 * __this, int32_t p0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t822D24686214CB8B967C66DA507CD66A5C853079 *, int32_t, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_mAFB12C1766B74D412E293BA7AB711615A14C2230_gshared)(__this, p0, method);
}
// System.Void System.IO.WinRtToNetFxStreamAdapter/<ReadAsyncInternal>d__43::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReadAsyncInternalU3Ed__43_MoveNext_mB0715FAA82A73010EFAC342878C9B52220943AEA (U3CReadAsyncInternalU3Ed__43_tD4B002D0FA17B3DBF89A3C6C93A5DE0DE0A78308 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_mADB2F2ED219BD69EC85F7516C62FB23F840BB877 (AsyncTaskMethodBuilder_1_t822D24686214CB8B967C66DA507CD66A5C853079 * __this, RuntimeObject* p0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t822D24686214CB8B967C66DA507CD66A5C853079 *, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_mADB2F2ED219BD69EC85F7516C62FB23F840BB877_gshared)(__this, p0, method);
}
// System.Void System.IO.WinRtToNetFxStreamAdapter/<ReadAsyncInternal>d__43::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReadAsyncInternalU3Ed__43_SetStateMachine_m1A8819589C373A620E6A76D362FB02B94CBF5E19 (U3CReadAsyncInternalU3Ed__43_tD4B002D0FA17B3DBF89A3C6C93A5DE0DE0A78308 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Int32 System.IO.BufferedStream::get_BufferSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BufferedStream_get_BufferSize_m3064CD5FB9E0AB2D13499B5EBE9AB314139036ED (BufferedStream_tA4070368D71992D14E131A8230BAA273A71A0CE9 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF4626905368D6558695A823466A1AF65EADB9923 (String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method);
// System.IO.Stream System.IO.WindowsRuntimeStreamExtensions::AsStreamInternal(System.Object,System.Int32,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * WindowsRuntimeStreamExtensions_AsStreamInternal_m74F95A24B8F32CA25CFEB7B0C142EB3CE87652B4 (RuntimeObject * ___windowsRuntimeStream0, int32_t ___bufferSize1, String_t* ___invokedMethodName2, bool ___forceBufferSize3, const RuntimeMethod* method);
// System.IO.Stream System.IO.NetFxToWinRtStreamAdapter::GetManagedStream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * NetFxToWinRtStreamAdapter_GetManagedStream_mB451C96867BF33079637611923FD66B147ABC668 (NetFxToWinRtStreamAdapter_tD3F51448566787B72221C59C2FC89BF1A3987485 * __this, const RuntimeMethod* method);
// System.Void System.ObjectDisposedException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectDisposedException__ctor_m303CFD09E4B541C36C60AE7B7CBC8B1B7EED66DC (ObjectDisposedException_tF68E471ECD1419AD7C51137B742837395F50B69A * __this, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.IO.Stream>::TryGetValue(!0,!1&)
inline bool ConditionalWeakTable_2_TryGetValue_m9AEE82B601427812996482E5F9AA431AEF088D40 (ConditionalWeakTable_2_tB9E14FC9F1A4E05AD5EB57785FA2CE688D31D2D1 * __this, RuntimeObject * p0, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** p1, const RuntimeMethod* method)
{
	return ((  bool (*) (ConditionalWeakTable_2_tB9E14FC9F1A4E05AD5EB57785FA2CE688D31D2D1 *, RuntimeObject *, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 **, const RuntimeMethod*))ConditionalWeakTable_2_TryGetValue_m281BFEF9AF914D26E08E1DE24C8A88D3CA8D557D_gshared)(__this, p0, p1, method);
}
// System.Void System.IO.WindowsRuntimeStreamExtensions::EnsureAdapterBufferSize(System.IO.Stream,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeStreamExtensions_EnsureAdapterBufferSize_m6507CF9C4E53D85596F7E39A221BE248CA06CB6E (Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___adapter0, int32_t ___requiredBufferSize1, String_t* ___methodName2, const RuntimeMethod* method);
// System.IO.Stream System.IO.WindowsRuntimeStreamExtensions::AsStreamInternalFactoryHelper(System.Object,System.Int32,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * WindowsRuntimeStreamExtensions_AsStreamInternalFactoryHelper_mFE2CE486791EE8D4492D53EDD64BAF930250778E (RuntimeObject * ___windowsRuntimeStream0, int32_t ___bufferSize1, String_t* ___invokedMethodName2, bool ___forceBufferSize3, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.ConditionalWeakTable`2/CreateValueCallback<System.Object,System.IO.Stream>::.ctor(System.Object,System.IntPtr)
inline void CreateValueCallback__ctor_m6F285B29502E61253A32187195968C317A608F06 (CreateValueCallback_tB3A24270F8E2AC16575A1201853CAE071E560E5F * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (CreateValueCallback_tB3A24270F8E2AC16575A1201853CAE071E560E5F *, RuntimeObject *, intptr_t, const RuntimeMethod*))CreateValueCallback__ctor_m0C8279CA67355F638D6C7A3AAFFFA9CEA2570AB1_gshared)(__this, p0, p1, method);
}
// !1 System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.IO.Stream>::GetValue(!0,System.Runtime.CompilerServices.ConditionalWeakTable`2/CreateValueCallback<!0,!1>)
inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ConditionalWeakTable_2_GetValue_mA59C58BABE481F361C721F5013E57CD9093CA4AC (ConditionalWeakTable_2_tB9E14FC9F1A4E05AD5EB57785FA2CE688D31D2D1 * __this, RuntimeObject * p0, CreateValueCallback_tB3A24270F8E2AC16575A1201853CAE071E560E5F * p1, const RuntimeMethod* method)
{
	return ((  Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * (*) (ConditionalWeakTable_2_tB9E14FC9F1A4E05AD5EB57785FA2CE688D31D2D1 *, RuntimeObject *, CreateValueCallback_tB3A24270F8E2AC16575A1201853CAE071E560E5F *, const RuntimeMethod*))ConditionalWeakTable_2_GetValue_m838D9EF0BF4891909CA39673B6057E0E913AB829_gshared)(__this, p0, p1, method);
}
// System.Void System.IO.WindowsRuntimeStreamExtensions/<>c__DisplayClass12_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0__ctor_mCB82215D6FC7791483AC9C42E7487E1C19A3CF00 (U3CU3Ec__DisplayClass12_0_t2B7F2A65F291CBC86E58650B3B7F0250618BB1EA * __this, const RuntimeMethod* method);
// System.IO.Stream System.IO.WindowsRuntimeStreamExtensions::WinRtToNetFxAdapterMap_GetValue(System.Object,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * WindowsRuntimeStreamExtensions_WinRtToNetFxAdapterMap_GetValue_m5048E8F721D5BC6AA46B31B8BF638373569A96EE (RuntimeObject * ___winRtStream0, int32_t ___bufferSize1, const RuntimeMethod* method);
// System.IO.Stream System.IO.WindowsRuntimeStreamExtensions::WinRtToNetFxAdapterMap_GetValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * WindowsRuntimeStreamExtensions_WinRtToNetFxAdapterMap_GetValue_m5B24DC84F0AB904CA8679AB5852AA66D6B25C625 (RuntimeObject * ___winRtStream0, const RuntimeMethod* method);
// System.IO.Stream System.IO.BufferedStream::get_UnderlyingStream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * BufferedStream_get_UnderlyingStream_m152A6783AC56FA30D6DECC193F889E46E09D7A9B (BufferedStream_tA4070368D71992D14E131A8230BAA273A71A0CE9 * __this, const RuntimeMethod* method);
// System.Void System.IO.WinRtToNetFxStreamAdapter::SetWonInitializationRace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinRtToNetFxStreamAdapter_SetWonInitializationRace_m3A170BF60C8D57B6B1DB37B39A767B6DDD43B023 (WinRtToNetFxStreamAdapter_t5DF3E266765C62B1F96383772091E1E54DD48397 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.IO.Stream>::.ctor()
inline void ConditionalWeakTable_2__ctor_mB323587022A6BE4AC796E5FE55A8793AC025CD19 (ConditionalWeakTable_2_tB9E14FC9F1A4E05AD5EB57785FA2CE688D31D2D1 * __this, const RuntimeMethod* method)
{
	((  void (*) (ConditionalWeakTable_2_tB9E14FC9F1A4E05AD5EB57785FA2CE688D31D2D1 *, const RuntimeMethod*))ConditionalWeakTable_2__ctor_m1BF7C98CA314D99CE58778C0C661D5F1628B6563_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.ConditionalWeakTable`2<System.IO.Stream,System.IO.NetFxToWinRtStreamAdapter>::.ctor()
inline void ConditionalWeakTable_2__ctor_m268322A19324E19F6526491B300F3B02ADE3535F (ConditionalWeakTable_2_tFE3F49537A7EF477176850178016C4512DA2731C * __this, const RuntimeMethod* method)
{
	((  void (*) (ConditionalWeakTable_2_tFE3F49537A7EF477176850178016C4512DA2731C *, const RuntimeMethod*))ConditionalWeakTable_2__ctor_m1BF7C98CA314D99CE58778C0C661D5F1628B6563_gshared)(__this, method);
}
// System.Void System.IO.WindowsRuntimeStreamExtensions/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mBE6F6EA3D1B4DFDD3CCC63AC4059A840F81B73E6 (U3CU3Ec_tCF7C165934A47FEBA482A40AF7181C4ABE09CF4E * __this, const RuntimeMethod* method);
// System.IO.WinRtToNetFxStreamAdapter System.IO.WinRtToNetFxStreamAdapter::Create(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WinRtToNetFxStreamAdapter_t5DF3E266765C62B1F96383772091E1E54DD48397 * WinRtToNetFxStreamAdapter_Create_mCCF171C3466E68BBBF31CBB0C98C3F282F5A5B45 (RuntimeObject * ___windowsRuntimeStream0, const RuntimeMethod* method);
// System.Void System.IO.BufferedStream::.ctor(System.IO.Stream,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferedStream__ctor_mC5DA0BE7CFE2F9D41AAE238C4B64FD9A9C7765F8 (BufferedStream_tA4070368D71992D14E131A8230BAA273A71A0CE9 * __this, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * p0, int32_t p1, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer__ctor_m647E546ED9196E78CF024F9D126E689F068F0CEA (WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22 * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Int32 System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::RoGetBufferMarshaler(System.Runtime.InteropServices.IMarshal&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WindowsRuntimeBuffer_RoGetBufferMarshaler_m92635310D29611651BA2CEAE7078C4D60657EEAF (RuntimeObject** ___bufferMarshalerPtr0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A (String_t* p0, RuntimeObject * p1, RuntimeObject * p2, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0 (Exception_t * __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.NotImplementedException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_m3EA4CBB9A00BC498783C5EDA61DC26E3FF20314C (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * __this, String_t* p0, Exception_t * p1, const RuntimeMethod* method);
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object,System.Runtime.InteropServices.GCHandleType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  GCHandle_Alloc_m30DAF14F75E3A692C594965CE6724E2454DE9A2E (RuntimeObject * p0, int32_t p1, const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.GCHandle::AddrOfPinnedObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GCHandle_AddrOfPinnedObject_mA20090CB8274F28D087A6E8AD36D3230B6741EA5 (GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 * __this, const RuntimeMethod* method);
// System.IntPtr System.IntPtr::op_Addition(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Addition_mD815D6B36C7DFA1F89481720D3D46A6484BB9644 (intptr_t p0, int32_t p1, const RuntimeMethod* method);
// System.IntPtr System.Threading.Interlocked::CompareExchange(System.IntPtr&,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Interlocked_CompareExchange_m0A02B16A9B99B35E70831EF919482BDFCE046D7A (intptr_t* p0, intptr_t p1, intptr_t p2, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934 (intptr_t p0, intptr_t p1, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.GCHandle::Free()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GCHandle_Free_m392ECC9B1058E35A0FD5CF21A65F212873FC26F0 (GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.InteropServices.GCHandle::get_IsAllocated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GCHandle_get_IsAllocated_m91323BCB568B1150F90515EF862B00F193E77808 (GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 * __this, const RuntimeMethod* method);
// System.Void* System.IntPtr::op_Explicit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_mB8A512095BCE1A23B2840310C8A27C928ADAD027 (intptr_t p0, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61 (intptr_t p0, intptr_t p1, const RuntimeMethod* method);
// System.Byte* System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::PinUnderlyingData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* WindowsRuntimeBuffer_PinUnderlyingData_mD31E1965F0ABF312675E6F3AEA70C773C4CA057B (WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22 * __this, const RuntimeMethod* method);
// System.Void System.IntPtr::.ctor(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntPtr__ctor_m6360250F4B87C6AE2F0389DA0DEE1983EED73FB6 (intptr_t* __this, void* p0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::EnsureHasMarshalProxy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer_EnsureHasMarshalProxy_m8EA99F1848DDC7E830545DC80A8C53983B3E0879 (const RuntimeMethod* method);
// Windows.Storage.Streams.IBuffer System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions::AsBuffer(System.Byte[],System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WindowsRuntimeBufferExtensions_AsBuffer_m44E577DC4024FAA0BB691593F68FBD5A972CE870 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___source0, int32_t ___offset1, int32_t ___length2, int32_t ___capacity3, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::.ctor(System.Byte[],System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer__ctor_m057CF397F8500BB4BE049EF15809461062E5DC00 (WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___data0, int32_t ___offset1, int32_t ___length2, int32_t ___capacity3, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions::CopyTo(Windows.Storage.Streams.IBuffer,System.UInt32,Windows.Storage.Streams.IBuffer,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBufferExtensions_CopyTo_m79A250A6B56898E32F6F8697DFE3A60FDE66B19B (RuntimeObject* ___source0, uint32_t ___sourceIndex1, RuntimeObject* ___destination2, uint32_t ___destinationIndex3, uint32_t ___count4, const RuntimeMethod* method);
// System.Void System.Buffer::BlockCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_BlockCopy_m1F882D595976063718AF6E405664FC761924D353 (RuntimeArray * p0, int32_t p1, RuntimeArray * p2, int32_t p3, int32_t p4, const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions::GetPointerAtOffset(Windows.Storage.Streams.IBuffer,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t WindowsRuntimeBufferExtensions_GetPointerAtOffset_m6C3741A634A9E5B437B80B297CBC3F0027C0A8A5 (RuntimeObject* ___buffer0, uint32_t ___offset1, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.Byte[],System.Int32,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_Copy_m0486DFF229946F0F9E6A04DDDF3BC9E5F1609A5A (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* p0, int32_t p1, intptr_t p2, int32_t p3, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_Copy_m64744D9E23AFC00AA06CD6B057E19B7C0CE4C0C2 (intptr_t p0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* p1, int32_t p2, int32_t p3, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions::MemCopy(System.IntPtr,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBufferExtensions_MemCopy_m3835D54F66AEC471C41534C69772989315F78927 (intptr_t ___src0, intptr_t ___dst1, uint32_t ___count2, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::GetUnderlyingData(System.Byte[]&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer_GetUnderlyingData_mBCC3F8E7DAC3D16C7D5DB7F363F02F451FD67D0D (WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** ___underlyingDataArray0, int32_t* ___underlyingDataArrayStartOffset1, const RuntimeMethod* method);
// System.Void System.UnauthorizedAccessException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnauthorizedAccessException__ctor_mFE97E700E2ADBC5A46A6A43642CFA2FCB8C0BA85 (UnauthorizedAccessException_tC2210A745BFDD3AE3559A87A4219E2945EEC9F75 * __this, String_t* p0, const RuntimeMethod* method);
// System.Int32 System.ArraySegment`1<System.Byte>::get_Offset()
inline int32_t ArraySegment_1_get_Offset_m6651443913CC50A02AE5D7C4CDC6F6744D39B483 (ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA *, const RuntimeMethod*))ArraySegment_1_get_Offset_m6651443913CC50A02AE5D7C4CDC6F6744D39B483_gshared)(__this, method);
}
// System.Int32 System.Math::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_mC950438198519FB2B0260FCB91220847EE4BB525 (int32_t p0, int32_t p1, const RuntimeMethod* method);
// System.Int32 System.Math::Max(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Max_mA99E48BB021F2E4B62D4EA9F52EA6928EED618A2 (int32_t p0, int32_t p1, const RuntimeMethod* method);
// !0[] System.ArraySegment`1<System.Byte>::get_Array()
inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ArraySegment_1_get_Array_m41D93EFB7EAB3081C0A27ED9891E7177F5F361B7 (ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA * __this, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* (*) (ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA *, const RuntimeMethod*))ArraySegment_1_get_Array_m41D93EFB7EAB3081C0A27ED9891E7177F5F361B7_gshared)(__this, method);
}
// System.Void System.IO.MemoryStream::.ctor(System.Byte[],System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_mD4746B0911B4445240F7E82818DA380B506E97EA (MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* p0, int32_t p1, int32_t p2, bool p3, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions/WindowsRuntimeBufferUnmanagedMemoryStream::.ctor(Windows.Storage.Streams.IBuffer,System.Byte*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBufferUnmanagedMemoryStream__ctor_m28B44E02160B58BD85CA8596463059C4C0975347 (WindowsRuntimeBufferUnmanagedMemoryStream_t1DC0F5C0CC488E863931D7C6F1DF68ADB95DA625 * __this, RuntimeObject* ___sourceBuffer0, uint8_t* ___dataPtr1, const RuntimeMethod* method);
// System.Void System.IO.UnmanagedMemoryStream::.ctor(System.Byte*,System.Int64,System.Int64,System.IO.FileAccess)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnmanagedMemoryStream__ctor_mC84B1D4CF2D52722A4B3600392FA5AE584B2C799 (UnmanagedMemoryStream_tB2905D85030C9C1E831E3EB02AD7E5B1B1A5FE4E * __this, uint8_t* p0, int64_t p1, int64_t p2, int32_t p3, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5 (RuntimeObject * p0, bool* p1, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2 (RuntimeObject * p0, const RuntimeMethod* method);
// System.UInt32 System.Threading.Tasks.AsyncInfoIdGenerator::CreateNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t AsyncInfoIdGenerator_CreateNext_mD4F9BEA5E88D2BD92E0CF0B7112A612B3E06285E (const RuntimeMethod* method);
// System.Int32 System.Threading.Interlocked::CompareExchange(System.Int32&,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_CompareExchange_mD830160E95D6C589AD31EE9DC8D19BD4A8DCDC03 (int32_t* p0, int32_t p1, int32_t p2, const RuntimeMethod* method);
// System.Void System.Random::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random__ctor_mDD202982FB7CEDE3F31824E919AD2BFA6D66BA27 (Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Threading.SendOrPostCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SendOrPostCallback__ctor_mA3A6885EC5474314128A4FDE77E93F8B7EEC2619 (SendOrPostCallback_t3F9C0164860E4AA5138DF8B4488DFB0D33147F01 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.ExceptionDispatchHelper::ThrowAsync(System.Exception,System.Threading.SynchronizationContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDispatchHelper_ThrowAsync_m2F6A6A11D813192180D84E5EDEEF6A5411729253 (Exception_t * ___exception0, SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7 * ___targetContext1, const RuntimeMethod* method);
// System.Void System.Threading.SynchronizationContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SynchronizationContext__ctor_mC7C5F426C3450ACA409B5FE89E961EB8E5047512 (SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.ExceptionDispatchHelper/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mD4CB97B8F69D13F5E101436076591307254C7C3D (U3CU3Ec_t91FD53796C718A16C4B6E8D317F8FE03125A2DA8 * __this, const RuntimeMethod* method);
// TResult System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncActionCompletedHandler,System.VoidReferenceTypeParameter,System.VoidValueTypeParameter,System.VoidValueTypeParameter>::GetResultsInternal()
inline VoidValueTypeParameter_t4218889FC907F3892F775433493F080BD1A41CAA  TaskToAsyncInfoAdapter_4_GetResultsInternal_mF43000DAD4E9558371BBAE8BA101B0AACA1CC91E (TaskToAsyncInfoAdapter_4_t6939D2A566A48D499669B8B0865212D2FB4A22BF * __this, const RuntimeMethod* method)
{
	return ((  VoidValueTypeParameter_t4218889FC907F3892F775433493F080BD1A41CAA  (*) (TaskToAsyncInfoAdapter_4_t6939D2A566A48D499669B8B0865212D2FB4A22BF *, const RuntimeMethod*))TaskToAsyncInfoAdapter_4_GetResultsInternal_mBF7D2CE18369609722053397E88496835BECAC8C_gshared)(__this, method);
}
// System.Void Windows.Foundation.AsyncActionCompletedHandler::Invoke(Windows.Foundation.IAsyncAction,Windows.Foundation.AsyncStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncActionCompletedHandler_Invoke_m90ED997977A5C94AE5F5CB92A629FE2EDFA3D466 (AsyncActionCompletedHandler_t1820A7A20AA2CF935463CD8EB21800005EFE488D * __this, RuntimeObject* p0, int32_t p1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mAFC7442D9D3CEC6701C3C5599F8CF12476095510 (Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mAFC7442D9D3CEC6701C3C5599F8CF12476095510_gshared)(__this, p0, p1, method);
}
// System.Threading.CancellationTokenRegistration System.Threading.CancellationToken::Register(System.Action`1<System.Object>,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2  CancellationToken_Register_mA4F60EC40A8B9EB0239341CE450F6BE2CEFA8931 (CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB * __this, Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Threading.Tasks.Task,System.Object>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m58B3F295A5FFFD735D3E3C72214C7CF4476317E5 (Action_2_tC5CBC473593FC52892A3A27575658B0C050584D8 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tC5CBC473593FC52892A3A27575658B0C050584D8 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_mB83B0C1C61CED5B54803D334FFC7187881D32EFB_gshared)(__this, p0, p1, method);
}
// System.Threading.CancellationToken System.Threading.CancellationToken::get_None()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  CancellationToken_get_None_m008D4CF5E11172703A6D781A3C30E6E537004F1D (const RuntimeMethod* method);
// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskScheduler::get_Default()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * TaskScheduler_get_Default_mC3794A546EB0F4C6D0A11E72F8939EC364733C87 (const RuntimeMethod* method);
// System.Threading.Tasks.Task System.Threading.Tasks.Task::ContinueWith(System.Action`2<System.Threading.Tasks.Task,System.Object>,System.Object,System.Threading.CancellationToken,System.Threading.Tasks.TaskContinuationOptions,System.Threading.Tasks.TaskScheduler)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * Task_ContinueWith_m77623659683CA3E09520D79D60D8A04214E4CE5A (Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * __this, Action_2_tC5CBC473593FC52892A3A27575658B0C050584D8 * p0, RuntimeObject * p1, CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  p2, int32_t p3, TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * p4, const RuntimeMethod* method);
// System.Threading.Tasks.Task System.WindowsRuntimeSystemExtensions::AsTask(Windows.Foundation.IAsyncAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * WindowsRuntimeSystemExtensions_AsTask_m5D87CC8E008C9C3A4DC66F6BD108691CF8119ED1 (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter System.Threading.Tasks.Task::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  Task_GetAwaiter_m73027D5E4C16E961C658B83526BED8E32FD2AC6C (Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * __this, const RuntimeMethod* method);
// System.Threading.Tasks.Task System.WindowsRuntimeSystemExtensions::AsTask(Windows.Foundation.IAsyncAction,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * WindowsRuntimeSystemExtensions_AsTask_m72AC4CCE64FA5914EF4CC7826C969C80BC5CCC3D (RuntimeObject* ___source0, CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  ___cancellationToken1, const RuntimeMethod* method);
// System.Boolean System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncActionCompletedHandler,System.VoidReferenceTypeParameter,System.VoidValueTypeParameter,System.VoidValueTypeParameter>::get_CompletedSynchronously()
inline bool TaskToAsyncInfoAdapter_4_get_CompletedSynchronously_mC67FCE18ECC4CB0A3E87766A7EBD5AA5B155406B (TaskToAsyncInfoAdapter_4_t6939D2A566A48D499669B8B0865212D2FB4A22BF * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskToAsyncInfoAdapter_4_t6939D2A566A48D499669B8B0865212D2FB4A22BF *, const RuntimeMethod*))TaskToAsyncInfoAdapter_4_get_CompletedSynchronously_m1ED1A32AEDB768B25DB552FC59276375B5A1E7D0_gshared)(__this, method);
}
// System.Threading.Tasks.Task System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncActionCompletedHandler,System.VoidReferenceTypeParameter,System.VoidValueTypeParameter,System.VoidValueTypeParameter>::get_Task()
inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * TaskToAsyncInfoAdapter_4_get_Task_mC4F1D9CF70B7D90F5E5E5FC6B9A16895D6CE5053 (TaskToAsyncInfoAdapter_4_t6939D2A566A48D499669B8B0865212D2FB4A22BF * __this, const RuntimeMethod* method)
{
	return ((  Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * (*) (TaskToAsyncInfoAdapter_4_t6939D2A566A48D499669B8B0865212D2FB4A22BF *, const RuntimeMethod*))TaskToAsyncInfoAdapter_4_get_Task_mF37BC466DB6D1ABD538C7085BF6150C2A99A6952_gshared)(__this, method);
}
// System.Boolean System.Threading.Tasks.Task::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_get_IsCompleted_mA675F47CE1DBD1948BDC9215DCAE93F07FC32E19 (Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * __this, const RuntimeMethod* method);
// System.Boolean System.Threading.CancellationToken::get_CanBeCanceled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CancellationToken_get_CanBeCanceled_m485B6A386A628048A15D607330E91582012C59EF (CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB * __this, const RuntimeMethod* method);
// System.Threading.CancellationTokenSource System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncActionCompletedHandler,System.VoidReferenceTypeParameter,System.VoidValueTypeParameter,System.VoidValueTypeParameter>::get_CancelTokenSource()
inline CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * TaskToAsyncInfoAdapter_4_get_CancelTokenSource_mE43B201053633B912705D401B7DE5EA95B7823E6 (TaskToAsyncInfoAdapter_4_t6939D2A566A48D499669B8B0865212D2FB4A22BF * __this, const RuntimeMethod* method)
{
	return ((  CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * (*) (TaskToAsyncInfoAdapter_4_t6939D2A566A48D499669B8B0865212D2FB4A22BF *, const RuntimeMethod*))TaskToAsyncInfoAdapter_4_get_CancelTokenSource_m1F8BAF325E6DF5F1C687FE2A165F36975CB37EA5_gshared)(__this, method);
}
// System.Void System.WindowsRuntimeSystemExtensions::ConcatenateCancelTokens(System.Threading.CancellationToken,System.Threading.CancellationTokenSource,System.Threading.Tasks.Task)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeSystemExtensions_ConcatenateCancelTokens_mE6D63868E79DE3EBCC91E8BC0BBF73D12E31E4D9 (CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  ___source0, CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * ___sink1, Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___concatenationLifetime2, const RuntimeMethod* method);
// System.Threading.Tasks.Task System.Threading.Tasks.Task::FromException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * Task_FromException_m8D8A19D1CF4B424A3B48F49C7150496075038E54 (Exception_t * p0, const RuntimeMethod* method);
// System.Void System.Threading.CancellationToken::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationToken__ctor_mEEC34A64046AD7A84BEA348A2F1AE72C9F483C7E (CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB * __this, bool p0, const RuntimeMethod* method);
// System.Threading.Tasks.Task System.Threading.Tasks.Task::FromCanceled(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * Task_FromCanceled_m271AC674539E764A1F220D15E63EDB7D989841E5 (CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  p0, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.AsyncInfoToTaskBridge`1<System.VoidValueTypeParameter>::.ctor(System.Threading.CancellationToken)
inline void AsyncInfoToTaskBridge_1__ctor_mF7CD592EF952F225806871F14672CE77BDDAB0C4 (AsyncInfoToTaskBridge_1_tFF70BDD04454A6EBC5FE97283B11BB664C836B27 * __this, CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  p0, const RuntimeMethod* method)
{
	((  void (*) (AsyncInfoToTaskBridge_1_tFF70BDD04454A6EBC5FE97283B11BB664C836B27 *, CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB , const RuntimeMethod*))AsyncInfoToTaskBridge_1__ctor_mF7CD592EF952F225806871F14672CE77BDDAB0C4_gshared)(__this, p0, method);
}
// System.Void Windows.Foundation.AsyncActionCompletedHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncActionCompletedHandler__ctor_m2C0D2BD025FC8CDC21086373277D42874552060D (AsyncActionCompletedHandler_t1820A7A20AA2CF935463CD8EB21800005EFE488D * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.AsyncInfoToTaskBridge`1<System.VoidValueTypeParameter>::RegisterForCancellation(Windows.Foundation.IAsyncInfo)
inline void AsyncInfoToTaskBridge_1_RegisterForCancellation_m15301858DFDD9573474DCCD4C3ED3F7B7E112CB4 (AsyncInfoToTaskBridge_1_tFF70BDD04454A6EBC5FE97283B11BB664C836B27 * __this, RuntimeObject* p0, const RuntimeMethod* method)
{
	((  void (*) (AsyncInfoToTaskBridge_1_tFF70BDD04454A6EBC5FE97283B11BB664C836B27 *, RuntimeObject*, const RuntimeMethod*))AsyncInfoToTaskBridge_1_RegisterForCancellation_m15301858DFDD9573474DCCD4C3ED3F7B7E112CB4_gshared)(__this, p0, method);
}
// System.Threading.Tasks.Task`1<!0> System.Threading.Tasks.TaskCompletionSource`1<System.VoidValueTypeParameter>::get_Task()
inline Task_1_tC00A207FB8C25E4498366C42466B6F913AF48F5E * TaskCompletionSource_1_get_Task_m1B3F59275853FCC22B8C1E010D77B79865170D90 (TaskCompletionSource_1_t58B1B163F59487E469888F92C0D132BC81B574FF * __this, const RuntimeMethod* method)
{
	return ((  Task_1_tC00A207FB8C25E4498366C42466B6F913AF48F5E * (*) (TaskCompletionSource_1_t58B1B163F59487E469888F92C0D132BC81B574FF *, const RuntimeMethod*))TaskCompletionSource_1_get_Task_m1B3F59275853FCC22B8C1E010D77B79865170D90_gshared)(__this, method);
}
// System.Void System.WindowsRuntimeSystemExtensions/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m8CDEDC568031CE2B651AA8B8FAB2D9ACF35F3D97 (U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E * __this, const RuntimeMethod* method);
// System.Void System.Threading.CancellationTokenSource::Cancel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationTokenSource_Cancel_m33023D4CB46117A4C6A7C1ED0076918871A1E2DF (CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * __this, const RuntimeMethod* method);
// System.Void System.Threading.CancellationTokenRegistration::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationTokenRegistration_Dispose_m12C09B73DC2913C85C776E611EF48DCA63405457 (CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2 * __this, const RuntimeMethod* method);
// System.Double Windows.Foundation.Point::get_X()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Point_get_X_m7B3855A972F9BE4EFC665018A0FFCDE7653F5279 (Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC * __this, const RuntimeMethod* method);
// System.Double Windows.Foundation.Point::get_Y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Point_get_Y_m7C07355EC984C2A5DCDED2D04D6FF242300F607A (Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC * __this, const RuntimeMethod* method);
// System.String Windows.Foundation.Point::ConvertToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Point_ConvertToString_m6E52855EA4919577AD9678EB50CA60A433F49803 (Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC * __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.String Windows.Foundation.Point::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Point_ToString_mDFB209B8CA094AF8FB88FB144DBA13F9ABB49E8E (Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC * __this, const RuntimeMethod* method);
// System.String Windows.Foundation.Point::System.IFormattable.ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Point_System_IFormattable_ToString_m791F8FC114C9E607E22E1377E7EF3ACD0395CA57 (Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC * __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.Char Windows.Foundation.TokenizerHelper::GetNumericListSeparator(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar TokenizerHelper_GetNumericListSeparator_mD31F075C6AF217DB2DC926736D06D6F19B44AD2C (RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m232E857CA5107EA6AC52E7DD7018716C021F237B (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* p0, const RuntimeMethod* method);
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mCE84582533EA9934933F3F1496451F3D9DA652A4 (RuntimeObject* p0, String_t* p1, RuntimeObject * p2, RuntimeObject * p3, RuntimeObject * p4, const RuntimeMethod* method);
// System.Boolean Windows.Foundation.Point::op_Equality(Windows.Foundation.Point,Windows.Foundation.Point)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Point_op_Equality_m64C4E8C491AFAA01B7450CE74EC8144B6C3BA562 (Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC  ___point10, Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC  ___point21, const RuntimeMethod* method);
// System.Boolean Windows.Foundation.Point::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Point_Equals_m3BA55D50EECD9ACD235E1CF9F34373C325973DB6 (Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC * __this, RuntimeObject * ___o0, const RuntimeMethod* method);
// System.Int32 System.Double::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Double_GetHashCode_m583A40025EE6D79EA606D34C38ACFEE231003292 (double* __this, const RuntimeMethod* method);
// System.Int32 Windows.Foundation.Point::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Point_GetHashCode_m7348B1D410207B79808F2CA147AE04AF43BE7580 (Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC * __this, const RuntimeMethod* method);
// System.Double Windows.Foundation.Rect::get_X()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Rect_get_X_m35D247CE131BD7E88E8F37477AF8B97514B2EB18 (Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 * __this, const RuntimeMethod* method);
// System.Double Windows.Foundation.Rect::get_Y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Rect_get_Y_m50133BDDAB0AA130D87E2C679FA9DD3F20B2EE16 (Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 * __this, const RuntimeMethod* method);
// System.Double Windows.Foundation.Rect::get_Width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Rect_get_Width_mB3768453F8598F1255098EA9454A03A3B0C2C682 (Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 * __this, const RuntimeMethod* method);
// System.Double Windows.Foundation.Rect::get_Height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Rect_get_Height_m02E5221D781AADCD2F72A09FEA6EC37DF5EA9B1C (Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 * __this, const RuntimeMethod* method);
// System.Boolean Windows.Foundation.Rect::get_IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rect_get_IsEmpty_m80BA92D11A0A2C89E0CF8601A233778A1C0C77FF (Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 * __this, const RuntimeMethod* method);
// System.String Windows.Foundation.Rect::ConvertToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Rect_ConvertToString_mDD63C220964456CF26A0D2B0F129110F19FEE9B7 (Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 * __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.String Windows.Foundation.Rect::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Rect_ToString_mAB211C47A6FF959D76D086C68C743F928C07D68F (Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 * __this, const RuntimeMethod* method);
// System.String Windows.Foundation.Rect::System.IFormattable.ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Rect_System_IFormattable_ToString_m92BAA1305B83C3E5526E257B9C69A767FED3923C (Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 * __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mF68EE0DEC1AA5ADE9DFEF9AE0508E428FBB10EFD (RuntimeObject* p0, String_t* p1, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* p2, const RuntimeMethod* method);
// System.Boolean Windows.Foundation.Rect::op_Equality(Windows.Foundation.Rect,Windows.Foundation.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rect_op_Equality_mE78AF9FB74353DF0F65879F0DC6719F598F736AA (Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0  ___rect10, Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0  ___rect21, const RuntimeMethod* method);
// System.Boolean Windows.Foundation.Rect::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rect_Equals_m8F195999C4E1C9356E3234E2E9A762DC2F6E3735 (Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 * __this, RuntimeObject * ___o0, const RuntimeMethod* method);
// System.Int32 Windows.Foundation.Rect::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Rect_GetHashCode_m09432FD8E6C636CD000BCD0D9A8F1E30763314CB (Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 * __this, const RuntimeMethod* method);
// System.Double Windows.Foundation.Size::get_Width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Size_get_Width_m82026F4BBE98C2740685F27ADF96699DD099B0B9 (Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 * __this, const RuntimeMethod* method);
// System.Double Windows.Foundation.Size::get_Height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Size_get_Height_mA4D91514E5FC4462B43529168335A1862E412EEA (Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 * __this, const RuntimeMethod* method);
// System.Boolean Windows.Foundation.Size::get_IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Size_get_IsEmpty_m0E62EF83B12C6B9858290ECB5C494ED2F7486438 (Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 * __this, const RuntimeMethod* method);
// System.Boolean Windows.Foundation.Size::Equals(Windows.Foundation.Size,Windows.Foundation.Size)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Size_Equals_m8A6B538AECA7518E75D2CB60DABF77ABE88ABFD8 (Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2  ___size10, Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2  ___size21, const RuntimeMethod* method);
// System.Boolean Windows.Foundation.Size::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Size_Equals_mCE363B6FB51F2B28CE43FABB1D6A0CEE7722658C (Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 * __this, RuntimeObject * ___o0, const RuntimeMethod* method);
// System.Int32 Windows.Foundation.Size::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Size_GetHashCode_m339BA7D00D8DA638CBCC4727071D15E1AC84FA7B (Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 * __this, const RuntimeMethod* method);
// System.Boolean System.Double::Equals(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Double_Equals_m07123CFF3B06183E095BF281110526F9B8953472 (double* __this, double p0, const RuntimeMethod* method);
// System.String Windows.Foundation.Size::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Size_ToString_m7AD2DBD2743AAB5FE6BF01022D45475C1A8636AA (Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 * __this, const RuntimeMethod* method);
// System.Globalization.NumberFormatInfo System.Globalization.NumberFormatInfo::GetInstance(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * NumberFormatInfo_GetInstance_m713D298B436F3765F059FEA6C446F0A6ABF0A89A (RuntimeObject* p0, const RuntimeMethod* method);
// System.String System.Globalization.NumberFormatInfo::get_NumberDecimalSeparator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NumberFormatInfo_get_NumberDecimalSeparator_m1A9F946D267B5C2FC5982D34AF97D9AEB9C24A6E (NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * __this, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018 (String_t* __this, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96 (String_t* __this, int32_t p0, const RuntimeMethod* method);
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
// System.IO.Stream System.IO.NetFxToWinRtStreamAdapter::GetManagedStream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * NetFxToWinRtStreamAdapter_GetManagedStream_mB451C96867BF33079637611923FD66B147ABC668 (NetFxToWinRtStreamAdapter_tD3F51448566787B72221C59C2FC89BF1A3987485 * __this, const RuntimeMethod* method)
{
	{
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_0 = __this->get__managedStream_0();
		return L_0;
	}
}
// System.IO.Stream System.IO.NetFxToWinRtStreamAdapter::EnsureNotDisposed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * NetFxToWinRtStreamAdapter_EnsureNotDisposed_m466B61758BD6C0C41F56B3808AE5ACD7A5FBA706 (NetFxToWinRtStreamAdapter_tD3F51448566787B72221C59C2FC89BF1A3987485 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetFxToWinRtStreamAdapter_EnsureNotDisposed_m466B61758BD6C0C41F56B3808AE5ACD7A5FBA706_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * G_B2_0 = NULL;
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * G_B1_0 = NULL;
	{
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_0 = __this->get__managedStream_0();
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_001f;
		}
	}
	{
		ObjectDisposedException_tF68E471ECD1419AD7C51137B742837395F50B69A * L_2 = (ObjectDisposedException_tF68E471ECD1419AD7C51137B742837395F50B69A *)il2cpp_codegen_object_new(ObjectDisposedException_tF68E471ECD1419AD7C51137B742837395F50B69A_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m8B5D23EA08E42BDE6BC5233CC666295F19BBD2F9(L_2, _stringLiteralD011B3DDE8AABE1933A3802E8F1DAD1CAC43FD68, /*hidden argument*/NULL);
		ObjectDisposedException_tF68E471ECD1419AD7C51137B742837395F50B69A * L_3 = L_2;
		NullCheck(L_3);
		Exception_SetErrorCode_m742C1E687C82E56F445893685007EF4FC017F4A7(L_3, ((int32_t)-2147483629), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, NetFxToWinRtStreamAdapter_EnsureNotDisposed_m466B61758BD6C0C41F56B3808AE5ACD7A5FBA706_RuntimeMethod_var);
	}

IL_001f:
	{
		return G_B2_0;
	}
}
// System.Void System.IO.NetFxToWinRtStreamAdapter::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetFxToWinRtStreamAdapter_System_IDisposable_Dispose_m2195248780A7B0B9833CC1299C0368239FD0A96F (NetFxToWinRtStreamAdapter_tD3F51448566787B72221C59C2FC89BF1A3987485 * __this, const RuntimeMethod* method)
{
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * V_0 = NULL;
	{
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_0 = __this->get__managedStream_0();
		V_0 = L_0;
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_1 = V_0;
		if (L_1)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		__this->set__managedStream_0((Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 *)NULL);
		bool L_2 = __this->get__leaveUnderlyingStreamOpen_1();
		if (L_2)
		{
			goto IL_0020;
		}
	}
	{
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_3 = V_0;
		NullCheck(L_3);
		Stream_Dispose_m186A8E680F2528DEDFF8F0069CC33BD813FFB1C7(L_3, /*hidden argument*/NULL);
	}

IL_0020:
	{
		return;
	}
}
// Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32> System.IO.NetFxToWinRtStreamAdapter::ReadAsync(Windows.Storage.Streams.IBuffer,System.UInt32,Windows.Storage.Streams.InputStreamOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NetFxToWinRtStreamAdapter_ReadAsync_m0BCE9E83CEA36191BAA72C43F84A1AF6AAC60AA7 (NetFxToWinRtStreamAdapter_tD3F51448566787B72221C59C2FC89BF1A3987485 * __this, RuntimeObject* ___buffer0, uint32_t ___count1, uint32_t ___options2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetFxToWinRtStreamAdapter_ReadAsync_m0BCE9E83CEA36191BAA72C43F84A1AF6AAC60AA7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	{
		RuntimeObject* L_0 = ___buffer0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, _stringLiteralE53C2EA1FE4BD2B78BF4723C7C155A578E020A25, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, NetFxToWinRtStreamAdapter_ReadAsync_m0BCE9E83CEA36191BAA72C43F84A1AF6AAC60AA7_RuntimeMethod_var);
	}

IL_000e:
	{
		uint32_t L_2 = ___count1;
		if (false)
		{
			goto IL_001a;
		}
	}
	{
		uint32_t L_3 = ___count1;
		if ((!(((uint32_t)((int32_t)2147483647LL)) < ((uint32_t)L_3))))
		{
			goto IL_0030;
		}
	}

IL_001a:
	{
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_4 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6(L_4, _stringLiteralEE9F38E186BA06F57B7B74D7E626B94E13CE2556, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_5 = L_4;
		NullCheck(L_5);
		Exception_SetErrorCode_m742C1E687C82E56F445893685007EF4FC017F4A7(L_5, ((int32_t)-2147024809), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, NULL, NetFxToWinRtStreamAdapter_ReadAsync_m0BCE9E83CEA36191BAA72C43F84A1AF6AAC60AA7_RuntimeMethod_var);
	}

IL_0030:
	{
		RuntimeObject* L_6 = ___buffer0;
		NullCheck(L_6);
		uint32_t L_7 = InterfaceFuncInvoker0< uint32_t >::Invoke(0 /* System.UInt32 Windows.Storage.Streams.IBuffer::get_Capacity() */, IBuffer_t13BCDB1D6DE32F79AB9F9E149514026CA6B4AAEF_il2cpp_TypeInfo_var, L_6);
		uint32_t L_8 = ___count1;
		if ((!(((uint32_t)L_7) < ((uint32_t)L_8))))
		{
			goto IL_004f;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_9 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_9, _stringLiteral58B2D91FD6A4CD3EB40D16D2CDAA0AED435EA030, /*hidden argument*/NULL);
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_10 = L_9;
		NullCheck(L_10);
		Exception_SetErrorCode_m742C1E687C82E56F445893685007EF4FC017F4A7(L_10, ((int32_t)-2147024809), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, NULL, NetFxToWinRtStreamAdapter_ReadAsync_m0BCE9E83CEA36191BAA72C43F84A1AF6AAC60AA7_RuntimeMethod_var);
	}

IL_004f:
	{
		uint32_t L_11 = ___options2;
		if (!L_11)
		{
			goto IL_0075;
		}
	}
	{
		uint32_t L_12 = ___options2;
		if ((((int32_t)L_12) == ((int32_t)1)))
		{
			goto IL_0075;
		}
	}
	{
		uint32_t L_13 = ___options2;
		if ((((int32_t)L_13) == ((int32_t)2)))
		{
			goto IL_0075;
		}
	}
	{
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_14 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m300CE4D04A068C209FD858101AC361C1B600B5AE(L_14, _stringLiteral513F8DE9259FE7658FE14D1352C54CCF070E911F, _stringLiteral706ACFB2C5459B5262636AC35F9607BA047F2B8A, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_15 = L_14;
		NullCheck(L_15);
		Exception_SetErrorCode_m742C1E687C82E56F445893685007EF4FC017F4A7(L_15, ((int32_t)-2147024809), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, NULL, NetFxToWinRtStreamAdapter_ReadAsync_m0BCE9E83CEA36191BAA72C43F84A1AF6AAC60AA7_RuntimeMethod_var);
	}

IL_0075:
	{
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_16 = NetFxToWinRtStreamAdapter_EnsureNotDisposed_m466B61758BD6C0C41F56B3808AE5ACD7A5FBA706(__this, /*hidden argument*/NULL);
		V_0 = L_16;
		int32_t L_17 = __this->get__readOptimization_2();
		V_2 = L_17;
		int32_t L_18 = V_2;
		if (!L_18)
		{
			goto IL_0095;
		}
	}
	{
		int32_t L_19 = V_2;
		if ((!(((uint32_t)L_19) == ((uint32_t)1))))
		{
			goto IL_00a1;
		}
	}
	{
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_20 = V_0;
		RuntimeObject* L_21 = ___buffer0;
		uint32_t L_22 = ___count1;
		RuntimeObject* L_23 = StreamOperationsImplementation_ReadAsync_MemoryStream_mD332B977EA293A31B70F8475EAA0D270BB8FE0AB(L_20, L_21, L_22, /*hidden argument*/NULL);
		V_1 = L_23;
		goto IL_00a3;
	}

IL_0095:
	{
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_24 = V_0;
		RuntimeObject* L_25 = ___buffer0;
		uint32_t L_26 = ___count1;
		uint32_t L_27 = ___options2;
		RuntimeObject* L_28 = StreamOperationsImplementation_ReadAsync_AbstractStream_m778BD91CC4C43AEBE54B44DE842503DE52948317(L_24, L_25, L_26, L_27, /*hidden argument*/NULL);
		V_1 = L_28;
		goto IL_00a3;
	}

IL_00a1:
	{
		V_1 = (RuntimeObject*)NULL;
	}

IL_00a3:
	{
		RuntimeObject* L_29 = V_1;
		return L_29;
	}
}
// Windows.Foundation.IAsyncOperationWithProgress`2<System.UInt32,System.UInt32> System.IO.NetFxToWinRtStreamAdapter::WriteAsync(Windows.Storage.Streams.IBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NetFxToWinRtStreamAdapter_WriteAsync_mBA9F702910E1F7290AC20A43982C7EFA5A84C4F8 (NetFxToWinRtStreamAdapter_tD3F51448566787B72221C59C2FC89BF1A3987485 * __this, RuntimeObject* ___buffer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetFxToWinRtStreamAdapter_WriteAsync_mBA9F702910E1F7290AC20A43982C7EFA5A84C4F8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___buffer0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, _stringLiteralE53C2EA1FE4BD2B78BF4723C7C155A578E020A25, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, NetFxToWinRtStreamAdapter_WriteAsync_mBA9F702910E1F7290AC20A43982C7EFA5A84C4F8_RuntimeMethod_var);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___buffer0;
		NullCheck(L_2);
		uint32_t L_3 = InterfaceFuncInvoker0< uint32_t >::Invoke(0 /* System.UInt32 Windows.Storage.Streams.IBuffer::get_Capacity() */, IBuffer_t13BCDB1D6DE32F79AB9F9E149514026CA6B4AAEF_il2cpp_TypeInfo_var, L_2);
		RuntimeObject* L_4 = ___buffer0;
		NullCheck(L_4);
		uint32_t L_5 = InterfaceFuncInvoker0< uint32_t >::Invoke(1 /* System.UInt32 Windows.Storage.Streams.IBuffer::get_Length() */, IBuffer_t13BCDB1D6DE32F79AB9F9E149514026CA6B4AAEF_il2cpp_TypeInfo_var, L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)L_5))))
		{
			goto IL_0032;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_6 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_6, _stringLiteral7441938D5F79A2DBB130D9141124EE2D6FC20CD1, /*hidden argument*/NULL);
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_7 = L_6;
		NullCheck(L_7);
		Exception_SetErrorCode_m742C1E687C82E56F445893685007EF4FC017F4A7(L_7, ((int32_t)-2147024809), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, NULL, NetFxToWinRtStreamAdapter_WriteAsync_mBA9F702910E1F7290AC20A43982C7EFA5A84C4F8_RuntimeMethod_var);
	}

IL_0032:
	{
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_8 = NetFxToWinRtStreamAdapter_EnsureNotDisposed_m466B61758BD6C0C41F56B3808AE5ACD7A5FBA706(__this, /*hidden argument*/NULL);
		RuntimeObject* L_9 = ___buffer0;
		RuntimeObject* L_10 = StreamOperationsImplementation_WriteAsync_AbstractStream_m21017F427664FD8D13B2408E5338ED0FFD7F253C(L_8, L_9, /*hidden argument*/NULL);
		return L_10;
	}
}
// Windows.Foundation.IAsyncOperation`1<System.Boolean> System.IO.NetFxToWinRtStreamAdapter::FlushAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NetFxToWinRtStreamAdapter_FlushAsync_m9452B6EE043F031DEE0206AA3BC6AAE7EFBEC522 (NetFxToWinRtStreamAdapter_tD3F51448566787B72221C59C2FC89BF1A3987485 * __this, const RuntimeMethod* method)
{
	{
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_0 = NetFxToWinRtStreamAdapter_EnsureNotDisposed_m466B61758BD6C0C41F56B3808AE5ACD7A5FBA706(__this, /*hidden argument*/NULL);
		RuntimeObject* L_1 = StreamOperationsImplementation_FlushAsync_AbstractStream_m9FC5EE6670A05587FD927A09D8F8F8FF8194F557(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void System.IO.NetFxToWinRtStreamAdapter::Seek(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetFxToWinRtStreamAdapter_Seek_m7914695973A6682573EEE713DD10046D58129592 (NetFxToWinRtStreamAdapter_tD3F51448566787B72221C59C2FC89BF1A3987485 * __this, uint64_t ___position0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetFxToWinRtStreamAdapter_Seek_m7914695973A6682573EEE713DD10046D58129592_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	{
		uint64_t L_0 = ___position0;
		if ((!(((uint64_t)L_0) > ((uint64_t)((int64_t)std::numeric_limits<int64_t>::max())))))
		{
			goto IL_0022;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_1 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_1, _stringLiteral5D3FD8BD4049B89DCC077CB8C12BDD8F4FBC1BFC, /*hidden argument*/NULL);
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_2 = L_1;
		NullCheck(L_2);
		Exception_SetErrorCode_m742C1E687C82E56F445893685007EF4FC017F4A7(L_2, ((int32_t)-2147024809), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, NetFxToWinRtStreamAdapter_Seek_m7914695973A6682573EEE713DD10046D58129592_RuntimeMethod_var);
	}

IL_0022:
	{
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_3 = NetFxToWinRtStreamAdapter_EnsureNotDisposed_m466B61758BD6C0C41F56B3808AE5ACD7A5FBA706(__this, /*hidden argument*/NULL);
		uint64_t L_4 = ___position0;
		V_0 = L_4;
		int64_t L_5 = V_0;
		NullCheck(L_3);
		VirtFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(26 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_3, L_5, 0);
		return;
	}
}
// System.Boolean System.IO.NetFxToWinRtStreamAdapter::get_CanRead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetFxToWinRtStreamAdapter_get_CanRead_mFA58CB31AC3CE902D51A2A48B6133C756813720A (NetFxToWinRtStreamAdapter_tD3F51448566787B72221C59C2FC89BF1A3987485 * __this, const RuntimeMethod* method)
{
	{
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_0 = NetFxToWinRtStreamAdapter_EnsureNotDisposed_m466B61758BD6C0C41F56B3808AE5ACD7A5FBA706(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.IO.Stream::get_CanRead() */, L_0);
		return L_1;
	}
}
// System.Boolean System.IO.NetFxToWinRtStreamAdapter::get_CanWrite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetFxToWinRtStreamAdapter_get_CanWrite_m47AFB33C858A3544271AF6EF71B5960431303758 (NetFxToWinRtStreamAdapter_tD3F51448566787B72221C59C2FC89BF1A3987485 * __this, const RuntimeMethod* method)
{
	{
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_0 = NetFxToWinRtStreamAdapter_EnsureNotDisposed_m466B61758BD6C0C41F56B3808AE5ACD7A5FBA706(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean System.IO.Stream::get_CanWrite() */, L_0);
		return L_1;
	}
}
// System.UInt64 System.IO.NetFxToWinRtStreamAdapter::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t NetFxToWinRtStreamAdapter_get_Position_mC11DC56E591D18E7577C00362A9A0E032A6FD0FE (NetFxToWinRtStreamAdapter_tD3F51448566787B72221C59C2FC89BF1A3987485 * __this, const RuntimeMethod* method)
{
	{
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_0 = NetFxToWinRtStreamAdapter_EnsureNotDisposed_m466B61758BD6C0C41F56B3808AE5ACD7A5FBA706(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int64_t L_1 = VirtFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_0);
		return L_1;
	}
}
// System.UInt64 System.IO.NetFxToWinRtStreamAdapter::get_Size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t NetFxToWinRtStreamAdapter_get_Size_m309472FC98BC493FE9A414C43CE8B2EED10161FC (NetFxToWinRtStreamAdapter_tD3F51448566787B72221C59C2FC89BF1A3987485 * __this, const RuntimeMethod* method)
{
	{
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_0 = NetFxToWinRtStreamAdapter_EnsureNotDisposed_m466B61758BD6C0C41F56B3808AE5ACD7A5FBA706(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int64_t L_1 = VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, L_0);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.IO.StreamFlushAsyncResult::.ctor(Windows.Foundation.IAsyncOperation`1<System.Boolean>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamFlushAsyncResult__ctor_mB90A83C265CA4BFC9EEFC5A0CFE76A2DFF0A13D8 (StreamFlushAsyncResult_t52BD92B64AE7A59F49326A470FBCD61172206E6A * __this, RuntimeObject* ___asyncStreamFlushOperation0, bool ___processCompletedOperationInCallback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StreamFlushAsyncResult__ctor_mB90A83C265CA4BFC9EEFC5A0CFE76A2DFF0A13D8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___asyncStreamFlushOperation0;
		bool L_1 = ___processCompletedOperationInCallback1;
		StreamOperationAsyncResult__ctor_m1297A6A7E44BF5D57AD6CAFBC14FA870E21D9D8F(__this, L_0, (AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 *)NULL, NULL, L_1, /*hidden argument*/NULL);
		RuntimeObject* L_2 = ___asyncStreamFlushOperation0;
		AsyncOperationCompletedHandler_1_t60A0D16C078315F375831514827E7956934AFB66 * L_3 = (AsyncOperationCompletedHandler_1_t60A0D16C078315F375831514827E7956934AFB66 *)il2cpp_codegen_object_new(AsyncOperationCompletedHandler_1_t60A0D16C078315F375831514827E7956934AFB66_il2cpp_TypeInfo_var);
		AsyncOperationCompletedHandler_1__ctor_m0807C8539F5F05DA00A3A257AFB7254C6F99EC9C(L_3, __this, (intptr_t)((intptr_t)StreamOperationAsyncResult_StreamOperationCompletedCallback_m830CE1407A7C8E1AFFC4534BCE28959467019B0C_RuntimeMethod_var), /*hidden argument*/AsyncOperationCompletedHandler_1__ctor_m0807C8539F5F05DA00A3A257AFB7254C6F99EC9C_RuntimeMethod_var);
		NullCheck(L_2);
		InterfaceActionInvoker1< AsyncOperationCompletedHandler_1_t60A0D16C078315F375831514827E7956934AFB66 * >::Invoke(0 /* System.Void Windows.Foundation.IAsyncOperation`1<System.Boolean>::put_Completed(Windows.Foundation.AsyncOperationCompletedHandler`1<!0>) */, IAsyncOperation_1_t27E018F764B0C6E8EB0FA611CB25A52C1FD0FB18_il2cpp_TypeInfo_var, L_2, L_3);
		return;
	}
}
// System.Void System.IO.StreamFlushAsyncResult::ProcessConcreteCompletedOperation(Windows.Foundation.IAsyncInfo,System.Int64U26)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamFlushAsyncResult_ProcessConcreteCompletedOperation_m63A273FF3E89F299C27102C58BC1A4F38AA51072 (StreamFlushAsyncResult_t52BD92B64AE7A59F49326A470FBCD61172206E6A * __this, RuntimeObject* ___completedOperation0, int64_t* ___bytesCompleted1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StreamFlushAsyncResult_ProcessConcreteCompletedOperation_m63A273FF3E89F299C27102C58BC1A4F38AA51072_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___completedOperation0;
		int64_t* L_1 = ___bytesCompleted1;
		StreamFlushAsyncResult_ProcessConcreteCompletedOperation_mD81B4C15CD17D3753E3023D194165FF82FC37E50(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_0, IAsyncOperation_1_t27E018F764B0C6E8EB0FA611CB25A52C1FD0FB18_il2cpp_TypeInfo_var)), (int64_t*)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.IO.StreamFlushAsyncResult::ProcessConcreteCompletedOperation(Windows.Foundation.IAsyncOperation`1<System.Boolean>,System.Int64U26)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamFlushAsyncResult_ProcessConcreteCompletedOperation_mD81B4C15CD17D3753E3023D194165FF82FC37E50 (StreamFlushAsyncResult_t52BD92B64AE7A59F49326A470FBCD61172206E6A * __this, RuntimeObject* ___completedOperation0, int64_t* ___bytesCompleted1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StreamFlushAsyncResult_ProcessConcreteCompletedOperation_mD81B4C15CD17D3753E3023D194165FF82FC37E50_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int64_t* G_B2_0 = NULL;
	int64_t* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	int64_t* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___completedOperation0;
		NullCheck(L_0);
		bool L_1 = InterfaceFuncInvoker0< bool >::Invoke(2 /* !0 Windows.Foundation.IAsyncOperation`1<System.Boolean>::GetResults() */, IAsyncOperation_1_t27E018F764B0C6E8EB0FA611CB25A52C1FD0FB18_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		int64_t* L_2 = ___bytesCompleted1;
		bool L_3 = V_0;
		G_B1_0 = L_2;
		if (L_3)
		{
			G_B2_0 = L_2;
			goto IL_000e;
		}
	}
	{
		G_B3_0 = (-1);
		G_B3_1 = G_B1_0;
		goto IL_000f;
	}

IL_000e:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_000f:
	{
		*((int64_t*)G_B3_1) = (int64_t)(((int64_t)((int64_t)G_B3_0)));
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
// System.Void System.IO.StreamOperationAsyncResult::ThrowWithIOExceptionDispatchInfo(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamOperationAsyncResult_ThrowWithIOExceptionDispatchInfo_mB5A5574130A4DB6D1D6412D9EBDEC2BEA118C795 (StreamOperationAsyncResult_t675AB408CDF1B11AC6F446E24352B441F6422E0F * __this, Exception_t * ___e0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StreamOperationAsyncResult_ThrowWithIOExceptionDispatchInfo_mB5A5574130A4DB6D1D6412D9EBDEC2BEA118C795_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get__completedOperation_9();
		NullCheck(L_0);
		Exception_t * L_1 = InterfaceFuncInvoker0< Exception_t * >::Invoke(2 /* System.Exception Windows.Foundation.IAsyncInfo::get_ErrorCode() */, IAsyncInfo_t9B58E0D0A013D06029CDEAE127A910A69D13FBB5_il2cpp_TypeInfo_var, L_0);
		Exception_t * L_2 = WindowsRuntimeSystemExtensions_AttachRestrictedErrorInfo_mF39F00CA42F45D3F2EB5B8DB5B450C55A206113C(L_1, /*hidden argument*/NULL);
		ExceptionDispatchInfo_t0C54083F3909DAF986A4DEAA7C047559531E0E2A * L_3 = WinRtIOHelper_NativeExceptionToIOExceptionInfo_m1CA2440467C50E50B6448BBCC86B4B7DB9A394AD(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		ExceptionDispatchInfo_Throw_m9630C06EF8D7CDF5BD5DC76144CD98C4D9E8D26F(L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.IO.StreamOperationAsyncResult::.ctor(Windows.Foundation.IAsyncInfo,System.AsyncCallback,System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamOperationAsyncResult__ctor_m1297A6A7E44BF5D57AD6CAFBC14FA870E21D9D8F (StreamOperationAsyncResult_t675AB408CDF1B11AC6F446E24352B441F6422E0F * __this, RuntimeObject* ___asyncStreamOperation0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___userCompletionCallback1, RuntimeObject * ___userAsyncStateInfo2, bool ___processCompletedOperationInCallback3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StreamOperationAsyncResult__ctor_m1297A6A7E44BF5D57AD6CAFBC14FA870E21D9D8F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = ___asyncStreamOperation0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, _stringLiteralE34101DCC6A12C98FDA3373872BD273EFAD4C651, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, StreamOperationAsyncResult__ctor_m1297A6A7E44BF5D57AD6CAFBC14FA870E21D9D8F_RuntimeMethod_var);
	}

IL_0014:
	{
		AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * L_2 = ___userCompletionCallback1;
		__this->set__userCompletionCallback_0(L_2);
		RuntimeObject * L_3 = ___userAsyncStateInfo2;
		__this->set__userAsyncStateInfo_1(L_3);
		RuntimeObject* L_4 = ___asyncStreamOperation0;
		__this->set__asyncStreamOperation_2(L_4);
		il2cpp_codegen_memory_barrier();
		__this->set__completed_3(0);
		il2cpp_codegen_memory_barrier();
		__this->set__callbackInvoked_4(0);
		__this->set__bytesCompleted_6((((int64_t)((int64_t)0))));
		__this->set__errorInfo_7((ExceptionDispatchInfo_t0C54083F3909DAF986A4DEAA7C047559531E0E2A *)NULL);
		bool L_5 = ___processCompletedOperationInCallback3;
		__this->set__processCompletedOperationInCallback_8(L_5);
		return;
	}
}
// System.Object System.IO.StreamOperationAsyncResult::get_AsyncState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * StreamOperationAsyncResult_get_AsyncState_m813C2C868FBF73A312C97B9DB311CB97AD7956B5 (StreamOperationAsyncResult_t675AB408CDF1B11AC6F446E24352B441F6422E0F * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get__userAsyncStateInfo_1();
		return L_0;
	}
}
// System.Boolean System.IO.StreamOperationAsyncResult::get_ProcessCompletedOperationInCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StreamOperationAsyncResult_get_ProcessCompletedOperationInCallback_mAEBF8906F074143BECE20D7233B58FBE7F89D08D (StreamOperationAsyncResult_t675AB408CDF1B11AC6F446E24352B441F6422E0F * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__processCompletedOperationInCallback_8();
		return L_0;
	}
}
// System.Threading.WaitHandle System.IO.StreamOperationAsyncResult::get_AsyncWaitHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6 * StreamOperationAsyncResult_get_AsyncWaitHandle_m77AD43084D44615B1A5B18FD41FACE99F34B715C (StreamOperationAsyncResult_t675AB408CDF1B11AC6F446E24352B441F6422E0F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StreamOperationAsyncResult_get_AsyncWaitHandle_m77AD43084D44615B1A5B18FD41FACE99F34B715C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 * V_0 = NULL;
	ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 * V_1 = NULL;
	{
		ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 * L_0 = __this->get__waitHandle_5();
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 * L_2 = V_0;
		return L_2;
	}

IL_000e:
	{
		bool L_3 = __this->get__completed_3();
		il2cpp_codegen_memory_barrier();
		ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 * L_4 = (ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 *)il2cpp_codegen_object_new(ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408_il2cpp_TypeInfo_var);
		ManualResetEvent__ctor_m8973D9E3C622B9602641C017A33870F51D0311E1(L_4, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 ** L_5 = __this->get_address_of__waitHandle_5();
		il2cpp_codegen_memory_barrier();
		ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 * L_6 = V_0;
		ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 * L_7 = InterlockedCompareExchangeImpl<ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 *>((ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 **)L_5, L_6, (ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 *)NULL);
		V_1 = L_7;
		ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 * L_8 = V_1;
		if (!L_8)
		{
			goto IL_0035;
		}
	}
	{
		ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 * L_9 = V_0;
		NullCheck(L_9);
		WaitHandle_Dispose_m47D6F15A6D36EFBF147D238B794AE6436FD5159C(L_9, /*hidden argument*/NULL);
		ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 * L_10 = V_1;
		return L_10;
	}

IL_0035:
	{
		ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 * L_11 = V_0;
		return L_11;
	}
}
// System.Boolean System.IO.StreamOperationAsyncResult::get_CompletedSynchronously()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StreamOperationAsyncResult_get_CompletedSynchronously_mEDCE467455F035E8858A4130BDE966C6842180B9 (StreamOperationAsyncResult_t675AB408CDF1B11AC6F446E24352B441F6422E0F * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.Boolean System.IO.StreamOperationAsyncResult::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StreamOperationAsyncResult_get_IsCompleted_m547436B0AC978D382ABC5A44D167E33C2E785724 (StreamOperationAsyncResult_t675AB408CDF1B11AC6F446E24352B441F6422E0F * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__completed_3();
		il2cpp_codegen_memory_barrier();
		return L_0;
	}
}
// System.Void System.IO.StreamOperationAsyncResult::Wait()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamOperationAsyncResult_Wait_m7E111C3451B661E20090E85DF665934453D1403E (StreamOperationAsyncResult_t675AB408CDF1B11AC6F446E24352B441F6422E0F * __this, const RuntimeMethod* method)
{
	WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6 * V_0 = NULL;
	{
		bool L_0 = __this->get__completed_3();
		il2cpp_codegen_memory_barrier();
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6 * L_1 = StreamOperationAsyncResult_get_AsyncWaitHandle_m77AD43084D44615B1A5B18FD41FACE99F34B715C(__this, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_001b;
	}

IL_0014:
	{
		WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6 * L_2 = V_0;
		NullCheck(L_2);
		VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean System.Threading.WaitHandle::WaitOne() */, L_2);
	}

IL_001b:
	{
		bool L_3 = __this->get__completed_3();
		il2cpp_codegen_memory_barrier();
		if (!L_3)
		{
			goto IL_0014;
		}
	}
	{
		return;
	}
}
// System.Int64 System.IO.StreamOperationAsyncResult::get_BytesCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t StreamOperationAsyncResult_get_BytesCompleted_m9874C092BA3E62466B1A0AA4DC6564962571D8B4 (StreamOperationAsyncResult_t675AB408CDF1B11AC6F446E24352B441F6422E0F * __this, const RuntimeMethod* method)
{
	{
		int64_t L_0 = __this->get__bytesCompleted_6();
		return L_0;
	}
}
// System.Boolean System.IO.StreamOperationAsyncResult::get_HasError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StreamOperationAsyncResult_get_HasError_m51A52788DC3613F241D5A0D17CB8EBFDA5E05F8D (StreamOperationAsyncResult_t675AB408CDF1B11AC6F446E24352B441F6422E0F * __this, const RuntimeMethod* method)
{
	{
		ExceptionDispatchInfo_t0C54083F3909DAF986A4DEAA7C047559531E0E2A * L_0 = __this->get__errorInfo_7();
		return (bool)((!(((RuntimeObject*)(ExceptionDispatchInfo_t0C54083F3909DAF986A4DEAA7C047559531E0E2A *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}
}
// System.Void System.IO.StreamOperationAsyncResult::ThrowCachedError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamOperationAsyncResult_ThrowCachedError_m4E9122EE3CD20858BB4570D95912EF3A48038D3A (StreamOperationAsyncResult_t675AB408CDF1B11AC6F446E24352B441F6422E0F * __this, const RuntimeMethod* method)
{
	{
		ExceptionDispatchInfo_t0C54083F3909DAF986A4DEAA7C047559531E0E2A * L_0 = __this->get__errorInfo_7();
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		ExceptionDispatchInfo_t0C54083F3909DAF986A4DEAA7C047559531E0E2A * L_1 = __this->get__errorInfo_7();
		NullCheck(L_1);
		ExceptionDispatchInfo_Throw_m9630C06EF8D7CDF5BD5DC76144CD98C4D9E8D26F(L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.IO.StreamOperationAsyncResult::CancelStreamOperation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StreamOperationAsyncResult_CancelStreamOperation_m97B799E99AD4809761BE6A0D3E55DDEEA4DD4443 (StreamOperationAsyncResult_t675AB408CDF1B11AC6F446E24352B441F6422E0F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StreamOperationAsyncResult_CancelStreamOperation_m97B799E99AD4809761BE6A0D3E55DDEEA4DD4443_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get__callbackInvoked_4();
		il2cpp_codegen_memory_barrier();
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		return (bool)0;
	}

IL_000c:
	{
		RuntimeObject* L_1 = __this->get__asyncStreamOperation_2();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(3 /* System.Void Windows.Foundation.IAsyncInfo::Cancel() */, IAsyncInfo_t9B58E0D0A013D06029CDEAE127A910A69D13FBB5_il2cpp_TypeInfo_var, L_1);
		return (bool)1;
	}
}
// System.Void System.IO.StreamOperationAsyncResult::CloseStreamOperation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamOperationAsyncResult_CloseStreamOperation_mD2F52A21BFD94DC2A34E260CA631BBDA3CC6721A (StreamOperationAsyncResult_t675AB408CDF1B11AC6F446E24352B441F6422E0F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StreamOperationAsyncResult_CloseStreamOperation_mD2F52A21BFD94DC2A34E260CA631BBDA3CC6721A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			RuntimeObject* L_0 = __this->get__asyncStreamOperation_2();
			if (!L_0)
			{
				goto IL_0013;
			}
		}

IL_0008:
		{
			RuntimeObject* L_1 = __this->get__asyncStreamOperation_2();
			NullCheck(L_1);
			InterfaceActionInvoker0::Invoke(4 /* System.Void Windows.Foundation.IAsyncInfo::Close() */, IAsyncInfo_t9B58E0D0A013D06029CDEAE127A910A69D13FBB5_il2cpp_TypeInfo_var, L_1);
		}

IL_0013:
		{
			goto IL_0018;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0015;
		throw e;
	}

CATCH_0015:
	{ // begin catch(System.Object)
		goto IL_0018;
	} // end catch (depth: 1)

IL_0018:
	{
		__this->set__asyncStreamOperation_2((RuntimeObject*)NULL);
		return;
	}
}
// System.Void System.IO.StreamOperationAsyncResult::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamOperationAsyncResult_Finalize_mFB4A71F4DB6F0C4D04217F2C8AD4B6C8C472F01C (StreamOperationAsyncResult_t675AB408CDF1B11AC6F446E24352B441F6422E0F * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		StreamOperationAsyncResult_CancelStreamOperation_m97B799E99AD4809761BE6A0D3E55DDEEA4DD4443(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x10, FINALLY_0009);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0009;
	}

FINALLY_0009:
	{ // begin finally (depth: 1)
		Object_Finalize_m4015B7D3A44DE125C5FE34D7276CD4697C06F380(__this, /*hidden argument*/NULL);
		IL2CPP_RESET_LEAVE(0x10);
		IL2CPP_END_FINALLY(9)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(9)
	{
		IL2CPP_JUMP_TBL(0x10, IL_0010)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0010:
	{
		return;
	}
}
// System.Void System.IO.StreamOperationAsyncResult::ProcessCompletedOperation_InvalidOperationThrowHelper(System.Runtime.ExceptionServices.ExceptionDispatchInfo,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamOperationAsyncResult_ProcessCompletedOperation_InvalidOperationThrowHelper_mA1ED7D2F3D5DE6F75ED044EDA456FA877548F4A7 (ExceptionDispatchInfo_t0C54083F3909DAF986A4DEAA7C047559531E0E2A * ___errInfo0, String_t* ___errMsg1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StreamOperationAsyncResult_ProcessCompletedOperation_InvalidOperationThrowHelper_mA1ED7D2F3D5DE6F75ED044EDA456FA877548F4A7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	Exception_t * G_B3_0 = NULL;
	{
		ExceptionDispatchInfo_t0C54083F3909DAF986A4DEAA7C047559531E0E2A * L_0 = ___errInfo0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		ExceptionDispatchInfo_t0C54083F3909DAF986A4DEAA7C047559531E0E2A * L_1 = ___errInfo0;
		NullCheck(L_1);
		Exception_t * L_2 = ExceptionDispatchInfo_get_SourceException_m212F50A437B8B18AFECE39F2A9F7231787F45F28(L_1, /*hidden argument*/NULL);
		G_B3_0 = L_2;
		goto IL_000c;
	}

IL_000b:
	{
		G_B3_0 = ((Exception_t *)(NULL));
	}

IL_000c:
	{
		V_0 = G_B3_0;
		Exception_t * L_3 = V_0;
		if (L_3)
		{
			goto IL_0017;
		}
	}
	{
		String_t* L_4 = ___errMsg1;
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_5 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_5, L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, NULL, StreamOperationAsyncResult_ProcessCompletedOperation_InvalidOperationThrowHelper_mA1ED7D2F3D5DE6F75ED044EDA456FA877548F4A7_RuntimeMethod_var);
	}

IL_0017:
	{
		String_t* L_6 = ___errMsg1;
		Exception_t * L_7 = V_0;
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_8 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_mC40AA9579B996C6FBAE023590139C16304D81DC6(L_8, L_6, L_7, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, NULL, StreamOperationAsyncResult_ProcessCompletedOperation_InvalidOperationThrowHelper_mA1ED7D2F3D5DE6F75ED044EDA456FA877548F4A7_RuntimeMethod_var);
	}
}
// System.Void System.IO.StreamOperationAsyncResult::ProcessCompletedOperation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamOperationAsyncResult_ProcessCompletedOperation_mCEAD13DA8A64F3CF722EE656F850716F26F9DEFB (StreamOperationAsyncResult_t675AB408CDF1B11AC6F446E24352B441F6422E0F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StreamOperationAsyncResult_ProcessCompletedOperation_mCEAD13DA8A64F3CF722EE656F850716F26F9DEFB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ExceptionDispatchInfo_t0C54083F3909DAF986A4DEAA7C047559531E0E2A * V_0 = NULL;
	Exception_t * V_1 = NULL;
	String_t* V_2 = NULL;
	Exception_t * G_B9_0 = NULL;
	{
		bool L_0 = __this->get__callbackInvoked_4();
		il2cpp_codegen_memory_barrier();
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		ExceptionDispatchInfo_t0C54083F3909DAF986A4DEAA7C047559531E0E2A * L_1 = __this->get__errorInfo_7();
		StreamOperationAsyncResult_ProcessCompletedOperation_InvalidOperationThrowHelper_mA1ED7D2F3D5DE6F75ED044EDA456FA877548F4A7(L_1, _stringLiteral2A3A72D60FE5EEE144584595AF1EBE73035BDDF5, /*hidden argument*/NULL);
	}

IL_001a:
	{
		bool L_2 = __this->get__processCompletedOperationInCallback_8();
		if (L_2)
		{
			goto IL_003c;
		}
	}
	{
		bool L_3 = __this->get__completed_3();
		il2cpp_codegen_memory_barrier();
		if (L_3)
		{
			goto IL_003c;
		}
	}
	{
		ExceptionDispatchInfo_t0C54083F3909DAF986A4DEAA7C047559531E0E2A * L_4 = __this->get__errorInfo_7();
		StreamOperationAsyncResult_ProcessCompletedOperation_InvalidOperationThrowHelper_mA1ED7D2F3D5DE6F75ED044EDA456FA877548F4A7(L_4, _stringLiteral2A3A72D60FE5EEE144584595AF1EBE73035BDDF5, /*hidden argument*/NULL);
	}

IL_003c:
	{
		RuntimeObject* L_5 = __this->get__completedOperation_9();
		if (L_5)
		{
			goto IL_008a;
		}
	}
	{
		ExceptionDispatchInfo_t0C54083F3909DAF986A4DEAA7C047559531E0E2A * L_6 = __this->get__errorInfo_7();
		V_0 = L_6;
		ExceptionDispatchInfo_t0C54083F3909DAF986A4DEAA7C047559531E0E2A * L_7 = V_0;
		if (!L_7)
		{
			goto IL_0056;
		}
	}
	{
		ExceptionDispatchInfo_t0C54083F3909DAF986A4DEAA7C047559531E0E2A * L_8 = V_0;
		NullCheck(L_8);
		Exception_t * L_9 = ExceptionDispatchInfo_get_SourceException_m212F50A437B8B18AFECE39F2A9F7231787F45F28(L_8, /*hidden argument*/NULL);
		G_B9_0 = L_9;
		goto IL_0057;
	}

IL_0056:
	{
		G_B9_0 = ((Exception_t *)(NULL));
	}

IL_0057:
	{
		V_1 = G_B9_0;
		V_2 = _stringLiteralA9F1BA056E1E0571A7B28FDAC15ACDDFBA051A97;
		Exception_t * L_10 = V_1;
		if (!L_10)
		{
			goto IL_007f;
		}
	}
	{
		Exception_t * L_11 = V_1;
		if (!((NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC *)IsInstClass((RuntimeObject*)L_11, NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC_il2cpp_TypeInfo_var)))
		{
			goto IL_007f;
		}
	}
	{
		String_t* L_12 = V_2;
		Exception_t * L_13 = V_1;
		NullCheck(L_13);
		String_t* L_14 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_13);
		NullCheck(L_12);
		bool L_15 = String_Equals_m9C4D78DFA0979504FE31429B64A4C26DF48020D1(L_12, L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_007f;
		}
	}
	{
		ExceptionDispatchInfo_t0C54083F3909DAF986A4DEAA7C047559531E0E2A * L_16 = V_0;
		NullCheck(L_16);
		ExceptionDispatchInfo_Throw_m9630C06EF8D7CDF5BD5DC76144CD98C4D9E8D26F(L_16, /*hidden argument*/NULL);
		goto IL_008a;
	}

IL_007f:
	{
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_17 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_17, _stringLiteral2A3A72D60FE5EEE144584595AF1EBE73035BDDF5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, NULL, StreamOperationAsyncResult_ProcessCompletedOperation_mCEAD13DA8A64F3CF722EE656F850716F26F9DEFB_RuntimeMethod_var);
	}

IL_008a:
	{
		RuntimeObject* L_18 = __this->get__completedOperation_9();
		NullCheck(L_18);
		uint32_t L_19 = InterfaceFuncInvoker0< uint32_t >::Invoke(0 /* System.UInt32 Windows.Foundation.IAsyncInfo::get_Id() */, IAsyncInfo_t9B58E0D0A013D06029CDEAE127A910A69D13FBB5_il2cpp_TypeInfo_var, L_18);
		RuntimeObject* L_20 = __this->get__asyncStreamOperation_2();
		NullCheck(L_20);
		uint32_t L_21 = InterfaceFuncInvoker0< uint32_t >::Invoke(0 /* System.UInt32 Windows.Foundation.IAsyncInfo::get_Id() */, IAsyncInfo_t9B58E0D0A013D06029CDEAE127A910A69D13FBB5_il2cpp_TypeInfo_var, L_20);
		if ((((int32_t)L_19) == ((int32_t)L_21)))
		{
			goto IL_00b2;
		}
	}
	{
		ExceptionDispatchInfo_t0C54083F3909DAF986A4DEAA7C047559531E0E2A * L_22 = __this->get__errorInfo_7();
		StreamOperationAsyncResult_ProcessCompletedOperation_InvalidOperationThrowHelper_mA1ED7D2F3D5DE6F75ED044EDA456FA877548F4A7(L_22, _stringLiteral92246E68663462B3D7A29B98365EBFEC1298A1C5, /*hidden argument*/NULL);
	}

IL_00b2:
	{
		RuntimeObject* L_23 = __this->get__completedOperation_9();
		NullCheck(L_23);
		int32_t L_24 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* Windows.Foundation.AsyncStatus Windows.Foundation.IAsyncInfo::get_Status() */, IAsyncInfo_t9B58E0D0A013D06029CDEAE127A910A69D13FBB5_il2cpp_TypeInfo_var, L_23);
		if ((!(((uint32_t)L_24) == ((uint32_t)3))))
		{
			goto IL_00d9;
		}
	}
	{
		__this->set__bytesCompleted_6((((int64_t)((int64_t)0))));
		RuntimeObject* L_25 = __this->get__completedOperation_9();
		NullCheck(L_25);
		Exception_t * L_26 = InterfaceFuncInvoker0< Exception_t * >::Invoke(2 /* System.Exception Windows.Foundation.IAsyncInfo::get_ErrorCode() */, IAsyncInfo_t9B58E0D0A013D06029CDEAE127A910A69D13FBB5_il2cpp_TypeInfo_var, L_25);
		StreamOperationAsyncResult_ThrowWithIOExceptionDispatchInfo_mB5A5574130A4DB6D1D6412D9EBDEC2BEA118C795(__this, L_26, /*hidden argument*/NULL);
	}

IL_00d9:
	{
		RuntimeObject* L_27 = __this->get__completedOperation_9();
		int64_t* L_28 = __this->get_address_of__bytesCompleted_6();
		VirtActionInvoker2< RuntimeObject*, int64_t* >::Invoke(8 /* System.Void System.IO.StreamOperationAsyncResult::ProcessConcreteCompletedOperation(Windows.Foundation.IAsyncInfo,System.Int64&) */, __this, L_27, (int64_t*)L_28);
		return;
	}
}
// System.Void System.IO.StreamOperationAsyncResult::StreamOperationCompletedCallback(Windows.Foundation.IAsyncInfo,Windows.Foundation.AsyncStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamOperationAsyncResult_StreamOperationCompletedCallback_m830CE1407A7C8E1AFFC4534BCE28959467019B0C (StreamOperationAsyncResult_t675AB408CDF1B11AC6F446E24352B441F6422E0F * __this, RuntimeObject* ___completedOperation0, int32_t ___unusedCompletionStatus1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StreamOperationAsyncResult_StreamOperationCompletedCallback_m830CE1407A7C8E1AFFC4534BCE28959467019B0C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		try
		{ // begin try (depth: 2)
			{
				bool L_0 = __this->get__callbackInvoked_4();
				il2cpp_codegen_memory_barrier();
				if (!L_0)
				{
					goto IL_0015;
				}
			}

IL_000a:
			{
				InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_1 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
				InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_1, _stringLiteralC07E66423E254AD3F245E459E85CFED12D7082DD, /*hidden argument*/NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, StreamOperationAsyncResult_StreamOperationCompletedCallback_m830CE1407A7C8E1AFFC4534BCE28959467019B0C_RuntimeMethod_var);
			}

IL_0015:
			{
				il2cpp_codegen_memory_barrier();
				__this->set__callbackInvoked_4(1);
				RuntimeObject* L_2 = ___completedOperation0;
				if (L_2)
				{
					goto IL_002c;
				}
			}

IL_0021:
			{
				NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC * L_3 = (NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC *)il2cpp_codegen_object_new(NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC_il2cpp_TypeInfo_var);
				NullReferenceException__ctor_mAD32CA6CD05808ED531D14BA18B7AA1E99B8D349(L_3, _stringLiteralA9F1BA056E1E0571A7B28FDAC15ACDDFBA051A97, /*hidden argument*/NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, StreamOperationAsyncResult_StreamOperationCompletedCallback_m830CE1407A7C8E1AFFC4534BCE28959467019B0C_RuntimeMethod_var);
			}

IL_002c:
			{
				RuntimeObject* L_4 = ___completedOperation0;
				__this->set__completedOperation_9(L_4);
				bool L_5 = __this->get__processCompletedOperationInCallback_8();
				if (!L_5)
				{
					goto IL_0041;
				}
			}

IL_003b:
			{
				StreamOperationAsyncResult_ProcessCompletedOperation_mCEAD13DA8A64F3CF722EE656F850716F26F9DEFB(__this, /*hidden argument*/NULL);
			}

IL_0041:
			{
				IL2CPP_LEAVE(0x81, FINALLY_005a);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
				goto CATCH_0043;
			throw e;
		}

CATCH_0043:
		{ // begin catch(System.Exception)
			V_0 = ((Exception_t *)__exception_local);
			__this->set__bytesCompleted_6((((int64_t)((int64_t)0))));
			Exception_t * L_6 = V_0;
			ExceptionDispatchInfo_t0C54083F3909DAF986A4DEAA7C047559531E0E2A * L_7 = ExceptionDispatchInfo_Capture_m8E5F721466EDFE9AA8BC532F9AE7A859E0766E23(L_6, /*hidden argument*/NULL);
			__this->set__errorInfo_7(L_7);
			IL2CPP_LEAVE(0x81, FINALLY_005a);
		} // end catch (depth: 2)
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005a;
	}

FINALLY_005a:
	{ // begin finally (depth: 1)
		{
			il2cpp_codegen_memory_barrier();
			__this->set__completed_3(1);
			Interlocked_MemoryBarrier_m1C58A0425F80BBD7E9811A603B4F48312BFD83FD(/*hidden argument*/NULL);
			ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 * L_8 = __this->get__waitHandle_5();
			il2cpp_codegen_memory_barrier();
			if (!L_8)
			{
				goto IL_0080;
			}
		}

IL_0072:
		{
			ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 * L_9 = __this->get__waitHandle_5();
			il2cpp_codegen_memory_barrier();
			NullCheck(L_9);
			EventWaitHandle_Set_m7959A86A39735296FC949EC86FDA42A6CFAAB94C(L_9, /*hidden argument*/NULL);
		}

IL_0080:
		{
			IL2CPP_RESET_LEAVE(0x81);
			IL2CPP_END_FINALLY(90)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(90)
	{
		IL2CPP_JUMP_TBL(0x81, IL_0081)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0081:
	{
		AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * L_10 = __this->get__userCompletionCallback_0();
		if (!L_10)
		{
			goto IL_0095;
		}
	}
	{
		AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * L_11 = __this->get__userCompletionCallback_0();
		NullCheck(L_11);
		AsyncCallback_Invoke_m1830E56CD41BDD255C144AA16A9426EEE301617C(L_11, __this, /*hidden argument*/NULL);
	}

IL_0095:
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
// Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32> System.IO.StreamOperationsImplementation::ReadAsync_MemoryStream(System.IO.Stream,Windows.Storage.Streams.IBuffer,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StreamOperationsImplementation_ReadAsync_MemoryStream_mD332B977EA293A31B70F8475EAA0D270BB8FE0AB (Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___stream0, RuntimeObject* ___buffer1, uint32_t ___count2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StreamOperationsImplementation_ReadAsync_MemoryStream_mD332B977EA293A31B70F8475EAA0D270BB8FE0AB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject* L_0 = ___buffer1;
		NullCheck(L_0);
		InterfaceActionInvoker1< uint32_t >::Invoke(2 /* System.Void Windows.Storage.Streams.IBuffer::put_Length(System.UInt32) */, IBuffer_t13BCDB1D6DE32F79AB9F9E149514026CA6B4AAEF_il2cpp_TypeInfo_var, L_0, 0);
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_1 = ___stream0;
		V_0 = ((MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C *)IsInstClass((RuntimeObject*)L_1, MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C_il2cpp_TypeInfo_var));
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_2 = V_0;
			MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_3 = V_0;
			NullCheck(L_3);
			int64_t L_4 = VirtFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_3);
			uint32_t L_5 = ___count2;
			RuntimeObject* L_6 = WindowsRuntimeBufferExtensions_GetWindowsRuntimeBuffer_m3F14338C22A85130806184FA004EA1E0868AC147(L_2, (((int32_t)((int32_t)L_4))), L_5, /*hidden argument*/NULL);
			V_1 = L_6;
			RuntimeObject* L_7 = V_1;
			NullCheck(L_7);
			uint32_t L_8 = InterfaceFuncInvoker0< uint32_t >::Invoke(1 /* System.UInt32 Windows.Storage.Streams.IBuffer::get_Length() */, IBuffer_t13BCDB1D6DE32F79AB9F9E149514026CA6B4AAEF_il2cpp_TypeInfo_var, L_7);
			if ((!(((uint32_t)L_8) > ((uint32_t)0))))
			{
				goto IL_0035;
			}
		}

IL_0026:
		{
			MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_9 = V_0;
			RuntimeObject* L_10 = V_1;
			NullCheck(L_10);
			uint32_t L_11 = InterfaceFuncInvoker0< uint32_t >::Invoke(1 /* System.UInt32 Windows.Storage.Streams.IBuffer::get_Length() */, IBuffer_t13BCDB1D6DE32F79AB9F9E149514026CA6B4AAEF_il2cpp_TypeInfo_var, L_10);
			NullCheck(L_9);
			VirtFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(26 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_9, (((int64_t)((uint64_t)L_11))), 1);
		}

IL_0035:
		{
			RuntimeObject* L_12 = V_1;
			RuntimeObject* L_13 = AsyncInfo_CreateCompletedOperation_TisIBuffer_t13BCDB1D6DE32F79AB9F9E149514026CA6B4AAEF_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_m4BBBA45332D7BF768A73731B47BD0157505415D7(L_12, /*hidden argument*/AsyncInfo_CreateCompletedOperation_TisIBuffer_t13BCDB1D6DE32F79AB9F9E149514026CA6B4AAEF_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_m4BBBA45332D7BF768A73731B47BD0157505415D7_RuntimeMethod_var);
			V_2 = L_13;
			goto IL_0046;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_003e;
		throw e;
	}

CATCH_003e:
	{ // begin catch(System.Exception)
		RuntimeObject* L_14 = AsyncInfo_CreateFaultedOperation_TisIBuffer_t13BCDB1D6DE32F79AB9F9E149514026CA6B4AAEF_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_m34BD41652A8DE822B2D096EF80B99E894E760FED(((Exception_t *)__exception_local), /*hidden argument*/AsyncInfo_CreateFaultedOperation_TisIBuffer_t13BCDB1D6DE32F79AB9F9E149514026CA6B4AAEF_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_m34BD41652A8DE822B2D096EF80B99E894E760FED_RuntimeMethod_var);
		V_2 = L_14;
		goto IL_0046;
	} // end catch (depth: 1)

IL_0046:
	{
		RuntimeObject* L_15 = V_2;
		return L_15;
	}
}
// Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32> System.IO.StreamOperationsImplementation::ReadAsync_AbstractStream(System.IO.Stream,Windows.Storage.Streams.IBuffer,System.UInt32,Windows.Storage.Streams.InputStreamOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StreamOperationsImplementation_ReadAsync_AbstractStream_m778BD91CC4C43AEBE54B44DE842503DE52948317 (Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___stream0, RuntimeObject* ___buffer1, uint32_t ___count2, uint32_t ___options3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StreamOperationsImplementation_ReadAsync_AbstractStream_m778BD91CC4C43AEBE54B44DE842503DE52948317_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass1_0_t9B61E42C5DA9BB4B29626074CC9C84D1012DF563 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass1_0_t9B61E42C5DA9BB4B29626074CC9C84D1012DF563 * L_0 = (U3CU3Ec__DisplayClass1_0_t9B61E42C5DA9BB4B29626074CC9C84D1012DF563 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass1_0_t9B61E42C5DA9BB4B29626074CC9C84D1012DF563_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass1_0__ctor_m3F1B229C6A9B7ADAA910766D1243B532076D313D(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass1_0_t9B61E42C5DA9BB4B29626074CC9C84D1012DF563 * L_1 = V_0;
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_2 = ___stream0;
		NullCheck(L_1);
		L_1->set_stream_1(L_2);
		U3CU3Ec__DisplayClass1_0_t9B61E42C5DA9BB4B29626074CC9C84D1012DF563 * L_3 = V_0;
		uint32_t L_4 = ___options3;
		NullCheck(L_3);
		L_3->set_options_3(L_4);
		U3CU3Ec__DisplayClass1_0_t9B61E42C5DA9BB4B29626074CC9C84D1012DF563 * L_5 = V_0;
		uint32_t L_6 = ___count2;
		NullCheck(L_5);
		L_5->set_bytesRequested_2(L_6);
		U3CU3Ec__DisplayClass1_0_t9B61E42C5DA9BB4B29626074CC9C84D1012DF563 * L_7 = V_0;
		RuntimeObject* L_8 = ___buffer1;
		NullCheck(L_7);
		L_7->set_dataBuffer_0(((WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22 *)IsInstSealed((RuntimeObject*)L_8, WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22_il2cpp_TypeInfo_var)));
		U3CU3Ec__DisplayClass1_0_t9B61E42C5DA9BB4B29626074CC9C84D1012DF563 * L_9 = V_0;
		NullCheck(L_9);
		RuntimeObject* L_10 = L_9->get_dataBuffer_0();
		if (L_10)
		{
			goto IL_004a;
		}
	}
	{
		U3CU3Ec__DisplayClass1_0_t9B61E42C5DA9BB4B29626074CC9C84D1012DF563 * L_11 = V_0;
		RuntimeObject* L_12 = ___buffer1;
		NullCheck(L_12);
		uint32_t L_13 = InterfaceFuncInvoker0< uint32_t >::Invoke(0 /* System.UInt32 Windows.Storage.Streams.IBuffer::get_Capacity() */, IBuffer_t13BCDB1D6DE32F79AB9F9E149514026CA6B4AAEF_il2cpp_TypeInfo_var, L_12);
		IL2CPP_RUNTIME_CLASS_INIT(Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var);
		uint32_t L_14 = Math_Min_mD7CBC84B8943F900245120DABABF771D701A1655(((int32_t)2147483647LL), L_13, /*hidden argument*/NULL);
		RuntimeObject* L_15 = WindowsRuntimeBuffer_Create_mE44C1ABEE68D89B3BBF4899C90EB6FBC8FE5101F(L_14, /*hidden argument*/NULL);
		NullCheck(L_11);
		L_11->set_dataBuffer_0(L_15);
	}

IL_004a:
	{
		U3CU3Ec__DisplayClass1_0_t9B61E42C5DA9BB4B29626074CC9C84D1012DF563 * L_16 = V_0;
		Func_3_t10591BE50BF875E1CE2515E7AAE2A31E3D110A49 * L_17 = (Func_3_t10591BE50BF875E1CE2515E7AAE2A31E3D110A49 *)il2cpp_codegen_object_new(Func_3_t10591BE50BF875E1CE2515E7AAE2A31E3D110A49_il2cpp_TypeInfo_var);
		Func_3__ctor_m55C79006B4906B0377A4440C3F4B828A743C1A6F(L_17, L_16, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass1_0_U3CReadAsync_AbstractStreamU3Eb__0_mF7B09B203A347D87A4D31F2BD0CF916B98250325_RuntimeMethod_var), /*hidden argument*/Func_3__ctor_m55C79006B4906B0377A4440C3F4B828A743C1A6F_RuntimeMethod_var);
		RuntimeObject* L_18 = AsyncInfo_Run_TisIBuffer_t13BCDB1D6DE32F79AB9F9E149514026CA6B4AAEF_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_m3AD268CB4DAC7A0084F1CBC76525A7E6FF4CFE54(L_17, /*hidden argument*/AsyncInfo_Run_TisIBuffer_t13BCDB1D6DE32F79AB9F9E149514026CA6B4AAEF_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_m3AD268CB4DAC7A0084F1CBC76525A7E6FF4CFE54_RuntimeMethod_var);
		return L_18;
	}
}
// Windows.Foundation.IAsyncOperationWithProgress`2<System.UInt32,System.UInt32> System.IO.StreamOperationsImplementation::WriteAsync_AbstractStream(System.IO.Stream,Windows.Storage.Streams.IBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StreamOperationsImplementation_WriteAsync_AbstractStream_m21017F427664FD8D13B2408E5338ED0FFD7F253C (Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___stream0, RuntimeObject* ___buffer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StreamOperationsImplementation_WriteAsync_AbstractStream_m21017F427664FD8D13B2408E5338ED0FFD7F253C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass2_0_tF7A26B09867A566BC9F7FE9AF41DD97CF7DD9C14 * V_0 = NULL;
	Func_3_tA53508562A6317892513AEFC0328405DBBD51375 * V_1 = NULL;
	{
		U3CU3Ec__DisplayClass2_0_tF7A26B09867A566BC9F7FE9AF41DD97CF7DD9C14 * L_0 = (U3CU3Ec__DisplayClass2_0_tF7A26B09867A566BC9F7FE9AF41DD97CF7DD9C14 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass2_0_tF7A26B09867A566BC9F7FE9AF41DD97CF7DD9C14_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass2_0__ctor_mFDAE4C079FE8B880EF7687062561C35FC65BA223(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass2_0_tF7A26B09867A566BC9F7FE9AF41DD97CF7DD9C14 * L_1 = V_0;
		RuntimeObject* L_2 = ___buffer1;
		NullCheck(L_1);
		L_1->set_buffer_0(L_2);
		U3CU3Ec__DisplayClass2_0_tF7A26B09867A566BC9F7FE9AF41DD97CF7DD9C14 * L_3 = V_0;
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_4 = ___stream0;
		NullCheck(L_3);
		L_3->set_stream_1(L_4);
		U3CU3Ec__DisplayClass2_0_tF7A26B09867A566BC9F7FE9AF41DD97CF7DD9C14 * L_5 = V_0;
		NullCheck(L_5);
		RuntimeObject* L_6 = L_5->get_buffer_0();
		U3CU3Ec__DisplayClass2_0_tF7A26B09867A566BC9F7FE9AF41DD97CF7DD9C14 * L_7 = V_0;
		NullCheck(L_7);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** L_8 = L_7->get_address_of_data_2();
		U3CU3Ec__DisplayClass2_0_tF7A26B09867A566BC9F7FE9AF41DD97CF7DD9C14 * L_9 = V_0;
		NullCheck(L_9);
		int32_t* L_10 = L_9->get_address_of_offset_3();
		bool L_11 = WindowsRuntimeBufferExtensions_TryGetUnderlyingData_m4FDB38F7DC5B4E354B3D043A73E6CC55D47C2F02(L_6, (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821**)L_8, (int32_t*)L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_003c;
		}
	}
	{
		U3CU3Ec__DisplayClass2_0_tF7A26B09867A566BC9F7FE9AF41DD97CF7DD9C14 * L_12 = V_0;
		Func_3_tA53508562A6317892513AEFC0328405DBBD51375 * L_13 = (Func_3_tA53508562A6317892513AEFC0328405DBBD51375 *)il2cpp_codegen_object_new(Func_3_tA53508562A6317892513AEFC0328405DBBD51375_il2cpp_TypeInfo_var);
		Func_3__ctor_m3C72D49DA993114739E2A1DBF5E0112FB24AF119(L_13, L_12, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass2_0_U3CWriteAsync_AbstractStreamU3Eb__0_m3AEE1111FD567723DE3694810471BA166AD0668B_RuntimeMethod_var), /*hidden argument*/Func_3__ctor_m3C72D49DA993114739E2A1DBF5E0112FB24AF119_RuntimeMethod_var);
		V_1 = L_13;
		goto IL_0049;
	}

IL_003c:
	{
		U3CU3Ec__DisplayClass2_0_tF7A26B09867A566BC9F7FE9AF41DD97CF7DD9C14 * L_14 = V_0;
		Func_3_tA53508562A6317892513AEFC0328405DBBD51375 * L_15 = (Func_3_tA53508562A6317892513AEFC0328405DBBD51375 *)il2cpp_codegen_object_new(Func_3_tA53508562A6317892513AEFC0328405DBBD51375_il2cpp_TypeInfo_var);
		Func_3__ctor_m3C72D49DA993114739E2A1DBF5E0112FB24AF119(L_15, L_14, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass2_0_U3CWriteAsync_AbstractStreamU3Eb__1_m9041D8EDB0504B8C6D7E82BE5746FB980F713EBA_RuntimeMethod_var), /*hidden argument*/Func_3__ctor_m3C72D49DA993114739E2A1DBF5E0112FB24AF119_RuntimeMethod_var);
		V_1 = L_15;
	}

IL_0049:
	{
		Func_3_tA53508562A6317892513AEFC0328405DBBD51375 * L_16 = V_1;
		RuntimeObject* L_17 = AsyncInfo_Run_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_mB060DC01F0DE191B5057E0DDACF3A3ABCBDF2FBE(L_16, /*hidden argument*/AsyncInfo_Run_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_mB060DC01F0DE191B5057E0DDACF3A3ABCBDF2FBE_RuntimeMethod_var);
		return L_17;
	}
}
// Windows.Foundation.IAsyncOperation`1<System.Boolean> System.IO.StreamOperationsImplementation::FlushAsync_AbstractStream(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StreamOperationsImplementation_FlushAsync_AbstractStream_m9FC5EE6670A05587FD927A09D8F8F8FF8194F557 (Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___stream0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StreamOperationsImplementation_FlushAsync_AbstractStream_m9FC5EE6670A05587FD927A09D8F8F8FF8194F557_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec__DisplayClass3_0_t38CB4DCBE909850E7FF45FA79C292F5EFC11B339 * L_0 = (U3CU3Ec__DisplayClass3_0_t38CB4DCBE909850E7FF45FA79C292F5EFC11B339 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass3_0_t38CB4DCBE909850E7FF45FA79C292F5EFC11B339_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass3_0__ctor_m1F36BD3249B8808F4F2A5707250834193E6FDC67(L_0, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass3_0_t38CB4DCBE909850E7FF45FA79C292F5EFC11B339 * L_1 = L_0;
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_2 = ___stream0;
		NullCheck(L_1);
		L_1->set_stream_0(L_2);
		Func_2_tBAECAB30BE1F21ACC73D0A7C4ACB219CA858CABD * L_3 = (Func_2_tBAECAB30BE1F21ACC73D0A7C4ACB219CA858CABD *)il2cpp_codegen_object_new(Func_2_tBAECAB30BE1F21ACC73D0A7C4ACB219CA858CABD_il2cpp_TypeInfo_var);
		Func_2__ctor_m29051657C83E90759D06A6805A5F6B3DAB1FAE43(L_3, L_1, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass3_0_U3CFlushAsync_AbstractStreamU3Eb__0_m98A2ECB7B86585805445D61AA12109EB9C64CC91_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m29051657C83E90759D06A6805A5F6B3DAB1FAE43_RuntimeMethod_var);
		RuntimeObject* L_4 = AsyncInfo_Run_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_m8F84AC2AB21D2BF30640B0719BB41FAE13177195(L_3, /*hidden argument*/AsyncInfo_Run_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_m8F84AC2AB21D2BF30640B0719BB41FAE13177195_RuntimeMethod_var);
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
// System.Void System.IO.StreamOperationsImplementation_<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_m3F1B229C6A9B7ADAA910766D1243B532076D313D (U3CU3Ec__DisplayClass1_0_t9B61E42C5DA9BB4B29626074CC9C84D1012DF563 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Threading.Tasks.Task`1<Windows.Storage.Streams.IBuffer> System.IO.StreamOperationsImplementation_<>c__DisplayClass1_0::<ReadAsync_AbstractStream>b__0(System.Threading.CancellationToken,System.IProgress`1<System.UInt32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t84A3E8ADA0C56D0776B0FCEBCEA98E253DB4385C * U3CU3Ec__DisplayClass1_0_U3CReadAsync_AbstractStreamU3Eb__0_mF7B09B203A347D87A4D31F2BD0CF916B98250325 (U3CU3Ec__DisplayClass1_0_t9B61E42C5DA9BB4B29626074CC9C84D1012DF563 * __this, CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  ___cancelToken0, RuntimeObject* ___progressListener1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass1_0_U3CReadAsync_AbstractStreamU3Eb__0_mF7B09B203A347D87A4D31F2BD0CF916B98250325_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_tD986623175A57F547465B50AED2AC7B903115FD7  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncTaskMethodBuilder_1_tFC83304E06E318479094E86E267206CBFA9E1423  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  L_0 = ___cancelToken0;
		(&V_0)->set_cancelToken_3(L_0);
		RuntimeObject* L_1 = ___progressListener1;
		(&V_0)->set_progressListener_4(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_1_tFC83304E06E318479094E86E267206CBFA9E1423_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_tFC83304E06E318479094E86E267206CBFA9E1423  L_2 = AsyncTaskMethodBuilder_1_Create_mCF6DDD6F426AE0A5B0C59A7147E4FE08FE463F8A(/*hidden argument*/AsyncTaskMethodBuilder_1_Create_mCF6DDD6F426AE0A5B0C59A7147E4FE08FE463F8A_RuntimeMethod_var);
		(&V_0)->set_U3CU3Et__builder_1(L_2);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_tD986623175A57F547465B50AED2AC7B903115FD7  L_3 = V_0;
		AsyncTaskMethodBuilder_1_tFC83304E06E318479094E86E267206CBFA9E1423  L_4 = L_3.get_U3CU3Et__builder_1();
		V_1 = L_4;
		AsyncTaskMethodBuilder_1_Start_TisU3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_tD986623175A57F547465B50AED2AC7B903115FD7_m526004CDBB786CD58BCFB32169C0C2CB82250E98((AsyncTaskMethodBuilder_1_tFC83304E06E318479094E86E267206CBFA9E1423 *)(&V_1), (U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_tD986623175A57F547465B50AED2AC7B903115FD7 *)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_1_Start_TisU3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_tD986623175A57F547465B50AED2AC7B903115FD7_m526004CDBB786CD58BCFB32169C0C2CB82250E98_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_tFC83304E06E318479094E86E267206CBFA9E1423 * L_5 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		Task_1_t84A3E8ADA0C56D0776B0FCEBCEA98E253DB4385C * L_6 = AsyncTaskMethodBuilder_1_get_Task_m6483744D75093B4167F14A0F978411B9FA29214D((AsyncTaskMethodBuilder_1_tFC83304E06E318479094E86E267206CBFA9E1423 *)L_5, /*hidden argument*/AsyncTaskMethodBuilder_1_get_Task_m6483744D75093B4167F14A0F978411B9FA29214D_RuntimeMethod_var);
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
// System.Void System.IO.StreamOperationsImplementation_<>c__DisplayClass1_0_<<ReadAsync_AbstractStream>b__0>d::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_MoveNext_m71F1405BAE4A1E1B2D5FF6D4AC425053EEB34FC9 (U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_tD986623175A57F547465B50AED2AC7B903115FD7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_MoveNext_m71F1405BAE4A1E1B2D5FF6D4AC425053EEB34FC9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	U3CU3Ec__DisplayClass1_0_t9B61E42C5DA9BB4B29626074CC9C84D1012DF563 * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	bool V_3 = false;
	int32_t V_4 = 0;
	ConfiguredTaskAwaiter_t18D0589F789FFE82A30A223888FB7C5BED32C63E  V_5;
	memset((&V_5), 0, sizeof(V_5));
	ConfiguredTaskAwaitable_1_t10E65A50D6EC08956E9F550CD64330F4DED0D38A  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Exception_t * V_7 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B19_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		U3CU3Ec__DisplayClass1_0_t9B61E42C5DA9BB4B29626074CC9C84D1012DF563 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0054;
			}
		}

IL_0011:
		{
			U3CU3Ec__DisplayClass1_0_t9B61E42C5DA9BB4B29626074CC9C84D1012DF563 * L_3 = V_1;
			NullCheck(L_3);
			RuntimeObject* L_4 = L_3->get_dataBuffer_0();
			NullCheck(L_4);
			InterfaceActionInvoker1< uint32_t >::Invoke(2 /* System.Void Windows.Storage.Streams.IBuffer::put_Length(System.UInt32) */, IBuffer_t13BCDB1D6DE32F79AB9F9E149514026CA6B4AAEF_il2cpp_TypeInfo_var, L_4, 0);
			U3CU3Ec__DisplayClass1_0_t9B61E42C5DA9BB4B29626074CC9C84D1012DF563 * L_5 = V_1;
			NullCheck(L_5);
			RuntimeObject* L_6 = L_5->get_dataBuffer_0();
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** L_7 = __this->get_address_of_U3CdataU3E5__2_5();
			int32_t* L_8 = __this->get_address_of_U3CoffsetU3E5__3_6();
			WindowsRuntimeBufferExtensions_TryGetUnderlyingData_m4FDB38F7DC5B4E354B3D043A73E6CC55D47C2F02(L_6, (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821**)L_7, (int32_t*)L_8, /*hidden argument*/NULL);
			CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB * L_9 = __this->get_address_of_cancelToken_3();
			bool L_10 = CancellationToken_get_IsCancellationRequested_mCF3521778F20F7048B7121885794B9562324447D((CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB *)L_9, /*hidden argument*/NULL);
			V_3 = L_10;
			__this->set_U3CbytesCompletedU3E5__4_7(0);
			goto IL_017c;
		}

IL_004d:
		{
			__this->set_U3CbytesReadU3E5__5_8(0);
		}

IL_0054:
		{
		}

IL_0055:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_11 = V_0;
				if (!L_11)
				{
					goto IL_00c7;
				}
			}

IL_0058:
			{
				U3CU3Ec__DisplayClass1_0_t9B61E42C5DA9BB4B29626074CC9C84D1012DF563 * L_12 = V_1;
				NullCheck(L_12);
				Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_13 = L_12->get_stream_1();
				ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_14 = __this->get_U3CdataU3E5__2_5();
				int32_t L_15 = __this->get_U3CoffsetU3E5__3_6();
				int32_t L_16 = __this->get_U3CbytesCompletedU3E5__4_7();
				U3CU3Ec__DisplayClass1_0_t9B61E42C5DA9BB4B29626074CC9C84D1012DF563 * L_17 = V_1;
				NullCheck(L_17);
				int32_t L_18 = L_17->get_bytesRequested_2();
				int32_t L_19 = __this->get_U3CbytesCompletedU3E5__4_7();
				CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  L_20 = __this->get_cancelToken_3();
				NullCheck(L_13);
				Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87 * L_21 = VirtFuncInvoker4< Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87 *, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t, CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  >::Invoke(22 /* System.Threading.Tasks.Task`1<System.Int32> System.IO.Stream::ReadAsync(System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken) */, L_13, L_14, ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)L_16)), ((int32_t)il2cpp_codegen_subtract((int32_t)L_18, (int32_t)L_19)), L_20);
				NullCheck(L_21);
				ConfiguredTaskAwaitable_1_t10E65A50D6EC08956E9F550CD64330F4DED0D38A  L_22 = Task_1_ConfigureAwait_m88DF0C431456B72CA5CF2534AE96969FDB86F982(L_21, (bool)0, /*hidden argument*/Task_1_ConfigureAwait_m88DF0C431456B72CA5CF2534AE96969FDB86F982_RuntimeMethod_var);
				V_6 = L_22;
				ConfiguredTaskAwaiter_t18D0589F789FFE82A30A223888FB7C5BED32C63E  L_23 = ConfiguredTaskAwaitable_1_GetAwaiter_m10B0B84F72A27E623BD94882380E582459F8B8DE((ConfiguredTaskAwaitable_1_t10E65A50D6EC08956E9F550CD64330F4DED0D38A *)(&V_6), /*hidden argument*/ConfiguredTaskAwaitable_1_GetAwaiter_m10B0B84F72A27E623BD94882380E582459F8B8DE_RuntimeMethod_var);
				V_5 = L_23;
				bool L_24 = ConfiguredTaskAwaiter_get_IsCompleted_mCBD6C3EF024E1D7C538268F338BD0C4BA712FA92((ConfiguredTaskAwaiter_t18D0589F789FFE82A30A223888FB7C5BED32C63E *)(&V_5), /*hidden argument*/ConfiguredTaskAwaiter_get_IsCompleted_mCBD6C3EF024E1D7C538268F338BD0C4BA712FA92_RuntimeMethod_var);
				if (L_24)
				{
					goto IL_00e4;
				}
			}

IL_00a3:
			{
				int32_t L_25 = 0;
				V_0 = L_25;
				__this->set_U3CU3E1__state_0(L_25);
				ConfiguredTaskAwaiter_t18D0589F789FFE82A30A223888FB7C5BED32C63E  L_26 = V_5;
				__this->set_U3CU3Eu__1_9(L_26);
				AsyncTaskMethodBuilder_1_tFC83304E06E318479094E86E267206CBFA9E1423 * L_27 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t18D0589F789FFE82A30A223888FB7C5BED32C63E_TisU3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_tD986623175A57F547465B50AED2AC7B903115FD7_mDA09C9E512AF36506F0CBC85775A4FB17F906D37((AsyncTaskMethodBuilder_1_tFC83304E06E318479094E86E267206CBFA9E1423 *)L_27, (ConfiguredTaskAwaiter_t18D0589F789FFE82A30A223888FB7C5BED32C63E *)(&V_5), (U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_tD986623175A57F547465B50AED2AC7B903115FD7 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t18D0589F789FFE82A30A223888FB7C5BED32C63E_TisU3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_tD986623175A57F547465B50AED2AC7B903115FD7_mDA09C9E512AF36506F0CBC85775A4FB17F906D37_RuntimeMethod_var);
				goto IL_01b8;
			}

IL_00c7:
			{
				ConfiguredTaskAwaiter_t18D0589F789FFE82A30A223888FB7C5BED32C63E  L_28 = __this->get_U3CU3Eu__1_9();
				V_5 = L_28;
				ConfiguredTaskAwaiter_t18D0589F789FFE82A30A223888FB7C5BED32C63E * L_29 = __this->get_address_of_U3CU3Eu__1_9();
				il2cpp_codegen_initobj(L_29, sizeof(ConfiguredTaskAwaiter_t18D0589F789FFE82A30A223888FB7C5BED32C63E ));
				int32_t L_30 = (-1);
				V_0 = L_30;
				__this->set_U3CU3E1__state_0(L_30);
			}

IL_00e4:
			{
				int32_t L_31 = ConfiguredTaskAwaiter_GetResult_m05FB789E6901C9496B94A722DF99239A979A2623((ConfiguredTaskAwaiter_t18D0589F789FFE82A30A223888FB7C5BED32C63E *)(&V_5), /*hidden argument*/ConfiguredTaskAwaiter_GetResult_m05FB789E6901C9496B94A722DF99239A979A2623_RuntimeMethod_var);
				V_4 = L_31;
				int32_t L_32 = V_4;
				__this->set_U3CbytesReadU3E5__5_8(L_32);
				int32_t L_33 = __this->get_U3CbytesCompletedU3E5__4_7();
				int32_t L_34 = __this->get_U3CbytesReadU3E5__5_8();
				__this->set_U3CbytesCompletedU3E5__4_7(((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)L_34)));
				goto IL_011f;
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (OperationCanceledException_tD28B1AE59ACCE4D46333BFE398395B8D75D76A90_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
				goto CATCH_010a;
			throw e;
		}

CATCH_010a:
		{ // begin catch(System.OperationCanceledException)
			{
				int32_t L_35 = __this->get_U3CbytesCompletedU3E5__4_7();
				if (L_35)
				{
					goto IL_011d;
				}
			}

IL_0113:
			{
				int32_t L_36 = __this->get_U3CbytesReadU3E5__5_8();
				if (L_36)
				{
					goto IL_011d;
				}
			}

IL_011b:
			{
				IL2CPP_RAISE_MANAGED_EXCEPTION(__exception_local, NULL, U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_MoveNext_m71F1405BAE4A1E1B2D5FF6D4AC425053EEB34FC9_RuntimeMethod_var);
			}

IL_011d:
			{
				goto IL_011f;
			}
		} // end catch (depth: 2)

IL_011f:
		{
			U3CU3Ec__DisplayClass1_0_t9B61E42C5DA9BB4B29626074CC9C84D1012DF563 * L_37 = V_1;
			NullCheck(L_37);
			RuntimeObject* L_38 = L_37->get_dataBuffer_0();
			int32_t L_39 = __this->get_U3CbytesCompletedU3E5__4_7();
			NullCheck(L_38);
			InterfaceActionInvoker1< uint32_t >::Invoke(2 /* System.Void Windows.Storage.Streams.IBuffer::put_Length(System.UInt32) */, IBuffer_t13BCDB1D6DE32F79AB9F9E149514026CA6B4AAEF_il2cpp_TypeInfo_var, L_38, L_39);
			U3CU3Ec__DisplayClass1_0_t9B61E42C5DA9BB4B29626074CC9C84D1012DF563 * L_40 = V_1;
			NullCheck(L_40);
			uint32_t L_41 = L_40->get_options_3();
			if ((((int32_t)L_41) == ((int32_t)1)))
			{
				goto IL_015c;
			}
		}

IL_0139:
		{
			int32_t L_42 = __this->get_U3CbytesReadU3E5__5_8();
			if (!L_42)
			{
				goto IL_015c;
			}
		}

IL_0141:
		{
			int32_t L_43 = __this->get_U3CbytesCompletedU3E5__4_7();
			U3CU3Ec__DisplayClass1_0_t9B61E42C5DA9BB4B29626074CC9C84D1012DF563 * L_44 = V_1;
			NullCheck(L_44);
			int32_t L_45 = L_44->get_bytesRequested_2();
			if ((((int32_t)L_43) == ((int32_t)L_45)))
			{
				goto IL_015c;
			}
		}

IL_014f:
		{
			CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB * L_46 = __this->get_address_of_cancelToken_3();
			bool L_47 = CancellationToken_get_IsCancellationRequested_mCF3521778F20F7048B7121885794B9562324447D((CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB *)L_46, /*hidden argument*/NULL);
			G_B19_0 = ((int32_t)(L_47));
			goto IL_015d;
		}

IL_015c:
		{
			G_B19_0 = 1;
		}

IL_015d:
		{
			V_3 = (bool)G_B19_0;
			RuntimeObject* L_48 = __this->get_progressListener_4();
			if (!L_48)
			{
				goto IL_017c;
			}
		}

IL_0166:
		{
			RuntimeObject* L_49 = __this->get_progressListener_4();
			U3CU3Ec__DisplayClass1_0_t9B61E42C5DA9BB4B29626074CC9C84D1012DF563 * L_50 = V_1;
			NullCheck(L_50);
			RuntimeObject* L_51 = L_50->get_dataBuffer_0();
			NullCheck(L_51);
			uint32_t L_52 = InterfaceFuncInvoker0< uint32_t >::Invoke(1 /* System.UInt32 Windows.Storage.Streams.IBuffer::get_Length() */, IBuffer_t13BCDB1D6DE32F79AB9F9E149514026CA6B4AAEF_il2cpp_TypeInfo_var, L_51);
			NullCheck(L_49);
			InterfaceActionInvoker1< uint32_t >::Invoke(0 /* System.Void System.IProgress`1<System.UInt32>::Report(!0) */, IProgress_1_t8476E09305DBDFA85A24783C4C7E68BFD2C51DB6_il2cpp_TypeInfo_var, L_49, L_52);
		}

IL_017c:
		{
			bool L_53 = V_3;
			if (!L_53)
			{
				goto IL_004d;
			}
		}

IL_0182:
		{
			U3CU3Ec__DisplayClass1_0_t9B61E42C5DA9BB4B29626074CC9C84D1012DF563 * L_54 = V_1;
			NullCheck(L_54);
			RuntimeObject* L_55 = L_54->get_dataBuffer_0();
			V_2 = L_55;
			goto IL_01a4;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_018b;
		throw e;
	}

CATCH_018b:
	{ // begin catch(System.Exception)
		V_7 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_tFC83304E06E318479094E86E267206CBFA9E1423 * L_56 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_57 = V_7;
		AsyncTaskMethodBuilder_1_SetException_m3ED63AEBB9A3BC66582F32FD3FC1B66F48CF679B((AsyncTaskMethodBuilder_1_tFC83304E06E318479094E86E267206CBFA9E1423 *)L_56, L_57, /*hidden argument*/AsyncTaskMethodBuilder_1_SetException_m3ED63AEBB9A3BC66582F32FD3FC1B66F48CF679B_RuntimeMethod_var);
		goto IL_01b8;
	} // end catch (depth: 1)

IL_01a4:
	{
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_tFC83304E06E318479094E86E267206CBFA9E1423 * L_58 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_59 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_mE8D89333A763D06C5B5BE336A729D897A24DD9C6((AsyncTaskMethodBuilder_1_tFC83304E06E318479094E86E267206CBFA9E1423 *)L_58, L_59, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_mE8D89333A763D06C5B5BE336A729D897A24DD9C6_RuntimeMethod_var);
	}

IL_01b8:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_MoveNext_m71F1405BAE4A1E1B2D5FF6D4AC425053EEB34FC9_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_tD986623175A57F547465B50AED2AC7B903115FD7 * _thisAdjusted = reinterpret_cast<U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_tD986623175A57F547465B50AED2AC7B903115FD7 *>(__this + 1);
	U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_MoveNext_m71F1405BAE4A1E1B2D5FF6D4AC425053EEB34FC9(_thisAdjusted, method);
}
// System.Void System.IO.StreamOperationsImplementation_<>c__DisplayClass1_0_<<ReadAsync_AbstractStream>b__0>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_SetStateMachine_mAB18BD9CD69ADDCFBE2B48E4ABB35872BAE54483 (U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_tD986623175A57F547465B50AED2AC7B903115FD7 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_SetStateMachine_mAB18BD9CD69ADDCFBE2B48E4ABB35872BAE54483_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_tFC83304E06E318479094E86E267206CBFA9E1423 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m34089C89A112F9460E7981F551DE769C72289246((AsyncTaskMethodBuilder_1_tFC83304E06E318479094E86E267206CBFA9E1423 *)L_0, L_1, /*hidden argument*/AsyncTaskMethodBuilder_1_SetStateMachine_m34089C89A112F9460E7981F551DE769C72289246_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_SetStateMachine_mAB18BD9CD69ADDCFBE2B48E4ABB35872BAE54483_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_tD986623175A57F547465B50AED2AC7B903115FD7 * _thisAdjusted = reinterpret_cast<U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_tD986623175A57F547465B50AED2AC7B903115FD7 *>(__this + 1);
	U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_SetStateMachine_mAB18BD9CD69ADDCFBE2B48E4ABB35872BAE54483(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.IO.StreamOperationsImplementation_<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_mFDAE4C079FE8B880EF7687062561C35FC65BA223 (U3CU3Ec__DisplayClass2_0_tF7A26B09867A566BC9F7FE9AF41DD97CF7DD9C14 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Threading.Tasks.Task`1<System.UInt32> System.IO.StreamOperationsImplementation_<>c__DisplayClass2_0::<WriteAsync_AbstractStream>b__0(System.Threading.CancellationToken,System.IProgress`1<System.UInt32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tB8C8430765AEE1D5F24261F5BAD009C22AC7872F * U3CU3Ec__DisplayClass2_0_U3CWriteAsync_AbstractStreamU3Eb__0_m3AEE1111FD567723DE3694810471BA166AD0668B (U3CU3Ec__DisplayClass2_0_tF7A26B09867A566BC9F7FE9AF41DD97CF7DD9C14 * __this, CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  ___cancelToken0, RuntimeObject* ___progressListener1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass2_0_U3CWriteAsync_AbstractStreamU3Eb__0_m3AEE1111FD567723DE3694810471BA166AD0668B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_tC5B27594871B0D4D6540AEF8F8175C68ECB1F243  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncTaskMethodBuilder_1_tD386300660CF74FF8FB22C6C3C937BBA9F7E8DED  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_3(__this);
		CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  L_0 = ___cancelToken0;
		(&V_0)->set_cancelToken_2(L_0);
		RuntimeObject* L_1 = ___progressListener1;
		(&V_0)->set_progressListener_4(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_1_tD386300660CF74FF8FB22C6C3C937BBA9F7E8DED_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_tD386300660CF74FF8FB22C6C3C937BBA9F7E8DED  L_2 = AsyncTaskMethodBuilder_1_Create_mFA0E603D8EEE094438B0465D1E57747E2E12FC70(/*hidden argument*/AsyncTaskMethodBuilder_1_Create_mFA0E603D8EEE094438B0465D1E57747E2E12FC70_RuntimeMethod_var);
		(&V_0)->set_U3CU3Et__builder_1(L_2);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_tC5B27594871B0D4D6540AEF8F8175C68ECB1F243  L_3 = V_0;
		AsyncTaskMethodBuilder_1_tD386300660CF74FF8FB22C6C3C937BBA9F7E8DED  L_4 = L_3.get_U3CU3Et__builder_1();
		V_1 = L_4;
		AsyncTaskMethodBuilder_1_Start_TisU3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_tC5B27594871B0D4D6540AEF8F8175C68ECB1F243_mF6393D5F03E579671815F1DA96BB1D7780BB7835((AsyncTaskMethodBuilder_1_tD386300660CF74FF8FB22C6C3C937BBA9F7E8DED *)(&V_1), (U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_tC5B27594871B0D4D6540AEF8F8175C68ECB1F243 *)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_1_Start_TisU3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_tC5B27594871B0D4D6540AEF8F8175C68ECB1F243_mF6393D5F03E579671815F1DA96BB1D7780BB7835_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_tD386300660CF74FF8FB22C6C3C937BBA9F7E8DED * L_5 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		Task_1_tB8C8430765AEE1D5F24261F5BAD009C22AC7872F * L_6 = AsyncTaskMethodBuilder_1_get_Task_m157191133E216D7561AD02E894BCA819FD5F98FF((AsyncTaskMethodBuilder_1_tD386300660CF74FF8FB22C6C3C937BBA9F7E8DED *)L_5, /*hidden argument*/AsyncTaskMethodBuilder_1_get_Task_m157191133E216D7561AD02E894BCA819FD5F98FF_RuntimeMethod_var);
		return L_6;
	}
}
// System.Threading.Tasks.Task`1<System.UInt32> System.IO.StreamOperationsImplementation_<>c__DisplayClass2_0::<WriteAsync_AbstractStream>b__1(System.Threading.CancellationToken,System.IProgress`1<System.UInt32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tB8C8430765AEE1D5F24261F5BAD009C22AC7872F * U3CU3Ec__DisplayClass2_0_U3CWriteAsync_AbstractStreamU3Eb__1_m9041D8EDB0504B8C6D7E82BE5746FB980F713EBA (U3CU3Ec__DisplayClass2_0_tF7A26B09867A566BC9F7FE9AF41DD97CF7DD9C14 * __this, CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  ___cancelToken0, RuntimeObject* ___progressListener1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass2_0_U3CWriteAsync_AbstractStreamU3Eb__1_m9041D8EDB0504B8C6D7E82BE5746FB980F713EBA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_tE07FA298A0F1283378FE03DCD280D757C505C510  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncTaskMethodBuilder_1_tD386300660CF74FF8FB22C6C3C937BBA9F7E8DED  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_3(__this);
		CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  L_0 = ___cancelToken0;
		(&V_0)->set_cancelToken_2(L_0);
		RuntimeObject* L_1 = ___progressListener1;
		(&V_0)->set_progressListener_4(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_1_tD386300660CF74FF8FB22C6C3C937BBA9F7E8DED_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_tD386300660CF74FF8FB22C6C3C937BBA9F7E8DED  L_2 = AsyncTaskMethodBuilder_1_Create_mFA0E603D8EEE094438B0465D1E57747E2E12FC70(/*hidden argument*/AsyncTaskMethodBuilder_1_Create_mFA0E603D8EEE094438B0465D1E57747E2E12FC70_RuntimeMethod_var);
		(&V_0)->set_U3CU3Et__builder_1(L_2);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_tE07FA298A0F1283378FE03DCD280D757C505C510  L_3 = V_0;
		AsyncTaskMethodBuilder_1_tD386300660CF74FF8FB22C6C3C937BBA9F7E8DED  L_4 = L_3.get_U3CU3Et__builder_1();
		V_1 = L_4;
		AsyncTaskMethodBuilder_1_Start_TisU3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_tE07FA298A0F1283378FE03DCD280D757C505C510_m0F53440B958A7F25B8826E8D3A50547C34076FF0((AsyncTaskMethodBuilder_1_tD386300660CF74FF8FB22C6C3C937BBA9F7E8DED *)(&V_1), (U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_tE07FA298A0F1283378FE03DCD280D757C505C510 *)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_1_Start_TisU3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_tE07FA298A0F1283378FE03DCD280D757C505C510_m0F53440B958A7F25B8826E8D3A50547C34076FF0_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_tD386300660CF74FF8FB22C6C3C937BBA9F7E8DED * L_5 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		Task_1_tB8C8430765AEE1D5F24261F5BAD009C22AC7872F * L_6 = AsyncTaskMethodBuilder_1_get_Task_m157191133E216D7561AD02E894BCA819FD5F98FF((AsyncTaskMethodBuilder_1_tD386300660CF74FF8FB22C6C3C937BBA9F7E8DED *)L_5, /*hidden argument*/AsyncTaskMethodBuilder_1_get_Task_m157191133E216D7561AD02E894BCA819FD5F98FF_RuntimeMethod_var);
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
// System.Void System.IO.StreamOperationsImplementation_<>c__DisplayClass2_0_<<WriteAsync_AbstractStream>b__0>d::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_MoveNext_mE88D6EDC8FF01BB4B7832CA4FD9F063AE5CDCD4D (U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_tC5B27594871B0D4D6540AEF8F8175C68ECB1F243 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_MoveNext_mE88D6EDC8FF01BB4B7832CA4FD9F063AE5CDCD4D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	U3CU3Ec__DisplayClass2_0_tF7A26B09867A566BC9F7FE9AF41DD97CF7DD9C14 * V_1 = NULL;
	uint32_t V_2 = 0;
	ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874  V_3;
	memset((&V_3), 0, sizeof(V_3));
	ConfiguredTaskAwaitable_t24DE1415466EE20060BE5AD528DC5C812CFA53A9  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t * V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		U3CU3Ec__DisplayClass2_0_tF7A26B09867A566BC9F7FE9AF41DD97CF7DD9C14 * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0095;
			}
		}

IL_0014:
		{
			CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB * L_3 = __this->get_address_of_cancelToken_2();
			bool L_4 = CancellationToken_get_IsCancellationRequested_mCF3521778F20F7048B7121885794B9562324447D((CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB *)L_3, /*hidden argument*/NULL);
			if (!L_4)
			{
				goto IL_0028;
			}
		}

IL_0021:
		{
			V_2 = 0;
			goto IL_00f3;
		}

IL_0028:
		{
			U3CU3Ec__DisplayClass2_0_tF7A26B09867A566BC9F7FE9AF41DD97CF7DD9C14 * L_5 = V_1;
			NullCheck(L_5);
			RuntimeObject* L_6 = L_5->get_buffer_0();
			NullCheck(L_6);
			uint32_t L_7 = InterfaceFuncInvoker0< uint32_t >::Invoke(1 /* System.UInt32 Windows.Storage.Streams.IBuffer::get_Length() */, IBuffer_t13BCDB1D6DE32F79AB9F9E149514026CA6B4AAEF_il2cpp_TypeInfo_var, L_6);
			__this->set_U3CbytesToWriteU3E5__2_5(L_7);
			U3CU3Ec__DisplayClass2_0_tF7A26B09867A566BC9F7FE9AF41DD97CF7DD9C14 * L_8 = V_1;
			NullCheck(L_8);
			Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_9 = L_8->get_stream_1();
			U3CU3Ec__DisplayClass2_0_tF7A26B09867A566BC9F7FE9AF41DD97CF7DD9C14 * L_10 = V_1;
			NullCheck(L_10);
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_11 = L_10->get_data_2();
			U3CU3Ec__DisplayClass2_0_tF7A26B09867A566BC9F7FE9AF41DD97CF7DD9C14 * L_12 = V_1;
			NullCheck(L_12);
			int32_t L_13 = L_12->get_offset_3();
			int32_t L_14 = __this->get_U3CbytesToWriteU3E5__2_5();
			CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  L_15 = __this->get_cancelToken_2();
			NullCheck(L_9);
			Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * L_16 = VirtFuncInvoker4< Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t, CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  >::Invoke(25 /* System.Threading.Tasks.Task System.IO.Stream::WriteAsync(System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken) */, L_9, L_11, L_13, L_14, L_15);
			NullCheck(L_16);
			ConfiguredTaskAwaitable_t24DE1415466EE20060BE5AD528DC5C812CFA53A9  L_17 = Task_ConfigureAwait_m2FB91172F9031B0CC520D9D09B658ACC5FD6CE02(L_16, (bool)0, /*hidden argument*/NULL);
			V_4 = L_17;
			ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874  L_18 = ConfiguredTaskAwaitable_GetAwaiter_m1EF40F198D32924E2D0F41E20B99CADBF5DDD303((ConfiguredTaskAwaitable_t24DE1415466EE20060BE5AD528DC5C812CFA53A9 *)(&V_4), /*hidden argument*/NULL);
			V_3 = L_18;
			bool L_19 = ConfiguredTaskAwaiter_get_IsCompleted_mDD0292137E15882AF385AE9D2FB1C8B0BEE89BDD((ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874 *)(&V_3), /*hidden argument*/NULL);
			if (L_19)
			{
				goto IL_00b1;
			}
		}

IL_0075:
		{
			int32_t L_20 = 0;
			V_0 = L_20;
			__this->set_U3CU3E1__state_0(L_20);
			ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874  L_21 = V_3;
			__this->set_U3CU3Eu__1_6(L_21);
			AsyncTaskMethodBuilder_1_tD386300660CF74FF8FB22C6C3C937BBA9F7E8DED * L_22 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874_TisU3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_tC5B27594871B0D4D6540AEF8F8175C68ECB1F243_m6A90BC625CF91D31293276B6DA5D5D6A05C80E23((AsyncTaskMethodBuilder_1_tD386300660CF74FF8FB22C6C3C937BBA9F7E8DED *)L_22, (ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874 *)(&V_3), (U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_tC5B27594871B0D4D6540AEF8F8175C68ECB1F243 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874_TisU3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_tC5B27594871B0D4D6540AEF8F8175C68ECB1F243_m6A90BC625CF91D31293276B6DA5D5D6A05C80E23_RuntimeMethod_var);
			goto IL_0107;
		}

IL_0095:
		{
			ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874  L_23 = __this->get_U3CU3Eu__1_6();
			V_3 = L_23;
			ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874 * L_24 = __this->get_address_of_U3CU3Eu__1_6();
			il2cpp_codegen_initobj(L_24, sizeof(ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874 ));
			int32_t L_25 = (-1);
			V_0 = L_25;
			__this->set_U3CU3E1__state_0(L_25);
		}

IL_00b1:
		{
			ConfiguredTaskAwaiter_GetResult_m7DFE5EAFB3C1F70B40948EFF46E9B13F1E260062((ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874 *)(&V_3), /*hidden argument*/NULL);
			RuntimeObject* L_26 = __this->get_progressListener_4();
			if (!L_26)
			{
				goto IL_00d1;
			}
		}

IL_00c0:
		{
			RuntimeObject* L_27 = __this->get_progressListener_4();
			int32_t L_28 = __this->get_U3CbytesToWriteU3E5__2_5();
			NullCheck(L_27);
			InterfaceActionInvoker1< uint32_t >::Invoke(0 /* System.Void System.IProgress`1<System.UInt32>::Report(!0) */, IProgress_1_t8476E09305DBDFA85A24783C4C7E68BFD2C51DB6_il2cpp_TypeInfo_var, L_27, L_28);
		}

IL_00d1:
		{
			int32_t L_29 = __this->get_U3CbytesToWriteU3E5__2_5();
			V_2 = L_29;
			goto IL_00f3;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_00da;
		throw e;
	}

CATCH_00da:
	{ // begin catch(System.Exception)
		V_5 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_tD386300660CF74FF8FB22C6C3C937BBA9F7E8DED * L_30 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_31 = V_5;
		AsyncTaskMethodBuilder_1_SetException_m4BCFE40068BC66F1C48B5C7C7C9F93F5E48EF00B((AsyncTaskMethodBuilder_1_tD386300660CF74FF8FB22C6C3C937BBA9F7E8DED *)L_30, L_31, /*hidden argument*/AsyncTaskMethodBuilder_1_SetException_m4BCFE40068BC66F1C48B5C7C7C9F93F5E48EF00B_RuntimeMethod_var);
		goto IL_0107;
	} // end catch (depth: 1)

IL_00f3:
	{
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_tD386300660CF74FF8FB22C6C3C937BBA9F7E8DED * L_32 = __this->get_address_of_U3CU3Et__builder_1();
		uint32_t L_33 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_m887E134B6FD52D8CA2116A466F69BC8E1EA6ED5E((AsyncTaskMethodBuilder_1_tD386300660CF74FF8FB22C6C3C937BBA9F7E8DED *)L_32, L_33, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_m887E134B6FD52D8CA2116A466F69BC8E1EA6ED5E_RuntimeMethod_var);
	}

IL_0107:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_MoveNext_mE88D6EDC8FF01BB4B7832CA4FD9F063AE5CDCD4D_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_tC5B27594871B0D4D6540AEF8F8175C68ECB1F243 * _thisAdjusted = reinterpret_cast<U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_tC5B27594871B0D4D6540AEF8F8175C68ECB1F243 *>(__this + 1);
	U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_MoveNext_mE88D6EDC8FF01BB4B7832CA4FD9F063AE5CDCD4D(_thisAdjusted, method);
}
// System.Void System.IO.StreamOperationsImplementation_<>c__DisplayClass2_0_<<WriteAsync_AbstractStream>b__0>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_SetStateMachine_m2A079EF5348EE858F047D58EEA127EAFB2F2BF1B (U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_tC5B27594871B0D4D6540AEF8F8175C68ECB1F243 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_SetStateMachine_m2A079EF5348EE858F047D58EEA127EAFB2F2BF1B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_tD386300660CF74FF8FB22C6C3C937BBA9F7E8DED * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m2C2B09AB812EDEDAB3C9E89B8A2BF19C4EC8B45F((AsyncTaskMethodBuilder_1_tD386300660CF74FF8FB22C6C3C937BBA9F7E8DED *)L_0, L_1, /*hidden argument*/AsyncTaskMethodBuilder_1_SetStateMachine_m2C2B09AB812EDEDAB3C9E89B8A2BF19C4EC8B45F_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_SetStateMachine_m2A079EF5348EE858F047D58EEA127EAFB2F2BF1B_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_tC5B27594871B0D4D6540AEF8F8175C68ECB1F243 * _thisAdjusted = reinterpret_cast<U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_tC5B27594871B0D4D6540AEF8F8175C68ECB1F243 *>(__this + 1);
	U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_SetStateMachine_m2A079EF5348EE858F047D58EEA127EAFB2F2BF1B(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.IO.StreamOperationsImplementation_<>c__DisplayClass2_0_<<WriteAsync_AbstractStream>b__1>d::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_MoveNext_mD3C1D72E476D85F6143C00F1DE1D449EAA690E26 (U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_tE07FA298A0F1283378FE03DCD280D757C505C510 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_MoveNext_mD3C1D72E476D85F6143C00F1DE1D449EAA690E26_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	U3CU3Ec__DisplayClass2_0_tF7A26B09867A566BC9F7FE9AF41DD97CF7DD9C14 * V_1 = NULL;
	uint32_t V_2 = 0;
	int32_t V_3 = 0;
	ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874  V_4;
	memset((&V_4), 0, sizeof(V_4));
	ConfiguredTaskAwaitable_t24DE1415466EE20060BE5AD528DC5C812CFA53A9  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Exception_t * V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * G_B6_0 = NULL;
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * G_B5_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		U3CU3Ec__DisplayClass2_0_tF7A26B09867A566BC9F7FE9AF41DD97CF7DD9C14 * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_00a9;
			}
		}

IL_0014:
		{
			CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB * L_3 = __this->get_address_of_cancelToken_2();
			bool L_4 = CancellationToken_get_IsCancellationRequested_mCF3521778F20F7048B7121885794B9562324447D((CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB *)L_3, /*hidden argument*/NULL);
			if (!L_4)
			{
				goto IL_0028;
			}
		}

IL_0021:
		{
			V_2 = 0;
			goto IL_0108;
		}

IL_0028:
		{
			U3CU3Ec__DisplayClass2_0_tF7A26B09867A566BC9F7FE9AF41DD97CF7DD9C14 * L_5 = V_1;
			NullCheck(L_5);
			RuntimeObject* L_6 = L_5->get_buffer_0();
			NullCheck(L_6);
			uint32_t L_7 = InterfaceFuncInvoker0< uint32_t >::Invoke(1 /* System.UInt32 Windows.Storage.Streams.IBuffer::get_Length() */, IBuffer_t13BCDB1D6DE32F79AB9F9E149514026CA6B4AAEF_il2cpp_TypeInfo_var, L_6);
			__this->set_U3CbytesToWriteU3E5__2_5(L_7);
			U3CU3Ec__DisplayClass2_0_tF7A26B09867A566BC9F7FE9AF41DD97CF7DD9C14 * L_8 = V_1;
			NullCheck(L_8);
			RuntimeObject* L_9 = L_8->get_buffer_0();
			Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_10 = WindowsRuntimeBufferExtensions_AsStream_mB5E2DF21974CD23F3A864422B0DC0FB844BF3691(L_9, /*hidden argument*/NULL);
			V_3 = ((int32_t)16384);
			uint32_t L_11 = __this->get_U3CbytesToWriteU3E5__2_5();
			int32_t L_12 = V_3;
			G_B5_0 = L_10;
			if ((((int64_t)(((int64_t)((uint64_t)L_11)))) >= ((int64_t)(((int64_t)((int64_t)L_12))))))
			{
				G_B6_0 = L_10;
				goto IL_005c;
			}
		}

IL_0055:
		{
			uint32_t L_13 = __this->get_U3CbytesToWriteU3E5__2_5();
			V_3 = L_13;
			G_B6_0 = G_B5_0;
		}

IL_005c:
		{
			U3CU3Ec__DisplayClass2_0_tF7A26B09867A566BC9F7FE9AF41DD97CF7DD9C14 * L_14 = V_1;
			NullCheck(L_14);
			Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_15 = L_14->get_stream_1();
			int32_t L_16 = V_3;
			CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  L_17 = __this->get_cancelToken_2();
			NullCheck(G_B6_0);
			Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * L_18 = VirtFuncInvoker3< Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 *, int32_t, CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  >::Invoke(15 /* System.Threading.Tasks.Task System.IO.Stream::CopyToAsync(System.IO.Stream,System.Int32,System.Threading.CancellationToken) */, G_B6_0, L_15, L_16, L_17);
			NullCheck(L_18);
			ConfiguredTaskAwaitable_t24DE1415466EE20060BE5AD528DC5C812CFA53A9  L_19 = Task_ConfigureAwait_m2FB91172F9031B0CC520D9D09B658ACC5FD6CE02(L_18, (bool)0, /*hidden argument*/NULL);
			V_5 = L_19;
			ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874  L_20 = ConfiguredTaskAwaitable_GetAwaiter_m1EF40F198D32924E2D0F41E20B99CADBF5DDD303((ConfiguredTaskAwaitable_t24DE1415466EE20060BE5AD528DC5C812CFA53A9 *)(&V_5), /*hidden argument*/NULL);
			V_4 = L_20;
			bool L_21 = ConfiguredTaskAwaiter_get_IsCompleted_mDD0292137E15882AF385AE9D2FB1C8B0BEE89BDD((ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874 *)(&V_4), /*hidden argument*/NULL);
			if (L_21)
			{
				goto IL_00c6;
			}
		}

IL_0088:
		{
			int32_t L_22 = 0;
			V_0 = L_22;
			__this->set_U3CU3E1__state_0(L_22);
			ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874  L_23 = V_4;
			__this->set_U3CU3Eu__1_6(L_23);
			AsyncTaskMethodBuilder_1_tD386300660CF74FF8FB22C6C3C937BBA9F7E8DED * L_24 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874_TisU3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_tE07FA298A0F1283378FE03DCD280D757C505C510_m012F5C73E480F7D4C555E2CD5ABE0D3B896DBF64((AsyncTaskMethodBuilder_1_tD386300660CF74FF8FB22C6C3C937BBA9F7E8DED *)L_24, (ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874 *)(&V_4), (U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_tE07FA298A0F1283378FE03DCD280D757C505C510 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874_TisU3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_tE07FA298A0F1283378FE03DCD280D757C505C510_m012F5C73E480F7D4C555E2CD5ABE0D3B896DBF64_RuntimeMethod_var);
			goto IL_011c;
		}

IL_00a9:
		{
			ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874  L_25 = __this->get_U3CU3Eu__1_6();
			V_4 = L_25;
			ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874 * L_26 = __this->get_address_of_U3CU3Eu__1_6();
			il2cpp_codegen_initobj(L_26, sizeof(ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874 ));
			int32_t L_27 = (-1);
			V_0 = L_27;
			__this->set_U3CU3E1__state_0(L_27);
		}

IL_00c6:
		{
			ConfiguredTaskAwaiter_GetResult_m7DFE5EAFB3C1F70B40948EFF46E9B13F1E260062((ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874 *)(&V_4), /*hidden argument*/NULL);
			RuntimeObject* L_28 = __this->get_progressListener_4();
			if (!L_28)
			{
				goto IL_00e6;
			}
		}

IL_00d5:
		{
			RuntimeObject* L_29 = __this->get_progressListener_4();
			uint32_t L_30 = __this->get_U3CbytesToWriteU3E5__2_5();
			NullCheck(L_29);
			InterfaceActionInvoker1< uint32_t >::Invoke(0 /* System.Void System.IProgress`1<System.UInt32>::Report(!0) */, IProgress_1_t8476E09305DBDFA85A24783C4C7E68BFD2C51DB6_il2cpp_TypeInfo_var, L_29, L_30);
		}

IL_00e6:
		{
			uint32_t L_31 = __this->get_U3CbytesToWriteU3E5__2_5();
			V_2 = L_31;
			goto IL_0108;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_00ef;
		throw e;
	}

CATCH_00ef:
	{ // begin catch(System.Exception)
		V_6 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_tD386300660CF74FF8FB22C6C3C937BBA9F7E8DED * L_32 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_33 = V_6;
		AsyncTaskMethodBuilder_1_SetException_m4BCFE40068BC66F1C48B5C7C7C9F93F5E48EF00B((AsyncTaskMethodBuilder_1_tD386300660CF74FF8FB22C6C3C937BBA9F7E8DED *)L_32, L_33, /*hidden argument*/AsyncTaskMethodBuilder_1_SetException_m4BCFE40068BC66F1C48B5C7C7C9F93F5E48EF00B_RuntimeMethod_var);
		goto IL_011c;
	} // end catch (depth: 1)

IL_0108:
	{
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_tD386300660CF74FF8FB22C6C3C937BBA9F7E8DED * L_34 = __this->get_address_of_U3CU3Et__builder_1();
		uint32_t L_35 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_m887E134B6FD52D8CA2116A466F69BC8E1EA6ED5E((AsyncTaskMethodBuilder_1_tD386300660CF74FF8FB22C6C3C937BBA9F7E8DED *)L_34, L_35, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_m887E134B6FD52D8CA2116A466F69BC8E1EA6ED5E_RuntimeMethod_var);
	}

IL_011c:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_MoveNext_mD3C1D72E476D85F6143C00F1DE1D449EAA690E26_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_tE07FA298A0F1283378FE03DCD280D757C505C510 * _thisAdjusted = reinterpret_cast<U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_tE07FA298A0F1283378FE03DCD280D757C505C510 *>(__this + 1);
	U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_MoveNext_mD3C1D72E476D85F6143C00F1DE1D449EAA690E26(_thisAdjusted, method);
}
// System.Void System.IO.StreamOperationsImplementation_<>c__DisplayClass2_0_<<WriteAsync_AbstractStream>b__1>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_SetStateMachine_mCE60114066AA2B6050E71DD82848D3DDBEACB3F5 (U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_tE07FA298A0F1283378FE03DCD280D757C505C510 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_SetStateMachine_mCE60114066AA2B6050E71DD82848D3DDBEACB3F5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_tD386300660CF74FF8FB22C6C3C937BBA9F7E8DED * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m2C2B09AB812EDEDAB3C9E89B8A2BF19C4EC8B45F((AsyncTaskMethodBuilder_1_tD386300660CF74FF8FB22C6C3C937BBA9F7E8DED *)L_0, L_1, /*hidden argument*/AsyncTaskMethodBuilder_1_SetStateMachine_m2C2B09AB812EDEDAB3C9E89B8A2BF19C4EC8B45F_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_SetStateMachine_mCE60114066AA2B6050E71DD82848D3DDBEACB3F5_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_tE07FA298A0F1283378FE03DCD280D757C505C510 * _thisAdjusted = reinterpret_cast<U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_tE07FA298A0F1283378FE03DCD280D757C505C510 *>(__this + 1);
	U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_SetStateMachine_mCE60114066AA2B6050E71DD82848D3DDBEACB3F5(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.IO.StreamOperationsImplementation_<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_m1F36BD3249B8808F4F2A5707250834193E6FDC67 (U3CU3Ec__DisplayClass3_0_t38CB4DCBE909850E7FF45FA79C292F5EFC11B339 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Threading.Tasks.Task`1<System.Boolean> System.IO.StreamOperationsImplementation_<>c__DisplayClass3_0::<FlushAsync_AbstractStream>b__0(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tD6131FE3A3A2F1D58DB886B6CF31A2672B75B439 * U3CU3Ec__DisplayClass3_0_U3CFlushAsync_AbstractStreamU3Eb__0_m98A2ECB7B86585805445D61AA12109EB9C64CC91 (U3CU3Ec__DisplayClass3_0_t38CB4DCBE909850E7FF45FA79C292F5EFC11B339 * __this, CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  ___cancelToken0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass3_0_U3CFlushAsync_AbstractStreamU3Eb__0_m98A2ECB7B86585805445D61AA12109EB9C64CC91_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t33297D8BAD10F1F6FA496D0DC2B75DFCFFF6936D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_3(__this);
		CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  L_0 = ___cancelToken0;
		(&V_0)->set_cancelToken_2(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE  L_1 = AsyncTaskMethodBuilder_1_Create_mEB49F32EAEB3E6C469F3A1194FBC34CD1D91CBBF(/*hidden argument*/AsyncTaskMethodBuilder_1_Create_mEB49F32EAEB3E6C469F3A1194FBC34CD1D91CBBF_RuntimeMethod_var);
		(&V_0)->set_U3CU3Et__builder_1(L_1);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t33297D8BAD10F1F6FA496D0DC2B75DFCFFF6936D  L_2 = V_0;
		AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE  L_3 = L_2.get_U3CU3Et__builder_1();
		V_1 = L_3;
		AsyncTaskMethodBuilder_1_Start_TisU3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t33297D8BAD10F1F6FA496D0DC2B75DFCFFF6936D_m4FD800D60A2E430DCAE817F4E3965A528B83FD8D((AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE *)(&V_1), (U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t33297D8BAD10F1F6FA496D0DC2B75DFCFFF6936D *)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_1_Start_TisU3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t33297D8BAD10F1F6FA496D0DC2B75DFCFFF6936D_m4FD800D60A2E430DCAE817F4E3965A528B83FD8D_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * L_4 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		Task_1_tD6131FE3A3A2F1D58DB886B6CF31A2672B75B439 * L_5 = AsyncTaskMethodBuilder_1_get_Task_mE71F3C1D2587BE90812781280F0175E9CE14BA66((AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE *)L_4, /*hidden argument*/AsyncTaskMethodBuilder_1_get_Task_mE71F3C1D2587BE90812781280F0175E9CE14BA66_RuntimeMethod_var);
		return L_5;
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
// System.Void System.IO.StreamOperationsImplementation_<>c__DisplayClass3_0_<<FlushAsync_AbstractStream>b__0>d::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_MoveNext_m543F90A39823888C932491D4018A559436C08EBE (U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t33297D8BAD10F1F6FA496D0DC2B75DFCFFF6936D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_MoveNext_m543F90A39823888C932491D4018A559436C08EBE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	U3CU3Ec__DisplayClass3_0_t38CB4DCBE909850E7FF45FA79C292F5EFC11B339 * V_1 = NULL;
	bool V_2 = false;
	ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874  V_3;
	memset((&V_3), 0, sizeof(V_3));
	ConfiguredTaskAwaitable_t24DE1415466EE20060BE5AD528DC5C812CFA53A9  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t * V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		U3CU3Ec__DisplayClass3_0_t38CB4DCBE909850E7FF45FA79C292F5EFC11B339 * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_006f;
			}
		}

IL_0011:
		{
			CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB * L_3 = __this->get_address_of_cancelToken_2();
			bool L_4 = CancellationToken_get_IsCancellationRequested_mCF3521778F20F7048B7121885794B9562324447D((CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB *)L_3, /*hidden argument*/NULL);
			if (!L_4)
			{
				goto IL_0025;
			}
		}

IL_001e:
		{
			V_2 = (bool)0;
			goto IL_00af;
		}

IL_0025:
		{
			U3CU3Ec__DisplayClass3_0_t38CB4DCBE909850E7FF45FA79C292F5EFC11B339 * L_5 = V_1;
			NullCheck(L_5);
			Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_6 = L_5->get_stream_0();
			CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  L_7 = __this->get_cancelToken_2();
			NullCheck(L_6);
			Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * L_8 = VirtFuncInvoker1< Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *, CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  >::Invoke(19 /* System.Threading.Tasks.Task System.IO.Stream::FlushAsync(System.Threading.CancellationToken) */, L_6, L_7);
			NullCheck(L_8);
			ConfiguredTaskAwaitable_t24DE1415466EE20060BE5AD528DC5C812CFA53A9  L_9 = Task_ConfigureAwait_m2FB91172F9031B0CC520D9D09B658ACC5FD6CE02(L_8, (bool)0, /*hidden argument*/NULL);
			V_4 = L_9;
			ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874  L_10 = ConfiguredTaskAwaitable_GetAwaiter_m1EF40F198D32924E2D0F41E20B99CADBF5DDD303((ConfiguredTaskAwaitable_t24DE1415466EE20060BE5AD528DC5C812CFA53A9 *)(&V_4), /*hidden argument*/NULL);
			V_3 = L_10;
			bool L_11 = ConfiguredTaskAwaiter_get_IsCompleted_mDD0292137E15882AF385AE9D2FB1C8B0BEE89BDD((ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874 *)(&V_3), /*hidden argument*/NULL);
			if (L_11)
			{
				goto IL_008b;
			}
		}

IL_004f:
		{
			int32_t L_12 = 0;
			V_0 = L_12;
			__this->set_U3CU3E1__state_0(L_12);
			ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874  L_13 = V_3;
			__this->set_U3CU3Eu__1_4(L_13);
			AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * L_14 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874_TisU3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t33297D8BAD10F1F6FA496D0DC2B75DFCFFF6936D_m2AA05CF867293C40A7E0C8F297A600CD09FAFCF7((AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE *)L_14, (ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874 *)(&V_3), (U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t33297D8BAD10F1F6FA496D0DC2B75DFCFFF6936D *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874_TisU3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t33297D8BAD10F1F6FA496D0DC2B75DFCFFF6936D_m2AA05CF867293C40A7E0C8F297A600CD09FAFCF7_RuntimeMethod_var);
			goto IL_00c3;
		}

IL_006f:
		{
			ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874  L_15 = __this->get_U3CU3Eu__1_4();
			V_3 = L_15;
			ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874 * L_16 = __this->get_address_of_U3CU3Eu__1_4();
			il2cpp_codegen_initobj(L_16, sizeof(ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874 ));
			int32_t L_17 = (-1);
			V_0 = L_17;
			__this->set_U3CU3E1__state_0(L_17);
		}

IL_008b:
		{
			ConfiguredTaskAwaiter_GetResult_m7DFE5EAFB3C1F70B40948EFF46E9B13F1E260062((ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874 *)(&V_3), /*hidden argument*/NULL);
			V_2 = (bool)1;
			goto IL_00af;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0096;
		throw e;
	}

CATCH_0096:
	{ // begin catch(System.Exception)
		V_5 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * L_18 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_19 = V_5;
		AsyncTaskMethodBuilder_1_SetException_m21285A09F0A9D6C0F245EB498300064F66DAAF18((AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE *)L_18, L_19, /*hidden argument*/AsyncTaskMethodBuilder_1_SetException_m21285A09F0A9D6C0F245EB498300064F66DAAF18_RuntimeMethod_var);
		goto IL_00c3;
	} // end catch (depth: 1)

IL_00af:
	{
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * L_20 = __this->get_address_of_U3CU3Et__builder_1();
		bool L_21 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_mCF07BE7A4F16080B49751FF5A4159E2ADDAC723F((AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE *)L_20, L_21, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_mCF07BE7A4F16080B49751FF5A4159E2ADDAC723F_RuntimeMethod_var);
	}

IL_00c3:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_MoveNext_m543F90A39823888C932491D4018A559436C08EBE_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t33297D8BAD10F1F6FA496D0DC2B75DFCFFF6936D * _thisAdjusted = reinterpret_cast<U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t33297D8BAD10F1F6FA496D0DC2B75DFCFFF6936D *>(__this + 1);
	U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_MoveNext_m543F90A39823888C932491D4018A559436C08EBE(_thisAdjusted, method);
}
// System.Void System.IO.StreamOperationsImplementation_<>c__DisplayClass3_0_<<FlushAsync_AbstractStream>b__0>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_SetStateMachine_m6ECBDD41F0403D71AF9534B0E63161865104118F (U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t33297D8BAD10F1F6FA496D0DC2B75DFCFFF6936D * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_SetStateMachine_m6ECBDD41F0403D71AF9534B0E63161865104118F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m6C16FFAECC8CE76F82289A87141A9524F5B09C60((AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE *)L_0, L_1, /*hidden argument*/AsyncTaskMethodBuilder_1_SetStateMachine_m6C16FFAECC8CE76F82289A87141A9524F5B09C60_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_SetStateMachine_m6ECBDD41F0403D71AF9534B0E63161865104118F_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t33297D8BAD10F1F6FA496D0DC2B75DFCFFF6936D * _thisAdjusted = reinterpret_cast<U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t33297D8BAD10F1F6FA496D0DC2B75DFCFFF6936D *>(__this + 1);
	U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_SetStateMachine_m6ECBDD41F0403D71AF9534B0E63161865104118F(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.IO.StreamReadAsyncResult::.ctor(Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32>,Windows.Storage.Streams.IBuffer,System.AsyncCallback,System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamReadAsyncResult__ctor_m1037B23E12C21BA0F4C92D48C76DA3EECD4435F0 (StreamReadAsyncResult_t897354343EA051942262510D5B3DE4B408B3E048 * __this, RuntimeObject* ___asyncStreamReadOperation0, RuntimeObject* ___buffer1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___userCompletionCallback2, RuntimeObject * ___userAsyncStateInfo3, bool ___processCompletedOperationInCallback4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StreamReadAsyncResult__ctor_m1037B23E12C21BA0F4C92D48C76DA3EECD4435F0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___asyncStreamReadOperation0;
		AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * L_1 = ___userCompletionCallback2;
		RuntimeObject * L_2 = ___userAsyncStateInfo3;
		bool L_3 = ___processCompletedOperationInCallback4;
		StreamOperationAsyncResult__ctor_m1297A6A7E44BF5D57AD6CAFBC14FA870E21D9D8F(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		RuntimeObject* L_4 = ___buffer1;
		if (L_4)
		{
			goto IL_001a;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_5 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_5, _stringLiteralE53C2EA1FE4BD2B78BF4723C7C155A578E020A25, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, NULL, StreamReadAsyncResult__ctor_m1037B23E12C21BA0F4C92D48C76DA3EECD4435F0_RuntimeMethod_var);
	}

IL_001a:
	{
		RuntimeObject* L_6 = ___buffer1;
		__this->set__userBuffer_10(L_6);
		RuntimeObject* L_7 = ___asyncStreamReadOperation0;
		AsyncOperationWithProgressCompletedHandler_2_tF04CE0C0951B83CB6BD82DC4376B10B01A3B1CE6 * L_8 = (AsyncOperationWithProgressCompletedHandler_2_tF04CE0C0951B83CB6BD82DC4376B10B01A3B1CE6 *)il2cpp_codegen_object_new(AsyncOperationWithProgressCompletedHandler_2_tF04CE0C0951B83CB6BD82DC4376B10B01A3B1CE6_il2cpp_TypeInfo_var);
		AsyncOperationWithProgressCompletedHandler_2__ctor_mC9AB4C28FB905E212B935E1C3E8834011ED4D0B9(L_8, __this, (intptr_t)((intptr_t)StreamOperationAsyncResult_StreamOperationCompletedCallback_m830CE1407A7C8E1AFFC4534BCE28959467019B0C_RuntimeMethod_var), /*hidden argument*/AsyncOperationWithProgressCompletedHandler_2__ctor_mC9AB4C28FB905E212B935E1C3E8834011ED4D0B9_RuntimeMethod_var);
		NullCheck(L_7);
		InterfaceActionInvoker1< AsyncOperationWithProgressCompletedHandler_2_tF04CE0C0951B83CB6BD82DC4376B10B01A3B1CE6 * >::Invoke(2 /* System.Void Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32>::put_Completed(Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<!0,!1>) */, IAsyncOperationWithProgress_2_t9F077679BB6FBB6BF4C0E8B56C7FEF3D661EA792_il2cpp_TypeInfo_var, L_7, L_8);
		return;
	}
}
// System.Void System.IO.StreamReadAsyncResult::ProcessConcreteCompletedOperation(Windows.Foundation.IAsyncInfo,System.Int64U26)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamReadAsyncResult_ProcessConcreteCompletedOperation_m987DE967C55CCDAE3928BE1D2AEF3B64FC58FB43 (StreamReadAsyncResult_t897354343EA051942262510D5B3DE4B408B3E048 * __this, RuntimeObject* ___completedOperation0, int64_t* ___bytesCompleted1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StreamReadAsyncResult_ProcessConcreteCompletedOperation_m987DE967C55CCDAE3928BE1D2AEF3B64FC58FB43_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___completedOperation0;
		int64_t* L_1 = ___bytesCompleted1;
		StreamReadAsyncResult_ProcessConcreteCompletedOperation_mF0CBA3E175E98A2581B71286C8A3261D4EF3A482(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_0, IAsyncOperationWithProgress_2_t9F077679BB6FBB6BF4C0E8B56C7FEF3D661EA792_il2cpp_TypeInfo_var)), (int64_t*)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.IO.StreamReadAsyncResult::ProcessConcreteCompletedOperation(Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32>,System.Int64U26)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamReadAsyncResult_ProcessConcreteCompletedOperation_mF0CBA3E175E98A2581B71286C8A3261D4EF3A482 (StreamReadAsyncResult_t897354343EA051942262510D5B3DE4B408B3E048 * __this, RuntimeObject* ___completedOperation0, int64_t* ___bytesCompleted1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StreamReadAsyncResult_ProcessConcreteCompletedOperation_mF0CBA3E175E98A2581B71286C8A3261D4EF3A482_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___completedOperation0;
		NullCheck(L_0);
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(4 /* !0 Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32>::GetResults() */, IAsyncOperationWithProgress_2_t9F077679BB6FBB6BF4C0E8B56C7FEF3D661EA792_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		RuntimeObject* L_2 = __this->get__userBuffer_10();
		RuntimeObject* L_3 = V_0;
		WinRtIOHelper_EnsureResultsInUserBuffer_m24B0C6BDACD1A06D7FBB9EC91361DA5137E34FB1(L_2, L_3, /*hidden argument*/NULL);
		int64_t* L_4 = ___bytesCompleted1;
		RuntimeObject* L_5 = __this->get__userBuffer_10();
		NullCheck(L_5);
		uint32_t L_6 = InterfaceFuncInvoker0< uint32_t >::Invoke(1 /* System.UInt32 Windows.Storage.Streams.IBuffer::get_Length() */, IBuffer_t13BCDB1D6DE32F79AB9F9E149514026CA6B4AAEF_il2cpp_TypeInfo_var, L_5);
		*((int64_t*)L_4) = (int64_t)(((int64_t)((uint64_t)L_6)));
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
// System.Void System.IO.StreamWriteAsyncResult::.ctor(Windows.Foundation.IAsyncOperationWithProgress`2<System.UInt32,System.UInt32>,System.AsyncCallback,System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamWriteAsyncResult__ctor_m3948E7124A04878E7BCAAFCEBCB0B079BA6B6908 (StreamWriteAsyncResult_t4A2F6C2119D655E60142F74DD7687412F81F9A2B * __this, RuntimeObject* ___asyncStreamWriteOperation0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___userCompletionCallback1, RuntimeObject * ___userAsyncStateInfo2, bool ___processCompletedOperationInCallback3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StreamWriteAsyncResult__ctor_m3948E7124A04878E7BCAAFCEBCB0B079BA6B6908_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___asyncStreamWriteOperation0;
		AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * L_1 = ___userCompletionCallback1;
		RuntimeObject * L_2 = ___userAsyncStateInfo2;
		bool L_3 = ___processCompletedOperationInCallback3;
		StreamOperationAsyncResult__ctor_m1297A6A7E44BF5D57AD6CAFBC14FA870E21D9D8F(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		RuntimeObject* L_4 = ___asyncStreamWriteOperation0;
		AsyncOperationWithProgressCompletedHandler_2_tF449555B6EE977A7635D662ED0C1D414CC60792B * L_5 = (AsyncOperationWithProgressCompletedHandler_2_tF449555B6EE977A7635D662ED0C1D414CC60792B *)il2cpp_codegen_object_new(AsyncOperationWithProgressCompletedHandler_2_tF449555B6EE977A7635D662ED0C1D414CC60792B_il2cpp_TypeInfo_var);
		AsyncOperationWithProgressCompletedHandler_2__ctor_m96C27552CFBCABAAE91832CF8C52B7BCBE419603(L_5, __this, (intptr_t)((intptr_t)StreamOperationAsyncResult_StreamOperationCompletedCallback_m830CE1407A7C8E1AFFC4534BCE28959467019B0C_RuntimeMethod_var), /*hidden argument*/AsyncOperationWithProgressCompletedHandler_2__ctor_m96C27552CFBCABAAE91832CF8C52B7BCBE419603_RuntimeMethod_var);
		NullCheck(L_4);
		InterfaceActionInvoker1< AsyncOperationWithProgressCompletedHandler_2_tF449555B6EE977A7635D662ED0C1D414CC60792B * >::Invoke(2 /* System.Void Windows.Foundation.IAsyncOperationWithProgress`2<System.UInt32,System.UInt32>::put_Completed(Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<!0,!1>) */, IAsyncOperationWithProgress_2_tC8BD3FE106054920900E2389AD70276493A309B3_il2cpp_TypeInfo_var, L_4, L_5);
		return;
	}
}
// System.Void System.IO.StreamWriteAsyncResult::ProcessConcreteCompletedOperation(Windows.Foundation.IAsyncInfo,System.Int64U26)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamWriteAsyncResult_ProcessConcreteCompletedOperation_mFFEAD203431B5EB168068C0CDC881CC7A12DF5E4 (StreamWriteAsyncResult_t4A2F6C2119D655E60142F74DD7687412F81F9A2B * __this, RuntimeObject* ___completedOperation0, int64_t* ___bytesCompleted1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StreamWriteAsyncResult_ProcessConcreteCompletedOperation_mFFEAD203431B5EB168068C0CDC881CC7A12DF5E4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___completedOperation0;
		int64_t* L_1 = ___bytesCompleted1;
		StreamWriteAsyncResult_ProcessConcreteCompletedOperation_m46753CC71BFD4F752E35B693E9AF7258D36FF829(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_0, IAsyncOperationWithProgress_2_tC8BD3FE106054920900E2389AD70276493A309B3_il2cpp_TypeInfo_var)), (int64_t*)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.IO.StreamWriteAsyncResult::ProcessConcreteCompletedOperation(Windows.Foundation.IAsyncOperationWithProgress`2<System.UInt32,System.UInt32>,System.Int64U26)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamWriteAsyncResult_ProcessConcreteCompletedOperation_m46753CC71BFD4F752E35B693E9AF7258D36FF829 (StreamWriteAsyncResult_t4A2F6C2119D655E60142F74DD7687412F81F9A2B * __this, RuntimeObject* ___completedOperation0, int64_t* ___bytesCompleted1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StreamWriteAsyncResult_ProcessConcreteCompletedOperation_m46753CC71BFD4F752E35B693E9AF7258D36FF829_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___completedOperation0;
		NullCheck(L_0);
		uint32_t L_1 = InterfaceFuncInvoker0< uint32_t >::Invoke(4 /* !0 Windows.Foundation.IAsyncOperationWithProgress`2<System.UInt32,System.UInt32>::GetResults() */, IAsyncOperationWithProgress_2_tC8BD3FE106054920900E2389AD70276493A309B3_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		int64_t* L_2 = ___bytesCompleted1;
		uint32_t L_3 = V_0;
		*((int64_t*)L_2) = (int64_t)(((int64_t)((uint64_t)L_3)));
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
// System.Runtime.ExceptionServices.ExceptionDispatchInfo System.IO.WinRtIOHelper::NativeExceptionToIOExceptionInfo(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExceptionDispatchInfo_t0C54083F3909DAF986A4DEAA7C047559531E0E2A * WinRtIOHelper_NativeExceptionToIOExceptionInfo_m1CA2440467C50E50B6448BBCC86B4B7DB9A394AD (Exception_t * ___nativeException0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WinRtIOHelper_NativeExceptionToIOExceptionInfo_m1CA2440467C50E50B6448BBCC86B4B7DB9A394AD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		Exception_t * L_0 = ___nativeException0;
		NullCheck(L_0);
		Type_t * L_1 = Exception_GetType_mA3390B9D538D5FAC3802D9D8A2FCAC31465130F3(L_0, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_2 = { reinterpret_cast<intptr_t> (Exception_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_4 = VirtFuncInvoker1< bool, Type_t * >::Invoke(114 /* System.Boolean System.Type::Equals(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_001e;
		}
	}
	{
		Exception_t * L_5 = ___nativeException0;
		ExceptionDispatchInfo_t0C54083F3909DAF986A4DEAA7C047559531E0E2A * L_6 = ExceptionDispatchInfo_Capture_m8E5F721466EDFE9AA8BC532F9AE7A859E0766E23(L_5, /*hidden argument*/NULL);
		return L_6;
	}

IL_001e:
	{
		Exception_t * L_7 = ___nativeException0;
		NullCheck(L_7);
		String_t* L_8 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_7);
		V_0 = L_8;
		String_t* L_9 = V_0;
		bool L_10 = String_IsNullOrWhiteSpace_m62102CA65546AE151DC8254B72110F4AA48E2135(L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0033;
		}
	}
	{
		V_0 = _stringLiteral2A0EF97DFF673043032D8100C4FBF8E025C2AD15;
	}

IL_0033:
	{
		String_t* L_11 = V_0;
		Exception_t * L_12 = ___nativeException0;
		IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA * L_13 = (IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA *)il2cpp_codegen_object_new(IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA_il2cpp_TypeInfo_var);
		IOException__ctor_m37262C706BEB979358ABEFEA9F9F253E8773D2B7(L_13, L_11, L_12, /*hidden argument*/NULL);
		ExceptionDispatchInfo_t0C54083F3909DAF986A4DEAA7C047559531E0E2A * L_14 = ExceptionDispatchInfo_Capture_m8E5F721466EDFE9AA8BC532F9AE7A859E0766E23(L_13, /*hidden argument*/NULL);
		return L_14;
	}
}
// System.Void System.IO.WinRtIOHelper::EnsureResultsInUserBuffer(Windows.Storage.Streams.IBuffer,Windows.Storage.Streams.IBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinRtIOHelper_EnsureResultsInUserBuffer_m24B0C6BDACD1A06D7FBB9EC91361DA5137E34FB1 (RuntimeObject* ___userBuffer0, RuntimeObject* ___resultBuffer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WinRtIOHelper_EnsureResultsInUserBuffer_m24B0C6BDACD1A06D7FBB9EC91361DA5137E34FB1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___resultBuffer1;
		RuntimeObject* L_1 = ___userBuffer0;
		bool L_2 = WindowsRuntimeBufferExtensions_IsSameData_m11E5D0B5671D2C8852413DD894003B6CE2CC6260(L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		RuntimeObject* L_3 = ___resultBuffer1;
		RuntimeObject* L_4 = ___userBuffer0;
		WindowsRuntimeBufferExtensions_CopyTo_m6EAD61B4D602858DC439F92678DA5EEDFA560136(L_3, L_4, /*hidden argument*/NULL);
		RuntimeObject* L_5 = ___userBuffer0;
		RuntimeObject* L_6 = ___resultBuffer1;
		NullCheck(L_6);
		uint32_t L_7 = InterfaceFuncInvoker0< uint32_t >::Invoke(1 /* System.UInt32 Windows.Storage.Streams.IBuffer::get_Length() */, IBuffer_t13BCDB1D6DE32F79AB9F9E149514026CA6B4AAEF_il2cpp_TypeInfo_var, L_6);
		NullCheck(L_5);
		InterfaceActionInvoker1< uint32_t >::Invoke(2 /* System.Void Windows.Storage.Streams.IBuffer::put_Length(System.UInt32) */, IBuffer_t13BCDB1D6DE32F79AB9F9E149514026CA6B4AAEF_il2cpp_TypeInfo_var, L_5, L_7);
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
// System.IO.WinRtToNetFxStreamAdapter System.IO.WinRtToNetFxStreamAdapter::Create(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WinRtToNetFxStreamAdapter_t5DF3E266765C62B1F96383772091E1E54DD48397 * WinRtToNetFxStreamAdapter_Create_mCCF171C3466E68BBBF31CBB0C98C3F282F5A5B45 (RuntimeObject * ___windowsRuntimeStream0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WinRtToNetFxStreamAdapter_Create_mCCF171C3466E68BBBF31CBB0C98C3F282F5A5B45_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	{
		RuntimeObject * L_0 = ___windowsRuntimeStream0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, _stringLiteral238EC4C85B4911E758E20D944D167F97A2F2CF83, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, WinRtToNetFxStreamAdapter_Create_mCCF171C3466E68BBBF31CBB0C98C3F282F5A5B45_RuntimeMethod_var);
	}

IL_000e:
	{
		RuntimeObject * L_2 = ___windowsRuntimeStream0;
		V_0 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_2, IInputStream_tE16D3C1553F5E6BAC4E7E8D7DE411ADD049B1B13_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		RuntimeObject * L_3 = ___windowsRuntimeStream0;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_3, IOutputStream_t0BFFD9F35BD49DAF121DEB9BECC544772AF35C6B_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		RuntimeObject * L_4 = ___windowsRuntimeStream0;
		V_2 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_4, IRandomAccessStream_tF45B1A1FE1DC95209EC2F32A0134C4BCDD756E10_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_5 = V_0;
		if (L_5)
		{
			goto IL_0040;
		}
	}
	{
		bool L_6 = V_1;
		if (L_6)
		{
			goto IL_0040;
		}
	}
	{
		bool L_7 = V_2;
		if (L_7)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_8 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_8, _stringLiteralE2ADD12470D36B78AD7A750A69608557CECC3E83, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, NULL, WinRtToNetFxStreamAdapter_Create_mCCF171C3466E68BBBF31CBB0C98C3F282F5A5B45_RuntimeMethod_var);
	}

IL_0040:
	{
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_008a;
		}
	}
	{
		RuntimeObject * L_10 = ___windowsRuntimeStream0;
		V_3 = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, IRandomAccessStream_tF45B1A1FE1DC95209EC2F32A0134C4BCDD756E10_il2cpp_TypeInfo_var));
		bool L_11 = V_0;
		if (L_11)
		{
			goto IL_0060;
		}
	}
	{
		RuntimeObject* L_12 = V_3;
		NullCheck(L_12);
		bool L_13 = InterfaceFuncInvoker0< bool >::Invoke(4 /* System.Boolean Windows.Storage.Streams.IRandomAccessStream::get_CanRead() */, IRandomAccessStream_tF45B1A1FE1DC95209EC2F32A0134C4BCDD756E10_il2cpp_TypeInfo_var, L_12);
		if (!L_13)
		{
			goto IL_0060;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_14 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_14, _stringLiteralB621359599DEAFE3E9A370BB6E87AC8690707AA4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, NULL, WinRtToNetFxStreamAdapter_Create_mCCF171C3466E68BBBF31CBB0C98C3F282F5A5B45_RuntimeMethod_var);
	}

IL_0060:
	{
		bool L_15 = V_1;
		if (L_15)
		{
			goto IL_0076;
		}
	}
	{
		RuntimeObject* L_16 = V_3;
		NullCheck(L_16);
		bool L_17 = InterfaceFuncInvoker0< bool >::Invoke(5 /* System.Boolean Windows.Storage.Streams.IRandomAccessStream::get_CanWrite() */, IRandomAccessStream_tF45B1A1FE1DC95209EC2F32A0134C4BCDD756E10_il2cpp_TypeInfo_var, L_16);
		if (!L_17)
		{
			goto IL_0076;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_18 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_18, _stringLiteralA495EDFA3284045D000F3BC7BD74216D48F52738, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, NULL, WinRtToNetFxStreamAdapter_Create_mCCF171C3466E68BBBF31CBB0C98C3F282F5A5B45_RuntimeMethod_var);
	}

IL_0076:
	{
		RuntimeObject* L_19 = V_3;
		NullCheck(L_19);
		bool L_20 = InterfaceFuncInvoker0< bool >::Invoke(4 /* System.Boolean Windows.Storage.Streams.IRandomAccessStream::get_CanRead() */, IRandomAccessStream_tF45B1A1FE1DC95209EC2F32A0134C4BCDD756E10_il2cpp_TypeInfo_var, L_19);
		if (L_20)
		{
			goto IL_0080;
		}
	}
	{
		V_0 = (bool)0;
	}

IL_0080:
	{
		RuntimeObject* L_21 = V_3;
		NullCheck(L_21);
		bool L_22 = InterfaceFuncInvoker0< bool >::Invoke(5 /* System.Boolean Windows.Storage.Streams.IRandomAccessStream::get_CanWrite() */, IRandomAccessStream_tF45B1A1FE1DC95209EC2F32A0134C4BCDD756E10_il2cpp_TypeInfo_var, L_21);
		if (L_22)
		{
			goto IL_008a;
		}
	}
	{
		V_1 = (bool)0;
	}

IL_008a:
	{
		bool L_23 = V_0;
		if (L_23)
		{
			goto IL_009b;
		}
	}
	{
		bool L_24 = V_1;
		if (L_24)
		{
			goto IL_009b;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_25 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_25, _stringLiteral76A15848F7533364121337F4C643FBA1A0F325D4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_25, NULL, WinRtToNetFxStreamAdapter_Create_mCCF171C3466E68BBBF31CBB0C98C3F282F5A5B45_RuntimeMethod_var);
	}

IL_009b:
	{
		RuntimeObject * L_26 = ___windowsRuntimeStream0;
		bool L_27 = V_0;
		bool L_28 = V_1;
		bool L_29 = V_2;
		WinRtToNetFxStreamAdapter_t5DF3E266765C62B1F96383772091E1E54DD48397 * L_30 = (WinRtToNetFxStreamAdapter_t5DF3E266765C62B1F96383772091E1E54DD48397 *)il2cpp_codegen_object_new(WinRtToNetFxStreamAdapter_t5DF3E266765C62B1F96383772091E1E54DD48397_il2cpp_TypeInfo_var);
		WinRtToNetFxStreamAdapter__ctor_m32DFDE65034486518FEF279121FF1BCEF328FCDF(L_30, L_26, L_27, L_28, L_29, /*hidden argument*/NULL);
		return L_30;
	}
}
// System.Void System.IO.WinRtToNetFxStreamAdapter::.ctor(System.Object,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinRtToNetFxStreamAdapter__ctor_m32DFDE65034486518FEF279121FF1BCEF328FCDF (WinRtToNetFxStreamAdapter_t5DF3E266765C62B1F96383772091E1E54DD48397 * __this, RuntimeObject * ___winRtStream0, bool ___canRead1, bool ___canWrite2, bool ___canSeek3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WinRtToNetFxStreamAdapter__ctor_m32DFDE65034486518FEF279121FF1BCEF328FCDF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set__leaveUnderlyingStreamOpen_6((bool)1);
		IL2CPP_RUNTIME_CLASS_INIT(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7_il2cpp_TypeInfo_var);
		Stream__ctor_m58342D6FD95230C6BA1058E5698AB4BAF0A4DBF5(__this, /*hidden argument*/NULL);
		RuntimeObject * L_0 = ___winRtStream0;
		__this->set__winRtStream_7(L_0);
		bool L_1 = ___canRead1;
		__this->set__canRead_8(L_1);
		bool L_2 = ___canWrite2;
		__this->set__canWrite_9(L_2);
		bool L_3 = ___canSeek3;
		__this->set__canSeek_10(L_3);
		return;
	}
}
// System.Void System.IO.WinRtToNetFxStreamAdapter::SetWonInitializationRace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinRtToNetFxStreamAdapter_SetWonInitializationRace_m3A170BF60C8D57B6B1DB37B39A767B6DDD43B023 (WinRtToNetFxStreamAdapter_t5DF3E266765C62B1F96383772091E1E54DD48397 * __this, const RuntimeMethod* method)
{
	{
		__this->set__leaveUnderlyingStreamOpen_6((bool)0);
		return;
	}
}
// System.Byte[] System.IO.WinRtToNetFxStreamAdapter::get_OneByteBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* WinRtToNetFxStreamAdapter_get_OneByteBuffer_mBD6829138522F26FED20CEF828A3048B910B016D (WinRtToNetFxStreamAdapter_t5DF3E266765C62B1F96383772091E1E54DD48397 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WinRtToNetFxStreamAdapter_get_OneByteBuffer_mBD6829138522F26FED20CEF828A3048B910B016D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_0 = NULL;
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = __this->get__oneByteBuffer_5();
		V_0 = L_0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = V_0;
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)1);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = L_2;
		V_0 = L_3;
		__this->set__oneByteBuffer_5(L_3);
	}

IL_0018:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = V_0;
		return L_4;
	}
}
// System.Void System.IO.WinRtToNetFxStreamAdapter::EnsureNotDisposed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinRtToNetFxStreamAdapter_EnsureNotDisposed_mF8858E644BF5B6A230329F688972B99A0F624150 (WinRtToNetFxStreamAdapter_t5DF3E266765C62B1F96383772091E1E54DD48397 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WinRtToNetFxStreamAdapter_EnsureNotDisposed_mF8858E644BF5B6A230329F688972B99A0F624150_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = __this->get__winRtStream_7();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		ObjectDisposedException_tF68E471ECD1419AD7C51137B742837395F50B69A * L_1 = (ObjectDisposedException_tF68E471ECD1419AD7C51137B742837395F50B69A *)il2cpp_codegen_object_new(ObjectDisposedException_tF68E471ECD1419AD7C51137B742837395F50B69A_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m8B5D23EA08E42BDE6BC5233CC666295F19BBD2F9(L_1, _stringLiteralD011B3DDE8AABE1933A3802E8F1DAD1CAC43FD68, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, WinRtToNetFxStreamAdapter_EnsureNotDisposed_mF8858E644BF5B6A230329F688972B99A0F624150_RuntimeMethod_var);
	}

IL_0013:
	{
		return;
	}
}
// System.Void System.IO.WinRtToNetFxStreamAdapter::EnsureCanRead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinRtToNetFxStreamAdapter_EnsureCanRead_m47456E779147FE03374BC5272A195835BDCF8434 (WinRtToNetFxStreamAdapter_t5DF3E266765C62B1F96383772091E1E54DD48397 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WinRtToNetFxStreamAdapter_EnsureCanRead_m47456E779147FE03374BC5272A195835BDCF8434_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get__canRead_8();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_1 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mD023A89A5C1F740F43F0A9CD6C49DC21230B3CEE(L_1, _stringLiteralDF4E334F97E5D7E89909BA2F34EFDC05E9D3A548, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, WinRtToNetFxStreamAdapter_EnsureCanRead_m47456E779147FE03374BC5272A195835BDCF8434_RuntimeMethod_var);
	}

IL_0013:
	{
		return;
	}
}
// System.Void System.IO.WinRtToNetFxStreamAdapter::EnsureCanWrite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinRtToNetFxStreamAdapter_EnsureCanWrite_mC94E5B0115A84E45BED38ECE64E5D6A84F19873C (WinRtToNetFxStreamAdapter_t5DF3E266765C62B1F96383772091E1E54DD48397 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WinRtToNetFxStreamAdapter_EnsureCanWrite_mC94E5B0115A84E45BED38ECE64E5D6A84F19873C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get__canWrite_9();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_1 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mD023A89A5C1F740F43F0A9CD6C49DC21230B3CEE(L_1, _stringLiteral6C27F676EEAFD1142A5F7127B9E9A6300C4D1BB9, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, WinRtToNetFxStreamAdapter_EnsureCanWrite_mC94E5B0115A84E45BED38ECE64E5D6A84F19873C_RuntimeMethod_var);
	}

IL_0013:
	{
		return;
	}
}
// System.Void System.IO.WinRtToNetFxStreamAdapter::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinRtToNetFxStreamAdapter_Dispose_m4B0059F4DFD1068CB4EFB7BEBA5BA2C19F40BEA4 (WinRtToNetFxStreamAdapter_t5DF3E266765C62B1F96383772091E1E54DD48397 * __this, bool ___disposing0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WinRtToNetFxStreamAdapter_Dispose_m4B0059F4DFD1068CB4EFB7BEBA5BA2C19F40BEA4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		bool L_0 = ___disposing0;
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		RuntimeObject * L_1 = __this->get__winRtStream_7();
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		bool L_2 = __this->get__leaveUnderlyingStreamOpen_6();
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		RuntimeObject * L_3 = __this->get__winRtStream_7();
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		NullCheck(L_5);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_5);
	}

IL_0028:
	{
		__this->set__winRtStream_7(NULL);
		bool L_6 = ___disposing0;
		Stream_Dispose_mC0F23B2D31DC853B12A10F0233173A278FF21B05(__this, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.IO.WinRtToNetFxStreamAdapter::get_CanRead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WinRtToNetFxStreamAdapter_get_CanRead_m9A15816EF314DB640B8EF2BADED51C4B27E2EA6E (WinRtToNetFxStreamAdapter_t5DF3E266765C62B1F96383772091E1E54DD48397 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__canRead_8();
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		RuntimeObject * L_1 = __this->get__winRtStream_7();
		return (bool)((!(((RuntimeObject*)(RuntimeObject *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}

IL_0012:
	{
		return (bool)0;
	}
}
// System.Boolean System.IO.WinRtToNetFxStreamAdapter::get_CanWrite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WinRtToNetFxStreamAdapter_get_CanWrite_mA56E99097426D3A2874132854C29E6BB4A6D394E (WinRtToNetFxStreamAdapter_t5DF3E266765C62B1F96383772091E1E54DD48397 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__canWrite_9();
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		RuntimeObject * L_1 = __this->get__winRtStream_7();
		return (bool)((!(((RuntimeObject*)(RuntimeObject *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}

IL_0012:
	{
		return (bool)0;
	}
}
// System.Boolean System.IO.WinRtToNetFxStreamAdapter::get_CanSeek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WinRtToNetFxStreamAdapter_get_CanSeek_mE690EB0F98990B3C530222714A55564078308324 (WinRtToNetFxStreamAdapter_t5DF3E266765C62B1F96383772091E1E54DD48397 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__canSeek_10();
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		RuntimeObject * L_1 = __this->get__winRtStream_7();
		return (bool)((!(((RuntimeObject*)(RuntimeObject *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}

IL_0012:
	{
		return (bool)0;
	}
}
// System.Int64 System.IO.WinRtToNetFxStreamAdapter::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t WinRtToNetFxStreamAdapter_get_Length_m2A7C8A84DCE6624EB6109F7D887B8ED2A276A7F2 (WinRtToNetFxStreamAdapter_t5DF3E266765C62B1F96383772091E1E54DD48397 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WinRtToNetFxStreamAdapter_get_Length_m2A7C8A84DCE6624EB6109F7D887B8ED2A276A7F2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	uint64_t G_B4_0 = 0;
	uint64_t G_B3_0 = 0;
	{
		RuntimeObject* L_0 = WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIRandomAccessStream_tF45B1A1FE1DC95209EC2F32A0134C4BCDD756E10_mE5EE512F0D38F38E3D777E1ED265896D6949F8A2(__this, /*hidden argument*/WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIRandomAccessStream_tF45B1A1FE1DC95209EC2F32A0134C4BCDD756E10_mE5EE512F0D38F38E3D777E1ED265896D6949F8A2_RuntimeMethod_var);
		bool L_1 = __this->get__canSeek_10();
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_0019;
		}
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_2 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mD023A89A5C1F740F43F0A9CD6C49DC21230B3CEE(L_2, _stringLiteral2227DD7A1AB9EF8052F7AFDCD6C95AD8E2EE9625, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, WinRtToNetFxStreamAdapter_get_Length_m2A7C8A84DCE6624EB6109F7D887B8ED2A276A7F2_RuntimeMethod_var);
	}

IL_0019:
	{
		NullCheck(G_B2_0);
		uint64_t L_3 = InterfaceFuncInvoker0< uint64_t >::Invoke(0 /* System.UInt64 Windows.Storage.Streams.IRandomAccessStream::get_Size() */, IRandomAccessStream_tF45B1A1FE1DC95209EC2F32A0134C4BCDD756E10_il2cpp_TypeInfo_var, G_B2_0);
		uint64_t L_4 = L_3;
		G_B3_0 = L_4;
		if ((!(((uint64_t)L_4) > ((uint64_t)((int64_t)std::numeric_limits<int64_t>::max())))))
		{
			G_B4_0 = L_4;
			goto IL_0035;
		}
	}
	{
		IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA * L_5 = (IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA *)il2cpp_codegen_object_new(IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA_il2cpp_TypeInfo_var);
		IOException__ctor_mB64DEFB376AA8E279A647A3770F913B20EF65175(L_5, _stringLiteralF00101EF62DC55B11167FC24AEA4A30C88F05BA6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, NULL, WinRtToNetFxStreamAdapter_get_Length_m2A7C8A84DCE6624EB6109F7D887B8ED2A276A7F2_RuntimeMethod_var);
	}

IL_0035:
	{
		return G_B4_0;
	}
}
// System.Int64 System.IO.WinRtToNetFxStreamAdapter::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t WinRtToNetFxStreamAdapter_get_Position_m4C38E9A2900B580B06A16E9C936397D3C92F08BF (WinRtToNetFxStreamAdapter_t5DF3E266765C62B1F96383772091E1E54DD48397 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WinRtToNetFxStreamAdapter_get_Position_m4C38E9A2900B580B06A16E9C936397D3C92F08BF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	uint64_t G_B4_0 = 0;
	uint64_t G_B3_0 = 0;
	{
		RuntimeObject* L_0 = WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIRandomAccessStream_tF45B1A1FE1DC95209EC2F32A0134C4BCDD756E10_mE5EE512F0D38F38E3D777E1ED265896D6949F8A2(__this, /*hidden argument*/WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIRandomAccessStream_tF45B1A1FE1DC95209EC2F32A0134C4BCDD756E10_mE5EE512F0D38F38E3D777E1ED265896D6949F8A2_RuntimeMethod_var);
		bool L_1 = __this->get__canSeek_10();
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_0019;
		}
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_2 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mD023A89A5C1F740F43F0A9CD6C49DC21230B3CEE(L_2, _stringLiteral1C0C2E1B769D2D03A725D05C16F75E075F9AB1DA, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, WinRtToNetFxStreamAdapter_get_Position_m4C38E9A2900B580B06A16E9C936397D3C92F08BF_RuntimeMethod_var);
	}

IL_0019:
	{
		NullCheck(G_B2_0);
		uint64_t L_3 = InterfaceFuncInvoker0< uint64_t >::Invoke(2 /* System.UInt64 Windows.Storage.Streams.IRandomAccessStream::get_Position() */, IRandomAccessStream_tF45B1A1FE1DC95209EC2F32A0134C4BCDD756E10_il2cpp_TypeInfo_var, G_B2_0);
		uint64_t L_4 = L_3;
		G_B3_0 = L_4;
		if ((!(((uint64_t)L_4) > ((uint64_t)((int64_t)std::numeric_limits<int64_t>::max())))))
		{
			G_B4_0 = L_4;
			goto IL_0035;
		}
	}
	{
		IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA * L_5 = (IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA *)il2cpp_codegen_object_new(IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA_il2cpp_TypeInfo_var);
		IOException__ctor_mB64DEFB376AA8E279A647A3770F913B20EF65175(L_5, _stringLiteralF00101EF62DC55B11167FC24AEA4A30C88F05BA6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, NULL, WinRtToNetFxStreamAdapter_get_Position_m4C38E9A2900B580B06A16E9C936397D3C92F08BF_RuntimeMethod_var);
	}

IL_0035:
	{
		return G_B4_0;
	}
}
// System.Void System.IO.WinRtToNetFxStreamAdapter::set_Position(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinRtToNetFxStreamAdapter_set_Position_m38D3A3BC8CE9CD7B48E5DD6DAEFFABC0FFE6D100 (WinRtToNetFxStreamAdapter_t5DF3E266765C62B1F96383772091E1E54DD48397 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WinRtToNetFxStreamAdapter_set_Position_m38D3A3BC8CE9CD7B48E5DD6DAEFFABC0FFE6D100_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B4_0 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	{
		int64_t L_0 = ___value0;
		if ((((int64_t)L_0) >= ((int64_t)(((int64_t)((int64_t)0))))))
		{
			goto IL_0015;
		}
	}
	{
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_1 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m300CE4D04A068C209FD858101AC361C1B600B5AE(L_1, _stringLiteralCF1C85ADBA548E8D681255278976584A7E4A44DE, _stringLiteralC660CFFD96225F6CC69535C891358260250F4BB0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, WinRtToNetFxStreamAdapter_set_Position_m38D3A3BC8CE9CD7B48E5DD6DAEFFABC0FFE6D100_RuntimeMethod_var);
	}

IL_0015:
	{
		RuntimeObject* L_2 = WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIRandomAccessStream_tF45B1A1FE1DC95209EC2F32A0134C4BCDD756E10_mE5EE512F0D38F38E3D777E1ED265896D6949F8A2(__this, /*hidden argument*/WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIRandomAccessStream_tF45B1A1FE1DC95209EC2F32A0134C4BCDD756E10_mE5EE512F0D38F38E3D777E1ED265896D6949F8A2_RuntimeMethod_var);
		bool L_3 = __this->get__canSeek_10();
		G_B3_0 = L_2;
		if (L_3)
		{
			G_B4_0 = L_2;
			goto IL_002e;
		}
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_4 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mD023A89A5C1F740F43F0A9CD6C49DC21230B3CEE(L_4, _stringLiteral1C0C2E1B769D2D03A725D05C16F75E075F9AB1DA, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, WinRtToNetFxStreamAdapter_set_Position_m38D3A3BC8CE9CD7B48E5DD6DAEFFABC0FFE6D100_RuntimeMethod_var);
	}

IL_002e:
	{
		int64_t L_5 = ___value0;
		NullCheck(G_B4_0);
		InterfaceActionInvoker1< uint64_t >::Invoke(3 /* System.Void Windows.Storage.Streams.IRandomAccessStream::Seek(System.UInt64) */, IRandomAccessStream_tF45B1A1FE1DC95209EC2F32A0134C4BCDD756E10_il2cpp_TypeInfo_var, G_B4_0, L_5);
		return;
	}
}
// System.Int64 System.IO.WinRtToNetFxStreamAdapter::Seek(System.Int64,System.IO.SeekOrigin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t WinRtToNetFxStreamAdapter_Seek_mF2618732D60CA7E27B4C51EA6F0A06AF7CFD3CC3 (WinRtToNetFxStreamAdapter_t5DF3E266765C62B1F96383772091E1E54DD48397 * __this, int64_t ___offset0, int32_t ___origin1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WinRtToNetFxStreamAdapter_Seek_mF2618732D60CA7E27B4C51EA6F0A06AF7CFD3CC3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint64_t V_3 = 0;
	int64_t V_4 = 0;
	uint64_t V_5 = 0;
	int64_t V_6 = 0;
	int64_t G_B16_0 = 0;
	int64_t G_B18_0 = 0;
	int64_t G_B17_0 = 0;
	{
		RuntimeObject* L_0 = WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIRandomAccessStream_tF45B1A1FE1DC95209EC2F32A0134C4BCDD756E10_mE5EE512F0D38F38E3D777E1ED265896D6949F8A2(__this, /*hidden argument*/WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIRandomAccessStream_tF45B1A1FE1DC95209EC2F32A0134C4BCDD756E10_mE5EE512F0D38F38E3D777E1ED265896D6949F8A2_RuntimeMethod_var);
		V_0 = L_0;
		bool L_1 = __this->get__canSeek_10();
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_2 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mD023A89A5C1F740F43F0A9CD6C49DC21230B3CEE(L_2, _stringLiteral20C2D8FEFC31CFAD5BD68301FE9A3DCC3D9D29B4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, WinRtToNetFxStreamAdapter_Seek_mF2618732D60CA7E27B4C51EA6F0A06AF7CFD3CC3_RuntimeMethod_var);
	}

IL_001a:
	{
		int32_t L_3 = ___origin1;
		switch (L_3)
		{
			case 0:
			{
				goto IL_0031;
			}
			case 1:
			{
				goto IL_003a;
			}
			case 2:
			{
				goto IL_0077;
			}
		}
	}
	{
		goto IL_0113;
	}

IL_0031:
	{
		int64_t L_4 = ___offset0;
		VirtActionInvoker1< int64_t >::Invoke(12 /* System.Void System.IO.Stream::set_Position(System.Int64) */, __this, L_4);
		int64_t L_5 = ___offset0;
		return L_5;
	}

IL_003a:
	{
		int64_t L_6 = VirtFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, __this);
		V_1 = L_6;
		int64_t L_7 = V_1;
		int64_t L_8 = ___offset0;
		if ((((int64_t)((int64_t)il2cpp_codegen_subtract((int64_t)((int64_t)std::numeric_limits<int64_t>::max()), (int64_t)L_7))) >= ((int64_t)L_8)))
		{
			goto IL_005a;
		}
	}
	{
		IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA * L_9 = (IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA *)il2cpp_codegen_object_new(IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA_il2cpp_TypeInfo_var);
		IOException__ctor_mB64DEFB376AA8E279A647A3770F913B20EF65175(L_9, _stringLiteral5D3FD8BD4049B89DCC077CB8C12BDD8F4FBC1BFC, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, NULL, WinRtToNetFxStreamAdapter_Seek_mF2618732D60CA7E27B4C51EA6F0A06AF7CFD3CC3_RuntimeMethod_var);
	}

IL_005a:
	{
		int64_t L_10 = V_1;
		int64_t L_11 = ___offset0;
		V_2 = ((int64_t)il2cpp_codegen_add((int64_t)L_10, (int64_t)L_11));
		int64_t L_12 = V_2;
		if ((((int64_t)L_12) >= ((int64_t)(((int64_t)((int64_t)0))))))
		{
			goto IL_006e;
		}
	}
	{
		IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA * L_13 = (IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA *)il2cpp_codegen_object_new(IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA_il2cpp_TypeInfo_var);
		IOException__ctor_mB64DEFB376AA8E279A647A3770F913B20EF65175(L_13, _stringLiteralC660CFFD96225F6CC69535C891358260250F4BB0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, NULL, WinRtToNetFxStreamAdapter_Seek_mF2618732D60CA7E27B4C51EA6F0A06AF7CFD3CC3_RuntimeMethod_var);
	}

IL_006e:
	{
		int64_t L_14 = V_2;
		VirtActionInvoker1< int64_t >::Invoke(12 /* System.Void System.IO.Stream::set_Position(System.Int64) */, __this, L_14);
		int64_t L_15 = V_2;
		return L_15;
	}

IL_0077:
	{
		RuntimeObject* L_16 = V_0;
		NullCheck(L_16);
		uint64_t L_17 = InterfaceFuncInvoker0< uint64_t >::Invoke(0 /* System.UInt64 Windows.Storage.Streams.IRandomAccessStream::get_Size() */, IRandomAccessStream_tF45B1A1FE1DC95209EC2F32A0134C4BCDD756E10_il2cpp_TypeInfo_var, L_16);
		V_3 = L_17;
		uint64_t L_18 = V_3;
		if ((!(((uint64_t)L_18) > ((uint64_t)((int64_t)std::numeric_limits<int64_t>::max())))))
		{
			goto IL_00d4;
		}
	}
	{
		int64_t L_19 = ___offset0;
		if ((((int64_t)L_19) < ((int64_t)(((int64_t)((int64_t)0))))))
		{
			goto IL_009a;
		}
	}
	{
		IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA * L_20 = (IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA *)il2cpp_codegen_object_new(IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA_il2cpp_TypeInfo_var);
		IOException__ctor_mB64DEFB376AA8E279A647A3770F913B20EF65175(L_20, _stringLiteral5D3FD8BD4049B89DCC077CB8C12BDD8F4FBC1BFC, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, NULL, WinRtToNetFxStreamAdapter_Seek_mF2618732D60CA7E27B4C51EA6F0A06AF7CFD3CC3_RuntimeMethod_var);
	}

IL_009a:
	{
		int64_t L_21 = ___offset0;
		if ((((int64_t)L_21) == ((int64_t)((int64_t)std::numeric_limits<int64_t>::min()))))
		{
			goto IL_00aa;
		}
	}
	{
		int64_t L_22 = ___offset0;
		G_B16_0 = ((-L_22));
		goto IL_00b3;
	}

IL_00aa:
	{
		G_B16_0 = ((int64_t)std::numeric_limits<int64_t>::min());
	}

IL_00b3:
	{
		V_5 = G_B16_0;
		uint64_t L_23 = V_3;
		uint64_t L_24 = V_5;
		int64_t L_25 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_23, (int64_t)L_24));
		G_B17_0 = L_25;
		if ((!(((uint64_t)L_25) > ((uint64_t)((int64_t)std::numeric_limits<int64_t>::max())))))
		{
			G_B18_0 = L_25;
			goto IL_00d0;
		}
	}
	{
		IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA * L_26 = (IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA *)il2cpp_codegen_object_new(IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA_il2cpp_TypeInfo_var);
		IOException__ctor_mB64DEFB376AA8E279A647A3770F913B20EF65175(L_26, _stringLiteral5D3FD8BD4049B89DCC077CB8C12BDD8F4FBC1BFC, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_26, NULL, WinRtToNetFxStreamAdapter_Seek_mF2618732D60CA7E27B4C51EA6F0A06AF7CFD3CC3_RuntimeMethod_var);
	}

IL_00d0:
	{
		V_4 = G_B18_0;
		goto IL_0108;
	}

IL_00d4:
	{
		uint64_t L_27 = V_3;
		V_6 = L_27;
		int64_t L_28 = V_6;
		int64_t L_29 = ___offset0;
		if ((((int64_t)((int64_t)il2cpp_codegen_subtract((int64_t)((int64_t)std::numeric_limits<int64_t>::max()), (int64_t)L_28))) >= ((int64_t)L_29)))
		{
			goto IL_00f1;
		}
	}
	{
		IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA * L_30 = (IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA *)il2cpp_codegen_object_new(IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA_il2cpp_TypeInfo_var);
		IOException__ctor_mB64DEFB376AA8E279A647A3770F913B20EF65175(L_30, _stringLiteral5D3FD8BD4049B89DCC077CB8C12BDD8F4FBC1BFC, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_30, NULL, WinRtToNetFxStreamAdapter_Seek_mF2618732D60CA7E27B4C51EA6F0A06AF7CFD3CC3_RuntimeMethod_var);
	}

IL_00f1:
	{
		int64_t L_31 = V_6;
		int64_t L_32 = ___offset0;
		V_4 = ((int64_t)il2cpp_codegen_add((int64_t)L_31, (int64_t)L_32));
		int64_t L_33 = V_4;
		if ((((int64_t)L_33) >= ((int64_t)(((int64_t)((int64_t)0))))))
		{
			goto IL_0108;
		}
	}
	{
		IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA * L_34 = (IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA *)il2cpp_codegen_object_new(IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA_il2cpp_TypeInfo_var);
		IOException__ctor_mB64DEFB376AA8E279A647A3770F913B20EF65175(L_34, _stringLiteralC660CFFD96225F6CC69535C891358260250F4BB0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_34, NULL, WinRtToNetFxStreamAdapter_Seek_mF2618732D60CA7E27B4C51EA6F0A06AF7CFD3CC3_RuntimeMethod_var);
	}

IL_0108:
	{
		int64_t L_35 = V_4;
		VirtActionInvoker1< int64_t >::Invoke(12 /* System.Void System.IO.Stream::set_Position(System.Int64) */, __this, L_35);
		int64_t L_36 = V_4;
		return L_36;
	}

IL_0113:
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_37 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m26DC3463C6F3C98BF33EA39598DD2B32F0249CA8(L_37, _stringLiteral44AC91F010ECDD855BA22A4FE5878DA9B04839E4, _stringLiteralB284F94827DB1FA2970D9E2014F080413B547A7E, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_37, NULL, WinRtToNetFxStreamAdapter_Seek_mF2618732D60CA7E27B4C51EA6F0A06AF7CFD3CC3_RuntimeMethod_var);
	}
}
// System.Void System.IO.WinRtToNetFxStreamAdapter::SetLength(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinRtToNetFxStreamAdapter_SetLength_mDFE007865B79420FD114317808EA21FB302A9BF1 (WinRtToNetFxStreamAdapter_t5DF3E266765C62B1F96383772091E1E54DD48397 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WinRtToNetFxStreamAdapter_SetLength_mDFE007865B79420FD114317808EA21FB302A9BF1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		int64_t L_0 = ___value0;
		if ((((int64_t)L_0) >= ((int64_t)(((int64_t)((int64_t)0))))))
		{
			goto IL_0015;
		}
	}
	{
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_1 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m300CE4D04A068C209FD858101AC361C1B600B5AE(L_1, _stringLiteralF32B67C7E26342AF42EFABC674D441DCA0A281C5, _stringLiteral4D886BE0DC57669474623D6348BB1555D6489AAF, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, WinRtToNetFxStreamAdapter_SetLength_mDFE007865B79420FD114317808EA21FB302A9BF1_RuntimeMethod_var);
	}

IL_0015:
	{
		RuntimeObject* L_2 = WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIRandomAccessStream_tF45B1A1FE1DC95209EC2F32A0134C4BCDD756E10_mE5EE512F0D38F38E3D777E1ED265896D6949F8A2(__this, /*hidden argument*/WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIRandomAccessStream_tF45B1A1FE1DC95209EC2F32A0134C4BCDD756E10_mE5EE512F0D38F38E3D777E1ED265896D6949F8A2_RuntimeMethod_var);
		V_0 = L_2;
		bool L_3 = __this->get__canSeek_10();
		if (L_3)
		{
			goto IL_002f;
		}
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_4 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mD023A89A5C1F740F43F0A9CD6C49DC21230B3CEE(L_4, _stringLiteral20C2D8FEFC31CFAD5BD68301FE9A3DCC3D9D29B4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, WinRtToNetFxStreamAdapter_SetLength_mDFE007865B79420FD114317808EA21FB302A9BF1_RuntimeMethod_var);
	}

IL_002f:
	{
		WinRtToNetFxStreamAdapter_EnsureCanWrite_mC94E5B0115A84E45BED38ECE64E5D6A84F19873C(__this, /*hidden argument*/NULL);
		RuntimeObject* L_5 = V_0;
		int64_t L_6 = ___value0;
		NullCheck(L_5);
		InterfaceActionInvoker1< uint64_t >::Invoke(1 /* System.Void Windows.Storage.Streams.IRandomAccessStream::put_Size(System.UInt64) */, IRandomAccessStream_tF45B1A1FE1DC95209EC2F32A0134C4BCDD756E10_il2cpp_TypeInfo_var, L_5, L_6);
		RuntimeObject* L_7 = V_0;
		NullCheck(L_7);
		uint64_t L_8 = InterfaceFuncInvoker0< uint64_t >::Invoke(0 /* System.UInt64 Windows.Storage.Streams.IRandomAccessStream::get_Size() */, IRandomAccessStream_tF45B1A1FE1DC95209EC2F32A0134C4BCDD756E10_il2cpp_TypeInfo_var, L_7);
		RuntimeObject* L_9 = V_0;
		NullCheck(L_9);
		uint64_t L_10 = InterfaceFuncInvoker0< uint64_t >::Invoke(2 /* System.UInt64 Windows.Storage.Streams.IRandomAccessStream::get_Position() */, IRandomAccessStream_tF45B1A1FE1DC95209EC2F32A0134C4BCDD756E10_il2cpp_TypeInfo_var, L_9);
		if ((!(((uint64_t)L_8) < ((uint64_t)L_10))))
		{
			goto IL_0051;
		}
	}
	{
		RuntimeObject* L_11 = V_0;
		int64_t L_12 = ___value0;
		NullCheck(L_11);
		InterfaceActionInvoker1< uint64_t >::Invoke(3 /* System.Void Windows.Storage.Streams.IRandomAccessStream::Seek(System.UInt64) */, IRandomAccessStream_tF45B1A1FE1DC95209EC2F32A0134C4BCDD756E10_il2cpp_TypeInfo_var, L_11, L_12);
	}

IL_0051:
	{
		return;
	}
}
// System.IAsyncResult System.IO.WinRtToNetFxStreamAdapter::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WinRtToNetFxStreamAdapter_BeginRead_mC32A604951DD11227CCFCAF1E5F121CB57FE1A68 (WinRtToNetFxStreamAdapter_t5DF3E266765C62B1F96383772091E1E54DD48397 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer0, int32_t ___offset1, int32_t ___count2, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback3, RuntimeObject * ___state4, bool ___usedByBlockingWrapper5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WinRtToNetFxStreamAdapter_BeginRead_mC32A604951DD11227CCFCAF1E5F121CB57FE1A68_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___buffer0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, _stringLiteralE53C2EA1FE4BD2B78BF4723C7C155A578E020A25, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, WinRtToNetFxStreamAdapter_BeginRead_mC32A604951DD11227CCFCAF1E5F121CB57FE1A68_RuntimeMethod_var);
	}

IL_000e:
	{
		int32_t L_2 = ___offset1;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_3 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6(L_3, _stringLiteral53A610E925BBC0A175E365D31241AE75AEEAD651, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, WinRtToNetFxStreamAdapter_BeginRead_mC32A604951DD11227CCFCAF1E5F121CB57FE1A68_RuntimeMethod_var);
	}

IL_001d:
	{
		int32_t L_4 = ___count2;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_5 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6(L_5, _stringLiteralEE9F38E186BA06F57B7B74D7E626B94E13CE2556, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, NULL, WinRtToNetFxStreamAdapter_BeginRead_mC32A604951DD11227CCFCAF1E5F121CB57FE1A68_RuntimeMethod_var);
	}

IL_002c:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = ___buffer0;
		NullCheck(L_6);
		int32_t L_7 = ___offset1;
		int32_t L_8 = ___count2;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))), (int32_t)L_7))) >= ((int32_t)L_8)))
		{
			goto IL_003f;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_9 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_9, _stringLiteralD8A4F1B621B23EE058344EAE0BCF400E0F478274, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, NULL, WinRtToNetFxStreamAdapter_BeginRead_mC32A604951DD11227CCFCAF1E5F121CB57FE1A68_RuntimeMethod_var);
	}

IL_003f:
	{
		RuntimeObject* L_10 = WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIInputStream_tE16D3C1553F5E6BAC4E7E8D7DE411ADD049B1B13_m1D884805AFF82A522F0A70539E6E880A3F5D0384(__this, /*hidden argument*/WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIInputStream_tE16D3C1553F5E6BAC4E7E8D7DE411ADD049B1B13_m1D884805AFF82A522F0A70539E6E880A3F5D0384_RuntimeMethod_var);
		WinRtToNetFxStreamAdapter_EnsureCanRead_m47456E779147FE03374BC5272A195835BDCF8434(__this, /*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_11 = ___buffer0;
		int32_t L_12 = ___offset1;
		int32_t L_13 = ___count2;
		RuntimeObject* L_14 = WindowsRuntimeBufferExtensions_AsBuffer_m8A7ECFC4D04B98BD389D03A8478CBCC14427650F(L_11, L_12, L_13, /*hidden argument*/NULL);
		V_0 = L_14;
		RuntimeObject* L_15 = V_0;
		int32_t L_16 = ___count2;
		NullCheck(L_10);
		RuntimeObject* L_17 = InterfaceFuncInvoker3< RuntimeObject*, RuntimeObject*, uint32_t, uint32_t >::Invoke(0 /* Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32> Windows.Storage.Streams.IInputStream::ReadAsync(Windows.Storage.Streams.IBuffer,System.UInt32,Windows.Storage.Streams.InputStreamOptions) */, IInputStream_tE16D3C1553F5E6BAC4E7E8D7DE411ADD049B1B13_il2cpp_TypeInfo_var, L_10, L_15, L_16, 1);
		RuntimeObject* L_18 = V_0;
		AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * L_19 = ___callback3;
		RuntimeObject * L_20 = ___state4;
		bool L_21 = ___usedByBlockingWrapper5;
		StreamReadAsyncResult_t897354343EA051942262510D5B3DE4B408B3E048 * L_22 = (StreamReadAsyncResult_t897354343EA051942262510D5B3DE4B408B3E048 *)il2cpp_codegen_object_new(StreamReadAsyncResult_t897354343EA051942262510D5B3DE4B408B3E048_il2cpp_TypeInfo_var);
		StreamReadAsyncResult__ctor_m1037B23E12C21BA0F4C92D48C76DA3EECD4435F0(L_22, L_17, L_18, L_19, L_20, (bool)((((int32_t)L_21) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		return L_22;
	}
}
// System.Int32 System.IO.WinRtToNetFxStreamAdapter::EndRead(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WinRtToNetFxStreamAdapter_EndRead_mA6F6842E1D4637C10E496EAAFB8789F9BA7CC4F9 (WinRtToNetFxStreamAdapter_t5DF3E266765C62B1F96383772091E1E54DD48397 * __this, RuntimeObject* ___asyncResult0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WinRtToNetFxStreamAdapter_EndRead_mA6F6842E1D4637C10E496EAAFB8789F9BA7CC4F9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StreamOperationAsyncResult_t675AB408CDF1B11AC6F446E24352B441F6422E0F * V_0 = NULL;
	int32_t V_1 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject* L_0 = ___asyncResult0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, _stringLiteral5B3BD2481D1A6E4A5654FB0FCDF9C6265B5A959F, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, WinRtToNetFxStreamAdapter_EndRead_mA6F6842E1D4637C10E496EAAFB8789F9BA7CC4F9_RuntimeMethod_var);
	}

IL_000e:
	{
		WinRtToNetFxStreamAdapter_EnsureNotDisposed_mF8858E644BF5B6A230329F688972B99A0F624150(__this, /*hidden argument*/NULL);
		WinRtToNetFxStreamAdapter_EnsureCanRead_m47456E779147FE03374BC5272A195835BDCF8434(__this, /*hidden argument*/NULL);
		RuntimeObject* L_2 = ___asyncResult0;
		V_0 = ((StreamOperationAsyncResult_t675AB408CDF1B11AC6F446E24352B441F6422E0F *)IsInstClass((RuntimeObject*)L_2, StreamOperationAsyncResult_t675AB408CDF1B11AC6F446E24352B441F6422E0F_il2cpp_TypeInfo_var));
		StreamOperationAsyncResult_t675AB408CDF1B11AC6F446E24352B441F6422E0F * L_3 = V_0;
		if (L_3)
		{
			goto IL_0034;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_4 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m26DC3463C6F3C98BF33EA39598DD2B32F0249CA8(L_4, _stringLiteral386BBD755C10FBAADDE3FD0D3B3C64A6C3DAD203, _stringLiteral5B3BD2481D1A6E4A5654FB0FCDF9C6265B5A959F, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, WinRtToNetFxStreamAdapter_EndRead_mA6F6842E1D4637C10E496EAAFB8789F9BA7CC4F9_RuntimeMethod_var);
	}

IL_0034:
	{
		StreamOperationAsyncResult_t675AB408CDF1B11AC6F446E24352B441F6422E0F * L_5 = V_0;
		NullCheck(L_5);
		StreamOperationAsyncResult_Wait_m7E111C3451B661E20090E85DF665934453D1403E(L_5, /*hidden argument*/NULL);
	}

IL_003a:
	try
	{ // begin try (depth: 1)
		{
			StreamOperationAsyncResult_t675AB408CDF1B11AC6F446E24352B441F6422E0F * L_6 = V_0;
			NullCheck(L_6);
			bool L_7 = StreamOperationAsyncResult_get_ProcessCompletedOperationInCallback_mAEBF8906F074143BECE20D7233B58FBE7F89D08D(L_6, /*hidden argument*/NULL);
			if (L_7)
			{
				goto IL_0048;
			}
		}

IL_0042:
		{
			StreamOperationAsyncResult_t675AB408CDF1B11AC6F446E24352B441F6422E0F * L_8 = V_0;
			NullCheck(L_8);
			StreamOperationAsyncResult_ProcessCompletedOperation_mCEAD13DA8A64F3CF722EE656F850716F26F9DEFB(L_8, /*hidden argument*/NULL);
		}

IL_0048:
		{
			StreamOperationAsyncResult_t675AB408CDF1B11AC6F446E24352B441F6422E0F * L_9 = V_0;
			NullCheck(L_9);
			bool L_10 = StreamOperationAsyncResult_get_HasError_m51A52788DC3613F241D5A0D17CB8EBFDA5E05F8D(L_9, /*hidden argument*/NULL);
			if (!L_10)
			{
				goto IL_005c;
			}
		}

IL_0050:
		{
			StreamOperationAsyncResult_t675AB408CDF1B11AC6F446E24352B441F6422E0F * L_11 = V_0;
			NullCheck(L_11);
			StreamOperationAsyncResult_CloseStreamOperation_mD2F52A21BFD94DC2A34E260CA631BBDA3CC6721A(L_11, /*hidden argument*/NULL);
			StreamOperationAsyncResult_t675AB408CDF1B11AC6F446E24352B441F6422E0F * L_12 = V_0;
			NullCheck(L_12);
			StreamOperationAsyncResult_ThrowCachedError_m4E9122EE3CD20858BB4570D95912EF3A48038D3A(L_12, /*hidden argument*/NULL);
		}

IL_005c:
		{
			StreamOperationAsyncResult_t675AB408CDF1B11AC6F446E24352B441F6422E0F * L_13 = V_0;
			NullCheck(L_13);
			int64_t L_14 = StreamOperationAsyncResult_get_BytesCompleted_m9874C092BA3E62466B1A0AA4DC6564962571D8B4(L_13, /*hidden argument*/NULL);
			V_1 = (((int32_t)((int32_t)L_14)));
			IL2CPP_LEAVE(0x6D, FINALLY_0066);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0066;
	}

FINALLY_0066:
	{ // begin finally (depth: 1)
		StreamOperationAsyncResult_t675AB408CDF1B11AC6F446E24352B441F6422E0F * L_15 = V_0;
		NullCheck(L_15);
		StreamOperationAsyncResult_CloseStreamOperation_mD2F52A21BFD94DC2A34E260CA631BBDA3CC6721A(L_15, /*hidden argument*/NULL);
		IL2CPP_RESET_LEAVE(0x6D);
		IL2CPP_END_FINALLY(102)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(102)
	{
		IL2CPP_JUMP_TBL(0x6D, IL_006d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_006d:
	{
		int32_t L_16 = V_1;
		return L_16;
	}
}
// System.Threading.Tasks.Task`1<System.Int32> System.IO.WinRtToNetFxStreamAdapter::ReadAsync(System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87 * WinRtToNetFxStreamAdapter_ReadAsync_m5160A87A3A863EDAB5BF53534B5A6B7802B57042 (WinRtToNetFxStreamAdapter_t5DF3E266765C62B1F96383772091E1E54DD48397 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer0, int32_t ___offset1, int32_t ___count2, CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  ___cancellationToken3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WinRtToNetFxStreamAdapter_ReadAsync_m5160A87A3A863EDAB5BF53534B5A6B7802B57042_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___buffer0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, _stringLiteralE53C2EA1FE4BD2B78BF4723C7C155A578E020A25, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, WinRtToNetFxStreamAdapter_ReadAsync_m5160A87A3A863EDAB5BF53534B5A6B7802B57042_RuntimeMethod_var);
	}

IL_000e:
	{
		int32_t L_2 = ___offset1;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_3 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6(L_3, _stringLiteral53A610E925BBC0A175E365D31241AE75AEEAD651, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, WinRtToNetFxStreamAdapter_ReadAsync_m5160A87A3A863EDAB5BF53534B5A6B7802B57042_RuntimeMethod_var);
	}

IL_001d:
	{
		int32_t L_4 = ___count2;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_5 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6(L_5, _stringLiteralEE9F38E186BA06F57B7B74D7E626B94E13CE2556, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, NULL, WinRtToNetFxStreamAdapter_ReadAsync_m5160A87A3A863EDAB5BF53534B5A6B7802B57042_RuntimeMethod_var);
	}

IL_002c:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = ___buffer0;
		NullCheck(L_6);
		int32_t L_7 = ___offset1;
		int32_t L_8 = ___count2;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))), (int32_t)L_7))) >= ((int32_t)L_8)))
		{
			goto IL_003f;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_9 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_9, _stringLiteralD8A4F1B621B23EE058344EAE0BCF400E0F478274, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, NULL, WinRtToNetFxStreamAdapter_ReadAsync_m5160A87A3A863EDAB5BF53534B5A6B7802B57042_RuntimeMethod_var);
	}

IL_003f:
	{
		WinRtToNetFxStreamAdapter_EnsureNotDisposed_mF8858E644BF5B6A230329F688972B99A0F624150(__this, /*hidden argument*/NULL);
		WinRtToNetFxStreamAdapter_EnsureCanRead_m47456E779147FE03374BC5272A195835BDCF8434(__this, /*hidden argument*/NULL);
		CancellationToken_ThrowIfCancellationRequested_m13AB667F961F83D8ED759BA402325638F43B0938((CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB *)(&___cancellationToken3), /*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_10 = ___buffer0;
		int32_t L_11 = ___offset1;
		int32_t L_12 = ___count2;
		CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  L_13 = ___cancellationToken3;
		Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87 * L_14 = WinRtToNetFxStreamAdapter_ReadAsyncInternal_m808223D75DD1A59959A6B9F14F623CC50050B593(__this, L_10, L_11, L_12, L_13, /*hidden argument*/NULL);
		return L_14;
	}
}
// System.Int32 System.IO.WinRtToNetFxStreamAdapter::Read(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WinRtToNetFxStreamAdapter_Read_m89B7FDF29A7000F6B9F6F7A83EAA697B64CC4F0F (WinRtToNetFxStreamAdapter_t5DF3E266765C62B1F96383772091E1E54DD48397 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	RuntimeObject* V_0 = NULL;
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___buffer0;
		int32_t L_1 = ___offset1;
		int32_t L_2 = ___count2;
		RuntimeObject* L_3 = WinRtToNetFxStreamAdapter_BeginRead_mC32A604951DD11227CCFCAF1E5F121CB57FE1A68(__this, L_0, L_1, L_2, (AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 *)NULL, NULL, (bool)1, /*hidden argument*/NULL);
		V_0 = L_3;
		RuntimeObject* L_4 = V_0;
		int32_t L_5 = VirtFuncInvoker1< int32_t, RuntimeObject* >::Invoke(21 /* System.Int32 System.IO.Stream::EndRead(System.IAsyncResult) */, __this, L_4);
		return L_5;
	}
}
// System.Int32 System.IO.WinRtToNetFxStreamAdapter::ReadByte()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WinRtToNetFxStreamAdapter_ReadByte_m92D78BEADEFEE949F3445780EBC10A5E17D9F265 (WinRtToNetFxStreamAdapter_t5DF3E266765C62B1F96383772091E1E54DD48397 * __this, const RuntimeMethod* method)
{
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_0 = NULL;
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = WinRtToNetFxStreamAdapter_get_OneByteBuffer_mBD6829138522F26FED20CEF828A3048B910B016D(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = V_0;
		int32_t L_2 = VirtFuncInvoker3< int32_t, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(28 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, __this, L_1, 0, 1);
		if (L_2)
		{
			goto IL_0014;
		}
	}
	{
		return (-1);
	}

IL_0014:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = 0;
		uint8_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		return L_5;
	}
}
// System.IAsyncResult System.IO.WinRtToNetFxStreamAdapter::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WinRtToNetFxStreamAdapter_BeginWrite_mD5790540FA58130541DD06B296A81417F28D9F55 (WinRtToNetFxStreamAdapter_t5DF3E266765C62B1F96383772091E1E54DD48397 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer0, int32_t ___offset1, int32_t ___count2, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback3, RuntimeObject * ___state4, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___buffer0;
		int32_t L_1 = ___offset1;
		int32_t L_2 = ___count2;
		AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * L_3 = ___callback3;
		RuntimeObject * L_4 = ___state4;
		RuntimeObject* L_5 = WinRtToNetFxStreamAdapter_BeginWrite_mD4A1A86E30CA5CE6BC6BEFABF3A11F42B1021916(__this, L_0, L_1, L_2, L_3, L_4, (bool)0, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.IAsyncResult System.IO.WinRtToNetFxStreamAdapter::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WinRtToNetFxStreamAdapter_BeginWrite_mD4A1A86E30CA5CE6BC6BEFABF3A11F42B1021916 (WinRtToNetFxStreamAdapter_t5DF3E266765C62B1F96383772091E1E54DD48397 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer0, int32_t ___offset1, int32_t ___count2, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback3, RuntimeObject * ___state4, bool ___usedByBlockingWrapper5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WinRtToNetFxStreamAdapter_BeginWrite_mD4A1A86E30CA5CE6BC6BEFABF3A11F42B1021916_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___buffer0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, _stringLiteralE53C2EA1FE4BD2B78BF4723C7C155A578E020A25, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, WinRtToNetFxStreamAdapter_BeginWrite_mD4A1A86E30CA5CE6BC6BEFABF3A11F42B1021916_RuntimeMethod_var);
	}

IL_000e:
	{
		int32_t L_2 = ___offset1;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_3 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6(L_3, _stringLiteral53A610E925BBC0A175E365D31241AE75AEEAD651, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, WinRtToNetFxStreamAdapter_BeginWrite_mD4A1A86E30CA5CE6BC6BEFABF3A11F42B1021916_RuntimeMethod_var);
	}

IL_001d:
	{
		int32_t L_4 = ___count2;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_5 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6(L_5, _stringLiteralEE9F38E186BA06F57B7B74D7E626B94E13CE2556, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, NULL, WinRtToNetFxStreamAdapter_BeginWrite_mD4A1A86E30CA5CE6BC6BEFABF3A11F42B1021916_RuntimeMethod_var);
	}

IL_002c:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = ___buffer0;
		NullCheck(L_6);
		int32_t L_7 = ___offset1;
		int32_t L_8 = ___count2;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))), (int32_t)L_7))) >= ((int32_t)L_8)))
		{
			goto IL_003f;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_9 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_9, _stringLiteralA7512A2545D962556CA62F28AA7BD8D840985DA9, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, NULL, WinRtToNetFxStreamAdapter_BeginWrite_mD4A1A86E30CA5CE6BC6BEFABF3A11F42B1021916_RuntimeMethod_var);
	}

IL_003f:
	{
		RuntimeObject* L_10 = WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIOutputStream_t0BFFD9F35BD49DAF121DEB9BECC544772AF35C6B_mBD26486F2545F104BBAB7AD5F27776B5ED315F8A(__this, /*hidden argument*/WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIOutputStream_t0BFFD9F35BD49DAF121DEB9BECC544772AF35C6B_mBD26486F2545F104BBAB7AD5F27776B5ED315F8A_RuntimeMethod_var);
		WinRtToNetFxStreamAdapter_EnsureCanWrite_mC94E5B0115A84E45BED38ECE64E5D6A84F19873C(__this, /*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_11 = ___buffer0;
		int32_t L_12 = ___offset1;
		int32_t L_13 = ___count2;
		RuntimeObject* L_14 = WindowsRuntimeBufferExtensions_AsBuffer_m8A7ECFC4D04B98BD389D03A8478CBCC14427650F(L_11, L_12, L_13, /*hidden argument*/NULL);
		V_0 = L_14;
		RuntimeObject* L_15 = V_0;
		NullCheck(L_10);
		RuntimeObject* L_16 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* Windows.Foundation.IAsyncOperationWithProgress`2<System.UInt32,System.UInt32> Windows.Storage.Streams.IOutputStream::WriteAsync(Windows.Storage.Streams.IBuffer) */, IOutputStream_t0BFFD9F35BD49DAF121DEB9BECC544772AF35C6B_il2cpp_TypeInfo_var, L_10, L_15);
		AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * L_17 = ___callback3;
		RuntimeObject * L_18 = ___state4;
		bool L_19 = ___usedByBlockingWrapper5;
		StreamWriteAsyncResult_t4A2F6C2119D655E60142F74DD7687412F81F9A2B * L_20 = (StreamWriteAsyncResult_t4A2F6C2119D655E60142F74DD7687412F81F9A2B *)il2cpp_codegen_object_new(StreamWriteAsyncResult_t4A2F6C2119D655E60142F74DD7687412F81F9A2B_il2cpp_TypeInfo_var);
		StreamWriteAsyncResult__ctor_m3948E7124A04878E7BCAAFCEBCB0B079BA6B6908(L_20, L_16, L_17, L_18, (bool)((((int32_t)L_19) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		return L_20;
	}
}
// System.Void System.IO.WinRtToNetFxStreamAdapter::EndWrite(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinRtToNetFxStreamAdapter_EndWrite_m2B931CFE24E318D4F4AE2BB00D24E7162A9E0EA5 (WinRtToNetFxStreamAdapter_t5DF3E266765C62B1F96383772091E1E54DD48397 * __this, RuntimeObject* ___asyncResult0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WinRtToNetFxStreamAdapter_EndWrite_m2B931CFE24E318D4F4AE2BB00D24E7162A9E0EA5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StreamOperationAsyncResult_t675AB408CDF1B11AC6F446E24352B441F6422E0F * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject* L_0 = ___asyncResult0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, _stringLiteral5B3BD2481D1A6E4A5654FB0FCDF9C6265B5A959F, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, WinRtToNetFxStreamAdapter_EndWrite_m2B931CFE24E318D4F4AE2BB00D24E7162A9E0EA5_RuntimeMethod_var);
	}

IL_000e:
	{
		WinRtToNetFxStreamAdapter_EnsureNotDisposed_mF8858E644BF5B6A230329F688972B99A0F624150(__this, /*hidden argument*/NULL);
		WinRtToNetFxStreamAdapter_EnsureCanWrite_mC94E5B0115A84E45BED38ECE64E5D6A84F19873C(__this, /*hidden argument*/NULL);
		RuntimeObject* L_2 = ___asyncResult0;
		V_0 = ((StreamOperationAsyncResult_t675AB408CDF1B11AC6F446E24352B441F6422E0F *)IsInstClass((RuntimeObject*)L_2, StreamOperationAsyncResult_t675AB408CDF1B11AC6F446E24352B441F6422E0F_il2cpp_TypeInfo_var));
		StreamOperationAsyncResult_t675AB408CDF1B11AC6F446E24352B441F6422E0F * L_3 = V_0;
		if (L_3)
		{
			goto IL_0034;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_4 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m26DC3463C6F3C98BF33EA39598DD2B32F0249CA8(L_4, _stringLiteral386BBD755C10FBAADDE3FD0D3B3C64A6C3DAD203, _stringLiteral5B3BD2481D1A6E4A5654FB0FCDF9C6265B5A959F, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, WinRtToNetFxStreamAdapter_EndWrite_m2B931CFE24E318D4F4AE2BB00D24E7162A9E0EA5_RuntimeMethod_var);
	}

IL_0034:
	{
		StreamOperationAsyncResult_t675AB408CDF1B11AC6F446E24352B441F6422E0F * L_5 = V_0;
		NullCheck(L_5);
		StreamOperationAsyncResult_Wait_m7E111C3451B661E20090E85DF665934453D1403E(L_5, /*hidden argument*/NULL);
	}

IL_003a:
	try
	{ // begin try (depth: 1)
		{
			StreamOperationAsyncResult_t675AB408CDF1B11AC6F446E24352B441F6422E0F * L_6 = V_0;
			NullCheck(L_6);
			bool L_7 = StreamOperationAsyncResult_get_ProcessCompletedOperationInCallback_mAEBF8906F074143BECE20D7233B58FBE7F89D08D(L_6, /*hidden argument*/NULL);
			if (L_7)
			{
				goto IL_0048;
			}
		}

IL_0042:
		{
			StreamOperationAsyncResult_t675AB408CDF1B11AC6F446E24352B441F6422E0F * L_8 = V_0;
			NullCheck(L_8);
			StreamOperationAsyncResult_ProcessCompletedOperation_mCEAD13DA8A64F3CF722EE656F850716F26F9DEFB(L_8, /*hidden argument*/NULL);
		}

IL_0048:
		{
			StreamOperationAsyncResult_t675AB408CDF1B11AC6F446E24352B441F6422E0F * L_9 = V_0;
			NullCheck(L_9);
			bool L_10 = StreamOperationAsyncResult_get_HasError_m51A52788DC3613F241D5A0D17CB8EBFDA5E05F8D(L_9, /*hidden argument*/NULL);
			if (!L_10)
			{
				goto IL_005c;
			}
		}

IL_0050:
		{
			StreamOperationAsyncResult_t675AB408CDF1B11AC6F446E24352B441F6422E0F * L_11 = V_0;
			NullCheck(L_11);
			StreamOperationAsyncResult_CloseStreamOperation_mD2F52A21BFD94DC2A34E260CA631BBDA3CC6721A(L_11, /*hidden argument*/NULL);
			StreamOperationAsyncResult_t675AB408CDF1B11AC6F446E24352B441F6422E0F * L_12 = V_0;
			NullCheck(L_12);
			StreamOperationAsyncResult_ThrowCachedError_m4E9122EE3CD20858BB4570D95912EF3A48038D3A(L_12, /*hidden argument*/NULL);
		}

IL_005c:
		{
			IL2CPP_LEAVE(0x65, FINALLY_005e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005e;
	}

FINALLY_005e:
	{ // begin finally (depth: 1)
		StreamOperationAsyncResult_t675AB408CDF1B11AC6F446E24352B441F6422E0F * L_13 = V_0;
		NullCheck(L_13);
		StreamOperationAsyncResult_CloseStreamOperation_mD2F52A21BFD94DC2A34E260CA631BBDA3CC6721A(L_13, /*hidden argument*/NULL);
		IL2CPP_RESET_LEAVE(0x65);
		IL2CPP_END_FINALLY(94)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(94)
	{
		IL2CPP_JUMP_TBL(0x65, IL_0065)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0065:
	{
		return;
	}
}
// System.Threading.Tasks.Task System.IO.WinRtToNetFxStreamAdapter::WriteAsync(System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * WinRtToNetFxStreamAdapter_WriteAsync_mDB11DF92164A01D1126F85109E1C5462B33168E2 (WinRtToNetFxStreamAdapter_t5DF3E266765C62B1F96383772091E1E54DD48397 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer0, int32_t ___offset1, int32_t ___count2, CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  ___cancellationToken3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WinRtToNetFxStreamAdapter_WriteAsync_mDB11DF92164A01D1126F85109E1C5462B33168E2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___buffer0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, _stringLiteralE53C2EA1FE4BD2B78BF4723C7C155A578E020A25, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, WinRtToNetFxStreamAdapter_WriteAsync_mDB11DF92164A01D1126F85109E1C5462B33168E2_RuntimeMethod_var);
	}

IL_000e:
	{
		int32_t L_2 = ___offset1;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_3 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6(L_3, _stringLiteral53A610E925BBC0A175E365D31241AE75AEEAD651, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, WinRtToNetFxStreamAdapter_WriteAsync_mDB11DF92164A01D1126F85109E1C5462B33168E2_RuntimeMethod_var);
	}

IL_001d:
	{
		int32_t L_4 = ___count2;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_5 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6(L_5, _stringLiteralEE9F38E186BA06F57B7B74D7E626B94E13CE2556, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, NULL, WinRtToNetFxStreamAdapter_WriteAsync_mDB11DF92164A01D1126F85109E1C5462B33168E2_RuntimeMethod_var);
	}

IL_002c:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = ___buffer0;
		NullCheck(L_6);
		int32_t L_7 = ___offset1;
		int32_t L_8 = ___count2;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))), (int32_t)L_7))) >= ((int32_t)L_8)))
		{
			goto IL_003f;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_9 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_9, _stringLiteralA7512A2545D962556CA62F28AA7BD8D840985DA9, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, NULL, WinRtToNetFxStreamAdapter_WriteAsync_mDB11DF92164A01D1126F85109E1C5462B33168E2_RuntimeMethod_var);
	}

IL_003f:
	{
		RuntimeObject* L_10 = WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIOutputStream_t0BFFD9F35BD49DAF121DEB9BECC544772AF35C6B_mBD26486F2545F104BBAB7AD5F27776B5ED315F8A(__this, /*hidden argument*/WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIOutputStream_t0BFFD9F35BD49DAF121DEB9BECC544772AF35C6B_mBD26486F2545F104BBAB7AD5F27776B5ED315F8A_RuntimeMethod_var);
		WinRtToNetFxStreamAdapter_EnsureCanWrite_mC94E5B0115A84E45BED38ECE64E5D6A84F19873C(__this, /*hidden argument*/NULL);
		CancellationToken_ThrowIfCancellationRequested_m13AB667F961F83D8ED759BA402325638F43B0938((CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB *)(&___cancellationToken3), /*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_11 = ___buffer0;
		int32_t L_12 = ___offset1;
		int32_t L_13 = ___count2;
		RuntimeObject* L_14 = WindowsRuntimeBufferExtensions_AsBuffer_m8A7ECFC4D04B98BD389D03A8478CBCC14427650F(L_11, L_12, L_13, /*hidden argument*/NULL);
		V_0 = L_14;
		RuntimeObject* L_15 = V_0;
		NullCheck(L_10);
		RuntimeObject* L_16 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* Windows.Foundation.IAsyncOperationWithProgress`2<System.UInt32,System.UInt32> Windows.Storage.Streams.IOutputStream::WriteAsync(Windows.Storage.Streams.IBuffer) */, IOutputStream_t0BFFD9F35BD49DAF121DEB9BECC544772AF35C6B_il2cpp_TypeInfo_var, L_10, L_15);
		CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  L_17 = ___cancellationToken3;
		Task_1_tB8C8430765AEE1D5F24261F5BAD009C22AC7872F * L_18 = WindowsRuntimeSystemExtensions_AsTask_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_m2B704B1F08F199445D3A99B454B3E9BE75A5FFE0(L_16, L_17, /*hidden argument*/WindowsRuntimeSystemExtensions_AsTask_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_m2B704B1F08F199445D3A99B454B3E9BE75A5FFE0_RuntimeMethod_var);
		return L_18;
	}
}
// System.Void System.IO.WinRtToNetFxStreamAdapter::Write(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinRtToNetFxStreamAdapter_Write_mDFF772EF47A9E578150AE08EFA9D105134598033 (WinRtToNetFxStreamAdapter_t5DF3E266765C62B1F96383772091E1E54DD48397 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	RuntimeObject* V_0 = NULL;
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___buffer0;
		int32_t L_1 = ___offset1;
		int32_t L_2 = ___count2;
		RuntimeObject* L_3 = WinRtToNetFxStreamAdapter_BeginWrite_mD4A1A86E30CA5CE6BC6BEFABF3A11F42B1021916(__this, L_0, L_1, L_2, (AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 *)NULL, NULL, (bool)1, /*hidden argument*/NULL);
		V_0 = L_3;
		RuntimeObject* L_4 = V_0;
		VirtActionInvoker1< RuntimeObject* >::Invoke(24 /* System.Void System.IO.Stream::EndWrite(System.IAsyncResult) */, __this, L_4);
		return;
	}
}
// System.Void System.IO.WinRtToNetFxStreamAdapter::WriteByte(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinRtToNetFxStreamAdapter_WriteByte_mAFF97A6A70702AC29649A41C048AE186F4070335 (WinRtToNetFxStreamAdapter_t5DF3E266765C62B1F96383772091E1E54DD48397 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_0 = NULL;
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = WinRtToNetFxStreamAdapter_get_OneByteBuffer_mBD6829138522F26FED20CEF828A3048B910B016D(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = V_0;
		uint8_t L_2 = ___value0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_2);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = V_0;
		VirtActionInvoker3< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(30 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, __this, L_3, 0, 1);
		return;
	}
}
// System.Void System.IO.WinRtToNetFxStreamAdapter::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinRtToNetFxStreamAdapter_Flush_m6EA4ADC50C604800CEBA54B8554A64E4312DC94D (WinRtToNetFxStreamAdapter_t5DF3E266765C62B1F96383772091E1E54DD48397 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WinRtToNetFxStreamAdapter_Flush_m6EA4ADC50C604800CEBA54B8554A64E4312DC94D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	StreamFlushAsyncResult_t52BD92B64AE7A59F49326A470FBCD61172206E6A * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject* L_0 = WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIOutputStream_t0BFFD9F35BD49DAF121DEB9BECC544772AF35C6B_mBD26486F2545F104BBAB7AD5F27776B5ED315F8A(__this, /*hidden argument*/WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIOutputStream_t0BFFD9F35BD49DAF121DEB9BECC544772AF35C6B_mBD26486F2545F104BBAB7AD5F27776B5ED315F8A_RuntimeMethod_var);
		V_0 = L_0;
		bool L_1 = __this->get__canWrite_9();
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		RuntimeObject* L_2 = V_0;
		NullCheck(L_2);
		RuntimeObject* L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* Windows.Foundation.IAsyncOperation`1<System.Boolean> Windows.Storage.Streams.IOutputStream::FlushAsync() */, IOutputStream_t0BFFD9F35BD49DAF121DEB9BECC544772AF35C6B_il2cpp_TypeInfo_var, L_2);
		StreamFlushAsyncResult_t52BD92B64AE7A59F49326A470FBCD61172206E6A * L_4 = (StreamFlushAsyncResult_t52BD92B64AE7A59F49326A470FBCD61172206E6A *)il2cpp_codegen_object_new(StreamFlushAsyncResult_t52BD92B64AE7A59F49326A470FBCD61172206E6A_il2cpp_TypeInfo_var);
		StreamFlushAsyncResult__ctor_mB90A83C265CA4BFC9EEFC5A0CFE76A2DFF0A13D8(L_4, L_3, (bool)0, /*hidden argument*/NULL);
		V_1 = L_4;
		StreamFlushAsyncResult_t52BD92B64AE7A59F49326A470FBCD61172206E6A * L_5 = V_1;
		NullCheck(L_5);
		StreamOperationAsyncResult_Wait_m7E111C3451B661E20090E85DF665934453D1403E(L_5, /*hidden argument*/NULL);
	}

IL_0023:
	try
	{ // begin try (depth: 1)
		{
			StreamFlushAsyncResult_t52BD92B64AE7A59F49326A470FBCD61172206E6A * L_6 = V_1;
			NullCheck(L_6);
			StreamOperationAsyncResult_ProcessCompletedOperation_mCEAD13DA8A64F3CF722EE656F850716F26F9DEFB(L_6, /*hidden argument*/NULL);
			StreamFlushAsyncResult_t52BD92B64AE7A59F49326A470FBCD61172206E6A * L_7 = V_1;
			NullCheck(L_7);
			bool L_8 = StreamOperationAsyncResult_get_HasError_m51A52788DC3613F241D5A0D17CB8EBFDA5E05F8D(L_7, /*hidden argument*/NULL);
			if (!L_8)
			{
				goto IL_003d;
			}
		}

IL_0031:
		{
			StreamFlushAsyncResult_t52BD92B64AE7A59F49326A470FBCD61172206E6A * L_9 = V_1;
			NullCheck(L_9);
			StreamOperationAsyncResult_CloseStreamOperation_mD2F52A21BFD94DC2A34E260CA631BBDA3CC6721A(L_9, /*hidden argument*/NULL);
			StreamFlushAsyncResult_t52BD92B64AE7A59F49326A470FBCD61172206E6A * L_10 = V_1;
			NullCheck(L_10);
			StreamOperationAsyncResult_ThrowCachedError_m4E9122EE3CD20858BB4570D95912EF3A48038D3A(L_10, /*hidden argument*/NULL);
		}

IL_003d:
		{
			IL2CPP_LEAVE(0x46, FINALLY_003f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003f;
	}

FINALLY_003f:
	{ // begin finally (depth: 1)
		StreamFlushAsyncResult_t52BD92B64AE7A59F49326A470FBCD61172206E6A * L_11 = V_1;
		NullCheck(L_11);
		StreamOperationAsyncResult_CloseStreamOperation_mD2F52A21BFD94DC2A34E260CA631BBDA3CC6721A(L_11, /*hidden argument*/NULL);
		IL2CPP_RESET_LEAVE(0x46);
		IL2CPP_END_FINALLY(63)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(63)
	{
		IL2CPP_JUMP_TBL(0x46, IL_0046)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0046:
	{
		return;
	}
}
// System.Threading.Tasks.Task System.IO.WinRtToNetFxStreamAdapter::FlushAsync(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * WinRtToNetFxStreamAdapter_FlushAsync_m35A5193481BF4AE2CBD79F7378F47CBD6B63FCD3 (WinRtToNetFxStreamAdapter_t5DF3E266765C62B1F96383772091E1E54DD48397 * __this, CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  ___cancellationToken0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WinRtToNetFxStreamAdapter_FlushAsync_m35A5193481BF4AE2CBD79F7378F47CBD6B63FCD3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIOutputStream_t0BFFD9F35BD49DAF121DEB9BECC544772AF35C6B_mBD26486F2545F104BBAB7AD5F27776B5ED315F8A(__this, /*hidden argument*/WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIOutputStream_t0BFFD9F35BD49DAF121DEB9BECC544772AF35C6B_mBD26486F2545F104BBAB7AD5F27776B5ED315F8A_RuntimeMethod_var);
		V_0 = L_0;
		bool L_1 = __this->get__canWrite_9();
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_il2cpp_TypeInfo_var);
		Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * L_2 = Task_get_CompletedTask_mBB0764E7FDE04E900FFBE5B1BE6B815193681E86(/*hidden argument*/NULL);
		return L_2;
	}

IL_0015:
	{
		CancellationToken_ThrowIfCancellationRequested_m13AB667F961F83D8ED759BA402325638F43B0938((CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB *)(&___cancellationToken0), /*hidden argument*/NULL);
		RuntimeObject* L_3 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* Windows.Foundation.IAsyncOperation`1<System.Boolean> Windows.Storage.Streams.IOutputStream::FlushAsync() */, IOutputStream_t0BFFD9F35BD49DAF121DEB9BECC544772AF35C6B_il2cpp_TypeInfo_var, L_3);
		CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  L_5 = ___cancellationToken0;
		Task_1_tD6131FE3A3A2F1D58DB886B6CF31A2672B75B439 * L_6 = WindowsRuntimeSystemExtensions_AsTask_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_m46E828D5A0C87D1B9B5892F0722AD984B428AE4A(L_4, L_5, /*hidden argument*/WindowsRuntimeSystemExtensions_AsTask_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_m46E828D5A0C87D1B9B5892F0722AD984B428AE4A_RuntimeMethod_var);
		return L_6;
	}
}
// System.Threading.Tasks.Task`1<System.Int32> System.IO.WinRtToNetFxStreamAdapter::ReadAsyncInternal(System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87 * WinRtToNetFxStreamAdapter_ReadAsyncInternal_m808223D75DD1A59959A6B9F14F623CC50050B593 (WinRtToNetFxStreamAdapter_t5DF3E266765C62B1F96383772091E1E54DD48397 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer0, int32_t ___offset1, int32_t ___count2, CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  ___cancellationToken3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WinRtToNetFxStreamAdapter_ReadAsyncInternal_m808223D75DD1A59959A6B9F14F623CC50050B593_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CReadAsyncInternalU3Ed__43_tD4B002D0FA17B3DBF89A3C6C93A5DE0DE0A78308  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncTaskMethodBuilder_1_t822D24686214CB8B967C66DA507CD66A5C853079  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___buffer0;
		(&V_0)->set_buffer_3(L_0);
		int32_t L_1 = ___offset1;
		(&V_0)->set_offset_4(L_1);
		int32_t L_2 = ___count2;
		(&V_0)->set_count_5(L_2);
		CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  L_3 = ___cancellationToken3;
		(&V_0)->set_cancellationToken_6(L_3);
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_1_t822D24686214CB8B967C66DA507CD66A5C853079_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_t822D24686214CB8B967C66DA507CD66A5C853079  L_4 = AsyncTaskMethodBuilder_1_Create_mB155504875E2454883E034E847877A9DEA85E318(/*hidden argument*/AsyncTaskMethodBuilder_1_Create_mB155504875E2454883E034E847877A9DEA85E318_RuntimeMethod_var);
		(&V_0)->set_U3CU3Et__builder_1(L_4);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CReadAsyncInternalU3Ed__43_tD4B002D0FA17B3DBF89A3C6C93A5DE0DE0A78308  L_5 = V_0;
		AsyncTaskMethodBuilder_1_t822D24686214CB8B967C66DA507CD66A5C853079  L_6 = L_5.get_U3CU3Et__builder_1();
		V_1 = L_6;
		AsyncTaskMethodBuilder_1_Start_TisU3CReadAsyncInternalU3Ed__43_tD4B002D0FA17B3DBF89A3C6C93A5DE0DE0A78308_m0E020F3B06CE3E60416AEFE4439B21482B69FB8D((AsyncTaskMethodBuilder_1_t822D24686214CB8B967C66DA507CD66A5C853079 *)(&V_1), (U3CReadAsyncInternalU3Ed__43_tD4B002D0FA17B3DBF89A3C6C93A5DE0DE0A78308 *)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_1_Start_TisU3CReadAsyncInternalU3Ed__43_tD4B002D0FA17B3DBF89A3C6C93A5DE0DE0A78308_m0E020F3B06CE3E60416AEFE4439B21482B69FB8D_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_t822D24686214CB8B967C66DA507CD66A5C853079 * L_7 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87 * L_8 = AsyncTaskMethodBuilder_1_get_Task_m939AAFF5841821CC09C627DCDEB2DFD5B933DFC2((AsyncTaskMethodBuilder_1_t822D24686214CB8B967C66DA507CD66A5C853079 *)L_7, /*hidden argument*/AsyncTaskMethodBuilder_1_get_Task_m939AAFF5841821CC09C627DCDEB2DFD5B933DFC2_RuntimeMethod_var);
		return L_8;
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
// System.Void System.IO.WinRtToNetFxStreamAdapter_<ReadAsyncInternal>d__43::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReadAsyncInternalU3Ed__43_MoveNext_mB0715FAA82A73010EFAC342878C9B52220943AEA (U3CReadAsyncInternalU3Ed__43_tD4B002D0FA17B3DBF89A3C6C93A5DE0DE0A78308 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CReadAsyncInternalU3Ed__43_MoveNext_mB0715FAA82A73010EFAC342878C9B52220943AEA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WinRtToNetFxStreamAdapter_t5DF3E266765C62B1F96383772091E1E54DD48397 * V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	ConfiguredTaskAwaiter_t24BCF0C8B4E4A7F263C9F2AFCC9528025F667E77  V_5;
	memset((&V_5), 0, sizeof(V_5));
	ConfiguredTaskAwaitable_1_t68A1326495296F7020FAFDD4974E2E0E1BBC9244  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Exception_t * V_7 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		WinRtToNetFxStreamAdapter_t5DF3E266765C62B1F96383772091E1E54DD48397 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0018;
			}
		}

IL_0011:
		{
			WinRtToNetFxStreamAdapter_t5DF3E266765C62B1F96383772091E1E54DD48397 * L_3 = V_1;
			NullCheck(L_3);
			RuntimeObject* L_4 = WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIInputStream_tE16D3C1553F5E6BAC4E7E8D7DE411ADD049B1B13_m1D884805AFF82A522F0A70539E6E880A3F5D0384(L_3, /*hidden argument*/WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIInputStream_tE16D3C1553F5E6BAC4E7E8D7DE411ADD049B1B13_m1D884805AFF82A522F0A70539E6E880A3F5D0384_RuntimeMethod_var);
			V_3 = L_4;
		}

IL_0018:
		{
		}

IL_0019:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_5 = V_0;
				if (!L_5)
				{
					goto IL_0095;
				}
			}

IL_001c:
			{
				ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = __this->get_buffer_3();
				int32_t L_7 = __this->get_offset_4();
				int32_t L_8 = __this->get_count_5();
				RuntimeObject* L_9 = WindowsRuntimeBufferExtensions_AsBuffer_m8A7ECFC4D04B98BD389D03A8478CBCC14427650F(L_6, L_7, L_8, /*hidden argument*/NULL);
				__this->set_U3CuserBufferU3E5__2_7(L_9);
				RuntimeObject* L_10 = V_3;
				RuntimeObject* L_11 = __this->get_U3CuserBufferU3E5__2_7();
				int32_t L_12 = __this->get_count_5();
				NullCheck(L_10);
				RuntimeObject* L_13 = InterfaceFuncInvoker3< RuntimeObject*, RuntimeObject*, uint32_t, uint32_t >::Invoke(0 /* Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32> Windows.Storage.Streams.IInputStream::ReadAsync(Windows.Storage.Streams.IBuffer,System.UInt32,Windows.Storage.Streams.InputStreamOptions) */, IInputStream_tE16D3C1553F5E6BAC4E7E8D7DE411ADD049B1B13_il2cpp_TypeInfo_var, L_10, L_11, L_12, 1);
				CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  L_14 = __this->get_cancellationToken_6();
				Task_1_t84A3E8ADA0C56D0776B0FCEBCEA98E253DB4385C * L_15 = WindowsRuntimeSystemExtensions_AsTask_TisIBuffer_t13BCDB1D6DE32F79AB9F9E149514026CA6B4AAEF_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_mD56E35DB9823FDDCE9DF131A09A088D6D8085F49(L_13, L_14, /*hidden argument*/WindowsRuntimeSystemExtensions_AsTask_TisIBuffer_t13BCDB1D6DE32F79AB9F9E149514026CA6B4AAEF_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_mD56E35DB9823FDDCE9DF131A09A088D6D8085F49_RuntimeMethod_var);
				NullCheck(L_15);
				ConfiguredTaskAwaitable_1_t68A1326495296F7020FAFDD4974E2E0E1BBC9244  L_16 = Task_1_ConfigureAwait_m5B90AE151869448AA06D236EC66E66FDA7149345(L_15, (bool)0, /*hidden argument*/Task_1_ConfigureAwait_m5B90AE151869448AA06D236EC66E66FDA7149345_RuntimeMethod_var);
				V_6 = L_16;
				ConfiguredTaskAwaiter_t24BCF0C8B4E4A7F263C9F2AFCC9528025F667E77  L_17 = ConfiguredTaskAwaitable_1_GetAwaiter_mF233FB8E021BBCB43F03D9B10FDCB32FA67FAE7A((ConfiguredTaskAwaitable_1_t68A1326495296F7020FAFDD4974E2E0E1BBC9244 *)(&V_6), /*hidden argument*/ConfiguredTaskAwaitable_1_GetAwaiter_mF233FB8E021BBCB43F03D9B10FDCB32FA67FAE7A_RuntimeMethod_var);
				V_5 = L_17;
				bool L_18 = ConfiguredTaskAwaiter_get_IsCompleted_m9FC73A84D3836AE90DE75FB2D785BEA90A7CF508((ConfiguredTaskAwaiter_t24BCF0C8B4E4A7F263C9F2AFCC9528025F667E77 *)(&V_5), /*hidden argument*/ConfiguredTaskAwaiter_get_IsCompleted_m9FC73A84D3836AE90DE75FB2D785BEA90A7CF508_RuntimeMethod_var);
				if (L_18)
				{
					goto IL_00b2;
				}
			}

IL_0071:
			{
				int32_t L_19 = 0;
				V_0 = L_19;
				__this->set_U3CU3E1__state_0(L_19);
				ConfiguredTaskAwaiter_t24BCF0C8B4E4A7F263C9F2AFCC9528025F667E77  L_20 = V_5;
				__this->set_U3CU3Eu__1_8(L_20);
				AsyncTaskMethodBuilder_1_t822D24686214CB8B967C66DA507CD66A5C853079 * L_21 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t24BCF0C8B4E4A7F263C9F2AFCC9528025F667E77_TisU3CReadAsyncInternalU3Ed__43_tD4B002D0FA17B3DBF89A3C6C93A5DE0DE0A78308_m5BE2194AB8A2A0C0FBE40F00282C4CD332D1729C((AsyncTaskMethodBuilder_1_t822D24686214CB8B967C66DA507CD66A5C853079 *)L_21, (ConfiguredTaskAwaiter_t24BCF0C8B4E4A7F263C9F2AFCC9528025F667E77 *)(&V_5), (U3CReadAsyncInternalU3Ed__43_tD4B002D0FA17B3DBF89A3C6C93A5DE0DE0A78308 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t24BCF0C8B4E4A7F263C9F2AFCC9528025F667E77_TisU3CReadAsyncInternalU3Ed__43_tD4B002D0FA17B3DBF89A3C6C93A5DE0DE0A78308_m5BE2194AB8A2A0C0FBE40F00282C4CD332D1729C_RuntimeMethod_var);
				goto IL_0115;
			}

IL_0095:
			{
				ConfiguredTaskAwaiter_t24BCF0C8B4E4A7F263C9F2AFCC9528025F667E77  L_22 = __this->get_U3CU3Eu__1_8();
				V_5 = L_22;
				ConfiguredTaskAwaiter_t24BCF0C8B4E4A7F263C9F2AFCC9528025F667E77 * L_23 = __this->get_address_of_U3CU3Eu__1_8();
				il2cpp_codegen_initobj(L_23, sizeof(ConfiguredTaskAwaiter_t24BCF0C8B4E4A7F263C9F2AFCC9528025F667E77 ));
				int32_t L_24 = (-1);
				V_0 = L_24;
				__this->set_U3CU3E1__state_0(L_24);
			}

IL_00b2:
			{
				RuntimeObject* L_25 = ConfiguredTaskAwaiter_GetResult_m4C300DC98B92A2E8F698BB925618055536D84B43((ConfiguredTaskAwaiter_t24BCF0C8B4E4A7F263C9F2AFCC9528025F667E77 *)(&V_5), /*hidden argument*/ConfiguredTaskAwaiter_GetResult_m4C300DC98B92A2E8F698BB925618055536D84B43_RuntimeMethod_var);
				V_4 = L_25;
				RuntimeObject* L_26 = V_4;
				if (L_26)
				{
					goto IL_00c3;
				}
			}

IL_00bf:
			{
				V_2 = 0;
				goto IL_0101;
			}

IL_00c3:
			{
				RuntimeObject* L_27 = __this->get_U3CuserBufferU3E5__2_7();
				RuntimeObject* L_28 = V_4;
				WinRtIOHelper_EnsureResultsInUserBuffer_m24B0C6BDACD1A06D7FBB9EC91361DA5137E34FB1(L_27, L_28, /*hidden argument*/NULL);
				RuntimeObject* L_29 = V_4;
				NullCheck(L_29);
				uint32_t L_30 = InterfaceFuncInvoker0< uint32_t >::Invoke(1 /* System.UInt32 Windows.Storage.Streams.IBuffer::get_Length() */, IBuffer_t13BCDB1D6DE32F79AB9F9E149514026CA6B4AAEF_il2cpp_TypeInfo_var, L_29);
				V_2 = L_30;
				goto IL_0101;
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
				goto CATCH_00da;
			throw e;
		}

CATCH_00da:
		{ // begin catch(System.Exception)
			ExceptionDispatchInfo_t0C54083F3909DAF986A4DEAA7C047559531E0E2A * L_31 = WinRtIOHelper_NativeExceptionToIOExceptionInfo_m1CA2440467C50E50B6448BBCC86B4B7DB9A394AD(((Exception_t *)__exception_local), /*hidden argument*/NULL);
			NullCheck(L_31);
			ExceptionDispatchInfo_Throw_m9630C06EF8D7CDF5BD5DC76144CD98C4D9E8D26F(L_31, /*hidden argument*/NULL);
			V_2 = 0;
			goto IL_0101;
		} // end catch (depth: 2)
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_00e8;
		throw e;
	}

CATCH_00e8:
	{ // begin catch(System.Exception)
		V_7 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t822D24686214CB8B967C66DA507CD66A5C853079 * L_32 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_33 = V_7;
		AsyncTaskMethodBuilder_1_SetException_mC6242DDCD4119CD73267E4B9888FF3474D795821((AsyncTaskMethodBuilder_1_t822D24686214CB8B967C66DA507CD66A5C853079 *)L_32, L_33, /*hidden argument*/AsyncTaskMethodBuilder_1_SetException_mC6242DDCD4119CD73267E4B9888FF3474D795821_RuntimeMethod_var);
		goto IL_0115;
	} // end catch (depth: 1)

IL_0101:
	{
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t822D24686214CB8B967C66DA507CD66A5C853079 * L_34 = __this->get_address_of_U3CU3Et__builder_1();
		int32_t L_35 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_mAFB12C1766B74D412E293BA7AB711615A14C2230((AsyncTaskMethodBuilder_1_t822D24686214CB8B967C66DA507CD66A5C853079 *)L_34, L_35, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_mAFB12C1766B74D412E293BA7AB711615A14C2230_RuntimeMethod_var);
	}

IL_0115:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CReadAsyncInternalU3Ed__43_MoveNext_mB0715FAA82A73010EFAC342878C9B52220943AEA_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	U3CReadAsyncInternalU3Ed__43_tD4B002D0FA17B3DBF89A3C6C93A5DE0DE0A78308 * _thisAdjusted = reinterpret_cast<U3CReadAsyncInternalU3Ed__43_tD4B002D0FA17B3DBF89A3C6C93A5DE0DE0A78308 *>(__this + 1);
	U3CReadAsyncInternalU3Ed__43_MoveNext_mB0715FAA82A73010EFAC342878C9B52220943AEA(_thisAdjusted, method);
}
// System.Void System.IO.WinRtToNetFxStreamAdapter_<ReadAsyncInternal>d__43::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReadAsyncInternalU3Ed__43_SetStateMachine_m1A8819589C373A620E6A76D362FB02B94CBF5E19 (U3CReadAsyncInternalU3Ed__43_tD4B002D0FA17B3DBF89A3C6C93A5DE0DE0A78308 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CReadAsyncInternalU3Ed__43_SetStateMachine_m1A8819589C373A620E6A76D362FB02B94CBF5E19_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t822D24686214CB8B967C66DA507CD66A5C853079 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_mADB2F2ED219BD69EC85F7516C62FB23F840BB877((AsyncTaskMethodBuilder_1_t822D24686214CB8B967C66DA507CD66A5C853079 *)L_0, L_1, /*hidden argument*/AsyncTaskMethodBuilder_1_SetStateMachine_mADB2F2ED219BD69EC85F7516C62FB23F840BB877_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CReadAsyncInternalU3Ed__43_SetStateMachine_m1A8819589C373A620E6A76D362FB02B94CBF5E19_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CReadAsyncInternalU3Ed__43_tD4B002D0FA17B3DBF89A3C6C93A5DE0DE0A78308 * _thisAdjusted = reinterpret_cast<U3CReadAsyncInternalU3Ed__43_tD4B002D0FA17B3DBF89A3C6C93A5DE0DE0A78308 *>(__this + 1);
	U3CReadAsyncInternalU3Ed__43_SetStateMachine_m1A8819589C373A620E6A76D362FB02B94CBF5E19(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.IO.WindowsRuntimeStreamExtensions::EnsureAdapterBufferSize(System.IO.Stream,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeStreamExtensions_EnsureAdapterBufferSize_m6507CF9C4E53D85596F7E39A221BE248CA06CB6E (Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___adapter0, int32_t ___requiredBufferSize1, String_t* ___methodName2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsRuntimeStreamExtensions_EnsureAdapterBufferSize_m6507CF9C4E53D85596F7E39A221BE248CA06CB6E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	BufferedStream_tA4070368D71992D14E131A8230BAA273A71A0CE9 * V_1 = NULL;
	{
		V_0 = 0;
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_0 = ___adapter0;
		V_1 = ((BufferedStream_tA4070368D71992D14E131A8230BAA273A71A0CE9 *)IsInstSealed((RuntimeObject*)L_0, BufferedStream_tA4070368D71992D14E131A8230BAA273A71A0CE9_il2cpp_TypeInfo_var));
		BufferedStream_tA4070368D71992D14E131A8230BAA273A71A0CE9 * L_1 = V_1;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		BufferedStream_tA4070368D71992D14E131A8230BAA273A71A0CE9 * L_2 = V_1;
		NullCheck(L_2);
		int32_t L_3 = BufferedStream_get_BufferSize_m3064CD5FB9E0AB2D13499B5EBE9AB314139036ED(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
	}

IL_0013:
	{
		int32_t L_4 = ___requiredBufferSize1;
		int32_t L_5 = V_0;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_6 = ___requiredBufferSize1;
		if (L_6)
		{
			goto IL_0030;
		}
	}
	{
		String_t* L_7 = ___methodName2;
		String_t* L_8 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(_stringLiteral384A0A50452330828086C72A8F95A5C2DC583E57, L_7, _stringLiteralF6E20C08203632CDFE275B48045FDBE66859C457, /*hidden argument*/NULL);
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_9 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_9, L_8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, NULL, WindowsRuntimeStreamExtensions_EnsureAdapterBufferSize_m6507CF9C4E53D85596F7E39A221BE248CA06CB6E_RuntimeMethod_var);
	}

IL_0030:
	{
		String_t* L_10 = ___methodName2;
		String_t* L_11 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(_stringLiteral0760357C4DD0D8AC4FA5F1F969ED4F9A107AA448, L_10, _stringLiteralF6E20C08203632CDFE275B48045FDBE66859C457, /*hidden argument*/NULL);
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_12 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_12, L_11, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, NULL, WindowsRuntimeStreamExtensions_EnsureAdapterBufferSize_m6507CF9C4E53D85596F7E39A221BE248CA06CB6E_RuntimeMethod_var);
	}

IL_0046:
	{
		return;
	}
}
// System.IO.Stream System.IO.WindowsRuntimeStreamExtensions::AsStreamForRead(Windows.Storage.Streams.IInputStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * WindowsRuntimeStreamExtensions_AsStreamForRead_m0C215C31D3FDB1F656DA5A4D81AD0628A3EE7AAB (RuntimeObject* ___windowsRuntimeStream0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsRuntimeStreamExtensions_AsStreamForRead_m0C215C31D3FDB1F656DA5A4D81AD0628A3EE7AAB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___windowsRuntimeStream0;
		IL2CPP_RUNTIME_CLASS_INIT(WindowsRuntimeStreamExtensions_tB2579CDBD2DBFEE07F8602FCC099051A1DA1D07E_il2cpp_TypeInfo_var);
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_1 = WindowsRuntimeStreamExtensions_AsStreamInternal_m74F95A24B8F32CA25CFEB7B0C142EB3CE87652B4(L_0, ((int32_t)16384), _stringLiteral68228C5C8300C32D0053E80C760644B3887AAB81, (bool)0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.IO.Stream System.IO.WindowsRuntimeStreamExtensions::AsStreamInternal(System.Object,System.Int32,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * WindowsRuntimeStreamExtensions_AsStreamInternal_m74F95A24B8F32CA25CFEB7B0C142EB3CE87652B4 (RuntimeObject * ___windowsRuntimeStream0, int32_t ___bufferSize1, String_t* ___invokedMethodName2, bool ___forceBufferSize3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsRuntimeStreamExtensions_AsStreamInternal_m74F95A24B8F32CA25CFEB7B0C142EB3CE87652B4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NetFxToWinRtStreamAdapter_tD3F51448566787B72221C59C2FC89BF1A3987485 * V_0 = NULL;
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * V_1 = NULL;
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * G_B7_0 = NULL;
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * G_B6_0 = NULL;
	{
		RuntimeObject * L_0 = ___windowsRuntimeStream0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, _stringLiteral238EC4C85B4911E758E20D944D167F97A2F2CF83, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, WindowsRuntimeStreamExtensions_AsStreamInternal_m74F95A24B8F32CA25CFEB7B0C142EB3CE87652B4_RuntimeMethod_var);
	}

IL_000e:
	{
		int32_t L_2 = ___bufferSize1;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_3 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m300CE4D04A068C209FD858101AC361C1B600B5AE(L_3, _stringLiteralF75E94DCC92ECC309EF861E9A10FFFB6B1A383AF, _stringLiteral6BF57FEE9CE875C916CC7865D27804395F4B031D, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, WindowsRuntimeStreamExtensions_AsStreamInternal_m74F95A24B8F32CA25CFEB7B0C142EB3CE87652B4_RuntimeMethod_var);
	}

IL_0022:
	{
		RuntimeObject * L_4 = ___windowsRuntimeStream0;
		V_0 = ((NetFxToWinRtStreamAdapter_tD3F51448566787B72221C59C2FC89BF1A3987485 *)IsInstClass((RuntimeObject*)L_4, NetFxToWinRtStreamAdapter_tD3F51448566787B72221C59C2FC89BF1A3987485_il2cpp_TypeInfo_var));
		NetFxToWinRtStreamAdapter_tD3F51448566787B72221C59C2FC89BF1A3987485 * L_5 = V_0;
		if (!L_5)
		{
			goto IL_0046;
		}
	}
	{
		NetFxToWinRtStreamAdapter_tD3F51448566787B72221C59C2FC89BF1A3987485 * L_6 = V_0;
		NullCheck(L_6);
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_7 = NetFxToWinRtStreamAdapter_GetManagedStream_mB451C96867BF33079637611923FD66B147ABC668(L_6, /*hidden argument*/NULL);
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_8 = L_7;
		G_B6_0 = L_8;
		if (L_8)
		{
			G_B7_0 = L_8;
			goto IL_0045;
		}
	}
	{
		ObjectDisposedException_tF68E471ECD1419AD7C51137B742837395F50B69A * L_9 = (ObjectDisposedException_tF68E471ECD1419AD7C51137B742837395F50B69A *)il2cpp_codegen_object_new(ObjectDisposedException_tF68E471ECD1419AD7C51137B742837395F50B69A_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m303CFD09E4B541C36C60AE7B7CBC8B1B7EED66DC(L_9, _stringLiteral238EC4C85B4911E758E20D944D167F97A2F2CF83, _stringLiteralD011B3DDE8AABE1933A3802E8F1DAD1CAC43FD68, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, NULL, WindowsRuntimeStreamExtensions_AsStreamInternal_m74F95A24B8F32CA25CFEB7B0C142EB3CE87652B4_RuntimeMethod_var);
	}

IL_0045:
	{
		return G_B7_0;
	}

IL_0046:
	{
		IL2CPP_RUNTIME_CLASS_INIT(WindowsRuntimeStreamExtensions_tB2579CDBD2DBFEE07F8602FCC099051A1DA1D07E_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_tB9E14FC9F1A4E05AD5EB57785FA2CE688D31D2D1 * L_10 = ((WindowsRuntimeStreamExtensions_tB2579CDBD2DBFEE07F8602FCC099051A1DA1D07E_StaticFields*)il2cpp_codegen_static_fields_for(WindowsRuntimeStreamExtensions_tB2579CDBD2DBFEE07F8602FCC099051A1DA1D07E_il2cpp_TypeInfo_var))->get_s_winRtToNetFxAdapterMap_0();
		RuntimeObject * L_11 = ___windowsRuntimeStream0;
		NullCheck(L_10);
		bool L_12 = ConditionalWeakTable_2_TryGetValue_m9AEE82B601427812996482E5F9AA431AEF088D40(L_10, L_11, (Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 **)(&V_1), /*hidden argument*/ConditionalWeakTable_2_TryGetValue_m9AEE82B601427812996482E5F9AA431AEF088D40_RuntimeMethod_var);
		if (!L_12)
		{
			goto IL_0062;
		}
	}
	{
		bool L_13 = ___forceBufferSize3;
		if (!L_13)
		{
			goto IL_0060;
		}
	}
	{
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_14 = V_1;
		int32_t L_15 = ___bufferSize1;
		String_t* L_16 = ___invokedMethodName2;
		IL2CPP_RUNTIME_CLASS_INIT(WindowsRuntimeStreamExtensions_tB2579CDBD2DBFEE07F8602FCC099051A1DA1D07E_il2cpp_TypeInfo_var);
		WindowsRuntimeStreamExtensions_EnsureAdapterBufferSize_m6507CF9C4E53D85596F7E39A221BE248CA06CB6E(L_14, L_15, L_16, /*hidden argument*/NULL);
	}

IL_0060:
	{
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_17 = V_1;
		return L_17;
	}

IL_0062:
	{
		RuntimeObject * L_18 = ___windowsRuntimeStream0;
		int32_t L_19 = ___bufferSize1;
		String_t* L_20 = ___invokedMethodName2;
		bool L_21 = ___forceBufferSize3;
		IL2CPP_RUNTIME_CLASS_INIT(WindowsRuntimeStreamExtensions_tB2579CDBD2DBFEE07F8602FCC099051A1DA1D07E_il2cpp_TypeInfo_var);
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_22 = WindowsRuntimeStreamExtensions_AsStreamInternalFactoryHelper_mFE2CE486791EE8D4492D53EDD64BAF930250778E(L_18, L_19, L_20, L_21, /*hidden argument*/NULL);
		return L_22;
	}
}
// System.IO.Stream System.IO.WindowsRuntimeStreamExtensions::WinRtToNetFxAdapterMap_GetValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * WindowsRuntimeStreamExtensions_WinRtToNetFxAdapterMap_GetValue_m5B24DC84F0AB904CA8679AB5852AA66D6B25C625 (RuntimeObject * ___winRtStream0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsRuntimeStreamExtensions_WinRtToNetFxAdapterMap_GetValue_m5B24DC84F0AB904CA8679AB5852AA66D6B25C625_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CreateValueCallback_tB3A24270F8E2AC16575A1201853CAE071E560E5F * G_B2_0 = NULL;
	RuntimeObject * G_B2_1 = NULL;
	ConditionalWeakTable_2_tB9E14FC9F1A4E05AD5EB57785FA2CE688D31D2D1 * G_B2_2 = NULL;
	CreateValueCallback_tB3A24270F8E2AC16575A1201853CAE071E560E5F * G_B1_0 = NULL;
	RuntimeObject * G_B1_1 = NULL;
	ConditionalWeakTable_2_tB9E14FC9F1A4E05AD5EB57785FA2CE688D31D2D1 * G_B1_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(WindowsRuntimeStreamExtensions_tB2579CDBD2DBFEE07F8602FCC099051A1DA1D07E_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_tB9E14FC9F1A4E05AD5EB57785FA2CE688D31D2D1 * L_0 = ((WindowsRuntimeStreamExtensions_tB2579CDBD2DBFEE07F8602FCC099051A1DA1D07E_StaticFields*)il2cpp_codegen_static_fields_for(WindowsRuntimeStreamExtensions_tB2579CDBD2DBFEE07F8602FCC099051A1DA1D07E_il2cpp_TypeInfo_var))->get_s_winRtToNetFxAdapterMap_0();
		RuntimeObject * L_1 = ___winRtStream0;
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tCF7C165934A47FEBA482A40AF7181C4ABE09CF4E_il2cpp_TypeInfo_var);
		CreateValueCallback_tB3A24270F8E2AC16575A1201853CAE071E560E5F * L_2 = ((U3CU3Ec_tCF7C165934A47FEBA482A40AF7181C4ABE09CF4E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCF7C165934A47FEBA482A40AF7181C4ABE09CF4E_il2cpp_TypeInfo_var))->get_U3CU3E9__11_0_1();
		CreateValueCallback_tB3A24270F8E2AC16575A1201853CAE071E560E5F * L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = L_1;
		G_B1_2 = L_0;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			G_B2_2 = L_0;
			goto IL_0025;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tCF7C165934A47FEBA482A40AF7181C4ABE09CF4E_il2cpp_TypeInfo_var);
		U3CU3Ec_tCF7C165934A47FEBA482A40AF7181C4ABE09CF4E * L_4 = ((U3CU3Ec_tCF7C165934A47FEBA482A40AF7181C4ABE09CF4E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCF7C165934A47FEBA482A40AF7181C4ABE09CF4E_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		CreateValueCallback_tB3A24270F8E2AC16575A1201853CAE071E560E5F * L_5 = (CreateValueCallback_tB3A24270F8E2AC16575A1201853CAE071E560E5F *)il2cpp_codegen_object_new(CreateValueCallback_tB3A24270F8E2AC16575A1201853CAE071E560E5F_il2cpp_TypeInfo_var);
		CreateValueCallback__ctor_m6F285B29502E61253A32187195968C317A608F06(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec_U3CWinRtToNetFxAdapterMap_GetValueU3Eb__11_0_mA2B332AFE10C81364AF1DC25BF618D4200F2D5E1_RuntimeMethod_var), /*hidden argument*/CreateValueCallback__ctor_m6F285B29502E61253A32187195968C317A608F06_RuntimeMethod_var);
		CreateValueCallback_tB3A24270F8E2AC16575A1201853CAE071E560E5F * L_6 = L_5;
		((U3CU3Ec_tCF7C165934A47FEBA482A40AF7181C4ABE09CF4E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCF7C165934A47FEBA482A40AF7181C4ABE09CF4E_il2cpp_TypeInfo_var))->set_U3CU3E9__11_0_1(L_6);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_0025:
	{
		NullCheck(G_B2_2);
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_7 = ConditionalWeakTable_2_GetValue_mA59C58BABE481F361C721F5013E57CD9093CA4AC(G_B2_2, G_B2_1, G_B2_0, /*hidden argument*/ConditionalWeakTable_2_GetValue_mA59C58BABE481F361C721F5013E57CD9093CA4AC_RuntimeMethod_var);
		return L_7;
	}
}
// System.IO.Stream System.IO.WindowsRuntimeStreamExtensions::WinRtToNetFxAdapterMap_GetValue(System.Object,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * WindowsRuntimeStreamExtensions_WinRtToNetFxAdapterMap_GetValue_m5048E8F721D5BC6AA46B31B8BF638373569A96EE (RuntimeObject * ___winRtStream0, int32_t ___bufferSize1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsRuntimeStreamExtensions_WinRtToNetFxAdapterMap_GetValue_m5048E8F721D5BC6AA46B31B8BF638373569A96EE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass12_0_t2B7F2A65F291CBC86E58650B3B7F0250618BB1EA * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass12_0_t2B7F2A65F291CBC86E58650B3B7F0250618BB1EA * L_0 = (U3CU3Ec__DisplayClass12_0_t2B7F2A65F291CBC86E58650B3B7F0250618BB1EA *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass12_0_t2B7F2A65F291CBC86E58650B3B7F0250618BB1EA_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass12_0__ctor_mCB82215D6FC7791483AC9C42E7487E1C19A3CF00(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass12_0_t2B7F2A65F291CBC86E58650B3B7F0250618BB1EA * L_1 = V_0;
		int32_t L_2 = ___bufferSize1;
		NullCheck(L_1);
		L_1->set_bufferSize_0(L_2);
		IL2CPP_RUNTIME_CLASS_INIT(WindowsRuntimeStreamExtensions_tB2579CDBD2DBFEE07F8602FCC099051A1DA1D07E_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_tB9E14FC9F1A4E05AD5EB57785FA2CE688D31D2D1 * L_3 = ((WindowsRuntimeStreamExtensions_tB2579CDBD2DBFEE07F8602FCC099051A1DA1D07E_StaticFields*)il2cpp_codegen_static_fields_for(WindowsRuntimeStreamExtensions_tB2579CDBD2DBFEE07F8602FCC099051A1DA1D07E_il2cpp_TypeInfo_var))->get_s_winRtToNetFxAdapterMap_0();
		RuntimeObject * L_4 = ___winRtStream0;
		U3CU3Ec__DisplayClass12_0_t2B7F2A65F291CBC86E58650B3B7F0250618BB1EA * L_5 = V_0;
		CreateValueCallback_tB3A24270F8E2AC16575A1201853CAE071E560E5F * L_6 = (CreateValueCallback_tB3A24270F8E2AC16575A1201853CAE071E560E5F *)il2cpp_codegen_object_new(CreateValueCallback_tB3A24270F8E2AC16575A1201853CAE071E560E5F_il2cpp_TypeInfo_var);
		CreateValueCallback__ctor_m6F285B29502E61253A32187195968C317A608F06(L_6, L_5, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass12_0_U3CWinRtToNetFxAdapterMap_GetValueU3Eb__0_m107DC14B8D25DF84D0CBBDBB0F2B52E8F7F51B01_RuntimeMethod_var), /*hidden argument*/CreateValueCallback__ctor_m6F285B29502E61253A32187195968C317A608F06_RuntimeMethod_var);
		NullCheck(L_3);
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_7 = ConditionalWeakTable_2_GetValue_mA59C58BABE481F361C721F5013E57CD9093CA4AC(L_3, L_4, L_6, /*hidden argument*/ConditionalWeakTable_2_GetValue_mA59C58BABE481F361C721F5013E57CD9093CA4AC_RuntimeMethod_var);
		return L_7;
	}
}
// System.IO.Stream System.IO.WindowsRuntimeStreamExtensions::AsStreamInternalFactoryHelper(System.Object,System.Int32,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * WindowsRuntimeStreamExtensions_AsStreamInternalFactoryHelper_mFE2CE486791EE8D4492D53EDD64BAF930250778E (RuntimeObject * ___windowsRuntimeStream0, int32_t ___bufferSize1, String_t* ___invokedMethodName2, bool ___forceBufferSize3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsRuntimeStreamExtensions_AsStreamInternalFactoryHelper_mFE2CE486791EE8D4492D53EDD64BAF930250778E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * V_0 = NULL;
	WinRtToNetFxStreamAdapter_t5DF3E266765C62B1F96383772091E1E54DD48397 * V_1 = NULL;
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * G_B3_0 = NULL;
	{
		int32_t L_0 = ___bufferSize1;
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		RuntimeObject * L_1 = ___windowsRuntimeStream0;
		int32_t L_2 = ___bufferSize1;
		IL2CPP_RUNTIME_CLASS_INIT(WindowsRuntimeStreamExtensions_tB2579CDBD2DBFEE07F8602FCC099051A1DA1D07E_il2cpp_TypeInfo_var);
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_3 = WindowsRuntimeStreamExtensions_WinRtToNetFxAdapterMap_GetValue_m5048E8F721D5BC6AA46B31B8BF638373569A96EE(L_1, L_2, /*hidden argument*/NULL);
		G_B3_0 = L_3;
		goto IL_0012;
	}

IL_000c:
	{
		RuntimeObject * L_4 = ___windowsRuntimeStream0;
		IL2CPP_RUNTIME_CLASS_INIT(WindowsRuntimeStreamExtensions_tB2579CDBD2DBFEE07F8602FCC099051A1DA1D07E_il2cpp_TypeInfo_var);
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_5 = WindowsRuntimeStreamExtensions_WinRtToNetFxAdapterMap_GetValue_m5B24DC84F0AB904CA8679AB5852AA66D6B25C625(L_4, /*hidden argument*/NULL);
		G_B3_0 = L_5;
	}

IL_0012:
	{
		V_0 = G_B3_0;
		bool L_6 = ___forceBufferSize3;
		if (!L_6)
		{
			goto IL_001e;
		}
	}
	{
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_7 = V_0;
		int32_t L_8 = ___bufferSize1;
		String_t* L_9 = ___invokedMethodName2;
		IL2CPP_RUNTIME_CLASS_INIT(WindowsRuntimeStreamExtensions_tB2579CDBD2DBFEE07F8602FCC099051A1DA1D07E_il2cpp_TypeInfo_var);
		WindowsRuntimeStreamExtensions_EnsureAdapterBufferSize_m6507CF9C4E53D85596F7E39A221BE248CA06CB6E(L_7, L_8, L_9, /*hidden argument*/NULL);
	}

IL_001e:
	{
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_10 = V_0;
		V_1 = ((WinRtToNetFxStreamAdapter_t5DF3E266765C62B1F96383772091E1E54DD48397 *)IsInstClass((RuntimeObject*)L_10, WinRtToNetFxStreamAdapter_t5DF3E266765C62B1F96383772091E1E54DD48397_il2cpp_TypeInfo_var));
		WinRtToNetFxStreamAdapter_t5DF3E266765C62B1F96383772091E1E54DD48397 * L_11 = V_1;
		if (L_11)
		{
			goto IL_0039;
		}
	}
	{
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_12 = V_0;
		NullCheck(((BufferedStream_tA4070368D71992D14E131A8230BAA273A71A0CE9 *)CastclassSealed((RuntimeObject*)L_12, BufferedStream_tA4070368D71992D14E131A8230BAA273A71A0CE9_il2cpp_TypeInfo_var)));
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_13 = BufferedStream_get_UnderlyingStream_m152A6783AC56FA30D6DECC193F889E46E09D7A9B(((BufferedStream_tA4070368D71992D14E131A8230BAA273A71A0CE9 *)CastclassSealed((RuntimeObject*)L_12, BufferedStream_tA4070368D71992D14E131A8230BAA273A71A0CE9_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		V_1 = ((WinRtToNetFxStreamAdapter_t5DF3E266765C62B1F96383772091E1E54DD48397 *)IsInstClass((RuntimeObject*)L_13, WinRtToNetFxStreamAdapter_t5DF3E266765C62B1F96383772091E1E54DD48397_il2cpp_TypeInfo_var));
	}

IL_0039:
	{
		WinRtToNetFxStreamAdapter_t5DF3E266765C62B1F96383772091E1E54DD48397 * L_14 = V_1;
		NullCheck(L_14);
		WinRtToNetFxStreamAdapter_SetWonInitializationRace_m3A170BF60C8D57B6B1DB37B39A767B6DDD43B023(L_14, /*hidden argument*/NULL);
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_15 = V_0;
		return L_15;
	}
}
// System.Void System.IO.WindowsRuntimeStreamExtensions::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeStreamExtensions__cctor_m2A925362C13A804653EF4AB2739E897711359841 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsRuntimeStreamExtensions__cctor_m2A925362C13A804653EF4AB2739E897711359841_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ConditionalWeakTable_2_tB9E14FC9F1A4E05AD5EB57785FA2CE688D31D2D1 * L_0 = (ConditionalWeakTable_2_tB9E14FC9F1A4E05AD5EB57785FA2CE688D31D2D1 *)il2cpp_codegen_object_new(ConditionalWeakTable_2_tB9E14FC9F1A4E05AD5EB57785FA2CE688D31D2D1_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2__ctor_mB323587022A6BE4AC796E5FE55A8793AC025CD19(L_0, /*hidden argument*/ConditionalWeakTable_2__ctor_mB323587022A6BE4AC796E5FE55A8793AC025CD19_RuntimeMethod_var);
		((WindowsRuntimeStreamExtensions_tB2579CDBD2DBFEE07F8602FCC099051A1DA1D07E_StaticFields*)il2cpp_codegen_static_fields_for(WindowsRuntimeStreamExtensions_tB2579CDBD2DBFEE07F8602FCC099051A1DA1D07E_il2cpp_TypeInfo_var))->set_s_winRtToNetFxAdapterMap_0(L_0);
		ConditionalWeakTable_2_tFE3F49537A7EF477176850178016C4512DA2731C * L_1 = (ConditionalWeakTable_2_tFE3F49537A7EF477176850178016C4512DA2731C *)il2cpp_codegen_object_new(ConditionalWeakTable_2_tFE3F49537A7EF477176850178016C4512DA2731C_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2__ctor_m268322A19324E19F6526491B300F3B02ADE3535F(L_1, /*hidden argument*/ConditionalWeakTable_2__ctor_m268322A19324E19F6526491B300F3B02ADE3535F_RuntimeMethod_var);
		((WindowsRuntimeStreamExtensions_tB2579CDBD2DBFEE07F8602FCC099051A1DA1D07E_StaticFields*)il2cpp_codegen_static_fields_for(WindowsRuntimeStreamExtensions_tB2579CDBD2DBFEE07F8602FCC099051A1DA1D07E_il2cpp_TypeInfo_var))->set_s_netFxToWinRtAdapterMap_1(L_1);
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
// System.Void System.IO.WindowsRuntimeStreamExtensions_<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mBF52595DB23256E5B7B4724C6DDE9640684FB582 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_mBF52595DB23256E5B7B4724C6DDE9640684FB582_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tCF7C165934A47FEBA482A40AF7181C4ABE09CF4E * L_0 = (U3CU3Ec_tCF7C165934A47FEBA482A40AF7181C4ABE09CF4E *)il2cpp_codegen_object_new(U3CU3Ec_tCF7C165934A47FEBA482A40AF7181C4ABE09CF4E_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mBE6F6EA3D1B4DFDD3CCC63AC4059A840F81B73E6(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tCF7C165934A47FEBA482A40AF7181C4ABE09CF4E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCF7C165934A47FEBA482A40AF7181C4ABE09CF4E_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void System.IO.WindowsRuntimeStreamExtensions_<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mBE6F6EA3D1B4DFDD3CCC63AC4059A840F81B73E6 (U3CU3Ec_tCF7C165934A47FEBA482A40AF7181C4ABE09CF4E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.IO.Stream System.IO.WindowsRuntimeStreamExtensions_<>c::<WinRtToNetFxAdapterMap_GetValue>b__11_0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * U3CU3Ec_U3CWinRtToNetFxAdapterMap_GetValueU3Eb__11_0_mA2B332AFE10C81364AF1DC25BF618D4200F2D5E1 (U3CU3Ec_tCF7C165934A47FEBA482A40AF7181C4ABE09CF4E * __this, RuntimeObject * ___wrtStr0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___wrtStr0;
		WinRtToNetFxStreamAdapter_t5DF3E266765C62B1F96383772091E1E54DD48397 * L_1 = WinRtToNetFxStreamAdapter_Create_mCCF171C3466E68BBBF31CBB0C98C3F282F5A5B45(L_0, /*hidden argument*/NULL);
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
// System.Void System.IO.WindowsRuntimeStreamExtensions_<>c__DisplayClass12_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0__ctor_mCB82215D6FC7791483AC9C42E7487E1C19A3CF00 (U3CU3Ec__DisplayClass12_0_t2B7F2A65F291CBC86E58650B3B7F0250618BB1EA * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.IO.Stream System.IO.WindowsRuntimeStreamExtensions_<>c__DisplayClass12_0::<WinRtToNetFxAdapterMap_GetValue>b__0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * U3CU3Ec__DisplayClass12_0_U3CWinRtToNetFxAdapterMap_GetValueU3Eb__0_m107DC14B8D25DF84D0CBBDBB0F2B52E8F7F51B01 (U3CU3Ec__DisplayClass12_0_t2B7F2A65F291CBC86E58650B3B7F0250618BB1EA * __this, RuntimeObject * ___wrtStr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass12_0_U3CWinRtToNetFxAdapterMap_GetValueU3Eb__0_m107DC14B8D25DF84D0CBBDBB0F2B52E8F7F51B01_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___wrtStr0;
		WinRtToNetFxStreamAdapter_t5DF3E266765C62B1F96383772091E1E54DD48397 * L_1 = WinRtToNetFxStreamAdapter_Create_mCCF171C3466E68BBBF31CBB0C98C3F282F5A5B45(L_0, /*hidden argument*/NULL);
		int32_t L_2 = __this->get_bufferSize_0();
		BufferedStream_tA4070368D71992D14E131A8230BAA273A71A0CE9 * L_3 = (BufferedStream_tA4070368D71992D14E131A8230BAA273A71A0CE9 *)il2cpp_codegen_object_new(BufferedStream_tA4070368D71992D14E131A8230BAA273A71A0CE9_il2cpp_TypeInfo_var);
		BufferedStream__ctor_mC5DA0BE7CFE2F9D41AAE238C4B64FD9A9C7765F8(L_3, L_1, L_2, /*hidden argument*/NULL);
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
// System.Runtime.InteropServices.IAgileObject
const Il2CppGuid IAgileObject_t725A33FE8879B717322060E4A76D34D63D700548::IID = { 0x94ea2b94, 0xe9cc, 0x49e0, 0xc0, 0xff, 0xee, 0x64, 0xca, 0x8f, 0x5b, 0x90 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Runtime.InteropServices.IMarshal
const Il2CppGuid IMarshal_t9798E44C73E4A0170F6E91C6FCE5FD6CAC06001C::IID = { 0x3, 0x0, 0x0, 0xc0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x46 };
// System.Void System.Runtime.InteropServices.IMarshal::GetUnmarshalClass(System.GuidU26,System.IntPtr,System.UInt32,System.IntPtr,System.UInt32,System.GuidU26)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IMarshal_GetUnmarshalClass_m394D399AF3D58E5C260D663B63E34F4A37BF6F76 (RuntimeObject* __this, Guid_t * ___riid0, intptr_t ___pv1, uint32_t ___dwDestContext2, intptr_t ___pvDestContext3, uint32_t ___mshlFlags4, Guid_t * ___pCid5, const RuntimeMethod* method)
{
	IMarshal_t9798E44C73E4A0170F6E91C6FCE5FD6CAC06001C* ____imarshal_t9798E44C73E4A0170F6E91C6FCE5FD6CAC06001C = il2cpp_codegen_com_query_interface<IMarshal_t9798E44C73E4A0170F6E91C6FCE5FD6CAC06001C>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	const il2cpp_hresult_t hr = ____imarshal_t9798E44C73E4A0170F6E91C6FCE5FD6CAC06001C->IMarshal_GetUnmarshalClass_m394D399AF3D58E5C260D663B63E34F4A37BF6F76(___riid0, ___pv1, ___dwDestContext2, ___pvDestContext3, ___mshlFlags4, ___pCid5);

	il2cpp_codegen_com_raise_exception_if_failed(hr, true);

}
// System.Void System.Runtime.InteropServices.IMarshal::GetMarshalSizeMax(System.GuidU26,System.IntPtr,System.UInt32,System.IntPtr,System.UInt32,System.UInt32U26)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IMarshal_GetMarshalSizeMax_mBAF33A0B75ABDA690A09809CBC0758AC94C591A1 (RuntimeObject* __this, Guid_t * ___riid0, intptr_t ___pv1, uint32_t ___dwDestContext2, intptr_t ___pvDestContext3, uint32_t ___mshlflags4, uint32_t* ___pSize5, const RuntimeMethod* method)
{
	IMarshal_t9798E44C73E4A0170F6E91C6FCE5FD6CAC06001C* ____imarshal_t9798E44C73E4A0170F6E91C6FCE5FD6CAC06001C = il2cpp_codegen_com_query_interface<IMarshal_t9798E44C73E4A0170F6E91C6FCE5FD6CAC06001C>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	const il2cpp_hresult_t hr = ____imarshal_t9798E44C73E4A0170F6E91C6FCE5FD6CAC06001C->IMarshal_GetMarshalSizeMax_mBAF33A0B75ABDA690A09809CBC0758AC94C591A1(___riid0, ___pv1, ___dwDestContext2, ___pvDestContext3, ___mshlflags4, ___pSize5);

	il2cpp_codegen_com_raise_exception_if_failed(hr, true);

}
// System.Void System.Runtime.InteropServices.IMarshal::MarshalInterface(System.IntPtr,System.GuidU26,System.IntPtr,System.UInt32,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IMarshal_MarshalInterface_m00480B6CD7532674DAA33AB7D4379125D03FC616 (RuntimeObject* __this, intptr_t ___pStm0, Guid_t * ___riid1, intptr_t ___pv2, uint32_t ___dwDestContext3, intptr_t ___pvDestContext4, uint32_t ___mshlflags5, const RuntimeMethod* method)
{
	IMarshal_t9798E44C73E4A0170F6E91C6FCE5FD6CAC06001C* ____imarshal_t9798E44C73E4A0170F6E91C6FCE5FD6CAC06001C = il2cpp_codegen_com_query_interface<IMarshal_t9798E44C73E4A0170F6E91C6FCE5FD6CAC06001C>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	const il2cpp_hresult_t hr = ____imarshal_t9798E44C73E4A0170F6E91C6FCE5FD6CAC06001C->IMarshal_MarshalInterface_m00480B6CD7532674DAA33AB7D4379125D03FC616(___pStm0, ___riid1, ___pv2, ___dwDestContext3, ___pvDestContext4, ___mshlflags5);

	il2cpp_codegen_com_raise_exception_if_failed(hr, true);

}
// System.Void System.Runtime.InteropServices.IMarshal::UnmarshalInterface(System.IntPtr,System.GuidU26,System.IntPtrU26)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IMarshal_UnmarshalInterface_mDD2463F15F49EA8390415A654870C8A2482E2BEA (RuntimeObject* __this, intptr_t ___pStm0, Guid_t * ___riid1, intptr_t* ___ppv2, const RuntimeMethod* method)
{
	IMarshal_t9798E44C73E4A0170F6E91C6FCE5FD6CAC06001C* ____imarshal_t9798E44C73E4A0170F6E91C6FCE5FD6CAC06001C = il2cpp_codegen_com_query_interface<IMarshal_t9798E44C73E4A0170F6E91C6FCE5FD6CAC06001C>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	const il2cpp_hresult_t hr = ____imarshal_t9798E44C73E4A0170F6E91C6FCE5FD6CAC06001C->IMarshal_UnmarshalInterface_mDD2463F15F49EA8390415A654870C8A2482E2BEA(___pStm0, ___riid1, ___ppv2);

	il2cpp_codegen_com_raise_exception_if_failed(hr, true);

}
// System.Void System.Runtime.InteropServices.IMarshal::ReleaseMarshalData(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IMarshal_ReleaseMarshalData_m03292BAE558EA56FAA11F9CBF8136DDB3D31E298 (RuntimeObject* __this, intptr_t ___pStm0, const RuntimeMethod* method)
{
	IMarshal_t9798E44C73E4A0170F6E91C6FCE5FD6CAC06001C* ____imarshal_t9798E44C73E4A0170F6E91C6FCE5FD6CAC06001C = il2cpp_codegen_com_query_interface<IMarshal_t9798E44C73E4A0170F6E91C6FCE5FD6CAC06001C>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	const il2cpp_hresult_t hr = ____imarshal_t9798E44C73E4A0170F6E91C6FCE5FD6CAC06001C->IMarshal_ReleaseMarshalData_m03292BAE558EA56FAA11F9CBF8136DDB3D31E298(___pStm0);

	il2cpp_codegen_com_raise_exception_if_failed(hr, true);

}
// System.Void System.Runtime.InteropServices.IMarshal::DisconnectObject(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IMarshal_DisconnectObject_mE3689A76176F7E4FC4D556C9DF8D3F55DC8C9207 (RuntimeObject* __this, uint32_t ___dwReserved0, const RuntimeMethod* method)
{
	IMarshal_t9798E44C73E4A0170F6E91C6FCE5FD6CAC06001C* ____imarshal_t9798E44C73E4A0170F6E91C6FCE5FD6CAC06001C = il2cpp_codegen_com_query_interface<IMarshal_t9798E44C73E4A0170F6E91C6FCE5FD6CAC06001C>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	const il2cpp_hresult_t hr = ____imarshal_t9798E44C73E4A0170F6E91C6FCE5FD6CAC06001C->IMarshal_DisconnectObject_mE3689A76176F7E4FC4D556C9DF8D3F55DC8C9207(___dwReserved0);

	il2cpp_codegen_com_raise_exception_if_failed(hr, true);

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
// System.Runtime.InteropServices.WindowsRuntime.IBufferByteAccess
const Il2CppGuid IBufferByteAccess_tFCEF19FBAF4E19CB5BD75DC16CDE5061DC9758D7::IID = { 0x905a0fef, 0xbc53, 0x11df, 0x8c, 0x49, 0x0, 0x1e, 0x4f, 0xc6, 0x86, 0xda };
// System.IntPtr System.Runtime.InteropServices.WindowsRuntime.IBufferByteAccess::GetBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IBufferByteAccess_GetBuffer_m0047AB72261718E613B316AE41337C99050B2058 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IBufferByteAccess_tFCEF19FBAF4E19CB5BD75DC16CDE5061DC9758D7* ____ibufferByteAccess_tFCEF19FBAF4E19CB5BD75DC16CDE5061DC9758D7 = il2cpp_codegen_com_query_interface<IBufferByteAccess_tFCEF19FBAF4E19CB5BD75DC16CDE5061DC9758D7>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	intptr_t returnValue = 0;
	const il2cpp_hresult_t hr = ____ibufferByteAccess_tFCEF19FBAF4E19CB5BD75DC16CDE5061DC9758D7->IBufferByteAccess_GetBuffer_m0047AB72261718E613B316AE41337C99050B2058(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, true);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Storage.Streams.IBuffer System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::Create(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WindowsRuntimeBuffer_Create_mE44C1ABEE68D89B3BBF4899C90EB6FBC8FE5101F (int32_t ___capacity0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsRuntimeBuffer_Create_mE44C1ABEE68D89B3BBF4899C90EB6FBC8FE5101F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___capacity0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_1 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6(L_1, _stringLiteral7CB1F56D3FBE09E809244FC8E13671CD876E3860, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, WindowsRuntimeBuffer_Create_mE44C1ABEE68D89B3BBF4899C90EB6FBC8FE5101F_RuntimeMethod_var);
	}

IL_000f:
	{
		int32_t L_2 = ___capacity0;
		WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22 * L_3 = (WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22 *)il2cpp_codegen_object_new(WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22_il2cpp_TypeInfo_var);
		WindowsRuntimeBuffer__ctor_m647E546ED9196E78CF024F9D126E689F068F0CEA(L_3, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t STDCALL RoGetBufferMarshaler(IMarshal_t9798E44C73E4A0170F6E91C6FCE5FD6CAC06001C**);
#endif
// System.Int32 System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::RoGetBufferMarshaler(System.Runtime.InteropServices.IMarshalU26)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WindowsRuntimeBuffer_RoGetBufferMarshaler_m92635310D29611651BA2CEAE7078C4D60657EEAF (RuntimeObject** ___bufferMarshalerPtr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsRuntimeBuffer_RoGetBufferMarshaler_m92635310D29611651BA2CEAE7078C4D60657EEAF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	typedef int32_t (STDCALL *PInvokeFunc) (IMarshal_t9798E44C73E4A0170F6E91C6FCE5FD6CAC06001C**);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(IMarshal_t9798E44C73E4A0170F6E91C6FCE5FD6CAC06001C**);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("WinTypes.dll"), "RoGetBufferMarshaler", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'RoGetBufferMarshaler'"), NULL, NULL);
		}
	}
	#endif

	// Marshaling of parameter U27___bufferMarshalerPtr0U27 to native representation
	IMarshal_t9798E44C73E4A0170F6E91C6FCE5FD6CAC06001C* ____bufferMarshalerPtr0_empty = NULL;
	IMarshal_t9798E44C73E4A0170F6E91C6FCE5FD6CAC06001C** ____bufferMarshalerPtr0_marshaled = &____bufferMarshalerPtr0_empty;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(RoGetBufferMarshaler)(____bufferMarshalerPtr0_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____bufferMarshalerPtr0_marshaled);
	#endif

	// Marshaling of parameter U27___bufferMarshalerPtr0U27 back from native representation
	RuntimeObject* _____bufferMarshalerPtr0_marshaled_unmarshaled_dereferenced = NULL;
	if (*____bufferMarshalerPtr0_marshaled != NULL)
	{
		_____bufferMarshalerPtr0_marshaled_unmarshaled_dereferenced = il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(*____bufferMarshalerPtr0_marshaled, Il2CppComObject_il2cpp_TypeInfo_var);

		if (il2cpp_codegen_is_import_or_windows_runtime(_____bufferMarshalerPtr0_marshaled_unmarshaled_dereferenced))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(_____bufferMarshalerPtr0_marshaled_unmarshaled_dereferenced), IMarshal_t9798E44C73E4A0170F6E91C6FCE5FD6CAC06001C::IID, *____bufferMarshalerPtr0_marshaled);
		}
	}
	else
	{
		_____bufferMarshalerPtr0_marshaled_unmarshaled_dereferenced = NULL;
	}
	*___bufferMarshalerPtr0 = _____bufferMarshalerPtr0_marshaled_unmarshaled_dereferenced;
	Il2CppCodeGenWriteBarrier((void**)___bufferMarshalerPtr0, (void*)____bufferMarshalerPtr0_marshaled);

	// Marshaling cleanup of parameter U27___bufferMarshalerPtr0U27 native representation
	if (*____bufferMarshalerPtr0_marshaled != NULL)
	{
		(*____bufferMarshalerPtr0_marshaled)->Release();
		*____bufferMarshalerPtr0_marshaled = NULL;
	}

	return returnValue;
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::EnsureHasMarshalProxy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer_EnsureHasMarshalProxy_m8EA99F1848DDC7E830545DC80A8C53983B3E0879 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsRuntimeBuffer_EnsureHasMarshalProxy_m8EA99F1848DDC7E830545DC80A8C53983B3E0879_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	DllNotFoundException_tED90B6A78D4CF5AA565288E0BA88A990062A7F76 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject* L_0 = ((WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22_il2cpp_TypeInfo_var))->get_s_winRtMarshalProxy_0();
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		return;
	}

IL_0008:
	{
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = WindowsRuntimeBuffer_RoGetBufferMarshaler_m92635310D29611651BA2CEAE7078C4D60657EEAF((RuntimeObject**)(&V_0), /*hidden argument*/NULL);
			V_1 = L_1;
			RuntimeObject* L_2 = V_0;
			((WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22_il2cpp_TypeInfo_var))->set_s_winRtMarshalProxy_0(L_2);
			int32_t L_3 = V_1;
			if (!L_3)
			{
				goto IL_003b;
			}
		}

IL_001a:
		{
			String_t* L_4 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteral6905F850EE139FEF18EE2BDBB20F1F47C1FFA559, _stringLiteral4E9DBDE61B5DADBC3F242C5DEA103B2AC13F5E57, _stringLiteralF5948B04AE471713F9168EC57782B460CF1E14CD, /*hidden argument*/NULL);
			Exception_t * L_5 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
			Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0(L_5, L_4, /*hidden argument*/NULL);
			Exception_t * L_6 = L_5;
			int32_t L_7 = V_1;
			NullCheck(L_6);
			Exception_SetErrorCode_m742C1E687C82E56F445893685007EF4FC017F4A7(L_6, L_7, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, NULL, WindowsRuntimeBuffer_EnsureHasMarshalProxy_m8EA99F1848DDC7E830545DC80A8C53983B3E0879_RuntimeMethod_var);
		}

IL_003b:
		{
			RuntimeObject* L_8 = V_0;
			if (L_8)
			{
				goto IL_0058;
			}
		}

IL_003e:
		{
			String_t* L_9 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteral6905F850EE139FEF18EE2BDBB20F1F47C1FFA559, _stringLiteral4E9DBDE61B5DADBC3F242C5DEA103B2AC13F5E57, _stringLiteralF5948B04AE471713F9168EC57782B460CF1E14CD, /*hidden argument*/NULL);
			NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC * L_10 = (NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC *)il2cpp_codegen_object_new(NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC_il2cpp_TypeInfo_var);
			NullReferenceException__ctor_mAD32CA6CD05808ED531D14BA18B7AA1E99B8D349(L_10, L_9, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, NULL, WindowsRuntimeBuffer_EnsureHasMarshalProxy_m8EA99F1848DDC7E830545DC80A8C53983B3E0879_RuntimeMethod_var);
		}

IL_0058:
		{
			goto IL_0067;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (DllNotFoundException_tED90B6A78D4CF5AA565288E0BA88A990062A7F76_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_005a;
		throw e;
	}

CATCH_005a:
	{ // begin catch(System.DllNotFoundException)
		V_2 = ((DllNotFoundException_tED90B6A78D4CF5AA565288E0BA88A990062A7F76 *)__exception_local);
		DllNotFoundException_tED90B6A78D4CF5AA565288E0BA88A990062A7F76 * L_11 = V_2;
		NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * L_12 = (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 *)il2cpp_codegen_object_new(NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m3EA4CBB9A00BC498783C5EDA61DC26E3FF20314C(L_12, _stringLiteral6B3CB685CC566A445B0072B307F675ED68731A9C, L_11, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, NULL, WindowsRuntimeBuffer_EnsureHasMarshalProxy_m8EA99F1848DDC7E830545DC80A8C53983B3E0879_RuntimeMethod_var);
	} // end catch (depth: 1)

IL_0067:
	{
		return;
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer__ctor_m647E546ED9196E78CF024F9D126E689F068F0CEA (WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22 * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsRuntimeBuffer__ctor_m647E546ED9196E78CF024F9D126E689F068F0CEA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set__dataPtr_6((intptr_t)(0));
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___capacity0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_1 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6(L_1, _stringLiteral7CB1F56D3FBE09E809244FC8E13671CD876E3860, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, WindowsRuntimeBuffer__ctor_m647E546ED9196E78CF024F9D126E689F068F0CEA_RuntimeMethod_var);
	}

IL_0020:
	{
		int32_t L_2 = ___capacity0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->set__data_1(L_3);
		__this->set__dataStartOffs_2(0);
		__this->set__usefulDataLength_3(0);
		int32_t L_4 = ___capacity0;
		__this->set__maxDataCapacity_4(L_4);
		__this->set__dataPtr_6((intptr_t)(0));
		return;
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::.ctor(System.Byte[],System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer__ctor_m057CF397F8500BB4BE049EF15809461062E5DC00 (WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___data0, int32_t ___offset1, int32_t ___length2, int32_t ___capacity3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsRuntimeBuffer__ctor_m057CF397F8500BB4BE049EF15809461062E5DC00_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set__dataPtr_6((intptr_t)(0));
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___data0;
		if (L_0)
		{
			goto IL_001f;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, _stringLiteralA17C9AAA61E80A1BF71D0D850AF4E5BAA9800BBD, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, WindowsRuntimeBuffer__ctor_m057CF397F8500BB4BE049EF15809461062E5DC00_RuntimeMethod_var);
	}

IL_001f:
	{
		int32_t L_2 = ___offset1;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_002e;
		}
	}
	{
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_3 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6(L_3, _stringLiteral53A610E925BBC0A175E365D31241AE75AEEAD651, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, WindowsRuntimeBuffer__ctor_m057CF397F8500BB4BE049EF15809461062E5DC00_RuntimeMethod_var);
	}

IL_002e:
	{
		int32_t L_4 = ___length2;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_003d;
		}
	}
	{
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_5 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6(L_5, _stringLiteral3D54973F528B01019A58A52D34D518405A01B891, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, NULL, WindowsRuntimeBuffer__ctor_m057CF397F8500BB4BE049EF15809461062E5DC00_RuntimeMethod_var);
	}

IL_003d:
	{
		int32_t L_6 = ___capacity3;
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_7 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6(L_7, _stringLiteral7CB1F56D3FBE09E809244FC8E13671CD876E3860, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, NULL, WindowsRuntimeBuffer__ctor_m057CF397F8500BB4BE049EF15809461062E5DC00_RuntimeMethod_var);
	}

IL_004d:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_8 = ___data0;
		NullCheck(L_8);
		int32_t L_9 = ___offset1;
		int32_t L_10 = ___length2;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))), (int32_t)L_9))) >= ((int32_t)L_10)))
		{
			goto IL_0060;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_11 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_11, _stringLiteralA7512A2545D962556CA62F28AA7BD8D840985DA9, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, NULL, WindowsRuntimeBuffer__ctor_m057CF397F8500BB4BE049EF15809461062E5DC00_RuntimeMethod_var);
	}

IL_0060:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_12 = ___data0;
		NullCheck(L_12);
		int32_t L_13 = ___offset1;
		int32_t L_14 = ___capacity3;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))), (int32_t)L_13))) >= ((int32_t)L_14)))
		{
			goto IL_0074;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_15 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_15, _stringLiteralA7512A2545D962556CA62F28AA7BD8D840985DA9, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, NULL, WindowsRuntimeBuffer__ctor_m057CF397F8500BB4BE049EF15809461062E5DC00_RuntimeMethod_var);
	}

IL_0074:
	{
		int32_t L_16 = ___capacity3;
		int32_t L_17 = ___length2;
		if ((((int32_t)L_16) >= ((int32_t)L_17)))
		{
			goto IL_0084;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_18 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_18, _stringLiteral58B2D91FD6A4CD3EB40D16D2CDAA0AED435EA030, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, NULL, WindowsRuntimeBuffer__ctor_m057CF397F8500BB4BE049EF15809461062E5DC00_RuntimeMethod_var);
	}

IL_0084:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_19 = ___data0;
		__this->set__data_1(L_19);
		int32_t L_20 = ___offset1;
		__this->set__dataStartOffs_2(L_20);
		int32_t L_21 = ___length2;
		__this->set__usefulDataLength_3(L_21);
		int32_t L_22 = ___capacity3;
		__this->set__maxDataCapacity_4(L_22);
		__this->set__dataPtr_6((intptr_t)(0));
		return;
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::GetUnderlyingData(System.Byte[]U26,System.Int32U26)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer_GetUnderlyingData_mBCC3F8E7DAC3D16C7D5DB7F363F02F451FD67D0D (WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** ___underlyingDataArray0, int32_t* ___underlyingDataArrayStartOffset1, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** L_0 = ___underlyingDataArray0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = __this->get__data_1();
		*((RuntimeObject **)L_0) = (RuntimeObject *)L_1;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_0, (void*)(RuntimeObject *)L_1);
		int32_t* L_2 = ___underlyingDataArrayStartOffset1;
		int32_t L_3 = __this->get__dataStartOffs_2();
		*((int32_t*)L_2) = (int32_t)L_3;
		return;
	}
}
// System.Byte* System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::PinUnderlyingData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* WindowsRuntimeBuffer_PinUnderlyingData_mD31E1965F0ABF312675E6F3AEA70C773C4CA057B (WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsRuntimeBuffer_PinUnderlyingData_mD31E1965F0ABF312675E6F3AEA70C773C4CA057B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		il2cpp_codegen_initobj((&V_0), sizeof(GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 ));
		V_1 = (bool)0;
	}

IL_000a:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x78, FINALLY_000c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000c;
	}

FINALLY_000c:
	{ // begin finally (depth: 1)
		{
		}

IL_000d:
		try
		{ // begin try (depth: 2)
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = __this->get__data_1();
			GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  L_1 = GCHandle_Alloc_m30DAF14F75E3A692C594965CE6724E2454DE9A2E((RuntimeObject *)(RuntimeObject *)L_0, 3, /*hidden argument*/NULL);
			V_0 = L_1;
			intptr_t L_2 = GCHandle_AddrOfPinnedObject_mA20090CB8274F28D087A6E8AD36D3230B6741EA5((GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 *)(&V_0), /*hidden argument*/NULL);
			int32_t L_3 = __this->get__dataStartOffs_2();
			intptr_t L_4 = IntPtr_op_Addition_mD815D6B36C7DFA1F89481720D3D46A6484BB9644((intptr_t)L_2, L_3, /*hidden argument*/NULL);
			V_2 = (intptr_t)L_4;
			intptr_t* L_5 = __this->get_address_of__dataPtr_6();
			intptr_t L_6 = V_2;
			intptr_t L_7 = Interlocked_CompareExchange_m0A02B16A9B99B35E70831EF919482BDFCE046D7A((intptr_t*)L_5, (intptr_t)L_6, (intptr_t)(0), /*hidden argument*/NULL);
			bool L_8 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_7, (intptr_t)(0), /*hidden argument*/NULL);
			V_1 = L_8;
			IL2CPP_LEAVE(0x77, FINALLY_004b);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_004b;
		}

FINALLY_004b:
		{ // begin finally (depth: 2)
			{
				bool L_9 = V_1;
				if (L_9)
				{
					goto IL_0057;
				}
			}

IL_004e:
			{
				GCHandle_Free_m392ECC9B1058E35A0FD5CF21A65F212873FC26F0((GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 *)(&V_0), /*hidden argument*/NULL);
				goto IL_0076;
			}

IL_0057:
			{
				GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 * L_10 = __this->get_address_of__pinHandle_5();
				bool L_11 = GCHandle_get_IsAllocated_m91323BCB568B1150F90515EF862B00F193E77808((GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 *)L_10, /*hidden argument*/NULL);
				if (!L_11)
				{
					goto IL_006f;
				}
			}

IL_0064:
			{
				GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 * L_12 = __this->get_address_of__pinHandle_5();
				GCHandle_Free_m392ECC9B1058E35A0FD5CF21A65F212873FC26F0((GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 *)L_12, /*hidden argument*/NULL);
			}

IL_006f:
			{
				GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  L_13 = V_0;
				__this->set__pinHandle_5(L_13);
			}

IL_0076:
			{
				IL2CPP_RESET_LEAVE(0x77);
				IL2CPP_END_FINALLY(75)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(75)
		{
			IL2CPP_JUMP_TBL(0x77, IL_0077)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_0077:
		{
			IL2CPP_RESET_LEAVE(0x78);
			IL2CPP_END_FINALLY(12)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(12)
	{
		IL2CPP_JUMP_TBL(0x78, IL_0078)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0078:
	{
		intptr_t L_14 = V_2;
		void* L_15 = IntPtr_op_Explicit_mB8A512095BCE1A23B2840310C8A27C928ADAD027((intptr_t)L_14, /*hidden argument*/NULL);
		return (uint8_t*)(L_15);
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer_Finalize_mE1F0E0D1245A31A26128A28A26B979B171C84FDA (WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 * L_0 = __this->get_address_of__pinHandle_5();
			bool L_1 = GCHandle_get_IsAllocated_m91323BCB568B1150F90515EF862B00F193E77808((GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 *)L_0, /*hidden argument*/NULL);
			if (!L_1)
			{
				goto IL_0018;
			}
		}

IL_000d:
		{
			GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 * L_2 = __this->get_address_of__pinHandle_5();
			GCHandle_Free_m392ECC9B1058E35A0FD5CF21A65F212873FC26F0((GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 *)L_2, /*hidden argument*/NULL);
		}

IL_0018:
		{
			IL2CPP_LEAVE(0x21, FINALLY_001a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_001a;
	}

FINALLY_001a:
	{ // begin finally (depth: 1)
		Object_Finalize_m4015B7D3A44DE125C5FE34D7276CD4697C06F380(__this, /*hidden argument*/NULL);
		IL2CPP_RESET_LEAVE(0x21);
		IL2CPP_END_FINALLY(26)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(26)
	{
		IL2CPP_JUMP_TBL(0x21, IL_0021)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0021:
	{
		return;
	}
}
// System.UInt32 System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::Windows.Storage.Streams.IBuffer.get_Capacity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t WindowsRuntimeBuffer_Windows_Storage_Streams_IBuffer_get_Capacity_m94DAA0965A8E5DEDA6F3F77798CF72D140932948 (WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__maxDataCapacity_4();
		return L_0;
	}
}
// System.UInt32 System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::Windows.Storage.Streams.IBuffer.get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t WindowsRuntimeBuffer_Windows_Storage_Streams_IBuffer_get_Length_mB0F8ED9F7F05C763AE8698180336B9A531ABAF9F (WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__usefulDataLength_3();
		return L_0;
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::Windows.Storage.Streams.IBuffer.put_Length(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer_Windows_Storage_Streams_IBuffer_put_Length_m89636F8978B5A5D597CFB74C2EF3509E52E190B9 (WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22 * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsRuntimeBuffer_Windows_Storage_Streams_IBuffer_put_Length_m89636F8978B5A5D597CFB74C2EF3509E52E190B9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0 = ___value0;
		uint32_t L_1 = InterfaceFuncInvoker0< uint32_t >::Invoke(0 /* System.UInt32 Windows.Storage.Streams.IBuffer::get_Capacity() */, IBuffer_t13BCDB1D6DE32F79AB9F9E149514026CA6B4AAEF_il2cpp_TypeInfo_var, __this);
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_0024;
		}
	}
	{
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_2 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m300CE4D04A068C209FD858101AC361C1B600B5AE(L_2, _stringLiteralF32B67C7E26342AF42EFABC674D441DCA0A281C5, _stringLiteral7441938D5F79A2DBB130D9141124EE2D6FC20CD1, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_3 = L_2;
		NullCheck(L_3);
		Exception_SetErrorCode_m742C1E687C82E56F445893685007EF4FC017F4A7(L_3, ((int32_t)-2147483637), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, WindowsRuntimeBuffer_Windows_Storage_Streams_IBuffer_put_Length_m89636F8978B5A5D597CFB74C2EF3509E52E190B9_RuntimeMethod_var);
	}

IL_0024:
	{
		uint32_t L_4 = ___value0;
		__this->set__usefulDataLength_3(L_4);
		return;
	}
}
// System.IntPtr System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::System.Runtime.InteropServices.WindowsRuntime.IBufferByteAccess.GetBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t WindowsRuntimeBuffer_System_Runtime_InteropServices_WindowsRuntime_IBufferByteAccess_GetBuffer_mA4B0277D88CF6BE1640E0ABF95A4DBBD0A99E1B6 (WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsRuntimeBuffer_System_Runtime_InteropServices_WindowsRuntime_IBufferByteAccess_GetBuffer_mA4B0277D88CF6BE1640E0ABF95A4DBBD0A99E1B6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t* L_0 = __this->get_address_of__dataPtr_6();
		intptr_t L_1 = VolatileRead((intptr_t*)L_0);
		V_0 = (intptr_t)L_1;
		intptr_t L_2 = V_0;
		bool L_3 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_2, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		intptr_t L_4 = V_0;
		return (intptr_t)L_4;
	}

IL_001b:
	{
		uint8_t* L_5 = WindowsRuntimeBuffer_PinUnderlyingData_mD31E1965F0ABF312675E6F3AEA70C773C4CA057B(__this, /*hidden argument*/NULL);
		intptr_t L_6;
		memset((&L_6), 0, sizeof(L_6));
		IntPtr__ctor_m6360250F4B87C6AE2F0389DA0DEE1983EED73FB6((&L_6), (void*)(void*)L_5, /*hidden argument*/NULL);
		return (intptr_t)L_6;
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::System.Runtime.InteropServices.IMarshal.DisconnectObject(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_DisconnectObject_m6508BA598A7093C8CAA21518740C488A13CB9055 (WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22 * __this, uint32_t ___dwReserved0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_DisconnectObject_m6508BA598A7093C8CAA21518740C488A13CB9055_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		WindowsRuntimeBuffer_EnsureHasMarshalProxy_m8EA99F1848DDC7E830545DC80A8C53983B3E0879(/*hidden argument*/NULL);
		RuntimeObject* L_0 = ((WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22_il2cpp_TypeInfo_var))->get_s_winRtMarshalProxy_0();
		uint32_t L_1 = ___dwReserved0;
		NullCheck(L_0);
		InterfaceActionInvoker1< uint32_t >::Invoke(5 /* System.Void System.Runtime.InteropServices.IMarshal::DisconnectObject(System.UInt32) */, IMarshal_t9798E44C73E4A0170F6E91C6FCE5FD6CAC06001C_il2cpp_TypeInfo_var, L_0, L_1);
		return;
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::System.Runtime.InteropServices.IMarshal.GetMarshalSizeMax(System.GuidU26,System.IntPtr,System.UInt32,System.IntPtr,System.UInt32,System.UInt32U26)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_GetMarshalSizeMax_m6A46F1695F97BDE4587C8CCE174FEE16A11B814B (WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22 * __this, Guid_t * ___riid0, intptr_t ___pv1, uint32_t ___dwDestContext2, intptr_t ___pvDestContext3, uint32_t ___mshlflags4, uint32_t* ___pSize5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_GetMarshalSizeMax_m6A46F1695F97BDE4587C8CCE174FEE16A11B814B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		WindowsRuntimeBuffer_EnsureHasMarshalProxy_m8EA99F1848DDC7E830545DC80A8C53983B3E0879(/*hidden argument*/NULL);
		RuntimeObject* L_0 = ((WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22_il2cpp_TypeInfo_var))->get_s_winRtMarshalProxy_0();
		Guid_t * L_1 = ___riid0;
		intptr_t L_2 = ___pv1;
		uint32_t L_3 = ___dwDestContext2;
		intptr_t L_4 = ___pvDestContext3;
		uint32_t L_5 = ___mshlflags4;
		uint32_t* L_6 = ___pSize5;
		NullCheck(L_0);
		InterfaceActionInvoker6< Guid_t *, intptr_t, uint32_t, intptr_t, uint32_t, uint32_t* >::Invoke(1 /* System.Void System.Runtime.InteropServices.IMarshal::GetMarshalSizeMax(System.Guid&,System.IntPtr,System.UInt32,System.IntPtr,System.UInt32,System.UInt32&) */, IMarshal_t9798E44C73E4A0170F6E91C6FCE5FD6CAC06001C_il2cpp_TypeInfo_var, L_0, (Guid_t *)L_1, (intptr_t)L_2, L_3, (intptr_t)L_4, L_5, (uint32_t*)L_6);
		return;
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::System.Runtime.InteropServices.IMarshal.GetUnmarshalClass(System.GuidU26,System.IntPtr,System.UInt32,System.IntPtr,System.UInt32,System.GuidU26)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_GetUnmarshalClass_mEE39B87F550E9BB968B24C873F3E2048C4C67F5A (WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22 * __this, Guid_t * ___riid0, intptr_t ___pv1, uint32_t ___dwDestContext2, intptr_t ___pvDestContext3, uint32_t ___mshlFlags4, Guid_t * ___pCid5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_GetUnmarshalClass_mEE39B87F550E9BB968B24C873F3E2048C4C67F5A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		WindowsRuntimeBuffer_EnsureHasMarshalProxy_m8EA99F1848DDC7E830545DC80A8C53983B3E0879(/*hidden argument*/NULL);
		RuntimeObject* L_0 = ((WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22_il2cpp_TypeInfo_var))->get_s_winRtMarshalProxy_0();
		Guid_t * L_1 = ___riid0;
		intptr_t L_2 = ___pv1;
		uint32_t L_3 = ___dwDestContext2;
		intptr_t L_4 = ___pvDestContext3;
		uint32_t L_5 = ___mshlFlags4;
		Guid_t * L_6 = ___pCid5;
		NullCheck(L_0);
		InterfaceActionInvoker6< Guid_t *, intptr_t, uint32_t, intptr_t, uint32_t, Guid_t * >::Invoke(0 /* System.Void System.Runtime.InteropServices.IMarshal::GetUnmarshalClass(System.Guid&,System.IntPtr,System.UInt32,System.IntPtr,System.UInt32,System.Guid&) */, IMarshal_t9798E44C73E4A0170F6E91C6FCE5FD6CAC06001C_il2cpp_TypeInfo_var, L_0, (Guid_t *)L_1, (intptr_t)L_2, L_3, (intptr_t)L_4, L_5, (Guid_t *)L_6);
		return;
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::System.Runtime.InteropServices.IMarshal.MarshalInterface(System.IntPtr,System.GuidU26,System.IntPtr,System.UInt32,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_MarshalInterface_mAFC02F5CA4608E72AB872D21D1AEAB0C9E76808B (WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22 * __this, intptr_t ___pStm0, Guid_t * ___riid1, intptr_t ___pv2, uint32_t ___dwDestContext3, intptr_t ___pvDestContext4, uint32_t ___mshlflags5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_MarshalInterface_mAFC02F5CA4608E72AB872D21D1AEAB0C9E76808B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		WindowsRuntimeBuffer_EnsureHasMarshalProxy_m8EA99F1848DDC7E830545DC80A8C53983B3E0879(/*hidden argument*/NULL);
		RuntimeObject* L_0 = ((WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22_il2cpp_TypeInfo_var))->get_s_winRtMarshalProxy_0();
		intptr_t L_1 = ___pStm0;
		Guid_t * L_2 = ___riid1;
		intptr_t L_3 = ___pv2;
		uint32_t L_4 = ___dwDestContext3;
		intptr_t L_5 = ___pvDestContext4;
		uint32_t L_6 = ___mshlflags5;
		NullCheck(L_0);
		InterfaceActionInvoker6< intptr_t, Guid_t *, intptr_t, uint32_t, intptr_t, uint32_t >::Invoke(2 /* System.Void System.Runtime.InteropServices.IMarshal::MarshalInterface(System.IntPtr,System.Guid&,System.IntPtr,System.UInt32,System.IntPtr,System.UInt32) */, IMarshal_t9798E44C73E4A0170F6E91C6FCE5FD6CAC06001C_il2cpp_TypeInfo_var, L_0, (intptr_t)L_1, (Guid_t *)L_2, (intptr_t)L_3, L_4, (intptr_t)L_5, L_6);
		return;
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::System.Runtime.InteropServices.IMarshal.ReleaseMarshalData(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_ReleaseMarshalData_m521849BEE7B8AE233B26A1BE492C4060B7BE678D (WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22 * __this, intptr_t ___pStm0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_ReleaseMarshalData_m521849BEE7B8AE233B26A1BE492C4060B7BE678D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		WindowsRuntimeBuffer_EnsureHasMarshalProxy_m8EA99F1848DDC7E830545DC80A8C53983B3E0879(/*hidden argument*/NULL);
		RuntimeObject* L_0 = ((WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22_il2cpp_TypeInfo_var))->get_s_winRtMarshalProxy_0();
		intptr_t L_1 = ___pStm0;
		NullCheck(L_0);
		InterfaceActionInvoker1< intptr_t >::Invoke(4 /* System.Void System.Runtime.InteropServices.IMarshal::ReleaseMarshalData(System.IntPtr) */, IMarshal_t9798E44C73E4A0170F6E91C6FCE5FD6CAC06001C_il2cpp_TypeInfo_var, L_0, (intptr_t)L_1);
		return;
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::System.Runtime.InteropServices.IMarshal.UnmarshalInterface(System.IntPtr,System.GuidU26,System.IntPtrU26)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_UnmarshalInterface_mB0B055B69C3BE22A68704EB42B4D0077360F59BF (WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22 * __this, intptr_t ___pStm0, Guid_t * ___riid1, intptr_t* ___ppv2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_UnmarshalInterface_mB0B055B69C3BE22A68704EB42B4D0077360F59BF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		WindowsRuntimeBuffer_EnsureHasMarshalProxy_m8EA99F1848DDC7E830545DC80A8C53983B3E0879(/*hidden argument*/NULL);
		RuntimeObject* L_0 = ((WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22_il2cpp_TypeInfo_var))->get_s_winRtMarshalProxy_0();
		intptr_t L_1 = ___pStm0;
		Guid_t * L_2 = ___riid1;
		intptr_t* L_3 = ___ppv2;
		NullCheck(L_0);
		InterfaceActionInvoker3< intptr_t, Guid_t *, intptr_t* >::Invoke(3 /* System.Void System.Runtime.InteropServices.IMarshal::UnmarshalInterface(System.IntPtr,System.Guid&,System.IntPtr&) */, IMarshal_t9798E44C73E4A0170F6E91C6FCE5FD6CAC06001C_il2cpp_TypeInfo_var, L_0, (intptr_t)L_1, (Guid_t *)L_2, (intptr_t*)L_3);
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
// Windows.Storage.Streams.IBuffer System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions::AsBuffer(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WindowsRuntimeBufferExtensions_AsBuffer_m8A7ECFC4D04B98BD389D03A8478CBCC14427650F (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___source0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___source0;
		int32_t L_1 = ___offset1;
		int32_t L_2 = ___length2;
		int32_t L_3 = ___length2;
		RuntimeObject* L_4 = WindowsRuntimeBufferExtensions_AsBuffer_m44E577DC4024FAA0BB691593F68FBD5A972CE870(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// Windows.Storage.Streams.IBuffer System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions::AsBuffer(System.Byte[],System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WindowsRuntimeBufferExtensions_AsBuffer_m44E577DC4024FAA0BB691593F68FBD5A972CE870 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___source0, int32_t ___offset1, int32_t ___length2, int32_t ___capacity3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsRuntimeBufferExtensions_AsBuffer_m44E577DC4024FAA0BB691593F68FBD5A972CE870_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___source0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, _stringLiteral828D338A9B04221C9CBE286F50CD389F68DE4ECF, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, WindowsRuntimeBufferExtensions_AsBuffer_m44E577DC4024FAA0BB691593F68FBD5A972CE870_RuntimeMethod_var);
	}

IL_000e:
	{
		int32_t L_2 = ___offset1;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_3 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6(L_3, _stringLiteral53A610E925BBC0A175E365D31241AE75AEEAD651, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, WindowsRuntimeBufferExtensions_AsBuffer_m44E577DC4024FAA0BB691593F68FBD5A972CE870_RuntimeMethod_var);
	}

IL_001d:
	{
		int32_t L_4 = ___length2;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_5 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6(L_5, _stringLiteral3D54973F528B01019A58A52D34D518405A01B891, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, NULL, WindowsRuntimeBufferExtensions_AsBuffer_m44E577DC4024FAA0BB691593F68FBD5A972CE870_RuntimeMethod_var);
	}

IL_002c:
	{
		int32_t L_6 = ___capacity3;
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_003b;
		}
	}
	{
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_7 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6(L_7, _stringLiteral7CB1F56D3FBE09E809244FC8E13671CD876E3860, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, NULL, WindowsRuntimeBufferExtensions_AsBuffer_m44E577DC4024FAA0BB691593F68FBD5A972CE870_RuntimeMethod_var);
	}

IL_003b:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_8 = ___source0;
		NullCheck(L_8);
		int32_t L_9 = ___offset1;
		int32_t L_10 = ___length2;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))), (int32_t)L_9))) >= ((int32_t)L_10)))
		{
			goto IL_004e;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_11 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_11, _stringLiteralA7512A2545D962556CA62F28AA7BD8D840985DA9, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, NULL, WindowsRuntimeBufferExtensions_AsBuffer_m44E577DC4024FAA0BB691593F68FBD5A972CE870_RuntimeMethod_var);
	}

IL_004e:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_12 = ___source0;
		NullCheck(L_12);
		int32_t L_13 = ___offset1;
		int32_t L_14 = ___capacity3;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))), (int32_t)L_13))) >= ((int32_t)L_14)))
		{
			goto IL_0061;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_15 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_15, _stringLiteralA7512A2545D962556CA62F28AA7BD8D840985DA9, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, NULL, WindowsRuntimeBufferExtensions_AsBuffer_m44E577DC4024FAA0BB691593F68FBD5A972CE870_RuntimeMethod_var);
	}

IL_0061:
	{
		int32_t L_16 = ___capacity3;
		int32_t L_17 = ___length2;
		if ((((int32_t)L_16) >= ((int32_t)L_17)))
		{
			goto IL_0070;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_18 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_18, _stringLiteral58B2D91FD6A4CD3EB40D16D2CDAA0AED435EA030, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, NULL, WindowsRuntimeBufferExtensions_AsBuffer_m44E577DC4024FAA0BB691593F68FBD5A972CE870_RuntimeMethod_var);
	}

IL_0070:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_19 = ___source0;
		int32_t L_20 = ___offset1;
		int32_t L_21 = ___length2;
		int32_t L_22 = ___capacity3;
		WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22 * L_23 = (WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22 *)il2cpp_codegen_object_new(WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22_il2cpp_TypeInfo_var);
		WindowsRuntimeBuffer__ctor_m057CF397F8500BB4BE049EF15809461062E5DC00(L_23, L_19, L_20, L_21, L_22, /*hidden argument*/NULL);
		return L_23;
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions::CopyTo(Windows.Storage.Streams.IBuffer,Windows.Storage.Streams.IBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBufferExtensions_CopyTo_m6EAD61B4D602858DC439F92678DA5EEDFA560136 (RuntimeObject* ___source0, RuntimeObject* ___destination1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsRuntimeBufferExtensions_CopyTo_m6EAD61B4D602858DC439F92678DA5EEDFA560136_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___source0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, _stringLiteral828D338A9B04221C9CBE286F50CD389F68DE4ECF, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, WindowsRuntimeBufferExtensions_CopyTo_m6EAD61B4D602858DC439F92678DA5EEDFA560136_RuntimeMethod_var);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___destination1;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_3 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_3, _stringLiteral0CF1BC84BB8BACA804F9015A158E88642D415FFA, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, WindowsRuntimeBufferExtensions_CopyTo_m6EAD61B4D602858DC439F92678DA5EEDFA560136_RuntimeMethod_var);
	}

IL_001c:
	{
		RuntimeObject* L_4 = ___source0;
		RuntimeObject* L_5 = ___destination1;
		RuntimeObject* L_6 = ___source0;
		NullCheck(L_6);
		uint32_t L_7 = InterfaceFuncInvoker0< uint32_t >::Invoke(1 /* System.UInt32 Windows.Storage.Streams.IBuffer::get_Length() */, IBuffer_t13BCDB1D6DE32F79AB9F9E149514026CA6B4AAEF_il2cpp_TypeInfo_var, L_6);
		WindowsRuntimeBufferExtensions_CopyTo_m79A250A6B56898E32F6F8697DFE3A60FDE66B19B(L_4, 0, L_5, 0, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions::CopyTo(Windows.Storage.Streams.IBuffer,System.UInt32,Windows.Storage.Streams.IBuffer,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBufferExtensions_CopyTo_m79A250A6B56898E32F6F8697DFE3A60FDE66B19B (RuntimeObject* ___source0, uint32_t ___sourceIndex1, RuntimeObject* ___destination2, uint32_t ___destinationIndex3, uint32_t ___count4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsRuntimeBufferExtensions_CopyTo_m79A250A6B56898E32F6F8697DFE3A60FDE66B19B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_0 = NULL;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	intptr_t V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		RuntimeObject* L_0 = ___source0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, _stringLiteral828D338A9B04221C9CBE286F50CD389F68DE4ECF, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, WindowsRuntimeBufferExtensions_CopyTo_m79A250A6B56898E32F6F8697DFE3A60FDE66B19B_RuntimeMethod_var);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___destination2;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_3 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_3, _stringLiteral0CF1BC84BB8BACA804F9015A158E88642D415FFA, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, WindowsRuntimeBufferExtensions_CopyTo_m79A250A6B56898E32F6F8697DFE3A60FDE66B19B_RuntimeMethod_var);
	}

IL_001c:
	{
		uint32_t L_4 = ___count4;
		if (true)
		{
			goto IL_002c;
		}
	}
	{
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_5 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6(L_5, _stringLiteralEE9F38E186BA06F57B7B74D7E626B94E13CE2556, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, NULL, WindowsRuntimeBufferExtensions_CopyTo_m79A250A6B56898E32F6F8697DFE3A60FDE66B19B_RuntimeMethod_var);
	}

IL_002c:
	{
		uint32_t L_6 = ___sourceIndex1;
		if (true)
		{
			goto IL_003b;
		}
	}
	{
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_7 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6(L_7, _stringLiteralCAEEAB05C2A175307D7167265BB744072B8D72BE, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, NULL, WindowsRuntimeBufferExtensions_CopyTo_m79A250A6B56898E32F6F8697DFE3A60FDE66B19B_RuntimeMethod_var);
	}

IL_003b:
	{
		uint32_t L_8 = ___destinationIndex3;
		if (true)
		{
			goto IL_004a;
		}
	}
	{
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_9 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6(L_9, _stringLiteralCA96269491D1B54BAE78372F8D395C9208E1C361, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, NULL, WindowsRuntimeBufferExtensions_CopyTo_m79A250A6B56898E32F6F8697DFE3A60FDE66B19B_RuntimeMethod_var);
	}

IL_004a:
	{
		RuntimeObject* L_10 = ___source0;
		NullCheck(L_10);
		uint32_t L_11 = InterfaceFuncInvoker0< uint32_t >::Invoke(0 /* System.UInt32 Windows.Storage.Streams.IBuffer::get_Capacity() */, IBuffer_t13BCDB1D6DE32F79AB9F9E149514026CA6B4AAEF_il2cpp_TypeInfo_var, L_10);
		uint32_t L_12 = ___sourceIndex1;
		if ((!(((uint32_t)L_11) <= ((uint32_t)L_12))))
		{
			goto IL_005e;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_13 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_13, _stringLiteral5DC3AD1745595D154D8ABE55B7BA1D4345987B24, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, NULL, WindowsRuntimeBufferExtensions_CopyTo_m79A250A6B56898E32F6F8697DFE3A60FDE66B19B_RuntimeMethod_var);
	}

IL_005e:
	{
		RuntimeObject* L_14 = ___source0;
		NullCheck(L_14);
		uint32_t L_15 = InterfaceFuncInvoker0< uint32_t >::Invoke(0 /* System.UInt32 Windows.Storage.Streams.IBuffer::get_Capacity() */, IBuffer_t13BCDB1D6DE32F79AB9F9E149514026CA6B4AAEF_il2cpp_TypeInfo_var, L_14);
		uint32_t L_16 = ___sourceIndex1;
		uint32_t L_17 = ___count4;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)L_16))) < ((uint32_t)L_17))))
		{
			goto IL_0075;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_18 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_18, _stringLiteral276C616C673407A8C290D65B72355DD2AA03BCF3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, NULL, WindowsRuntimeBufferExtensions_CopyTo_m79A250A6B56898E32F6F8697DFE3A60FDE66B19B_RuntimeMethod_var);
	}

IL_0075:
	{
		RuntimeObject* L_19 = ___destination2;
		NullCheck(L_19);
		uint32_t L_20 = InterfaceFuncInvoker0< uint32_t >::Invoke(0 /* System.UInt32 Windows.Storage.Streams.IBuffer::get_Capacity() */, IBuffer_t13BCDB1D6DE32F79AB9F9E149514026CA6B4AAEF_il2cpp_TypeInfo_var, L_19);
		uint32_t L_21 = ___destinationIndex3;
		if ((!(((uint32_t)L_20) <= ((uint32_t)L_21))))
		{
			goto IL_0089;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_22 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_22, _stringLiteral5DC3AD1745595D154D8ABE55B7BA1D4345987B24, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, NULL, WindowsRuntimeBufferExtensions_CopyTo_m79A250A6B56898E32F6F8697DFE3A60FDE66B19B_RuntimeMethod_var);
	}

IL_0089:
	{
		RuntimeObject* L_23 = ___destination2;
		NullCheck(L_23);
		uint32_t L_24 = InterfaceFuncInvoker0< uint32_t >::Invoke(0 /* System.UInt32 Windows.Storage.Streams.IBuffer::get_Capacity() */, IBuffer_t13BCDB1D6DE32F79AB9F9E149514026CA6B4AAEF_il2cpp_TypeInfo_var, L_23);
		uint32_t L_25 = ___destinationIndex3;
		uint32_t L_26 = ___count4;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)L_25))) < ((uint32_t)L_26))))
		{
			goto IL_00a0;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_27 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_27, _stringLiteralD8A4F1B621B23EE058344EAE0BCF400E0F478274, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_27, NULL, WindowsRuntimeBufferExtensions_CopyTo_m79A250A6B56898E32F6F8697DFE3A60FDE66B19B_RuntimeMethod_var);
	}

IL_00a0:
	{
		RuntimeObject* L_28 = ___source0;
		bool L_29 = WindowsRuntimeBufferExtensions_TryGetUnderlyingData_m4FDB38F7DC5B4E354B3D043A73E6CC55D47C2F02(L_28, (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821**)(&V_0), (int32_t*)(&V_2), /*hidden argument*/NULL);
		V_4 = L_29;
		RuntimeObject* L_30 = ___destination2;
		bool L_31 = WindowsRuntimeBufferExtensions_TryGetUnderlyingData_m4FDB38F7DC5B4E354B3D043A73E6CC55D47C2F02(L_30, (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821**)(&V_1), (int32_t*)(&V_3), /*hidden argument*/NULL);
		V_5 = L_31;
		bool L_32 = V_4;
		bool L_33 = V_5;
		if (!((int32_t)((int32_t)L_32&(int32_t)L_33)))
		{
			goto IL_00cf;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_34 = V_0;
		int32_t L_35 = V_2;
		uint32_t L_36 = ___sourceIndex1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_37 = V_1;
		int32_t L_38 = V_3;
		uint32_t L_39 = ___destinationIndex3;
		uint32_t L_40 = ___count4;
		Buffer_BlockCopy_m1F882D595976063718AF6E405664FC761924D353((RuntimeArray *)(RuntimeArray *)L_34, ((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)L_36)), (RuntimeArray *)(RuntimeArray *)L_37, ((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)L_39)), L_40, /*hidden argument*/NULL);
		return;
	}

IL_00cf:
	{
		bool L_41 = V_4;
		if (!L_41)
		{
			goto IL_00ea;
		}
	}
	{
		RuntimeObject* L_42 = ___destination2;
		uint32_t L_43 = ___destinationIndex3;
		intptr_t L_44 = WindowsRuntimeBufferExtensions_GetPointerAtOffset_m6C3741A634A9E5B437B80B297CBC3F0027C0A8A5(L_42, L_43, /*hidden argument*/NULL);
		V_6 = (intptr_t)L_44;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_45 = V_0;
		int32_t L_46 = V_2;
		uint32_t L_47 = ___sourceIndex1;
		intptr_t L_48 = V_6;
		uint32_t L_49 = ___count4;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		Marshal_Copy_m0486DFF229946F0F9E6A04DDDF3BC9E5F1609A5A(L_45, ((int32_t)il2cpp_codegen_add((int32_t)L_46, (int32_t)L_47)), (intptr_t)L_48, L_49, /*hidden argument*/NULL);
		return;
	}

IL_00ea:
	{
		bool L_50 = V_5;
		if (!L_50)
		{
			goto IL_0101;
		}
	}
	{
		RuntimeObject* L_51 = ___source0;
		uint32_t L_52 = ___sourceIndex1;
		intptr_t L_53 = WindowsRuntimeBufferExtensions_GetPointerAtOffset_m6C3741A634A9E5B437B80B297CBC3F0027C0A8A5(L_51, L_52, /*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_54 = V_1;
		int32_t L_55 = V_3;
		uint32_t L_56 = ___destinationIndex3;
		uint32_t L_57 = ___count4;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		Marshal_Copy_m64744D9E23AFC00AA06CD6B057E19B7C0CE4C0C2((intptr_t)L_53, L_54, ((int32_t)il2cpp_codegen_add((int32_t)L_55, (int32_t)L_56)), L_57, /*hidden argument*/NULL);
		return;
	}

IL_0101:
	{
		RuntimeObject* L_58 = ___source0;
		uint32_t L_59 = ___sourceIndex1;
		intptr_t L_60 = WindowsRuntimeBufferExtensions_GetPointerAtOffset_m6C3741A634A9E5B437B80B297CBC3F0027C0A8A5(L_58, L_59, /*hidden argument*/NULL);
		RuntimeObject* L_61 = ___destination2;
		uint32_t L_62 = ___destinationIndex3;
		intptr_t L_63 = WindowsRuntimeBufferExtensions_GetPointerAtOffset_m6C3741A634A9E5B437B80B297CBC3F0027C0A8A5(L_61, L_62, /*hidden argument*/NULL);
		V_6 = (intptr_t)L_63;
		intptr_t L_64 = V_6;
		uint32_t L_65 = ___count4;
		WindowsRuntimeBufferExtensions_MemCopy_m3835D54F66AEC471C41534C69772989315F78927((intptr_t)L_60, (intptr_t)L_64, L_65, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions::TryGetUnderlyingData(Windows.Storage.Streams.IBuffer,System.Byte[]U26,System.Int32U26)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsRuntimeBufferExtensions_TryGetUnderlyingData_m4FDB38F7DC5B4E354B3D043A73E6CC55D47C2F02 (RuntimeObject* ___buffer0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** ___underlyingDataArray1, int32_t* ___underlyingDataArrayStartOffset2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsRuntimeBufferExtensions_TryGetUnderlyingData_m4FDB38F7DC5B4E354B3D043A73E6CC55D47C2F02_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22 * V_0 = NULL;
	{
		RuntimeObject* L_0 = ___buffer0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, _stringLiteralE53C2EA1FE4BD2B78BF4723C7C155A578E020A25, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, WindowsRuntimeBufferExtensions_TryGetUnderlyingData_m4FDB38F7DC5B4E354B3D043A73E6CC55D47C2F02_RuntimeMethod_var);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___buffer0;
		V_0 = ((WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22 *)IsInstSealed((RuntimeObject*)L_2, WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22_il2cpp_TypeInfo_var));
		WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22 * L_3 = V_0;
		if (L_3)
		{
			goto IL_0020;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** L_4 = ___underlyingDataArray1;
		*((RuntimeObject **)L_4) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_4, (void*)(RuntimeObject *)NULL);
		int32_t* L_5 = ___underlyingDataArrayStartOffset2;
		*((int32_t*)L_5) = (int32_t)(-1);
		return (bool)0;
	}

IL_0020:
	{
		WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22 * L_6 = V_0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** L_7 = ___underlyingDataArray1;
		int32_t* L_8 = ___underlyingDataArrayStartOffset2;
		NullCheck(L_6);
		WindowsRuntimeBuffer_GetUnderlyingData_mBCC3F8E7DAC3D16C7D5DB7F363F02F451FD67D0D(L_6, (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821**)L_7, (int32_t*)L_8, /*hidden argument*/NULL);
		return (bool)1;
	}
}
// System.Boolean System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions::IsSameData(Windows.Storage.Streams.IBuffer,Windows.Storage.Streams.IBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsRuntimeBufferExtensions_IsSameData_m11E5D0B5671D2C8852413DD894003B6CE2CC6260 (RuntimeObject* ___buffer0, RuntimeObject* ___otherBuffer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsRuntimeBufferExtensions_IsSameData_m11E5D0B5671D2C8852413DD894003B6CE2CC6260_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_0 = NULL;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	RuntimeObject* V_6 = NULL;
	{
		RuntimeObject* L_0 = ___buffer0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, _stringLiteralE53C2EA1FE4BD2B78BF4723C7C155A578E020A25, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, WindowsRuntimeBufferExtensions_IsSameData_m11E5D0B5671D2C8852413DD894003B6CE2CC6260_RuntimeMethod_var);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___otherBuffer1;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return (bool)0;
	}

IL_0013:
	{
		RuntimeObject* L_3 = ___buffer0;
		RuntimeObject* L_4 = ___otherBuffer1;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(RuntimeObject*)L_4))))
		{
			goto IL_0019;
		}
	}
	{
		return (bool)1;
	}

IL_0019:
	{
		RuntimeObject* L_5 = ___buffer0;
		bool L_6 = WindowsRuntimeBufferExtensions_TryGetUnderlyingData_m4FDB38F7DC5B4E354B3D043A73E6CC55D47C2F02(L_5, (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821**)(&V_0), (int32_t*)(&V_2), /*hidden argument*/NULL);
		V_4 = L_6;
		RuntimeObject* L_7 = ___otherBuffer1;
		bool L_8 = WindowsRuntimeBufferExtensions_TryGetUnderlyingData_m4FDB38F7DC5B4E354B3D043A73E6CC55D47C2F02(L_7, (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821**)(&V_1), (int32_t*)(&V_3), /*hidden argument*/NULL);
		V_5 = L_8;
		bool L_9 = V_4;
		bool L_10 = V_5;
		if ((((int32_t)L_9) == ((int32_t)L_10)))
		{
			goto IL_0039;
		}
	}
	{
		return (bool)0;
	}

IL_0039:
	{
		bool L_11 = V_4;
		if (!L_11)
		{
			goto IL_0048;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_12 = V_0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_13 = V_1;
		if ((!(((RuntimeObject*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)L_12) == ((RuntimeObject*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)L_13))))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_14 = V_2;
		int32_t L_15 = V_3;
		return (bool)((((int32_t)L_14) == ((int32_t)L_15))? 1 : 0);
	}

IL_0046:
	{
		return (bool)0;
	}

IL_0048:
	{
		RuntimeObject* L_16 = ___buffer0;
		RuntimeObject* L_17 = ___otherBuffer1;
		V_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_17, IBufferByteAccess_tFCEF19FBAF4E19CB5BD75DC16CDE5061DC9758D7_il2cpp_TypeInfo_var));
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_16, IBufferByteAccess_tFCEF19FBAF4E19CB5BD75DC16CDE5061DC9758D7_il2cpp_TypeInfo_var)));
		intptr_t L_18 = InterfaceFuncInvoker0< intptr_t >::Invoke(0 /* System.IntPtr System.Runtime.InteropServices.WindowsRuntime.IBufferByteAccess::GetBuffer() */, IBufferByteAccess_tFCEF19FBAF4E19CB5BD75DC16CDE5061DC9758D7_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_16, IBufferByteAccess_tFCEF19FBAF4E19CB5BD75DC16CDE5061DC9758D7_il2cpp_TypeInfo_var)));
		RuntimeObject* L_19 = V_6;
		NullCheck(L_19);
		intptr_t L_20 = InterfaceFuncInvoker0< intptr_t >::Invoke(0 /* System.IntPtr System.Runtime.InteropServices.WindowsRuntime.IBufferByteAccess::GetBuffer() */, IBufferByteAccess_tFCEF19FBAF4E19CB5BD75DC16CDE5061DC9758D7_il2cpp_TypeInfo_var, L_19);
		bool L_21 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_18, (intptr_t)L_20, /*hidden argument*/NULL);
		return L_21;
	}
}
// Windows.Storage.Streams.IBuffer System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions::GetWindowsRuntimeBuffer(System.IO.MemoryStream,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WindowsRuntimeBufferExtensions_GetWindowsRuntimeBuffer_m3F14338C22A85130806184FA004EA1E0868AC147 (MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * ___underlyingStream0, int32_t ___positionInStream1, int32_t ___length2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsRuntimeBufferExtensions_GetWindowsRuntimeBuffer_m3F14338C22A85130806184FA004EA1E0868AC147_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_0 = ___underlyingStream0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, _stringLiteralE65A824D4C7FD82E16029B46CB62FF7C677CCA3D, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, WindowsRuntimeBufferExtensions_GetWindowsRuntimeBuffer_m3F14338C22A85130806184FA004EA1E0868AC147_RuntimeMethod_var);
	}

IL_000e:
	{
		int32_t L_2 = ___positionInStream1;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_3 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6(L_3, _stringLiteral0B881241160DF901C4FCFE164C2DCC43FE2DE47B, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, WindowsRuntimeBufferExtensions_GetWindowsRuntimeBuffer_m3F14338C22A85130806184FA004EA1E0868AC147_RuntimeMethod_var);
	}

IL_001d:
	{
		int32_t L_4 = ___length2;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_5 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6(L_5, _stringLiteral3D54973F528B01019A58A52D34D518405A01B891, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, NULL, WindowsRuntimeBufferExtensions_GetWindowsRuntimeBuffer_m3F14338C22A85130806184FA004EA1E0868AC147_RuntimeMethod_var);
	}

IL_002c:
	{
		MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_6 = ___underlyingStream0;
		NullCheck(L_6);
		int32_t L_7 = VirtFuncInvoker0< int32_t >::Invoke(34 /* System.Int32 System.IO.MemoryStream::get_Capacity() */, L_6);
		int32_t L_8 = ___positionInStream1;
		if ((((int32_t)L_7) > ((int32_t)L_8)))
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_9 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_9, _stringLiteralF58480FA5B5655160156C9504C0CDEEB869FD296, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, NULL, WindowsRuntimeBufferExtensions_GetWindowsRuntimeBuffer_m3F14338C22A85130806184FA004EA1E0868AC147_RuntimeMethod_var);
	}

IL_0040:
	{
		MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_10 = ___underlyingStream0;
		NullCheck(L_10);
		bool L_11 = VirtFuncInvoker1< bool, ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA * >::Invoke(33 /* System.Boolean System.IO.MemoryStream::TryGetBuffer(System.ArraySegment`1<System.Byte>&) */, L_10, (ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA *)(&V_0));
		if (L_11)
		{
			goto IL_0055;
		}
	}
	{
		UnauthorizedAccessException_tC2210A745BFDD3AE3559A87A4219E2945EEC9F75 * L_12 = (UnauthorizedAccessException_tC2210A745BFDD3AE3559A87A4219E2945EEC9F75 *)il2cpp_codegen_object_new(UnauthorizedAccessException_tC2210A745BFDD3AE3559A87A4219E2945EEC9F75_il2cpp_TypeInfo_var);
		UnauthorizedAccessException__ctor_mFE97E700E2ADBC5A46A6A43642CFA2FCB8C0BA85(L_12, _stringLiteral65C54AF7D57AD75DF46F453FD3C90E405989F966, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, NULL, WindowsRuntimeBufferExtensions_GetWindowsRuntimeBuffer_m3F14338C22A85130806184FA004EA1E0868AC147_RuntimeMethod_var);
	}

IL_0055:
	{
		int32_t L_13 = ArraySegment_1_get_Offset_m6651443913CC50A02AE5D7C4CDC6F6744D39B483((ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA *)(&V_0), /*hidden argument*/ArraySegment_1_get_Offset_m6651443913CC50A02AE5D7C4CDC6F6744D39B483_RuntimeMethod_var);
		V_1 = L_13;
		int32_t L_14 = ___length2;
		MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_15 = ___underlyingStream0;
		NullCheck(L_15);
		int32_t L_16 = VirtFuncInvoker0< int32_t >::Invoke(34 /* System.Int32 System.IO.MemoryStream::get_Capacity() */, L_15);
		int32_t L_17 = ___positionInStream1;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var);
		int32_t L_18 = Math_Min_mC950438198519FB2B0260FCB91220847EE4BB525(L_14, ((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)L_17)), /*hidden argument*/NULL);
		V_2 = L_18;
		int32_t L_19 = ___length2;
		MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_20 = ___underlyingStream0;
		NullCheck(L_20);
		int64_t L_21 = VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, L_20);
		int32_t L_22 = ___positionInStream1;
		int32_t L_23 = Math_Min_mC950438198519FB2B0260FCB91220847EE4BB525(L_19, ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)L_21))), (int32_t)L_22)), /*hidden argument*/NULL);
		int32_t L_24 = Math_Max_mA99E48BB021F2E4B62D4EA9F52EA6928EED618A2(0, L_23, /*hidden argument*/NULL);
		V_3 = L_24;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_25 = ArraySegment_1_get_Array_m41D93EFB7EAB3081C0A27ED9891E7177F5F361B7((ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA *)(&V_0), /*hidden argument*/ArraySegment_1_get_Array_m41D93EFB7EAB3081C0A27ED9891E7177F5F361B7_RuntimeMethod_var);
		int32_t L_26 = V_1;
		int32_t L_27 = ___positionInStream1;
		int32_t L_28 = V_3;
		int32_t L_29 = V_2;
		WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22 * L_30 = (WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22 *)il2cpp_codegen_object_new(WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22_il2cpp_TypeInfo_var);
		WindowsRuntimeBuffer__ctor_m057CF397F8500BB4BE049EF15809461062E5DC00(L_30, L_25, ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)L_27)), L_28, L_29, /*hidden argument*/NULL);
		return L_30;
	}
}
// System.IO.Stream System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions::AsStream(Windows.Storage.Streams.IBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * WindowsRuntimeBufferExtensions_AsStream_mB5E2DF21974CD23F3A864422B0DC0FB844BF3691 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsRuntimeBufferExtensions_AsStream_mB5E2DF21974CD23F3A864422B0DC0FB844BF3691_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___source0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, _stringLiteral828D338A9B04221C9CBE286F50CD389F68DE4ECF, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, WindowsRuntimeBufferExtensions_AsStream_mB5E2DF21974CD23F3A864422B0DC0FB844BF3691_RuntimeMethod_var);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___source0;
		bool L_3 = WindowsRuntimeBufferExtensions_TryGetUnderlyingData_m4FDB38F7DC5B4E354B3D043A73E6CC55D47C2F02(L_2, (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821**)(&V_0), (int32_t*)(&V_1), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = V_0;
		int32_t L_5 = V_1;
		RuntimeObject* L_6 = ___source0;
		NullCheck(L_6);
		uint32_t L_7 = InterfaceFuncInvoker0< uint32_t >::Invoke(0 /* System.UInt32 Windows.Storage.Streams.IBuffer::get_Capacity() */, IBuffer_t13BCDB1D6DE32F79AB9F9E149514026CA6B4AAEF_il2cpp_TypeInfo_var, L_6);
		MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_8 = (MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C *)il2cpp_codegen_object_new(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C_il2cpp_TypeInfo_var);
		MemoryStream__ctor_mD4746B0911B4445240F7E82818DA380B506E97EA(L_8, L_4, L_5, L_7, (bool)1, /*hidden argument*/NULL);
		return L_8;
	}

IL_0029:
	{
		RuntimeObject* L_9 = ___source0;
		V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)L_9, IBufferByteAccess_tFCEF19FBAF4E19CB5BD75DC16CDE5061DC9758D7_il2cpp_TypeInfo_var));
		RuntimeObject* L_10 = ___source0;
		RuntimeObject* L_11 = V_2;
		NullCheck(L_11);
		intptr_t L_12 = InterfaceFuncInvoker0< intptr_t >::Invoke(0 /* System.IntPtr System.Runtime.InteropServices.WindowsRuntime.IBufferByteAccess::GetBuffer() */, IBufferByteAccess_tFCEF19FBAF4E19CB5BD75DC16CDE5061DC9758D7_il2cpp_TypeInfo_var, L_11);
		void* L_13 = IntPtr_op_Explicit_mB8A512095BCE1A23B2840310C8A27C928ADAD027((intptr_t)L_12, /*hidden argument*/NULL);
		WindowsRuntimeBufferUnmanagedMemoryStream_t1DC0F5C0CC488E863931D7C6F1DF68ADB95DA625 * L_14 = (WindowsRuntimeBufferUnmanagedMemoryStream_t1DC0F5C0CC488E863931D7C6F1DF68ADB95DA625 *)il2cpp_codegen_object_new(WindowsRuntimeBufferUnmanagedMemoryStream_t1DC0F5C0CC488E863931D7C6F1DF68ADB95DA625_il2cpp_TypeInfo_var);
		WindowsRuntimeBufferUnmanagedMemoryStream__ctor_m28B44E02160B58BD85CA8596463059C4C0975347(L_14, L_10, (uint8_t*)(uint8_t*)L_13, /*hidden argument*/NULL);
		return L_14;
	}
}
// System.IntPtr System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions::GetPointerAtOffset(Windows.Storage.Streams.IBuffer,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t WindowsRuntimeBufferExtensions_GetPointerAtOffset_m6C3741A634A9E5B437B80B297CBC3F0027C0A8A5 (RuntimeObject* ___buffer0, uint32_t ___offset1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsRuntimeBufferExtensions_GetPointerAtOffset_m6C3741A634A9E5B437B80B297CBC3F0027C0A8A5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___buffer0;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_0, IBufferByteAccess_tFCEF19FBAF4E19CB5BD75DC16CDE5061DC9758D7_il2cpp_TypeInfo_var)));
		intptr_t L_1 = InterfaceFuncInvoker0< intptr_t >::Invoke(0 /* System.IntPtr System.Runtime.InteropServices.WindowsRuntime.IBufferByteAccess::GetBuffer() */, IBufferByteAccess_tFCEF19FBAF4E19CB5BD75DC16CDE5061DC9758D7_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_0, IBufferByteAccess_tFCEF19FBAF4E19CB5BD75DC16CDE5061DC9758D7_il2cpp_TypeInfo_var)));
		void* L_2 = IntPtr_op_Explicit_mB8A512095BCE1A23B2840310C8A27C928ADAD027((intptr_t)L_1, /*hidden argument*/NULL);
		uint32_t L_3 = ___offset1;
		intptr_t L_4;
		memset((&L_4), 0, sizeof(L_4));
		IntPtr__ctor_m6360250F4B87C6AE2F0389DA0DEE1983EED73FB6((&L_4), (void*)(void*)((void*)il2cpp_codegen_add((intptr_t)L_2, (intptr_t)(((uintptr_t)L_3)))), /*hidden argument*/NULL);
		return (intptr_t)L_4;
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions::MemCopy(System.IntPtr,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBufferExtensions_MemCopy_m3835D54F66AEC471C41534C69772989315F78927 (intptr_t ___src0, intptr_t ___dst1, uint32_t ___count2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsRuntimeBufferExtensions_MemCopy_m3835D54F66AEC471C41534C69772989315F78927_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_1 = NULL;
	{
		uint32_t L_0 = ___count2;
		if ((!(((uint32_t)L_0) > ((uint32_t)((int32_t)2147483647LL)))))
		{
			goto IL_0037;
		}
	}
	{
		intptr_t L_1 = ___src0;
		intptr_t L_2 = ___dst1;
		WindowsRuntimeBufferExtensions_MemCopy_m3835D54F66AEC471C41534C69772989315F78927((intptr_t)L_1, (intptr_t)L_2, ((int32_t)2147483647LL), /*hidden argument*/NULL);
		intptr_t L_3 = ___src0;
		intptr_t L_4 = IntPtr_op_Addition_mD815D6B36C7DFA1F89481720D3D46A6484BB9644((intptr_t)L_3, ((int32_t)2147483647LL), /*hidden argument*/NULL);
		intptr_t L_5 = ___dst1;
		intptr_t L_6 = IntPtr_op_Addition_mD815D6B36C7DFA1F89481720D3D46A6484BB9644((intptr_t)L_5, ((int32_t)2147483647LL), /*hidden argument*/NULL);
		uint32_t L_7 = ___count2;
		WindowsRuntimeBufferExtensions_MemCopy_m3835D54F66AEC471C41534C69772989315F78927((intptr_t)L_4, (intptr_t)L_6, ((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)((int32_t)2147483647LL))), /*hidden argument*/NULL);
		return;
	}

IL_0037:
	{
		uint32_t L_8 = ___count2;
		V_0 = L_8;
		int32_t L_9 = V_0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_10 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)L_9);
		V_1 = L_10;
		intptr_t L_11 = ___src0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_12 = V_1;
		int32_t L_13 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		Marshal_Copy_m64744D9E23AFC00AA06CD6B057E19B7C0CE4C0C2((intptr_t)L_11, L_12, 0, L_13, /*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_14 = V_1;
		intptr_t L_15 = ___dst1;
		int32_t L_16 = V_0;
		Marshal_Copy_m0486DFF229946F0F9E6A04DDDF3BC9E5F1609A5A(L_14, 0, (intptr_t)L_15, L_16, /*hidden argument*/NULL);
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
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions_WindowsRuntimeBufferUnmanagedMemoryStream::.ctor(Windows.Storage.Streams.IBuffer,System.Byte*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBufferUnmanagedMemoryStream__ctor_m28B44E02160B58BD85CA8596463059C4C0975347 (WindowsRuntimeBufferUnmanagedMemoryStream_t1DC0F5C0CC488E863931D7C6F1DF68ADB95DA625 * __this, RuntimeObject* ___sourceBuffer0, uint8_t* ___dataPtr1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsRuntimeBufferUnmanagedMemoryStream__ctor_m28B44E02160B58BD85CA8596463059C4C0975347_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint8_t* L_0 = ___dataPtr1;
		RuntimeObject* L_1 = ___sourceBuffer0;
		NullCheck(L_1);
		uint32_t L_2 = InterfaceFuncInvoker0< uint32_t >::Invoke(1 /* System.UInt32 Windows.Storage.Streams.IBuffer::get_Length() */, IBuffer_t13BCDB1D6DE32F79AB9F9E149514026CA6B4AAEF_il2cpp_TypeInfo_var, L_1);
		RuntimeObject* L_3 = ___sourceBuffer0;
		NullCheck(L_3);
		uint32_t L_4 = InterfaceFuncInvoker0< uint32_t >::Invoke(0 /* System.UInt32 Windows.Storage.Streams.IBuffer::get_Capacity() */, IBuffer_t13BCDB1D6DE32F79AB9F9E149514026CA6B4AAEF_il2cpp_TypeInfo_var, L_3);
		UnmanagedMemoryStream__ctor_mC84B1D4CF2D52722A4B3600392FA5AE584B2C799(__this, (uint8_t*)(uint8_t*)L_0, (((int64_t)((uint64_t)L_2))), (((int64_t)((uint64_t)L_4))), 3, /*hidden argument*/NULL);
		RuntimeObject* L_5 = ___sourceBuffer0;
		__this->set__sourceBuffer_14(L_5);
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
// System.UInt32 System.Threading.Tasks.AsyncInfoIdGenerator::CreateNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t AsyncInfoIdGenerator_CreateNext_mD4F9BEA5E88D2BD92E0CF0B7112A612B3E06285E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AsyncInfoIdGenerator_CreateNext_mD4F9BEA5E88D2BD92E0CF0B7112A612B3E06285E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F * V_0 = NULL;
	bool V_1 = false;
	uint32_t V_2 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(AsyncInfoIdGenerator_t55EA89C24441260F8C3BA5D14A724A154210BF0E_il2cpp_TypeInfo_var);
		Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F * L_0 = ((AsyncInfoIdGenerator_t55EA89C24441260F8C3BA5D14A724A154210BF0E_StaticFields*)il2cpp_codegen_static_fields_for(AsyncInfoIdGenerator_t55EA89C24441260F8C3BA5D14A724A154210BF0E_il2cpp_TypeInfo_var))->get_s_idGenerator_0();
		V_0 = L_0;
		V_1 = (bool)0;
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F * L_1 = V_0;
		Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5(L_1, (bool*)(&V_1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(AsyncInfoIdGenerator_t55EA89C24441260F8C3BA5D14A724A154210BF0E_il2cpp_TypeInfo_var);
		Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F * L_2 = ((AsyncInfoIdGenerator_t55EA89C24441260F8C3BA5D14A724A154210BF0E_StaticFields*)il2cpp_codegen_static_fields_for(AsyncInfoIdGenerator_t55EA89C24441260F8C3BA5D14A724A154210BF0E_il2cpp_TypeInfo_var))->get_s_idGenerator_0();
		NullCheck(L_2);
		int32_t L_3 = VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(6 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_2, 1, ((int32_t)2147483647LL));
		V_2 = L_3;
		IL2CPP_LEAVE(0x2D, FINALLY_0023);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0023;
	}

FINALLY_0023:
	{ // begin finally (depth: 1)
		{
			bool L_4 = V_1;
			if (!L_4)
			{
				goto IL_002c;
			}
		}

IL_0026:
		{
			Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F * L_5 = V_0;
			Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_5, /*hidden argument*/NULL);
		}

IL_002c:
		{
			IL2CPP_RESET_LEAVE(0x2D);
			IL2CPP_END_FINALLY(35)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(35)
	{
		IL2CPP_JUMP_TBL(0x2D, IL_002d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_002d:
	{
		uint32_t L_6 = V_2;
		return L_6;
	}
}
// System.UInt32 System.Threading.Tasks.AsyncInfoIdGenerator::EnsureInitializedThreadsafe(System.UInt32U26)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t AsyncInfoIdGenerator_EnsureInitializedThreadsafe_m8B7055212D6AAAD782FC163797AB67BE11D07C5E (uint32_t* ___id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AsyncInfoIdGenerator_EnsureInitializedThreadsafe_m8B7055212D6AAAD782FC163797AB67BE11D07C5E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		uint32_t* L_0 = ___id0;
		int32_t L_1 = *((uint32_t*)L_0);
		if ((((int32_t)L_1) == ((int32_t)((int32_t)2147483647LL))))
		{
			goto IL_000c;
		}
	}
	{
		uint32_t* L_2 = ___id0;
		int32_t L_3 = *((uint32_t*)L_2);
		return L_3;
	}

IL_000c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(AsyncInfoIdGenerator_t55EA89C24441260F8C3BA5D14A724A154210BF0E_il2cpp_TypeInfo_var);
		uint32_t L_4 = AsyncInfoIdGenerator_CreateNext_mD4F9BEA5E88D2BD92E0CF0B7112A612B3E06285E(/*hidden argument*/NULL);
		V_0 = L_4;
		uint32_t* L_5 = ___id0;
		V_1 = (uint32_t*)L_5;
		uint32_t* L_6 = V_1;
		uint32_t L_7 = V_0;
		int32_t L_8 = Interlocked_CompareExchange_mD830160E95D6C589AD31EE9DC8D19BD4A8DCDC03((int32_t*)(((uintptr_t)L_6)), L_7, ((int32_t)2147483647LL), /*hidden argument*/NULL);
		V_2 = L_8;
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)2147483647LL)))))
		{
			goto IL_002c;
		}
	}
	{
		uint32_t L_10 = V_0;
		return L_10;
	}

IL_002c:
	{
		uint32_t L_11 = V_2;
		return L_11;
	}
}
// System.Void System.Threading.Tasks.AsyncInfoIdGenerator::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncInfoIdGenerator__cctor_m0160C31D854AFE61A802EB0ADB2E00E85AC90B10 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AsyncInfoIdGenerator__cctor_m0160C31D854AFE61A802EB0ADB2E00E85AC90B10_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F * L_0 = (Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F *)il2cpp_codegen_object_new(Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F_il2cpp_TypeInfo_var);
		Random__ctor_mDD202982FB7CEDE3F31824E919AD2BFA6D66BA27(L_0, ((int32_t)19830118), /*hidden argument*/NULL);
		((AsyncInfoIdGenerator_t55EA89C24441260F8C3BA5D14A724A154210BF0E_StaticFields*)il2cpp_codegen_static_fields_for(AsyncInfoIdGenerator_t55EA89C24441260F8C3BA5D14A724A154210BF0E_il2cpp_TypeInfo_var))->set_s_idGenerator_0(L_0);
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
// System.Void System.Threading.Tasks.ExceptionDispatchHelper::ThrowAsync(System.Exception,System.Threading.SynchronizationContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDispatchHelper_ThrowAsync_m2F6A6A11D813192180D84E5EDEEF6A5411729253 (Exception_t * ___exception0, SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7 * ___targetContext1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExceptionDispatchHelper_ThrowAsync_m2F6A6A11D813192180D84E5EDEEF6A5411729253_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ExceptionDispatchInfo_t0C54083F3909DAF986A4DEAA7C047559531E0E2A * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	SendOrPostCallback_t3F9C0164860E4AA5138DF8B4488DFB0D33147F01 * G_B5_0 = NULL;
	SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7 * G_B5_1 = NULL;
	SendOrPostCallback_t3F9C0164860E4AA5138DF8B4488DFB0D33147F01 * G_B4_0 = NULL;
	SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7 * G_B4_1 = NULL;
	SendOrPostCallback_t3F9C0164860E4AA5138DF8B4488DFB0D33147F01 * G_B11_0 = NULL;
	SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7 * G_B11_1 = NULL;
	SendOrPostCallback_t3F9C0164860E4AA5138DF8B4488DFB0D33147F01 * G_B10_0 = NULL;
	SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7 * G_B10_1 = NULL;
	{
		Exception_t * L_0 = ___exception0;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		return;
	}

IL_0004:
	{
		Exception_t * L_1 = ___exception0;
		ExceptionDispatchInfo_t0C54083F3909DAF986A4DEAA7C047559531E0E2A * L_2 = ExceptionDispatchInfo_Capture_m8E5F721466EDFE9AA8BC532F9AE7A859E0766E23(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7 * L_3 = ___targetContext1;
		if (!L_3)
		{
			goto IL_0041;
		}
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7 * L_4 = ___targetContext1;
			IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t91FD53796C718A16C4B6E8D317F8FE03125A2DA8_il2cpp_TypeInfo_var);
			SendOrPostCallback_t3F9C0164860E4AA5138DF8B4488DFB0D33147F01 * L_5 = ((U3CU3Ec_t91FD53796C718A16C4B6E8D317F8FE03125A2DA8_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t91FD53796C718A16C4B6E8D317F8FE03125A2DA8_il2cpp_TypeInfo_var))->get_U3CU3E9__0_0_1();
			SendOrPostCallback_t3F9C0164860E4AA5138DF8B4488DFB0D33147F01 * L_6 = L_5;
			G_B4_0 = L_6;
			G_B4_1 = L_4;
			if (L_6)
			{
				G_B5_0 = L_6;
				G_B5_1 = L_4;
				goto IL_002e;
			}
		}

IL_0017:
		{
			IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t91FD53796C718A16C4B6E8D317F8FE03125A2DA8_il2cpp_TypeInfo_var);
			U3CU3Ec_t91FD53796C718A16C4B6E8D317F8FE03125A2DA8 * L_7 = ((U3CU3Ec_t91FD53796C718A16C4B6E8D317F8FE03125A2DA8_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t91FD53796C718A16C4B6E8D317F8FE03125A2DA8_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
			SendOrPostCallback_t3F9C0164860E4AA5138DF8B4488DFB0D33147F01 * L_8 = (SendOrPostCallback_t3F9C0164860E4AA5138DF8B4488DFB0D33147F01 *)il2cpp_codegen_object_new(SendOrPostCallback_t3F9C0164860E4AA5138DF8B4488DFB0D33147F01_il2cpp_TypeInfo_var);
			SendOrPostCallback__ctor_mA3A6885EC5474314128A4FDE77E93F8B7EEC2619(L_8, L_7, (intptr_t)((intptr_t)U3CU3Ec_U3CThrowAsyncU3Eb__0_0_m7E81F2FB2E8DCA066244624DA953798D574F1AEB_RuntimeMethod_var), /*hidden argument*/NULL);
			SendOrPostCallback_t3F9C0164860E4AA5138DF8B4488DFB0D33147F01 * L_9 = L_8;
			((U3CU3Ec_t91FD53796C718A16C4B6E8D317F8FE03125A2DA8_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t91FD53796C718A16C4B6E8D317F8FE03125A2DA8_il2cpp_TypeInfo_var))->set_U3CU3E9__0_0_1(L_9);
			G_B5_0 = L_9;
			G_B5_1 = G_B4_1;
		}

IL_002e:
		{
			ExceptionDispatchInfo_t0C54083F3909DAF986A4DEAA7C047559531E0E2A * L_10 = V_0;
			NullCheck(G_B5_1);
			VirtActionInvoker2< SendOrPostCallback_t3F9C0164860E4AA5138DF8B4488DFB0D33147F01 *, RuntimeObject * >::Invoke(5 /* System.Void System.Threading.SynchronizationContext::Post(System.Threading.SendOrPostCallback,System.Object) */, G_B5_1, G_B5_0, L_10);
			goto IL_0040;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0036;
		throw e;
	}

CATCH_0036:
	{ // begin catch(System.Object)
		Exception_t * L_11 = ___exception0;
		ExceptionDispatchHelper_ThrowAsync_m2F6A6A11D813192180D84E5EDEEF6A5411729253(L_11, (SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7 *)NULL, /*hidden argument*/NULL);
		goto IL_0040;
	} // end catch (depth: 1)

IL_0040:
	{
		return;
	}

IL_0041:
	{
		V_1 = (bool)1;
	}

IL_0043:
	try
	{ // begin try (depth: 1)
		{
			SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7 * L_12 = (SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7 *)il2cpp_codegen_object_new(SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7_il2cpp_TypeInfo_var);
			SynchronizationContext__ctor_mC7C5F426C3450ACA409B5FE89E961EB8E5047512(L_12, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t91FD53796C718A16C4B6E8D317F8FE03125A2DA8_il2cpp_TypeInfo_var);
			SendOrPostCallback_t3F9C0164860E4AA5138DF8B4488DFB0D33147F01 * L_13 = ((U3CU3Ec_t91FD53796C718A16C4B6E8D317F8FE03125A2DA8_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t91FD53796C718A16C4B6E8D317F8FE03125A2DA8_il2cpp_TypeInfo_var))->get_U3CU3E9__0_1_2();
			SendOrPostCallback_t3F9C0164860E4AA5138DF8B4488DFB0D33147F01 * L_14 = L_13;
			G_B10_0 = L_14;
			G_B10_1 = L_12;
			if (L_14)
			{
				G_B11_0 = L_14;
				G_B11_1 = L_12;
				goto IL_0067;
			}
		}

IL_0050:
		{
			IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t91FD53796C718A16C4B6E8D317F8FE03125A2DA8_il2cpp_TypeInfo_var);
			U3CU3Ec_t91FD53796C718A16C4B6E8D317F8FE03125A2DA8 * L_15 = ((U3CU3Ec_t91FD53796C718A16C4B6E8D317F8FE03125A2DA8_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t91FD53796C718A16C4B6E8D317F8FE03125A2DA8_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
			SendOrPostCallback_t3F9C0164860E4AA5138DF8B4488DFB0D33147F01 * L_16 = (SendOrPostCallback_t3F9C0164860E4AA5138DF8B4488DFB0D33147F01 *)il2cpp_codegen_object_new(SendOrPostCallback_t3F9C0164860E4AA5138DF8B4488DFB0D33147F01_il2cpp_TypeInfo_var);
			SendOrPostCallback__ctor_mA3A6885EC5474314128A4FDE77E93F8B7EEC2619(L_16, L_15, (intptr_t)((intptr_t)U3CU3Ec_U3CThrowAsyncU3Eb__0_1_mF770BC3A2CAB8D6FA854F629FFD668408AEBA176_RuntimeMethod_var), /*hidden argument*/NULL);
			SendOrPostCallback_t3F9C0164860E4AA5138DF8B4488DFB0D33147F01 * L_17 = L_16;
			((U3CU3Ec_t91FD53796C718A16C4B6E8D317F8FE03125A2DA8_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t91FD53796C718A16C4B6E8D317F8FE03125A2DA8_il2cpp_TypeInfo_var))->set_U3CU3E9__0_1_2(L_17);
			G_B11_0 = L_17;
			G_B11_1 = G_B10_1;
		}

IL_0067:
		{
			ExceptionDispatchInfo_t0C54083F3909DAF986A4DEAA7C047559531E0E2A * L_18 = V_0;
			NullCheck(G_B11_1);
			VirtActionInvoker2< SendOrPostCallback_t3F9C0164860E4AA5138DF8B4488DFB0D33147F01 *, RuntimeObject * >::Invoke(5 /* System.Void System.Threading.SynchronizationContext::Post(System.Threading.SendOrPostCallback,System.Object) */, G_B11_1, G_B11_0, L_18);
			goto IL_0074;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_006f;
		throw e;
	}

CATCH_006f:
	{ // begin catch(System.Object)
		V_1 = (bool)0;
		goto IL_0074;
	} // end catch (depth: 1)

IL_0074:
	{
		bool L_19 = V_1;
		if (L_19)
		{
			goto IL_007d;
		}
	}
	{
		ExceptionDispatchInfo_t0C54083F3909DAF986A4DEAA7C047559531E0E2A * L_20 = V_0;
		NullCheck(L_20);
		ExceptionDispatchInfo_Throw_m9630C06EF8D7CDF5BD5DC76144CD98C4D9E8D26F(L_20, /*hidden argument*/NULL);
	}

IL_007d:
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
// System.Void System.Threading.Tasks.ExceptionDispatchHelper_<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mC2AE3130C3434353465BEDA10C3C5D3553E06611 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_mC2AE3130C3434353465BEDA10C3C5D3553E06611_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t91FD53796C718A16C4B6E8D317F8FE03125A2DA8 * L_0 = (U3CU3Ec_t91FD53796C718A16C4B6E8D317F8FE03125A2DA8 *)il2cpp_codegen_object_new(U3CU3Ec_t91FD53796C718A16C4B6E8D317F8FE03125A2DA8_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mD4CB97B8F69D13F5E101436076591307254C7C3D(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t91FD53796C718A16C4B6E8D317F8FE03125A2DA8_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t91FD53796C718A16C4B6E8D317F8FE03125A2DA8_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void System.Threading.Tasks.ExceptionDispatchHelper_<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mD4CB97B8F69D13F5E101436076591307254C7C3D (U3CU3Ec_t91FD53796C718A16C4B6E8D317F8FE03125A2DA8 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Tasks.ExceptionDispatchHelper_<>c::<ThrowAsync>b__0_0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CThrowAsyncU3Eb__0_0_m7E81F2FB2E8DCA066244624DA953798D574F1AEB (U3CU3Ec_t91FD53796C718A16C4B6E8D317F8FE03125A2DA8 * __this, RuntimeObject * ___edi0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CThrowAsyncU3Eb__0_0_m7E81F2FB2E8DCA066244624DA953798D574F1AEB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___edi0;
		NullCheck(((ExceptionDispatchInfo_t0C54083F3909DAF986A4DEAA7C047559531E0E2A *)CastclassSealed((RuntimeObject*)L_0, ExceptionDispatchInfo_t0C54083F3909DAF986A4DEAA7C047559531E0E2A_il2cpp_TypeInfo_var)));
		ExceptionDispatchInfo_Throw_m9630C06EF8D7CDF5BD5DC76144CD98C4D9E8D26F(((ExceptionDispatchInfo_t0C54083F3909DAF986A4DEAA7C047559531E0E2A *)CastclassSealed((RuntimeObject*)L_0, ExceptionDispatchInfo_t0C54083F3909DAF986A4DEAA7C047559531E0E2A_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Tasks.ExceptionDispatchHelper_<>c::<ThrowAsync>b__0_1(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CThrowAsyncU3Eb__0_1_mF770BC3A2CAB8D6FA854F629FFD668408AEBA176 (U3CU3Ec_t91FD53796C718A16C4B6E8D317F8FE03125A2DA8 * __this, RuntimeObject * ___edi0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CThrowAsyncU3Eb__0_1_mF770BC3A2CAB8D6FA854F629FFD668408AEBA176_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___edi0;
		NullCheck(((ExceptionDispatchInfo_t0C54083F3909DAF986A4DEAA7C047559531E0E2A *)CastclassSealed((RuntimeObject*)L_0, ExceptionDispatchInfo_t0C54083F3909DAF986A4DEAA7C047559531E0E2A_il2cpp_TypeInfo_var)));
		ExceptionDispatchInfo_Throw_m9630C06EF8D7CDF5BD5DC76144CD98C4D9E8D26F(((ExceptionDispatchInfo_t0C54083F3909DAF986A4DEAA7C047559531E0E2A *)CastclassSealed((RuntimeObject*)L_0, ExceptionDispatchInfo_t0C54083F3909DAF986A4DEAA7C047559531E0E2A_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
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
// System.Void System.Threading.Tasks.TaskToAsyncActionAdapter::GetResults()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskToAsyncActionAdapter_GetResults_m507FE1CE48032133AA7ADA483475806B3D2C51F6 (TaskToAsyncActionAdapter_t1498B22A4F941563A016F194BD85FBFA44C4528C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TaskToAsyncActionAdapter_GetResults_m507FE1CE48032133AA7ADA483475806B3D2C51F6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TaskToAsyncInfoAdapter_4_GetResultsInternal_mF43000DAD4E9558371BBAE8BA101B0AACA1CC91E(__this, /*hidden argument*/TaskToAsyncInfoAdapter_4_GetResultsInternal_mF43000DAD4E9558371BBAE8BA101B0AACA1CC91E_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Threading.Tasks.TaskToAsyncActionAdapter::OnCompleted(Windows.Foundation.AsyncActionCompletedHandler,Windows.Foundation.AsyncStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskToAsyncActionAdapter_OnCompleted_m6285538803AC8D0E9837F8C5C0295BDC925447B5 (TaskToAsyncActionAdapter_t1498B22A4F941563A016F194BD85FBFA44C4528C * __this, AsyncActionCompletedHandler_t1820A7A20AA2CF935463CD8EB21800005EFE488D * ___userCompletionHandler0, int32_t ___asyncStatus1, const RuntimeMethod* method)
{
	{
		AsyncActionCompletedHandler_t1820A7A20AA2CF935463CD8EB21800005EFE488D * L_0 = ___userCompletionHandler0;
		int32_t L_1 = ___asyncStatus1;
		NullCheck(L_0);
		AsyncActionCompletedHandler_Invoke_m90ED997977A5C94AE5F5CB92A629FE2EDFA3D466(L_0, __this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Tasks.TaskToAsyncActionAdapter::Windows.Foundation.IAsyncAction.put_Completed(Windows.Foundation.AsyncActionCompletedHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskToAsyncActionAdapter_Windows_Foundation_IAsyncAction_put_Completed_m18D923DB9F07206F028620EA470EDBCDF65F1168 (TaskToAsyncActionAdapter_t1498B22A4F941563A016F194BD85FBFA44C4528C * __this, AsyncActionCompletedHandler_t1820A7A20AA2CF935463CD8EB21800005EFE488D * ___handler0, const RuntimeMethod* method)
{
	{
		AsyncActionCompletedHandler_t1820A7A20AA2CF935463CD8EB21800005EFE488D * L_0 = ___handler0;
		VirtActionInvoker1< AsyncActionCompletedHandler_t1820A7A20AA2CF935463CD8EB21800005EFE488D * >::Invoke(13 /* System.Void System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncActionCompletedHandler,System.VoidReferenceTypeParameter,System.VoidValueTypeParameter,System.VoidValueTypeParameter>::set_Completed(TCompletedHandler) */, __this, L_0);
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
// System.Void System.WindowsRuntimeSystemExtensions::ConcatenateCancelTokens(System.Threading.CancellationToken,System.Threading.CancellationTokenSource,System.Threading.Tasks.Task)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeSystemExtensions_ConcatenateCancelTokens_mE6D63868E79DE3EBCC91E8BC0BBF73D12E31E4D9 (CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  ___source0, CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * ___sink1, Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___concatenationLifetime2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsRuntimeSystemExtensions_ConcatenateCancelTokens_mE6D63868E79DE3EBCC91E8BC0BBF73D12E31E4D9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * G_B2_0 = NULL;
	CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB * G_B2_1 = NULL;
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * G_B1_0 = NULL;
	CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB * G_B1_1 = NULL;
	Action_2_tC5CBC473593FC52892A3A27575658B0C050584D8 * G_B4_0 = NULL;
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * G_B4_1 = NULL;
	Action_2_tC5CBC473593FC52892A3A27575658B0C050584D8 * G_B3_0 = NULL;
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * G_B3_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E_il2cpp_TypeInfo_var);
		Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * L_0 = ((U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E_il2cpp_TypeInfo_var))->get_U3CU3E9__0_0_1();
		Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = (&___source0);
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = (&___source0);
			goto IL_0021;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E_il2cpp_TypeInfo_var);
		U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E * L_2 = ((U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * L_3 = (Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 *)il2cpp_codegen_object_new(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0_il2cpp_TypeInfo_var);
		Action_1__ctor_mAFC7442D9D3CEC6701C3C5599F8CF12476095510(L_3, L_2, (intptr_t)((intptr_t)U3CU3Ec_U3CConcatenateCancelTokensU3Eb__0_0_mD2C070F430A2E1950C85E28ED328545E22E50AFB_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mAFC7442D9D3CEC6701C3C5599F8CF12476095510_RuntimeMethod_var);
		Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * L_4 = L_3;
		((U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E_il2cpp_TypeInfo_var))->set_U3CU3E9__0_0_1(L_4);
		G_B2_0 = L_4;
		G_B2_1 = G_B1_1;
	}

IL_0021:
	{
		CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * L_5 = ___sink1;
		CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2  L_6 = CancellationToken_Register_mA4F60EC40A8B9EB0239341CE450F6BE2CEFA8931((CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB *)G_B2_1, G_B2_0, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * L_7 = ___concatenationLifetime2;
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E_il2cpp_TypeInfo_var);
		Action_2_tC5CBC473593FC52892A3A27575658B0C050584D8 * L_8 = ((U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E_il2cpp_TypeInfo_var))->get_U3CU3E9__0_1_2();
		Action_2_tC5CBC473593FC52892A3A27575658B0C050584D8 * L_9 = L_8;
		G_B3_0 = L_9;
		G_B3_1 = L_7;
		if (L_9)
		{
			G_B4_0 = L_9;
			G_B4_1 = L_7;
			goto IL_0048;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E_il2cpp_TypeInfo_var);
		U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E * L_10 = ((U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Action_2_tC5CBC473593FC52892A3A27575658B0C050584D8 * L_11 = (Action_2_tC5CBC473593FC52892A3A27575658B0C050584D8 *)il2cpp_codegen_object_new(Action_2_tC5CBC473593FC52892A3A27575658B0C050584D8_il2cpp_TypeInfo_var);
		Action_2__ctor_m58B3F295A5FFFD735D3E3C72214C7CF4476317E5(L_11, L_10, (intptr_t)((intptr_t)U3CU3Ec_U3CConcatenateCancelTokensU3Eb__0_1_mF440B6D95BB892E1298E16F45195EC36D4AF82DC_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m58B3F295A5FFFD735D3E3C72214C7CF4476317E5_RuntimeMethod_var);
		Action_2_tC5CBC473593FC52892A3A27575658B0C050584D8 * L_12 = L_11;
		((U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E_il2cpp_TypeInfo_var))->set_U3CU3E9__0_1_2(L_12);
		G_B4_0 = L_12;
		G_B4_1 = G_B3_1;
	}

IL_0048:
	{
		CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2  L_13 = V_0;
		CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2  L_14 = L_13;
		RuntimeObject * L_15 = Box(CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2_il2cpp_TypeInfo_var, &L_14);
		IL2CPP_RUNTIME_CLASS_INIT(CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB_il2cpp_TypeInfo_var);
		CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  L_16 = CancellationToken_get_None_m008D4CF5E11172703A6D781A3C30E6E537004F1D(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114_il2cpp_TypeInfo_var);
		TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * L_17 = TaskScheduler_get_Default_mC3794A546EB0F4C6D0A11E72F8939EC364733C87(/*hidden argument*/NULL);
		NullCheck(G_B4_1);
		Task_ContinueWith_m77623659683CA3E09520D79D60D8A04214E4CE5A(G_B4_1, G_B4_0, L_15, L_16, ((int32_t)524288), L_17, /*hidden argument*/NULL);
		return;
	}
}
// System.Runtime.CompilerServices.TaskAwaiter System.WindowsRuntimeSystemExtensions::GetAwaiter(Windows.Foundation.IAsyncAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  WindowsRuntimeSystemExtensions_GetAwaiter_m1E46B83D2D5BEE385305CFFD9496572784AB5D2C (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___source0;
		Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * L_1 = WindowsRuntimeSystemExtensions_AsTask_m5D87CC8E008C9C3A4DC66F6BD108691CF8119ED1(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  L_2 = Task_GetAwaiter_m73027D5E4C16E961C658B83526BED8E32FD2AC6C(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Threading.Tasks.Task System.WindowsRuntimeSystemExtensions::AsTask(Windows.Foundation.IAsyncAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * WindowsRuntimeSystemExtensions_AsTask_m5D87CC8E008C9C3A4DC66F6BD108691CF8119ED1 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsRuntimeSystemExtensions_AsTask_m5D87CC8E008C9C3A4DC66F6BD108691CF8119ED1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___source0;
		IL2CPP_RUNTIME_CLASS_INIT(CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB_il2cpp_TypeInfo_var);
		CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  L_1 = CancellationToken_get_None_m008D4CF5E11172703A6D781A3C30E6E537004F1D(/*hidden argument*/NULL);
		Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * L_2 = WindowsRuntimeSystemExtensions_AsTask_m72AC4CCE64FA5914EF4CC7826C969C80BC5CCC3D(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Threading.Tasks.Task System.WindowsRuntimeSystemExtensions::AsTask(Windows.Foundation.IAsyncAction,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * WindowsRuntimeSystemExtensions_AsTask_m72AC4CCE64FA5914EF4CC7826C969C80BC5CCC3D (RuntimeObject* ___source0, CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  ___cancellationToken1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsRuntimeSystemExtensions_AsTask_m72AC4CCE64FA5914EF4CC7826C969C80BC5CCC3D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TaskToAsyncActionAdapter_t1498B22A4F941563A016F194BD85FBFA44C4528C * V_0 = NULL;
	AsyncInfoToTaskBridge_1_tFF70BDD04454A6EBC5FE97283B11BB664C836B27 * V_1 = NULL;
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * V_2 = NULL;
	int32_t V_3 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  G_B16_0;
	memset((&G_B16_0), 0, sizeof(G_B16_0));
	{
		RuntimeObject* L_0 = ___source0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, _stringLiteral828D338A9B04221C9CBE286F50CD389F68DE4ECF, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, WindowsRuntimeSystemExtensions_AsTask_m72AC4CCE64FA5914EF4CC7826C969C80BC5CCC3D_RuntimeMethod_var);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___source0;
		V_0 = ((TaskToAsyncActionAdapter_t1498B22A4F941563A016F194BD85FBFA44C4528C *)IsInstClass((RuntimeObject*)L_2, TaskToAsyncActionAdapter_t1498B22A4F941563A016F194BD85FBFA44C4528C_il2cpp_TypeInfo_var));
		TaskToAsyncActionAdapter_t1498B22A4F941563A016F194BD85FBFA44C4528C * L_3 = V_0;
		if (!L_3)
		{
			goto IL_004f;
		}
	}
	{
		TaskToAsyncActionAdapter_t1498B22A4F941563A016F194BD85FBFA44C4528C * L_4 = V_0;
		NullCheck(L_4);
		bool L_5 = TaskToAsyncInfoAdapter_4_get_CompletedSynchronously_mC67FCE18ECC4CB0A3E87766A7EBD5AA5B155406B(L_4, /*hidden argument*/TaskToAsyncInfoAdapter_4_get_CompletedSynchronously_mC67FCE18ECC4CB0A3E87766A7EBD5AA5B155406B_RuntimeMethod_var);
		if (L_5)
		{
			goto IL_004f;
		}
	}
	{
		TaskToAsyncActionAdapter_t1498B22A4F941563A016F194BD85FBFA44C4528C * L_6 = V_0;
		NullCheck(L_6);
		Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * L_7 = TaskToAsyncInfoAdapter_4_get_Task_mC4F1D9CF70B7D90F5E5E5FC6B9A16895D6CE5053(L_6, /*hidden argument*/TaskToAsyncInfoAdapter_4_get_Task_mC4F1D9CF70B7D90F5E5E5FC6B9A16895D6CE5053_RuntimeMethod_var);
		V_2 = L_7;
		Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * L_8 = V_2;
		NullCheck(L_8);
		bool L_9 = Task_get_IsCompleted_mA675F47CE1DBD1948BDC9215DCAE93F07FC32E19(L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_004d;
		}
	}
	{
		bool L_10 = CancellationToken_get_CanBeCanceled_m485B6A386A628048A15D607330E91582012C59EF((CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB *)(&___cancellationToken1), /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_004d;
		}
	}
	{
		TaskToAsyncActionAdapter_t1498B22A4F941563A016F194BD85FBFA44C4528C * L_11 = V_0;
		NullCheck(L_11);
		CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * L_12 = TaskToAsyncInfoAdapter_4_get_CancelTokenSource_mE43B201053633B912705D401B7DE5EA95B7823E6(L_11, /*hidden argument*/TaskToAsyncInfoAdapter_4_get_CancelTokenSource_mE43B201053633B912705D401B7DE5EA95B7823E6_RuntimeMethod_var);
		if (!L_12)
		{
			goto IL_004d;
		}
	}
	{
		CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  L_13 = ___cancellationToken1;
		TaskToAsyncActionAdapter_t1498B22A4F941563A016F194BD85FBFA44C4528C * L_14 = V_0;
		NullCheck(L_14);
		CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * L_15 = TaskToAsyncInfoAdapter_4_get_CancelTokenSource_mE43B201053633B912705D401B7DE5EA95B7823E6(L_14, /*hidden argument*/TaskToAsyncInfoAdapter_4_get_CancelTokenSource_mE43B201053633B912705D401B7DE5EA95B7823E6_RuntimeMethod_var);
		Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * L_16 = V_2;
		WindowsRuntimeSystemExtensions_ConcatenateCancelTokens_mE6D63868E79DE3EBCC91E8BC0BBF73D12E31E4D9(L_13, L_15, L_16, /*hidden argument*/NULL);
	}

IL_004d:
	{
		Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * L_17 = V_2;
		return L_17;
	}

IL_004f:
	{
		RuntimeObject* L_18 = ___source0;
		NullCheck(L_18);
		int32_t L_19 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* Windows.Foundation.AsyncStatus Windows.Foundation.IAsyncInfo::get_Status() */, IAsyncInfo_t9B58E0D0A013D06029CDEAE127A910A69D13FBB5_il2cpp_TypeInfo_var, L_18);
		V_3 = L_19;
		int32_t L_20 = V_3;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_20, (int32_t)1)))
		{
			case 0:
			{
				goto IL_006c;
			}
			case 1:
			{
				goto IL_0083;
			}
			case 2:
			{
				goto IL_0072;
			}
		}
	}
	{
		goto IL_009b;
	}

IL_006c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_il2cpp_TypeInfo_var);
		Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * L_21 = Task_get_CompletedTask_mBB0764E7FDE04E900FFBE5B1BE6B815193681E86(/*hidden argument*/NULL);
		return L_21;
	}

IL_0072:
	{
		RuntimeObject* L_22 = ___source0;
		NullCheck(L_22);
		Exception_t * L_23 = InterfaceFuncInvoker0< Exception_t * >::Invoke(2 /* System.Exception Windows.Foundation.IAsyncInfo::get_ErrorCode() */, IAsyncInfo_t9B58E0D0A013D06029CDEAE127A910A69D13FBB5_il2cpp_TypeInfo_var, L_22);
		Exception_t * L_24 = WindowsRuntimeSystemExtensions_AttachRestrictedErrorInfo_mF39F00CA42F45D3F2EB5B8DB5B450C55A206113C(L_23, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_il2cpp_TypeInfo_var);
		Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * L_25 = Task_FromException_m8D8A19D1CF4B424A3B48F49C7150496075038E54(L_24, /*hidden argument*/NULL);
		return L_25;
	}

IL_0083:
	{
		bool L_26 = CancellationToken_get_IsCancellationRequested_mCF3521778F20F7048B7121885794B9562324447D((CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB *)(&___cancellationToken1), /*hidden argument*/NULL);
		if (L_26)
		{
			goto IL_0094;
		}
	}
	{
		CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  L_27;
		memset((&L_27), 0, sizeof(L_27));
		CancellationToken__ctor_mEEC34A64046AD7A84BEA348A2F1AE72C9F483C7E((&L_27), (bool)1, /*hidden argument*/NULL);
		G_B16_0 = L_27;
		goto IL_0095;
	}

IL_0094:
	{
		CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  L_28 = ___cancellationToken1;
		G_B16_0 = L_28;
	}

IL_0095:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_il2cpp_TypeInfo_var);
		Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * L_29 = Task_FromCanceled_m271AC674539E764A1F220D15E63EDB7D989841E5(G_B16_0, /*hidden argument*/NULL);
		return L_29;
	}

IL_009b:
	{
		CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  L_30 = ___cancellationToken1;
		AsyncInfoToTaskBridge_1_tFF70BDD04454A6EBC5FE97283B11BB664C836B27 * L_31 = (AsyncInfoToTaskBridge_1_tFF70BDD04454A6EBC5FE97283B11BB664C836B27 *)il2cpp_codegen_object_new(AsyncInfoToTaskBridge_1_tFF70BDD04454A6EBC5FE97283B11BB664C836B27_il2cpp_TypeInfo_var);
		AsyncInfoToTaskBridge_1__ctor_mF7CD592EF952F225806871F14672CE77BDDAB0C4(L_31, L_30, /*hidden argument*/AsyncInfoToTaskBridge_1__ctor_mF7CD592EF952F225806871F14672CE77BDDAB0C4_RuntimeMethod_var);
		V_1 = L_31;
	}

IL_00a2:
	try
	{ // begin try (depth: 1)
		RuntimeObject* L_32 = ___source0;
		AsyncInfoToTaskBridge_1_tFF70BDD04454A6EBC5FE97283B11BB664C836B27 * L_33 = V_1;
		AsyncActionCompletedHandler_t1820A7A20AA2CF935463CD8EB21800005EFE488D * L_34 = (AsyncActionCompletedHandler_t1820A7A20AA2CF935463CD8EB21800005EFE488D *)il2cpp_codegen_object_new(AsyncActionCompletedHandler_t1820A7A20AA2CF935463CD8EB21800005EFE488D_il2cpp_TypeInfo_var);
		AsyncActionCompletedHandler__ctor_m2C0D2BD025FC8CDC21086373277D42874552060D(L_34, L_33, (intptr_t)((intptr_t)AsyncInfoToTaskBridge_1_CompleteFromAsyncAction_mA94CADFE8C912F942BAEADC65E4B8E212F5A92E8_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_32);
		InterfaceActionInvoker1< AsyncActionCompletedHandler_t1820A7A20AA2CF935463CD8EB21800005EFE488D * >::Invoke(0 /* System.Void Windows.Foundation.IAsyncAction::put_Completed(Windows.Foundation.AsyncActionCompletedHandler) */, IAsyncAction_t763952C2BD8AC50CEB26803FF37B2111537736CB_il2cpp_TypeInfo_var, L_32, L_34);
		AsyncInfoToTaskBridge_1_tFF70BDD04454A6EBC5FE97283B11BB664C836B27 * L_35 = V_1;
		RuntimeObject* L_36 = ___source0;
		NullCheck(L_35);
		AsyncInfoToTaskBridge_1_RegisterForCancellation_m15301858DFDD9573474DCCD4C3ED3F7B7E112CB4(L_35, L_36, /*hidden argument*/AsyncInfoToTaskBridge_1_RegisterForCancellation_m15301858DFDD9573474DCCD4C3ED3F7B7E112CB4_RuntimeMethod_var);
		goto IL_00c0;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_00bd;
		throw e;
	}

CATCH_00bd:
	{ // begin catch(System.Object)
		goto IL_00c0;
	} // end catch (depth: 1)

IL_00c0:
	{
		AsyncInfoToTaskBridge_1_tFF70BDD04454A6EBC5FE97283B11BB664C836B27 * L_37 = V_1;
		NullCheck(L_37);
		Task_1_tC00A207FB8C25E4498366C42466B6F913AF48F5E * L_38 = TaskCompletionSource_1_get_Task_m1B3F59275853FCC22B8C1E010D77B79865170D90(L_37, /*hidden argument*/TaskCompletionSource_1_get_Task_m1B3F59275853FCC22B8C1E010D77B79865170D90_RuntimeMethod_var);
		return L_38;
	}
}
// System.Exception System.WindowsRuntimeSystemExtensions::AttachRestrictedErrorInfo(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * WindowsRuntimeSystemExtensions_AttachRestrictedErrorInfo_mF39F00CA42F45D3F2EB5B8DB5B450C55A206113C (Exception_t * ___e0, const RuntimeMethod* method)
{
	{
		Exception_t * L_0 = ___e0;
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
// System.Void System.WindowsRuntimeSystemExtensions_<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m253A27693DA3D1A9A90FD949D4D58340D592FA5B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_m253A27693DA3D1A9A90FD949D4D58340D592FA5B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E * L_0 = (U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E *)il2cpp_codegen_object_new(U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m8CDEDC568031CE2B651AA8B8FAB2D9ACF35F3D97(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void System.WindowsRuntimeSystemExtensions_<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m8CDEDC568031CE2B651AA8B8FAB2D9ACF35F3D97 (U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.WindowsRuntimeSystemExtensions_<>c::<ConcatenateCancelTokens>b__0_0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CConcatenateCancelTokensU3Eb__0_0_mD2C070F430A2E1950C85E28ED328545E22E50AFB (U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E * __this, RuntimeObject * ___state0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CConcatenateCancelTokensU3Eb__0_0_mD2C070F430A2E1950C85E28ED328545E22E50AFB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___state0;
		NullCheck(((CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE *)CastclassClass((RuntimeObject*)L_0, CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE_il2cpp_TypeInfo_var)));
		CancellationTokenSource_Cancel_m33023D4CB46117A4C6A7C1ED0076918871A1E2DF(((CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE *)CastclassClass((RuntimeObject*)L_0, CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.WindowsRuntimeSystemExtensions_<>c::<ConcatenateCancelTokens>b__0_1(System.Threading.Tasks.Task,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CConcatenateCancelTokensU3Eb__0_1_mF440B6D95BB892E1298E16F45195EC36D4AF82DC (U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E * __this, Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ____0, RuntimeObject * ___state1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CConcatenateCancelTokensU3Eb__0_1_mF440B6D95BB892E1298E16F45195EC36D4AF82DC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___state1;
		V_0 = ((*(CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2 *)((CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2 *)UnBox(L_0, CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2_il2cpp_TypeInfo_var))));
		CancellationTokenRegistration_Dispose_m12C09B73DC2913C85C776E611EF48DCA63405457((CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2 *)(&V_0), /*hidden argument*/NULL);
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
// System.Double Windows.Foundation.Point::get_X()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Point_get_X_m7B3855A972F9BE4EFC665018A0FFCDE7653F5279 (Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get__x_0();
		return (((double)((double)L_0)));
	}
}
IL2CPP_EXTERN_C  double Point_get_X_m7B3855A972F9BE4EFC665018A0FFCDE7653F5279_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC * _thisAdjusted = reinterpret_cast<Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC *>(__this + 1);
	return Point_get_X_m7B3855A972F9BE4EFC665018A0FFCDE7653F5279(_thisAdjusted, method);
}
// System.Double Windows.Foundation.Point::get_Y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Point_get_Y_m7C07355EC984C2A5DCDED2D04D6FF242300F607A (Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get__y_1();
		return (((double)((double)L_0)));
	}
}
IL2CPP_EXTERN_C  double Point_get_Y_m7C07355EC984C2A5DCDED2D04D6FF242300F607A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC * _thisAdjusted = reinterpret_cast<Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC *>(__this + 1);
	return Point_get_Y_m7C07355EC984C2A5DCDED2D04D6FF242300F607A(_thisAdjusted, method);
}
// System.String Windows.Foundation.Point::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Point_ToString_mDFB209B8CA094AF8FB88FB144DBA13F9ABB49E8E (Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = Point_ConvertToString_m6E52855EA4919577AD9678EB50CA60A433F49803((Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC *)__this, (String_t*)NULL, (RuntimeObject*)NULL, /*hidden argument*/NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* Point_ToString_mDFB209B8CA094AF8FB88FB144DBA13F9ABB49E8E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC * _thisAdjusted = reinterpret_cast<Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC *>(__this + 1);
	return Point_ToString_mDFB209B8CA094AF8FB88FB144DBA13F9ABB49E8E(_thisAdjusted, method);
}
// System.String Windows.Foundation.Point::System.IFormattable.ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Point_System_IFormattable_ToString_m791F8FC114C9E607E22E1377E7EF3ACD0395CA57 (Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC * __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___format0;
		RuntimeObject* L_1 = ___provider1;
		String_t* L_2 = Point_ConvertToString_m6E52855EA4919577AD9678EB50CA60A433F49803((Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC *)__this, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  String_t* Point_System_IFormattable_ToString_m791F8FC114C9E607E22E1377E7EF3ACD0395CA57_AdjustorThunk (RuntimeObject * __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC * _thisAdjusted = reinterpret_cast<Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC *>(__this + 1);
	return Point_System_IFormattable_ToString_m791F8FC114C9E607E22E1377E7EF3ACD0395CA57(_thisAdjusted, ___format0, ___provider1, method);
}
// System.String Windows.Foundation.Point::ConvertToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Point_ConvertToString_m6E52855EA4919577AD9678EB50CA60A433F49803 (Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC * __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Point_ConvertToString_m6E52855EA4919577AD9678EB50CA60A433F49803_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	{
		RuntimeObject* L_0 = ___provider1;
		Il2CppChar L_1 = TokenizerHelper_GetNumericListSeparator_mD31F075C6AF217DB2DC926736D06D6F19B44AD2C(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RuntimeObject* L_2 = ___provider1;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_3 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteralABD95F778374F343EA482BA4F8022A44D38AE71D);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralABD95F778374F343EA482BA4F8022A44D38AE71D);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_5 = L_4;
		String_t* L_6 = ___format0;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_6);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_7 = L_5;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral72C0524EEA13FCC14BCAF12A82609443F543B1C3);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral72C0524EEA13FCC14BCAF12A82609443F543B1C3);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_8 = L_7;
		String_t* L_9 = ___format0;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_9);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_10 = L_8;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteralC2B7DF6201FDD3362399091F0A29550DF3505B6A);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralC2B7DF6201FDD3362399091F0A29550DF3505B6A);
		String_t* L_11 = String_Concat_m232E857CA5107EA6AC52E7DD7018716C021F237B(L_10, /*hidden argument*/NULL);
		Il2CppChar L_12 = V_0;
		Il2CppChar L_13 = L_12;
		RuntimeObject * L_14 = Box(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_il2cpp_TypeInfo_var, &L_13);
		double L_15 = Point_get_X_m7B3855A972F9BE4EFC665018A0FFCDE7653F5279((Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC *)__this, /*hidden argument*/NULL);
		double L_16 = L_15;
		RuntimeObject * L_17 = Box(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_il2cpp_TypeInfo_var, &L_16);
		double L_18 = Point_get_Y_m7C07355EC984C2A5DCDED2D04D6FF242300F607A((Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC *)__this, /*hidden argument*/NULL);
		double L_19 = L_18;
		RuntimeObject * L_20 = Box(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_il2cpp_TypeInfo_var, &L_19);
		String_t* L_21 = String_Format_mCE84582533EA9934933F3F1496451F3D9DA652A4(L_2, L_11, L_14, L_17, L_20, /*hidden argument*/NULL);
		return L_21;
	}
}
IL2CPP_EXTERN_C  String_t* Point_ConvertToString_m6E52855EA4919577AD9678EB50CA60A433F49803_AdjustorThunk (RuntimeObject * __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC * _thisAdjusted = reinterpret_cast<Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC *>(__this + 1);
	return Point_ConvertToString_m6E52855EA4919577AD9678EB50CA60A433F49803(_thisAdjusted, ___format0, ___provider1, method);
}
// System.Boolean Windows.Foundation.Point::op_Equality(Windows.Foundation.Point,Windows.Foundation.Point)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Point_op_Equality_m64C4E8C491AFAA01B7450CE74EC8144B6C3BA562 (Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC  ___point10, Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC  ___point21, const RuntimeMethod* method)
{
	{
		double L_0 = Point_get_X_m7B3855A972F9BE4EFC665018A0FFCDE7653F5279((Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC *)(&___point10), /*hidden argument*/NULL);
		double L_1 = Point_get_X_m7B3855A972F9BE4EFC665018A0FFCDE7653F5279((Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC *)(&___point21), /*hidden argument*/NULL);
		if ((!(((double)L_0) == ((double)L_1))))
		{
			goto IL_0021;
		}
	}
	{
		double L_2 = Point_get_Y_m7C07355EC984C2A5DCDED2D04D6FF242300F607A((Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC *)(&___point10), /*hidden argument*/NULL);
		double L_3 = Point_get_Y_m7C07355EC984C2A5DCDED2D04D6FF242300F607A((Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC *)(&___point21), /*hidden argument*/NULL);
		return (bool)((((double)L_2) == ((double)L_3))? 1 : 0);
	}

IL_0021:
	{
		return (bool)0;
	}
}
// System.Boolean Windows.Foundation.Point::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Point_Equals_m3BA55D50EECD9ACD235E1CF9F34373C325973DB6 (Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC * __this, RuntimeObject * ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Point_Equals_m3BA55D50EECD9ACD235E1CF9F34373C325973DB6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___o0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC_il2cpp_TypeInfo_var)))
		{
			goto IL_001a;
		}
	}
	{
		Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC  L_1 = (*(Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC *)__this);
		RuntimeObject * L_2 = ___o0;
		bool L_3 = Point_op_Equality_m64C4E8C491AFAA01B7450CE74EC8144B6C3BA562(L_1, ((*(Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC *)((Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC *)UnBox(L_2, Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_3;
	}

IL_001a:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Point_Equals_m3BA55D50EECD9ACD235E1CF9F34373C325973DB6_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___o0, const RuntimeMethod* method)
{
	Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC * _thisAdjusted = reinterpret_cast<Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC *>(__this + 1);
	return Point_Equals_m3BA55D50EECD9ACD235E1CF9F34373C325973DB6(_thisAdjusted, ___o0, method);
}
// System.Int32 Windows.Foundation.Point::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Point_GetHashCode_m7348B1D410207B79808F2CA147AE04AF43BE7580 (Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC * __this, const RuntimeMethod* method)
{
	double V_0 = 0.0;
	{
		double L_0 = Point_get_X_m7B3855A972F9BE4EFC665018A0FFCDE7653F5279((Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC *)__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = Double_GetHashCode_m583A40025EE6D79EA606D34C38ACFEE231003292((double*)(&V_0), /*hidden argument*/NULL);
		double L_2 = Point_get_Y_m7C07355EC984C2A5DCDED2D04D6FF242300F607A((Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC *)__this, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = Double_GetHashCode_m583A40025EE6D79EA606D34C38ACFEE231003292((double*)(&V_0), /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_1^(int32_t)L_3));
	}
}
IL2CPP_EXTERN_C  int32_t Point_GetHashCode_m7348B1D410207B79808F2CA147AE04AF43BE7580_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC * _thisAdjusted = reinterpret_cast<Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC *>(__this + 1);
	return Point_GetHashCode_m7348B1D410207B79808F2CA147AE04AF43BE7580(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Double Windows.Foundation.Rect::get_X()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Rect_get_X_m35D247CE131BD7E88E8F37477AF8B97514B2EB18 (Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get__x_0();
		return (((double)((double)L_0)));
	}
}
IL2CPP_EXTERN_C  double Rect_get_X_m35D247CE131BD7E88E8F37477AF8B97514B2EB18_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 * _thisAdjusted = reinterpret_cast<Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 *>(__this + 1);
	return Rect_get_X_m35D247CE131BD7E88E8F37477AF8B97514B2EB18(_thisAdjusted, method);
}
// System.Double Windows.Foundation.Rect::get_Y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Rect_get_Y_m50133BDDAB0AA130D87E2C679FA9DD3F20B2EE16 (Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get__y_1();
		return (((double)((double)L_0)));
	}
}
IL2CPP_EXTERN_C  double Rect_get_Y_m50133BDDAB0AA130D87E2C679FA9DD3F20B2EE16_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 * _thisAdjusted = reinterpret_cast<Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 *>(__this + 1);
	return Rect_get_Y_m50133BDDAB0AA130D87E2C679FA9DD3F20B2EE16(_thisAdjusted, method);
}
// System.Double Windows.Foundation.Rect::get_Width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Rect_get_Width_mB3768453F8598F1255098EA9454A03A3B0C2C682 (Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get__width_2();
		return (((double)((double)L_0)));
	}
}
IL2CPP_EXTERN_C  double Rect_get_Width_mB3768453F8598F1255098EA9454A03A3B0C2C682_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 * _thisAdjusted = reinterpret_cast<Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 *>(__this + 1);
	return Rect_get_Width_mB3768453F8598F1255098EA9454A03A3B0C2C682(_thisAdjusted, method);
}
// System.Double Windows.Foundation.Rect::get_Height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Rect_get_Height_m02E5221D781AADCD2F72A09FEA6EC37DF5EA9B1C (Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get__height_3();
		return (((double)((double)L_0)));
	}
}
IL2CPP_EXTERN_C  double Rect_get_Height_m02E5221D781AADCD2F72A09FEA6EC37DF5EA9B1C_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 * _thisAdjusted = reinterpret_cast<Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 *>(__this + 1);
	return Rect_get_Height_m02E5221D781AADCD2F72A09FEA6EC37DF5EA9B1C(_thisAdjusted, method);
}
// System.Boolean Windows.Foundation.Rect::get_IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rect_get_IsEmpty_m80BA92D11A0A2C89E0CF8601A233778A1C0C77FF (Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get__width_2();
		return (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool Rect_get_IsEmpty_m80BA92D11A0A2C89E0CF8601A233778A1C0C77FF_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 * _thisAdjusted = reinterpret_cast<Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 *>(__this + 1);
	return Rect_get_IsEmpty_m80BA92D11A0A2C89E0CF8601A233778A1C0C77FF(_thisAdjusted, method);
}
// System.String Windows.Foundation.Rect::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Rect_ToString_mAB211C47A6FF959D76D086C68C743F928C07D68F (Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = Rect_ConvertToString_mDD63C220964456CF26A0D2B0F129110F19FEE9B7((Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 *)__this, (String_t*)NULL, (RuntimeObject*)NULL, /*hidden argument*/NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* Rect_ToString_mAB211C47A6FF959D76D086C68C743F928C07D68F_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 * _thisAdjusted = reinterpret_cast<Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 *>(__this + 1);
	return Rect_ToString_mAB211C47A6FF959D76D086C68C743F928C07D68F(_thisAdjusted, method);
}
// System.String Windows.Foundation.Rect::System.IFormattable.ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Rect_System_IFormattable_ToString_m92BAA1305B83C3E5526E257B9C69A767FED3923C (Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 * __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___format0;
		RuntimeObject* L_1 = ___provider1;
		String_t* L_2 = Rect_ConvertToString_mDD63C220964456CF26A0D2B0F129110F19FEE9B7((Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 *)__this, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  String_t* Rect_System_IFormattable_ToString_m92BAA1305B83C3E5526E257B9C69A767FED3923C_AdjustorThunk (RuntimeObject * __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 * _thisAdjusted = reinterpret_cast<Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 *>(__this + 1);
	return Rect_System_IFormattable_ToString_m92BAA1305B83C3E5526E257B9C69A767FED3923C(_thisAdjusted, ___format0, ___provider1, method);
}
// System.String Windows.Foundation.Rect::ConvertToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Rect_ConvertToString_mDD63C220964456CF26A0D2B0F129110F19FEE9B7 (Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 * __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Rect_ConvertToString_mDD63C220964456CF26A0D2B0F129110F19FEE9B7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	{
		bool L_0 = Rect_get_IsEmpty_m80BA92D11A0A2C89E0CF8601A233778A1C0C77FF((Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 *)__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		return _stringLiteralDA95CC741B3DDD6710CEC3B8B24A4FB0609EB1C1;
	}

IL_000e:
	{
		RuntimeObject* L_1 = ___provider1;
		Il2CppChar L_2 = TokenizerHelper_GetNumericListSeparator_mD31F075C6AF217DB2DC926736D06D6F19B44AD2C(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		RuntimeObject* L_3 = ___provider1;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_4 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteralABD95F778374F343EA482BA4F8022A44D38AE71D);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralABD95F778374F343EA482BA4F8022A44D38AE71D);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_6 = L_5;
		String_t* L_7 = ___format0;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_7);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_8 = L_6;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral72C0524EEA13FCC14BCAF12A82609443F543B1C3);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral72C0524EEA13FCC14BCAF12A82609443F543B1C3);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_9 = L_8;
		String_t* L_10 = ___format0;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_10);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_11 = L_9;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral47EDB6769D0051A56CF33DC6C3F3C719DC5ACE2B);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral47EDB6769D0051A56CF33DC6C3F3C719DC5ACE2B);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_12 = L_11;
		String_t* L_13 = ___format0;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_13);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_13);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_14 = L_12;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, _stringLiteralD0776B8B068AB55CF5329D31787927B4AEC05D19);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteralD0776B8B068AB55CF5329D31787927B4AEC05D19);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_15 = L_14;
		String_t* L_16 = ___format0;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)L_16);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_17 = L_15;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, _stringLiteralC2B7DF6201FDD3362399091F0A29550DF3505B6A);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteralC2B7DF6201FDD3362399091F0A29550DF3505B6A);
		String_t* L_18 = String_Concat_m232E857CA5107EA6AC52E7DD7018716C021F237B(L_17, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_19 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_20 = L_19;
		Il2CppChar L_21 = V_0;
		Il2CppChar L_22 = L_21;
		RuntimeObject * L_23 = Box(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_il2cpp_TypeInfo_var, &L_22);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_23);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_23);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_24 = L_20;
		float L_25 = __this->get__x_0();
		float L_26 = L_25;
		RuntimeObject * L_27 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_26);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_27);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_27);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_28 = L_24;
		float L_29 = __this->get__y_1();
		float L_30 = L_29;
		RuntimeObject * L_31 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_30);
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_31);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_31);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_32 = L_28;
		float L_33 = __this->get__width_2();
		float L_34 = L_33;
		RuntimeObject * L_35 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_34);
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, L_35);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_35);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_36 = L_32;
		float L_37 = __this->get__height_3();
		float L_38 = L_37;
		RuntimeObject * L_39 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_38);
		NullCheck(L_36);
		ArrayElementTypeCheck (L_36, L_39);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_39);
		String_t* L_40 = String_Format_mF68EE0DEC1AA5ADE9DFEF9AE0508E428FBB10EFD(L_3, L_18, L_36, /*hidden argument*/NULL);
		return L_40;
	}
}
IL2CPP_EXTERN_C  String_t* Rect_ConvertToString_mDD63C220964456CF26A0D2B0F129110F19FEE9B7_AdjustorThunk (RuntimeObject * __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 * _thisAdjusted = reinterpret_cast<Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 *>(__this + 1);
	return Rect_ConvertToString_mDD63C220964456CF26A0D2B0F129110F19FEE9B7(_thisAdjusted, ___format0, ___provider1, method);
}
// System.Boolean Windows.Foundation.Rect::op_Equality(Windows.Foundation.Rect,Windows.Foundation.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rect_op_Equality_mE78AF9FB74353DF0F65879F0DC6719F598F736AA (Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0  ___rect10, Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0  ___rect21, const RuntimeMethod* method)
{
	{
		double L_0 = Rect_get_X_m35D247CE131BD7E88E8F37477AF8B97514B2EB18((Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 *)(&___rect10), /*hidden argument*/NULL);
		double L_1 = Rect_get_X_m35D247CE131BD7E88E8F37477AF8B97514B2EB18((Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 *)(&___rect21), /*hidden argument*/NULL);
		if ((!(((double)L_0) == ((double)L_1))))
		{
			goto IL_0041;
		}
	}
	{
		double L_2 = Rect_get_Y_m50133BDDAB0AA130D87E2C679FA9DD3F20B2EE16((Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 *)(&___rect10), /*hidden argument*/NULL);
		double L_3 = Rect_get_Y_m50133BDDAB0AA130D87E2C679FA9DD3F20B2EE16((Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 *)(&___rect21), /*hidden argument*/NULL);
		if ((!(((double)L_2) == ((double)L_3))))
		{
			goto IL_0041;
		}
	}
	{
		double L_4 = Rect_get_Width_mB3768453F8598F1255098EA9454A03A3B0C2C682((Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 *)(&___rect10), /*hidden argument*/NULL);
		double L_5 = Rect_get_Width_mB3768453F8598F1255098EA9454A03A3B0C2C682((Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 *)(&___rect21), /*hidden argument*/NULL);
		if ((!(((double)L_4) == ((double)L_5))))
		{
			goto IL_0041;
		}
	}
	{
		double L_6 = Rect_get_Height_m02E5221D781AADCD2F72A09FEA6EC37DF5EA9B1C((Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 *)(&___rect10), /*hidden argument*/NULL);
		double L_7 = Rect_get_Height_m02E5221D781AADCD2F72A09FEA6EC37DF5EA9B1C((Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 *)(&___rect21), /*hidden argument*/NULL);
		return (bool)((((double)L_6) == ((double)L_7))? 1 : 0);
	}

IL_0041:
	{
		return (bool)0;
	}
}
// System.Boolean Windows.Foundation.Rect::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rect_Equals_m8F195999C4E1C9356E3234E2E9A762DC2F6E3735 (Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 * __this, RuntimeObject * ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Rect_Equals_m8F195999C4E1C9356E3234E2E9A762DC2F6E3735_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___o0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0_il2cpp_TypeInfo_var)))
		{
			goto IL_001a;
		}
	}
	{
		Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0  L_1 = (*(Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 *)__this);
		RuntimeObject * L_2 = ___o0;
		bool L_3 = Rect_op_Equality_mE78AF9FB74353DF0F65879F0DC6719F598F736AA(L_1, ((*(Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 *)((Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 *)UnBox(L_2, Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_3;
	}

IL_001a:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Rect_Equals_m8F195999C4E1C9356E3234E2E9A762DC2F6E3735_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___o0, const RuntimeMethod* method)
{
	Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 * _thisAdjusted = reinterpret_cast<Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 *>(__this + 1);
	return Rect_Equals_m8F195999C4E1C9356E3234E2E9A762DC2F6E3735(_thisAdjusted, ___o0, method);
}
// System.Int32 Windows.Foundation.Rect::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Rect_GetHashCode_m09432FD8E6C636CD000BCD0D9A8F1E30763314CB (Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 * __this, const RuntimeMethod* method)
{
	double V_0 = 0.0;
	{
		double L_0 = Rect_get_X_m35D247CE131BD7E88E8F37477AF8B97514B2EB18((Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 *)__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = Double_GetHashCode_m583A40025EE6D79EA606D34C38ACFEE231003292((double*)(&V_0), /*hidden argument*/NULL);
		double L_2 = Rect_get_Y_m50133BDDAB0AA130D87E2C679FA9DD3F20B2EE16((Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 *)__this, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = Double_GetHashCode_m583A40025EE6D79EA606D34C38ACFEE231003292((double*)(&V_0), /*hidden argument*/NULL);
		double L_4 = Rect_get_Width_mB3768453F8598F1255098EA9454A03A3B0C2C682((Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 *)__this, /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5 = Double_GetHashCode_m583A40025EE6D79EA606D34C38ACFEE231003292((double*)(&V_0), /*hidden argument*/NULL);
		double L_6 = Rect_get_Height_m02E5221D781AADCD2F72A09FEA6EC37DF5EA9B1C((Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 *)__this, /*hidden argument*/NULL);
		V_0 = L_6;
		int32_t L_7 = Double_GetHashCode_m583A40025EE6D79EA606D34C38ACFEE231003292((double*)(&V_0), /*hidden argument*/NULL);
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)L_3))^(int32_t)L_5))^(int32_t)L_7));
	}
}
IL2CPP_EXTERN_C  int32_t Rect_GetHashCode_m09432FD8E6C636CD000BCD0D9A8F1E30763314CB_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 * _thisAdjusted = reinterpret_cast<Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 *>(__this + 1);
	return Rect_GetHashCode_m09432FD8E6C636CD000BCD0D9A8F1E30763314CB(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Double Windows.Foundation.Size::get_Width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Size_get_Width_m82026F4BBE98C2740685F27ADF96699DD099B0B9 (Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get__width_0();
		return (((double)((double)L_0)));
	}
}
IL2CPP_EXTERN_C  double Size_get_Width_m82026F4BBE98C2740685F27ADF96699DD099B0B9_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 * _thisAdjusted = reinterpret_cast<Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 *>(__this + 1);
	return Size_get_Width_m82026F4BBE98C2740685F27ADF96699DD099B0B9(_thisAdjusted, method);
}
// System.Double Windows.Foundation.Size::get_Height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Size_get_Height_mA4D91514E5FC4462B43529168335A1862E412EEA (Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get__height_1();
		return (((double)((double)L_0)));
	}
}
IL2CPP_EXTERN_C  double Size_get_Height_mA4D91514E5FC4462B43529168335A1862E412EEA_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 * _thisAdjusted = reinterpret_cast<Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 *>(__this + 1);
	return Size_get_Height_mA4D91514E5FC4462B43529168335A1862E412EEA(_thisAdjusted, method);
}
// System.Boolean Windows.Foundation.Size::get_IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Size_get_IsEmpty_m0E62EF83B12C6B9858290ECB5C494ED2F7486438 (Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 * __this, const RuntimeMethod* method)
{
	{
		double L_0 = Size_get_Width_m82026F4BBE98C2740685F27ADF96699DD099B0B9((Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 *)__this, /*hidden argument*/NULL);
		return (bool)((((double)L_0) < ((double)(0.0)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool Size_get_IsEmpty_m0E62EF83B12C6B9858290ECB5C494ED2F7486438_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 * _thisAdjusted = reinterpret_cast<Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 *>(__this + 1);
	return Size_get_IsEmpty_m0E62EF83B12C6B9858290ECB5C494ED2F7486438(_thisAdjusted, method);
}
// System.Boolean Windows.Foundation.Size::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Size_Equals_mCE363B6FB51F2B28CE43FABB1D6A0CEE7722658C (Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 * __this, RuntimeObject * ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Size_Equals_mCE363B6FB51F2B28CE43FABB1D6A0CEE7722658C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___o0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2_il2cpp_TypeInfo_var)))
		{
			goto IL_001a;
		}
	}
	{
		Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2  L_1 = (*(Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 *)__this);
		RuntimeObject * L_2 = ___o0;
		bool L_3 = Size_Equals_m8A6B538AECA7518E75D2CB60DABF77ABE88ABFD8(L_1, ((*(Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 *)((Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 *)UnBox(L_2, Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_3;
	}

IL_001a:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Size_Equals_mCE363B6FB51F2B28CE43FABB1D6A0CEE7722658C_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___o0, const RuntimeMethod* method)
{
	Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 * _thisAdjusted = reinterpret_cast<Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 *>(__this + 1);
	return Size_Equals_mCE363B6FB51F2B28CE43FABB1D6A0CEE7722658C(_thisAdjusted, ___o0, method);
}
// System.Int32 Windows.Foundation.Size::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Size_GetHashCode_m339BA7D00D8DA638CBCC4727071D15E1AC84FA7B (Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 * __this, const RuntimeMethod* method)
{
	double V_0 = 0.0;
	{
		bool L_0 = Size_get_IsEmpty_m0E62EF83B12C6B9858290ECB5C494ED2F7486438((Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 *)__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		double L_1 = Size_get_Width_m82026F4BBE98C2740685F27ADF96699DD099B0B9((Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 *)__this, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = Double_GetHashCode_m583A40025EE6D79EA606D34C38ACFEE231003292((double*)(&V_0), /*hidden argument*/NULL);
		double L_3 = Size_get_Height_mA4D91514E5FC4462B43529168335A1862E412EEA((Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 *)__this, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = Double_GetHashCode_m583A40025EE6D79EA606D34C38ACFEE231003292((double*)(&V_0), /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_2^(int32_t)L_4));
	}
}
IL2CPP_EXTERN_C  int32_t Size_GetHashCode_m339BA7D00D8DA638CBCC4727071D15E1AC84FA7B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 * _thisAdjusted = reinterpret_cast<Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 *>(__this + 1);
	return Size_GetHashCode_m339BA7D00D8DA638CBCC4727071D15E1AC84FA7B(_thisAdjusted, method);
}
// System.Boolean Windows.Foundation.Size::Equals(Windows.Foundation.Size,Windows.Foundation.Size)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Size_Equals_m8A6B538AECA7518E75D2CB60DABF77ABE88ABFD8 (Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2  ___size10, Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2  ___size21, const RuntimeMethod* method)
{
	double V_0 = 0.0;
	{
		bool L_0 = Size_get_IsEmpty_m0E62EF83B12C6B9858290ECB5C494ED2F7486438((Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 *)(&___size10), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		bool L_1 = Size_get_IsEmpty_m0E62EF83B12C6B9858290ECB5C494ED2F7486438((Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 *)(&___size21), /*hidden argument*/NULL);
		return L_1;
	}

IL_0011:
	{
		double L_2 = Size_get_Width_m82026F4BBE98C2740685F27ADF96699DD099B0B9((Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 *)(&___size10), /*hidden argument*/NULL);
		V_0 = L_2;
		double L_3 = Size_get_Width_m82026F4BBE98C2740685F27ADF96699DD099B0B9((Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 *)(&___size21), /*hidden argument*/NULL);
		bool L_4 = Double_Equals_m07123CFF3B06183E095BF281110526F9B8953472((double*)(&V_0), L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0040;
		}
	}
	{
		double L_5 = Size_get_Height_mA4D91514E5FC4462B43529168335A1862E412EEA((Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 *)(&___size10), /*hidden argument*/NULL);
		V_0 = L_5;
		double L_6 = Size_get_Height_mA4D91514E5FC4462B43529168335A1862E412EEA((Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 *)(&___size21), /*hidden argument*/NULL);
		bool L_7 = Double_Equals_m07123CFF3B06183E095BF281110526F9B8953472((double*)(&V_0), L_6, /*hidden argument*/NULL);
		return L_7;
	}

IL_0040:
	{
		return (bool)0;
	}
}
// System.String Windows.Foundation.Size::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Size_ToString_m7AD2DBD2743AAB5FE6BF01022D45475C1A8636AA (Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Size_ToString_m7AD2DBD2743AAB5FE6BF01022D45475C1A8636AA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = Size_get_IsEmpty_m0E62EF83B12C6B9858290ECB5C494ED2F7486438((Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 *)__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		return _stringLiteral3159FE421B3221381B3C778DC1C3C26E4540BE37;
	}

IL_000e:
	{
		float L_1 = __this->get__width_0();
		float L_2 = L_1;
		RuntimeObject * L_3 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_2);
		float L_4 = __this->get__height_1();
		float L_5 = L_4;
		RuntimeObject * L_6 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_5);
		String_t* L_7 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteralFBFD8740C5AE8DDF9BAFD2055D01B2FCA2854E47, L_3, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
IL2CPP_EXTERN_C  String_t* Size_ToString_m7AD2DBD2743AAB5FE6BF01022D45475C1A8636AA_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 * _thisAdjusted = reinterpret_cast<Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 *>(__this + 1);
	return Size_ToString_m7AD2DBD2743AAB5FE6BF01022D45475C1A8636AA(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Char Windows.Foundation.TokenizerHelper::GetNumericListSeparator(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar TokenizerHelper_GetNumericListSeparator_mD31F075C6AF217DB2DC926736D06D6F19B44AD2C (RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	Il2CppChar V_0 = 0x0;
	NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * V_1 = NULL;
	{
		V_0 = ((int32_t)44);
		RuntimeObject* L_0 = ___provider0;
		NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * L_1 = NumberFormatInfo_GetInstance_m713D298B436F3765F059FEA6C446F0A6ABF0A89A(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * L_2 = V_1;
		NullCheck(L_2);
		String_t* L_3 = NumberFormatInfo_get_NumberDecimalSeparator_m1A9F946D267B5C2FC5982D34AF97D9AEB9C24A6E(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018(L_3, /*hidden argument*/NULL);
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_002a;
		}
	}
	{
		Il2CppChar L_5 = V_0;
		NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * L_6 = V_1;
		NullCheck(L_6);
		String_t* L_7 = NumberFormatInfo_get_NumberDecimalSeparator_m1A9F946D267B5C2FC5982D34AF97D9AEB9C24A6E(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Il2CppChar L_8 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_7, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)L_8))))
		{
			goto IL_002a;
		}
	}
	{
		V_0 = ((int32_t)59);
	}

IL_002a:
	{
		Il2CppChar L_9 = V_0;
		return L_9;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
