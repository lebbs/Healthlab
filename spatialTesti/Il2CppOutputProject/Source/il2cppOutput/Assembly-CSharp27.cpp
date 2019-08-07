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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.ArgumentNullException
struct ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Hashtable
struct Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Exception
struct Exception_t;
// System.Func`2<System.Object,System.Int32>
struct Func_2_t8B2DA3FB30280CE3D92F50E9CCAACEE4828789A6;
// System.Func`2<System.Object,System.String>
struct Func_2_t44B347E67E515867D995E8BD5EFD67FA88CE53CF;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB;
// System.IO.MemoryStream
struct MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C;
// System.IO.Stream
struct Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80;
// System.IO.StreamReader
struct StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E;
// System.Int16[]
struct Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.NotImplementedException
struct NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.SByte[]
struct SByteU5BU5D_t623D1F33C61DEAC564E2B0560E00F1E1364F7889;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Text.Decoder
struct Decoder_tEEF45EB6F965222036C49E8EC6BA8A0692AA1F26;
// System.Text.DecoderFallback
struct DecoderFallback_t128445EB7676870485230893338EF044F6B72F60;
// System.Text.EncoderFallback
struct EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63;
// System.Text.Encoding
struct Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048;
// System.Threading.Tasks.Task
struct Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Canvas
struct Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72;
// UnityEngine.Collider
struct Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.Events.UnityAction
struct UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.Material
struct Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598;
// UnityEngine.Material[]
struct MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398;
// UnityEngine.Mesh
struct Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.RectTransform
struct RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20;
// UnityEngine.Renderer
struct Renderer_t0556D67DD582620D1F495627EDE30D03284151F4;
// UnityEngine.TextGenerator
struct TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8;
// UnityEngine.Texture2D
struct Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172;
// UnityEngine.UI.FontData
struct FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B;
// UnityEngine.UI.Text
struct Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;
// Zlib.DeflateManager
struct DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42;
// Zlib.DeflateManager/CompressFunc
struct CompressFunc_tAFF29C6E7EB90E67064D796B731BF4C3BE191051;
// Zlib.DeflateManager/Config
struct Config_tEDA3505971555860653096511C4A74CEF79A0671;
// Zlib.InflateBlocks
struct InflateBlocks_tFB689A4C8CAD4F7ABA36F08F2F07AADF5F550809;
// Zlib.InflateManager
struct InflateManager_tAA662ABBD3E02BE2870F5EF55A80B30A3969868D;
// Zlib.Tree
struct Tree_tC7E0E91171C525D4130100C53F7A43C208C87120;
// Zlib.ZlibBaseStream
struct ZlibBaseStream_t688531D0B4CFAB3252FD72AE0DFAF4946C7BA42C;
// Zlib.ZlibCodec
struct ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965;
// Zlib.ZlibException
struct ZlibException_t30AE372C4D0EF362348E27A525BC285180DCF28F;
// disassemble
struct disassemble_t80F8530BAD34D4BF509CEEF7A23DEACFFFE2FCD9;
// loadTxt
struct loadTxt_tBE40CFCDB2EB63B876F74F4BF8D527A4C5A83E96;
// picswitch
struct picswitch_tDA42A6C0AFBB9A2F8F9667AE0736CCDE7A58B083;
// trigger
struct trigger_t4FC08C765C0D1A52C95179247ED4801A50F0E14C;

IL2CPP_EXTERN_C RuntimeClass* Adler_tF3B6684F731D4AD4E2A4EDCF14F7CD00BB1B3FC8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InflateManager_tAA662ABBD3E02BE2870F5EF55A80B30A3969868D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ZlibException_t30AE372C4D0EF362348E27A525BC285180DCF28F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0259412D43BCB665FA1CB3446313B6C9000BD234;
IL2CPP_EXTERN_C String_t* _stringLiteral125A52CC5385C9ADC36684E890AD6172D35E41BF;
IL2CPP_EXTERN_C String_t* _stringLiteral2DFA9ADCBD7A67CD6E7CC3761470008E40351345;
IL2CPP_EXTERN_C String_t* _stringLiteral3B84D51091A5F4A5BCF63E012E794050CF07E0DA;
IL2CPP_EXTERN_C String_t* _stringLiteral51796AC29F50F5E732052A10903C85F5A3FEA6EE;
IL2CPP_EXTERN_C String_t* _stringLiteral53A610E925BBC0A175E365D31241AE75AEEAD651;
IL2CPP_EXTERN_C String_t* _stringLiteral569A19828C4CDB7B9B533B0DDDDFE42FAAD78A45;
IL2CPP_EXTERN_C String_t* _stringLiteral600CCD1B71569232D01D110BC63E906BEAB04D8C;
IL2CPP_EXTERN_C String_t* _stringLiteral696BB1C34AEF268975B4AAC1025774CC21B45B6A;
IL2CPP_EXTERN_C String_t* _stringLiteral869596215AACF82194CFCB58F3503717790CCD81;
IL2CPP_EXTERN_C String_t* _stringLiteral869EC4B8AF1C9E7A11E513949B3730DFA2E5BFB4;
IL2CPP_EXTERN_C String_t* _stringLiteral8823FD3D1E45E1D43B6270930CAA55840E8B4F4F;
IL2CPP_EXTERN_C String_t* _stringLiteral88B906F85FB7924901EFA3985228FA8B8DF96A6E;
IL2CPP_EXTERN_C String_t* _stringLiteralAF10EF20DD9060BBEEAD0AFBC55381A66AF442EF;
IL2CPP_EXTERN_C String_t* _stringLiteralB1493D21F1301A0097980023E081303318C2376B;
IL2CPP_EXTERN_C String_t* _stringLiteralB24EF43149423CD25B7046C472E0E9AFE0B3A8E3;
IL2CPP_EXTERN_C String_t* _stringLiteralB95A54DF76C16197A17633EBABB02BCA2267D2D8;
IL2CPP_EXTERN_C String_t* _stringLiteralE1B184FD28AC292B256AC9039AD1DA305A1DB149;
IL2CPP_EXTERN_C String_t* _stringLiteralE227CD07437A080F4A4F29C3F25D79600B3AE3E7;
IL2CPP_EXTERN_C String_t* _stringLiteralE53C2EA1FE4BD2B78BF4723C7C155A578E020A25;
IL2CPP_EXTERN_C String_t* _stringLiteralEE9F38E186BA06F57B7B74D7E626B94E13CE2556;
IL2CPP_EXTERN_C String_t* _stringLiteralFA8DA672D87EF5B3E72B79883659812EDAD88A7A;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisText_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_m24A42DAE3900B867697FFD9DFB6E448D6978CD4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZlibBaseStream_Read_m4A21827ACC093F5D4E7A4C822C7FBACB8C4E4A74_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZlibBaseStream_Seek_m8017AAEC8983A047750A56FAE69A08E6FC0B0567_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZlibBaseStream_Write_mBAF8756941D2B704E03FE752C6C294F225D33F57_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZlibBaseStream_get_Position_mF6CA8B860FC1C50F11A545F0205D9E1F751E304A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZlibBaseStream_set_Position_m6DF01C5D5DC27E1AF8849D0532DCB9EA5FC2CB76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZlibCodec_Deflate_m0CBAAB01255D3D52348263E4987DC6E33E8DDA62_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZlibCodec_EndDeflate_m96A27202006B1072345AE1F959202D7B30BBB0F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZlibCodec_EndInflate_m8A7AE9BCEDF1E481FFE6B015A515BE7ECCB054A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZlibCodec_Inflate_m5EDD692FE4BBF0632C6FB93FA3E92564687B542C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZlibCodec_InitializeInflate_m19AD1D7E527D6FCCF8AD48182AC3CE02D6646B71_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZlibCodec_ResetDeflate_m1CCDA36EB19AA72F47CB7ED2F4217E979147224F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZlibCodec_SetDeflateParams_m9F71CDB700926582722622054F93C5AD61CF10BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZlibCodec_SetDictionary_m270348060FC172818083B338992C2872F915248D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZlibCodec_SyncInflate_mC71A4744519F5B63DD7C1B9B91E4579C9382FB75_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZlibCodec__InternalInitializeDeflate_m93EE1D35F993E0164C845763E96BA2C55F20A47A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZlibCodec__ctor_m6D328EFAE98A47E8E23CC275E129A4B447F55106_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZlibCodec_flush_pending_m4212476FA5FE6CD438FB30F209F89E7BBE48FD9A_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t ZlibBaseStream_CompressBuffer_m916756FFE3A6BEDC1A0C850640A7ED484727F60B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZlibBaseStream_CompressString_m8697A6731CE03AFABE913B718E1FA90C173C29B4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZlibBaseStream_Read_m4A21827ACC093F5D4E7A4C822C7FBACB8C4E4A74_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZlibBaseStream_Seek_m8017AAEC8983A047750A56FAE69A08E6FC0B0567_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZlibBaseStream_UncompressBuffer_m99F82C977C7C8A0F9F953E7D3A0103EB441127F2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZlibBaseStream_UncompressString_m409A206D9D6BEB5217D4BD3DA035C493BD6BD54D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZlibBaseStream_Write_mBAF8756941D2B704E03FE752C6C294F225D33F57_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZlibBaseStream__ctor_m8EBF53348CB09A39B831EAD0250E83744CB73B41_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZlibBaseStream_get_Position_mF6CA8B860FC1C50F11A545F0205D9E1F751E304A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZlibBaseStream_get_workingBuffer_mD122FDE20AE031C2ABD7DC229B910EAFB43D9AFE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZlibBaseStream_get_z_mDA17877313DBC2CE902D3A0A1E9ADFD76A135AD7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZlibBaseStream_set_Position_m6DF01C5D5DC27E1AF8849D0532DCB9EA5FC2CB76_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZlibCodec_Deflate_m0CBAAB01255D3D52348263E4987DC6E33E8DDA62_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZlibCodec_EndDeflate_m96A27202006B1072345AE1F959202D7B30BBB0F2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZlibCodec_EndInflate_m8A7AE9BCEDF1E481FFE6B015A515BE7ECCB054A1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZlibCodec_Inflate_m5EDD692FE4BBF0632C6FB93FA3E92564687B542C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZlibCodec_InitializeInflate_m19AD1D7E527D6FCCF8AD48182AC3CE02D6646B71_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZlibCodec_ResetDeflate_m1CCDA36EB19AA72F47CB7ED2F4217E979147224F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZlibCodec_SetDeflateParams_m9F71CDB700926582722622054F93C5AD61CF10BF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZlibCodec_SetDictionary_m270348060FC172818083B338992C2872F915248D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZlibCodec_SyncInflate_mC71A4744519F5B63DD7C1B9B91E4579C9382FB75_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZlibCodec__InternalInitializeDeflate_m93EE1D35F993E0164C845763E96BA2C55F20A47A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZlibCodec__ctor_m6D328EFAE98A47E8E23CC275E129A4B447F55106_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZlibCodec_flush_pending_m4212476FA5FE6CD438FB30F209F89E7BBE48FD9A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZlibCodec_read_buf_m205AFC76428DE50165D9681A5DE81B6626ECCF16_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZlibException__ctor_m1C50FBADFBBA0F78D526FFB617F7F69543375725_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZlibException__ctor_mE7088E68E83A7D9E994548DDCAF545875872FF3B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t disassemble_Start_m6D51E7618068D18B1BDF3A386ABF8EC895D407F0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t disassemble_Update_mF90286A96A1F7A0EB7FCC2397711A080CA42C6A6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t loadTxt_Lue_m5E8795FCB492F4D5FF33BD21AD41DCC678E40814_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t trigger_OnTriggerEnter_mFB701FAFF8F8B884F04E4B67D0E07A17B88FCE3E_MetadataUsageId;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
struct MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

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


// System.Text.Encoding
struct  Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_55;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB * ___dataItem_56;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_57;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_58;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 * ___encoderFallback_59;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 * ___decoderFallback_60;

public:
	inline static int32_t get_offset_of_m_codePage_55() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___m_codePage_55)); }
	inline int32_t get_m_codePage_55() const { return ___m_codePage_55; }
	inline int32_t* get_address_of_m_codePage_55() { return &___m_codePage_55; }
	inline void set_m_codePage_55(int32_t value)
	{
		___m_codePage_55 = value;
	}

	inline static int32_t get_offset_of_dataItem_56() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___dataItem_56)); }
	inline CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB * get_dataItem_56() const { return ___dataItem_56; }
	inline CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB ** get_address_of_dataItem_56() { return &___dataItem_56; }
	inline void set_dataItem_56(CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB * value)
	{
		___dataItem_56 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataItem_56), (void*)value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_57() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___m_deserializedFromEverett_57)); }
	inline bool get_m_deserializedFromEverett_57() const { return ___m_deserializedFromEverett_57; }
	inline bool* get_address_of_m_deserializedFromEverett_57() { return &___m_deserializedFromEverett_57; }
	inline void set_m_deserializedFromEverett_57(bool value)
	{
		___m_deserializedFromEverett_57 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_58() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___m_isReadOnly_58)); }
	inline bool get_m_isReadOnly_58() const { return ___m_isReadOnly_58; }
	inline bool* get_address_of_m_isReadOnly_58() { return &___m_isReadOnly_58; }
	inline void set_m_isReadOnly_58(bool value)
	{
		___m_isReadOnly_58 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_59() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___encoderFallback_59)); }
	inline EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 * get_encoderFallback_59() const { return ___encoderFallback_59; }
	inline EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 ** get_address_of_encoderFallback_59() { return &___encoderFallback_59; }
	inline void set_encoderFallback_59(EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 * value)
	{
		___encoderFallback_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoderFallback_59), (void*)value);
	}

	inline static int32_t get_offset_of_decoderFallback_60() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___decoderFallback_60)); }
	inline DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 * get_decoderFallback_60() const { return ___decoderFallback_60; }
	inline DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 ** get_address_of_decoderFallback_60() { return &___decoderFallback_60; }
	inline void set_decoderFallback_60(DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 * value)
	{
		___decoderFallback_60 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoderFallback_60), (void*)value);
	}
};

struct Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_61;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultEncoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unicodeEncoding_1), (void*)value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bigEndianUnicode_2), (void*)value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf7Encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf8Encoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf32Encoding_5), (void*)value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asciiEncoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___latin1Encoding_7), (void*)value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___encodings_8)); }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodings_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_61() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___s_InternalSyncObject_61)); }
	inline RuntimeObject * get_s_InternalSyncObject_61() const { return ___s_InternalSyncObject_61; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_61() { return &___s_InternalSyncObject_61; }
	inline void set_s_InternalSyncObject_61(RuntimeObject * value)
	{
		___s_InternalSyncObject_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_61), (void*)value);
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

// Zlib.ZlibConstants
struct  ZlibConstants_t995446A9218136B7E52F618E2DFA60022BDAC3A5  : public RuntimeObject
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


// System.IO.TextReader
struct  TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A  : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF
{
public:

public:
};

struct TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A_StaticFields
{
public:
	// System.Func`2<System.Object,System.String> System.IO.TextReader::_ReadLineDelegate
	Func_2_t44B347E67E515867D995E8BD5EFD67FA88CE53CF * ____ReadLineDelegate_1;
	// System.Func`2<System.Object,System.Int32> System.IO.TextReader::_ReadDelegate
	Func_2_t8B2DA3FB30280CE3D92F50E9CCAACEE4828789A6 * ____ReadDelegate_2;
	// System.IO.TextReader System.IO.TextReader::Null
	TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A * ___Null_3;

public:
	inline static int32_t get_offset_of__ReadLineDelegate_1() { return static_cast<int32_t>(offsetof(TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A_StaticFields, ____ReadLineDelegate_1)); }
	inline Func_2_t44B347E67E515867D995E8BD5EFD67FA88CE53CF * get__ReadLineDelegate_1() const { return ____ReadLineDelegate_1; }
	inline Func_2_t44B347E67E515867D995E8BD5EFD67FA88CE53CF ** get_address_of__ReadLineDelegate_1() { return &____ReadLineDelegate_1; }
	inline void set__ReadLineDelegate_1(Func_2_t44B347E67E515867D995E8BD5EFD67FA88CE53CF * value)
	{
		____ReadLineDelegate_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ReadLineDelegate_1), (void*)value);
	}

	inline static int32_t get_offset_of__ReadDelegate_2() { return static_cast<int32_t>(offsetof(TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A_StaticFields, ____ReadDelegate_2)); }
	inline Func_2_t8B2DA3FB30280CE3D92F50E9CCAACEE4828789A6 * get__ReadDelegate_2() const { return ____ReadDelegate_2; }
	inline Func_2_t8B2DA3FB30280CE3D92F50E9CCAACEE4828789A6 ** get_address_of__ReadDelegate_2() { return &____ReadDelegate_2; }
	inline void set__ReadDelegate_2(Func_2_t8B2DA3FB30280CE3D92F50E9CCAACEE4828789A6 * value)
	{
		____ReadDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ReadDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of_Null_3() { return static_cast<int32_t>(offsetof(TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A_StaticFields, ___Null_3)); }
	inline TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A * get_Null_3() const { return ___Null_3; }
	inline TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A ** get_address_of_Null_3() { return &___Null_3; }
	inline void set_Null_3(TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A * value)
	{
		___Null_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_3), (void*)value);
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


// UnityEngine.Color
struct  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
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


// Zlib.ZlibException
struct  ZlibException_t30AE372C4D0EF362348E27A525BC285180DCF28F  : public Exception_t
{
public:
	static const Il2CppGuid CLSID;

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


// System.IO.StreamReader
struct  StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E  : public TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A
{
public:
	// System.IO.Stream System.IO.StreamReader::stream
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___stream_7;
	// System.Text.Encoding System.IO.StreamReader::encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___encoding_8;
	// System.Text.Decoder System.IO.StreamReader::decoder
	Decoder_tEEF45EB6F965222036C49E8EC6BA8A0692AA1F26 * ___decoder_9;
	// System.Byte[] System.IO.StreamReader::byteBuffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___byteBuffer_10;
	// System.Char[] System.IO.StreamReader::charBuffer
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___charBuffer_11;
	// System.Byte[] System.IO.StreamReader::_preamble
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____preamble_12;
	// System.Int32 System.IO.StreamReader::charPos
	int32_t ___charPos_13;
	// System.Int32 System.IO.StreamReader::charLen
	int32_t ___charLen_14;
	// System.Int32 System.IO.StreamReader::byteLen
	int32_t ___byteLen_15;
	// System.Int32 System.IO.StreamReader::bytePos
	int32_t ___bytePos_16;
	// System.Int32 System.IO.StreamReader::_maxCharsPerBuffer
	int32_t ____maxCharsPerBuffer_17;
	// System.Boolean System.IO.StreamReader::_detectEncoding
	bool ____detectEncoding_18;
	// System.Boolean System.IO.StreamReader::_checkPreamble
	bool ____checkPreamble_19;
	// System.Boolean System.IO.StreamReader::_isBlocked
	bool ____isBlocked_20;
	// System.Boolean System.IO.StreamReader::_closable
	bool ____closable_21;
	// System.Threading.Tasks.Task modreq(System.Runtime.CompilerServices.IsVolatile) System.IO.StreamReader::_asyncReadTask
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ____asyncReadTask_22;

public:
	inline static int32_t get_offset_of_stream_7() { return static_cast<int32_t>(offsetof(StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E, ___stream_7)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get_stream_7() const { return ___stream_7; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of_stream_7() { return &___stream_7; }
	inline void set_stream_7(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		___stream_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stream_7), (void*)value);
	}

	inline static int32_t get_offset_of_encoding_8() { return static_cast<int32_t>(offsetof(StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E, ___encoding_8)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_encoding_8() const { return ___encoding_8; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_encoding_8() { return &___encoding_8; }
	inline void set_encoding_8(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___encoding_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoding_8), (void*)value);
	}

	inline static int32_t get_offset_of_decoder_9() { return static_cast<int32_t>(offsetof(StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E, ___decoder_9)); }
	inline Decoder_tEEF45EB6F965222036C49E8EC6BA8A0692AA1F26 * get_decoder_9() const { return ___decoder_9; }
	inline Decoder_tEEF45EB6F965222036C49E8EC6BA8A0692AA1F26 ** get_address_of_decoder_9() { return &___decoder_9; }
	inline void set_decoder_9(Decoder_tEEF45EB6F965222036C49E8EC6BA8A0692AA1F26 * value)
	{
		___decoder_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoder_9), (void*)value);
	}

	inline static int32_t get_offset_of_byteBuffer_10() { return static_cast<int32_t>(offsetof(StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E, ___byteBuffer_10)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_byteBuffer_10() const { return ___byteBuffer_10; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_byteBuffer_10() { return &___byteBuffer_10; }
	inline void set_byteBuffer_10(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___byteBuffer_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___byteBuffer_10), (void*)value);
	}

	inline static int32_t get_offset_of_charBuffer_11() { return static_cast<int32_t>(offsetof(StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E, ___charBuffer_11)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_charBuffer_11() const { return ___charBuffer_11; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_charBuffer_11() { return &___charBuffer_11; }
	inline void set_charBuffer_11(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___charBuffer_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___charBuffer_11), (void*)value);
	}

	inline static int32_t get_offset_of__preamble_12() { return static_cast<int32_t>(offsetof(StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E, ____preamble_12)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get__preamble_12() const { return ____preamble_12; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of__preamble_12() { return &____preamble_12; }
	inline void set__preamble_12(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		____preamble_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____preamble_12), (void*)value);
	}

	inline static int32_t get_offset_of_charPos_13() { return static_cast<int32_t>(offsetof(StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E, ___charPos_13)); }
	inline int32_t get_charPos_13() const { return ___charPos_13; }
	inline int32_t* get_address_of_charPos_13() { return &___charPos_13; }
	inline void set_charPos_13(int32_t value)
	{
		___charPos_13 = value;
	}

	inline static int32_t get_offset_of_charLen_14() { return static_cast<int32_t>(offsetof(StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E, ___charLen_14)); }
	inline int32_t get_charLen_14() const { return ___charLen_14; }
	inline int32_t* get_address_of_charLen_14() { return &___charLen_14; }
	inline void set_charLen_14(int32_t value)
	{
		___charLen_14 = value;
	}

	inline static int32_t get_offset_of_byteLen_15() { return static_cast<int32_t>(offsetof(StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E, ___byteLen_15)); }
	inline int32_t get_byteLen_15() const { return ___byteLen_15; }
	inline int32_t* get_address_of_byteLen_15() { return &___byteLen_15; }
	inline void set_byteLen_15(int32_t value)
	{
		___byteLen_15 = value;
	}

	inline static int32_t get_offset_of_bytePos_16() { return static_cast<int32_t>(offsetof(StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E, ___bytePos_16)); }
	inline int32_t get_bytePos_16() const { return ___bytePos_16; }
	inline int32_t* get_address_of_bytePos_16() { return &___bytePos_16; }
	inline void set_bytePos_16(int32_t value)
	{
		___bytePos_16 = value;
	}

	inline static int32_t get_offset_of__maxCharsPerBuffer_17() { return static_cast<int32_t>(offsetof(StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E, ____maxCharsPerBuffer_17)); }
	inline int32_t get__maxCharsPerBuffer_17() const { return ____maxCharsPerBuffer_17; }
	inline int32_t* get_address_of__maxCharsPerBuffer_17() { return &____maxCharsPerBuffer_17; }
	inline void set__maxCharsPerBuffer_17(int32_t value)
	{
		____maxCharsPerBuffer_17 = value;
	}

	inline static int32_t get_offset_of__detectEncoding_18() { return static_cast<int32_t>(offsetof(StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E, ____detectEncoding_18)); }
	inline bool get__detectEncoding_18() const { return ____detectEncoding_18; }
	inline bool* get_address_of__detectEncoding_18() { return &____detectEncoding_18; }
	inline void set__detectEncoding_18(bool value)
	{
		____detectEncoding_18 = value;
	}

	inline static int32_t get_offset_of__checkPreamble_19() { return static_cast<int32_t>(offsetof(StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E, ____checkPreamble_19)); }
	inline bool get__checkPreamble_19() const { return ____checkPreamble_19; }
	inline bool* get_address_of__checkPreamble_19() { return &____checkPreamble_19; }
	inline void set__checkPreamble_19(bool value)
	{
		____checkPreamble_19 = value;
	}

	inline static int32_t get_offset_of__isBlocked_20() { return static_cast<int32_t>(offsetof(StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E, ____isBlocked_20)); }
	inline bool get__isBlocked_20() const { return ____isBlocked_20; }
	inline bool* get_address_of__isBlocked_20() { return &____isBlocked_20; }
	inline void set__isBlocked_20(bool value)
	{
		____isBlocked_20 = value;
	}

	inline static int32_t get_offset_of__closable_21() { return static_cast<int32_t>(offsetof(StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E, ____closable_21)); }
	inline bool get__closable_21() const { return ____closable_21; }
	inline bool* get_address_of__closable_21() { return &____closable_21; }
	inline void set__closable_21(bool value)
	{
		____closable_21 = value;
	}

	inline static int32_t get_offset_of__asyncReadTask_22() { return static_cast<int32_t>(offsetof(StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E, ____asyncReadTask_22)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get__asyncReadTask_22() const { return ____asyncReadTask_22; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of__asyncReadTask_22() { return &____asyncReadTask_22; }
	inline void set__asyncReadTask_22(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		____asyncReadTask_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncReadTask_22), (void*)value);
	}
};

struct StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E_StaticFields
{
public:
	// System.IO.StreamReader System.IO.StreamReader::Null
	StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E * ___Null_4;

public:
	inline static int32_t get_offset_of_Null_4() { return static_cast<int32_t>(offsetof(StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E_StaticFields, ___Null_4)); }
	inline StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E * get_Null_4() const { return ___Null_4; }
	inline StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E ** get_address_of_Null_4() { return &___Null_4; }
	inline void set_Null_4(StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E * value)
	{
		___Null_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_4), (void*)value);
	}
};


// System.NotImplementedException
struct  NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// UnityEngine.KeyCode
struct  KeyCode_tC93EA87C5A6901160B583ADFCD3EF6726570DC3C 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_tC93EA87C5A6901160B583ADFCD3EF6726570DC3C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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

// Zlib.CompressionLevel
struct  CompressionLevel_tE6BC1551BF524077BE8B4F51EF0E1DA1AFB72B3F 
{
public:
	// System.Int32 Zlib.CompressionLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CompressionLevel_tE6BC1551BF524077BE8B4F51EF0E1DA1AFB72B3F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Zlib.CompressionMode
struct  CompressionMode_t87CA5839C4A4A4A701F173A1CF2A13038215A490 
{
public:
	// System.Int32 Zlib.CompressionMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CompressionMode_t87CA5839C4A4A4A701F173A1CF2A13038215A490, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Zlib.CompressionStrategy
struct  CompressionStrategy_tD8189D9F5F0195D0A233608FCE7C429DA78344C5 
{
public:
	// System.Int32 Zlib.CompressionStrategy::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CompressionStrategy_tD8189D9F5F0195D0A233608FCE7C429DA78344C5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Zlib.FlushType
struct  FlushType_t34CE9989001136CBB60F77E21DCA93FDE6FDAF0F 
{
public:
	// System.Int32 Zlib.FlushType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FlushType_t34CE9989001136CBB60F77E21DCA93FDE6FDAF0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Zlib.InflateManager_InflateManagerMode
struct  InflateManagerMode_t8394B1A172012354BF1D91E39D8BBE7943606C77 
{
public:
	// System.Int32 Zlib.InflateManager_InflateManagerMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InflateManagerMode_t8394B1A172012354BF1D91E39D8BBE7943606C77, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Zlib.ZlibBaseStream_StreamMode
struct  StreamMode_t7402E3344BF42CDE81D9AF7DFCA8808BDDEF9A02 
{
public:
	// System.Int32 Zlib.ZlibBaseStream_StreamMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StreamMode_t7402E3344BF42CDE81D9AF7DFCA8808BDDEF9A02, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Zlib.ZlibStreamFlavor
struct  ZlibStreamFlavor_t2ED2203760FD0600386C168980C503BB8B339546 
{
public:
	// System.Int32 Zlib.ZlibStreamFlavor::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ZlibStreamFlavor_t2ED2203760FD0600386C168980C503BB8B339546, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
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


// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Material
struct  Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// Zlib.DeflateManager
struct  DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42  : public RuntimeObject
{
public:
	// Zlib.DeflateManager_CompressFunc Zlib.DeflateManager::DeflateFunction
	CompressFunc_tAFF29C6E7EB90E67064D796B731BF4C3BE191051 * ___DeflateFunction_2;
	// Zlib.ZlibCodec Zlib.DeflateManager::_codec
	ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965 * ____codec_21;
	// System.Int32 Zlib.DeflateManager::status
	int32_t ___status_22;
	// System.Byte[] Zlib.DeflateManager::pending
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___pending_23;
	// System.Int32 Zlib.DeflateManager::nextPending
	int32_t ___nextPending_24;
	// System.Int32 Zlib.DeflateManager::pendingCount
	int32_t ___pendingCount_25;
	// System.SByte Zlib.DeflateManager::data_type
	int8_t ___data_type_26;
	// System.Int32 Zlib.DeflateManager::last_flush
	int32_t ___last_flush_27;
	// System.Int32 Zlib.DeflateManager::w_size
	int32_t ___w_size_28;
	// System.Int32 Zlib.DeflateManager::w_bits
	int32_t ___w_bits_29;
	// System.Int32 Zlib.DeflateManager::w_mask
	int32_t ___w_mask_30;
	// System.Byte[] Zlib.DeflateManager::window
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___window_31;
	// System.Int32 Zlib.DeflateManager::window_size
	int32_t ___window_size_32;
	// System.Int16[] Zlib.DeflateManager::prev
	Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* ___prev_33;
	// System.Int16[] Zlib.DeflateManager::head
	Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* ___head_34;
	// System.Int32 Zlib.DeflateManager::ins_h
	int32_t ___ins_h_35;
	// System.Int32 Zlib.DeflateManager::hash_size
	int32_t ___hash_size_36;
	// System.Int32 Zlib.DeflateManager::hash_bits
	int32_t ___hash_bits_37;
	// System.Int32 Zlib.DeflateManager::hash_mask
	int32_t ___hash_mask_38;
	// System.Int32 Zlib.DeflateManager::hash_shift
	int32_t ___hash_shift_39;
	// System.Int32 Zlib.DeflateManager::block_start
	int32_t ___block_start_40;
	// Zlib.DeflateManager_Config Zlib.DeflateManager::config
	Config_tEDA3505971555860653096511C4A74CEF79A0671 * ___config_41;
	// System.Int32 Zlib.DeflateManager::match_length
	int32_t ___match_length_42;
	// System.Int32 Zlib.DeflateManager::prev_match
	int32_t ___prev_match_43;
	// System.Int32 Zlib.DeflateManager::match_available
	int32_t ___match_available_44;
	// System.Int32 Zlib.DeflateManager::strstart
	int32_t ___strstart_45;
	// System.Int32 Zlib.DeflateManager::match_start
	int32_t ___match_start_46;
	// System.Int32 Zlib.DeflateManager::lookahead
	int32_t ___lookahead_47;
	// System.Int32 Zlib.DeflateManager::prev_length
	int32_t ___prev_length_48;
	// Zlib.CompressionLevel Zlib.DeflateManager::compressionLevel
	int32_t ___compressionLevel_49;
	// Zlib.CompressionStrategy Zlib.DeflateManager::compressionStrategy
	int32_t ___compressionStrategy_50;
	// System.Int16[] Zlib.DeflateManager::dyn_ltree
	Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* ___dyn_ltree_51;
	// System.Int16[] Zlib.DeflateManager::dyn_dtree
	Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* ___dyn_dtree_52;
	// System.Int16[] Zlib.DeflateManager::bl_tree
	Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* ___bl_tree_53;
	// Zlib.Tree Zlib.DeflateManager::treeLiterals
	Tree_tC7E0E91171C525D4130100C53F7A43C208C87120 * ___treeLiterals_54;
	// Zlib.Tree Zlib.DeflateManager::treeDistances
	Tree_tC7E0E91171C525D4130100C53F7A43C208C87120 * ___treeDistances_55;
	// Zlib.Tree Zlib.DeflateManager::treeBitLengths
	Tree_tC7E0E91171C525D4130100C53F7A43C208C87120 * ___treeBitLengths_56;
	// System.Int16[] Zlib.DeflateManager::bl_count
	Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* ___bl_count_57;
	// System.Int32[] Zlib.DeflateManager::heap
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___heap_58;
	// System.Int32 Zlib.DeflateManager::heap_len
	int32_t ___heap_len_59;
	// System.Int32 Zlib.DeflateManager::heap_max
	int32_t ___heap_max_60;
	// System.SByte[] Zlib.DeflateManager::depth
	SByteU5BU5D_t623D1F33C61DEAC564E2B0560E00F1E1364F7889* ___depth_61;
	// System.Int32 Zlib.DeflateManager::_lengthOffset
	int32_t ____lengthOffset_62;
	// System.Int32 Zlib.DeflateManager::lit_bufsize
	int32_t ___lit_bufsize_63;
	// System.Int32 Zlib.DeflateManager::last_lit
	int32_t ___last_lit_64;
	// System.Int32 Zlib.DeflateManager::_distanceOffset
	int32_t ____distanceOffset_65;
	// System.Int32 Zlib.DeflateManager::opt_len
	int32_t ___opt_len_66;
	// System.Int32 Zlib.DeflateManager::static_len
	int32_t ___static_len_67;
	// System.Int32 Zlib.DeflateManager::matches
	int32_t ___matches_68;
	// System.Int32 Zlib.DeflateManager::last_eob_len
	int32_t ___last_eob_len_69;
	// System.Int16 Zlib.DeflateManager::bi_buf
	int16_t ___bi_buf_70;
	// System.Int32 Zlib.DeflateManager::bi_valid
	int32_t ___bi_valid_71;
	// System.Boolean Zlib.DeflateManager::Rfc1950BytesEmitted
	bool ___Rfc1950BytesEmitted_72;
	// System.Boolean Zlib.DeflateManager::_WantRfc1950HeaderBytes
	bool ____WantRfc1950HeaderBytes_73;

public:
	inline static int32_t get_offset_of_DeflateFunction_2() { return static_cast<int32_t>(offsetof(DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42, ___DeflateFunction_2)); }
	inline CompressFunc_tAFF29C6E7EB90E67064D796B731BF4C3BE191051 * get_DeflateFunction_2() const { return ___DeflateFunction_2; }
	inline CompressFunc_tAFF29C6E7EB90E67064D796B731BF4C3BE191051 ** get_address_of_DeflateFunction_2() { return &___DeflateFunction_2; }
	inline void set_DeflateFunction_2(CompressFunc_tAFF29C6E7EB90E67064D796B731BF4C3BE191051 * value)
	{
		___DeflateFunction_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DeflateFunction_2), (void*)value);
	}

	inline static int32_t get_offset_of__codec_21() { return static_cast<int32_t>(offsetof(DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42, ____codec_21)); }
	inline ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965 * get__codec_21() const { return ____codec_21; }
	inline ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965 ** get_address_of__codec_21() { return &____codec_21; }
	inline void set__codec_21(ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965 * value)
	{
		____codec_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____codec_21), (void*)value);
	}

	inline static int32_t get_offset_of_status_22() { return static_cast<int32_t>(offsetof(DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42, ___status_22)); }
	inline int32_t get_status_22() const { return ___status_22; }
	inline int32_t* get_address_of_status_22() { return &___status_22; }
	inline void set_status_22(int32_t value)
	{
		___status_22 = value;
	}

	inline static int32_t get_offset_of_pending_23() { return static_cast<int32_t>(offsetof(DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42, ___pending_23)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_pending_23() const { return ___pending_23; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_pending_23() { return &___pending_23; }
	inline void set_pending_23(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___pending_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pending_23), (void*)value);
	}

	inline static int32_t get_offset_of_nextPending_24() { return static_cast<int32_t>(offsetof(DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42, ___nextPending_24)); }
	inline int32_t get_nextPending_24() const { return ___nextPending_24; }
	inline int32_t* get_address_of_nextPending_24() { return &___nextPending_24; }
	inline void set_nextPending_24(int32_t value)
	{
		___nextPending_24 = value;
	}

	inline static int32_t get_offset_of_pendingCount_25() { return static_cast<int32_t>(offsetof(DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42, ___pendingCount_25)); }
	inline int32_t get_pendingCount_25() const { return ___pendingCount_25; }
	inline int32_t* get_address_of_pendingCount_25() { return &___pendingCount_25; }
	inline void set_pendingCount_25(int32_t value)
	{
		___pendingCount_25 = value;
	}

	inline static int32_t get_offset_of_data_type_26() { return static_cast<int32_t>(offsetof(DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42, ___data_type_26)); }
	inline int8_t get_data_type_26() const { return ___data_type_26; }
	inline int8_t* get_address_of_data_type_26() { return &___data_type_26; }
	inline void set_data_type_26(int8_t value)
	{
		___data_type_26 = value;
	}

	inline static int32_t get_offset_of_last_flush_27() { return static_cast<int32_t>(offsetof(DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42, ___last_flush_27)); }
	inline int32_t get_last_flush_27() const { return ___last_flush_27; }
	inline int32_t* get_address_of_last_flush_27() { return &___last_flush_27; }
	inline void set_last_flush_27(int32_t value)
	{
		___last_flush_27 = value;
	}

	inline static int32_t get_offset_of_w_size_28() { return static_cast<int32_t>(offsetof(DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42, ___w_size_28)); }
	inline int32_t get_w_size_28() const { return ___w_size_28; }
	inline int32_t* get_address_of_w_size_28() { return &___w_size_28; }
	inline void set_w_size_28(int32_t value)
	{
		___w_size_28 = value;
	}

	inline static int32_t get_offset_of_w_bits_29() { return static_cast<int32_t>(offsetof(DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42, ___w_bits_29)); }
	inline int32_t get_w_bits_29() const { return ___w_bits_29; }
	inline int32_t* get_address_of_w_bits_29() { return &___w_bits_29; }
	inline void set_w_bits_29(int32_t value)
	{
		___w_bits_29 = value;
	}

	inline static int32_t get_offset_of_w_mask_30() { return static_cast<int32_t>(offsetof(DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42, ___w_mask_30)); }
	inline int32_t get_w_mask_30() const { return ___w_mask_30; }
	inline int32_t* get_address_of_w_mask_30() { return &___w_mask_30; }
	inline void set_w_mask_30(int32_t value)
	{
		___w_mask_30 = value;
	}

	inline static int32_t get_offset_of_window_31() { return static_cast<int32_t>(offsetof(DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42, ___window_31)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_window_31() const { return ___window_31; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_window_31() { return &___window_31; }
	inline void set_window_31(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___window_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___window_31), (void*)value);
	}

	inline static int32_t get_offset_of_window_size_32() { return static_cast<int32_t>(offsetof(DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42, ___window_size_32)); }
	inline int32_t get_window_size_32() const { return ___window_size_32; }
	inline int32_t* get_address_of_window_size_32() { return &___window_size_32; }
	inline void set_window_size_32(int32_t value)
	{
		___window_size_32 = value;
	}

	inline static int32_t get_offset_of_prev_33() { return static_cast<int32_t>(offsetof(DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42, ___prev_33)); }
	inline Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* get_prev_33() const { return ___prev_33; }
	inline Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28** get_address_of_prev_33() { return &___prev_33; }
	inline void set_prev_33(Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* value)
	{
		___prev_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prev_33), (void*)value);
	}

	inline static int32_t get_offset_of_head_34() { return static_cast<int32_t>(offsetof(DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42, ___head_34)); }
	inline Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* get_head_34() const { return ___head_34; }
	inline Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28** get_address_of_head_34() { return &___head_34; }
	inline void set_head_34(Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* value)
	{
		___head_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___head_34), (void*)value);
	}

	inline static int32_t get_offset_of_ins_h_35() { return static_cast<int32_t>(offsetof(DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42, ___ins_h_35)); }
	inline int32_t get_ins_h_35() const { return ___ins_h_35; }
	inline int32_t* get_address_of_ins_h_35() { return &___ins_h_35; }
	inline void set_ins_h_35(int32_t value)
	{
		___ins_h_35 = value;
	}

	inline static int32_t get_offset_of_hash_size_36() { return static_cast<int32_t>(offsetof(DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42, ___hash_size_36)); }
	inline int32_t get_hash_size_36() const { return ___hash_size_36; }
	inline int32_t* get_address_of_hash_size_36() { return &___hash_size_36; }
	inline void set_hash_size_36(int32_t value)
	{
		___hash_size_36 = value;
	}

	inline static int32_t get_offset_of_hash_bits_37() { return static_cast<int32_t>(offsetof(DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42, ___hash_bits_37)); }
	inline int32_t get_hash_bits_37() const { return ___hash_bits_37; }
	inline int32_t* get_address_of_hash_bits_37() { return &___hash_bits_37; }
	inline void set_hash_bits_37(int32_t value)
	{
		___hash_bits_37 = value;
	}

	inline static int32_t get_offset_of_hash_mask_38() { return static_cast<int32_t>(offsetof(DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42, ___hash_mask_38)); }
	inline int32_t get_hash_mask_38() const { return ___hash_mask_38; }
	inline int32_t* get_address_of_hash_mask_38() { return &___hash_mask_38; }
	inline void set_hash_mask_38(int32_t value)
	{
		___hash_mask_38 = value;
	}

	inline static int32_t get_offset_of_hash_shift_39() { return static_cast<int32_t>(offsetof(DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42, ___hash_shift_39)); }
	inline int32_t get_hash_shift_39() const { return ___hash_shift_39; }
	inline int32_t* get_address_of_hash_shift_39() { return &___hash_shift_39; }
	inline void set_hash_shift_39(int32_t value)
	{
		___hash_shift_39 = value;
	}

	inline static int32_t get_offset_of_block_start_40() { return static_cast<int32_t>(offsetof(DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42, ___block_start_40)); }
	inline int32_t get_block_start_40() const { return ___block_start_40; }
	inline int32_t* get_address_of_block_start_40() { return &___block_start_40; }
	inline void set_block_start_40(int32_t value)
	{
		___block_start_40 = value;
	}

	inline static int32_t get_offset_of_config_41() { return static_cast<int32_t>(offsetof(DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42, ___config_41)); }
	inline Config_tEDA3505971555860653096511C4A74CEF79A0671 * get_config_41() const { return ___config_41; }
	inline Config_tEDA3505971555860653096511C4A74CEF79A0671 ** get_address_of_config_41() { return &___config_41; }
	inline void set_config_41(Config_tEDA3505971555860653096511C4A74CEF79A0671 * value)
	{
		___config_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___config_41), (void*)value);
	}

	inline static int32_t get_offset_of_match_length_42() { return static_cast<int32_t>(offsetof(DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42, ___match_length_42)); }
	inline int32_t get_match_length_42() const { return ___match_length_42; }
	inline int32_t* get_address_of_match_length_42() { return &___match_length_42; }
	inline void set_match_length_42(int32_t value)
	{
		___match_length_42 = value;
	}

	inline static int32_t get_offset_of_prev_match_43() { return static_cast<int32_t>(offsetof(DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42, ___prev_match_43)); }
	inline int32_t get_prev_match_43() const { return ___prev_match_43; }
	inline int32_t* get_address_of_prev_match_43() { return &___prev_match_43; }
	inline void set_prev_match_43(int32_t value)
	{
		___prev_match_43 = value;
	}

	inline static int32_t get_offset_of_match_available_44() { return static_cast<int32_t>(offsetof(DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42, ___match_available_44)); }
	inline int32_t get_match_available_44() const { return ___match_available_44; }
	inline int32_t* get_address_of_match_available_44() { return &___match_available_44; }
	inline void set_match_available_44(int32_t value)
	{
		___match_available_44 = value;
	}

	inline static int32_t get_offset_of_strstart_45() { return static_cast<int32_t>(offsetof(DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42, ___strstart_45)); }
	inline int32_t get_strstart_45() const { return ___strstart_45; }
	inline int32_t* get_address_of_strstart_45() { return &___strstart_45; }
	inline void set_strstart_45(int32_t value)
	{
		___strstart_45 = value;
	}

	inline static int32_t get_offset_of_match_start_46() { return static_cast<int32_t>(offsetof(DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42, ___match_start_46)); }
	inline int32_t get_match_start_46() const { return ___match_start_46; }
	inline int32_t* get_address_of_match_start_46() { return &___match_start_46; }
	inline void set_match_start_46(int32_t value)
	{
		___match_start_46 = value;
	}

	inline static int32_t get_offset_of_lookahead_47() { return static_cast<int32_t>(offsetof(DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42, ___lookahead_47)); }
	inline int32_t get_lookahead_47() const { return ___lookahead_47; }
	inline int32_t* get_address_of_lookahead_47() { return &___lookahead_47; }
	inline void set_lookahead_47(int32_t value)
	{
		___lookahead_47 = value;
	}

	inline static int32_t get_offset_of_prev_length_48() { return static_cast<int32_t>(offsetof(DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42, ___prev_length_48)); }
	inline int32_t get_prev_length_48() const { return ___prev_length_48; }
	inline int32_t* get_address_of_prev_length_48() { return &___prev_length_48; }
	inline void set_prev_length_48(int32_t value)
	{
		___prev_length_48 = value;
	}

	inline static int32_t get_offset_of_compressionLevel_49() { return static_cast<int32_t>(offsetof(DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42, ___compressionLevel_49)); }
	inline int32_t get_compressionLevel_49() const { return ___compressionLevel_49; }
	inline int32_t* get_address_of_compressionLevel_49() { return &___compressionLevel_49; }
	inline void set_compressionLevel_49(int32_t value)
	{
		___compressionLevel_49 = value;
	}

	inline static int32_t get_offset_of_compressionStrategy_50() { return static_cast<int32_t>(offsetof(DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42, ___compressionStrategy_50)); }
	inline int32_t get_compressionStrategy_50() const { return ___compressionStrategy_50; }
	inline int32_t* get_address_of_compressionStrategy_50() { return &___compressionStrategy_50; }
	inline void set_compressionStrategy_50(int32_t value)
	{
		___compressionStrategy_50 = value;
	}

	inline static int32_t get_offset_of_dyn_ltree_51() { return static_cast<int32_t>(offsetof(DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42, ___dyn_ltree_51)); }
	inline Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* get_dyn_ltree_51() const { return ___dyn_ltree_51; }
	inline Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28** get_address_of_dyn_ltree_51() { return &___dyn_ltree_51; }
	inline void set_dyn_ltree_51(Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* value)
	{
		___dyn_ltree_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dyn_ltree_51), (void*)value);
	}

	inline static int32_t get_offset_of_dyn_dtree_52() { return static_cast<int32_t>(offsetof(DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42, ___dyn_dtree_52)); }
	inline Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* get_dyn_dtree_52() const { return ___dyn_dtree_52; }
	inline Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28** get_address_of_dyn_dtree_52() { return &___dyn_dtree_52; }
	inline void set_dyn_dtree_52(Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* value)
	{
		___dyn_dtree_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dyn_dtree_52), (void*)value);
	}

	inline static int32_t get_offset_of_bl_tree_53() { return static_cast<int32_t>(offsetof(DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42, ___bl_tree_53)); }
	inline Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* get_bl_tree_53() const { return ___bl_tree_53; }
	inline Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28** get_address_of_bl_tree_53() { return &___bl_tree_53; }
	inline void set_bl_tree_53(Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* value)
	{
		___bl_tree_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bl_tree_53), (void*)value);
	}

	inline static int32_t get_offset_of_treeLiterals_54() { return static_cast<int32_t>(offsetof(DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42, ___treeLiterals_54)); }
	inline Tree_tC7E0E91171C525D4130100C53F7A43C208C87120 * get_treeLiterals_54() const { return ___treeLiterals_54; }
	inline Tree_tC7E0E91171C525D4130100C53F7A43C208C87120 ** get_address_of_treeLiterals_54() { return &___treeLiterals_54; }
	inline void set_treeLiterals_54(Tree_tC7E0E91171C525D4130100C53F7A43C208C87120 * value)
	{
		___treeLiterals_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___treeLiterals_54), (void*)value);
	}

	inline static int32_t get_offset_of_treeDistances_55() { return static_cast<int32_t>(offsetof(DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42, ___treeDistances_55)); }
	inline Tree_tC7E0E91171C525D4130100C53F7A43C208C87120 * get_treeDistances_55() const { return ___treeDistances_55; }
	inline Tree_tC7E0E91171C525D4130100C53F7A43C208C87120 ** get_address_of_treeDistances_55() { return &___treeDistances_55; }
	inline void set_treeDistances_55(Tree_tC7E0E91171C525D4130100C53F7A43C208C87120 * value)
	{
		___treeDistances_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___treeDistances_55), (void*)value);
	}

	inline static int32_t get_offset_of_treeBitLengths_56() { return static_cast<int32_t>(offsetof(DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42, ___treeBitLengths_56)); }
	inline Tree_tC7E0E91171C525D4130100C53F7A43C208C87120 * get_treeBitLengths_56() const { return ___treeBitLengths_56; }
	inline Tree_tC7E0E91171C525D4130100C53F7A43C208C87120 ** get_address_of_treeBitLengths_56() { return &___treeBitLengths_56; }
	inline void set_treeBitLengths_56(Tree_tC7E0E91171C525D4130100C53F7A43C208C87120 * value)
	{
		___treeBitLengths_56 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___treeBitLengths_56), (void*)value);
	}

	inline static int32_t get_offset_of_bl_count_57() { return static_cast<int32_t>(offsetof(DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42, ___bl_count_57)); }
	inline Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* get_bl_count_57() const { return ___bl_count_57; }
	inline Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28** get_address_of_bl_count_57() { return &___bl_count_57; }
	inline void set_bl_count_57(Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* value)
	{
		___bl_count_57 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bl_count_57), (void*)value);
	}

	inline static int32_t get_offset_of_heap_58() { return static_cast<int32_t>(offsetof(DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42, ___heap_58)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_heap_58() const { return ___heap_58; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_heap_58() { return &___heap_58; }
	inline void set_heap_58(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___heap_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___heap_58), (void*)value);
	}

	inline static int32_t get_offset_of_heap_len_59() { return static_cast<int32_t>(offsetof(DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42, ___heap_len_59)); }
	inline int32_t get_heap_len_59() const { return ___heap_len_59; }
	inline int32_t* get_address_of_heap_len_59() { return &___heap_len_59; }
	inline void set_heap_len_59(int32_t value)
	{
		___heap_len_59 = value;
	}

	inline static int32_t get_offset_of_heap_max_60() { return static_cast<int32_t>(offsetof(DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42, ___heap_max_60)); }
	inline int32_t get_heap_max_60() const { return ___heap_max_60; }
	inline int32_t* get_address_of_heap_max_60() { return &___heap_max_60; }
	inline void set_heap_max_60(int32_t value)
	{
		___heap_max_60 = value;
	}

	inline static int32_t get_offset_of_depth_61() { return static_cast<int32_t>(offsetof(DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42, ___depth_61)); }
	inline SByteU5BU5D_t623D1F33C61DEAC564E2B0560E00F1E1364F7889* get_depth_61() const { return ___depth_61; }
	inline SByteU5BU5D_t623D1F33C61DEAC564E2B0560E00F1E1364F7889** get_address_of_depth_61() { return &___depth_61; }
	inline void set_depth_61(SByteU5BU5D_t623D1F33C61DEAC564E2B0560E00F1E1364F7889* value)
	{
		___depth_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___depth_61), (void*)value);
	}

	inline static int32_t get_offset_of__lengthOffset_62() { return static_cast<int32_t>(offsetof(DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42, ____lengthOffset_62)); }
	inline int32_t get__lengthOffset_62() const { return ____lengthOffset_62; }
	inline int32_t* get_address_of__lengthOffset_62() { return &____lengthOffset_62; }
	inline void set__lengthOffset_62(int32_t value)
	{
		____lengthOffset_62 = value;
	}

	inline static int32_t get_offset_of_lit_bufsize_63() { return static_cast<int32_t>(offsetof(DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42, ___lit_bufsize_63)); }
	inline int32_t get_lit_bufsize_63() const { return ___lit_bufsize_63; }
	inline int32_t* get_address_of_lit_bufsize_63() { return &___lit_bufsize_63; }
	inline void set_lit_bufsize_63(int32_t value)
	{
		___lit_bufsize_63 = value;
	}

	inline static int32_t get_offset_of_last_lit_64() { return static_cast<int32_t>(offsetof(DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42, ___last_lit_64)); }
	inline int32_t get_last_lit_64() const { return ___last_lit_64; }
	inline int32_t* get_address_of_last_lit_64() { return &___last_lit_64; }
	inline void set_last_lit_64(int32_t value)
	{
		___last_lit_64 = value;
	}

	inline static int32_t get_offset_of__distanceOffset_65() { return static_cast<int32_t>(offsetof(DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42, ____distanceOffset_65)); }
	inline int32_t get__distanceOffset_65() const { return ____distanceOffset_65; }
	inline int32_t* get_address_of__distanceOffset_65() { return &____distanceOffset_65; }
	inline void set__distanceOffset_65(int32_t value)
	{
		____distanceOffset_65 = value;
	}

	inline static int32_t get_offset_of_opt_len_66() { return static_cast<int32_t>(offsetof(DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42, ___opt_len_66)); }
	inline int32_t get_opt_len_66() const { return ___opt_len_66; }
	inline int32_t* get_address_of_opt_len_66() { return &___opt_len_66; }
	inline void set_opt_len_66(int32_t value)
	{
		___opt_len_66 = value;
	}

	inline static int32_t get_offset_of_static_len_67() { return static_cast<int32_t>(offsetof(DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42, ___static_len_67)); }
	inline int32_t get_static_len_67() const { return ___static_len_67; }
	inline int32_t* get_address_of_static_len_67() { return &___static_len_67; }
	inline void set_static_len_67(int32_t value)
	{
		___static_len_67 = value;
	}

	inline static int32_t get_offset_of_matches_68() { return static_cast<int32_t>(offsetof(DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42, ___matches_68)); }
	inline int32_t get_matches_68() const { return ___matches_68; }
	inline int32_t* get_address_of_matches_68() { return &___matches_68; }
	inline void set_matches_68(int32_t value)
	{
		___matches_68 = value;
	}

	inline static int32_t get_offset_of_last_eob_len_69() { return static_cast<int32_t>(offsetof(DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42, ___last_eob_len_69)); }
	inline int32_t get_last_eob_len_69() const { return ___last_eob_len_69; }
	inline int32_t* get_address_of_last_eob_len_69() { return &___last_eob_len_69; }
	inline void set_last_eob_len_69(int32_t value)
	{
		___last_eob_len_69 = value;
	}

	inline static int32_t get_offset_of_bi_buf_70() { return static_cast<int32_t>(offsetof(DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42, ___bi_buf_70)); }
	inline int16_t get_bi_buf_70() const { return ___bi_buf_70; }
	inline int16_t* get_address_of_bi_buf_70() { return &___bi_buf_70; }
	inline void set_bi_buf_70(int16_t value)
	{
		___bi_buf_70 = value;
	}

	inline static int32_t get_offset_of_bi_valid_71() { return static_cast<int32_t>(offsetof(DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42, ___bi_valid_71)); }
	inline int32_t get_bi_valid_71() const { return ___bi_valid_71; }
	inline int32_t* get_address_of_bi_valid_71() { return &___bi_valid_71; }
	inline void set_bi_valid_71(int32_t value)
	{
		___bi_valid_71 = value;
	}

	inline static int32_t get_offset_of_Rfc1950BytesEmitted_72() { return static_cast<int32_t>(offsetof(DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42, ___Rfc1950BytesEmitted_72)); }
	inline bool get_Rfc1950BytesEmitted_72() const { return ___Rfc1950BytesEmitted_72; }
	inline bool* get_address_of_Rfc1950BytesEmitted_72() { return &___Rfc1950BytesEmitted_72; }
	inline void set_Rfc1950BytesEmitted_72(bool value)
	{
		___Rfc1950BytesEmitted_72 = value;
	}

	inline static int32_t get_offset_of__WantRfc1950HeaderBytes_73() { return static_cast<int32_t>(offsetof(DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42, ____WantRfc1950HeaderBytes_73)); }
	inline bool get__WantRfc1950HeaderBytes_73() const { return ____WantRfc1950HeaderBytes_73; }
	inline bool* get_address_of__WantRfc1950HeaderBytes_73() { return &____WantRfc1950HeaderBytes_73; }
	inline void set__WantRfc1950HeaderBytes_73(bool value)
	{
		____WantRfc1950HeaderBytes_73 = value;
	}
};

struct DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42_StaticFields
{
public:
	// System.Int32 Zlib.DeflateManager::MEM_LEVEL_MAX
	int32_t ___MEM_LEVEL_MAX_0;
	// System.Int32 Zlib.DeflateManager::MEM_LEVEL_DEFAULT
	int32_t ___MEM_LEVEL_DEFAULT_1;
	// System.String[] Zlib.DeflateManager::_ErrorMessage
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ____ErrorMessage_3;
	// System.Int32 Zlib.DeflateManager::PRESET_DICT
	int32_t ___PRESET_DICT_4;
	// System.Int32 Zlib.DeflateManager::INIT_STATE
	int32_t ___INIT_STATE_5;
	// System.Int32 Zlib.DeflateManager::BUSY_STATE
	int32_t ___BUSY_STATE_6;
	// System.Int32 Zlib.DeflateManager::FINISH_STATE
	int32_t ___FINISH_STATE_7;
	// System.Int32 Zlib.DeflateManager::Z_DEFLATED
	int32_t ___Z_DEFLATED_8;
	// System.Int32 Zlib.DeflateManager::STORED_BLOCK
	int32_t ___STORED_BLOCK_9;
	// System.Int32 Zlib.DeflateManager::STATIC_TREES
	int32_t ___STATIC_TREES_10;
	// System.Int32 Zlib.DeflateManager::DYN_TREES
	int32_t ___DYN_TREES_11;
	// System.Int32 Zlib.DeflateManager::Z_BINARY
	int32_t ___Z_BINARY_12;
	// System.Int32 Zlib.DeflateManager::Z_ASCII
	int32_t ___Z_ASCII_13;
	// System.Int32 Zlib.DeflateManager::Z_UNKNOWN
	int32_t ___Z_UNKNOWN_14;
	// System.Int32 Zlib.DeflateManager::Buf_size
	int32_t ___Buf_size_15;
	// System.Int32 Zlib.DeflateManager::MIN_MATCH
	int32_t ___MIN_MATCH_16;
	// System.Int32 Zlib.DeflateManager::MAX_MATCH
	int32_t ___MAX_MATCH_17;
	// System.Int32 Zlib.DeflateManager::MIN_LOOKAHEAD
	int32_t ___MIN_LOOKAHEAD_18;
	// System.Int32 Zlib.DeflateManager::HEAP_SIZE
	int32_t ___HEAP_SIZE_19;
	// System.Int32 Zlib.DeflateManager::END_BLOCK
	int32_t ___END_BLOCK_20;

public:
	inline static int32_t get_offset_of_MEM_LEVEL_MAX_0() { return static_cast<int32_t>(offsetof(DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42_StaticFields, ___MEM_LEVEL_MAX_0)); }
	inline int32_t get_MEM_LEVEL_MAX_0() const { return ___MEM_LEVEL_MAX_0; }
	inline int32_t* get_address_of_MEM_LEVEL_MAX_0() { return &___MEM_LEVEL_MAX_0; }
	inline void set_MEM_LEVEL_MAX_0(int32_t value)
	{
		___MEM_LEVEL_MAX_0 = value;
	}

	inline static int32_t get_offset_of_MEM_LEVEL_DEFAULT_1() { return static_cast<int32_t>(offsetof(DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42_StaticFields, ___MEM_LEVEL_DEFAULT_1)); }
	inline int32_t get_MEM_LEVEL_DEFAULT_1() const { return ___MEM_LEVEL_DEFAULT_1; }
	inline int32_t* get_address_of_MEM_LEVEL_DEFAULT_1() { return &___MEM_LEVEL_DEFAULT_1; }
	inline void set_MEM_LEVEL_DEFAULT_1(int32_t value)
	{
		___MEM_LEVEL_DEFAULT_1 = value;
	}

	inline static int32_t get_offset_of__ErrorMessage_3() { return static_cast<int32_t>(offsetof(DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42_StaticFields, ____ErrorMessage_3)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get__ErrorMessage_3() const { return ____ErrorMessage_3; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of__ErrorMessage_3() { return &____ErrorMessage_3; }
	inline void set__ErrorMessage_3(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		____ErrorMessage_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ErrorMessage_3), (void*)value);
	}

	inline static int32_t get_offset_of_PRESET_DICT_4() { return static_cast<int32_t>(offsetof(DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42_StaticFields, ___PRESET_DICT_4)); }
	inline int32_t get_PRESET_DICT_4() const { return ___PRESET_DICT_4; }
	inline int32_t* get_address_of_PRESET_DICT_4() { return &___PRESET_DICT_4; }
	inline void set_PRESET_DICT_4(int32_t value)
	{
		___PRESET_DICT_4 = value;
	}

	inline static int32_t get_offset_of_INIT_STATE_5() { return static_cast<int32_t>(offsetof(DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42_StaticFields, ___INIT_STATE_5)); }
	inline int32_t get_INIT_STATE_5() const { return ___INIT_STATE_5; }
	inline int32_t* get_address_of_INIT_STATE_5() { return &___INIT_STATE_5; }
	inline void set_INIT_STATE_5(int32_t value)
	{
		___INIT_STATE_5 = value;
	}

	inline static int32_t get_offset_of_BUSY_STATE_6() { return static_cast<int32_t>(offsetof(DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42_StaticFields, ___BUSY_STATE_6)); }
	inline int32_t get_BUSY_STATE_6() const { return ___BUSY_STATE_6; }
	inline int32_t* get_address_of_BUSY_STATE_6() { return &___BUSY_STATE_6; }
	inline void set_BUSY_STATE_6(int32_t value)
	{
		___BUSY_STATE_6 = value;
	}

	inline static int32_t get_offset_of_FINISH_STATE_7() { return static_cast<int32_t>(offsetof(DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42_StaticFields, ___FINISH_STATE_7)); }
	inline int32_t get_FINISH_STATE_7() const { return ___FINISH_STATE_7; }
	inline int32_t* get_address_of_FINISH_STATE_7() { return &___FINISH_STATE_7; }
	inline void set_FINISH_STATE_7(int32_t value)
	{
		___FINISH_STATE_7 = value;
	}

	inline static int32_t get_offset_of_Z_DEFLATED_8() { return static_cast<int32_t>(offsetof(DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42_StaticFields, ___Z_DEFLATED_8)); }
	inline int32_t get_Z_DEFLATED_8() const { return ___Z_DEFLATED_8; }
	inline int32_t* get_address_of_Z_DEFLATED_8() { return &___Z_DEFLATED_8; }
	inline void set_Z_DEFLATED_8(int32_t value)
	{
		___Z_DEFLATED_8 = value;
	}

	inline static int32_t get_offset_of_STORED_BLOCK_9() { return static_cast<int32_t>(offsetof(DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42_StaticFields, ___STORED_BLOCK_9)); }
	inline int32_t get_STORED_BLOCK_9() const { return ___STORED_BLOCK_9; }
	inline int32_t* get_address_of_STORED_BLOCK_9() { return &___STORED_BLOCK_9; }
	inline void set_STORED_BLOCK_9(int32_t value)
	{
		___STORED_BLOCK_9 = value;
	}

	inline static int32_t get_offset_of_STATIC_TREES_10() { return static_cast<int32_t>(offsetof(DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42_StaticFields, ___STATIC_TREES_10)); }
	inline int32_t get_STATIC_TREES_10() const { return ___STATIC_TREES_10; }
	inline int32_t* get_address_of_STATIC_TREES_10() { return &___STATIC_TREES_10; }
	inline void set_STATIC_TREES_10(int32_t value)
	{
		___STATIC_TREES_10 = value;
	}

	inline static int32_t get_offset_of_DYN_TREES_11() { return static_cast<int32_t>(offsetof(DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42_StaticFields, ___DYN_TREES_11)); }
	inline int32_t get_DYN_TREES_11() const { return ___DYN_TREES_11; }
	inline int32_t* get_address_of_DYN_TREES_11() { return &___DYN_TREES_11; }
	inline void set_DYN_TREES_11(int32_t value)
	{
		___DYN_TREES_11 = value;
	}

	inline static int32_t get_offset_of_Z_BINARY_12() { return static_cast<int32_t>(offsetof(DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42_StaticFields, ___Z_BINARY_12)); }
	inline int32_t get_Z_BINARY_12() const { return ___Z_BINARY_12; }
	inline int32_t* get_address_of_Z_BINARY_12() { return &___Z_BINARY_12; }
	inline void set_Z_BINARY_12(int32_t value)
	{
		___Z_BINARY_12 = value;
	}

	inline static int32_t get_offset_of_Z_ASCII_13() { return static_cast<int32_t>(offsetof(DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42_StaticFields, ___Z_ASCII_13)); }
	inline int32_t get_Z_ASCII_13() const { return ___Z_ASCII_13; }
	inline int32_t* get_address_of_Z_ASCII_13() { return &___Z_ASCII_13; }
	inline void set_Z_ASCII_13(int32_t value)
	{
		___Z_ASCII_13 = value;
	}

	inline static int32_t get_offset_of_Z_UNKNOWN_14() { return static_cast<int32_t>(offsetof(DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42_StaticFields, ___Z_UNKNOWN_14)); }
	inline int32_t get_Z_UNKNOWN_14() const { return ___Z_UNKNOWN_14; }
	inline int32_t* get_address_of_Z_UNKNOWN_14() { return &___Z_UNKNOWN_14; }
	inline void set_Z_UNKNOWN_14(int32_t value)
	{
		___Z_UNKNOWN_14 = value;
	}

	inline static int32_t get_offset_of_Buf_size_15() { return static_cast<int32_t>(offsetof(DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42_StaticFields, ___Buf_size_15)); }
	inline int32_t get_Buf_size_15() const { return ___Buf_size_15; }
	inline int32_t* get_address_of_Buf_size_15() { return &___Buf_size_15; }
	inline void set_Buf_size_15(int32_t value)
	{
		___Buf_size_15 = value;
	}

	inline static int32_t get_offset_of_MIN_MATCH_16() { return static_cast<int32_t>(offsetof(DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42_StaticFields, ___MIN_MATCH_16)); }
	inline int32_t get_MIN_MATCH_16() const { return ___MIN_MATCH_16; }
	inline int32_t* get_address_of_MIN_MATCH_16() { return &___MIN_MATCH_16; }
	inline void set_MIN_MATCH_16(int32_t value)
	{
		___MIN_MATCH_16 = value;
	}

	inline static int32_t get_offset_of_MAX_MATCH_17() { return static_cast<int32_t>(offsetof(DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42_StaticFields, ___MAX_MATCH_17)); }
	inline int32_t get_MAX_MATCH_17() const { return ___MAX_MATCH_17; }
	inline int32_t* get_address_of_MAX_MATCH_17() { return &___MAX_MATCH_17; }
	inline void set_MAX_MATCH_17(int32_t value)
	{
		___MAX_MATCH_17 = value;
	}

	inline static int32_t get_offset_of_MIN_LOOKAHEAD_18() { return static_cast<int32_t>(offsetof(DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42_StaticFields, ___MIN_LOOKAHEAD_18)); }
	inline int32_t get_MIN_LOOKAHEAD_18() const { return ___MIN_LOOKAHEAD_18; }
	inline int32_t* get_address_of_MIN_LOOKAHEAD_18() { return &___MIN_LOOKAHEAD_18; }
	inline void set_MIN_LOOKAHEAD_18(int32_t value)
	{
		___MIN_LOOKAHEAD_18 = value;
	}

	inline static int32_t get_offset_of_HEAP_SIZE_19() { return static_cast<int32_t>(offsetof(DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42_StaticFields, ___HEAP_SIZE_19)); }
	inline int32_t get_HEAP_SIZE_19() const { return ___HEAP_SIZE_19; }
	inline int32_t* get_address_of_HEAP_SIZE_19() { return &___HEAP_SIZE_19; }
	inline void set_HEAP_SIZE_19(int32_t value)
	{
		___HEAP_SIZE_19 = value;
	}

	inline static int32_t get_offset_of_END_BLOCK_20() { return static_cast<int32_t>(offsetof(DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42_StaticFields, ___END_BLOCK_20)); }
	inline int32_t get_END_BLOCK_20() const { return ___END_BLOCK_20; }
	inline int32_t* get_address_of_END_BLOCK_20() { return &___END_BLOCK_20; }
	inline void set_END_BLOCK_20(int32_t value)
	{
		___END_BLOCK_20 = value;
	}
};


// Zlib.InflateManager
struct  InflateManager_tAA662ABBD3E02BE2870F5EF55A80B30A3969868D  : public RuntimeObject
{
public:
	// Zlib.InflateManager_InflateManagerMode Zlib.InflateManager::mode
	int32_t ___mode_2;
	// Zlib.ZlibCodec Zlib.InflateManager::_codec
	ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965 * ____codec_3;
	// System.Int32 Zlib.InflateManager::method
	int32_t ___method_4;
	// System.UInt32 Zlib.InflateManager::computedCheck
	uint32_t ___computedCheck_5;
	// System.UInt32 Zlib.InflateManager::expectedCheck
	uint32_t ___expectedCheck_6;
	// System.Int32 Zlib.InflateManager::marker
	int32_t ___marker_7;
	// System.Boolean Zlib.InflateManager::_handleRfc1950HeaderBytes
	bool ____handleRfc1950HeaderBytes_8;
	// System.Int32 Zlib.InflateManager::wbits
	int32_t ___wbits_9;
	// Zlib.InflateBlocks Zlib.InflateManager::blocks
	InflateBlocks_tFB689A4C8CAD4F7ABA36F08F2F07AADF5F550809 * ___blocks_10;

public:
	inline static int32_t get_offset_of_mode_2() { return static_cast<int32_t>(offsetof(InflateManager_tAA662ABBD3E02BE2870F5EF55A80B30A3969868D, ___mode_2)); }
	inline int32_t get_mode_2() const { return ___mode_2; }
	inline int32_t* get_address_of_mode_2() { return &___mode_2; }
	inline void set_mode_2(int32_t value)
	{
		___mode_2 = value;
	}

	inline static int32_t get_offset_of__codec_3() { return static_cast<int32_t>(offsetof(InflateManager_tAA662ABBD3E02BE2870F5EF55A80B30A3969868D, ____codec_3)); }
	inline ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965 * get__codec_3() const { return ____codec_3; }
	inline ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965 ** get_address_of__codec_3() { return &____codec_3; }
	inline void set__codec_3(ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965 * value)
	{
		____codec_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____codec_3), (void*)value);
	}

	inline static int32_t get_offset_of_method_4() { return static_cast<int32_t>(offsetof(InflateManager_tAA662ABBD3E02BE2870F5EF55A80B30A3969868D, ___method_4)); }
	inline int32_t get_method_4() const { return ___method_4; }
	inline int32_t* get_address_of_method_4() { return &___method_4; }
	inline void set_method_4(int32_t value)
	{
		___method_4 = value;
	}

	inline static int32_t get_offset_of_computedCheck_5() { return static_cast<int32_t>(offsetof(InflateManager_tAA662ABBD3E02BE2870F5EF55A80B30A3969868D, ___computedCheck_5)); }
	inline uint32_t get_computedCheck_5() const { return ___computedCheck_5; }
	inline uint32_t* get_address_of_computedCheck_5() { return &___computedCheck_5; }
	inline void set_computedCheck_5(uint32_t value)
	{
		___computedCheck_5 = value;
	}

	inline static int32_t get_offset_of_expectedCheck_6() { return static_cast<int32_t>(offsetof(InflateManager_tAA662ABBD3E02BE2870F5EF55A80B30A3969868D, ___expectedCheck_6)); }
	inline uint32_t get_expectedCheck_6() const { return ___expectedCheck_6; }
	inline uint32_t* get_address_of_expectedCheck_6() { return &___expectedCheck_6; }
	inline void set_expectedCheck_6(uint32_t value)
	{
		___expectedCheck_6 = value;
	}

	inline static int32_t get_offset_of_marker_7() { return static_cast<int32_t>(offsetof(InflateManager_tAA662ABBD3E02BE2870F5EF55A80B30A3969868D, ___marker_7)); }
	inline int32_t get_marker_7() const { return ___marker_7; }
	inline int32_t* get_address_of_marker_7() { return &___marker_7; }
	inline void set_marker_7(int32_t value)
	{
		___marker_7 = value;
	}

	inline static int32_t get_offset_of__handleRfc1950HeaderBytes_8() { return static_cast<int32_t>(offsetof(InflateManager_tAA662ABBD3E02BE2870F5EF55A80B30A3969868D, ____handleRfc1950HeaderBytes_8)); }
	inline bool get__handleRfc1950HeaderBytes_8() const { return ____handleRfc1950HeaderBytes_8; }
	inline bool* get_address_of__handleRfc1950HeaderBytes_8() { return &____handleRfc1950HeaderBytes_8; }
	inline void set__handleRfc1950HeaderBytes_8(bool value)
	{
		____handleRfc1950HeaderBytes_8 = value;
	}

	inline static int32_t get_offset_of_wbits_9() { return static_cast<int32_t>(offsetof(InflateManager_tAA662ABBD3E02BE2870F5EF55A80B30A3969868D, ___wbits_9)); }
	inline int32_t get_wbits_9() const { return ___wbits_9; }
	inline int32_t* get_address_of_wbits_9() { return &___wbits_9; }
	inline void set_wbits_9(int32_t value)
	{
		___wbits_9 = value;
	}

	inline static int32_t get_offset_of_blocks_10() { return static_cast<int32_t>(offsetof(InflateManager_tAA662ABBD3E02BE2870F5EF55A80B30A3969868D, ___blocks_10)); }
	inline InflateBlocks_tFB689A4C8CAD4F7ABA36F08F2F07AADF5F550809 * get_blocks_10() const { return ___blocks_10; }
	inline InflateBlocks_tFB689A4C8CAD4F7ABA36F08F2F07AADF5F550809 ** get_address_of_blocks_10() { return &___blocks_10; }
	inline void set_blocks_10(InflateBlocks_tFB689A4C8CAD4F7ABA36F08F2F07AADF5F550809 * value)
	{
		___blocks_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___blocks_10), (void*)value);
	}
};

struct InflateManager_tAA662ABBD3E02BE2870F5EF55A80B30A3969868D_StaticFields
{
public:
	// System.Byte[] Zlib.InflateManager::mark
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___mark_11;

public:
	inline static int32_t get_offset_of_mark_11() { return static_cast<int32_t>(offsetof(InflateManager_tAA662ABBD3E02BE2870F5EF55A80B30A3969868D_StaticFields, ___mark_11)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_mark_11() const { return ___mark_11; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_mark_11() { return &___mark_11; }
	inline void set_mark_11(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___mark_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mark_11), (void*)value);
	}
};


// Zlib.ZlibBaseStream
struct  ZlibBaseStream_t688531D0B4CFAB3252FD72AE0DFAF4946C7BA42C  : public Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7
{
public:
	// Zlib.ZlibCodec Zlib.ZlibBaseStream::_z
	ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965 * ____z_5;
	// System.Int32 Zlib.ZlibBaseStream::DataToRead
	int32_t ___DataToRead_6;
	// Zlib.ZlibBaseStream_StreamMode Zlib.ZlibBaseStream::_streamMode
	int32_t ____streamMode_7;
	// Zlib.FlushType Zlib.ZlibBaseStream::_flushMode
	int32_t ____flushMode_8;
	// Zlib.CompressionMode Zlib.ZlibBaseStream::_compressionMode
	int32_t ____compressionMode_9;
	// Zlib.CompressionLevel Zlib.ZlibBaseStream::_level
	int32_t ____level_10;
	// System.Boolean Zlib.ZlibBaseStream::_leaveOpen
	bool ____leaveOpen_11;
	// System.Byte[] Zlib.ZlibBaseStream::_workingBuffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____workingBuffer_12;
	// System.Int32 Zlib.ZlibBaseStream::_bufferSize
	int32_t ____bufferSize_13;
	// System.Byte[] Zlib.ZlibBaseStream::_buf1
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____buf1_14;
	// System.IO.Stream Zlib.ZlibBaseStream::_stream
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ____stream_15;
	// Zlib.CompressionStrategy Zlib.ZlibBaseStream::Strategy
	int32_t ___Strategy_16;
	// System.Boolean Zlib.ZlibBaseStream::nomoreinput
	bool ___nomoreinput_17;

public:
	inline static int32_t get_offset_of__z_5() { return static_cast<int32_t>(offsetof(ZlibBaseStream_t688531D0B4CFAB3252FD72AE0DFAF4946C7BA42C, ____z_5)); }
	inline ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965 * get__z_5() const { return ____z_5; }
	inline ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965 ** get_address_of__z_5() { return &____z_5; }
	inline void set__z_5(ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965 * value)
	{
		____z_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____z_5), (void*)value);
	}

	inline static int32_t get_offset_of_DataToRead_6() { return static_cast<int32_t>(offsetof(ZlibBaseStream_t688531D0B4CFAB3252FD72AE0DFAF4946C7BA42C, ___DataToRead_6)); }
	inline int32_t get_DataToRead_6() const { return ___DataToRead_6; }
	inline int32_t* get_address_of_DataToRead_6() { return &___DataToRead_6; }
	inline void set_DataToRead_6(int32_t value)
	{
		___DataToRead_6 = value;
	}

	inline static int32_t get_offset_of__streamMode_7() { return static_cast<int32_t>(offsetof(ZlibBaseStream_t688531D0B4CFAB3252FD72AE0DFAF4946C7BA42C, ____streamMode_7)); }
	inline int32_t get__streamMode_7() const { return ____streamMode_7; }
	inline int32_t* get_address_of__streamMode_7() { return &____streamMode_7; }
	inline void set__streamMode_7(int32_t value)
	{
		____streamMode_7 = value;
	}

	inline static int32_t get_offset_of__flushMode_8() { return static_cast<int32_t>(offsetof(ZlibBaseStream_t688531D0B4CFAB3252FD72AE0DFAF4946C7BA42C, ____flushMode_8)); }
	inline int32_t get__flushMode_8() const { return ____flushMode_8; }
	inline int32_t* get_address_of__flushMode_8() { return &____flushMode_8; }
	inline void set__flushMode_8(int32_t value)
	{
		____flushMode_8 = value;
	}

	inline static int32_t get_offset_of__compressionMode_9() { return static_cast<int32_t>(offsetof(ZlibBaseStream_t688531D0B4CFAB3252FD72AE0DFAF4946C7BA42C, ____compressionMode_9)); }
	inline int32_t get__compressionMode_9() const { return ____compressionMode_9; }
	inline int32_t* get_address_of__compressionMode_9() { return &____compressionMode_9; }
	inline void set__compressionMode_9(int32_t value)
	{
		____compressionMode_9 = value;
	}

	inline static int32_t get_offset_of__level_10() { return static_cast<int32_t>(offsetof(ZlibBaseStream_t688531D0B4CFAB3252FD72AE0DFAF4946C7BA42C, ____level_10)); }
	inline int32_t get__level_10() const { return ____level_10; }
	inline int32_t* get_address_of__level_10() { return &____level_10; }
	inline void set__level_10(int32_t value)
	{
		____level_10 = value;
	}

	inline static int32_t get_offset_of__leaveOpen_11() { return static_cast<int32_t>(offsetof(ZlibBaseStream_t688531D0B4CFAB3252FD72AE0DFAF4946C7BA42C, ____leaveOpen_11)); }
	inline bool get__leaveOpen_11() const { return ____leaveOpen_11; }
	inline bool* get_address_of__leaveOpen_11() { return &____leaveOpen_11; }
	inline void set__leaveOpen_11(bool value)
	{
		____leaveOpen_11 = value;
	}

	inline static int32_t get_offset_of__workingBuffer_12() { return static_cast<int32_t>(offsetof(ZlibBaseStream_t688531D0B4CFAB3252FD72AE0DFAF4946C7BA42C, ____workingBuffer_12)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get__workingBuffer_12() const { return ____workingBuffer_12; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of__workingBuffer_12() { return &____workingBuffer_12; }
	inline void set__workingBuffer_12(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		____workingBuffer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____workingBuffer_12), (void*)value);
	}

	inline static int32_t get_offset_of__bufferSize_13() { return static_cast<int32_t>(offsetof(ZlibBaseStream_t688531D0B4CFAB3252FD72AE0DFAF4946C7BA42C, ____bufferSize_13)); }
	inline int32_t get__bufferSize_13() const { return ____bufferSize_13; }
	inline int32_t* get_address_of__bufferSize_13() { return &____bufferSize_13; }
	inline void set__bufferSize_13(int32_t value)
	{
		____bufferSize_13 = value;
	}

	inline static int32_t get_offset_of__buf1_14() { return static_cast<int32_t>(offsetof(ZlibBaseStream_t688531D0B4CFAB3252FD72AE0DFAF4946C7BA42C, ____buf1_14)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get__buf1_14() const { return ____buf1_14; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of__buf1_14() { return &____buf1_14; }
	inline void set__buf1_14(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		____buf1_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buf1_14), (void*)value);
	}

	inline static int32_t get_offset_of__stream_15() { return static_cast<int32_t>(offsetof(ZlibBaseStream_t688531D0B4CFAB3252FD72AE0DFAF4946C7BA42C, ____stream_15)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get__stream_15() const { return ____stream_15; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of__stream_15() { return &____stream_15; }
	inline void set__stream_15(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		____stream_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stream_15), (void*)value);
	}

	inline static int32_t get_offset_of_Strategy_16() { return static_cast<int32_t>(offsetof(ZlibBaseStream_t688531D0B4CFAB3252FD72AE0DFAF4946C7BA42C, ___Strategy_16)); }
	inline int32_t get_Strategy_16() const { return ___Strategy_16; }
	inline int32_t* get_address_of_Strategy_16() { return &___Strategy_16; }
	inline void set_Strategy_16(int32_t value)
	{
		___Strategy_16 = value;
	}

	inline static int32_t get_offset_of_nomoreinput_17() { return static_cast<int32_t>(offsetof(ZlibBaseStream_t688531D0B4CFAB3252FD72AE0DFAF4946C7BA42C, ___nomoreinput_17)); }
	inline bool get_nomoreinput_17() const { return ___nomoreinput_17; }
	inline bool* get_address_of_nomoreinput_17() { return &___nomoreinput_17; }
	inline void set_nomoreinput_17(bool value)
	{
		___nomoreinput_17 = value;
	}
};


// Zlib.ZlibCodec
struct  ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965  : public RuntimeObject
{
public:
	// System.Byte[] Zlib.ZlibCodec::InputBuffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___InputBuffer_0;
	// System.Int32 Zlib.ZlibCodec::NextIn
	int32_t ___NextIn_1;
	// System.Int32 Zlib.ZlibCodec::AvailableBytesIn
	int32_t ___AvailableBytesIn_2;
	// System.Int64 Zlib.ZlibCodec::TotalBytesIn
	int64_t ___TotalBytesIn_3;
	// System.Byte[] Zlib.ZlibCodec::OutputBuffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___OutputBuffer_4;
	// System.Int32 Zlib.ZlibCodec::NextOut
	int32_t ___NextOut_5;
	// System.Int32 Zlib.ZlibCodec::AvailableBytesOut
	int32_t ___AvailableBytesOut_6;
	// System.Int64 Zlib.ZlibCodec::TotalBytesOut
	int64_t ___TotalBytesOut_7;
	// System.String Zlib.ZlibCodec::Message
	String_t* ___Message_8;
	// Zlib.DeflateManager Zlib.ZlibCodec::dstate
	DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42 * ___dstate_9;
	// Zlib.InflateManager Zlib.ZlibCodec::istate
	InflateManager_tAA662ABBD3E02BE2870F5EF55A80B30A3969868D * ___istate_10;
	// System.UInt32 Zlib.ZlibCodec::_Adler32
	uint32_t ____Adler32_11;
	// Zlib.CompressionLevel Zlib.ZlibCodec::CompressLevel
	int32_t ___CompressLevel_12;
	// System.Int32 Zlib.ZlibCodec::WindowBits
	int32_t ___WindowBits_13;
	// Zlib.CompressionStrategy Zlib.ZlibCodec::Strategy
	int32_t ___Strategy_14;

public:
	inline static int32_t get_offset_of_InputBuffer_0() { return static_cast<int32_t>(offsetof(ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965, ___InputBuffer_0)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_InputBuffer_0() const { return ___InputBuffer_0; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_InputBuffer_0() { return &___InputBuffer_0; }
	inline void set_InputBuffer_0(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___InputBuffer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InputBuffer_0), (void*)value);
	}

	inline static int32_t get_offset_of_NextIn_1() { return static_cast<int32_t>(offsetof(ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965, ___NextIn_1)); }
	inline int32_t get_NextIn_1() const { return ___NextIn_1; }
	inline int32_t* get_address_of_NextIn_1() { return &___NextIn_1; }
	inline void set_NextIn_1(int32_t value)
	{
		___NextIn_1 = value;
	}

	inline static int32_t get_offset_of_AvailableBytesIn_2() { return static_cast<int32_t>(offsetof(ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965, ___AvailableBytesIn_2)); }
	inline int32_t get_AvailableBytesIn_2() const { return ___AvailableBytesIn_2; }
	inline int32_t* get_address_of_AvailableBytesIn_2() { return &___AvailableBytesIn_2; }
	inline void set_AvailableBytesIn_2(int32_t value)
	{
		___AvailableBytesIn_2 = value;
	}

	inline static int32_t get_offset_of_TotalBytesIn_3() { return static_cast<int32_t>(offsetof(ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965, ___TotalBytesIn_3)); }
	inline int64_t get_TotalBytesIn_3() const { return ___TotalBytesIn_3; }
	inline int64_t* get_address_of_TotalBytesIn_3() { return &___TotalBytesIn_3; }
	inline void set_TotalBytesIn_3(int64_t value)
	{
		___TotalBytesIn_3 = value;
	}

	inline static int32_t get_offset_of_OutputBuffer_4() { return static_cast<int32_t>(offsetof(ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965, ___OutputBuffer_4)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_OutputBuffer_4() const { return ___OutputBuffer_4; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_OutputBuffer_4() { return &___OutputBuffer_4; }
	inline void set_OutputBuffer_4(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___OutputBuffer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OutputBuffer_4), (void*)value);
	}

	inline static int32_t get_offset_of_NextOut_5() { return static_cast<int32_t>(offsetof(ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965, ___NextOut_5)); }
	inline int32_t get_NextOut_5() const { return ___NextOut_5; }
	inline int32_t* get_address_of_NextOut_5() { return &___NextOut_5; }
	inline void set_NextOut_5(int32_t value)
	{
		___NextOut_5 = value;
	}

	inline static int32_t get_offset_of_AvailableBytesOut_6() { return static_cast<int32_t>(offsetof(ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965, ___AvailableBytesOut_6)); }
	inline int32_t get_AvailableBytesOut_6() const { return ___AvailableBytesOut_6; }
	inline int32_t* get_address_of_AvailableBytesOut_6() { return &___AvailableBytesOut_6; }
	inline void set_AvailableBytesOut_6(int32_t value)
	{
		___AvailableBytesOut_6 = value;
	}

	inline static int32_t get_offset_of_TotalBytesOut_7() { return static_cast<int32_t>(offsetof(ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965, ___TotalBytesOut_7)); }
	inline int64_t get_TotalBytesOut_7() const { return ___TotalBytesOut_7; }
	inline int64_t* get_address_of_TotalBytesOut_7() { return &___TotalBytesOut_7; }
	inline void set_TotalBytesOut_7(int64_t value)
	{
		___TotalBytesOut_7 = value;
	}

	inline static int32_t get_offset_of_Message_8() { return static_cast<int32_t>(offsetof(ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965, ___Message_8)); }
	inline String_t* get_Message_8() const { return ___Message_8; }
	inline String_t** get_address_of_Message_8() { return &___Message_8; }
	inline void set_Message_8(String_t* value)
	{
		___Message_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Message_8), (void*)value);
	}

	inline static int32_t get_offset_of_dstate_9() { return static_cast<int32_t>(offsetof(ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965, ___dstate_9)); }
	inline DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42 * get_dstate_9() const { return ___dstate_9; }
	inline DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42 ** get_address_of_dstate_9() { return &___dstate_9; }
	inline void set_dstate_9(DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42 * value)
	{
		___dstate_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dstate_9), (void*)value);
	}

	inline static int32_t get_offset_of_istate_10() { return static_cast<int32_t>(offsetof(ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965, ___istate_10)); }
	inline InflateManager_tAA662ABBD3E02BE2870F5EF55A80B30A3969868D * get_istate_10() const { return ___istate_10; }
	inline InflateManager_tAA662ABBD3E02BE2870F5EF55A80B30A3969868D ** get_address_of_istate_10() { return &___istate_10; }
	inline void set_istate_10(InflateManager_tAA662ABBD3E02BE2870F5EF55A80B30A3969868D * value)
	{
		___istate_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___istate_10), (void*)value);
	}

	inline static int32_t get_offset_of__Adler32_11() { return static_cast<int32_t>(offsetof(ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965, ____Adler32_11)); }
	inline uint32_t get__Adler32_11() const { return ____Adler32_11; }
	inline uint32_t* get_address_of__Adler32_11() { return &____Adler32_11; }
	inline void set__Adler32_11(uint32_t value)
	{
		____Adler32_11 = value;
	}

	inline static int32_t get_offset_of_CompressLevel_12() { return static_cast<int32_t>(offsetof(ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965, ___CompressLevel_12)); }
	inline int32_t get_CompressLevel_12() const { return ___CompressLevel_12; }
	inline int32_t* get_address_of_CompressLevel_12() { return &___CompressLevel_12; }
	inline void set_CompressLevel_12(int32_t value)
	{
		___CompressLevel_12 = value;
	}

	inline static int32_t get_offset_of_WindowBits_13() { return static_cast<int32_t>(offsetof(ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965, ___WindowBits_13)); }
	inline int32_t get_WindowBits_13() const { return ___WindowBits_13; }
	inline int32_t* get_address_of_WindowBits_13() { return &___WindowBits_13; }
	inline void set_WindowBits_13(int32_t value)
	{
		___WindowBits_13 = value;
	}

	inline static int32_t get_offset_of_Strategy_14() { return static_cast<int32_t>(offsetof(ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965, ___Strategy_14)); }
	inline int32_t get_Strategy_14() const { return ___Strategy_14; }
	inline int32_t* get_address_of_Strategy_14() { return &___Strategy_14; }
	inline void set_Strategy_14(int32_t value)
	{
		___Strategy_14 = value;
	}
};


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Collider
struct  Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Renderer
struct  Renderer_t0556D67DD582620D1F495627EDE30D03284151F4  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// disassemble
struct  disassemble_t80F8530BAD34D4BF509CEEF7A23DEACFFFE2FCD9  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.GameObject disassemble::vasen
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___vasen_4;
	// UnityEngine.GameObject disassemble::oikea
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___oikea_5;
	// UnityEngine.GameObject disassemble::ylUF6s
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___ylUF6s_6;
	// UnityEngine.GameObject disassemble::alas
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___alas_7;
	// UnityEngine.Vector3 disassemble::startPos
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___startPos_8;
	// UnityEngine.Vector3 disassemble::endPos
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___endPos_9;
	// System.Single disassemble::distance
	float ___distance_10;
	// System.Single disassemble::lerpTime
	float ___lerpTime_11;
	// System.Single disassemble::currentLerptime
	float ___currentLerptime_12;
	// System.Boolean disassemble::keyHit
	bool ___keyHit_13;
	// System.Single disassemble::speed
	float ___speed_14;

public:
	inline static int32_t get_offset_of_vasen_4() { return static_cast<int32_t>(offsetof(disassemble_t80F8530BAD34D4BF509CEEF7A23DEACFFFE2FCD9, ___vasen_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_vasen_4() const { return ___vasen_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_vasen_4() { return &___vasen_4; }
	inline void set_vasen_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___vasen_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vasen_4), (void*)value);
	}

	inline static int32_t get_offset_of_oikea_5() { return static_cast<int32_t>(offsetof(disassemble_t80F8530BAD34D4BF509CEEF7A23DEACFFFE2FCD9, ___oikea_5)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_oikea_5() const { return ___oikea_5; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_oikea_5() { return &___oikea_5; }
	inline void set_oikea_5(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___oikea_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___oikea_5), (void*)value);
	}

	inline static int32_t get_offset_of_ylUF6s_6() { return static_cast<int32_t>(offsetof(disassemble_t80F8530BAD34D4BF509CEEF7A23DEACFFFE2FCD9, ___ylUF6s_6)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_ylUF6s_6() const { return ___ylUF6s_6; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_ylUF6s_6() { return &___ylUF6s_6; }
	inline void set_ylUF6s_6(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___ylUF6s_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ylUF6s_6), (void*)value);
	}

	inline static int32_t get_offset_of_alas_7() { return static_cast<int32_t>(offsetof(disassemble_t80F8530BAD34D4BF509CEEF7A23DEACFFFE2FCD9, ___alas_7)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_alas_7() const { return ___alas_7; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_alas_7() { return &___alas_7; }
	inline void set_alas_7(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___alas_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___alas_7), (void*)value);
	}

	inline static int32_t get_offset_of_startPos_8() { return static_cast<int32_t>(offsetof(disassemble_t80F8530BAD34D4BF509CEEF7A23DEACFFFE2FCD9, ___startPos_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_startPos_8() const { return ___startPos_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_startPos_8() { return &___startPos_8; }
	inline void set_startPos_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___startPos_8 = value;
	}

	inline static int32_t get_offset_of_endPos_9() { return static_cast<int32_t>(offsetof(disassemble_t80F8530BAD34D4BF509CEEF7A23DEACFFFE2FCD9, ___endPos_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_endPos_9() const { return ___endPos_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_endPos_9() { return &___endPos_9; }
	inline void set_endPos_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___endPos_9 = value;
	}

	inline static int32_t get_offset_of_distance_10() { return static_cast<int32_t>(offsetof(disassemble_t80F8530BAD34D4BF509CEEF7A23DEACFFFE2FCD9, ___distance_10)); }
	inline float get_distance_10() const { return ___distance_10; }
	inline float* get_address_of_distance_10() { return &___distance_10; }
	inline void set_distance_10(float value)
	{
		___distance_10 = value;
	}

	inline static int32_t get_offset_of_lerpTime_11() { return static_cast<int32_t>(offsetof(disassemble_t80F8530BAD34D4BF509CEEF7A23DEACFFFE2FCD9, ___lerpTime_11)); }
	inline float get_lerpTime_11() const { return ___lerpTime_11; }
	inline float* get_address_of_lerpTime_11() { return &___lerpTime_11; }
	inline void set_lerpTime_11(float value)
	{
		___lerpTime_11 = value;
	}

	inline static int32_t get_offset_of_currentLerptime_12() { return static_cast<int32_t>(offsetof(disassemble_t80F8530BAD34D4BF509CEEF7A23DEACFFFE2FCD9, ___currentLerptime_12)); }
	inline float get_currentLerptime_12() const { return ___currentLerptime_12; }
	inline float* get_address_of_currentLerptime_12() { return &___currentLerptime_12; }
	inline void set_currentLerptime_12(float value)
	{
		___currentLerptime_12 = value;
	}

	inline static int32_t get_offset_of_keyHit_13() { return static_cast<int32_t>(offsetof(disassemble_t80F8530BAD34D4BF509CEEF7A23DEACFFFE2FCD9, ___keyHit_13)); }
	inline bool get_keyHit_13() const { return ___keyHit_13; }
	inline bool* get_address_of_keyHit_13() { return &___keyHit_13; }
	inline void set_keyHit_13(bool value)
	{
		___keyHit_13 = value;
	}

	inline static int32_t get_offset_of_speed_14() { return static_cast<int32_t>(offsetof(disassemble_t80F8530BAD34D4BF509CEEF7A23DEACFFFE2FCD9, ___speed_14)); }
	inline float get_speed_14() const { return ___speed_14; }
	inline float* get_address_of_speed_14() { return &___speed_14; }
	inline void set_speed_14(float value)
	{
		___speed_14 = value;
	}
};


// loadTxt
struct  loadTxt_tBE40CFCDB2EB63B876F74F4BF8D527A4C5A83E96  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.String loadTxt::text
	String_t* ___text_4;

public:
	inline static int32_t get_offset_of_text_4() { return static_cast<int32_t>(offsetof(loadTxt_tBE40CFCDB2EB63B876F74F4BF8D527A4C5A83E96, ___text_4)); }
	inline String_t* get_text_4() const { return ___text_4; }
	inline String_t** get_address_of_text_4() { return &___text_4; }
	inline void set_text_4(String_t* value)
	{
		___text_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_4), (void*)value);
	}
};


// picswitch
struct  picswitch_tDA42A6C0AFBB9A2F8F9667AE0736CCDE7A58B083  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Material[] picswitch::materials
	MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* ___materials_4;
	// UnityEngine.Renderer picswitch::rend
	Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * ___rend_5;
	// System.Int32 picswitch::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_materials_4() { return static_cast<int32_t>(offsetof(picswitch_tDA42A6C0AFBB9A2F8F9667AE0736CCDE7A58B083, ___materials_4)); }
	inline MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* get_materials_4() const { return ___materials_4; }
	inline MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398** get_address_of_materials_4() { return &___materials_4; }
	inline void set_materials_4(MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* value)
	{
		___materials_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___materials_4), (void*)value);
	}

	inline static int32_t get_offset_of_rend_5() { return static_cast<int32_t>(offsetof(picswitch_tDA42A6C0AFBB9A2F8F9667AE0736CCDE7A58B083, ___rend_5)); }
	inline Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * get_rend_5() const { return ___rend_5; }
	inline Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 ** get_address_of_rend_5() { return &___rend_5; }
	inline void set_rend_5(Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * value)
	{
		___rend_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rend_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(picswitch_tDA42A6C0AFBB9A2F8F9667AE0736CCDE7A58B083, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};


// trigger
struct  trigger_t4FC08C765C0D1A52C95179247ED4801A50F0E14C  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// UnityEngine.UI.Graphic
struct  Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_RectTransform_11;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * ___m_CanvasRenderer_12;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * ___m_Canvas_13;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_14;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_15;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyLayoutCallback_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyVertsCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyMaterialCallback_18;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___m_CachedMesh_21;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ___m_CachedUvs_22;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * ___m_ColorTweenRunner_23;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Material_6)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Color_7)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_11() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_RectTransform_11)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_RectTransform_11() const { return ___m_RectTransform_11; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_RectTransform_11() { return &___m_RectTransform_11; }
	inline void set_m_RectTransform_11(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_RectTransform_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_12() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CanvasRenderer_12)); }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * get_m_CanvasRenderer_12() const { return ___m_CanvasRenderer_12; }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 ** get_address_of_m_CanvasRenderer_12() { return &___m_CanvasRenderer_12; }
	inline void set_m_CanvasRenderer_12(CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * value)
	{
		___m_CanvasRenderer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_13() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Canvas_13)); }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * get_m_Canvas_13() const { return ___m_Canvas_13; }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 ** get_address_of_m_Canvas_13() { return &___m_Canvas_13; }
	inline void set_m_Canvas_13(Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * value)
	{
		___m_Canvas_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_14() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_VertsDirty_14)); }
	inline bool get_m_VertsDirty_14() const { return ___m_VertsDirty_14; }
	inline bool* get_address_of_m_VertsDirty_14() { return &___m_VertsDirty_14; }
	inline void set_m_VertsDirty_14(bool value)
	{
		___m_VertsDirty_14 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_MaterialDirty_15)); }
	inline bool get_m_MaterialDirty_15() const { return ___m_MaterialDirty_15; }
	inline bool* get_address_of_m_MaterialDirty_15() { return &___m_MaterialDirty_15; }
	inline void set_m_MaterialDirty_15(bool value)
	{
		___m_MaterialDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_16() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyLayoutCallback_16)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyLayoutCallback_16() const { return ___m_OnDirtyLayoutCallback_16; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyLayoutCallback_16() { return &___m_OnDirtyLayoutCallback_16; }
	inline void set_m_OnDirtyLayoutCallback_16(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyLayoutCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyVertsCallback_17)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyVertsCallback_17() const { return ___m_OnDirtyVertsCallback_17; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyVertsCallback_17() { return &___m_OnDirtyVertsCallback_17; }
	inline void set_m_OnDirtyVertsCallback_17(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyVertsCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyMaterialCallback_18)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyMaterialCallback_18() const { return ___m_OnDirtyMaterialCallback_18; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyMaterialCallback_18() { return &___m_OnDirtyMaterialCallback_18; }
	inline void set_m_OnDirtyMaterialCallback_18(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyMaterialCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_21() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CachedMesh_21)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_m_CachedMesh_21() const { return ___m_CachedMesh_21; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_m_CachedMesh_21() { return &___m_CachedMesh_21; }
	inline void set_m_CachedMesh_21(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___m_CachedMesh_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_22() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CachedUvs_22)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get_m_CachedUvs_22() const { return ___m_CachedUvs_22; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of_m_CachedUvs_22() { return &___m_CachedUvs_22; }
	inline void set_m_CachedUvs_22(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		___m_CachedUvs_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_23() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_ColorTweenRunner_23)); }
	inline TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * get_m_ColorTweenRunner_23() const { return ___m_ColorTweenRunner_23; }
	inline TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 ** get_address_of_m_ColorTweenRunner_23() { return &___m_ColorTweenRunner_23; }
	inline void set_m_ColorTweenRunner_23(TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * value)
	{
		___m_ColorTweenRunner_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_23), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_24; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_24(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_24 = value;
	}
};

struct Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___s_Mesh_19;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * ___s_VertexHelper_20;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_DefaultUI_4)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_19() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_Mesh_19)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_s_Mesh_19() const { return ___s_Mesh_19; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_s_Mesh_19() { return &___s_Mesh_19; }
	inline void set_s_Mesh_19(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___s_Mesh_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_20() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_VertexHelper_20)); }
	inline VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * get_s_VertexHelper_20() const { return ___s_VertexHelper_20; }
	inline VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F ** get_address_of_s_VertexHelper_20() { return &___s_VertexHelper_20; }
	inline void set_s_VertexHelper_20(VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * value)
	{
		___s_VertexHelper_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_20), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F  : public Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_25;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_MaskMaterial_26;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * ___m_ParentMask_27;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_29;
	// UnityEngine.UI.MaskableGraphic_CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * ___m_OnCullStateChanged_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_31;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_32;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___m_Corners_33;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculateStencil_25)); }
	inline bool get_m_ShouldRecalculateStencil_25() const { return ___m_ShouldRecalculateStencil_25; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_25() { return &___m_ShouldRecalculateStencil_25; }
	inline void set_m_ShouldRecalculateStencil_25(bool value)
	{
		___m_ShouldRecalculateStencil_25 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_MaskMaterial_26)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_MaskMaterial_26() const { return ___m_MaskMaterial_26; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_MaskMaterial_26() { return &___m_MaskMaterial_26; }
	inline void set_m_MaskMaterial_26(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_MaskMaterial_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ParentMask_27)); }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * get_m_ParentMask_27() const { return ___m_ParentMask_27; }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B ** get_address_of_m_ParentMask_27() { return &___m_ParentMask_27; }
	inline void set_m_ParentMask_27(RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * value)
	{
		___m_ParentMask_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Maskable_28)); }
	inline bool get_m_Maskable_28() const { return ___m_Maskable_28; }
	inline bool* get_address_of_m_Maskable_28() { return &___m_Maskable_28; }
	inline void set_m_Maskable_28(bool value)
	{
		___m_Maskable_28 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_IncludeForMasking_29)); }
	inline bool get_m_IncludeForMasking_29() const { return ___m_IncludeForMasking_29; }
	inline bool* get_address_of_m_IncludeForMasking_29() { return &___m_IncludeForMasking_29; }
	inline void set_m_IncludeForMasking_29(bool value)
	{
		___m_IncludeForMasking_29 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_OnCullStateChanged_30)); }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * get_m_OnCullStateChanged_30() const { return ___m_OnCullStateChanged_30; }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 ** get_address_of_m_OnCullStateChanged_30() { return &___m_OnCullStateChanged_30; }
	inline void set_m_OnCullStateChanged_30(CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * value)
	{
		___m_OnCullStateChanged_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculate_31)); }
	inline bool get_m_ShouldRecalculate_31() const { return ___m_ShouldRecalculate_31; }
	inline bool* get_address_of_m_ShouldRecalculate_31() { return &___m_ShouldRecalculate_31; }
	inline void set_m_ShouldRecalculate_31(bool value)
	{
		___m_ShouldRecalculate_31 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_StencilValue_32)); }
	inline int32_t get_m_StencilValue_32() const { return ___m_StencilValue_32; }
	inline int32_t* get_address_of_m_StencilValue_32() { return &___m_StencilValue_32; }
	inline void set_m_StencilValue_32(int32_t value)
	{
		___m_StencilValue_32 = value;
	}

	inline static int32_t get_offset_of_m_Corners_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Corners_33)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_m_Corners_33() const { return ___m_Corners_33; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_m_Corners_33() { return &___m_Corners_33; }
	inline void set_m_Corners_33(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___m_Corners_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_33), (void*)value);
	}
};


// UnityEngine.UI.Text
struct  Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030  : public MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * ___m_FontData_34;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_35;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * ___m_TextCache_36;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * ___m_TextCacheForLayout_37;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_39;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* ___m_TempVerts_40;

public:
	inline static int32_t get_offset_of_m_FontData_34() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_FontData_34)); }
	inline FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * get_m_FontData_34() const { return ___m_FontData_34; }
	inline FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 ** get_address_of_m_FontData_34() { return &___m_FontData_34; }
	inline void set_m_FontData_34(FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * value)
	{
		___m_FontData_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_34), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_35() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_Text_35)); }
	inline String_t* get_m_Text_35() const { return ___m_Text_35; }
	inline String_t** get_address_of_m_Text_35() { return &___m_Text_35; }
	inline void set_m_Text_35(String_t* value)
	{
		___m_Text_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_35), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_36() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TextCache_36)); }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * get_m_TextCache_36() const { return ___m_TextCache_36; }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 ** get_address_of_m_TextCache_36() { return &___m_TextCache_36; }
	inline void set_m_TextCache_36(TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * value)
	{
		___m_TextCache_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_37() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TextCacheForLayout_37)); }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * get_m_TextCacheForLayout_37() const { return ___m_TextCacheForLayout_37; }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 ** get_address_of_m_TextCacheForLayout_37() { return &___m_TextCacheForLayout_37; }
	inline void set_m_TextCacheForLayout_37(TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * value)
	{
		___m_TextCacheForLayout_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_39() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_DisableFontTextureRebuiltCallback_39)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_39() const { return ___m_DisableFontTextureRebuiltCallback_39; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_39() { return &___m_DisableFontTextureRebuiltCallback_39; }
	inline void set_m_DisableFontTextureRebuiltCallback_39(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_39 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_40() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TempVerts_40)); }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* get_m_TempVerts_40() const { return ___m_TempVerts_40; }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A** get_address_of_m_TempVerts_40() { return &___m_TempVerts_40; }
	inline void set_m_TempVerts_40(UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* value)
	{
		___m_TempVerts_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_40), (void*)value);
	}
};

struct Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_DefaultText_38;

public:
	inline static int32_t get_offset_of_s_DefaultText_38() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_StaticFields, ___s_DefaultText_38)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_DefaultText_38() const { return ___s_DefaultText_38; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_DefaultText_38() { return &___s_DefaultText_38; }
	inline void set_s_DefaultText_38(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_DefaultText_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_38), (void*)value);
	}
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
// UnityEngine.Material[]
struct MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * m_Items[1];

public:
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);

// System.Void System.IO.Stream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream__ctor_m58342D6FD95230C6BA1058E5698AB4BAF0A4DBF5 (Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * __this, const RuntimeMethod* method);
// System.Void Zlib.ZlibCodec::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZlibCodec__ctor_m46CE9F223F4163978A70C27D023A34651761D39D (ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965 * __this, const RuntimeMethod* method);
// System.Int32 Zlib.ZlibCodec::InitializeInflate(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZlibCodec_InitializeInflate_mD8361F9D0F6E28B0013DB841137921DD7414F645 (ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965 * __this, bool ___expectRfc1950Header0, const RuntimeMethod* method);
// System.Int32 Zlib.ZlibCodec::InitializeDeflate(Zlib.CompressionLevel,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZlibCodec_InitializeDeflate_mF32A5422A51EEEC14909208A3EB15893F2D61B05 (ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965 * __this, int32_t ___level0, bool ___wantRfc1950Header1, const RuntimeMethod* method);
// System.Void Zlib.ZlibException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZlibException__ctor_m1C50FBADFBBA0F78D526FFB617F7F69543375725 (ZlibException_t30AE372C4D0EF362348E27A525BC285180DCF28F * __this, String_t* ___s0, const RuntimeMethod* method);
// Zlib.ZlibCodec Zlib.ZlibBaseStream::get_z()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965 * ZlibBaseStream_get_z_mDA17877313DBC2CE902D3A0A1E9ADFD76A135AD7 (ZlibBaseStream_t688531D0B4CFAB3252FD72AE0DFAF4946C7BA42C * __this, const RuntimeMethod* method);
// System.Byte[] Zlib.ZlibBaseStream::get_workingBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ZlibBaseStream_get_workingBuffer_mD122FDE20AE031C2ABD7DC229B910EAFB43D9AFE (ZlibBaseStream_t688531D0B4CFAB3252FD72AE0DFAF4946C7BA42C * __this, const RuntimeMethod* method);
// System.Boolean Zlib.ZlibBaseStream::get__wantCompress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ZlibBaseStream_get__wantCompress_m9B2AA6140F3BD23BB7F5AACD8884195938C2C32B (ZlibBaseStream_t688531D0B4CFAB3252FD72AE0DFAF4946C7BA42C * __this, const RuntimeMethod* method);
// System.Int32 Zlib.ZlibCodec::Inflate(Zlib.FlushType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZlibCodec_Inflate_m5EDD692FE4BBF0632C6FB93FA3E92564687B542C (ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965 * __this, int32_t ___flush0, const RuntimeMethod* method);
// System.Int32 Zlib.ZlibCodec::Deflate(Zlib.FlushType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZlibCodec_Deflate_m0CBAAB01255D3D52348263E4987DC6E33E8DDA62 (ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965 * __this, int32_t ___flush0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF4626905368D6558695A823466A1AF65EADB9923 (String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method);
// System.Int32 Zlib.ZlibCodec::EndDeflate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZlibCodec_EndDeflate_m96A27202006B1072345AE1F959202D7B30BBB0F2 (ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965 * __this, const RuntimeMethod* method);
// System.Int32 Zlib.ZlibCodec::EndInflate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZlibCodec_EndInflate_m8A7AE9BCEDF1E481FFE6B015A515BE7ECCB054A1 (ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965 * __this, const RuntimeMethod* method);
// System.Void System.NotImplementedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_m8BEA657E260FC05F0C6D2C43A6E9BC08040F59C4 (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * __this, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6 (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * __this, String_t* p0, const RuntimeMethod* method);
// System.Int32 System.Array::GetLowerBound(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_GetLowerBound_mDCFD284D55CFFA1DD8825D7FCF86A85EFB71FD1B (RuntimeArray * __this, int32_t p0, const RuntimeMethod* method);
// System.Int32 System.Array::GetLength(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_GetLength_m318900B10C3A93A30ABDC67DE161C8F6ABA4D359 (RuntimeArray * __this, int32_t p0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m26BBF75F9609FAD0B39C2242FEBAAD7D68F14D99 (String_t* p0, RuntimeObject * p1, RuntimeObject * p2, RuntimeObject * p3, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A (String_t* p0, RuntimeObject * p1, RuntimeObject * p2, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9 (const RuntimeMethod* method);
// System.Void System.IO.MemoryStream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m9D0F92C76EFEDA651B678A98EB693FD945286DC2 (MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * __this, const RuntimeMethod* method);
// System.Void System.IO.StreamReader::.ctor(System.IO.Stream,System.Text.Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamReader__ctor_mF319C927A1274118E912D93F2EB2AAE4DA17E3DC (StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E * __this, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * p0, Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * p1, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Int32 Zlib.ZlibCodec::InitializeDeflate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZlibCodec_InitializeDeflate_m3B14FEBE0FC480DE0814F8D5A1AD45D61A9FC413 (ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965 * __this, const RuntimeMethod* method);
// System.Int32 Zlib.ZlibCodec::InitializeInflate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZlibCodec_InitializeInflate_mB61960FD685895CC7D6FE193B3CDB694071F34C3 (ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965 * __this, const RuntimeMethod* method);
// System.Int32 Zlib.ZlibCodec::InitializeInflate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZlibCodec_InitializeInflate_mFAD3E0BFEBA3C7DE949989588F52FB0E0D52431F (ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965 * __this, int32_t ___windowBits0, const RuntimeMethod* method);
// System.Int32 Zlib.ZlibCodec::InitializeInflate(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZlibCodec_InitializeInflate_m19AD1D7E527D6FCCF8AD48182AC3CE02D6646B71 (ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965 * __this, int32_t ___windowBits0, bool ___expectRfc1950Header1, const RuntimeMethod* method);
// System.Void Zlib.InflateManager::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InflateManager__ctor_mC3820FCCFE88626FA2A3FECC9CB3B408E8C7619B (InflateManager_tAA662ABBD3E02BE2870F5EF55A80B30A3969868D * __this, bool ___expectRfc1950HeaderBytes0, const RuntimeMethod* method);
// System.Int32 Zlib.InflateManager::Initialize(Zlib.ZlibCodec,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InflateManager_Initialize_m321DA117441387128FE9D5A037871AE77D8DC98A (InflateManager_tAA662ABBD3E02BE2870F5EF55A80B30A3969868D * __this, ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965 * ___codec0, int32_t ___w1, const RuntimeMethod* method);
// System.Int32 Zlib.InflateManager::Inflate(Zlib.FlushType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InflateManager_Inflate_m31486A3067CA4A4A835F6E85CBD39027DFEDF27D (InflateManager_tAA662ABBD3E02BE2870F5EF55A80B30A3969868D * __this, int32_t ___flush0, const RuntimeMethod* method);
// System.Int32 Zlib.InflateManager::End()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InflateManager_End_mCE8061A039CC4D27ABC52122CC0BD236349EE020 (InflateManager_tAA662ABBD3E02BE2870F5EF55A80B30A3969868D * __this, const RuntimeMethod* method);
// System.Int32 Zlib.InflateManager::Sync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InflateManager_Sync_mEB19C4171CEED803F942384F2F8ACF28D3C3186F (InflateManager_tAA662ABBD3E02BE2870F5EF55A80B30A3969868D * __this, const RuntimeMethod* method);
// System.Int32 Zlib.ZlibCodec::_InternalInitializeDeflate(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZlibCodec__InternalInitializeDeflate_m93EE1D35F993E0164C845763E96BA2C55F20A47A (ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965 * __this, bool ___wantRfc1950Header0, const RuntimeMethod* method);
// System.Void Zlib.DeflateManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager__ctor_mDDEF9ED2BF2AAC6FCF4AD44877E4F530A27A16AC (DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42 * __this, const RuntimeMethod* method);
// System.Void Zlib.DeflateManager::set_WantRfc1950HeaderBytes(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_set_WantRfc1950HeaderBytes_m37685B96EBD0D862AD8294D859BBCFBC7AFB135B (DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42 * __this, bool ___value0, const RuntimeMethod* method);
// System.Int32 Zlib.DeflateManager::Initialize(Zlib.ZlibCodec,Zlib.CompressionLevel,System.Int32,Zlib.CompressionStrategy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateManager_Initialize_mC154B1AD2B9B48EFF4096FC7B2599A11102A7E59 (DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42 * __this, ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965 * ___codec0, int32_t ___level1, int32_t ___bits2, int32_t ___compressionStrategy3, const RuntimeMethod* method);
// System.Int32 Zlib.DeflateManager::Deflate(Zlib.FlushType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateManager_Deflate_mCE8116B2801A5EEC89AD75B4F5D51FF030AE65A2 (DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42 * __this, int32_t ___flush0, const RuntimeMethod* method);
// System.Void Zlib.DeflateManager::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_Reset_m25F099C4B37119DA90867F6A671594E70F3E52E1 (DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42 * __this, const RuntimeMethod* method);
// System.Int32 Zlib.DeflateManager::SetParams(Zlib.CompressionLevel,Zlib.CompressionStrategy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateManager_SetParams_m3B19F031ECDD9D8315DE8E80B4514E05D6E0355D (DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42 * __this, int32_t ___level0, int32_t ___strategy1, const RuntimeMethod* method);
// System.Int32 Zlib.InflateManager::SetDictionary(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InflateManager_SetDictionary_mC68074E44AB9B4BE45E29587EA427284315EEDE5 (InflateManager_tAA662ABBD3E02BE2870F5EF55A80B30A3969868D * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___dictionary0, const RuntimeMethod* method);
// System.Int32 Zlib.DeflateManager::SetDictionary(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateManager_SetDictionary_mD3CFD84253DB4FFEFE422B8AD41DC22BB017B16F (DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___dictionary0, const RuntimeMethod* method);
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mA10D079DD8D9700CA44721A219A934A2397653F6 (RuntimeArray * p0, int32_t p1, RuntimeArray * p2, int32_t p3, int32_t p4, const RuntimeMethod* method);
// System.Boolean Zlib.DeflateManager::get_WantRfc1950HeaderBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeflateManager_get_WantRfc1950HeaderBytes_mB9BFA6E7F44004F1138DEB92AB445C7CA5C2CBCC (DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42 * __this, const RuntimeMethod* method);
// System.UInt32 Zlib.Adler::Adler32(System.UInt32,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Adler_Adler32_m76EAAC3936D2470FDC0FD831B5FF7FBE3CC226CA (uint32_t ___adler0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buf1, int32_t ___index2, int32_t ___len3, const RuntimeMethod* method);
// System.Void System.Exception::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m5FEC89FBFACEEDCEE29CCFD44A85D72FC28EB0D1 (Exception_t * __this, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0 (Exception_t * __this, String_t* p0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_left()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_left_m74B52D8CFD8C62138067B2EB6846B6E9E51B7C20 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, float p1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_mD82B14BB87E1C811668BD1A2CFBC0CF3D4983FEA (int32_t p0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_Lerp_m5BA75496B803820CC64079383956D73C6FD4A8A1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, float p2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// System.Void loadTxt::Lue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void loadTxt_Lue_m5E8795FCB492F4D5FF33BD21AD41DCC678E40814 (loadTxt_tBE40CFCDB2EB63B876F74F4BF8D527A4C5A83E96 * __this, const RuntimeMethod* method);
// System.String System.IO.File::ReadAllText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* File_ReadAllText_m404A1BE4C87AC3C7B9C0B07469CDC44DE52817FF (String_t* p0, const RuntimeMethod* method);
// System.Void loadTxt::Read(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void loadTxt_Read_mCF4A8F40F93D4B61972B99C6B9F4667D515B66B5 (loadTxt_tBE40CFCDB2EB63B876F74F4BF8D527A4C5A83E96 * __this, String_t* ___path0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Text>()
inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * GameObject_GetComponent_TisText_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_m24A42DAE3900B867697FFD9DFB6E448D6978CD4A (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_sharedMaterial(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_sharedMaterial_mC94A354D9B0FCA081754A7CB51AEE5A9AD3946A3 (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708 (RuntimeObject * p0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Zlib.ZlibBaseStream::.ctor(System.IO.Stream,Zlib.CompressionMode,Zlib.CompressionLevel,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZlibBaseStream__ctor_m8EBF53348CB09A39B831EAD0250E83744CB73B41 (ZlibBaseStream_t688531D0B4CFAB3252FD72AE0DFAF4946C7BA42C * __this, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___stream0, int32_t ___compressionMode1, int32_t ___level2, bool ___leaveOpen3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZlibBaseStream__ctor_m8EBF53348CB09A39B831EAD0250E83744CB73B41_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected internal int DataToRead=int.MaxValue;
		__this->set_DataToRead_6(((int32_t)2147483647LL));
		// protected internal StreamMode _streamMode = StreamMode.Undefined;
		__this->set__streamMode_7(2);
		// protected internal int _bufferSize = ZlibConstants.WorkingBufferSizeDefault;
		__this->set__bufferSize_13(((int32_t)4096));
		// protected internal byte[] _buf1 = new byte[1];
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->set__buf1_14(L_0);
		// : base()
		IL2CPP_RUNTIME_CLASS_INIT(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7_il2cpp_TypeInfo_var);
		Stream__ctor_m58342D6FD95230C6BA1058E5698AB4BAF0A4DBF5(__this, /*hidden argument*/NULL);
		// this._flushMode = FlushType.None;
		__this->set__flushMode_8(0);
		// this._stream = stream;
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_1 = ___stream0;
		__this->set__stream_15(L_1);
		// this._leaveOpen = leaveOpen;
		bool L_2 = ___leaveOpen3;
		__this->set__leaveOpen_11(L_2);
		// this._compressionMode = compressionMode;
		int32_t L_3 = ___compressionMode1;
		__this->set__compressionMode_9(L_3);
		// this._level = level;
		int32_t L_4 = ___level2;
		__this->set__level_10(L_4);
		// }
		return;
	}
}
// System.Boolean Zlib.ZlibBaseStream::get__wantCompress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ZlibBaseStream_get__wantCompress_m9B2AA6140F3BD23BB7F5AACD8884195938C2C32B (ZlibBaseStream_t688531D0B4CFAB3252FD72AE0DFAF4946C7BA42C * __this, const RuntimeMethod* method)
{
	{
		// return (this._compressionMode == CompressionMode.Compress);
		int32_t L_0 = __this->get__compressionMode_9();
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// Zlib.ZlibCodec Zlib.ZlibBaseStream::get_z()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965 * ZlibBaseStream_get_z_mDA17877313DBC2CE902D3A0A1E9ADFD76A135AD7 (ZlibBaseStream_t688531D0B4CFAB3252FD72AE0DFAF4946C7BA42C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZlibBaseStream_get_z_mDA17877313DBC2CE902D3A0A1E9ADFD76A135AD7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_z == null)
		ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965 * L_0 = __this->get__z_5();
		if (L_0)
		{
			goto IL_004f;
		}
	}
	{
		// _z = new ZlibCodec();
		ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965 * L_1 = (ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965 *)il2cpp_codegen_object_new(ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965_il2cpp_TypeInfo_var);
		ZlibCodec__ctor_m46CE9F223F4163978A70C27D023A34651761D39D(L_1, /*hidden argument*/NULL);
		__this->set__z_5(L_1);
		// if (this._compressionMode == CompressionMode.Decompress)
		int32_t L_2 = __this->get__compressionMode_9();
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_002b;
		}
	}
	{
		// _z.InitializeInflate(false);
		ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965 * L_3 = __this->get__z_5();
		NullCheck(L_3);
		ZlibCodec_InitializeInflate_mD8361F9D0F6E28B0013DB841137921DD7414F645(L_3, (bool)0, /*hidden argument*/NULL);
		// }
		goto IL_004f;
	}

IL_002b:
	{
		// _z.Strategy = Strategy;
		ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965 * L_4 = __this->get__z_5();
		int32_t L_5 = __this->get_Strategy_16();
		NullCheck(L_4);
		L_4->set_Strategy_14(L_5);
		// _z.InitializeDeflate(this._level, false);
		ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965 * L_6 = __this->get__z_5();
		int32_t L_7 = __this->get__level_10();
		NullCheck(L_6);
		ZlibCodec_InitializeDeflate_mF32A5422A51EEEC14909208A3EB15893F2D61B05(L_6, L_7, (bool)0, /*hidden argument*/NULL);
	}

IL_004f:
	{
		// return _z;
		ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965 * L_8 = __this->get__z_5();
		return L_8;
	}
}
// System.Int32 Zlib.ZlibBaseStream::get_bufferSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZlibBaseStream_get_bufferSize_m3BE5B5CDE517F82F8366FF1FC8014D8F018F57EA (ZlibBaseStream_t688531D0B4CFAB3252FD72AE0DFAF4946C7BA42C * __this, const RuntimeMethod* method)
{
	{
		// return _bufferSize;
		int32_t L_0 = __this->get__bufferSize_13();
		return L_0;
	}
}
// System.Void Zlib.ZlibBaseStream::set_bufferSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZlibBaseStream_set_bufferSize_mE95A205EC0D52DB9C1A76ED02502A785B02F2BBC (ZlibBaseStream_t688531D0B4CFAB3252FD72AE0DFAF4946C7BA42C * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// _bufferSize=value;
		int32_t L_0 = ___value0;
		__this->set__bufferSize_13(L_0);
		// }
		return;
	}
}
// System.Byte[] Zlib.ZlibBaseStream::get_workingBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ZlibBaseStream_get_workingBuffer_mD122FDE20AE031C2ABD7DC229B910EAFB43D9AFE (ZlibBaseStream_t688531D0B4CFAB3252FD72AE0DFAF4946C7BA42C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZlibBaseStream_get_workingBuffer_mD122FDE20AE031C2ABD7DC229B910EAFB43D9AFE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_workingBuffer == null)
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = __this->get__workingBuffer_12();
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		// _workingBuffer = new byte[_bufferSize];
		int32_t L_1 = __this->get__bufferSize_13();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)L_1);
		__this->set__workingBuffer_12(L_2);
	}

IL_0019:
	{
		// return _workingBuffer;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = __this->get__workingBuffer_12();
		return L_3;
	}
}
// System.Void Zlib.ZlibBaseStream::Write(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZlibBaseStream_Write_mBAF8756941D2B704E03FE752C6C294F225D33F57 (ZlibBaseStream_t688531D0B4CFAB3252FD72AE0DFAF4946C7BA42C * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZlibBaseStream_Write_mBAF8756941D2B704E03FE752C6C294F225D33F57_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t G_B10_0 = 0;
	String_t* G_B15_0 = NULL;
	int32_t G_B19_0 = 0;
	{
		// if (_streamMode == StreamMode.Undefined)
		int32_t L_0 = __this->get__streamMode_7();
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_0012;
		}
	}
	{
		// _streamMode = StreamMode.Writer;
		__this->set__streamMode_7(0);
		goto IL_0025;
	}

IL_0012:
	{
		// else if (_streamMode != StreamMode.Writer)
		int32_t L_1 = __this->get__streamMode_7();
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		// throw new ZlibException("Cannot Write after Reading.");
		ZlibException_t30AE372C4D0EF362348E27A525BC285180DCF28F * L_2 = (ZlibException_t30AE372C4D0EF362348E27A525BC285180DCF28F *)il2cpp_codegen_object_new(ZlibException_t30AE372C4D0EF362348E27A525BC285180DCF28F_il2cpp_TypeInfo_var);
		ZlibException__ctor_m1C50FBADFBBA0F78D526FFB617F7F69543375725(L_2, _stringLiteralE1B184FD28AC292B256AC9039AD1DA305A1DB149, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, ZlibBaseStream_Write_mBAF8756941D2B704E03FE752C6C294F225D33F57_RuntimeMethod_var);
	}

IL_0025:
	{
		// if (count == 0)
		int32_t L_3 = ___count2;
		if (L_3)
		{
			goto IL_0029;
		}
	}
	{
		// return;
		return;
	}

IL_0029:
	{
		// z.InputBuffer = buffer;
		ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965 * L_4 = ZlibBaseStream_get_z_mDA17877313DBC2CE902D3A0A1E9ADFD76A135AD7(__this, /*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_5 = ___buffer0;
		NullCheck(L_4);
		L_4->set_InputBuffer_0(L_5);
		// _z.NextIn = offset;
		ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965 * L_6 = __this->get__z_5();
		int32_t L_7 = ___offset1;
		NullCheck(L_6);
		L_6->set_NextIn_1(L_7);
		// _z.AvailableBytesIn = count;
		ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965 * L_8 = __this->get__z_5();
		int32_t L_9 = ___count2;
		NullCheck(L_8);
		L_8->set_AvailableBytesIn_2(L_9);
		// bool done = false;
		V_0 = (bool)0;
	}

IL_004f:
	{
		// _z.OutputBuffer = workingBuffer;
		ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965 * L_10 = __this->get__z_5();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_11 = ZlibBaseStream_get_workingBuffer_mD122FDE20AE031C2ABD7DC229B910EAFB43D9AFE(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		L_10->set_OutputBuffer_4(L_11);
		// _z.NextOut = 0;
		ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965 * L_12 = __this->get__z_5();
		NullCheck(L_12);
		L_12->set_NextOut_5(0);
		// _z.AvailableBytesOut = _workingBuffer.Length;
		ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965 * L_13 = __this->get__z_5();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_14 = __this->get__workingBuffer_12();
		NullCheck(L_14);
		NullCheck(L_13);
		L_13->set_AvailableBytesOut_6((((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))));
		// int rc = (_wantCompress)
		//     ? _z.Deflate(_flushMode)
		//     : _z.Inflate(_flushMode);
		bool L_15 = ZlibBaseStream_get__wantCompress_m9B2AA6140F3BD23BB7F5AACD8884195938C2C32B(__this, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_009a;
		}
	}
	{
		ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965 * L_16 = __this->get__z_5();
		int32_t L_17 = __this->get__flushMode_8();
		NullCheck(L_16);
		int32_t L_18 = ZlibCodec_Inflate_m5EDD692FE4BBF0632C6FB93FA3E92564687B542C(L_16, L_17, /*hidden argument*/NULL);
		G_B10_0 = L_18;
		goto IL_00ab;
	}

IL_009a:
	{
		ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965 * L_19 = __this->get__z_5();
		int32_t L_20 = __this->get__flushMode_8();
		NullCheck(L_19);
		int32_t L_21 = ZlibCodec_Deflate_m0CBAAB01255D3D52348263E4987DC6E33E8DDA62(L_19, L_20, /*hidden argument*/NULL);
		G_B10_0 = L_21;
	}

IL_00ab:
	{
		V_1 = G_B10_0;
		// if (rc != ZlibConstants.Z_OK && rc != ZlibConstants.Z_STREAM_END)
		int32_t L_22 = V_1;
		if (!L_22)
		{
			goto IL_00e2;
		}
	}
	{
		int32_t L_23 = V_1;
		if ((((int32_t)L_23) == ((int32_t)1)))
		{
			goto IL_00e2;
		}
	}
	{
		// throw new ZlibException((_wantCompress ? "de" : "in") + "flating: " + _z.Message);
		bool L_24 = ZlibBaseStream_get__wantCompress_m9B2AA6140F3BD23BB7F5AACD8884195938C2C32B(__this, /*hidden argument*/NULL);
		if (L_24)
		{
			goto IL_00c2;
		}
	}
	{
		G_B15_0 = _stringLiteralAF10EF20DD9060BBEEAD0AFBC55381A66AF442EF;
		goto IL_00c7;
	}

IL_00c2:
	{
		G_B15_0 = _stringLiteral600CCD1B71569232D01D110BC63E906BEAB04D8C;
	}

IL_00c7:
	{
		ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965 * L_25 = __this->get__z_5();
		NullCheck(L_25);
		String_t* L_26 = L_25->get_Message_8();
		String_t* L_27 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(G_B15_0, _stringLiteral51796AC29F50F5E732052A10903C85F5A3FEA6EE, L_26, /*hidden argument*/NULL);
		ZlibException_t30AE372C4D0EF362348E27A525BC285180DCF28F * L_28 = (ZlibException_t30AE372C4D0EF362348E27A525BC285180DCF28F *)il2cpp_codegen_object_new(ZlibException_t30AE372C4D0EF362348E27A525BC285180DCF28F_il2cpp_TypeInfo_var);
		ZlibException__ctor_m1C50FBADFBBA0F78D526FFB617F7F69543375725(L_28, L_27, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_28, NULL, ZlibBaseStream_Write_mBAF8756941D2B704E03FE752C6C294F225D33F57_RuntimeMethod_var);
	}

IL_00e2:
	{
		// _stream.Write(_workingBuffer, 0, _workingBuffer.Length - _z.AvailableBytesOut);
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_29 = __this->get__stream_15();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_30 = __this->get__workingBuffer_12();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_31 = __this->get__workingBuffer_12();
		NullCheck(L_31);
		ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965 * L_32 = __this->get__z_5();
		NullCheck(L_32);
		int32_t L_33 = L_32->get_AvailableBytesOut_6();
		NullCheck(L_29);
		VirtActionInvoker3< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(30 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_29, L_30, 0, ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_31)->max_length)))), (int32_t)L_33)));
		// done = _z.AvailableBytesIn == 0 && _z.AvailableBytesOut != 0;
		ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965 * L_34 = __this->get__z_5();
		NullCheck(L_34);
		int32_t L_35 = L_34->get_AvailableBytesIn_2();
		if (L_35)
		{
			goto IL_0125;
		}
	}
	{
		ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965 * L_36 = __this->get__z_5();
		NullCheck(L_36);
		int32_t L_37 = L_36->get_AvailableBytesOut_6();
		G_B19_0 = ((!(((uint32_t)L_37) <= ((uint32_t)0)))? 1 : 0);
		goto IL_0126;
	}

IL_0125:
	{
		G_B19_0 = 0;
	}

IL_0126:
	{
		V_0 = (bool)G_B19_0;
		// while (!done);
		bool L_38 = V_0;
		if (!L_38)
		{
			goto IL_004f;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Zlib.ZlibBaseStream::End()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZlibBaseStream_End_m58B929711004DB6A1A8F9C107CAF3E99F72C1BF7 (ZlibBaseStream_t688531D0B4CFAB3252FD72AE0DFAF4946C7BA42C * __this, const RuntimeMethod* method)
{
	{
		// if (z == null)
		ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965 * L_0 = ZlibBaseStream_get_z_mDA17877313DBC2CE902D3A0A1E9ADFD76A135AD7(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (_wantCompress)
		bool L_1 = ZlibBaseStream_get__wantCompress_m9B2AA6140F3BD23BB7F5AACD8884195938C2C32B(__this, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// _z.EndDeflate();
		ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965 * L_2 = __this->get__z_5();
		NullCheck(L_2);
		ZlibCodec_EndDeflate_m96A27202006B1072345AE1F959202D7B30BBB0F2(L_2, /*hidden argument*/NULL);
		// }
		goto IL_002b;
	}

IL_001f:
	{
		// _z.EndInflate();
		ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965 * L_3 = __this->get__z_5();
		NullCheck(L_3);
		ZlibCodec_EndInflate_m8A7AE9BCEDF1E481FFE6B015A515BE7ECCB054A1(L_3, /*hidden argument*/NULL);
	}

IL_002b:
	{
		// _z = null;
		__this->set__z_5((ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965 *)NULL);
		// }
		return;
	}
}
// System.Void Zlib.ZlibBaseStream::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZlibBaseStream_Flush_mA8236EA96DFFFA0DED3148E7EABD8C008BD2A68C (ZlibBaseStream_t688531D0B4CFAB3252FD72AE0DFAF4946C7BA42C * __this, const RuntimeMethod* method)
{
	{
		// _stream.Flush();
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_0 = __this->get__stream_15();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(18 /* System.Void System.IO.Stream::Flush() */, L_0);
		// }
		return;
	}
}
// System.Int64 Zlib.ZlibBaseStream::Seek(System.Int64,System.IO.SeekOrigin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ZlibBaseStream_Seek_m8017AAEC8983A047750A56FAE69A08E6FC0B0567 (ZlibBaseStream_t688531D0B4CFAB3252FD72AE0DFAF4946C7BA42C * __this, int64_t ___offset0, int32_t ___origin1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZlibBaseStream_Seek_m8017AAEC8983A047750A56FAE69A08E6FC0B0567_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// throw new NotImplementedException();
		NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * L_0 = (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 *)il2cpp_codegen_object_new(NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m8BEA657E260FC05F0C6D2C43A6E9BC08040F59C4(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, ZlibBaseStream_Seek_m8017AAEC8983A047750A56FAE69A08E6FC0B0567_RuntimeMethod_var);
	}
}
// System.Void Zlib.ZlibBaseStream::SetLength(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZlibBaseStream_SetLength_m771BC95E3F63509BCD3825AC663546A5FB9FD810 (ZlibBaseStream_t688531D0B4CFAB3252FD72AE0DFAF4946C7BA42C * __this, int64_t ___value0, const RuntimeMethod* method)
{
	{
		// _stream.SetLength(value);
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_0 = __this->get__stream_15();
		int64_t L_1 = ___value0;
		NullCheck(L_0);
		VirtActionInvoker1< int64_t >::Invoke(27 /* System.Void System.IO.Stream::SetLength(System.Int64) */, L_0, L_1);
		// }
		return;
	}
}
// System.Int32 Zlib.ZlibBaseStream::Read(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZlibBaseStream_Read_m4A21827ACC093F5D4E7A4C822C7FBACB8C4E4A74 (ZlibBaseStream_t688531D0B4CFAB3252FD72AE0DFAF4946C7BA42C * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZlibBaseStream_Read_m4A21827ACC093F5D4E7A4C822C7FBACB8C4E4A74_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B29_0 = 0;
	String_t* G_B36_0 = NULL;
	String_t* G_B35_0 = NULL;
	String_t* G_B37_0 = NULL;
	String_t* G_B37_1 = NULL;
	{
		// if (_streamMode == StreamMode.Undefined)
		int32_t L_0 = __this->get__streamMode_7();
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_0034;
		}
	}
	{
		// if (!this._stream.CanRead) throw new ZlibException("The stream is not readable.");
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_1 = __this->get__stream_15();
		NullCheck(L_1);
		bool L_2 = VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.IO.Stream::get_CanRead() */, L_1);
		if (L_2)
		{
			goto IL_0021;
		}
	}
	{
		// if (!this._stream.CanRead) throw new ZlibException("The stream is not readable.");
		ZlibException_t30AE372C4D0EF362348E27A525BC285180DCF28F * L_3 = (ZlibException_t30AE372C4D0EF362348E27A525BC285180DCF28F *)il2cpp_codegen_object_new(ZlibException_t30AE372C4D0EF362348E27A525BC285180DCF28F_il2cpp_TypeInfo_var);
		ZlibException__ctor_m1C50FBADFBBA0F78D526FFB617F7F69543375725(L_3, _stringLiteral88B906F85FB7924901EFA3985228FA8B8DF96A6E, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, ZlibBaseStream_Read_m4A21827ACC093F5D4E7A4C822C7FBACB8C4E4A74_RuntimeMethod_var);
	}

IL_0021:
	{
		// _streamMode = StreamMode.Reader;
		__this->set__streamMode_7(1);
		// z.AvailableBytesIn = 0;
		ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965 * L_4 = ZlibBaseStream_get_z_mDA17877313DBC2CE902D3A0A1E9ADFD76A135AD7(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		L_4->set_AvailableBytesIn_2(0);
	}

IL_0034:
	{
		// if (_streamMode != StreamMode.Reader)
		int32_t L_5 = __this->get__streamMode_7();
		if ((((int32_t)L_5) == ((int32_t)1)))
		{
			goto IL_0048;
		}
	}
	{
		// throw new ZlibException("Cannot Read after Writing.");
		ZlibException_t30AE372C4D0EF362348E27A525BC285180DCF28F * L_6 = (ZlibException_t30AE372C4D0EF362348E27A525BC285180DCF28F *)il2cpp_codegen_object_new(ZlibException_t30AE372C4D0EF362348E27A525BC285180DCF28F_il2cpp_TypeInfo_var);
		ZlibException__ctor_m1C50FBADFBBA0F78D526FFB617F7F69543375725(L_6, _stringLiteral125A52CC5385C9ADC36684E890AD6172D35E41BF, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, NULL, ZlibBaseStream_Read_m4A21827ACC093F5D4E7A4C822C7FBACB8C4E4A74_RuntimeMethod_var);
	}

IL_0048:
	{
		// if (count == 0) return 0;
		int32_t L_7 = ___count2;
		if (L_7)
		{
			goto IL_004d;
		}
	}
	{
		// if (count == 0) return 0;
		return 0;
	}

IL_004d:
	{
		// if (nomoreinput && _wantCompress) return 0;  // workitem 8557
		bool L_8 = __this->get_nomoreinput_17();
		if (!L_8)
		{
			goto IL_005f;
		}
	}
	{
		bool L_9 = ZlibBaseStream_get__wantCompress_m9B2AA6140F3BD23BB7F5AACD8884195938C2C32B(__this, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_005f;
		}
	}
	{
		// if (nomoreinput && _wantCompress) return 0;  // workitem 8557
		return 0;
	}

IL_005f:
	{
		// if (buffer == null) throw new ArgumentNullException("buffer");
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_10 = ___buffer0;
		if (L_10)
		{
			goto IL_006d;
		}
	}
	{
		// if (buffer == null) throw new ArgumentNullException("buffer");
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_11 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_11, _stringLiteralE53C2EA1FE4BD2B78BF4723C7C155A578E020A25, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, NULL, ZlibBaseStream_Read_m4A21827ACC093F5D4E7A4C822C7FBACB8C4E4A74_RuntimeMethod_var);
	}

IL_006d:
	{
		// if (count < 0) throw new ArgumentOutOfRangeException("count");
		int32_t L_12 = ___count2;
		if ((((int32_t)L_12) >= ((int32_t)0)))
		{
			goto IL_007c;
		}
	}
	{
		// if (count < 0) throw new ArgumentOutOfRangeException("count");
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_13 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6(L_13, _stringLiteralEE9F38E186BA06F57B7B74D7E626B94E13CE2556, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, NULL, ZlibBaseStream_Read_m4A21827ACC093F5D4E7A4C822C7FBACB8C4E4A74_RuntimeMethod_var);
	}

IL_007c:
	{
		// if (offset < buffer.GetLowerBound(0)) throw new ArgumentOutOfRangeException("offset");
		int32_t L_14 = ___offset1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_15 = ___buffer0;
		NullCheck((RuntimeArray *)(RuntimeArray *)L_15);
		int32_t L_16 = Array_GetLowerBound_mDCFD284D55CFFA1DD8825D7FCF86A85EFB71FD1B((RuntimeArray *)(RuntimeArray *)L_15, 0, /*hidden argument*/NULL);
		if ((((int32_t)L_14) >= ((int32_t)L_16)))
		{
			goto IL_0091;
		}
	}
	{
		// if (offset < buffer.GetLowerBound(0)) throw new ArgumentOutOfRangeException("offset");
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_17 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6(L_17, _stringLiteral53A610E925BBC0A175E365D31241AE75AEEAD651, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, NULL, ZlibBaseStream_Read_m4A21827ACC093F5D4E7A4C822C7FBACB8C4E4A74_RuntimeMethod_var);
	}

IL_0091:
	{
		// if ((offset + count) > buffer.GetLength(0)) throw new ArgumentOutOfRangeException("count");
		int32_t L_18 = ___offset1;
		int32_t L_19 = ___count2;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_20 = ___buffer0;
		NullCheck((RuntimeArray *)(RuntimeArray *)L_20);
		int32_t L_21 = Array_GetLength_m318900B10C3A93A30ABDC67DE161C8F6ABA4D359((RuntimeArray *)(RuntimeArray *)L_20, 0, /*hidden argument*/NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)L_19))) <= ((int32_t)L_21)))
		{
			goto IL_00a8;
		}
	}
	{
		// if ((offset + count) > buffer.GetLength(0)) throw new ArgumentOutOfRangeException("count");
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_22 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6(L_22, _stringLiteralEE9F38E186BA06F57B7B74D7E626B94E13CE2556, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, NULL, ZlibBaseStream_Read_m4A21827ACC093F5D4E7A4C822C7FBACB8C4E4A74_RuntimeMethod_var);
	}

IL_00a8:
	{
		// int rc = 0;
		V_0 = 0;
		// _z.OutputBuffer = buffer;
		ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965 * L_23 = __this->get__z_5();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_24 = ___buffer0;
		NullCheck(L_23);
		L_23->set_OutputBuffer_4(L_24);
		// _z.NextOut = offset;
		ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965 * L_25 = __this->get__z_5();
		int32_t L_26 = ___offset1;
		NullCheck(L_25);
		L_25->set_NextOut_5(L_26);
		// _z.AvailableBytesOut = count;
		ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965 * L_27 = __this->get__z_5();
		int32_t L_28 = ___count2;
		NullCheck(L_27);
		L_27->set_AvailableBytesOut_6(L_28);
		// _z.InputBuffer = workingBuffer;
		ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965 * L_29 = __this->get__z_5();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_30 = ZlibBaseStream_get_workingBuffer_mD122FDE20AE031C2ABD7DC229B910EAFB43D9AFE(__this, /*hidden argument*/NULL);
		NullCheck(L_29);
		L_29->set_InputBuffer_0(L_30);
	}

IL_00df:
	{
		// if ((_z.AvailableBytesIn == 0) && (!nomoreinput))
		ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965 * L_31 = __this->get__z_5();
		NullCheck(L_31);
		int32_t L_32 = L_31->get_AvailableBytesIn_2();
		if (L_32)
		{
			goto IL_015b;
		}
	}
	{
		bool L_33 = __this->get_nomoreinput_17();
		if (L_33)
		{
			goto IL_015b;
		}
	}
	{
		// _z.NextIn = 0;
		ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965 * L_34 = __this->get__z_5();
		NullCheck(L_34);
		L_34->set_NextIn_1(0);
		// int dataSize=_workingBuffer.Length;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_35 = __this->get__workingBuffer_12();
		NullCheck(L_35);
		V_1 = (((int32_t)((int32_t)(((RuntimeArray*)L_35)->max_length))));
		// if(dataSize>DataToRead){
		int32_t L_36 = V_1;
		int32_t L_37 = __this->get_DataToRead_6();
		if ((((int32_t)L_36) <= ((int32_t)L_37)))
		{
			goto IL_0119;
		}
	}
	{
		// dataSize=DataToRead;
		int32_t L_38 = __this->get_DataToRead_6();
		V_1 = L_38;
	}

IL_0119:
	{
		// dataSize= _stream.Read(_workingBuffer, 0, dataSize);
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_39 = __this->get__stream_15();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_40 = __this->get__workingBuffer_12();
		int32_t L_41 = V_1;
		NullCheck(L_39);
		int32_t L_42 = VirtFuncInvoker3< int32_t, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(28 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_39, L_40, 0, L_41);
		V_1 = L_42;
		// DataToRead-=dataSize;
		int32_t L_43 = __this->get_DataToRead_6();
		int32_t L_44 = V_1;
		__this->set_DataToRead_6(((int32_t)il2cpp_codegen_subtract((int32_t)L_43, (int32_t)L_44)));
		// _z.AvailableBytesIn=dataSize;
		ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965 * L_45 = __this->get__z_5();
		int32_t L_46 = V_1;
		NullCheck(L_45);
		L_45->set_AvailableBytesIn_2(L_46);
		// if (_z.AvailableBytesIn == 0)
		ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965 * L_47 = __this->get__z_5();
		NullCheck(L_47);
		int32_t L_48 = L_47->get_AvailableBytesIn_2();
		if (L_48)
		{
			goto IL_015b;
		}
	}
	{
		// nomoreinput = true;
		__this->set_nomoreinput_17((bool)1);
	}

IL_015b:
	{
		// rc = (_wantCompress)
		//     ? _z.Deflate(_flushMode)
		//     : _z.Inflate(_flushMode);
		bool L_49 = ZlibBaseStream_get__wantCompress_m9B2AA6140F3BD23BB7F5AACD8884195938C2C32B(__this, /*hidden argument*/NULL);
		if (L_49)
		{
			goto IL_0176;
		}
	}
	{
		ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965 * L_50 = __this->get__z_5();
		int32_t L_51 = __this->get__flushMode_8();
		NullCheck(L_50);
		int32_t L_52 = ZlibCodec_Inflate_m5EDD692FE4BBF0632C6FB93FA3E92564687B542C(L_50, L_51, /*hidden argument*/NULL);
		G_B29_0 = L_52;
		goto IL_0187;
	}

IL_0176:
	{
		ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965 * L_53 = __this->get__z_5();
		int32_t L_54 = __this->get__flushMode_8();
		NullCheck(L_53);
		int32_t L_55 = ZlibCodec_Deflate_m0CBAAB01255D3D52348263E4987DC6E33E8DDA62(L_53, L_54, /*hidden argument*/NULL);
		G_B29_0 = L_55;
	}

IL_0187:
	{
		V_0 = G_B29_0;
		// if (nomoreinput && (rc == ZlibConstants.Z_BUF_ERROR))
		bool L_56 = __this->get_nomoreinput_17();
		if (!L_56)
		{
			goto IL_0197;
		}
	}
	{
		int32_t L_57 = V_0;
		if ((!(((uint32_t)L_57) == ((uint32_t)((int32_t)-5)))))
		{
			goto IL_0197;
		}
	}
	{
		// return 0;
		return 0;
	}

IL_0197:
	{
		// if (rc != ZlibConstants.Z_OK && rc != ZlibConstants.Z_STREAM_END)
		int32_t L_58 = V_0;
		if (!L_58)
		{
			goto IL_01d3;
		}
	}
	{
		int32_t L_59 = V_0;
		if ((((int32_t)L_59) == ((int32_t)1)))
		{
			goto IL_01d3;
		}
	}
	{
		// throw new ZlibException(String.Format("{0}flating:  rc={1}  msg={2}", (_wantCompress ? "de" : "in"), rc, _z.Message));
		bool L_60 = ZlibBaseStream_get__wantCompress_m9B2AA6140F3BD23BB7F5AACD8884195938C2C32B(__this, /*hidden argument*/NULL);
		G_B35_0 = _stringLiteralB24EF43149423CD25B7046C472E0E9AFE0B3A8E3;
		if (L_60)
		{
			G_B36_0 = _stringLiteralB24EF43149423CD25B7046C472E0E9AFE0B3A8E3;
			goto IL_01b2;
		}
	}
	{
		G_B37_0 = _stringLiteralAF10EF20DD9060BBEEAD0AFBC55381A66AF442EF;
		G_B37_1 = G_B35_0;
		goto IL_01b7;
	}

IL_01b2:
	{
		G_B37_0 = _stringLiteral600CCD1B71569232D01D110BC63E906BEAB04D8C;
		G_B37_1 = G_B36_0;
	}

IL_01b7:
	{
		int32_t L_61 = V_0;
		int32_t L_62 = L_61;
		RuntimeObject * L_63 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_62);
		ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965 * L_64 = __this->get__z_5();
		NullCheck(L_64);
		String_t* L_65 = L_64->get_Message_8();
		String_t* L_66 = String_Format_m26BBF75F9609FAD0B39C2242FEBAAD7D68F14D99(G_B37_1, G_B37_0, L_63, L_65, /*hidden argument*/NULL);
		ZlibException_t30AE372C4D0EF362348E27A525BC285180DCF28F * L_67 = (ZlibException_t30AE372C4D0EF362348E27A525BC285180DCF28F *)il2cpp_codegen_object_new(ZlibException_t30AE372C4D0EF362348E27A525BC285180DCF28F_il2cpp_TypeInfo_var);
		ZlibException__ctor_m1C50FBADFBBA0F78D526FFB617F7F69543375725(L_67, L_66, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_67, NULL, ZlibBaseStream_Read_m4A21827ACC093F5D4E7A4C822C7FBACB8C4E4A74_RuntimeMethod_var);
	}

IL_01d3:
	{
		// if ((nomoreinput || rc == ZlibConstants.Z_STREAM_END) && (_z.AvailableBytesOut == count)){
		bool L_68 = __this->get_nomoreinput_17();
		if (L_68)
		{
			goto IL_01df;
		}
	}
	{
		int32_t L_69 = V_0;
		if ((!(((uint32_t)L_69) == ((uint32_t)1))))
		{
			goto IL_01f6;
		}
	}

IL_01df:
	{
		ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965 * L_70 = __this->get__z_5();
		NullCheck(L_70);
		int32_t L_71 = L_70->get_AvailableBytesOut_6();
		int32_t L_72 = ___count2;
		if ((!(((uint32_t)L_71) == ((uint32_t)L_72))))
		{
			goto IL_01f6;
		}
	}
	{
		// nomoreinput=true;
		__this->set_nomoreinput_17((bool)1);
		// break; // nothing more to read
		goto IL_0212;
	}

IL_01f6:
	{
		// while (_z.AvailableBytesOut > 0 && !nomoreinput && rc == ZlibConstants.Z_OK);
		ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965 * L_73 = __this->get__z_5();
		NullCheck(L_73);
		int32_t L_74 = L_73->get_AvailableBytesOut_6();
		if ((((int32_t)L_74) <= ((int32_t)0)))
		{
			goto IL_0212;
		}
	}
	{
		bool L_75 = __this->get_nomoreinput_17();
		if (L_75)
		{
			goto IL_0212;
		}
	}
	{
		int32_t L_76 = V_0;
		if (!L_76)
		{
			goto IL_00df;
		}
	}

IL_0212:
	{
		// if (_z.AvailableBytesOut > 0)
		ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965 * L_77 = __this->get__z_5();
		NullCheck(L_77);
		int32_t L_78 = L_77->get_AvailableBytesOut_6();
		if ((((int32_t)L_78) <= ((int32_t)0)))
		{
			goto IL_0274;
		}
	}
	{
		// if (rc == ZlibConstants.Z_OK && _z.AvailableBytesIn == 0)
		int32_t L_79 = V_0;
		if (L_79)
		{
			goto IL_022f;
		}
	}
	{
		ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965 * L_80 = __this->get__z_5();
		NullCheck(L_80);
		int32_t L_81 = L_80->get_AvailableBytesIn_2();
	}

IL_022f:
	{
		// if (nomoreinput)
		bool L_82 = __this->get_nomoreinput_17();
		if (!L_82)
		{
			goto IL_0274;
		}
	}
	{
		// if (_wantCompress)
		bool L_83 = ZlibBaseStream_get__wantCompress_m9B2AA6140F3BD23BB7F5AACD8884195938C2C32B(__this, /*hidden argument*/NULL);
		if (!L_83)
		{
			goto IL_0274;
		}
	}
	{
		// rc = _z.Deflate(FlushType.Finish);
		ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965 * L_84 = __this->get__z_5();
		NullCheck(L_84);
		int32_t L_85 = ZlibCodec_Deflate_m0CBAAB01255D3D52348263E4987DC6E33E8DDA62(L_84, 4, /*hidden argument*/NULL);
		V_0 = L_85;
		// if (rc != ZlibConstants.Z_OK && rc != ZlibConstants.Z_STREAM_END)
		int32_t L_86 = V_0;
		if (!L_86)
		{
			goto IL_0274;
		}
	}
	{
		int32_t L_87 = V_0;
		if ((((int32_t)L_87) == ((int32_t)1)))
		{
			goto IL_0274;
		}
	}
	{
		// throw new ZlibException(String.Format("Deflating:  rc={0}  msg={1}", rc, _z.Message));
		int32_t L_88 = V_0;
		int32_t L_89 = L_88;
		RuntimeObject * L_90 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_89);
		ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965 * L_91 = __this->get__z_5();
		NullCheck(L_91);
		String_t* L_92 = L_91->get_Message_8();
		String_t* L_93 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteral8823FD3D1E45E1D43B6270930CAA55840E8B4F4F, L_90, L_92, /*hidden argument*/NULL);
		ZlibException_t30AE372C4D0EF362348E27A525BC285180DCF28F * L_94 = (ZlibException_t30AE372C4D0EF362348E27A525BC285180DCF28F *)il2cpp_codegen_object_new(ZlibException_t30AE372C4D0EF362348E27A525BC285180DCF28F_il2cpp_TypeInfo_var);
		ZlibException__ctor_m1C50FBADFBBA0F78D526FFB617F7F69543375725(L_94, L_93, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_94, NULL, ZlibBaseStream_Read_m4A21827ACC093F5D4E7A4C822C7FBACB8C4E4A74_RuntimeMethod_var);
	}

IL_0274:
	{
		// rc = (count - _z.AvailableBytesOut);
		int32_t L_95 = ___count2;
		ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965 * L_96 = __this->get__z_5();
		NullCheck(L_96);
		int32_t L_97 = L_96->get_AvailableBytesOut_6();
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_95, (int32_t)L_97));
		// return rc;
		int32_t L_98 = V_0;
		return L_98;
	}
}
// System.Void Zlib.ZlibBaseStream::ChangeDataToRead(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZlibBaseStream_ChangeDataToRead_mC9A03394150C8CF7D1A3B36699CE10A1B8D0F44F (ZlibBaseStream_t688531D0B4CFAB3252FD72AE0DFAF4946C7BA42C * __this, int32_t ___size0, const RuntimeMethod* method)
{
	{
		// nomoreinput=false;
		__this->set_nomoreinput_17((bool)0);
		// DataToRead=size;
		int32_t L_0 = ___size0;
		__this->set_DataToRead_6(L_0);
		// _z=null;
		__this->set__z_5((ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965 *)NULL);
		// }
		return;
	}
}
// System.Void Zlib.ZlibBaseStream::ChangeStream(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZlibBaseStream_ChangeStream_m20FA4B1D63D461DEE3F85A95F3DC58995EFC1A64 (ZlibBaseStream_t688531D0B4CFAB3252FD72AE0DFAF4946C7BA42C * __this, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___stream0, const RuntimeMethod* method)
{
	{
		// _stream=stream;
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_0 = ___stream0;
		__this->set__stream_15(L_0);
		// nomoreinput=false;
		__this->set_nomoreinput_17((bool)0);
		// DataToRead=int.MaxValue;
		__this->set_DataToRead_6(((int32_t)2147483647LL));
		// _z=null;
		__this->set__z_5((ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965 *)NULL);
		// }
		return;
	}
}
// System.Boolean Zlib.ZlibBaseStream::get_CanRead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ZlibBaseStream_get_CanRead_mB14DCA6D158E737342AD717F3037695F54838A0B (ZlibBaseStream_t688531D0B4CFAB3252FD72AE0DFAF4946C7BA42C * __this, const RuntimeMethod* method)
{
	{
		// get { return this._stream.CanRead; }
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_0 = __this->get__stream_15();
		NullCheck(L_0);
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.IO.Stream::get_CanRead() */, L_0);
		return L_1;
	}
}
// System.Boolean Zlib.ZlibBaseStream::get_CanSeek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ZlibBaseStream_get_CanSeek_m7924E4937278317886EBF7AFFAF7E9D50BFDB6C2 (ZlibBaseStream_t688531D0B4CFAB3252FD72AE0DFAF4946C7BA42C * __this, const RuntimeMethod* method)
{
	{
		// get { return this._stream.CanSeek; }
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_0 = __this->get__stream_15();
		NullCheck(L_0);
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(8 /* System.Boolean System.IO.Stream::get_CanSeek() */, L_0);
		return L_1;
	}
}
// System.Boolean Zlib.ZlibBaseStream::get_CanWrite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ZlibBaseStream_get_CanWrite_m82DA819AF2AD89DEC1103D49A03266665C97DFF1 (ZlibBaseStream_t688531D0B4CFAB3252FD72AE0DFAF4946C7BA42C * __this, const RuntimeMethod* method)
{
	{
		// get { return this._stream.CanWrite; }
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_0 = __this->get__stream_15();
		NullCheck(L_0);
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean System.IO.Stream::get_CanWrite() */, L_0);
		return L_1;
	}
}
// System.Int64 Zlib.ZlibBaseStream::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ZlibBaseStream_get_Length_m32BB330669B4B9CDEDD23AA67177370CC75948A4 (ZlibBaseStream_t688531D0B4CFAB3252FD72AE0DFAF4946C7BA42C * __this, const RuntimeMethod* method)
{
	{
		// get { return _stream.Length; }
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_0 = __this->get__stream_15();
		NullCheck(L_0);
		int64_t L_1 = VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, L_0);
		return L_1;
	}
}
// System.Int64 Zlib.ZlibBaseStream::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ZlibBaseStream_get_Position_mF6CA8B860FC1C50F11A545F0205D9E1F751E304A (ZlibBaseStream_t688531D0B4CFAB3252FD72AE0DFAF4946C7BA42C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZlibBaseStream_get_Position_mF6CA8B860FC1C50F11A545F0205D9E1F751E304A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { throw new NotImplementedException(); }
		NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * L_0 = (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 *)il2cpp_codegen_object_new(NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m8BEA657E260FC05F0C6D2C43A6E9BC08040F59C4(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, ZlibBaseStream_get_Position_mF6CA8B860FC1C50F11A545F0205D9E1F751E304A_RuntimeMethod_var);
	}
}
// System.Void Zlib.ZlibBaseStream::set_Position(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZlibBaseStream_set_Position_m6DF01C5D5DC27E1AF8849D0532DCB9EA5FC2CB76 (ZlibBaseStream_t688531D0B4CFAB3252FD72AE0DFAF4946C7BA42C * __this, int64_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZlibBaseStream_set_Position_m6DF01C5D5DC27E1AF8849D0532DCB9EA5FC2CB76_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { throw new NotImplementedException(); }
		NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * L_0 = (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 *)il2cpp_codegen_object_new(NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m8BEA657E260FC05F0C6D2C43A6E9BC08040F59C4(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, ZlibBaseStream_set_Position_m6DF01C5D5DC27E1AF8849D0532DCB9EA5FC2CB76_RuntimeMethod_var);
	}
}
// System.Void Zlib.ZlibBaseStream::CompressString(System.String,System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZlibBaseStream_CompressString_m8697A6731CE03AFABE913B718E1FA90C173C29B4 (String_t* ___s0, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___compressor1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZlibBaseStream_CompressString_m8697A6731CE03AFABE913B718E1FA90C173C29B4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_0 = NULL;
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		// byte[] uncompressed = System.Text.Encoding.UTF8.GetBytes(s);
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_0 = Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9(/*hidden argument*/NULL);
		String_t* L_1 = ___s0;
		NullCheck(L_0);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = VirtFuncInvoker1< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, String_t* >::Invoke(25 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_1);
		V_0 = L_2;
		// using (compressor)
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_3 = ___compressor1;
		V_1 = L_3;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		// compressor.Write(uncompressed, 0, uncompressed.Length);
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_4 = ___compressor1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_5 = V_0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = V_0;
		NullCheck(L_6);
		NullCheck(L_4);
		VirtActionInvoker3< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(30 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_4, L_5, 0, (((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))));
		// }
		IL2CPP_LEAVE(0x25, FINALLY_001b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_001b;
	}

FINALLY_001b:
	{ // begin finally (depth: 1)
		{
			Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_7 = V_1;
			if (!L_7)
			{
				goto IL_0024;
			}
		}

IL_001e:
		{
			Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_8 = V_1;
			NullCheck(L_8);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_8);
		}

IL_0024:
		{
			IL2CPP_RESET_LEAVE(0x25);
			IL2CPP_END_FINALLY(27)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(27)
	{
		IL2CPP_JUMP_TBL(0x25, IL_0025)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void Zlib.ZlibBaseStream::CompressBuffer(System.Byte[],System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZlibBaseStream_CompressBuffer_m916756FFE3A6BEDC1A0C850640A7ED484727F60B (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___b0, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___compressor1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZlibBaseStream_CompressBuffer_m916756FFE3A6BEDC1A0C850640A7ED484727F60B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		// using (compressor)
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_0 = ___compressor1;
		V_0 = L_0;
	}

IL_0002:
	try
	{ // begin try (depth: 1)
		// compressor.Write(b, 0, b.Length);
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_1 = ___compressor1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = ___b0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = ___b0;
		NullCheck(L_3);
		NullCheck(L_1);
		VirtActionInvoker3< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(30 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_1, L_2, 0, (((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))));
		// }
		IL2CPP_LEAVE(0x19, FINALLY_000f);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000f;
	}

FINALLY_000f:
	{ // begin finally (depth: 1)
		{
			Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_4 = V_0;
			if (!L_4)
			{
				goto IL_0018;
			}
		}

IL_0012:
		{
			Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_5 = V_0;
			NullCheck(L_5);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_5);
		}

IL_0018:
		{
			IL2CPP_RESET_LEAVE(0x19);
			IL2CPP_END_FINALLY(15)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(15)
	{
		IL2CPP_JUMP_TBL(0x19, IL_0019)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.String Zlib.ZlibBaseStream::UncompressString(System.Byte[],System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ZlibBaseStream_UncompressString_m409A206D9D6BEB5217D4BD3DA035C493BD6BD54D (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___compressed0, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___decompressor1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZlibBaseStream_UncompressString_m409A206D9D6BEB5217D4BD3DA035C493BD6BD54D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_0 = NULL;
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * V_1 = NULL;
	MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * V_2 = NULL;
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * V_3 = NULL;
	int32_t V_4 = 0;
	String_t* V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		// byte[] working = new byte[1024];
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1024));
		V_0 = L_0;
		// System.Text.Encoding encoding = System.Text.Encoding.UTF8;
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_1 = Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9(/*hidden argument*/NULL);
		V_1 = L_1;
		// using (MemoryStream output = new MemoryStream())
		MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_2 = (MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C *)il2cpp_codegen_object_new(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m9D0F92C76EFEDA651B678A98EB693FD945286DC2(L_2, /*hidden argument*/NULL);
		V_2 = L_2;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			// using (decompressor)
			Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_3 = ___decompressor1;
			V_3 = L_3;
		}

IL_0019:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0025;
			}

IL_001b:
			{
				// output.Write(working, 0, n);
				MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_4 = V_2;
				ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_5 = V_0;
				int32_t L_6 = V_4;
				NullCheck(L_4);
				VirtActionInvoker3< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(30 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_4, L_5, 0, L_6);
			}

IL_0025:
			{
				// while ((n = decompressor.Read(working, 0, working.Length)) != 0)
				Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_7 = ___decompressor1;
				ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_8 = V_0;
				ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_9 = V_0;
				NullCheck(L_9);
				NullCheck(L_7);
				int32_t L_10 = VirtFuncInvoker3< int32_t, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(28 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_7, L_8, 0, (((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))));
				int32_t L_11 = L_10;
				V_4 = L_11;
				if (L_11)
				{
					goto IL_001b;
				}
			}

IL_0035:
			{
				// }
				IL2CPP_LEAVE(0x41, FINALLY_0037);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0037;
		}

FINALLY_0037:
		{ // begin finally (depth: 2)
			{
				Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_12 = V_3;
				if (!L_12)
				{
					goto IL_0040;
				}
			}

IL_003a:
			{
				Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_13 = V_3;
				NullCheck(L_13);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_13);
			}

IL_0040:
			{
				IL2CPP_RESET_LEAVE(0x41);
				IL2CPP_END_FINALLY(55)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(55)
		{
			IL2CPP_JUMP_TBL(0x41, IL_0041)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_0041:
		{
			// output.Seek(0, SeekOrigin.Begin);
			MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_14 = V_2;
			NullCheck(L_14);
			VirtFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(26 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_14, (((int64_t)((int64_t)0))), 0);
			// StreamReader sr = new StreamReader(output, encoding);
			MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_15 = V_2;
			Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_16 = V_1;
			StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E * L_17 = (StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E *)il2cpp_codegen_object_new(StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E_il2cpp_TypeInfo_var);
			StreamReader__ctor_mF319C927A1274118E912D93F2EB2AAE4DA17E3DC(L_17, L_15, L_16, /*hidden argument*/NULL);
			// return sr.ReadToEnd();
			NullCheck(L_17);
			String_t* L_18 = VirtFuncInvoker0< String_t* >::Invoke(12 /* System.String System.IO.TextReader::ReadToEnd() */, L_17);
			V_5 = L_18;
			IL2CPP_LEAVE(0x65, FINALLY_005b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005b;
	}

FINALLY_005b:
	{ // begin finally (depth: 1)
		{
			MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_19 = V_2;
			if (!L_19)
			{
				goto IL_0064;
			}
		}

IL_005e:
		{
			MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_20 = V_2;
			NullCheck(L_20);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_20);
		}

IL_0064:
		{
			IL2CPP_RESET_LEAVE(0x65);
			IL2CPP_END_FINALLY(91)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(91)
	{
		IL2CPP_JUMP_TBL(0x65, IL_0065)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0065:
	{
		// }
		String_t* L_21 = V_5;
		return L_21;
	}
}
// System.Byte[] Zlib.ZlibBaseStream::UncompressBuffer(System.Byte[],System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ZlibBaseStream_UncompressBuffer_m99F82C977C7C8A0F9F953E7D3A0103EB441127F2 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___compressed0, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___decompressor1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZlibBaseStream_UncompressBuffer_m99F82C977C7C8A0F9F953E7D3A0103EB441127F2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_0 = NULL;
	MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * V_1 = NULL;
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * V_2 = NULL;
	int32_t V_3 = 0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		// byte[] working = new byte[1024];
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1024));
		V_0 = L_0;
		// using (MemoryStream output = new MemoryStream())
		MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_1 = (MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C *)il2cpp_codegen_object_new(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m9D0F92C76EFEDA651B678A98EB693FD945286DC2(L_1, /*hidden argument*/NULL);
		V_1 = L_1;
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			// using (decompressor)
			Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_2 = ___decompressor1;
			V_2 = L_2;
		}

IL_0013:
		try
		{ // begin try (depth: 2)
			{
				goto IL_001e;
			}

IL_0015:
			{
				// output.Write(working, 0, n);
				MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_3 = V_1;
				ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = V_0;
				int32_t L_5 = V_3;
				NullCheck(L_3);
				VirtActionInvoker3< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(30 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_3, L_4, 0, L_5);
			}

IL_001e:
			{
				// while ((n = decompressor.Read(working, 0, working.Length)) != 0)
				Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_6 = ___decompressor1;
				ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_7 = V_0;
				ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_8 = V_0;
				NullCheck(L_8);
				NullCheck(L_6);
				int32_t L_9 = VirtFuncInvoker3< int32_t, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(28 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_6, L_7, 0, (((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))));
				int32_t L_10 = L_9;
				V_3 = L_10;
				if (L_10)
				{
					goto IL_0015;
				}
			}

IL_002d:
			{
				// }
				IL2CPP_LEAVE(0x39, FINALLY_002f);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_002f;
		}

FINALLY_002f:
		{ // begin finally (depth: 2)
			{
				Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_11 = V_2;
				if (!L_11)
				{
					goto IL_0038;
				}
			}

IL_0032:
			{
				Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_12 = V_2;
				NullCheck(L_12);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_12);
			}

IL_0038:
			{
				IL2CPP_RESET_LEAVE(0x39);
				IL2CPP_END_FINALLY(47)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(47)
		{
			IL2CPP_JUMP_TBL(0x39, IL_0039)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_0039:
		{
			// return output.ToArray();
			MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_13 = V_1;
			NullCheck(L_13);
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_14 = VirtFuncInvoker0< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(36 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_13);
			V_4 = L_14;
			IL2CPP_LEAVE(0x4D, FINALLY_0043);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0043;
	}

FINALLY_0043:
	{ // begin finally (depth: 1)
		{
			MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_15 = V_1;
			if (!L_15)
			{
				goto IL_004c;
			}
		}

IL_0046:
		{
			MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_16 = V_1;
			NullCheck(L_16);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_16);
		}

IL_004c:
		{
			IL2CPP_RESET_LEAVE(0x4D);
			IL2CPP_END_FINALLY(67)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(67)
	{
		IL2CPP_JUMP_TBL(0x4D, IL_004d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004d:
	{
		// }
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_17 = V_4;
		return L_17;
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
// System.Int32 Zlib.ZlibCodec::get_Adler32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZlibCodec_get_Adler32_m22045362DC3888B54221B025004A4375FDEA64C1 (ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965 * __this, const RuntimeMethod* method)
{
	{
		// public int Adler32 { get { return (int)_Adler32; } }
		uint32_t L_0 = __this->get__Adler32_11();
		return L_0;
	}
}
// System.Void Zlib.ZlibCodec::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZlibCodec__ctor_m46CE9F223F4163978A70C27D023A34651761D39D (ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965 * __this, const RuntimeMethod* method)
{
	{
		// public CompressionLevel CompressLevel = CompressionLevel.Default;
		__this->set_CompressLevel_12(6);
		// public int WindowBits = ZlibConstants.WindowBitsDefault;
		__this->set_WindowBits_13(((int32_t)15));
		// public ZlibCodec() { }
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// public ZlibCodec() { }
		return;
	}
}
// System.Void Zlib.ZlibCodec::.ctor(Zlib.CompressionMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZlibCodec__ctor_m6D328EFAE98A47E8E23CC275E129A4B447F55106 (ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965 * __this, int32_t ___mode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZlibCodec__ctor_m6D328EFAE98A47E8E23CC275E129A4B447F55106_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public CompressionLevel CompressLevel = CompressionLevel.Default;
		__this->set_CompressLevel_12(6);
		// public int WindowBits = ZlibConstants.WindowBitsDefault;
		__this->set_WindowBits_13(((int32_t)15));
		// public ZlibCodec(CompressionMode mode)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// if (mode == CompressionMode.Compress)
		int32_t L_0 = ___mode0;
		if (L_0)
		{
			goto IL_002b;
		}
	}
	{
		// int rc = InitializeDeflate();
		int32_t L_1 = ZlibCodec_InitializeDeflate_m3B14FEBE0FC480DE0814F8D5A1AD45D61A9FC413(__this, /*hidden argument*/NULL);
		// if (rc != ZlibConstants.Z_OK) throw new ZlibException("Cannot initialize for deflate.");
		if (!L_1)
		{
			goto IL_004d;
		}
	}
	{
		// if (rc != ZlibConstants.Z_OK) throw new ZlibException("Cannot initialize for deflate.");
		ZlibException_t30AE372C4D0EF362348E27A525BC285180DCF28F * L_2 = (ZlibException_t30AE372C4D0EF362348E27A525BC285180DCF28F *)il2cpp_codegen_object_new(ZlibException_t30AE372C4D0EF362348E27A525BC285180DCF28F_il2cpp_TypeInfo_var);
		ZlibException__ctor_m1C50FBADFBBA0F78D526FFB617F7F69543375725(L_2, _stringLiteral0259412D43BCB665FA1CB3446313B6C9000BD234, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, ZlibCodec__ctor_m6D328EFAE98A47E8E23CC275E129A4B447F55106_RuntimeMethod_var);
	}

IL_002b:
	{
		// else if (mode == CompressionMode.Decompress)
		int32_t L_3 = ___mode0;
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_0042;
		}
	}
	{
		// int rc = InitializeInflate();
		int32_t L_4 = ZlibCodec_InitializeInflate_mB61960FD685895CC7D6FE193B3CDB694071F34C3(__this, /*hidden argument*/NULL);
		// if (rc != ZlibConstants.Z_OK) throw new ZlibException("Cannot initialize for inflate.");
		if (!L_4)
		{
			goto IL_004d;
		}
	}
	{
		// if (rc != ZlibConstants.Z_OK) throw new ZlibException("Cannot initialize for inflate.");
		ZlibException_t30AE372C4D0EF362348E27A525BC285180DCF28F * L_5 = (ZlibException_t30AE372C4D0EF362348E27A525BC285180DCF28F *)il2cpp_codegen_object_new(ZlibException_t30AE372C4D0EF362348E27A525BC285180DCF28F_il2cpp_TypeInfo_var);
		ZlibException__ctor_m1C50FBADFBBA0F78D526FFB617F7F69543375725(L_5, _stringLiteral3B84D51091A5F4A5BCF63E012E794050CF07E0DA, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, NULL, ZlibCodec__ctor_m6D328EFAE98A47E8E23CC275E129A4B447F55106_RuntimeMethod_var);
	}

IL_0042:
	{
		// else throw new ZlibException("Invalid ZlibStreamFlavor.");
		ZlibException_t30AE372C4D0EF362348E27A525BC285180DCF28F * L_6 = (ZlibException_t30AE372C4D0EF362348E27A525BC285180DCF28F *)il2cpp_codegen_object_new(ZlibException_t30AE372C4D0EF362348E27A525BC285180DCF28F_il2cpp_TypeInfo_var);
		ZlibException__ctor_m1C50FBADFBBA0F78D526FFB617F7F69543375725(L_6, _stringLiteral2DFA9ADCBD7A67CD6E7CC3761470008E40351345, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, NULL, ZlibCodec__ctor_m6D328EFAE98A47E8E23CC275E129A4B447F55106_RuntimeMethod_var);
	}

IL_004d:
	{
		// }
		return;
	}
}
// System.Int32 Zlib.ZlibCodec::InitializeInflate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZlibCodec_InitializeInflate_mB61960FD685895CC7D6FE193B3CDB694071F34C3 (ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965 * __this, const RuntimeMethod* method)
{
	{
		// return InitializeInflate(this.WindowBits);
		int32_t L_0 = __this->get_WindowBits_13();
		int32_t L_1 = ZlibCodec_InitializeInflate_mFAD3E0BFEBA3C7DE949989588F52FB0E0D52431F(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 Zlib.ZlibCodec::InitializeInflate(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZlibCodec_InitializeInflate_mD8361F9D0F6E28B0013DB841137921DD7414F645 (ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965 * __this, bool ___expectRfc1950Header0, const RuntimeMethod* method)
{
	{
		// return InitializeInflate(this.WindowBits, expectRfc1950Header);
		int32_t L_0 = __this->get_WindowBits_13();
		bool L_1 = ___expectRfc1950Header0;
		int32_t L_2 = ZlibCodec_InitializeInflate_m19AD1D7E527D6FCCF8AD48182AC3CE02D6646B71(__this, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 Zlib.ZlibCodec::InitializeInflate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZlibCodec_InitializeInflate_mFAD3E0BFEBA3C7DE949989588F52FB0E0D52431F (ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965 * __this, int32_t ___windowBits0, const RuntimeMethod* method)
{
	{
		// this.WindowBits = windowBits;
		int32_t L_0 = ___windowBits0;
		__this->set_WindowBits_13(L_0);
		// return InitializeInflate(windowBits, true);
		int32_t L_1 = ___windowBits0;
		int32_t L_2 = ZlibCodec_InitializeInflate_m19AD1D7E527D6FCCF8AD48182AC3CE02D6646B71(__this, L_1, (bool)1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 Zlib.ZlibCodec::InitializeInflate(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZlibCodec_InitializeInflate_m19AD1D7E527D6FCCF8AD48182AC3CE02D6646B71 (ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965 * __this, int32_t ___windowBits0, bool ___expectRfc1950Header1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZlibCodec_InitializeInflate_m19AD1D7E527D6FCCF8AD48182AC3CE02D6646B71_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.WindowBits = windowBits;
		int32_t L_0 = ___windowBits0;
		__this->set_WindowBits_13(L_0);
		// if (dstate != null) throw new ZlibException("You may not call InitializeInflate() after calling InitializeDeflate().");
		DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42 * L_1 = __this->get_dstate_9();
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// if (dstate != null) throw new ZlibException("You may not call InitializeInflate() after calling InitializeDeflate().");
		ZlibException_t30AE372C4D0EF362348E27A525BC285180DCF28F * L_2 = (ZlibException_t30AE372C4D0EF362348E27A525BC285180DCF28F *)il2cpp_codegen_object_new(ZlibException_t30AE372C4D0EF362348E27A525BC285180DCF28F_il2cpp_TypeInfo_var);
		ZlibException__ctor_m1C50FBADFBBA0F78D526FFB617F7F69543375725(L_2, _stringLiteralB1493D21F1301A0097980023E081303318C2376B, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, ZlibCodec_InitializeInflate_m19AD1D7E527D6FCCF8AD48182AC3CE02D6646B71_RuntimeMethod_var);
	}

IL_001a:
	{
		// istate = new InflateManager(expectRfc1950Header);
		bool L_3 = ___expectRfc1950Header1;
		InflateManager_tAA662ABBD3E02BE2870F5EF55A80B30A3969868D * L_4 = (InflateManager_tAA662ABBD3E02BE2870F5EF55A80B30A3969868D *)il2cpp_codegen_object_new(InflateManager_tAA662ABBD3E02BE2870F5EF55A80B30A3969868D_il2cpp_TypeInfo_var);
		InflateManager__ctor_mC3820FCCFE88626FA2A3FECC9CB3B408E8C7619B(L_4, L_3, /*hidden argument*/NULL);
		__this->set_istate_10(L_4);
		// return istate.Initialize(this, windowBits);
		InflateManager_tAA662ABBD3E02BE2870F5EF55A80B30A3969868D * L_5 = __this->get_istate_10();
		int32_t L_6 = ___windowBits0;
		NullCheck(L_5);
		int32_t L_7 = InflateManager_Initialize_m321DA117441387128FE9D5A037871AE77D8DC98A(L_5, __this, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Int32 Zlib.ZlibCodec::Inflate(Zlib.FlushType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZlibCodec_Inflate_m5EDD692FE4BBF0632C6FB93FA3E92564687B542C (ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965 * __this, int32_t ___flush0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZlibCodec_Inflate_m5EDD692FE4BBF0632C6FB93FA3E92564687B542C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (istate == null)
		InflateManager_tAA662ABBD3E02BE2870F5EF55A80B30A3969868D * L_0 = __this->get_istate_10();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// throw new ZlibException("No Inflate State!");
		ZlibException_t30AE372C4D0EF362348E27A525BC285180DCF28F * L_1 = (ZlibException_t30AE372C4D0EF362348E27A525BC285180DCF28F *)il2cpp_codegen_object_new(ZlibException_t30AE372C4D0EF362348E27A525BC285180DCF28F_il2cpp_TypeInfo_var);
		ZlibException__ctor_m1C50FBADFBBA0F78D526FFB617F7F69543375725(L_1, _stringLiteralFA8DA672D87EF5B3E72B79883659812EDAD88A7A, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, ZlibCodec_Inflate_m5EDD692FE4BBF0632C6FB93FA3E92564687B542C_RuntimeMethod_var);
	}

IL_0013:
	{
		// return istate.Inflate(flush);
		InflateManager_tAA662ABBD3E02BE2870F5EF55A80B30A3969868D * L_2 = __this->get_istate_10();
		int32_t L_3 = ___flush0;
		NullCheck(L_2);
		int32_t L_4 = InflateManager_Inflate_m31486A3067CA4A4A835F6E85CBD39027DFEDF27D(L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Int32 Zlib.ZlibCodec::EndInflate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZlibCodec_EndInflate_m8A7AE9BCEDF1E481FFE6B015A515BE7ECCB054A1 (ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZlibCodec_EndInflate_m8A7AE9BCEDF1E481FFE6B015A515BE7ECCB054A1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (istate == null)
		InflateManager_tAA662ABBD3E02BE2870F5EF55A80B30A3969868D * L_0 = __this->get_istate_10();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// throw new ZlibException("No Inflate State!");
		ZlibException_t30AE372C4D0EF362348E27A525BC285180DCF28F * L_1 = (ZlibException_t30AE372C4D0EF362348E27A525BC285180DCF28F *)il2cpp_codegen_object_new(ZlibException_t30AE372C4D0EF362348E27A525BC285180DCF28F_il2cpp_TypeInfo_var);
		ZlibException__ctor_m1C50FBADFBBA0F78D526FFB617F7F69543375725(L_1, _stringLiteralFA8DA672D87EF5B3E72B79883659812EDAD88A7A, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, ZlibCodec_EndInflate_m8A7AE9BCEDF1E481FFE6B015A515BE7ECCB054A1_RuntimeMethod_var);
	}

IL_0013:
	{
		// int ret = istate.End();
		InflateManager_tAA662ABBD3E02BE2870F5EF55A80B30A3969868D * L_2 = __this->get_istate_10();
		NullCheck(L_2);
		int32_t L_3 = InflateManager_End_mCE8061A039CC4D27ABC52122CC0BD236349EE020(L_2, /*hidden argument*/NULL);
		// istate = null;
		__this->set_istate_10((InflateManager_tAA662ABBD3E02BE2870F5EF55A80B30A3969868D *)NULL);
		// return ret;
		return L_3;
	}
}
// System.Int32 Zlib.ZlibCodec::SyncInflate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZlibCodec_SyncInflate_mC71A4744519F5B63DD7C1B9B91E4579C9382FB75 (ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZlibCodec_SyncInflate_mC71A4744519F5B63DD7C1B9B91E4579C9382FB75_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (istate == null)
		InflateManager_tAA662ABBD3E02BE2870F5EF55A80B30A3969868D * L_0 = __this->get_istate_10();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// throw new ZlibException("No Inflate State!");
		ZlibException_t30AE372C4D0EF362348E27A525BC285180DCF28F * L_1 = (ZlibException_t30AE372C4D0EF362348E27A525BC285180DCF28F *)il2cpp_codegen_object_new(ZlibException_t30AE372C4D0EF362348E27A525BC285180DCF28F_il2cpp_TypeInfo_var);
		ZlibException__ctor_m1C50FBADFBBA0F78D526FFB617F7F69543375725(L_1, _stringLiteralFA8DA672D87EF5B3E72B79883659812EDAD88A7A, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, ZlibCodec_SyncInflate_mC71A4744519F5B63DD7C1B9B91E4579C9382FB75_RuntimeMethod_var);
	}

IL_0013:
	{
		// return istate.Sync();
		InflateManager_tAA662ABBD3E02BE2870F5EF55A80B30A3969868D * L_2 = __this->get_istate_10();
		NullCheck(L_2);
		int32_t L_3 = InflateManager_Sync_mEB19C4171CEED803F942384F2F8ACF28D3C3186F(L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Int32 Zlib.ZlibCodec::InitializeDeflate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZlibCodec_InitializeDeflate_m3B14FEBE0FC480DE0814F8D5A1AD45D61A9FC413 (ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965 * __this, const RuntimeMethod* method)
{
	{
		// return _InternalInitializeDeflate(true);
		int32_t L_0 = ZlibCodec__InternalInitializeDeflate_m93EE1D35F993E0164C845763E96BA2C55F20A47A(__this, (bool)1, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Int32 Zlib.ZlibCodec::InitializeDeflate(Zlib.CompressionLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZlibCodec_InitializeDeflate_m11860CF2A81F7D7C09DA44E47F4B0170147ED060 (ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965 * __this, int32_t ___level0, const RuntimeMethod* method)
{
	{
		// this.CompressLevel = level;
		int32_t L_0 = ___level0;
		__this->set_CompressLevel_12(L_0);
		// return _InternalInitializeDeflate(true);
		int32_t L_1 = ZlibCodec__InternalInitializeDeflate_m93EE1D35F993E0164C845763E96BA2C55F20A47A(__this, (bool)1, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 Zlib.ZlibCodec::InitializeDeflate(Zlib.CompressionLevel,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZlibCodec_InitializeDeflate_mF32A5422A51EEEC14909208A3EB15893F2D61B05 (ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965 * __this, int32_t ___level0, bool ___wantRfc1950Header1, const RuntimeMethod* method)
{
	{
		// this.CompressLevel = level;
		int32_t L_0 = ___level0;
		__this->set_CompressLevel_12(L_0);
		// return _InternalInitializeDeflate(wantRfc1950Header);
		bool L_1 = ___wantRfc1950Header1;
		int32_t L_2 = ZlibCodec__InternalInitializeDeflate_m93EE1D35F993E0164C845763E96BA2C55F20A47A(__this, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 Zlib.ZlibCodec::InitializeDeflate(Zlib.CompressionLevel,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZlibCodec_InitializeDeflate_m23C903B1DEAB7984C293FF372654525FEF0B4A02 (ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965 * __this, int32_t ___level0, int32_t ___bits1, const RuntimeMethod* method)
{
	{
		// this.CompressLevel = level;
		int32_t L_0 = ___level0;
		__this->set_CompressLevel_12(L_0);
		// this.WindowBits = bits;
		int32_t L_1 = ___bits1;
		__this->set_WindowBits_13(L_1);
		// return _InternalInitializeDeflate(true);
		int32_t L_2 = ZlibCodec__InternalInitializeDeflate_m93EE1D35F993E0164C845763E96BA2C55F20A47A(__this, (bool)1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 Zlib.ZlibCodec::InitializeDeflate(Zlib.CompressionLevel,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZlibCodec_InitializeDeflate_mE16D48C01D912BE3887EBF51D1F423FC0875FFFF (ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965 * __this, int32_t ___level0, int32_t ___bits1, bool ___wantRfc1950Header2, const RuntimeMethod* method)
{
	{
		// this.CompressLevel = level;
		int32_t L_0 = ___level0;
		__this->set_CompressLevel_12(L_0);
		// this.WindowBits = bits;
		int32_t L_1 = ___bits1;
		__this->set_WindowBits_13(L_1);
		// return _InternalInitializeDeflate(wantRfc1950Header);
		bool L_2 = ___wantRfc1950Header2;
		int32_t L_3 = ZlibCodec__InternalInitializeDeflate_m93EE1D35F993E0164C845763E96BA2C55F20A47A(__this, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Int32 Zlib.ZlibCodec::_InternalInitializeDeflate(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZlibCodec__InternalInitializeDeflate_m93EE1D35F993E0164C845763E96BA2C55F20A47A (ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965 * __this, bool ___wantRfc1950Header0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZlibCodec__InternalInitializeDeflate_m93EE1D35F993E0164C845763E96BA2C55F20A47A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (istate != null) throw new ZlibException("You may not call InitializeDeflate() after calling InitializeInflate().");
		InflateManager_tAA662ABBD3E02BE2870F5EF55A80B30A3969868D * L_0 = __this->get_istate_10();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// if (istate != null) throw new ZlibException("You may not call InitializeDeflate() after calling InitializeInflate().");
		ZlibException_t30AE372C4D0EF362348E27A525BC285180DCF28F * L_1 = (ZlibException_t30AE372C4D0EF362348E27A525BC285180DCF28F *)il2cpp_codegen_object_new(ZlibException_t30AE372C4D0EF362348E27A525BC285180DCF28F_il2cpp_TypeInfo_var);
		ZlibException__ctor_m1C50FBADFBBA0F78D526FFB617F7F69543375725(L_1, _stringLiteral869596215AACF82194CFCB58F3503717790CCD81, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, ZlibCodec__InternalInitializeDeflate_m93EE1D35F993E0164C845763E96BA2C55F20A47A_RuntimeMethod_var);
	}

IL_0013:
	{
		// dstate = new DeflateManager();
		DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42 * L_2 = (DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42 *)il2cpp_codegen_object_new(DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42_il2cpp_TypeInfo_var);
		DeflateManager__ctor_mDDEF9ED2BF2AAC6FCF4AD44877E4F530A27A16AC(L_2, /*hidden argument*/NULL);
		__this->set_dstate_9(L_2);
		// dstate.WantRfc1950HeaderBytes = wantRfc1950Header;
		DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42 * L_3 = __this->get_dstate_9();
		bool L_4 = ___wantRfc1950Header0;
		NullCheck(L_3);
		DeflateManager_set_WantRfc1950HeaderBytes_m37685B96EBD0D862AD8294D859BBCFBC7AFB135B(L_3, L_4, /*hidden argument*/NULL);
		// return dstate.Initialize(this, this.CompressLevel, this.WindowBits, this.Strategy);
		DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42 * L_5 = __this->get_dstate_9();
		int32_t L_6 = __this->get_CompressLevel_12();
		int32_t L_7 = __this->get_WindowBits_13();
		int32_t L_8 = __this->get_Strategy_14();
		NullCheck(L_5);
		int32_t L_9 = DeflateManager_Initialize_mC154B1AD2B9B48EFF4096FC7B2599A11102A7E59(L_5, __this, L_6, L_7, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.Int32 Zlib.ZlibCodec::Deflate(Zlib.FlushType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZlibCodec_Deflate_m0CBAAB01255D3D52348263E4987DC6E33E8DDA62 (ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965 * __this, int32_t ___flush0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZlibCodec_Deflate_m0CBAAB01255D3D52348263E4987DC6E33E8DDA62_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (dstate == null)
		DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42 * L_0 = __this->get_dstate_9();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// throw new ZlibException("No Deflate State!");
		ZlibException_t30AE372C4D0EF362348E27A525BC285180DCF28F * L_1 = (ZlibException_t30AE372C4D0EF362348E27A525BC285180DCF28F *)il2cpp_codegen_object_new(ZlibException_t30AE372C4D0EF362348E27A525BC285180DCF28F_il2cpp_TypeInfo_var);
		ZlibException__ctor_m1C50FBADFBBA0F78D526FFB617F7F69543375725(L_1, _stringLiteralB95A54DF76C16197A17633EBABB02BCA2267D2D8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, ZlibCodec_Deflate_m0CBAAB01255D3D52348263E4987DC6E33E8DDA62_RuntimeMethod_var);
	}

IL_0013:
	{
		// return dstate.Deflate(flush);
		DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42 * L_2 = __this->get_dstate_9();
		int32_t L_3 = ___flush0;
		NullCheck(L_2);
		int32_t L_4 = DeflateManager_Deflate_mCE8116B2801A5EEC89AD75B4F5D51FF030AE65A2(L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Int32 Zlib.ZlibCodec::EndDeflate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZlibCodec_EndDeflate_m96A27202006B1072345AE1F959202D7B30BBB0F2 (ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZlibCodec_EndDeflate_m96A27202006B1072345AE1F959202D7B30BBB0F2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (dstate == null)
		DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42 * L_0 = __this->get_dstate_9();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// throw new ZlibException("No Deflate State!");
		ZlibException_t30AE372C4D0EF362348E27A525BC285180DCF28F * L_1 = (ZlibException_t30AE372C4D0EF362348E27A525BC285180DCF28F *)il2cpp_codegen_object_new(ZlibException_t30AE372C4D0EF362348E27A525BC285180DCF28F_il2cpp_TypeInfo_var);
		ZlibException__ctor_m1C50FBADFBBA0F78D526FFB617F7F69543375725(L_1, _stringLiteralB95A54DF76C16197A17633EBABB02BCA2267D2D8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, ZlibCodec_EndDeflate_m96A27202006B1072345AE1F959202D7B30BBB0F2_RuntimeMethod_var);
	}

IL_0013:
	{
		// dstate = null;
		__this->set_dstate_9((DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42 *)NULL);
		// return ZlibConstants.Z_OK; //ret;
		return 0;
	}
}
// System.Void Zlib.ZlibCodec::ResetDeflate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZlibCodec_ResetDeflate_m1CCDA36EB19AA72F47CB7ED2F4217E979147224F (ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZlibCodec_ResetDeflate_m1CCDA36EB19AA72F47CB7ED2F4217E979147224F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (dstate == null)
		DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42 * L_0 = __this->get_dstate_9();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// throw new ZlibException("No Deflate State!");
		ZlibException_t30AE372C4D0EF362348E27A525BC285180DCF28F * L_1 = (ZlibException_t30AE372C4D0EF362348E27A525BC285180DCF28F *)il2cpp_codegen_object_new(ZlibException_t30AE372C4D0EF362348E27A525BC285180DCF28F_il2cpp_TypeInfo_var);
		ZlibException__ctor_m1C50FBADFBBA0F78D526FFB617F7F69543375725(L_1, _stringLiteralB95A54DF76C16197A17633EBABB02BCA2267D2D8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, ZlibCodec_ResetDeflate_m1CCDA36EB19AA72F47CB7ED2F4217E979147224F_RuntimeMethod_var);
	}

IL_0013:
	{
		// dstate.Reset();
		DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42 * L_2 = __this->get_dstate_9();
		NullCheck(L_2);
		DeflateManager_Reset_m25F099C4B37119DA90867F6A671594E70F3E52E1(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Int32 Zlib.ZlibCodec::SetDeflateParams(Zlib.CompressionLevel,Zlib.CompressionStrategy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZlibCodec_SetDeflateParams_m9F71CDB700926582722622054F93C5AD61CF10BF (ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965 * __this, int32_t ___level0, int32_t ___strategy1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZlibCodec_SetDeflateParams_m9F71CDB700926582722622054F93C5AD61CF10BF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (dstate == null)
		DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42 * L_0 = __this->get_dstate_9();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// throw new ZlibException("No Deflate State!");
		ZlibException_t30AE372C4D0EF362348E27A525BC285180DCF28F * L_1 = (ZlibException_t30AE372C4D0EF362348E27A525BC285180DCF28F *)il2cpp_codegen_object_new(ZlibException_t30AE372C4D0EF362348E27A525BC285180DCF28F_il2cpp_TypeInfo_var);
		ZlibException__ctor_m1C50FBADFBBA0F78D526FFB617F7F69543375725(L_1, _stringLiteralB95A54DF76C16197A17633EBABB02BCA2267D2D8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, ZlibCodec_SetDeflateParams_m9F71CDB700926582722622054F93C5AD61CF10BF_RuntimeMethod_var);
	}

IL_0013:
	{
		// return dstate.SetParams(level, strategy);
		DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42 * L_2 = __this->get_dstate_9();
		int32_t L_3 = ___level0;
		int32_t L_4 = ___strategy1;
		NullCheck(L_2);
		int32_t L_5 = DeflateManager_SetParams_m3B19F031ECDD9D8315DE8E80B4514E05D6E0355D(L_2, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Int32 Zlib.ZlibCodec::SetDictionary(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZlibCodec_SetDictionary_m270348060FC172818083B338992C2872F915248D (ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___dictionary0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZlibCodec_SetDictionary_m270348060FC172818083B338992C2872F915248D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (istate != null)
		InflateManager_tAA662ABBD3E02BE2870F5EF55A80B30A3969868D * L_0 = __this->get_istate_10();
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// return istate.SetDictionary(dictionary);
		InflateManager_tAA662ABBD3E02BE2870F5EF55A80B30A3969868D * L_1 = __this->get_istate_10();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = ___dictionary0;
		NullCheck(L_1);
		int32_t L_3 = InflateManager_SetDictionary_mC68074E44AB9B4BE45E29587EA427284315EEDE5(L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_0015:
	{
		// if (dstate != null)
		DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42 * L_4 = __this->get_dstate_9();
		if (!L_4)
		{
			goto IL_002a;
		}
	}
	{
		// return dstate.SetDictionary(dictionary);
		DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42 * L_5 = __this->get_dstate_9();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = ___dictionary0;
		NullCheck(L_5);
		int32_t L_7 = DeflateManager_SetDictionary_mD3CFD84253DB4FFEFE422B8AD41DC22BB017B16F(L_5, L_6, /*hidden argument*/NULL);
		return L_7;
	}

IL_002a:
	{
		// throw new ZlibException("No Inflate or Deflate state!");
		ZlibException_t30AE372C4D0EF362348E27A525BC285180DCF28F * L_8 = (ZlibException_t30AE372C4D0EF362348E27A525BC285180DCF28F *)il2cpp_codegen_object_new(ZlibException_t30AE372C4D0EF362348E27A525BC285180DCF28F_il2cpp_TypeInfo_var);
		ZlibException__ctor_m1C50FBADFBBA0F78D526FFB617F7F69543375725(L_8, _stringLiteral869EC4B8AF1C9E7A11E513949B3730DFA2E5BFB4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, NULL, ZlibCodec_SetDictionary_m270348060FC172818083B338992C2872F915248D_RuntimeMethod_var);
	}
}
// System.Void Zlib.ZlibCodec::flush_pending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZlibCodec_flush_pending_m4212476FA5FE6CD438FB30F209F89E7BBE48FD9A (ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZlibCodec_flush_pending_m4212476FA5FE6CD438FB30F209F89E7BBE48FD9A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int len = dstate.pendingCount;
		DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42 * L_0 = __this->get_dstate_9();
		NullCheck(L_0);
		int32_t L_1 = L_0->get_pendingCount_25();
		V_0 = L_1;
		// if (len > AvailableBytesOut)
		int32_t L_2 = V_0;
		int32_t L_3 = __this->get_AvailableBytesOut_6();
		if ((((int32_t)L_2) <= ((int32_t)L_3)))
		{
			goto IL_001c;
		}
	}
	{
		// len = AvailableBytesOut;
		int32_t L_4 = __this->get_AvailableBytesOut_6();
		V_0 = L_4;
	}

IL_001c:
	{
		// if (len == 0)
		int32_t L_5 = V_0;
		if (L_5)
		{
			goto IL_0020;
		}
	}
	{
		// return;
		return;
	}

IL_0020:
	{
		// if (dstate.pending.Length <= dstate.nextPending ||
		//     OutputBuffer.Length <= NextOut ||
		//     dstate.pending.Length < (dstate.nextPending + len) ||
		//     OutputBuffer.Length < (NextOut + len))
		DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42 * L_6 = __this->get_dstate_9();
		NullCheck(L_6);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_7 = L_6->get_pending_23();
		NullCheck(L_7);
		DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42 * L_8 = __this->get_dstate_9();
		NullCheck(L_8);
		int32_t L_9 = L_8->get_nextPending_24();
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))))) <= ((int32_t)L_9)))
		{
			goto IL_0078;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_10 = __this->get_OutputBuffer_4();
		NullCheck(L_10);
		int32_t L_11 = __this->get_NextOut_5();
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))))) <= ((int32_t)L_11)))
		{
			goto IL_0078;
		}
	}
	{
		DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42 * L_12 = __this->get_dstate_9();
		NullCheck(L_12);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_13 = L_12->get_pending_23();
		NullCheck(L_13);
		DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42 * L_14 = __this->get_dstate_9();
		NullCheck(L_14);
		int32_t L_15 = L_14->get_nextPending_24();
		int32_t L_16 = V_0;
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))))) < ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)L_16)))))
		{
			goto IL_0078;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_17 = __this->get_OutputBuffer_4();
		NullCheck(L_17);
		int32_t L_18 = __this->get_NextOut_5();
		int32_t L_19 = V_0;
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length))))) >= ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)L_19)))))
		{
			goto IL_00aa;
		}
	}

IL_0078:
	{
		// throw new ZlibException(String.Format("Invalid State. (pending.Length={0}, pendingCount={1})",
		//     dstate.pending.Length, dstate.pendingCount));
		DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42 * L_20 = __this->get_dstate_9();
		NullCheck(L_20);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_21 = L_20->get_pending_23();
		NullCheck(L_21);
		int32_t L_22 = (((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length))));
		RuntimeObject * L_23 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_22);
		DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42 * L_24 = __this->get_dstate_9();
		NullCheck(L_24);
		int32_t L_25 = L_24->get_pendingCount_25();
		int32_t L_26 = L_25;
		RuntimeObject * L_27 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_26);
		String_t* L_28 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteral696BB1C34AEF268975B4AAC1025774CC21B45B6A, L_23, L_27, /*hidden argument*/NULL);
		ZlibException_t30AE372C4D0EF362348E27A525BC285180DCF28F * L_29 = (ZlibException_t30AE372C4D0EF362348E27A525BC285180DCF28F *)il2cpp_codegen_object_new(ZlibException_t30AE372C4D0EF362348E27A525BC285180DCF28F_il2cpp_TypeInfo_var);
		ZlibException__ctor_m1C50FBADFBBA0F78D526FFB617F7F69543375725(L_29, L_28, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_29, NULL, ZlibCodec_flush_pending_m4212476FA5FE6CD438FB30F209F89E7BBE48FD9A_RuntimeMethod_var);
	}

IL_00aa:
	{
		// Array.Copy(dstate.pending, dstate.nextPending, OutputBuffer, NextOut, len);
		DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42 * L_30 = __this->get_dstate_9();
		NullCheck(L_30);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_31 = L_30->get_pending_23();
		DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42 * L_32 = __this->get_dstate_9();
		NullCheck(L_32);
		int32_t L_33 = L_32->get_nextPending_24();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_34 = __this->get_OutputBuffer_4();
		int32_t L_35 = __this->get_NextOut_5();
		int32_t L_36 = V_0;
		Array_Copy_mA10D079DD8D9700CA44721A219A934A2397653F6((RuntimeArray *)(RuntimeArray *)L_31, L_33, (RuntimeArray *)(RuntimeArray *)L_34, L_35, L_36, /*hidden argument*/NULL);
		// NextOut             += len;
		int32_t L_37 = __this->get_NextOut_5();
		int32_t L_38 = V_0;
		__this->set_NextOut_5(((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)L_38)));
		// dstate.nextPending  += len;
		DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42 * L_39 = __this->get_dstate_9();
		DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42 * L_40 = L_39;
		NullCheck(L_40);
		int32_t L_41 = L_40->get_nextPending_24();
		int32_t L_42 = V_0;
		NullCheck(L_40);
		L_40->set_nextPending_24(((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)L_42)));
		// TotalBytesOut       += len;
		int64_t L_43 = __this->get_TotalBytesOut_7();
		int32_t L_44 = V_0;
		__this->set_TotalBytesOut_7(((int64_t)il2cpp_codegen_add((int64_t)L_43, (int64_t)(((int64_t)((int64_t)L_44))))));
		// AvailableBytesOut   -= len;
		int32_t L_45 = __this->get_AvailableBytesOut_6();
		int32_t L_46 = V_0;
		__this->set_AvailableBytesOut_6(((int32_t)il2cpp_codegen_subtract((int32_t)L_45, (int32_t)L_46)));
		// dstate.pendingCount -= len;
		DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42 * L_47 = __this->get_dstate_9();
		DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42 * L_48 = L_47;
		NullCheck(L_48);
		int32_t L_49 = L_48->get_pendingCount_25();
		int32_t L_50 = V_0;
		NullCheck(L_48);
		L_48->set_pendingCount_25(((int32_t)il2cpp_codegen_subtract((int32_t)L_49, (int32_t)L_50)));
		// if (dstate.pendingCount == 0)
		DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42 * L_51 = __this->get_dstate_9();
		NullCheck(L_51);
		int32_t L_52 = L_51->get_pendingCount_25();
		if (L_52)
		{
			goto IL_013c;
		}
	}
	{
		// dstate.nextPending = 0;
		DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42 * L_53 = __this->get_dstate_9();
		NullCheck(L_53);
		L_53->set_nextPending_24(0);
	}

IL_013c:
	{
		// }
		return;
	}
}
// System.Int32 Zlib.ZlibCodec::read_buf(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZlibCodec_read_buf_m205AFC76428DE50165D9681A5DE81B6626ECCF16 (ZlibCodec_t596859B77051AC8E1C07D011C248739F1F07A965 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buf0, int32_t ___start1, int32_t ___size2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZlibCodec_read_buf_m205AFC76428DE50165D9681A5DE81B6626ECCF16_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int len = AvailableBytesIn;
		int32_t L_0 = __this->get_AvailableBytesIn_2();
		V_0 = L_0;
		// if (len > size)
		int32_t L_1 = V_0;
		int32_t L_2 = ___size2;
		if ((((int32_t)L_1) <= ((int32_t)L_2)))
		{
			goto IL_000d;
		}
	}
	{
		// len = size;
		int32_t L_3 = ___size2;
		V_0 = L_3;
	}

IL_000d:
	{
		// if (len == 0)
		int32_t L_4 = V_0;
		if (L_4)
		{
			goto IL_0012;
		}
	}
	{
		// return 0;
		return 0;
	}

IL_0012:
	{
		// AvailableBytesIn -= len;
		int32_t L_5 = __this->get_AvailableBytesIn_2();
		int32_t L_6 = V_0;
		__this->set_AvailableBytesIn_2(((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)L_6)));
		// if (dstate.WantRfc1950HeaderBytes)
		DeflateManager_t81CB9AB30CAFD8A4DF39DA9FFA0727FF978B9C42 * L_7 = __this->get_dstate_9();
		NullCheck(L_7);
		bool L_8 = DeflateManager_get_WantRfc1950HeaderBytes_mB9BFA6E7F44004F1138DEB92AB445C7CA5C2CBCC(L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_004b;
		}
	}
	{
		// _Adler32 = Adler.Adler32(_Adler32, InputBuffer, NextIn, len);
		uint32_t L_9 = __this->get__Adler32_11();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_10 = __this->get_InputBuffer_0();
		int32_t L_11 = __this->get_NextIn_1();
		int32_t L_12 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Adler_tF3B6684F731D4AD4E2A4EDCF14F7CD00BB1B3FC8_il2cpp_TypeInfo_var);
		uint32_t L_13 = Adler_Adler32_m76EAAC3936D2470FDC0FD831B5FF7FBE3CC226CA(L_9, L_10, L_11, L_12, /*hidden argument*/NULL);
		__this->set__Adler32_11(L_13);
	}

IL_004b:
	{
		// Array.Copy(InputBuffer, NextIn, buf, start, len);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_14 = __this->get_InputBuffer_0();
		int32_t L_15 = __this->get_NextIn_1();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_16 = ___buf0;
		int32_t L_17 = ___start1;
		int32_t L_18 = V_0;
		Array_Copy_mA10D079DD8D9700CA44721A219A934A2397653F6((RuntimeArray *)(RuntimeArray *)L_14, L_15, (RuntimeArray *)(RuntimeArray *)L_16, L_17, L_18, /*hidden argument*/NULL);
		// NextIn += len;
		int32_t L_19 = __this->get_NextIn_1();
		int32_t L_20 = V_0;
		__this->set_NextIn_1(((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)L_20)));
		// TotalBytesIn += len;
		int64_t L_21 = __this->get_TotalBytesIn_3();
		int32_t L_22 = V_0;
		__this->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_21, (int64_t)(((int64_t)((int64_t)L_22))))));
		// return len;
		int32_t L_23 = V_0;
		return L_23;
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
// Zlib.ZlibException
const Il2CppGuid ZlibException_t30AE372C4D0EF362348E27A525BC285180DCF28F::CLSID = { 0xebc25cf6, 0x9120, 0x4283, 0xb9, 0x72, 0xe, 0x55, 0x20, 0xd0, 0x0, 0xe };
// System.Void Zlib.ZlibException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZlibException__ctor_mE7088E68E83A7D9E994548DDCAF545875872FF3B (ZlibException_t30AE372C4D0EF362348E27A525BC285180DCF28F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZlibException__ctor_mE7088E68E83A7D9E994548DDCAF545875872FF3B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base()
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m5FEC89FBFACEEDCEE29CCFD44A85D72FC28EB0D1(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Zlib.ZlibException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZlibException__ctor_m1C50FBADFBBA0F78D526FFB617F7F69543375725 (ZlibException_t30AE372C4D0EF362348E27A525BC285180DCF28F * __this, String_t* ___s0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZlibException__ctor_m1C50FBADFBBA0F78D526FFB617F7F69543375725_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base(s)
		String_t* L_0 = ___s0;
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0(__this, L_0, /*hidden argument*/NULL);
		// }
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
// System.Void disassemble::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void disassemble_Start_m6D51E7618068D18B1BDF3A386ABF8EC895D407F0 (disassemble_t80F8530BAD34D4BF509CEEF7A23DEACFFFE2FCD9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (disassemble_Start_m6D51E7618068D18B1BDF3A386ABF8EC895D407F0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// startPos = gameObject.transform.position;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_1, /*hidden argument*/NULL);
		__this->set_startPos_8(L_2);
		// endPos = gameObject.transform.position + Vector3.left * distance;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Vector3_get_left_m74B52D8CFD8C62138067B2EB6846B6E9E51B7C20(/*hidden argument*/NULL);
		float L_7 = __this->get_distance_10();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_6, L_7, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_5, L_8, /*hidden argument*/NULL);
		__this->set_endPos_9(L_9);
		// }
		return;
	}
}
// System.Void disassemble::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void disassemble_Update_mF90286A96A1F7A0EB7FCC2397711A080CA42C6A6 (disassemble_t80F8530BAD34D4BF509CEEF7A23DEACFFFE2FCD9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (disassemble_Update_mF90286A96A1F7A0EB7FCC2397711A080CA42C6A6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// if (Input.GetKeyDown(KeyCode.U))
		bool L_0 = Input_GetKeyDown_mD82B14BB87E1C811668BD1A2CFBC0CF3D4983FEA(((int32_t)117), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_006d;
		}
	}
	{
		// if (keyHit == true)
		bool L_1 = __this->get_keyHit_13();
		if (!L_1)
		{
			goto IL_006d;
		}
	}
	{
		// currentLerptime += Time.deltaTime;
		float L_2 = __this->get_currentLerptime_12();
		float L_3 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		__this->set_currentLerptime_12(((float)il2cpp_codegen_add((float)L_2, (float)L_3)));
		// if(currentLerptime >= lerpTime)
		float L_4 = __this->get_currentLerptime_12();
		float L_5 = __this->get_lerpTime_11();
		if ((!(((float)L_4) >= ((float)L_5))))
		{
			goto IL_003d;
		}
	}
	{
		// currentLerptime = lerpTime;
		float L_6 = __this->get_lerpTime_11();
		__this->set_currentLerptime_12(L_6);
	}

IL_003d:
	{
		// float Perc = currentLerptime / lerpTime;
		float L_7 = __this->get_currentLerptime_12();
		float L_8 = __this->get_lerpTime_11();
		V_0 = ((float)((float)L_7/(float)L_8));
		// gameObject.transform.position = Vector3.Lerp(startPos, endPos, Perc);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_9 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_9, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = __this->get_startPos_8();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = __this->get_endPos_9();
		float L_13 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = Vector3_Lerp_m5BA75496B803820CC64079383956D73C6FD4A8A1(L_11, L_12, L_13, /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_10, L_14, /*hidden argument*/NULL);
	}

IL_006d:
	{
		// }
		return;
	}
}
// System.Void disassemble::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void disassemble__ctor_mC42BC5D43B564488CF729FA86F32C082413EDF19 (disassemble_t80F8530BAD34D4BF509CEEF7A23DEACFFFE2FCD9 * __this, const RuntimeMethod* method)
{
	{
		// public float distance = 30f;
		__this->set_distance_10((30.0f));
		// public float lerpTime = 5;
		__this->set_lerpTime_11((5.0f));
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void loadTxt::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void loadTxt_Awake_mCDF243210C6837DC0D6053BB124B2CCF89A7ED98 (loadTxt_tBE40CFCDB2EB63B876F74F4BF8D527A4C5A83E96 * __this, const RuntimeMethod* method)
{
	{
		// Lue();
		loadTxt_Lue_m5E8795FCB492F4D5FF33BD21AD41DCC678E40814(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void loadTxt::Read(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void loadTxt_Read_mCF4A8F40F93D4B61972B99C6B9F4667D515B66B5 (loadTxt_tBE40CFCDB2EB63B876F74F4BF8D527A4C5A83E96 * __this, String_t* ___path0, const RuntimeMethod* method)
{
	{
		// text = File.ReadAllText(path);
		String_t* L_0 = ___path0;
		String_t* L_1 = File_ReadAllText_m404A1BE4C87AC3C7B9C0B07469CDC44DE52817FF(L_0, /*hidden argument*/NULL);
		__this->set_text_4(L_1);
		// }
		return;
	}
}
// System.Void loadTxt::Lue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void loadTxt_Lue_m5E8795FCB492F4D5FF33BD21AD41DCC678E40814 (loadTxt_tBE40CFCDB2EB63B876F74F4BF8D527A4C5A83E96 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (loadTxt_Lue_m5E8795FCB492F4D5FF33BD21AD41DCC678E40814_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Read("Assets/Resources/test.txt");
		loadTxt_Read_mCF4A8F40F93D4B61972B99C6B9F4667D515B66B5(__this, _stringLiteral569A19828C4CDB7B9B533B0DDDDFE42FAAD78A45, /*hidden argument*/NULL);
		// gameObject.GetComponent<Text>().text = text;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_1 = GameObject_GetComponent_TisText_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_m24A42DAE3900B867697FFD9DFB6E448D6978CD4A(L_0, /*hidden argument*/GameObject_GetComponent_TisText_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_m24A42DAE3900B867697FFD9DFB6E448D6978CD4A_RuntimeMethod_var);
		String_t* L_2 = __this->get_text_4();
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_2);
		// }
		return;
	}
}
// System.Void loadTxt::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void loadTxt__ctor_mE9645ABA574537E557DB0511DB0F9E5B84173CC3 (loadTxt_tBE40CFCDB2EB63B876F74F4BF8D527A4C5A83E96 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void picswitch::ButtonPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void picswitch_ButtonPressed_mF13E2B1B0A1C207AD78748D986B7C8B8A856A4E5 (picswitch_tDA42A6C0AFBB9A2F8F9667AE0736CCDE7A58B083 * __this, const RuntimeMethod* method)
{
	{
		// if (materials.Length == 0)
		MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* L_0 = __this->get_materials_4();
		NullCheck(L_0);
		if ((((RuntimeArray*)L_0)->max_length))
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// index += 1;
		int32_t L_1 = __this->get_index_6();
		__this->set_index_6(((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1)));
		// if (index == materials.Length + 1)
		int32_t L_2 = __this->get_index_6();
		MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* L_3 = __this->get_materials_4();
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))), (int32_t)1))))))
		{
			goto IL_0031;
		}
	}
	{
		// index = 1;
		__this->set_index_6(1);
	}

IL_0031:
	{
		// rend.sharedMaterial = materials[index - 1];
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_4 = __this->get_rend_5();
		MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* L_5 = __this->get_materials_4();
		int32_t L_6 = __this->get_index_6();
		NullCheck(L_5);
		int32_t L_7 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1));
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_4);
		Renderer_set_sharedMaterial_mC94A354D9B0FCA081754A7CB51AEE5A9AD3946A3(L_4, L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void picswitch::ButtonPressedPrevious()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void picswitch_ButtonPressedPrevious_mCCD03683B2D67FFE72D0A43B242A195F0613B593 (picswitch_tDA42A6C0AFBB9A2F8F9667AE0736CCDE7A58B083 * __this, const RuntimeMethod* method)
{
	{
		// if (materials.Length == 0)
		MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* L_0 = __this->get_materials_4();
		NullCheck(L_0);
		if ((((RuntimeArray*)L_0)->max_length))
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// index -= 1;
		int32_t L_1 = __this->get_index_6();
		__this->set_index_6(((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1)));
		// rend.sharedMaterial = materials[index - 1];
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_2 = __this->get_rend_5();
		MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* L_3 = __this->get_materials_4();
		int32_t L_4 = __this->get_index_6();
		NullCheck(L_3);
		int32_t L_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1));
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_2);
		Renderer_set_sharedMaterial_mC94A354D9B0FCA081754A7CB51AEE5A9AD3946A3(L_2, L_6, /*hidden argument*/NULL);
		// index -= 1;
		int32_t L_7 = __this->get_index_6();
		__this->set_index_6(((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)1)));
		// if (index < materials.Length - 1)
		int32_t L_8 = __this->get_index_6();
		MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* L_9 = __this->get_materials_4();
		NullCheck(L_9);
		if ((((int32_t)L_8) >= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))), (int32_t)1)))))
		{
			goto IL_0060;
		}
	}
	{
		// index -= 1;
		int32_t L_10 = __this->get_index_6();
		__this->set_index_6(((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1)));
	}

IL_0060:
	{
		// rend.sharedMaterial = materials[index + 1];
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_11 = __this->get_rend_5();
		MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* L_12 = __this->get_materials_4();
		int32_t L_13 = __this->get_index_6();
		NullCheck(L_12);
		int32_t L_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_11);
		Renderer_set_sharedMaterial_mC94A354D9B0FCA081754A7CB51AEE5A9AD3946A3(L_11, L_15, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void picswitch::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void picswitch__ctor_m91D4DDEAA426CC8A0C6C2EF637485A6321899BCF (picswitch_tDA42A6C0AFBB9A2F8F9667AE0736CCDE7A58B083 * __this, const RuntimeMethod* method)
{
	{
		// private int index = 1;
		__this->set_index_6(1);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void trigger::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void trigger_OnTriggerEnter_mFB701FAFF8F8B884F04E4B67D0E07A17B88FCE3E (trigger_t4FC08C765C0D1A52C95179247ED4801A50F0E14C * __this, Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (trigger_OnTriggerEnter_mFB701FAFF8F8B884F04E4B67D0E07A17B88FCE3E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Jee");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteralE227CD07437A080F4A4F29C3F25D79600B3AE3E7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void trigger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void trigger__ctor_m42FA7324B3E12D8E27D95BEB6E1B673DF8D6AFA6 (trigger_t4FC08C765C0D1A52C95179247ED4801A50F0E14C * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
