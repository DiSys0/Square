#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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

// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t815A476B0A21E183042059E705F9E505478CD8AE;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.Color32[]
struct Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// GameManager
struct GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// Input_Controller
struct Input_Controller_tB6CEDDA1385C420D6E5AFDEAC7E15112AAD2354E;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// ObjectsAction
struct ObjectsAction_t668DFE63CC9554E54C19DB31DC03D23CE82B8D33;
// ParticleActions
struct ParticleActions_tF132E3D764EE2F1163C15E7790EF9761325FB1E4;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UI_Controller
struct UI_Controller_tDBF7405F996ACBB79E9E676481F556F2BD90D698;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// GameManager/<IEParticle>d__8
struct U3CIEParticleU3Ed__8_t54ED5BF1EDDD916F1C4F810C587939763065BE75;
// GameManager/<IERedClick>d__15
struct U3CIERedClickU3Ed__15_t39C16927867235CEE0E53A7E9E893AF4BC5C30CC;
// Input_Controller/AddScore
struct AddScore_t6CCDF1C1798D8FC840CEE8131D0736E72DCD3F54;
// Input_Controller/NewClick
struct NewClick_tDB762DAD633CA00A4042E3710A098418E9BD8973;
// Input_Controller/NewObject
struct NewObject_t28C704DF17CCD973CE803B613A0BF41B850975D7;
// Input_Controller/RedSquareClick
struct RedSquareClick_tEBC1A12E2AB8B55D740B1F592F6915869CA64849;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// ObjectsAction/<IEChangeColor>d__13
struct U3CIEChangeColorU3Ed__13_t38ADE1FE36665E337FEBB881CF4E8F0B5F1CFD33;
// ObjectsAction/<IEMove_Sin>d__14
struct U3CIEMove_SinU3Ed__14_tCBB7D1CDDB49BC6DE6E562E1C751C6D05930BA56;
// ObjectsAction/NewObject
struct NewObject_t359FF587F948422E04E8E8B369B09011BBAAA765;
// ObjectsAction/NewParticle
struct NewParticle_t1840D95AF8535546BD2A321DEC91EBEEF4F771A3;
// UI_Controller/<IETapScreen>d__15
struct U3CIETapScreenU3Ed__15_t95AE3D63C29DFB96DA9BD4DE66729A1377AFF69C;
// UI_Controller/EndGame
struct EndGame_tB409D77BF756F5ECB6C874B3D78FBDCE33AE4665;
// UI_Controller/NewGame
struct NewGame_tEA2DAB9633B74B56DEB5439CC3AACA1E4B7BBD2C;

IL2CPP_EXTERN_C RuntimeClass* AddScore_t6CCDF1C1798D8FC840CEE8131D0736E72DCD3F54_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EndGame_tB409D77BF756F5ECB6C874B3D78FBDCE33AE4665_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Input_Controller_tB6CEDDA1385C420D6E5AFDEAC7E15112AAD2354E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NewClick_tDB762DAD633CA00A4042E3710A098418E9BD8973_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NewGame_tEA2DAB9633B74B56DEB5439CC3AACA1E4B7BBD2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NewObject_t28C704DF17CCD973CE803B613A0BF41B850975D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NewObject_t359FF587F948422E04E8E8B369B09011BBAAA765_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NewParticle_t1840D95AF8535546BD2A321DEC91EBEEF4F771A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectsAction_t668DFE63CC9554E54C19DB31DC03D23CE82B8D33_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RedSquareClick_tEBC1A12E2AB8B55D740B1F592F6915869CA64849_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CIEChangeColorU3Ed__13_t38ADE1FE36665E337FEBB881CF4E8F0B5F1CFD33_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CIEMove_SinU3Ed__14_tCBB7D1CDDB49BC6DE6E562E1C751C6D05930BA56_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CIEParticleU3Ed__8_t54ED5BF1EDDD916F1C4F810C587939763065BE75_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CIERedClickU3Ed__15_t39C16927867235CEE0E53A7E9E893AF4BC5C30CC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CIETapScreenU3Ed__15_t95AE3D63C29DFB96DA9BD4DE66729A1377AFF69C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UI_Controller_tDBF7405F996ACBB79E9E676481F556F2BD90D698_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral325BA3BF46827E4BA8B523BD56E8B38A4A2477AD;
IL2CPP_EXTERN_C String_t* _stringLiteral89C016E7A0440DB91C41D9A1E242DE83FA91866A;
IL2CPP_EXTERN_C String_t* _stringLiteral954F4A2F6864EFB6815981E6B99C5FD833091266;
IL2CPP_EXTERN_C String_t* _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisObjectsAction_t668DFE63CC9554E54C19DB31DC03D23CE82B8D33_m148665E0B54C4C23C79D529783D5BA20B8D792A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mE2EA0E48C8C0EAFA09C6FAD2003105EACAC85213_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameManager_AddLeftObject_m6623CEEF3AA11901021786148DE5FDB1EF30AC6B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameManager_AddNewObject_mB241D44225097167C0C31E13CA1E5D3D2BED1079_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameManager_CreateParticle_m8EE22857E81912B31FBFA235F8C045D4254DAA99_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameManager_EndGame_m34CB0E063C72D2D7BA815B5397C5DB865EE60810_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameManager_NewGame_m194460A1EF3271C291CD25884A05BC090E525390_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameManager_redSquareClick_mD6A8754567A5823440D78A4FCCE168E3AE89418A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisObjectsAction_t668DFE63CC9554E54C19DB31DC03D23CE82B8D33_m96FCECE0CED7E897E3CBDB0B16CC248879DB1B34_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CIEChangeColorU3Ed__13_System_Collections_IEnumerator_Reset_m5B073C7F21D0FD3B8F7BD395FACD065D155F9E5C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CIEMove_SinU3Ed__14_System_Collections_IEnumerator_Reset_m35431876DF14455A8EAB35C65B3C5DE6C3B15DE9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CIEParticleU3Ed__8_System_Collections_IEnumerator_Reset_m3306A09BC405B8862EF0B8B0476B9614A7B27DAD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CIERedClickU3Ed__15_System_Collections_IEnumerator_Reset_m2DF44075EE8F7E9D9A246652531898C375FEBD5B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CIETapScreenU3Ed__15_System_Collections_IEnumerator_Reset_m0322FBF2F820A766B15E501A0711983488AB4CD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UI_Controller_ChangeScore_m2BA18A987A70732A4BB60E631E305A1CFDDE8C52_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UI_Controller_ResetNoClickTime_m67AEF0A7762CA392A60E40A850369FCA8BDD1499_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.String
struct String_t  : public RuntimeObject
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
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// UI_Controller/<IETapScreen>d__15
struct U3CIETapScreenU3Ed__15_t95AE3D63C29DFB96DA9BD4DE66729A1377AFF69C  : public RuntimeObject
{
public:
	// System.Int32 UI_Controller/<IETapScreen>d__15::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UI_Controller/<IETapScreen>d__15::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UI_Controller UI_Controller/<IETapScreen>d__15::<>4__this
	UI_Controller_tDBF7405F996ACBB79E9E676481F556F2BD90D698 * ___U3CU3E4__this_2;
	// System.Single UI_Controller/<IETapScreen>d__15::time
	float ___time_3;
	// System.Single UI_Controller/<IETapScreen>d__15::<currTime>5__2
	float ___U3CcurrTimeU3E5__2_4;
	// System.Byte UI_Controller/<IETapScreen>d__15::<a>5__3
	uint8_t ___U3CaU3E5__3_5;
	// System.Byte UI_Controller/<IETapScreen>d__15::<b>5__4
	uint8_t ___U3CbU3E5__4_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CIETapScreenU3Ed__15_t95AE3D63C29DFB96DA9BD4DE66729A1377AFF69C, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CIETapScreenU3Ed__15_t95AE3D63C29DFB96DA9BD4DE66729A1377AFF69C, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CIETapScreenU3Ed__15_t95AE3D63C29DFB96DA9BD4DE66729A1377AFF69C, ___U3CU3E4__this_2)); }
	inline UI_Controller_tDBF7405F996ACBB79E9E676481F556F2BD90D698 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline UI_Controller_tDBF7405F996ACBB79E9E676481F556F2BD90D698 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(UI_Controller_tDBF7405F996ACBB79E9E676481F556F2BD90D698 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_time_3() { return static_cast<int32_t>(offsetof(U3CIETapScreenU3Ed__15_t95AE3D63C29DFB96DA9BD4DE66729A1377AFF69C, ___time_3)); }
	inline float get_time_3() const { return ___time_3; }
	inline float* get_address_of_time_3() { return &___time_3; }
	inline void set_time_3(float value)
	{
		___time_3 = value;
	}

	inline static int32_t get_offset_of_U3CcurrTimeU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CIETapScreenU3Ed__15_t95AE3D63C29DFB96DA9BD4DE66729A1377AFF69C, ___U3CcurrTimeU3E5__2_4)); }
	inline float get_U3CcurrTimeU3E5__2_4() const { return ___U3CcurrTimeU3E5__2_4; }
	inline float* get_address_of_U3CcurrTimeU3E5__2_4() { return &___U3CcurrTimeU3E5__2_4; }
	inline void set_U3CcurrTimeU3E5__2_4(float value)
	{
		___U3CcurrTimeU3E5__2_4 = value;
	}

	inline static int32_t get_offset_of_U3CaU3E5__3_5() { return static_cast<int32_t>(offsetof(U3CIETapScreenU3Ed__15_t95AE3D63C29DFB96DA9BD4DE66729A1377AFF69C, ___U3CaU3E5__3_5)); }
	inline uint8_t get_U3CaU3E5__3_5() const { return ___U3CaU3E5__3_5; }
	inline uint8_t* get_address_of_U3CaU3E5__3_5() { return &___U3CaU3E5__3_5; }
	inline void set_U3CaU3E5__3_5(uint8_t value)
	{
		___U3CaU3E5__3_5 = value;
	}

	inline static int32_t get_offset_of_U3CbU3E5__4_6() { return static_cast<int32_t>(offsetof(U3CIETapScreenU3Ed__15_t95AE3D63C29DFB96DA9BD4DE66729A1377AFF69C, ___U3CbU3E5__4_6)); }
	inline uint8_t get_U3CbU3E5__4_6() const { return ___U3CbU3E5__4_6; }
	inline uint8_t* get_address_of_U3CbU3E5__4_6() { return &___U3CbU3E5__4_6; }
	inline void set_U3CbU3E5__4_6(uint8_t value)
	{
		___U3CbU3E5__4_6 = value;
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
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
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.Color32
struct Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_rgba_0() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___rgba_0)); }
	inline int32_t get_rgba_0() const { return ___rgba_0; }
	inline int32_t* get_address_of_rgba_0() { return &___rgba_0; }
	inline void set_rgba_0(int32_t value)
	{
		___rgba_0 = value;
	}

	inline static int32_t get_offset_of_r_1() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___r_1)); }
	inline uint8_t get_r_1() const { return ___r_1; }
	inline uint8_t* get_address_of_r_1() { return &___r_1; }
	inline void set_r_1(uint8_t value)
	{
		___r_1 = value;
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___g_2)); }
	inline uint8_t get_g_2() const { return ___g_2; }
	inline uint8_t* get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(uint8_t value)
	{
		___g_2 = value;
	}

	inline static int32_t get_offset_of_b_3() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___b_3)); }
	inline uint8_t get_b_3() const { return ___b_3; }
	inline uint8_t* get_address_of_b_3() { return &___b_3; }
	inline void set_b_3(uint8_t value)
	{
		___b_3 = value;
	}

	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___a_4)); }
	inline uint8_t get_a_4() const { return ___a_4; }
	inline uint8_t* get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(uint8_t value)
	{
		___a_4 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
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


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
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
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
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
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
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
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
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
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
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
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

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
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Ray
struct Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6, ___m_Origin_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6, ___m_Direction_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Direction_1 = value;
	}
};


// UnityEngine.RaycastHit2D
struct RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 
{
public:
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Centroid
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Centroid_0;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Point
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Point_1;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Normal
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Normal_2;
	// System.Single UnityEngine.RaycastHit2D::m_Distance
	float ___m_Distance_3;
	// System.Single UnityEngine.RaycastHit2D::m_Fraction
	float ___m_Fraction_4;
	// System.Int32 UnityEngine.RaycastHit2D::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Centroid_0() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Centroid_0)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Centroid_0() const { return ___m_Centroid_0; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Centroid_0() { return &___m_Centroid_0; }
	inline void set_m_Centroid_0(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Centroid_0 = value;
	}

	inline static int32_t get_offset_of_m_Point_1() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Point_1)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Point_1() const { return ___m_Point_1; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Point_1() { return &___m_Point_1; }
	inline void set_m_Point_1(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Point_1 = value;
	}

	inline static int32_t get_offset_of_m_Normal_2() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Normal_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Normal_2() const { return ___m_Normal_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Normal_2() { return &___m_Normal_2; }
	inline void set_m_Normal_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Normal_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_Fraction_4() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Fraction_4)); }
	inline float get_m_Fraction_4() const { return ___m_Fraction_4; }
	inline float* get_address_of_m_Fraction_4() { return &___m_Fraction_4; }
	inline void set_m_Fraction_4(float value)
	{
		___m_Fraction_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
	}
};


// UnityEngine.TouchPhase
struct TouchPhase_tB52B8A497547FB9575DE7975D13AC7D64C3A958A 
{
public:
	// System.Int32 UnityEngine.TouchPhase::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchPhase_tB52B8A497547FB9575DE7975D13AC7D64C3A958A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TouchType
struct TouchType_t2EF726465ABD45681A6686BAC426814AA087C20F 
{
public:
	// System.Int32 UnityEngine.TouchType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchType_t2EF726465ABD45681A6686BAC426814AA087C20F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GameManager/<IEParticle>d__8
struct U3CIEParticleU3Ed__8_t54ED5BF1EDDD916F1C4F810C587939763065BE75  : public RuntimeObject
{
public:
	// System.Int32 GameManager/<IEParticle>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GameManager/<IEParticle>d__8::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// GameManager GameManager/<IEParticle>d__8::<>4__this
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * ___U3CU3E4__this_2;
	// UnityEngine.Vector2 GameManager/<IEParticle>d__8::pos
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___pos_3;
	// UnityEngine.GameObject GameManager/<IEParticle>d__8::<temp>5__2
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CtempU3E5__2_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CIEParticleU3Ed__8_t54ED5BF1EDDD916F1C4F810C587939763065BE75, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CIEParticleU3Ed__8_t54ED5BF1EDDD916F1C4F810C587939763065BE75, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CIEParticleU3Ed__8_t54ED5BF1EDDD916F1C4F810C587939763065BE75, ___U3CU3E4__this_2)); }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_pos_3() { return static_cast<int32_t>(offsetof(U3CIEParticleU3Ed__8_t54ED5BF1EDDD916F1C4F810C587939763065BE75, ___pos_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_pos_3() const { return ___pos_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_pos_3() { return &___pos_3; }
	inline void set_pos_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___pos_3 = value;
	}

	inline static int32_t get_offset_of_U3CtempU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CIEParticleU3Ed__8_t54ED5BF1EDDD916F1C4F810C587939763065BE75, ___U3CtempU3E5__2_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CtempU3E5__2_4() const { return ___U3CtempU3E5__2_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CtempU3E5__2_4() { return &___U3CtempU3E5__2_4; }
	inline void set_U3CtempU3E5__2_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CtempU3E5__2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtempU3E5__2_4), (void*)value);
	}
};


// GameManager/<IERedClick>d__15
struct U3CIERedClickU3Ed__15_t39C16927867235CEE0E53A7E9E893AF4BC5C30CC  : public RuntimeObject
{
public:
	// System.Int32 GameManager/<IERedClick>d__15::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GameManager/<IERedClick>d__15::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityEngine.Color GameManager/<IERedClick>d__15::<cam>5__2
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CcamU3E5__2_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CIERedClickU3Ed__15_t39C16927867235CEE0E53A7E9E893AF4BC5C30CC, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CIERedClickU3Ed__15_t39C16927867235CEE0E53A7E9E893AF4BC5C30CC, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcamU3E5__2_2() { return static_cast<int32_t>(offsetof(U3CIERedClickU3Ed__15_t39C16927867235CEE0E53A7E9E893AF4BC5C30CC, ___U3CcamU3E5__2_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CcamU3E5__2_2() const { return ___U3CcamU3E5__2_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CcamU3E5__2_2() { return &___U3CcamU3E5__2_2; }
	inline void set_U3CcamU3E5__2_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CcamU3E5__2_2 = value;
	}
};


// UnityEngine.UI.Image/FillMethod
struct FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/Type
struct Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ObjectsAction/<IEChangeColor>d__13
struct U3CIEChangeColorU3Ed__13_t38ADE1FE36665E337FEBB881CF4E8F0B5F1CFD33  : public RuntimeObject
{
public:
	// System.Int32 ObjectsAction/<IEChangeColor>d__13::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ObjectsAction/<IEChangeColor>d__13::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// ObjectsAction ObjectsAction/<IEChangeColor>d__13::<>4__this
	ObjectsAction_t668DFE63CC9554E54C19DB31DC03D23CE82B8D33 * ___U3CU3E4__this_2;
	// UnityEngine.Color32 ObjectsAction/<IEChangeColor>d__13::newColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___newColor_3;
	// System.Single ObjectsAction/<IEChangeColor>d__13::time
	float ___time_4;
	// System.Single ObjectsAction/<IEChangeColor>d__13::<currTime>5__2
	float ___U3CcurrTimeU3E5__2_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CIEChangeColorU3Ed__13_t38ADE1FE36665E337FEBB881CF4E8F0B5F1CFD33, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CIEChangeColorU3Ed__13_t38ADE1FE36665E337FEBB881CF4E8F0B5F1CFD33, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CIEChangeColorU3Ed__13_t38ADE1FE36665E337FEBB881CF4E8F0B5F1CFD33, ___U3CU3E4__this_2)); }
	inline ObjectsAction_t668DFE63CC9554E54C19DB31DC03D23CE82B8D33 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline ObjectsAction_t668DFE63CC9554E54C19DB31DC03D23CE82B8D33 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(ObjectsAction_t668DFE63CC9554E54C19DB31DC03D23CE82B8D33 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_newColor_3() { return static_cast<int32_t>(offsetof(U3CIEChangeColorU3Ed__13_t38ADE1FE36665E337FEBB881CF4E8F0B5F1CFD33, ___newColor_3)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_newColor_3() const { return ___newColor_3; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_newColor_3() { return &___newColor_3; }
	inline void set_newColor_3(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___newColor_3 = value;
	}

	inline static int32_t get_offset_of_time_4() { return static_cast<int32_t>(offsetof(U3CIEChangeColorU3Ed__13_t38ADE1FE36665E337FEBB881CF4E8F0B5F1CFD33, ___time_4)); }
	inline float get_time_4() const { return ___time_4; }
	inline float* get_address_of_time_4() { return &___time_4; }
	inline void set_time_4(float value)
	{
		___time_4 = value;
	}

	inline static int32_t get_offset_of_U3CcurrTimeU3E5__2_5() { return static_cast<int32_t>(offsetof(U3CIEChangeColorU3Ed__13_t38ADE1FE36665E337FEBB881CF4E8F0B5F1CFD33, ___U3CcurrTimeU3E5__2_5)); }
	inline float get_U3CcurrTimeU3E5__2_5() const { return ___U3CcurrTimeU3E5__2_5; }
	inline float* get_address_of_U3CcurrTimeU3E5__2_5() { return &___U3CcurrTimeU3E5__2_5; }
	inline void set_U3CcurrTimeU3E5__2_5(float value)
	{
		___U3CcurrTimeU3E5__2_5 = value;
	}
};


// ObjectsAction/<IEMove_Sin>d__14
struct U3CIEMove_SinU3Ed__14_tCBB7D1CDDB49BC6DE6E562E1C751C6D05930BA56  : public RuntimeObject
{
public:
	// System.Int32 ObjectsAction/<IEMove_Sin>d__14::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ObjectsAction/<IEMove_Sin>d__14::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// ObjectsAction ObjectsAction/<IEMove_Sin>d__14::<>4__this
	ObjectsAction_t668DFE63CC9554E54C19DB31DC03D23CE82B8D33 * ___U3CU3E4__this_2;
	// UnityEngine.Vector2 ObjectsAction/<IEMove_Sin>d__14::<pos>5__2
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CposU3E5__2_3;
	// System.Single ObjectsAction/<IEMove_Sin>d__14::<startY>5__3
	float ___U3CstartYU3E5__3_4;
	// System.Single ObjectsAction/<IEMove_Sin>d__14::<currTime>5__4
	float ___U3CcurrTimeU3E5__4_5;
	// System.Single ObjectsAction/<IEMove_Sin>d__14::<speed>5__5
	float ___U3CspeedU3E5__5_6;
	// System.Single ObjectsAction/<IEMove_Sin>d__14::<h>5__6
	float ___U3ChU3E5__6_7;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CIEMove_SinU3Ed__14_tCBB7D1CDDB49BC6DE6E562E1C751C6D05930BA56, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CIEMove_SinU3Ed__14_tCBB7D1CDDB49BC6DE6E562E1C751C6D05930BA56, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CIEMove_SinU3Ed__14_tCBB7D1CDDB49BC6DE6E562E1C751C6D05930BA56, ___U3CU3E4__this_2)); }
	inline ObjectsAction_t668DFE63CC9554E54C19DB31DC03D23CE82B8D33 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline ObjectsAction_t668DFE63CC9554E54C19DB31DC03D23CE82B8D33 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(ObjectsAction_t668DFE63CC9554E54C19DB31DC03D23CE82B8D33 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CposU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CIEMove_SinU3Ed__14_tCBB7D1CDDB49BC6DE6E562E1C751C6D05930BA56, ___U3CposU3E5__2_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CposU3E5__2_3() const { return ___U3CposU3E5__2_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CposU3E5__2_3() { return &___U3CposU3E5__2_3; }
	inline void set_U3CposU3E5__2_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CposU3E5__2_3 = value;
	}

	inline static int32_t get_offset_of_U3CstartYU3E5__3_4() { return static_cast<int32_t>(offsetof(U3CIEMove_SinU3Ed__14_tCBB7D1CDDB49BC6DE6E562E1C751C6D05930BA56, ___U3CstartYU3E5__3_4)); }
	inline float get_U3CstartYU3E5__3_4() const { return ___U3CstartYU3E5__3_4; }
	inline float* get_address_of_U3CstartYU3E5__3_4() { return &___U3CstartYU3E5__3_4; }
	inline void set_U3CstartYU3E5__3_4(float value)
	{
		___U3CstartYU3E5__3_4 = value;
	}

	inline static int32_t get_offset_of_U3CcurrTimeU3E5__4_5() { return static_cast<int32_t>(offsetof(U3CIEMove_SinU3Ed__14_tCBB7D1CDDB49BC6DE6E562E1C751C6D05930BA56, ___U3CcurrTimeU3E5__4_5)); }
	inline float get_U3CcurrTimeU3E5__4_5() const { return ___U3CcurrTimeU3E5__4_5; }
	inline float* get_address_of_U3CcurrTimeU3E5__4_5() { return &___U3CcurrTimeU3E5__4_5; }
	inline void set_U3CcurrTimeU3E5__4_5(float value)
	{
		___U3CcurrTimeU3E5__4_5 = value;
	}

	inline static int32_t get_offset_of_U3CspeedU3E5__5_6() { return static_cast<int32_t>(offsetof(U3CIEMove_SinU3Ed__14_tCBB7D1CDDB49BC6DE6E562E1C751C6D05930BA56, ___U3CspeedU3E5__5_6)); }
	inline float get_U3CspeedU3E5__5_6() const { return ___U3CspeedU3E5__5_6; }
	inline float* get_address_of_U3CspeedU3E5__5_6() { return &___U3CspeedU3E5__5_6; }
	inline void set_U3CspeedU3E5__5_6(float value)
	{
		___U3CspeedU3E5__5_6 = value;
	}

	inline static int32_t get_offset_of_U3ChU3E5__6_7() { return static_cast<int32_t>(offsetof(U3CIEMove_SinU3Ed__14_tCBB7D1CDDB49BC6DE6E562E1C751C6D05930BA56, ___U3ChU3E5__6_7)); }
	inline float get_U3ChU3E5__6_7() const { return ___U3ChU3E5__6_7; }
	inline float* get_address_of_U3ChU3E5__6_7() { return &___U3ChU3E5__6_7; }
	inline void set_U3ChU3E5__6_7(float value)
	{
		___U3ChU3E5__6_7 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
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
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.Touch
struct Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C 
{
public:
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;

public:
	inline static int32_t get_offset_of_m_FingerId_0() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_FingerId_0)); }
	inline int32_t get_m_FingerId_0() const { return ___m_FingerId_0; }
	inline int32_t* get_address_of_m_FingerId_0() { return &___m_FingerId_0; }
	inline void set_m_FingerId_0(int32_t value)
	{
		___m_FingerId_0 = value;
	}

	inline static int32_t get_offset_of_m_Position_1() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Position_1)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Position_1() const { return ___m_Position_1; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Position_1() { return &___m_Position_1; }
	inline void set_m_Position_1(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Position_1 = value;
	}

	inline static int32_t get_offset_of_m_RawPosition_2() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_RawPosition_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_RawPosition_2() const { return ___m_RawPosition_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_RawPosition_2() { return &___m_RawPosition_2; }
	inline void set_m_RawPosition_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_RawPosition_2 = value;
	}

	inline static int32_t get_offset_of_m_PositionDelta_3() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_PositionDelta_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_PositionDelta_3() const { return ___m_PositionDelta_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_PositionDelta_3() { return &___m_PositionDelta_3; }
	inline void set_m_PositionDelta_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_PositionDelta_3 = value;
	}

	inline static int32_t get_offset_of_m_TimeDelta_4() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_TimeDelta_4)); }
	inline float get_m_TimeDelta_4() const { return ___m_TimeDelta_4; }
	inline float* get_address_of_m_TimeDelta_4() { return &___m_TimeDelta_4; }
	inline void set_m_TimeDelta_4(float value)
	{
		___m_TimeDelta_4 = value;
	}

	inline static int32_t get_offset_of_m_TapCount_5() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_TapCount_5)); }
	inline int32_t get_m_TapCount_5() const { return ___m_TapCount_5; }
	inline int32_t* get_address_of_m_TapCount_5() { return &___m_TapCount_5; }
	inline void set_m_TapCount_5(int32_t value)
	{
		___m_TapCount_5 = value;
	}

	inline static int32_t get_offset_of_m_Phase_6() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Phase_6)); }
	inline int32_t get_m_Phase_6() const { return ___m_Phase_6; }
	inline int32_t* get_address_of_m_Phase_6() { return &___m_Phase_6; }
	inline void set_m_Phase_6(int32_t value)
	{
		___m_Phase_6 = value;
	}

	inline static int32_t get_offset_of_m_Type_7() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Type_7)); }
	inline int32_t get_m_Type_7() const { return ___m_Type_7; }
	inline int32_t* get_address_of_m_Type_7() { return &___m_Type_7; }
	inline void set_m_Type_7(int32_t value)
	{
		___m_Type_7 = value;
	}

	inline static int32_t get_offset_of_m_Pressure_8() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Pressure_8)); }
	inline float get_m_Pressure_8() const { return ___m_Pressure_8; }
	inline float* get_address_of_m_Pressure_8() { return &___m_Pressure_8; }
	inline void set_m_Pressure_8(float value)
	{
		___m_Pressure_8 = value;
	}

	inline static int32_t get_offset_of_m_maximumPossiblePressure_9() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_maximumPossiblePressure_9)); }
	inline float get_m_maximumPossiblePressure_9() const { return ___m_maximumPossiblePressure_9; }
	inline float* get_address_of_m_maximumPossiblePressure_9() { return &___m_maximumPossiblePressure_9; }
	inline void set_m_maximumPossiblePressure_9(float value)
	{
		___m_maximumPossiblePressure_9 = value;
	}

	inline static int32_t get_offset_of_m_Radius_10() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Radius_10)); }
	inline float get_m_Radius_10() const { return ___m_Radius_10; }
	inline float* get_address_of_m_Radius_10() { return &___m_Radius_10; }
	inline void set_m_Radius_10(float value)
	{
		___m_Radius_10 = value;
	}

	inline static int32_t get_offset_of_m_RadiusVariance_11() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_RadiusVariance_11)); }
	inline float get_m_RadiusVariance_11() const { return ___m_RadiusVariance_11; }
	inline float* get_address_of_m_RadiusVariance_11() { return &___m_RadiusVariance_11; }
	inline void set_m_RadiusVariance_11(float value)
	{
		___m_RadiusVariance_11 = value;
	}

	inline static int32_t get_offset_of_m_AltitudeAngle_12() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_AltitudeAngle_12)); }
	inline float get_m_AltitudeAngle_12() const { return ___m_AltitudeAngle_12; }
	inline float* get_address_of_m_AltitudeAngle_12() { return &___m_AltitudeAngle_12; }
	inline void set_m_AltitudeAngle_12(float value)
	{
		___m_AltitudeAngle_12 = value;
	}

	inline static int32_t get_offset_of_m_AzimuthAngle_13() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_AzimuthAngle_13)); }
	inline float get_m_AzimuthAngle_13() const { return ___m_AzimuthAngle_13; }
	inline float* get_address_of_m_AzimuthAngle_13() { return &___m_AzimuthAngle_13; }
	inline void set_m_AzimuthAngle_13(float value)
	{
		___m_AzimuthAngle_13 = value;
	}
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// Input_Controller/AddScore
struct AddScore_t6CCDF1C1798D8FC840CEE8131D0736E72DCD3F54  : public MulticastDelegate_t
{
public:

public:
};


// Input_Controller/NewClick
struct NewClick_tDB762DAD633CA00A4042E3710A098418E9BD8973  : public MulticastDelegate_t
{
public:

public:
};


// Input_Controller/NewObject
struct NewObject_t28C704DF17CCD973CE803B613A0BF41B850975D7  : public MulticastDelegate_t
{
public:

public:
};


// Input_Controller/RedSquareClick
struct RedSquareClick_tEBC1A12E2AB8B55D740B1F592F6915869CA64849  : public MulticastDelegate_t
{
public:

public:
};


// ObjectsAction/NewObject
struct NewObject_t359FF587F948422E04E8E8B369B09011BBAAA765  : public MulticastDelegate_t
{
public:

public:
};


// ObjectsAction/NewParticle
struct NewParticle_t1840D95AF8535546BD2A321DEC91EBEEF4F771A3  : public MulticastDelegate_t
{
public:

public:
};


// UI_Controller/EndGame
struct EndGame_tB409D77BF756F5ECB6C874B3D78FBDCE33AE4665  : public MulticastDelegate_t
{
public:

public:
};


// UI_Controller/NewGame
struct NewGame_tEA2DAB9633B74B56DEB5439CC3AACA1E4B7BBD2C  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};


// GameManager
struct GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject GameManager::_objectPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ____objectPrefab_4;
	// UnityEngine.GameObject GameManager::_particlePrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ____particlePrefab_5;
	// UnityEngine.GameObject GameManager::_parentObjects
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ____parentObjects_6;
	// System.String[] GameManager::_tagObject
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____tagObject_7;
	// UnityEngine.Color32[] GameManager::_colors
	Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* ____colors_8;

public:
	inline static int32_t get_offset_of__objectPrefab_4() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ____objectPrefab_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get__objectPrefab_4() const { return ____objectPrefab_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of__objectPrefab_4() { return &____objectPrefab_4; }
	inline void set__objectPrefab_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		____objectPrefab_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____objectPrefab_4), (void*)value);
	}

	inline static int32_t get_offset_of__particlePrefab_5() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ____particlePrefab_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get__particlePrefab_5() const { return ____particlePrefab_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of__particlePrefab_5() { return &____particlePrefab_5; }
	inline void set__particlePrefab_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		____particlePrefab_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____particlePrefab_5), (void*)value);
	}

	inline static int32_t get_offset_of__parentObjects_6() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ____parentObjects_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get__parentObjects_6() const { return ____parentObjects_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of__parentObjects_6() { return &____parentObjects_6; }
	inline void set__parentObjects_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		____parentObjects_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____parentObjects_6), (void*)value);
	}

	inline static int32_t get_offset_of__tagObject_7() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ____tagObject_7)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__tagObject_7() const { return ____tagObject_7; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__tagObject_7() { return &____tagObject_7; }
	inline void set__tagObject_7(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____tagObject_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tagObject_7), (void*)value);
	}

	inline static int32_t get_offset_of__colors_8() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ____colors_8)); }
	inline Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* get__colors_8() const { return ____colors_8; }
	inline Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2** get_address_of__colors_8() { return &____colors_8; }
	inline void set__colors_8(Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* value)
	{
		____colors_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____colors_8), (void*)value);
	}
};


// Input_Controller
struct Input_Controller_tB6CEDDA1385C420D6E5AFDEAC7E15112AAD2354E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};

struct Input_Controller_tB6CEDDA1385C420D6E5AFDEAC7E15112AAD2354E_StaticFields
{
public:
	// Input_Controller/AddScore Input_Controller::addScore
	AddScore_t6CCDF1C1798D8FC840CEE8131D0736E72DCD3F54 * ___addScore_4;
	// Input_Controller/NewObject Input_Controller::newObject
	NewObject_t28C704DF17CCD973CE803B613A0BF41B850975D7 * ___newObject_5;
	// Input_Controller/NewClick Input_Controller::newClick
	NewClick_tDB762DAD633CA00A4042E3710A098418E9BD8973 * ___newClick_6;
	// Input_Controller/RedSquareClick Input_Controller::redSquareClick
	RedSquareClick_tEBC1A12E2AB8B55D740B1F592F6915869CA64849 * ___redSquareClick_7;

public:
	inline static int32_t get_offset_of_addScore_4() { return static_cast<int32_t>(offsetof(Input_Controller_tB6CEDDA1385C420D6E5AFDEAC7E15112AAD2354E_StaticFields, ___addScore_4)); }
	inline AddScore_t6CCDF1C1798D8FC840CEE8131D0736E72DCD3F54 * get_addScore_4() const { return ___addScore_4; }
	inline AddScore_t6CCDF1C1798D8FC840CEE8131D0736E72DCD3F54 ** get_address_of_addScore_4() { return &___addScore_4; }
	inline void set_addScore_4(AddScore_t6CCDF1C1798D8FC840CEE8131D0736E72DCD3F54 * value)
	{
		___addScore_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___addScore_4), (void*)value);
	}

	inline static int32_t get_offset_of_newObject_5() { return static_cast<int32_t>(offsetof(Input_Controller_tB6CEDDA1385C420D6E5AFDEAC7E15112AAD2354E_StaticFields, ___newObject_5)); }
	inline NewObject_t28C704DF17CCD973CE803B613A0BF41B850975D7 * get_newObject_5() const { return ___newObject_5; }
	inline NewObject_t28C704DF17CCD973CE803B613A0BF41B850975D7 ** get_address_of_newObject_5() { return &___newObject_5; }
	inline void set_newObject_5(NewObject_t28C704DF17CCD973CE803B613A0BF41B850975D7 * value)
	{
		___newObject_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___newObject_5), (void*)value);
	}

	inline static int32_t get_offset_of_newClick_6() { return static_cast<int32_t>(offsetof(Input_Controller_tB6CEDDA1385C420D6E5AFDEAC7E15112AAD2354E_StaticFields, ___newClick_6)); }
	inline NewClick_tDB762DAD633CA00A4042E3710A098418E9BD8973 * get_newClick_6() const { return ___newClick_6; }
	inline NewClick_tDB762DAD633CA00A4042E3710A098418E9BD8973 ** get_address_of_newClick_6() { return &___newClick_6; }
	inline void set_newClick_6(NewClick_tDB762DAD633CA00A4042E3710A098418E9BD8973 * value)
	{
		___newClick_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___newClick_6), (void*)value);
	}

	inline static int32_t get_offset_of_redSquareClick_7() { return static_cast<int32_t>(offsetof(Input_Controller_tB6CEDDA1385C420D6E5AFDEAC7E15112AAD2354E_StaticFields, ___redSquareClick_7)); }
	inline RedSquareClick_tEBC1A12E2AB8B55D740B1F592F6915869CA64849 * get_redSquareClick_7() const { return ___redSquareClick_7; }
	inline RedSquareClick_tEBC1A12E2AB8B55D740B1F592F6915869CA64849 ** get_address_of_redSquareClick_7() { return &___redSquareClick_7; }
	inline void set_redSquareClick_7(RedSquareClick_tEBC1A12E2AB8B55D740B1F592F6915869CA64849 * value)
	{
		___redSquareClick_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___redSquareClick_7), (void*)value);
	}
};


// ObjectsAction
struct ObjectsAction_t668DFE63CC9554E54C19DB31DC03D23CE82B8D33  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 ObjectsAction::Score
	int32_t ___Score_4;
	// UnityEngine.Color32 ObjectsAction::_original_Color
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ____original_Color_5;
	// UnityEngine.SpriteRenderer ObjectsAction::_render
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ____render_6;
	// UnityEngine.Transform ObjectsAction::_transform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ____transform_7;

public:
	inline static int32_t get_offset_of_Score_4() { return static_cast<int32_t>(offsetof(ObjectsAction_t668DFE63CC9554E54C19DB31DC03D23CE82B8D33, ___Score_4)); }
	inline int32_t get_Score_4() const { return ___Score_4; }
	inline int32_t* get_address_of_Score_4() { return &___Score_4; }
	inline void set_Score_4(int32_t value)
	{
		___Score_4 = value;
	}

	inline static int32_t get_offset_of__original_Color_5() { return static_cast<int32_t>(offsetof(ObjectsAction_t668DFE63CC9554E54C19DB31DC03D23CE82B8D33, ____original_Color_5)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get__original_Color_5() const { return ____original_Color_5; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of__original_Color_5() { return &____original_Color_5; }
	inline void set__original_Color_5(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		____original_Color_5 = value;
	}

	inline static int32_t get_offset_of__render_6() { return static_cast<int32_t>(offsetof(ObjectsAction_t668DFE63CC9554E54C19DB31DC03D23CE82B8D33, ____render_6)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get__render_6() const { return ____render_6; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of__render_6() { return &____render_6; }
	inline void set__render_6(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		____render_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____render_6), (void*)value);
	}

	inline static int32_t get_offset_of__transform_7() { return static_cast<int32_t>(offsetof(ObjectsAction_t668DFE63CC9554E54C19DB31DC03D23CE82B8D33, ____transform_7)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get__transform_7() const { return ____transform_7; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of__transform_7() { return &____transform_7; }
	inline void set__transform_7(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		____transform_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____transform_7), (void*)value);
	}
};

struct ObjectsAction_t668DFE63CC9554E54C19DB31DC03D23CE82B8D33_StaticFields
{
public:
	// ObjectsAction/NewObject ObjectsAction::newObject
	NewObject_t359FF587F948422E04E8E8B369B09011BBAAA765 * ___newObject_8;
	// ObjectsAction/NewParticle ObjectsAction::newParticle
	NewParticle_t1840D95AF8535546BD2A321DEC91EBEEF4F771A3 * ___newParticle_9;

public:
	inline static int32_t get_offset_of_newObject_8() { return static_cast<int32_t>(offsetof(ObjectsAction_t668DFE63CC9554E54C19DB31DC03D23CE82B8D33_StaticFields, ___newObject_8)); }
	inline NewObject_t359FF587F948422E04E8E8B369B09011BBAAA765 * get_newObject_8() const { return ___newObject_8; }
	inline NewObject_t359FF587F948422E04E8E8B369B09011BBAAA765 ** get_address_of_newObject_8() { return &___newObject_8; }
	inline void set_newObject_8(NewObject_t359FF587F948422E04E8E8B369B09011BBAAA765 * value)
	{
		___newObject_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___newObject_8), (void*)value);
	}

	inline static int32_t get_offset_of_newParticle_9() { return static_cast<int32_t>(offsetof(ObjectsAction_t668DFE63CC9554E54C19DB31DC03D23CE82B8D33_StaticFields, ___newParticle_9)); }
	inline NewParticle_t1840D95AF8535546BD2A321DEC91EBEEF4F771A3 * get_newParticle_9() const { return ___newParticle_9; }
	inline NewParticle_t1840D95AF8535546BD2A321DEC91EBEEF4F771A3 ** get_address_of_newParticle_9() { return &___newParticle_9; }
	inline void set_newParticle_9(NewParticle_t1840D95AF8535546BD2A321DEC91EBEEF4F771A3 * value)
	{
		___newParticle_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___newParticle_9), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UI_Controller
struct UI_Controller_tDBF7405F996ACBB79E9E676481F556F2BD90D698  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text UI_Controller::_startText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ____startText_4;
	// UnityEngine.UI.Text UI_Controller::_scoreText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ____scoreText_5;
	// UnityEngine.UI.Image UI_Controller::_raycast
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ____raycast_6;
	// System.Boolean UI_Controller::_startgame
	bool ____startgame_7;
	// System.Single UI_Controller::_noClickTimer
	float ____noClickTimer_8;

public:
	inline static int32_t get_offset_of__startText_4() { return static_cast<int32_t>(offsetof(UI_Controller_tDBF7405F996ACBB79E9E676481F556F2BD90D698, ____startText_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get__startText_4() const { return ____startText_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of__startText_4() { return &____startText_4; }
	inline void set__startText_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		____startText_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____startText_4), (void*)value);
	}

	inline static int32_t get_offset_of__scoreText_5() { return static_cast<int32_t>(offsetof(UI_Controller_tDBF7405F996ACBB79E9E676481F556F2BD90D698, ____scoreText_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get__scoreText_5() const { return ____scoreText_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of__scoreText_5() { return &____scoreText_5; }
	inline void set__scoreText_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		____scoreText_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____scoreText_5), (void*)value);
	}

	inline static int32_t get_offset_of__raycast_6() { return static_cast<int32_t>(offsetof(UI_Controller_tDBF7405F996ACBB79E9E676481F556F2BD90D698, ____raycast_6)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get__raycast_6() const { return ____raycast_6; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of__raycast_6() { return &____raycast_6; }
	inline void set__raycast_6(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		____raycast_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____raycast_6), (void*)value);
	}

	inline static int32_t get_offset_of__startgame_7() { return static_cast<int32_t>(offsetof(UI_Controller_tDBF7405F996ACBB79E9E676481F556F2BD90D698, ____startgame_7)); }
	inline bool get__startgame_7() const { return ____startgame_7; }
	inline bool* get_address_of__startgame_7() { return &____startgame_7; }
	inline void set__startgame_7(bool value)
	{
		____startgame_7 = value;
	}

	inline static int32_t get_offset_of__noClickTimer_8() { return static_cast<int32_t>(offsetof(UI_Controller_tDBF7405F996ACBB79E9E676481F556F2BD90D698, ____noClickTimer_8)); }
	inline float get__noClickTimer_8() const { return ____noClickTimer_8; }
	inline float* get_address_of__noClickTimer_8() { return &____noClickTimer_8; }
	inline void set__noClickTimer_8(float value)
	{
		____noClickTimer_8 = value;
	}
};

struct UI_Controller_tDBF7405F996ACBB79E9E676481F556F2BD90D698_StaticFields
{
public:
	// UI_Controller/NewGame UI_Controller::newgame
	NewGame_tEA2DAB9633B74B56DEB5439CC3AACA1E4B7BBD2C * ___newgame_9;
	// UI_Controller/EndGame UI_Controller::endGame
	EndGame_tB409D77BF756F5ECB6C874B3D78FBDCE33AE4665 * ___endGame_10;

public:
	inline static int32_t get_offset_of_newgame_9() { return static_cast<int32_t>(offsetof(UI_Controller_tDBF7405F996ACBB79E9E676481F556F2BD90D698_StaticFields, ___newgame_9)); }
	inline NewGame_tEA2DAB9633B74B56DEB5439CC3AACA1E4B7BBD2C * get_newgame_9() const { return ___newgame_9; }
	inline NewGame_tEA2DAB9633B74B56DEB5439CC3AACA1E4B7BBD2C ** get_address_of_newgame_9() { return &___newgame_9; }
	inline void set_newgame_9(NewGame_tEA2DAB9633B74B56DEB5439CC3AACA1E4B7BBD2C * value)
	{
		___newgame_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___newgame_9), (void*)value);
	}

	inline static int32_t get_offset_of_endGame_10() { return static_cast<int32_t>(offsetof(UI_Controller_tDBF7405F996ACBB79E9E676481F556F2BD90D698_StaticFields, ___endGame_10)); }
	inline EndGame_tB409D77BF756F5ECB6C874B3D78FBDCE33AE4665 * get_endGame_10() const { return ___endGame_10; }
	inline EndGame_tB409D77BF756F5ECB6C874B3D78FBDCE33AE4665 ** get_address_of_endGame_10() { return &___endGame_10; }
	inline void set_endGame_10(EndGame_tB409D77BF756F5ECB6C874B3D78FBDCE33AE4665 * value)
	{
		___endGame_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___endGame_10), (void*)value);
	}
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// ParticleActions
struct ParticleActions_tF132E3D764EE2F1163C15E7790EF9761325FB1E4  : public ObjectsAction_t668DFE63CC9554E54C19DB31DC03D23CE82B8D33
{
public:

public:
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;

public:
	inline static int32_t get_offset_of_m_Sprite_37() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Sprite_37)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_Sprite_37() const { return ___m_Sprite_37; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_Sprite_37() { return &___m_Sprite_37; }
	inline void set_m_Sprite_37(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_Sprite_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sprite_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_38() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_OverrideSprite_38)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_OverrideSprite_38() const { return ___m_OverrideSprite_38; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_OverrideSprite_38() { return &___m_OverrideSprite_38; }
	inline void set_m_OverrideSprite_38(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_OverrideSprite_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideSprite_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_39() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Type_39)); }
	inline int32_t get_m_Type_39() const { return ___m_Type_39; }
	inline int32_t* get_address_of_m_Type_39() { return &___m_Type_39; }
	inline void set_m_Type_39(int32_t value)
	{
		___m_Type_39 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_40() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PreserveAspect_40)); }
	inline bool get_m_PreserveAspect_40() const { return ___m_PreserveAspect_40; }
	inline bool* get_address_of_m_PreserveAspect_40() { return &___m_PreserveAspect_40; }
	inline void set_m_PreserveAspect_40(bool value)
	{
		___m_PreserveAspect_40 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_41() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillCenter_41)); }
	inline bool get_m_FillCenter_41() const { return ___m_FillCenter_41; }
	inline bool* get_address_of_m_FillCenter_41() { return &___m_FillCenter_41; }
	inline void set_m_FillCenter_41(bool value)
	{
		___m_FillCenter_41 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_42() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillMethod_42)); }
	inline int32_t get_m_FillMethod_42() const { return ___m_FillMethod_42; }
	inline int32_t* get_address_of_m_FillMethod_42() { return &___m_FillMethod_42; }
	inline void set_m_FillMethod_42(int32_t value)
	{
		___m_FillMethod_42 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_43() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillAmount_43)); }
	inline float get_m_FillAmount_43() const { return ___m_FillAmount_43; }
	inline float* get_address_of_m_FillAmount_43() { return &___m_FillAmount_43; }
	inline void set_m_FillAmount_43(float value)
	{
		___m_FillAmount_43 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_44() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillClockwise_44)); }
	inline bool get_m_FillClockwise_44() const { return ___m_FillClockwise_44; }
	inline bool* get_address_of_m_FillClockwise_44() { return &___m_FillClockwise_44; }
	inline void set_m_FillClockwise_44(bool value)
	{
		___m_FillClockwise_44 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_45() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillOrigin_45)); }
	inline int32_t get_m_FillOrigin_45() const { return ___m_FillOrigin_45; }
	inline int32_t* get_address_of_m_FillOrigin_45() { return &___m_FillOrigin_45; }
	inline void set_m_FillOrigin_45(int32_t value)
	{
		___m_FillOrigin_45 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_46() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_AlphaHitTestMinimumThreshold_46)); }
	inline float get_m_AlphaHitTestMinimumThreshold_46() const { return ___m_AlphaHitTestMinimumThreshold_46; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_46() { return &___m_AlphaHitTestMinimumThreshold_46; }
	inline void set_m_AlphaHitTestMinimumThreshold_46(float value)
	{
		___m_AlphaHitTestMinimumThreshold_46 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_47() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Tracked_47)); }
	inline bool get_m_Tracked_47() const { return ___m_Tracked_47; }
	inline bool* get_address_of_m_Tracked_47() { return &___m_Tracked_47; }
	inline void set_m_Tracked_47(bool value)
	{
		___m_Tracked_47 = value;
	}

	inline static int32_t get_offset_of_m_UseSpriteMesh_48() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_UseSpriteMesh_48)); }
	inline bool get_m_UseSpriteMesh_48() const { return ___m_UseSpriteMesh_48; }
	inline bool* get_address_of_m_UseSpriteMesh_48() { return &___m_UseSpriteMesh_48; }
	inline void set_m_UseSpriteMesh_48(bool value)
	{
		___m_UseSpriteMesh_48 = value;
	}

	inline static int32_t get_offset_of_m_PixelsPerUnitMultiplier_49() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PixelsPerUnitMultiplier_49)); }
	inline float get_m_PixelsPerUnitMultiplier_49() const { return ___m_PixelsPerUnitMultiplier_49; }
	inline float* get_address_of_m_PixelsPerUnitMultiplier_49() { return &___m_PixelsPerUnitMultiplier_49; }
	inline void set_m_PixelsPerUnitMultiplier_49(float value)
	{
		___m_PixelsPerUnitMultiplier_49 = value;
	}

	inline static int32_t get_offset_of_m_CachedReferencePixelsPerUnit_50() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_CachedReferencePixelsPerUnit_50)); }
	inline float get_m_CachedReferencePixelsPerUnit_50() const { return ___m_CachedReferencePixelsPerUnit_50; }
	inline float* get_address_of_m_CachedReferencePixelsPerUnit_50() { return &___m_CachedReferencePixelsPerUnit_50; }
	inline void set_m_CachedReferencePixelsPerUnit_50(float value)
	{
		___m_CachedReferencePixelsPerUnit_50 = value;
	}
};

struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_t815A476B0A21E183042059E705F9E505478CD8AE * ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_36() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_ETC1DefaultUI_36)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_ETC1DefaultUI_36() const { return ___s_ETC1DefaultUI_36; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_ETC1DefaultUI_36() { return &___s_ETC1DefaultUI_36; }
	inline void set_s_ETC1DefaultUI_36(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_ETC1DefaultUI_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ETC1DefaultUI_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertScratch_51() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_VertScratch_51)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_VertScratch_51() const { return ___s_VertScratch_51; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_VertScratch_51() { return &___s_VertScratch_51; }
	inline void set_s_VertScratch_51(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_VertScratch_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertScratch_51), (void*)value);
	}

	inline static int32_t get_offset_of_s_UVScratch_52() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_UVScratch_52)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_UVScratch_52() const { return ___s_UVScratch_52; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_UVScratch_52() { return &___s_UVScratch_52; }
	inline void set_s_UVScratch_52(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_UVScratch_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UVScratch_52), (void*)value);
	}

	inline static int32_t get_offset_of_s_Xy_53() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Xy_53)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Xy_53() const { return ___s_Xy_53; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Xy_53() { return &___s_Xy_53; }
	inline void set_s_Xy_53(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Xy_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Xy_53), (void*)value);
	}

	inline static int32_t get_offset_of_s_Uv_54() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Uv_54)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Uv_54() const { return ___s_Uv_54; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Uv_54() { return &___s_Uv_54; }
	inline void set_s_Uv_54(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Uv_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Uv_54), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_55() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___m_TrackedTexturelessImages_55)); }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE * get_m_TrackedTexturelessImages_55() const { return ___m_TrackedTexturelessImages_55; }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE ** get_address_of_m_TrackedTexturelessImages_55() { return &___m_TrackedTexturelessImages_55; }
	inline void set_m_TrackedTexturelessImages_55(List_1_t815A476B0A21E183042059E705F9E505478CD8AE * value)
	{
		___m_TrackedTexturelessImages_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedTexturelessImages_55), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_56() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Initialized_56)); }
	inline bool get_s_Initialized_56() const { return ___s_Initialized_56; }
	inline bool* get_address_of_s_Initialized_56() { return &___s_Initialized_56; }
	inline void set_s_Initialized_56(bool value)
	{
		___s_Initialized_56 = value;
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
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
// UnityEngine.Color32[]
struct Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  m_Items[1];

public:
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		m_Items[index] = value;
	}
};
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
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


// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);

// System.Void ObjectsAction/NewObject::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewObject__ctor_m428BA1AEB357600CBD60DB5AACCDDAC4B6CA5637 (NewObject_t359FF587F948422E04E8E8B369B09011BBAAA765 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void ObjectsAction::add_newObject(ObjectsAction/NewObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectsAction_add_newObject_m0E88C80D495092206ACF383197F5E8233C03510E (NewObject_t359FF587F948422E04E8E8B369B09011BBAAA765 * ___value0, const RuntimeMethod* method);
// System.Void UI_Controller/NewGame::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewGame__ctor_mE8E7D53B4EE587FDF5EEC1F0993FE1447E4B899B (NewGame_tEA2DAB9633B74B56DEB5439CC3AACA1E4B7BBD2C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UI_Controller::add_newgame(UI_Controller/NewGame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_Controller_add_newgame_m8452DFD8466E346256AD774C2FBB77EDA9CDBF6C (NewGame_tEA2DAB9633B74B56DEB5439CC3AACA1E4B7BBD2C * ___value0, const RuntimeMethod* method);
// System.Void UI_Controller/EndGame::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndGame__ctor_m445CD3FA33C12E386195E33C4AE66CF6CE0816F7 (EndGame_tB409D77BF756F5ECB6C874B3D78FBDCE33AE4665 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UI_Controller::add_endGame(UI_Controller/EndGame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_Controller_add_endGame_m79B0FF79C532994FBE6217461FCB425432458DFC (EndGame_tB409D77BF756F5ECB6C874B3D78FBDCE33AE4665 * ___value0, const RuntimeMethod* method);
// System.Void ObjectsAction/NewParticle::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewParticle__ctor_m29DF9CBFBB832FE86740EFABFA663B0384AD273E (NewParticle_t1840D95AF8535546BD2A321DEC91EBEEF4F771A3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void ObjectsAction::add_newParticle(ObjectsAction/NewParticle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectsAction_add_newParticle_mD1B49A5397A7ACE8D07625751356FE0124558262 (NewParticle_t1840D95AF8535546BD2A321DEC91EBEEF4F771A3 * ___value0, const RuntimeMethod* method);
// System.Void Input_Controller/NewObject::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewObject__ctor_m0246AD3FFACCE49B916726A96CA26A7BFD9267F8 (NewObject_t28C704DF17CCD973CE803B613A0BF41B850975D7 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Input_Controller::add_newObject(Input_Controller/NewObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Input_Controller_add_newObject_m2A0E8ACCA1F8C3DDD0012C25430E6C52E0A791B2 (NewObject_t28C704DF17CCD973CE803B613A0BF41B850975D7 * ___value0, const RuntimeMethod* method);
// System.Void Input_Controller/RedSquareClick::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RedSquareClick__ctor_m858DF8E2FA8C5430DBCDDF2A7E8279D05038FF9C (RedSquareClick_tEBC1A12E2AB8B55D740B1F592F6915869CA64849 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Input_Controller::add_redSquareClick(Input_Controller/RedSquareClick)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Input_Controller_add_redSquareClick_m153C4C40AFA703D9C5C0E55BAF5CE1EAC210E77F (RedSquareClick_tEBC1A12E2AB8B55D740B1F592F6915869CA64849 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared)(___original0, ___position1, ___rotation2, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.Color UnityEngine.Color32::op_Implicit(UnityEngine.Color32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color32_op_Implicit_m63F14F1A14B1A9A3EE4D154413EE229D3E001623 (Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___c0, const RuntimeMethod* method);
// System.Void UnityEngine.SpriteRenderer::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33 (SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::set_tag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_set_tag_m0EBA46574304C71E047A33BDD5F5D49E9D9A25BE (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<ObjectsAction>()
inline ObjectsAction_t668DFE63CC9554E54C19DB31DC03D23CE82B8D33 * GameObject_GetComponent_TisObjectsAction_t668DFE63CC9554E54C19DB31DC03D23CE82B8D33_m96FCECE0CED7E897E3CBDB0B16CC248879DB1B34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  ObjectsAction_t668DFE63CC9554E54C19DB31DC03D23CE82B8D33 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Collections.IEnumerator GameManager::IEParticle(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_IEParticle_m4ECA88F087E8FA1BEDA3A9547FE842524321DB7D (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___pos0, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void GameManager/<IEParticle>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIEParticleU3Ed__8__ctor_m4209A50EC600AE7DF07791E166FFF7D3E5306052 (U3CIEParticleU3Ed__8_t54ED5BF1EDDD916F1C4F810C587939763065BE75 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void UnityEngine.Color32::.ctor(System.Byte,System.Byte,System.Byte,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color32__ctor_m9D07EC69256BB7ED2784E543848DE7B8484A5C94 (Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * __this, uint8_t ___r0, uint8_t ___g1, uint8_t ___b2, uint8_t ___a3, const RuntimeMethod* method);
// System.Void GameManager::CreateObject(UnityEngine.GameObject,System.Single,System.Single,UnityEngine.Color32,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_CreateObject_m0E33E99F36FD50A9D8215C7A532BE601B4896174 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gameObject0, float ___x1, float ___y2, Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___color323, String_t* ___typeObject4, int32_t ___score5, const RuntimeMethod* method);
// System.Void GameManager::AddLeftObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_AddLeftObject_m6623CEEF3AA11901021786148DE5FDB1EF30AC6B (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, int32_t ___index0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void GameManager::AddBottomObject(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_AddBottomObject_m1D82846797384095ABDE3B6B750157B4CADC8CF2 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___pos0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method);
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method);
// System.Collections.IEnumerator GameManager::IERedClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_IERedClick_mE3E41C87A76D6986A980BB2D2346980E3B0A76A3 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// System.Void GameManager/<IERedClick>d__15::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIERedClickU3Ed__15__ctor_mA5AC65DBEDF567A3A62055212A9C9098C179E767 (U3CIERedClickU3Ed__15_t39C16927867235CEE0E53A7E9E893AF4BC5C30CC * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void ObjectsAction::remove_newObject(ObjectsAction/NewObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectsAction_remove_newObject_m7A05318D83D017CBCC6EC12C8668A208B36761C3 (NewObject_t359FF587F948422E04E8E8B369B09011BBAAA765 * ___value0, const RuntimeMethod* method);
// System.Void UI_Controller::remove_newgame(UI_Controller/NewGame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_Controller_remove_newgame_m23C8D28CA52ADD4ADDB75A58D488EC5285262256 (NewGame_tEA2DAB9633B74B56DEB5439CC3AACA1E4B7BBD2C * ___value0, const RuntimeMethod* method);
// System.Void UI_Controller::remove_endGame(UI_Controller/EndGame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_Controller_remove_endGame_m655170C78134815E06A0193F79C78EFD7D31C5A8 (EndGame_tB409D77BF756F5ECB6C874B3D78FBDCE33AE4665 * ___value0, const RuntimeMethod* method);
// System.Void ObjectsAction::remove_newParticle(ObjectsAction/NewParticle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectsAction_remove_newParticle_m904183AB6EE912697994FD0A9326FCF1717687A6 (NewParticle_t1840D95AF8535546BD2A321DEC91EBEEF4F771A3 * ___value0, const RuntimeMethod* method);
// System.Void Input_Controller::remove_newObject(Input_Controller/NewObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Input_Controller_remove_newObject_mB018594341CD3D50AC5454AD26F1C063697B7DCF (NewObject_t28C704DF17CCD973CE803B613A0BF41B850975D7 * ___value0, const RuntimeMethod* method);
// System.Void Input_Controller::remove_redSquareClick(Input_Controller/RedSquareClick)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Input_Controller_remove_redSquareClick_m488C996233D4ABD50AAD9EB29A65490DB0BD6EB3 (RedSquareClick_tEBC1A12E2AB8B55D740B1F592F6915869CA64849 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_mE1A06AB1973E3456AE398B3CC5105F27CC7335D6 (const RuntimeMethod* method);
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  Input_GetTouch_m6A2A31482B1A7D018C3AAC188C02F5D14500C81F (int32_t ___index0, const RuntimeMethod* method);
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_phase_m576EA3F4FE1D12EB85510326AD8EC3C2EB267257 (Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Physics2D::set_queriesHitTriggers(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Physics2D_set_queriesHitTriggers_m481A6ACC9A10BD0C7BBDB97B35AE29B9FDA8549C (bool ___value0, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE (Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C * __this, const RuntimeMethod* method);
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  Camera_ScreenPointToRay_mD385213935A81030EDC604A39FD64761077CFBAB (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Ray::get_origin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Ray_get_origin_m0C1B2BFF99CDF5231AC29AC031C161F55B53C1D0 (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Ray::get_direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Ray_get_direction_m2B31F86F19B64474A901B28D3808011AE7A13EFC (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * __this, const RuntimeMethod* method);
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  Physics2D_Raycast_m9DF2A5F7852F9C736CA4F1BABA52DC0AB24ED983 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___origin0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___direction1, const RuntimeMethod* method);
// System.Boolean UnityEngine.RaycastHit2D::op_Implicit(UnityEngine.RaycastHit2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RaycastHit2D_op_Implicit_m003A4C312DF408EA399F9F6C44BB5DD9D0C75217 (RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  ___hit0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.RaycastHit2D::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * RaycastHit2D_get_transform_m0CD992BD94BCE7F1CFB44D987924328B6C0E8864 (RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Component::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Color UnityEngine.SpriteRenderer::get_color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  SpriteRenderer_get_color_mAE96B8C6754CBE7820863BD5E97729B5DBF96EAC (SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * __this, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Color::op_Equality(UnityEngine.Color,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Color_op_Equality_m4975788CDFEF5571E3C51AE8363E6DF65C28A996 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___lhs0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___rhs1, const RuntimeMethod* method);
// System.Void Input_Controller/RedSquareClick::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RedSquareClick_Invoke_mC512D76DA3C9A9988FF3BAD5575B75823C431F62 (RedSquareClick_tEBC1A12E2AB8B55D740B1F592F6915869CA64849 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<ObjectsAction>()
inline ObjectsAction_t668DFE63CC9554E54C19DB31DC03D23CE82B8D33 * Component_GetComponent_TisObjectsAction_t668DFE63CC9554E54C19DB31DC03D23CE82B8D33_m148665E0B54C4C23C79D529783D5BA20B8D792A1 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  ObjectsAction_t668DFE63CC9554E54C19DB31DC03D23CE82B8D33 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void Input_Controller/AddScore::Invoke(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddScore_Invoke_mA4E2C8A26EFBCFE88BA7056364FEE1AC464207FC (AddScore_t6CCDF1C1798D8FC840CEE8131D0736E72DCD3F54 * __this, int32_t ___score0, const RuntimeMethod* method);
// System.Void Input_Controller/NewClick::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewClick_Invoke_mC76440263DEA464936C851BA76563CC67514824F (NewClick_tDB762DAD633CA00A4042E3710A098418E9BD8973 * __this, const RuntimeMethod* method);
// UnityEngine.Collider2D UnityEngine.RaycastHit2D::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * RaycastHit2D_get_collider_m00F7EC55C36F39E2ED64B31354FB4D9C8938D563 (RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void Input_Controller/NewObject::Invoke(System.String,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewObject_Invoke_m5A2132D5F6C2DDE308D24D0DFD432358180DE4B6 (NewObject_t28C704DF17CCD973CE803B613A0BF41B850975D7 * __this, String_t* ___type0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___pos1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3 (int32_t ___button0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E (const RuntimeMethod* method);
// System.Void Input_Controller::OnTouchScreen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Input_Controller_OnTouchScreen_mB90855C66138C0B058441C0D4ECD11CD2D9804C9 (Input_Controller_tB6CEDDA1385C420D6E5AFDEAC7E15112AAD2354E * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Transform>()
inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mE2EA0E48C8C0EAFA09C6FAD2003105EACAC85213 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Color32 UnityEngine.Color32::op_Implicit(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  Color32_op_Implicit_mD17E8145D2D32EF369EFE349C4D32E839F7D7AA4 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___c0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9 (const RuntimeMethod* method);
// System.Collections.IEnumerator ObjectsAction::IEChangeColor(UnityEngine.Color32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ObjectsAction_IEChangeColor_m02F56EF64EEE9EFA26A902325AE1058F22AC88DC (ObjectsAction_t668DFE63CC9554E54C19DB31DC03D23CE82B8D33 * __this, Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___newColor0, float ___time1, const RuntimeMethod* method);
// System.Collections.IEnumerator ObjectsAction::IEMove_Sin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ObjectsAction_IEMove_Sin_m0089B961704DBB72F289D8A92FA89B1A6A9655CD (ObjectsAction_t668DFE63CC9554E54C19DB31DC03D23CE82B8D33 * __this, const RuntimeMethod* method);
// System.Void ObjectsAction/<IEChangeColor>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIEChangeColorU3Ed__13__ctor_m9C60C21156E51F05BF5F78DA0CA17D21CC115049 (U3CIEChangeColorU3Ed__13_t38ADE1FE36665E337FEBB881CF4E8F0B5F1CFD33 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void ObjectsAction/<IEMove_Sin>d__14::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIEMove_SinU3Ed__14__ctor_m684D27E0F2B5670ABD9374C9E66448985EB3FE66 (U3CIEMove_SinU3Ed__14_tCBB7D1CDDB49BC6DE6E562E1C751C6D05930BA56 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void ObjectsAction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectsAction__ctor_mBC5DC742F582592A38038C675BAC0D81347D2586 (ObjectsAction_t668DFE63CC9554E54C19DB31DC03D23CE82B8D33 * __this, const RuntimeMethod* method);
// System.Void Input_Controller/AddScore::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddScore__ctor_m307423FC37B077184AA246238A091DBA1E5A6532 (AddScore_t6CCDF1C1798D8FC840CEE8131D0736E72DCD3F54 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Input_Controller::add_addScore(Input_Controller/AddScore)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Input_Controller_add_addScore_m6177A8BA357DFD0FBE94410393AA87CF2E2B0666 (AddScore_t6CCDF1C1798D8FC840CEE8131D0736E72DCD3F54 * ___value0, const RuntimeMethod* method);
// System.Void Input_Controller/NewClick::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewClick__ctor_m641F2C05B9C57F7A76FF4ED236FCE1CB09CF41D6 (NewClick_tDB762DAD633CA00A4042E3710A098418E9BD8973 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Input_Controller::add_newClick(Input_Controller/NewClick)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Input_Controller_add_newClick_mEE65A634B274333F352B875896FE86613903CFC5 (NewClick_tDB762DAD633CA00A4042E3710A098418E9BD8973 * ___value0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Text>()
inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Int32 System.Int32::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C (String_t* ___s0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C (int32_t ___value0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.Void UI_Controller/<IETapScreen>d__15::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIETapScreenU3Ed__15__ctor_m8619E181F8752E501783571686AD8EA558EE48C0 (U3CIETapScreenU3Ed__15_t95AE3D63C29DFB96DA9BD4DE66729A1377AFF69C * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.IEnumerator UI_Controller::IETapScreen(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UI_Controller_IETapScreen_mC6255BCB38FCBC10DC40D2801EDEE5BCEA6E591F (UI_Controller_tDBF7405F996ACBB79E9E676481F556F2BD90D698 * __this, float ___time0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// System.Void UI_Controller::ChangeGameStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_Controller_ChangeGameStatus_mBACCE69BD87DDC7F89F81F649A1D27C1B1FD9AD6 (UI_Controller_tDBF7405F996ACBB79E9E676481F556F2BD90D698 * __this, const RuntimeMethod* method);
// System.Void Input_Controller::remove_addScore(Input_Controller/AddScore)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Input_Controller_remove_addScore_mADD8F248E4255B0D652CCD484A24A446DB8807E2 (AddScore_t6CCDF1C1798D8FC840CEE8131D0736E72DCD3F54 * ___value0, const RuntimeMethod* method);
// System.Void Input_Controller::remove_newClick(Input_Controller/NewClick)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Input_Controller_remove_newClick_m54EC05C15E79849975E8519DB9DD1D8C09B53288 (NewClick_tDB762DAD633CA00A4042E3710A098418E9BD8973 * ___value0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Camera::get_backgroundColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Camera_get_backgroundColor_m556B0BCFA01DC59AA6A3A4B27C9408C72C144FB5 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_backgroundColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_backgroundColor_m7083574094F4031F3289444E1AF4CBC4FEDACFCF (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// UnityEngine.Color32 UnityEngine.Color32::Lerp(UnityEngine.Color32,UnityEngine.Color32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  Color32_Lerp_m15C150E00B311BD21CFA7660595C42574AA07269 (Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___a0, Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___b1, float ___t2, const RuntimeMethod* method);
// System.Void ObjectsAction/NewParticle::Invoke(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewParticle_Invoke_m3FC198EBA9ECF439899BECB35E846F7B01C0A04B (NewParticle_t1840D95AF8535546BD2A321DEC91EBEEF4F771A3 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___pos0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::PingPong(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_PingPong_m60A376FCA7185AA90B41A22379058923565193D1 (float ___t0, float ___length1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void ObjectsAction/NewObject::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewObject_Invoke_m33E7AD5138FFADF1AB3843DFA48EC8A0ECFF2A0B (NewObject_t359FF587F948422E04E8E8B369B09011BBAAA765 * __this, const RuntimeMethod* method);
// System.Void UI_Controller/EndGame::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndGame_Invoke_mC7B0B6AD8F6EF118D0402DED00B5F206600B5427 (EndGame_tB409D77BF756F5ECB6C874B3D78FBDCE33AE4665 * __this, const RuntimeMethod* method);
// System.Void UI_Controller/NewGame::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewGame_Invoke_m129BA2701E617757358171034211BCACB33A962A (NewGame_tEA2DAB9633B74B56DEB5439CC3AACA1E4B7BBD2C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
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
// System.Void GameManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Start_m26461AEF27E44DB8FECCBC19D6C9E228B658BF8E (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EndGame_tB409D77BF756F5ECB6C874B3D78FBDCE33AE4665_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_AddLeftObject_m6623CEEF3AA11901021786148DE5FDB1EF30AC6B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_AddNewObject_mB241D44225097167C0C31E13CA1E5D3D2BED1079_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_CreateParticle_m8EE22857E81912B31FBFA235F8C045D4254DAA99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_EndGame_m34CB0E063C72D2D7BA815B5397C5DB865EE60810_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_NewGame_m194460A1EF3271C291CD25884A05BC090E525390_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_redSquareClick_mD6A8754567A5823440D78A4FCCE168E3AE89418A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NewGame_tEA2DAB9633B74B56DEB5439CC3AACA1E4B7BBD2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NewObject_t28C704DF17CCD973CE803B613A0BF41B850975D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NewObject_t359FF587F948422E04E8E8B369B09011BBAAA765_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NewParticle_t1840D95AF8535546BD2A321DEC91EBEEF4F771A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RedSquareClick_tEBC1A12E2AB8B55D740B1F592F6915869CA64849_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ObjectsAction.newObject += AddLeftObject;
		NewObject_t359FF587F948422E04E8E8B369B09011BBAAA765 * L_0 = (NewObject_t359FF587F948422E04E8E8B369B09011BBAAA765 *)il2cpp_codegen_object_new(NewObject_t359FF587F948422E04E8E8B369B09011BBAAA765_il2cpp_TypeInfo_var);
		NewObject__ctor_m428BA1AEB357600CBD60DB5AACCDDAC4B6CA5637(L_0, __this, (intptr_t)((intptr_t)GameManager_AddLeftObject_m6623CEEF3AA11901021786148DE5FDB1EF30AC6B_RuntimeMethod_var), /*hidden argument*/NULL);
		ObjectsAction_add_newObject_m0E88C80D495092206ACF383197F5E8233C03510E(L_0, /*hidden argument*/NULL);
		// UI_Controller.newgame += NewGame;
		NewGame_tEA2DAB9633B74B56DEB5439CC3AACA1E4B7BBD2C * L_1 = (NewGame_tEA2DAB9633B74B56DEB5439CC3AACA1E4B7BBD2C *)il2cpp_codegen_object_new(NewGame_tEA2DAB9633B74B56DEB5439CC3AACA1E4B7BBD2C_il2cpp_TypeInfo_var);
		NewGame__ctor_mE8E7D53B4EE587FDF5EEC1F0993FE1447E4B899B(L_1, __this, (intptr_t)((intptr_t)GameManager_NewGame_m194460A1EF3271C291CD25884A05BC090E525390_RuntimeMethod_var), /*hidden argument*/NULL);
		UI_Controller_add_newgame_m8452DFD8466E346256AD774C2FBB77EDA9CDBF6C(L_1, /*hidden argument*/NULL);
		// UI_Controller.endGame += EndGame;
		EndGame_tB409D77BF756F5ECB6C874B3D78FBDCE33AE4665 * L_2 = (EndGame_tB409D77BF756F5ECB6C874B3D78FBDCE33AE4665 *)il2cpp_codegen_object_new(EndGame_tB409D77BF756F5ECB6C874B3D78FBDCE33AE4665_il2cpp_TypeInfo_var);
		EndGame__ctor_m445CD3FA33C12E386195E33C4AE66CF6CE0816F7(L_2, __this, (intptr_t)((intptr_t)GameManager_EndGame_m34CB0E063C72D2D7BA815B5397C5DB865EE60810_RuntimeMethod_var), /*hidden argument*/NULL);
		UI_Controller_add_endGame_m79B0FF79C532994FBE6217461FCB425432458DFC(L_2, /*hidden argument*/NULL);
		// ObjectsAction.newParticle += CreateParticle;
		NewParticle_t1840D95AF8535546BD2A321DEC91EBEEF4F771A3 * L_3 = (NewParticle_t1840D95AF8535546BD2A321DEC91EBEEF4F771A3 *)il2cpp_codegen_object_new(NewParticle_t1840D95AF8535546BD2A321DEC91EBEEF4F771A3_il2cpp_TypeInfo_var);
		NewParticle__ctor_m29DF9CBFBB832FE86740EFABFA663B0384AD273E(L_3, __this, (intptr_t)((intptr_t)GameManager_CreateParticle_m8EE22857E81912B31FBFA235F8C045D4254DAA99_RuntimeMethod_var), /*hidden argument*/NULL);
		ObjectsAction_add_newParticle_mD1B49A5397A7ACE8D07625751356FE0124558262(L_3, /*hidden argument*/NULL);
		// Input_Controller.newObject += AddNewObject;
		NewObject_t28C704DF17CCD973CE803B613A0BF41B850975D7 * L_4 = (NewObject_t28C704DF17CCD973CE803B613A0BF41B850975D7 *)il2cpp_codegen_object_new(NewObject_t28C704DF17CCD973CE803B613A0BF41B850975D7_il2cpp_TypeInfo_var);
		NewObject__ctor_m0246AD3FFACCE49B916726A96CA26A7BFD9267F8(L_4, __this, (intptr_t)((intptr_t)GameManager_AddNewObject_mB241D44225097167C0C31E13CA1E5D3D2BED1079_RuntimeMethod_var), /*hidden argument*/NULL);
		Input_Controller_add_newObject_m2A0E8ACCA1F8C3DDD0012C25430E6C52E0A791B2(L_4, /*hidden argument*/NULL);
		// Input_Controller.redSquareClick += redSquareClick;
		RedSquareClick_tEBC1A12E2AB8B55D740B1F592F6915869CA64849 * L_5 = (RedSquareClick_tEBC1A12E2AB8B55D740B1F592F6915869CA64849 *)il2cpp_codegen_object_new(RedSquareClick_tEBC1A12E2AB8B55D740B1F592F6915869CA64849_il2cpp_TypeInfo_var);
		RedSquareClick__ctor_m858DF8E2FA8C5430DBCDDF2A7E8279D05038FF9C(L_5, __this, (intptr_t)((intptr_t)GameManager_redSquareClick_mD6A8754567A5823440D78A4FCCE168E3AE89418A_RuntimeMethod_var), /*hidden argument*/NULL);
		Input_Controller_add_redSquareClick_m153C4C40AFA703D9C5C0E55BAF5CE1EAC210E77F(L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::CreateObject(UnityEngine.GameObject,System.Single,System.Single,UnityEngine.Color32,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_CreateObject_m0E33E99F36FD50A9D8215C7A532BE601B4896174 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gameObject0, float ___x1, float ___y2, Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___color323, String_t* ___typeObject4, int32_t ___score5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisObjectsAction_t668DFE63CC9554E54C19DB31DC03D23CE82B8D33_m96FCECE0CED7E897E3CBDB0B16CC248879DB1B34_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _object = Instantiate(gameObject, new Vector2(x, y), Quaternion.identity );
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___gameObject0;
		float L_1 = ___x1;
		float L_2 = ___y2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_3), L_1, L_2, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_3, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_5;
		L_5 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_0, L_4, L_5, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// _object.transform.SetParent(_parentObjects.transform);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = L_6;
		NullCheck(L_7);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_7, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = __this->get__parentObjects_6();
		NullCheck(L_9);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E(L_8, L_10, /*hidden argument*/NULL);
		// _object.GetComponent<SpriteRenderer>().color = color32;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = L_7;
		NullCheck(L_11);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_12;
		L_12 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_11, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_13 = ___color323;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_14;
		L_14 = Color32_op_Implicit_m63F14F1A14B1A9A3EE4D154413EE229D3E001623(L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33(L_12, L_14, /*hidden argument*/NULL);
		// _object.tag = typeObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = L_11;
		String_t* L_16 = ___typeObject4;
		NullCheck(L_15);
		GameObject_set_tag_m0EBA46574304C71E047A33BDD5F5D49E9D9A25BE(L_15, L_16, /*hidden argument*/NULL);
		// _object.GetComponent<ObjectsAction>().Score = score;
		NullCheck(L_15);
		ObjectsAction_t668DFE63CC9554E54C19DB31DC03D23CE82B8D33 * L_17;
		L_17 = GameObject_GetComponent_TisObjectsAction_t668DFE63CC9554E54C19DB31DC03D23CE82B8D33_m96FCECE0CED7E897E3CBDB0B16CC248879DB1B34(L_15, /*hidden argument*/GameObject_GetComponent_TisObjectsAction_t668DFE63CC9554E54C19DB31DC03D23CE82B8D33_m96FCECE0CED7E897E3CBDB0B16CC248879DB1B34_RuntimeMethod_var);
		int32_t L_18 = ___score5;
		NullCheck(L_17);
		L_17->set_Score_4(L_18);
		// }
		return;
	}
}
// System.Void GameManager::CreateParticle(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_CreateParticle_m8EE22857E81912B31FBFA235F8C045D4254DAA99 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___pos0, const RuntimeMethod* method)
{
	{
		// StartCoroutine(IEParticle(pos));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___pos0;
		RuntimeObject* L_1;
		L_1 = GameManager_IEParticle_m4ECA88F087E8FA1BEDA3A9547FE842524321DB7D(__this, L_0, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_2;
		L_2 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator GameManager::IEParticle(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_IEParticle_m4ECA88F087E8FA1BEDA3A9547FE842524321DB7D (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___pos0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CIEParticleU3Ed__8_t54ED5BF1EDDD916F1C4F810C587939763065BE75_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CIEParticleU3Ed__8_t54ED5BF1EDDD916F1C4F810C587939763065BE75 * L_0 = (U3CIEParticleU3Ed__8_t54ED5BF1EDDD916F1C4F810C587939763065BE75 *)il2cpp_codegen_object_new(U3CIEParticleU3Ed__8_t54ED5BF1EDDD916F1C4F810C587939763065BE75_il2cpp_TypeInfo_var);
		U3CIEParticleU3Ed__8__ctor_m4209A50EC600AE7DF07791E166FFF7D3E5306052(L_0, 0, /*hidden argument*/NULL);
		U3CIEParticleU3Ed__8_t54ED5BF1EDDD916F1C4F810C587939763065BE75 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		U3CIEParticleU3Ed__8_t54ED5BF1EDDD916F1C4F810C587939763065BE75 * L_2 = L_1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ___pos0;
		NullCheck(L_2);
		L_2->set_pos_3(L_3);
		return L_2;
	}
}
// System.Void GameManager::NewGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_NewGame_m194460A1EF3271C291CD25884A05BC090E525390 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// for (int i = 0; i < 4; i++)
		V_0 = 0;
		goto IL_003d;
	}

IL_0004:
	{
		// CreateObject(_objectPrefab, 2*i-3, -4.2f, new Color32(255,0,255,255), _tagObject[0], 0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get__objectPrefab_4();
		int32_t L_1 = V_0;
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Color32__ctor_m9D07EC69256BB7ED2784E543848DE7B8484A5C94((&L_2), (uint8_t)((int32_t)255), (uint8_t)0, (uint8_t)((int32_t)255), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = __this->get__tagObject_7();
		NullCheck(L_3);
		int32_t L_4 = 0;
		String_t* L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		GameManager_CreateObject_m0E33E99F36FD50A9D8215C7A532BE601B4896174(__this, L_0, ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)2, (int32_t)L_1)), (int32_t)3)))), (-4.19999981f), L_2, L_5, 0, /*hidden argument*/NULL);
		// for (int i = 0; i < 4; i++)
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_003d:
	{
		// for (int i = 0; i < 4; i++)
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) < ((int32_t)4)))
		{
			goto IL_0004;
		}
	}
	{
		// for (int i = 0; i < 5; i++)
		V_1 = 0;
		goto IL_004f;
	}

IL_0045:
	{
		// AddLeftObject();
		GameManager_AddLeftObject_m6623CEEF3AA11901021786148DE5FDB1EF30AC6B(__this, /*hidden argument*/NULL);
		// for (int i = 0; i < 5; i++)
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_004f:
	{
		// for (int i = 0; i < 5; i++)
		int32_t L_9 = V_1;
		if ((((int32_t)L_9) < ((int32_t)5)))
		{
			goto IL_0045;
		}
	}
	{
		// }
		return;
	}
}
// System.Void GameManager::EndGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_EndGame_m34CB0E063C72D2D7BA815B5397C5DB865EE60810 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < _parentObjects.transform.childCount; i++)
		V_0 = 0;
		goto IL_0023;
	}

IL_0004:
	{
		// Destroy(_parentObjects.transform.GetChild(i).gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get__parentObjects_6();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		int32_t L_2 = V_0;
		NullCheck(L_1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_1, L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_4, /*hidden argument*/NULL);
		// for (int i = 0; i < _parentObjects.transform.childCount; i++)
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_0023:
	{
		// for (int i = 0; i < _parentObjects.transform.childCount; i++)
		int32_t L_6 = V_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = __this->get__parentObjects_6();
		NullCheck(L_7);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05(L_8, /*hidden argument*/NULL);
		if ((((int32_t)L_6) < ((int32_t)L_9)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void GameManager::AddNewObject(System.String,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_AddNewObject_mB241D44225097167C0C31E13CA1E5D3D2BED1079 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, String_t* ___type0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___pos1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral325BA3BF46827E4BA8B523BD56E8B38A4A2477AD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral89C016E7A0440DB91C41D9A1E242DE83FA91866A);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___type0;
		if (!L_0)
		{
			goto IL_002c;
		}
	}
	{
		String_t* L_1 = ___type0;
		bool L_2;
		L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, _stringLiteral89C016E7A0440DB91C41D9A1E242DE83FA91866A, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		String_t* L_3 = ___type0;
		bool L_4;
		L_4 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_3, _stringLiteral325BA3BF46827E4BA8B523BD56E8B38A4A2477AD, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0025;
		}
	}
	{
		return;
	}

IL_001e:
	{
		// AddLeftObject();
		GameManager_AddLeftObject_m6623CEEF3AA11901021786148DE5FDB1EF30AC6B(__this, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0025:
	{
		// AddBottomObject(pos);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = ___pos1;
		GameManager_AddBottomObject_m1D82846797384095ABDE3B6B750157B4CADC8CF2(__this, L_5, /*hidden argument*/NULL);
	}

IL_002c:
	{
		// }
		return;
	}
}
// System.Void GameManager::AddBottomObject(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_AddBottomObject_m1D82846797384095ABDE3B6B750157B4CADC8CF2 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___pos0, const RuntimeMethod* method)
{
	{
		// CreateObject(_objectPrefab, pos.x, pos.y, new Color32(255,0,255,255), _tagObject[0], 0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get__objectPrefab_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = ___pos0;
		float L_2 = L_1.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ___pos0;
		float L_4 = L_3.get_y_1();
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Color32__ctor_m9D07EC69256BB7ED2784E543848DE7B8484A5C94((&L_5), (uint8_t)((int32_t)255), (uint8_t)0, (uint8_t)((int32_t)255), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = __this->get__tagObject_7();
		NullCheck(L_6);
		int32_t L_7 = 0;
		String_t* L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		GameManager_CreateObject_m0E33E99F36FD50A9D8215C7A532BE601B4896174(__this, L_0, L_2, L_4, L_5, L_8, 0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::AddLeftObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_AddLeftObject_m6623CEEF3AA11901021786148DE5FDB1EF30AC6B (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int i = Random.Range(0,3);
		int32_t L_0;
		L_0 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, 3, /*hidden argument*/NULL);
		V_0 = L_0;
		// int s = 0;
		V_1 = 0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001e;
			}
			case 1:
			{
				goto IL_0023;
			}
			case 2:
			{
				goto IL_002b;
			}
		}
	}
	{
		goto IL_0031;
	}

IL_001e:
	{
		// s = 100;
		V_1 = ((int32_t)100);
		// break;
		goto IL_0031;
	}

IL_0023:
	{
		// s = 200;
		V_1 = ((int32_t)200);
		// break;
		goto IL_0031;
	}

IL_002b:
	{
		// s = -300;
		V_1 = ((int32_t)-300);
	}

IL_0031:
	{
		// CreateObject(_objectPrefab, -11, Random.Range(-3f,3f), _colors[i], _tagObject[1], s);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get__objectPrefab_4();
		float L_3;
		L_3 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((-3.0f), (3.0f), /*hidden argument*/NULL);
		Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* L_4 = __this->get__colors_8();
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8 = __this->get__tagObject_7();
		NullCheck(L_8);
		int32_t L_9 = 1;
		String_t* L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		int32_t L_11 = V_1;
		GameManager_CreateObject_m0E33E99F36FD50A9D8215C7A532BE601B4896174(__this, L_2, (-11.0f), L_3, L_7, L_10, L_11, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::redSquareClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_redSquareClick_mD6A8754567A5823440D78A4FCCE168E3AE89418A (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	{
		// StartCoroutine(IERedClick());
		RuntimeObject* L_0;
		L_0 = GameManager_IERedClick_mE3E41C87A76D6986A980BB2D2346980E3B0A76A3(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_1;
		L_1 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator GameManager::IERedClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_IERedClick_mE3E41C87A76D6986A980BB2D2346980E3B0A76A3 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CIERedClickU3Ed__15_t39C16927867235CEE0E53A7E9E893AF4BC5C30CC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CIERedClickU3Ed__15_t39C16927867235CEE0E53A7E9E893AF4BC5C30CC * L_0 = (U3CIERedClickU3Ed__15_t39C16927867235CEE0E53A7E9E893AF4BC5C30CC *)il2cpp_codegen_object_new(U3CIERedClickU3Ed__15_t39C16927867235CEE0E53A7E9E893AF4BC5C30CC_il2cpp_TypeInfo_var);
		U3CIERedClickU3Ed__15__ctor_mA5AC65DBEDF567A3A62055212A9C9098C179E767(L_0, 0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void GameManager::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Destroy_m7B859F2C1E6489392CF7A867CD711F5DC7C425C6 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EndGame_tB409D77BF756F5ECB6C874B3D78FBDCE33AE4665_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_AddLeftObject_m6623CEEF3AA11901021786148DE5FDB1EF30AC6B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_AddNewObject_mB241D44225097167C0C31E13CA1E5D3D2BED1079_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_CreateParticle_m8EE22857E81912B31FBFA235F8C045D4254DAA99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_EndGame_m34CB0E063C72D2D7BA815B5397C5DB865EE60810_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_NewGame_m194460A1EF3271C291CD25884A05BC090E525390_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_redSquareClick_mD6A8754567A5823440D78A4FCCE168E3AE89418A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NewGame_tEA2DAB9633B74B56DEB5439CC3AACA1E4B7BBD2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NewObject_t28C704DF17CCD973CE803B613A0BF41B850975D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NewObject_t359FF587F948422E04E8E8B369B09011BBAAA765_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NewParticle_t1840D95AF8535546BD2A321DEC91EBEEF4F771A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RedSquareClick_tEBC1A12E2AB8B55D740B1F592F6915869CA64849_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ObjectsAction.newObject -= AddLeftObject;
		NewObject_t359FF587F948422E04E8E8B369B09011BBAAA765 * L_0 = (NewObject_t359FF587F948422E04E8E8B369B09011BBAAA765 *)il2cpp_codegen_object_new(NewObject_t359FF587F948422E04E8E8B369B09011BBAAA765_il2cpp_TypeInfo_var);
		NewObject__ctor_m428BA1AEB357600CBD60DB5AACCDDAC4B6CA5637(L_0, __this, (intptr_t)((intptr_t)GameManager_AddLeftObject_m6623CEEF3AA11901021786148DE5FDB1EF30AC6B_RuntimeMethod_var), /*hidden argument*/NULL);
		ObjectsAction_remove_newObject_m7A05318D83D017CBCC6EC12C8668A208B36761C3(L_0, /*hidden argument*/NULL);
		// UI_Controller.newgame -= NewGame;
		NewGame_tEA2DAB9633B74B56DEB5439CC3AACA1E4B7BBD2C * L_1 = (NewGame_tEA2DAB9633B74B56DEB5439CC3AACA1E4B7BBD2C *)il2cpp_codegen_object_new(NewGame_tEA2DAB9633B74B56DEB5439CC3AACA1E4B7BBD2C_il2cpp_TypeInfo_var);
		NewGame__ctor_mE8E7D53B4EE587FDF5EEC1F0993FE1447E4B899B(L_1, __this, (intptr_t)((intptr_t)GameManager_NewGame_m194460A1EF3271C291CD25884A05BC090E525390_RuntimeMethod_var), /*hidden argument*/NULL);
		UI_Controller_remove_newgame_m23C8D28CA52ADD4ADDB75A58D488EC5285262256(L_1, /*hidden argument*/NULL);
		// UI_Controller.endGame -= EndGame;
		EndGame_tB409D77BF756F5ECB6C874B3D78FBDCE33AE4665 * L_2 = (EndGame_tB409D77BF756F5ECB6C874B3D78FBDCE33AE4665 *)il2cpp_codegen_object_new(EndGame_tB409D77BF756F5ECB6C874B3D78FBDCE33AE4665_il2cpp_TypeInfo_var);
		EndGame__ctor_m445CD3FA33C12E386195E33C4AE66CF6CE0816F7(L_2, __this, (intptr_t)((intptr_t)GameManager_EndGame_m34CB0E063C72D2D7BA815B5397C5DB865EE60810_RuntimeMethod_var), /*hidden argument*/NULL);
		UI_Controller_remove_endGame_m655170C78134815E06A0193F79C78EFD7D31C5A8(L_2, /*hidden argument*/NULL);
		// ObjectsAction.newParticle -= CreateParticle;
		NewParticle_t1840D95AF8535546BD2A321DEC91EBEEF4F771A3 * L_3 = (NewParticle_t1840D95AF8535546BD2A321DEC91EBEEF4F771A3 *)il2cpp_codegen_object_new(NewParticle_t1840D95AF8535546BD2A321DEC91EBEEF4F771A3_il2cpp_TypeInfo_var);
		NewParticle__ctor_m29DF9CBFBB832FE86740EFABFA663B0384AD273E(L_3, __this, (intptr_t)((intptr_t)GameManager_CreateParticle_m8EE22857E81912B31FBFA235F8C045D4254DAA99_RuntimeMethod_var), /*hidden argument*/NULL);
		ObjectsAction_remove_newParticle_m904183AB6EE912697994FD0A9326FCF1717687A6(L_3, /*hidden argument*/NULL);
		// Input_Controller.newObject -= AddNewObject;
		NewObject_t28C704DF17CCD973CE803B613A0BF41B850975D7 * L_4 = (NewObject_t28C704DF17CCD973CE803B613A0BF41B850975D7 *)il2cpp_codegen_object_new(NewObject_t28C704DF17CCD973CE803B613A0BF41B850975D7_il2cpp_TypeInfo_var);
		NewObject__ctor_m0246AD3FFACCE49B916726A96CA26A7BFD9267F8(L_4, __this, (intptr_t)((intptr_t)GameManager_AddNewObject_mB241D44225097167C0C31E13CA1E5D3D2BED1079_RuntimeMethod_var), /*hidden argument*/NULL);
		Input_Controller_remove_newObject_mB018594341CD3D50AC5454AD26F1C063697B7DCF(L_4, /*hidden argument*/NULL);
		// Input_Controller.redSquareClick -= redSquareClick;
		RedSquareClick_tEBC1A12E2AB8B55D740B1F592F6915869CA64849 * L_5 = (RedSquareClick_tEBC1A12E2AB8B55D740B1F592F6915869CA64849 *)il2cpp_codegen_object_new(RedSquareClick_tEBC1A12E2AB8B55D740B1F592F6915869CA64849_il2cpp_TypeInfo_var);
		RedSquareClick__ctor_m858DF8E2FA8C5430DBCDDF2A7E8279D05038FF9C(L_5, __this, (intptr_t)((intptr_t)GameManager_redSquareClick_mD6A8754567A5823440D78A4FCCE168E3AE89418A_RuntimeMethod_var), /*hidden argument*/NULL);
		Input_Controller_remove_redSquareClick_m488C996233D4ABD50AAD9EB29A65490DB0BD6EB3(L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__ctor_mE8666F6D0CA9C31E16B719F79780DC4B0245B64D (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral89C016E7A0440DB91C41D9A1E242DE83FA91866A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral954F4A2F6864EFB6815981E6B99C5FD833091266);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string[]  _tagObject = new string[2] {"bottomSquare", "leftSquare"};
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)2);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral954F4A2F6864EFB6815981E6B99C5FD833091266);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral954F4A2F6864EFB6815981E6B99C5FD833091266);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral89C016E7A0440DB91C41D9A1E242DE83FA91866A);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral89C016E7A0440DB91C41D9A1E242DE83FA91866A);
		__this->set__tagObject_7(L_2);
		// private Color32[] _colors = new Color32[3] {new Color32(136,245,189,255), new Color32 (255,97,0,255), new Color32(255,0,0,255)};
		Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* L_3 = (Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2*)(Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2*)SZArrayNew(Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2_il2cpp_TypeInfo_var, (uint32_t)3);
		Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* L_4 = L_3;
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Color32__ctor_m9D07EC69256BB7ED2784E543848DE7B8484A5C94((&L_5), (uint8_t)((int32_t)136), (uint8_t)((int32_t)245), (uint8_t)((int32_t)189), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D )L_5);
		Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* L_6 = L_4;
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Color32__ctor_m9D07EC69256BB7ED2784E543848DE7B8484A5C94((&L_7), (uint8_t)((int32_t)255), (uint8_t)((int32_t)97), (uint8_t)0, (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D )L_7);
		Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* L_8 = L_6;
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Color32__ctor_m9D07EC69256BB7ED2784E543848DE7B8484A5C94((&L_9), (uint8_t)((int32_t)255), (uint8_t)0, (uint8_t)0, (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D )L_9);
		__this->set__colors_8(L_8);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Input_Controller::add_addScore(Input_Controller/AddScore)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Input_Controller_add_addScore_m6177A8BA357DFD0FBE94410393AA87CF2E2B0666 (AddScore_t6CCDF1C1798D8FC840CEE8131D0736E72DCD3F54 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AddScore_t6CCDF1C1798D8FC840CEE8131D0736E72DCD3F54_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Input_Controller_tB6CEDDA1385C420D6E5AFDEAC7E15112AAD2354E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AddScore_t6CCDF1C1798D8FC840CEE8131D0736E72DCD3F54 * V_0 = NULL;
	AddScore_t6CCDF1C1798D8FC840CEE8131D0736E72DCD3F54 * V_1 = NULL;
	AddScore_t6CCDF1C1798D8FC840CEE8131D0736E72DCD3F54 * V_2 = NULL;
	{
		AddScore_t6CCDF1C1798D8FC840CEE8131D0736E72DCD3F54 * L_0 = ((Input_Controller_tB6CEDDA1385C420D6E5AFDEAC7E15112AAD2354E_StaticFields*)il2cpp_codegen_static_fields_for(Input_Controller_tB6CEDDA1385C420D6E5AFDEAC7E15112AAD2354E_il2cpp_TypeInfo_var))->get_addScore_4();
		V_0 = L_0;
	}

IL_0006:
	{
		AddScore_t6CCDF1C1798D8FC840CEE8131D0736E72DCD3F54 * L_1 = V_0;
		V_1 = L_1;
		AddScore_t6CCDF1C1798D8FC840CEE8131D0736E72DCD3F54 * L_2 = V_1;
		AddScore_t6CCDF1C1798D8FC840CEE8131D0736E72DCD3F54 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((AddScore_t6CCDF1C1798D8FC840CEE8131D0736E72DCD3F54 *)CastclassSealed((RuntimeObject*)L_4, AddScore_t6CCDF1C1798D8FC840CEE8131D0736E72DCD3F54_il2cpp_TypeInfo_var));
		AddScore_t6CCDF1C1798D8FC840CEE8131D0736E72DCD3F54 * L_5 = V_2;
		AddScore_t6CCDF1C1798D8FC840CEE8131D0736E72DCD3F54 * L_6 = V_1;
		AddScore_t6CCDF1C1798D8FC840CEE8131D0736E72DCD3F54 * L_7;
		L_7 = InterlockedCompareExchangeImpl<AddScore_t6CCDF1C1798D8FC840CEE8131D0736E72DCD3F54 *>((AddScore_t6CCDF1C1798D8FC840CEE8131D0736E72DCD3F54 **)(((Input_Controller_tB6CEDDA1385C420D6E5AFDEAC7E15112AAD2354E_StaticFields*)il2cpp_codegen_static_fields_for(Input_Controller_tB6CEDDA1385C420D6E5AFDEAC7E15112AAD2354E_il2cpp_TypeInfo_var))->get_address_of_addScore_4()), L_5, L_6);
		V_0 = L_7;
		AddScore_t6CCDF1C1798D8FC840CEE8131D0736E72DCD3F54 * L_8 = V_0;
		AddScore_t6CCDF1C1798D8FC840CEE8131D0736E72DCD3F54 * L_9 = V_1;
		if ((!(((RuntimeObject*)(AddScore_t6CCDF1C1798D8FC840CEE8131D0736E72DCD3F54 *)L_8) == ((RuntimeObject*)(AddScore_t6CCDF1C1798D8FC840CEE8131D0736E72DCD3F54 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Input_Controller::remove_addScore(Input_Controller/AddScore)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Input_Controller_remove_addScore_mADD8F248E4255B0D652CCD484A24A446DB8807E2 (AddScore_t6CCDF1C1798D8FC840CEE8131D0736E72DCD3F54 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AddScore_t6CCDF1C1798D8FC840CEE8131D0736E72DCD3F54_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Input_Controller_tB6CEDDA1385C420D6E5AFDEAC7E15112AAD2354E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AddScore_t6CCDF1C1798D8FC840CEE8131D0736E72DCD3F54 * V_0 = NULL;
	AddScore_t6CCDF1C1798D8FC840CEE8131D0736E72DCD3F54 * V_1 = NULL;
	AddScore_t6CCDF1C1798D8FC840CEE8131D0736E72DCD3F54 * V_2 = NULL;
	{
		AddScore_t6CCDF1C1798D8FC840CEE8131D0736E72DCD3F54 * L_0 = ((Input_Controller_tB6CEDDA1385C420D6E5AFDEAC7E15112AAD2354E_StaticFields*)il2cpp_codegen_static_fields_for(Input_Controller_tB6CEDDA1385C420D6E5AFDEAC7E15112AAD2354E_il2cpp_TypeInfo_var))->get_addScore_4();
		V_0 = L_0;
	}

IL_0006:
	{
		AddScore_t6CCDF1C1798D8FC840CEE8131D0736E72DCD3F54 * L_1 = V_0;
		V_1 = L_1;
		AddScore_t6CCDF1C1798D8FC840CEE8131D0736E72DCD3F54 * L_2 = V_1;
		AddScore_t6CCDF1C1798D8FC840CEE8131D0736E72DCD3F54 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((AddScore_t6CCDF1C1798D8FC840CEE8131D0736E72DCD3F54 *)CastclassSealed((RuntimeObject*)L_4, AddScore_t6CCDF1C1798D8FC840CEE8131D0736E72DCD3F54_il2cpp_TypeInfo_var));
		AddScore_t6CCDF1C1798D8FC840CEE8131D0736E72DCD3F54 * L_5 = V_2;
		AddScore_t6CCDF1C1798D8FC840CEE8131D0736E72DCD3F54 * L_6 = V_1;
		AddScore_t6CCDF1C1798D8FC840CEE8131D0736E72DCD3F54 * L_7;
		L_7 = InterlockedCompareExchangeImpl<AddScore_t6CCDF1C1798D8FC840CEE8131D0736E72DCD3F54 *>((AddScore_t6CCDF1C1798D8FC840CEE8131D0736E72DCD3F54 **)(((Input_Controller_tB6CEDDA1385C420D6E5AFDEAC7E15112AAD2354E_StaticFields*)il2cpp_codegen_static_fields_for(Input_Controller_tB6CEDDA1385C420D6E5AFDEAC7E15112AAD2354E_il2cpp_TypeInfo_var))->get_address_of_addScore_4()), L_5, L_6);
		V_0 = L_7;
		AddScore_t6CCDF1C1798D8FC840CEE8131D0736E72DCD3F54 * L_8 = V_0;
		AddScore_t6CCDF1C1798D8FC840CEE8131D0736E72DCD3F54 * L_9 = V_1;
		if ((!(((RuntimeObject*)(AddScore_t6CCDF1C1798D8FC840CEE8131D0736E72DCD3F54 *)L_8) == ((RuntimeObject*)(AddScore_t6CCDF1C1798D8FC840CEE8131D0736E72DCD3F54 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Input_Controller::add_newObject(Input_Controller/NewObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Input_Controller_add_newObject_m2A0E8ACCA1F8C3DDD0012C25430E6C52E0A791B2 (NewObject_t28C704DF17CCD973CE803B613A0BF41B850975D7 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Input_Controller_tB6CEDDA1385C420D6E5AFDEAC7E15112AAD2354E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NewObject_t28C704DF17CCD973CE803B613A0BF41B850975D7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NewObject_t28C704DF17CCD973CE803B613A0BF41B850975D7 * V_0 = NULL;
	NewObject_t28C704DF17CCD973CE803B613A0BF41B850975D7 * V_1 = NULL;
	NewObject_t28C704DF17CCD973CE803B613A0BF41B850975D7 * V_2 = NULL;
	{
		NewObject_t28C704DF17CCD973CE803B613A0BF41B850975D7 * L_0 = ((Input_Controller_tB6CEDDA1385C420D6E5AFDEAC7E15112AAD2354E_StaticFields*)il2cpp_codegen_static_fields_for(Input_Controller_tB6CEDDA1385C420D6E5AFDEAC7E15112AAD2354E_il2cpp_TypeInfo_var))->get_newObject_5();
		V_0 = L_0;
	}

IL_0006:
	{
		NewObject_t28C704DF17CCD973CE803B613A0BF41B850975D7 * L_1 = V_0;
		V_1 = L_1;
		NewObject_t28C704DF17CCD973CE803B613A0BF41B850975D7 * L_2 = V_1;
		NewObject_t28C704DF17CCD973CE803B613A0BF41B850975D7 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((NewObject_t28C704DF17CCD973CE803B613A0BF41B850975D7 *)CastclassSealed((RuntimeObject*)L_4, NewObject_t28C704DF17CCD973CE803B613A0BF41B850975D7_il2cpp_TypeInfo_var));
		NewObject_t28C704DF17CCD973CE803B613A0BF41B850975D7 * L_5 = V_2;
		NewObject_t28C704DF17CCD973CE803B613A0BF41B850975D7 * L_6 = V_1;
		NewObject_t28C704DF17CCD973CE803B613A0BF41B850975D7 * L_7;
		L_7 = InterlockedCompareExchangeImpl<NewObject_t28C704DF17CCD973CE803B613A0BF41B850975D7 *>((NewObject_t28C704DF17CCD973CE803B613A0BF41B850975D7 **)(((Input_Controller_tB6CEDDA1385C420D6E5AFDEAC7E15112AAD2354E_StaticFields*)il2cpp_codegen_static_fields_for(Input_Controller_tB6CEDDA1385C420D6E5AFDEAC7E15112AAD2354E_il2cpp_TypeInfo_var))->get_address_of_newObject_5()), L_5, L_6);
		V_0 = L_7;
		NewObject_t28C704DF17CCD973CE803B613A0BF41B850975D7 * L_8 = V_0;
		NewObject_t28C704DF17CCD973CE803B613A0BF41B850975D7 * L_9 = V_1;
		if ((!(((RuntimeObject*)(NewObject_t28C704DF17CCD973CE803B613A0BF41B850975D7 *)L_8) == ((RuntimeObject*)(NewObject_t28C704DF17CCD973CE803B613A0BF41B850975D7 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Input_Controller::remove_newObject(Input_Controller/NewObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Input_Controller_remove_newObject_mB018594341CD3D50AC5454AD26F1C063697B7DCF (NewObject_t28C704DF17CCD973CE803B613A0BF41B850975D7 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Input_Controller_tB6CEDDA1385C420D6E5AFDEAC7E15112AAD2354E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NewObject_t28C704DF17CCD973CE803B613A0BF41B850975D7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NewObject_t28C704DF17CCD973CE803B613A0BF41B850975D7 * V_0 = NULL;
	NewObject_t28C704DF17CCD973CE803B613A0BF41B850975D7 * V_1 = NULL;
	NewObject_t28C704DF17CCD973CE803B613A0BF41B850975D7 * V_2 = NULL;
	{
		NewObject_t28C704DF17CCD973CE803B613A0BF41B850975D7 * L_0 = ((Input_Controller_tB6CEDDA1385C420D6E5AFDEAC7E15112AAD2354E_StaticFields*)il2cpp_codegen_static_fields_for(Input_Controller_tB6CEDDA1385C420D6E5AFDEAC7E15112AAD2354E_il2cpp_TypeInfo_var))->get_newObject_5();
		V_0 = L_0;
	}

IL_0006:
	{
		NewObject_t28C704DF17CCD973CE803B613A0BF41B850975D7 * L_1 = V_0;
		V_1 = L_1;
		NewObject_t28C704DF17CCD973CE803B613A0BF41B850975D7 * L_2 = V_1;
		NewObject_t28C704DF17CCD973CE803B613A0BF41B850975D7 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((NewObject_t28C704DF17CCD973CE803B613A0BF41B850975D7 *)CastclassSealed((RuntimeObject*)L_4, NewObject_t28C704DF17CCD973CE803B613A0BF41B850975D7_il2cpp_TypeInfo_var));
		NewObject_t28C704DF17CCD973CE803B613A0BF41B850975D7 * L_5 = V_2;
		NewObject_t28C704DF17CCD973CE803B613A0BF41B850975D7 * L_6 = V_1;
		NewObject_t28C704DF17CCD973CE803B613A0BF41B850975D7 * L_7;
		L_7 = InterlockedCompareExchangeImpl<NewObject_t28C704DF17CCD973CE803B613A0BF41B850975D7 *>((NewObject_t28C704DF17CCD973CE803B613A0BF41B850975D7 **)(((Input_Controller_tB6CEDDA1385C420D6E5AFDEAC7E15112AAD2354E_StaticFields*)il2cpp_codegen_static_fields_for(Input_Controller_tB6CEDDA1385C420D6E5AFDEAC7E15112AAD2354E_il2cpp_TypeInfo_var))->get_address_of_newObject_5()), L_5, L_6);
		V_0 = L_7;
		NewObject_t28C704DF17CCD973CE803B613A0BF41B850975D7 * L_8 = V_0;
		NewObject_t28C704DF17CCD973CE803B613A0BF41B850975D7 * L_9 = V_1;
		if ((!(((RuntimeObject*)(NewObject_t28C704DF17CCD973CE803B613A0BF41B850975D7 *)L_8) == ((RuntimeObject*)(NewObject_t28C704DF17CCD973CE803B613A0BF41B850975D7 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Input_Controller::add_newClick(Input_Controller/NewClick)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Input_Controller_add_newClick_mEE65A634B274333F352B875896FE86613903CFC5 (NewClick_tDB762DAD633CA00A4042E3710A098418E9BD8973 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Input_Controller_tB6CEDDA1385C420D6E5AFDEAC7E15112AAD2354E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NewClick_tDB762DAD633CA00A4042E3710A098418E9BD8973_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NewClick_tDB762DAD633CA00A4042E3710A098418E9BD8973 * V_0 = NULL;
	NewClick_tDB762DAD633CA00A4042E3710A098418E9BD8973 * V_1 = NULL;
	NewClick_tDB762DAD633CA00A4042E3710A098418E9BD8973 * V_2 = NULL;
	{
		NewClick_tDB762DAD633CA00A4042E3710A098418E9BD8973 * L_0 = ((Input_Controller_tB6CEDDA1385C420D6E5AFDEAC7E15112AAD2354E_StaticFields*)il2cpp_codegen_static_fields_for(Input_Controller_tB6CEDDA1385C420D6E5AFDEAC7E15112AAD2354E_il2cpp_TypeInfo_var))->get_newClick_6();
		V_0 = L_0;
	}

IL_0006:
	{
		NewClick_tDB762DAD633CA00A4042E3710A098418E9BD8973 * L_1 = V_0;
		V_1 = L_1;
		NewClick_tDB762DAD633CA00A4042E3710A098418E9BD8973 * L_2 = V_1;
		NewClick_tDB762DAD633CA00A4042E3710A098418E9BD8973 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((NewClick_tDB762DAD633CA00A4042E3710A098418E9BD8973 *)CastclassSealed((RuntimeObject*)L_4, NewClick_tDB762DAD633CA00A4042E3710A098418E9BD8973_il2cpp_TypeInfo_var));
		NewClick_tDB762DAD633CA00A4042E3710A098418E9BD8973 * L_5 = V_2;
		NewClick_tDB762DAD633CA00A4042E3710A098418E9BD8973 * L_6 = V_1;
		NewClick_tDB762DAD633CA00A4042E3710A098418E9BD8973 * L_7;
		L_7 = InterlockedCompareExchangeImpl<NewClick_tDB762DAD633CA00A4042E3710A098418E9BD8973 *>((NewClick_tDB762DAD633CA00A4042E3710A098418E9BD8973 **)(((Input_Controller_tB6CEDDA1385C420D6E5AFDEAC7E15112AAD2354E_StaticFields*)il2cpp_codegen_static_fields_for(Input_Controller_tB6CEDDA1385C420D6E5AFDEAC7E15112AAD2354E_il2cpp_TypeInfo_var))->get_address_of_newClick_6()), L_5, L_6);
		V_0 = L_7;
		NewClick_tDB762DAD633CA00A4042E3710A098418E9BD8973 * L_8 = V_0;
		NewClick_tDB762DAD633CA00A4042E3710A098418E9BD8973 * L_9 = V_1;
		if ((!(((RuntimeObject*)(NewClick_tDB762DAD633CA00A4042E3710A098418E9BD8973 *)L_8) == ((RuntimeObject*)(NewClick_tDB762DAD633CA00A4042E3710A098418E9BD8973 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Input_Controller::remove_newClick(Input_Controller/NewClick)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Input_Controller_remove_newClick_m54EC05C15E79849975E8519DB9DD1D8C09B53288 (NewClick_tDB762DAD633CA00A4042E3710A098418E9BD8973 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Input_Controller_tB6CEDDA1385C420D6E5AFDEAC7E15112AAD2354E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NewClick_tDB762DAD633CA00A4042E3710A098418E9BD8973_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NewClick_tDB762DAD633CA00A4042E3710A098418E9BD8973 * V_0 = NULL;
	NewClick_tDB762DAD633CA00A4042E3710A098418E9BD8973 * V_1 = NULL;
	NewClick_tDB762DAD633CA00A4042E3710A098418E9BD8973 * V_2 = NULL;
	{
		NewClick_tDB762DAD633CA00A4042E3710A098418E9BD8973 * L_0 = ((Input_Controller_tB6CEDDA1385C420D6E5AFDEAC7E15112AAD2354E_StaticFields*)il2cpp_codegen_static_fields_for(Input_Controller_tB6CEDDA1385C420D6E5AFDEAC7E15112AAD2354E_il2cpp_TypeInfo_var))->get_newClick_6();
		V_0 = L_0;
	}

IL_0006:
	{
		NewClick_tDB762DAD633CA00A4042E3710A098418E9BD8973 * L_1 = V_0;
		V_1 = L_1;
		NewClick_tDB762DAD633CA00A4042E3710A098418E9BD8973 * L_2 = V_1;
		NewClick_tDB762DAD633CA00A4042E3710A098418E9BD8973 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((NewClick_tDB762DAD633CA00A4042E3710A098418E9BD8973 *)CastclassSealed((RuntimeObject*)L_4, NewClick_tDB762DAD633CA00A4042E3710A098418E9BD8973_il2cpp_TypeInfo_var));
		NewClick_tDB762DAD633CA00A4042E3710A098418E9BD8973 * L_5 = V_2;
		NewClick_tDB762DAD633CA00A4042E3710A098418E9BD8973 * L_6 = V_1;
		NewClick_tDB762DAD633CA00A4042E3710A098418E9BD8973 * L_7;
		L_7 = InterlockedCompareExchangeImpl<NewClick_tDB762DAD633CA00A4042E3710A098418E9BD8973 *>((NewClick_tDB762DAD633CA00A4042E3710A098418E9BD8973 **)(((Input_Controller_tB6CEDDA1385C420D6E5AFDEAC7E15112AAD2354E_StaticFields*)il2cpp_codegen_static_fields_for(Input_Controller_tB6CEDDA1385C420D6E5AFDEAC7E15112AAD2354E_il2cpp_TypeInfo_var))->get_address_of_newClick_6()), L_5, L_6);
		V_0 = L_7;
		NewClick_tDB762DAD633CA00A4042E3710A098418E9BD8973 * L_8 = V_0;
		NewClick_tDB762DAD633CA00A4042E3710A098418E9BD8973 * L_9 = V_1;
		if ((!(((RuntimeObject*)(NewClick_tDB762DAD633CA00A4042E3710A098418E9BD8973 *)L_8) == ((RuntimeObject*)(NewClick_tDB762DAD633CA00A4042E3710A098418E9BD8973 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Input_Controller::add_redSquareClick(Input_Controller/RedSquareClick)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Input_Controller_add_redSquareClick_m153C4C40AFA703D9C5C0E55BAF5CE1EAC210E77F (RedSquareClick_tEBC1A12E2AB8B55D740B1F592F6915869CA64849 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Input_Controller_tB6CEDDA1385C420D6E5AFDEAC7E15112AAD2354E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RedSquareClick_tEBC1A12E2AB8B55D740B1F592F6915869CA64849_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RedSquareClick_tEBC1A12E2AB8B55D740B1F592F6915869CA64849 * V_0 = NULL;
	RedSquareClick_tEBC1A12E2AB8B55D740B1F592F6915869CA64849 * V_1 = NULL;
	RedSquareClick_tEBC1A12E2AB8B55D740B1F592F6915869CA64849 * V_2 = NULL;
	{
		RedSquareClick_tEBC1A12E2AB8B55D740B1F592F6915869CA64849 * L_0 = ((Input_Controller_tB6CEDDA1385C420D6E5AFDEAC7E15112AAD2354E_StaticFields*)il2cpp_codegen_static_fields_for(Input_Controller_tB6CEDDA1385C420D6E5AFDEAC7E15112AAD2354E_il2cpp_TypeInfo_var))->get_redSquareClick_7();
		V_0 = L_0;
	}

IL_0006:
	{
		RedSquareClick_tEBC1A12E2AB8B55D740B1F592F6915869CA64849 * L_1 = V_0;
		V_1 = L_1;
		RedSquareClick_tEBC1A12E2AB8B55D740B1F592F6915869CA64849 * L_2 = V_1;
		RedSquareClick_tEBC1A12E2AB8B55D740B1F592F6915869CA64849 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((RedSquareClick_tEBC1A12E2AB8B55D740B1F592F6915869CA64849 *)CastclassSealed((RuntimeObject*)L_4, RedSquareClick_tEBC1A12E2AB8B55D740B1F592F6915869CA64849_il2cpp_TypeInfo_var));
		RedSquareClick_tEBC1A12E2AB8B55D740B1F592F6915869CA64849 * L_5 = V_2;
		RedSquareClick_tEBC1A12E2AB8B55D740B1F592F6915869CA64849 * L_6 = V_1;
		RedSquareClick_tEBC1A12E2AB8B55D740B1F592F6915869CA64849 * L_7;
		L_7 = InterlockedCompareExchangeImpl<RedSquareClick_tEBC1A12E2AB8B55D740B1F592F6915869CA64849 *>((RedSquareClick_tEBC1A12E2AB8B55D740B1F592F6915869CA64849 **)(((Input_Controller_tB6CEDDA1385C420D6E5AFDEAC7E15112AAD2354E_StaticFields*)il2cpp_codegen_static_fields_for(Input_Controller_tB6CEDDA1385C420D6E5AFDEAC7E15112AAD2354E_il2cpp_TypeInfo_var))->get_address_of_redSquareClick_7()), L_5, L_6);
		V_0 = L_7;
		RedSquareClick_tEBC1A12E2AB8B55D740B1F592F6915869CA64849 * L_8 = V_0;
		RedSquareClick_tEBC1A12E2AB8B55D740B1F592F6915869CA64849 * L_9 = V_1;
		if ((!(((RuntimeObject*)(RedSquareClick_tEBC1A12E2AB8B55D740B1F592F6915869CA64849 *)L_8) == ((RuntimeObject*)(RedSquareClick_tEBC1A12E2AB8B55D740B1F592F6915869CA64849 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Input_Controller::remove_redSquareClick(Input_Controller/RedSquareClick)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Input_Controller_remove_redSquareClick_m488C996233D4ABD50AAD9EB29A65490DB0BD6EB3 (RedSquareClick_tEBC1A12E2AB8B55D740B1F592F6915869CA64849 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Input_Controller_tB6CEDDA1385C420D6E5AFDEAC7E15112AAD2354E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RedSquareClick_tEBC1A12E2AB8B55D740B1F592F6915869CA64849_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RedSquareClick_tEBC1A12E2AB8B55D740B1F592F6915869CA64849 * V_0 = NULL;
	RedSquareClick_tEBC1A12E2AB8B55D740B1F592F6915869CA64849 * V_1 = NULL;
	RedSquareClick_tEBC1A12E2AB8B55D740B1F592F6915869CA64849 * V_2 = NULL;
	{
		RedSquareClick_tEBC1A12E2AB8B55D740B1F592F6915869CA64849 * L_0 = ((Input_Controller_tB6CEDDA1385C420D6E5AFDEAC7E15112AAD2354E_StaticFields*)il2cpp_codegen_static_fields_for(Input_Controller_tB6CEDDA1385C420D6E5AFDEAC7E15112AAD2354E_il2cpp_TypeInfo_var))->get_redSquareClick_7();
		V_0 = L_0;
	}

IL_0006:
	{
		RedSquareClick_tEBC1A12E2AB8B55D740B1F592F6915869CA64849 * L_1 = V_0;
		V_1 = L_1;
		RedSquareClick_tEBC1A12E2AB8B55D740B1F592F6915869CA64849 * L_2 = V_1;
		RedSquareClick_tEBC1A12E2AB8B55D740B1F592F6915869CA64849 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((RedSquareClick_tEBC1A12E2AB8B55D740B1F592F6915869CA64849 *)CastclassSealed((RuntimeObject*)L_4, RedSquareClick_tEBC1A12E2AB8B55D740B1F592F6915869CA64849_il2cpp_TypeInfo_var));
		RedSquareClick_tEBC1A12E2AB8B55D740B1F592F6915869CA64849 * L_5 = V_2;
		RedSquareClick_tEBC1A12E2AB8B55D740B1F592F6915869CA64849 * L_6 = V_1;
		RedSquareClick_tEBC1A12E2AB8B55D740B1F592F6915869CA64849 * L_7;
		L_7 = InterlockedCompareExchangeImpl<RedSquareClick_tEBC1A12E2AB8B55D740B1F592F6915869CA64849 *>((RedSquareClick_tEBC1A12E2AB8B55D740B1F592F6915869CA64849 **)(((Input_Controller_tB6CEDDA1385C420D6E5AFDEAC7E15112AAD2354E_StaticFields*)il2cpp_codegen_static_fields_for(Input_Controller_tB6CEDDA1385C420D6E5AFDEAC7E15112AAD2354E_il2cpp_TypeInfo_var))->get_address_of_redSquareClick_7()), L_5, L_6);
		V_0 = L_7;
		RedSquareClick_tEBC1A12E2AB8B55D740B1F592F6915869CA64849 * L_8 = V_0;
		RedSquareClick_tEBC1A12E2AB8B55D740B1F592F6915869CA64849 * L_9 = V_1;
		if ((!(((RuntimeObject*)(RedSquareClick_tEBC1A12E2AB8B55D740B1F592F6915869CA64849 *)L_8) == ((RuntimeObject*)(RedSquareClick_tEBC1A12E2AB8B55D740B1F592F6915869CA64849 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Input_Controller::OnTouchScreen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Input_Controller_OnTouchScreen_mB90855C66138C0B058441C0D4ECD11CD2D9804C9 (Input_Controller_tB6CEDDA1385C420D6E5AFDEAC7E15112AAD2354E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisObjectsAction_t668DFE63CC9554E54C19DB31DC03D23CE82B8D33_m148665E0B54C4C23C79D529783D5BA20B8D792A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Input_Controller_tB6CEDDA1385C420D6E5AFDEAC7E15112AAD2354E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral89C016E7A0440DB91C41D9A1E242DE83FA91866A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral954F4A2F6864EFB6815981E6B99C5FD833091266);
		s_Il2CppMethodInitialized = true;
	}
	Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  V_1;
	memset((&V_1), 0, sizeof(V_1));
	RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (Input.touchCount > 0)
		int32_t L_0;
		L_0 = Input_get_touchCount_mE1A06AB1973E3456AE398B3CC5105F27CC7335D6(/*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0122;
		}
	}
	{
		// if (Input.GetTouch(0).phase == TouchPhase.Began)
		Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  L_1;
		L_1 = Input_GetTouch_m6A2A31482B1A7D018C3AAC188C02F5D14500C81F(0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2;
		L_2 = Touch_get_phase_m576EA3F4FE1D12EB85510326AD8EC3C2EB267257((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&V_0), /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0122;
		}
	}
	{
		// Physics2D.queriesHitTriggers = true;
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		Physics2D_set_queriesHitTriggers_m481A6ACC9A10BD0C7BBDB97B35AE29B9FDA8549C((bool)1, /*hidden argument*/NULL);
		// Ray beginPoint = Camera.main.ScreenPointToRay(Input.GetTouch(0).position);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_3;
		L_3 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  L_4;
		L_4 = Input_GetTouch_m6A2A31482B1A7D018C3AAC188C02F5D14500C81F(0, /*hidden argument*/NULL);
		V_0 = L_4;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		L_5 = Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&V_0), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_5, /*hidden argument*/NULL);
		NullCheck(L_3);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_7;
		L_7 = Camera_ScreenPointToRay_mD385213935A81030EDC604A39FD64761077CFBAB(L_3, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		// RaycastHit2D hit = Physics2D.Raycast(beginPoint.origin, beginPoint.direction);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Ray_get_origin_m0C1B2BFF99CDF5231AC29AC031C161F55B53C1D0((Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *)(&V_1), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9;
		L_9 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_8, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Ray_get_direction_m2B31F86F19B64474A901B28D3808011AE7A13EFC((Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *)(&V_1), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11;
		L_11 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_10, /*hidden argument*/NULL);
		RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  L_12;
		L_12 = Physics2D_Raycast_m9DF2A5F7852F9C736CA4F1BABA52DC0AB24ED983(L_9, L_11, /*hidden argument*/NULL);
		V_2 = L_12;
		// if (hit)
		RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  L_13 = V_2;
		bool L_14;
		L_14 = RaycastHit2D_op_Implicit_m003A4C312DF408EA399F9F6C44BB5DD9D0C75217(L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0122;
		}
	}
	{
		// if (hit.transform.tag != "bottomSquare")
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = RaycastHit2D_get_transform_m0CD992BD94BCE7F1CFB44D987924328B6C0E8864((RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 *)(&V_2), /*hidden argument*/NULL);
		NullCheck(L_15);
		String_t* L_16;
		L_16 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_15, /*hidden argument*/NULL);
		bool L_17;
		L_17 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_16, _stringLiteral954F4A2F6864EFB6815981E6B99C5FD833091266, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0122;
		}
	}
	{
		// if (hit.transform.tag == "leftSquare")
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
		L_18 = RaycastHit2D_get_transform_m0CD992BD94BCE7F1CFB44D987924328B6C0E8864((RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 *)(&V_2), /*hidden argument*/NULL);
		NullCheck(L_18);
		String_t* L_19;
		L_19 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_18, /*hidden argument*/NULL);
		bool L_20;
		L_20 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_19, _stringLiteral89C016E7A0440DB91C41D9A1E242DE83FA91866A, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_00c5;
		}
	}
	{
		// if (hit.transform.GetComponent<SpriteRenderer>().color ==  Color.red)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21;
		L_21 = RaycastHit2D_get_transform_m0CD992BD94BCE7F1CFB44D987924328B6C0E8864((RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 *)(&V_2), /*hidden argument*/NULL);
		NullCheck(L_21);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_22;
		L_22 = Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491(L_21, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		NullCheck(L_22);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_23;
		L_23 = SpriteRenderer_get_color_mAE96B8C6754CBE7820863BD5E97729B5DBF96EAC(L_22, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_24;
		L_24 = Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8(/*hidden argument*/NULL);
		bool L_25;
		L_25 = Color_op_Equality_m4975788CDFEF5571E3C51AE8363E6DF65C28A996(L_23, L_24, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_00c5;
		}
	}
	{
		// redSquareClick();
		RedSquareClick_tEBC1A12E2AB8B55D740B1F592F6915869CA64849 * L_26 = ((Input_Controller_tB6CEDDA1385C420D6E5AFDEAC7E15112AAD2354E_StaticFields*)il2cpp_codegen_static_fields_for(Input_Controller_tB6CEDDA1385C420D6E5AFDEAC7E15112AAD2354E_il2cpp_TypeInfo_var))->get_redSquareClick_7();
		NullCheck(L_26);
		RedSquareClick_Invoke_mC512D76DA3C9A9988FF3BAD5575B75823C431F62(L_26, /*hidden argument*/NULL);
	}

IL_00c5:
	{
		// addScore(hit.transform.GetComponent<ObjectsAction>().Score);
		AddScore_t6CCDF1C1798D8FC840CEE8131D0736E72DCD3F54 * L_27 = ((Input_Controller_tB6CEDDA1385C420D6E5AFDEAC7E15112AAD2354E_StaticFields*)il2cpp_codegen_static_fields_for(Input_Controller_tB6CEDDA1385C420D6E5AFDEAC7E15112AAD2354E_il2cpp_TypeInfo_var))->get_addScore_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_28;
		L_28 = RaycastHit2D_get_transform_m0CD992BD94BCE7F1CFB44D987924328B6C0E8864((RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 *)(&V_2), /*hidden argument*/NULL);
		NullCheck(L_28);
		ObjectsAction_t668DFE63CC9554E54C19DB31DC03D23CE82B8D33 * L_29;
		L_29 = Component_GetComponent_TisObjectsAction_t668DFE63CC9554E54C19DB31DC03D23CE82B8D33_m148665E0B54C4C23C79D529783D5BA20B8D792A1(L_28, /*hidden argument*/Component_GetComponent_TisObjectsAction_t668DFE63CC9554E54C19DB31DC03D23CE82B8D33_m148665E0B54C4C23C79D529783D5BA20B8D792A1_RuntimeMethod_var);
		NullCheck(L_29);
		int32_t L_30 = L_29->get_Score_4();
		NullCheck(L_27);
		AddScore_Invoke_mA4E2C8A26EFBCFE88BA7056364FEE1AC464207FC(L_27, L_30, /*hidden argument*/NULL);
		// newClick();
		NewClick_tDB762DAD633CA00A4042E3710A098418E9BD8973 * L_31 = ((Input_Controller_tB6CEDDA1385C420D6E5AFDEAC7E15112AAD2354E_StaticFields*)il2cpp_codegen_static_fields_for(Input_Controller_tB6CEDDA1385C420D6E5AFDEAC7E15112AAD2354E_il2cpp_TypeInfo_var))->get_newClick_6();
		NullCheck(L_31);
		NewClick_Invoke_mC76440263DEA464936C851BA76563CC67514824F(L_31, /*hidden argument*/NULL);
		// Destroy(hit.collider.gameObject);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_32;
		L_32 = RaycastHit2D_get_collider_m00F7EC55C36F39E2ED64B31354FB4D9C8938D563((RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 *)(&V_2), /*hidden argument*/NULL);
		NullCheck(L_32);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_33;
		L_33 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_32, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_33, /*hidden argument*/NULL);
		// newObject(hit.transform.tag, hit.transform.localPosition);
		NewObject_t28C704DF17CCD973CE803B613A0BF41B850975D7 * L_34 = ((Input_Controller_tB6CEDDA1385C420D6E5AFDEAC7E15112AAD2354E_StaticFields*)il2cpp_codegen_static_fields_for(Input_Controller_tB6CEDDA1385C420D6E5AFDEAC7E15112AAD2354E_il2cpp_TypeInfo_var))->get_newObject_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_35;
		L_35 = RaycastHit2D_get_transform_m0CD992BD94BCE7F1CFB44D987924328B6C0E8864((RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 *)(&V_2), /*hidden argument*/NULL);
		NullCheck(L_35);
		String_t* L_36;
		L_36 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_35, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_37;
		L_37 = RaycastHit2D_get_transform_m0CD992BD94BCE7F1CFB44D987924328B6C0E8864((RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 *)(&V_2), /*hidden argument*/NULL);
		NullCheck(L_37);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38;
		L_38 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_37, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_39;
		L_39 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_38, /*hidden argument*/NULL);
		NullCheck(L_34);
		NewObject_Invoke_m5A2132D5F6C2DDE308D24D0DFD432358180DE4B6(L_34, L_36, L_39, /*hidden argument*/NULL);
	}

IL_0122:
	{
		// }
		return;
	}
}
// System.Void Input_Controller::OnMouseClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Input_Controller_OnMouseClick_mAF62B97AFF3A6C7C0ED8CB9757F5E4A65BA351E9 (Input_Controller_tB6CEDDA1385C420D6E5AFDEAC7E15112AAD2354E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisObjectsAction_t668DFE63CC9554E54C19DB31DC03D23CE82B8D33_m148665E0B54C4C23C79D529783D5BA20B8D792A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Input_Controller_tB6CEDDA1385C420D6E5AFDEAC7E15112AAD2354E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral89C016E7A0440DB91C41D9A1E242DE83FA91866A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral954F4A2F6864EFB6815981E6B99C5FD833091266);
		s_Il2CppMethodInitialized = true;
	}
	Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  V_0;
	memset((&V_0), 0, sizeof(V_0));
	RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (Input.GetMouseButtonDown(0))
		bool L_0;
		L_0 = Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3(0, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_00fb;
		}
	}
	{
		// Ray beginPoint = Camera.main.ScreenPointToRay(Input.mousePosition);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_1;
		L_1 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		NullCheck(L_1);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_3;
		L_3 = Camera_ScreenPointToRay_mD385213935A81030EDC604A39FD64761077CFBAB(L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// RaycastHit2D hit = Physics2D.Raycast(beginPoint.origin, beginPoint.direction);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Ray_get_origin_m0C1B2BFF99CDF5231AC29AC031C161F55B53C1D0((Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *)(&V_0), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		L_5 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_4, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Ray_get_direction_m2B31F86F19B64474A901B28D3808011AE7A13EFC((Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *)(&V_0), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7;
		L_7 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  L_8;
		L_8 = Physics2D_Raycast_m9DF2A5F7852F9C736CA4F1BABA52DC0AB24ED983(L_5, L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		// if (hit)
		RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  L_9 = V_1;
		bool L_10;
		L_10 = RaycastHit2D_op_Implicit_m003A4C312DF408EA399F9F6C44BB5DD9D0C75217(L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_00fb;
		}
	}
	{
		// if (hit.transform.tag != "bottomSquare")
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = RaycastHit2D_get_transform_m0CD992BD94BCE7F1CFB44D987924328B6C0E8864((RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 *)(&V_1), /*hidden argument*/NULL);
		NullCheck(L_11);
		String_t* L_12;
		L_12 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_11, /*hidden argument*/NULL);
		bool L_13;
		L_13 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_12, _stringLiteral954F4A2F6864EFB6815981E6B99C5FD833091266, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_00fb;
		}
	}
	{
		// if (hit.transform.tag == "leftSquare")
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = RaycastHit2D_get_transform_m0CD992BD94BCE7F1CFB44D987924328B6C0E8864((RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 *)(&V_1), /*hidden argument*/NULL);
		NullCheck(L_14);
		String_t* L_15;
		L_15 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_14, /*hidden argument*/NULL);
		bool L_16;
		L_16 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_15, _stringLiteral89C016E7A0440DB91C41D9A1E242DE83FA91866A, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_009e;
		}
	}
	{
		// if (hit.transform.GetComponent<SpriteRenderer>().color ==  Color.red)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = RaycastHit2D_get_transform_m0CD992BD94BCE7F1CFB44D987924328B6C0E8864((RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 *)(&V_1), /*hidden argument*/NULL);
		NullCheck(L_17);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_18;
		L_18 = Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491(L_17, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		NullCheck(L_18);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_19;
		L_19 = SpriteRenderer_get_color_mAE96B8C6754CBE7820863BD5E97729B5DBF96EAC(L_18, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_20;
		L_20 = Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8(/*hidden argument*/NULL);
		bool L_21;
		L_21 = Color_op_Equality_m4975788CDFEF5571E3C51AE8363E6DF65C28A996(L_19, L_20, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_009e;
		}
	}
	{
		// redSquareClick();
		RedSquareClick_tEBC1A12E2AB8B55D740B1F592F6915869CA64849 * L_22 = ((Input_Controller_tB6CEDDA1385C420D6E5AFDEAC7E15112AAD2354E_StaticFields*)il2cpp_codegen_static_fields_for(Input_Controller_tB6CEDDA1385C420D6E5AFDEAC7E15112AAD2354E_il2cpp_TypeInfo_var))->get_redSquareClick_7();
		NullCheck(L_22);
		RedSquareClick_Invoke_mC512D76DA3C9A9988FF3BAD5575B75823C431F62(L_22, /*hidden argument*/NULL);
	}

IL_009e:
	{
		// addScore(hit.transform.GetComponent<ObjectsAction>().Score);
		AddScore_t6CCDF1C1798D8FC840CEE8131D0736E72DCD3F54 * L_23 = ((Input_Controller_tB6CEDDA1385C420D6E5AFDEAC7E15112AAD2354E_StaticFields*)il2cpp_codegen_static_fields_for(Input_Controller_tB6CEDDA1385C420D6E5AFDEAC7E15112AAD2354E_il2cpp_TypeInfo_var))->get_addScore_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24;
		L_24 = RaycastHit2D_get_transform_m0CD992BD94BCE7F1CFB44D987924328B6C0E8864((RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 *)(&V_1), /*hidden argument*/NULL);
		NullCheck(L_24);
		ObjectsAction_t668DFE63CC9554E54C19DB31DC03D23CE82B8D33 * L_25;
		L_25 = Component_GetComponent_TisObjectsAction_t668DFE63CC9554E54C19DB31DC03D23CE82B8D33_m148665E0B54C4C23C79D529783D5BA20B8D792A1(L_24, /*hidden argument*/Component_GetComponent_TisObjectsAction_t668DFE63CC9554E54C19DB31DC03D23CE82B8D33_m148665E0B54C4C23C79D529783D5BA20B8D792A1_RuntimeMethod_var);
		NullCheck(L_25);
		int32_t L_26 = L_25->get_Score_4();
		NullCheck(L_23);
		AddScore_Invoke_mA4E2C8A26EFBCFE88BA7056364FEE1AC464207FC(L_23, L_26, /*hidden argument*/NULL);
		// newClick();
		NewClick_tDB762DAD633CA00A4042E3710A098418E9BD8973 * L_27 = ((Input_Controller_tB6CEDDA1385C420D6E5AFDEAC7E15112AAD2354E_StaticFields*)il2cpp_codegen_static_fields_for(Input_Controller_tB6CEDDA1385C420D6E5AFDEAC7E15112AAD2354E_il2cpp_TypeInfo_var))->get_newClick_6();
		NullCheck(L_27);
		NewClick_Invoke_mC76440263DEA464936C851BA76563CC67514824F(L_27, /*hidden argument*/NULL);
		// Destroy(hit.collider.gameObject);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_28;
		L_28 = RaycastHit2D_get_collider_m00F7EC55C36F39E2ED64B31354FB4D9C8938D563((RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 *)(&V_1), /*hidden argument*/NULL);
		NullCheck(L_28);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_29;
		L_29 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_28, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_29, /*hidden argument*/NULL);
		// newObject(hit.transform.tag, hit.transform.localPosition);
		NewObject_t28C704DF17CCD973CE803B613A0BF41B850975D7 * L_30 = ((Input_Controller_tB6CEDDA1385C420D6E5AFDEAC7E15112AAD2354E_StaticFields*)il2cpp_codegen_static_fields_for(Input_Controller_tB6CEDDA1385C420D6E5AFDEAC7E15112AAD2354E_il2cpp_TypeInfo_var))->get_newObject_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_31;
		L_31 = RaycastHit2D_get_transform_m0CD992BD94BCE7F1CFB44D987924328B6C0E8864((RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 *)(&V_1), /*hidden argument*/NULL);
		NullCheck(L_31);
		String_t* L_32;
		L_32 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_31, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_33;
		L_33 = RaycastHit2D_get_transform_m0CD992BD94BCE7F1CFB44D987924328B6C0E8864((RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 *)(&V_1), /*hidden argument*/NULL);
		NullCheck(L_33);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34;
		L_34 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_33, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_35;
		L_35 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_34, /*hidden argument*/NULL);
		NullCheck(L_30);
		NewObject_Invoke_m5A2132D5F6C2DDE308D24D0DFD432358180DE4B6(L_30, L_32, L_35, /*hidden argument*/NULL);
	}

IL_00fb:
	{
		// }
		return;
	}
}
// System.Void Input_Controller::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Input_Controller_Update_m5180FA7AA39A7614A007AAC572ED65F8B15A0ACA (Input_Controller_tB6CEDDA1385C420D6E5AFDEAC7E15112AAD2354E * __this, const RuntimeMethod* method)
{
	{
		// OnTouchScreen();
		Input_Controller_OnTouchScreen_mB90855C66138C0B058441C0D4ECD11CD2D9804C9(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Input_Controller::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Input_Controller__ctor_m74A73AA9D7B6BE920070ACBD392B6209CD376CE0 (Input_Controller_tB6CEDDA1385C420D6E5AFDEAC7E15112AAD2354E * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void ObjectsAction::add_newObject(ObjectsAction/NewObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectsAction_add_newObject_m0E88C80D495092206ACF383197F5E8233C03510E (NewObject_t359FF587F948422E04E8E8B369B09011BBAAA765 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NewObject_t359FF587F948422E04E8E8B369B09011BBAAA765_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectsAction_t668DFE63CC9554E54C19DB31DC03D23CE82B8D33_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NewObject_t359FF587F948422E04E8E8B369B09011BBAAA765 * V_0 = NULL;
	NewObject_t359FF587F948422E04E8E8B369B09011BBAAA765 * V_1 = NULL;
	NewObject_t359FF587F948422E04E8E8B369B09011BBAAA765 * V_2 = NULL;
	{
		NewObject_t359FF587F948422E04E8E8B369B09011BBAAA765 * L_0 = ((ObjectsAction_t668DFE63CC9554E54C19DB31DC03D23CE82B8D33_StaticFields*)il2cpp_codegen_static_fields_for(ObjectsAction_t668DFE63CC9554E54C19DB31DC03D23CE82B8D33_il2cpp_TypeInfo_var))->get_newObject_8();
		V_0 = L_0;
	}

IL_0006:
	{
		NewObject_t359FF587F948422E04E8E8B369B09011BBAAA765 * L_1 = V_0;
		V_1 = L_1;
		NewObject_t359FF587F948422E04E8E8B369B09011BBAAA765 * L_2 = V_1;
		NewObject_t359FF587F948422E04E8E8B369B09011BBAAA765 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((NewObject_t359FF587F948422E04E8E8B369B09011BBAAA765 *)CastclassSealed((RuntimeObject*)L_4, NewObject_t359FF587F948422E04E8E8B369B09011BBAAA765_il2cpp_TypeInfo_var));
		NewObject_t359FF587F948422E04E8E8B369B09011BBAAA765 * L_5 = V_2;
		NewObject_t359FF587F948422E04E8E8B369B09011BBAAA765 * L_6 = V_1;
		NewObject_t359FF587F948422E04E8E8B369B09011BBAAA765 * L_7;
		L_7 = InterlockedCompareExchangeImpl<NewObject_t359FF587F948422E04E8E8B369B09011BBAAA765 *>((NewObject_t359FF587F948422E04E8E8B369B09011BBAAA765 **)(((ObjectsAction_t668DFE63CC9554E54C19DB31DC03D23CE82B8D33_StaticFields*)il2cpp_codegen_static_fields_for(ObjectsAction_t668DFE63CC9554E54C19DB31DC03D23CE82B8D33_il2cpp_TypeInfo_var))->get_address_of_newObject_8()), L_5, L_6);
		V_0 = L_7;
		NewObject_t359FF587F948422E04E8E8B369B09011BBAAA765 * L_8 = V_0;
		NewObject_t359FF587F948422E04E8E8B369B09011BBAAA765 * L_9 = V_1;
		if ((!(((RuntimeObject*)(NewObject_t359FF587F948422E04E8E8B369B09011BBAAA765 *)L_8) == ((RuntimeObject*)(NewObject_t359FF587F948422E04E8E8B369B09011BBAAA765 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void ObjectsAction::remove_newObject(ObjectsAction/NewObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectsAction_remove_newObject_m7A05318D83D017CBCC6EC12C8668A208B36761C3 (NewObject_t359FF587F948422E04E8E8B369B09011BBAAA765 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NewObject_t359FF587F948422E04E8E8B369B09011BBAAA765_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectsAction_t668DFE63CC9554E54C19DB31DC03D23CE82B8D33_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NewObject_t359FF587F948422E04E8E8B369B09011BBAAA765 * V_0 = NULL;
	NewObject_t359FF587F948422E04E8E8B369B09011BBAAA765 * V_1 = NULL;
	NewObject_t359FF587F948422E04E8E8B369B09011BBAAA765 * V_2 = NULL;
	{
		NewObject_t359FF587F948422E04E8E8B369B09011BBAAA765 * L_0 = ((ObjectsAction_t668DFE63CC9554E54C19DB31DC03D23CE82B8D33_StaticFields*)il2cpp_codegen_static_fields_for(ObjectsAction_t668DFE63CC9554E54C19DB31DC03D23CE82B8D33_il2cpp_TypeInfo_var))->get_newObject_8();
		V_0 = L_0;
	}

IL_0006:
	{
		NewObject_t359FF587F948422E04E8E8B369B09011BBAAA765 * L_1 = V_0;
		V_1 = L_1;
		NewObject_t359FF587F948422E04E8E8B369B09011BBAAA765 * L_2 = V_1;
		NewObject_t359FF587F948422E04E8E8B369B09011BBAAA765 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((NewObject_t359FF587F948422E04E8E8B369B09011BBAAA765 *)CastclassSealed((RuntimeObject*)L_4, NewObject_t359FF587F948422E04E8E8B369B09011BBAAA765_il2cpp_TypeInfo_var));
		NewObject_t359FF587F948422E04E8E8B369B09011BBAAA765 * L_5 = V_2;
		NewObject_t359FF587F948422E04E8E8B369B09011BBAAA765 * L_6 = V_1;
		NewObject_t359FF587F948422E04E8E8B369B09011BBAAA765 * L_7;
		L_7 = InterlockedCompareExchangeImpl<NewObject_t359FF587F948422E04E8E8B369B09011BBAAA765 *>((NewObject_t359FF587F948422E04E8E8B369B09011BBAAA765 **)(((ObjectsAction_t668DFE63CC9554E54C19DB31DC03D23CE82B8D33_StaticFields*)il2cpp_codegen_static_fields_for(ObjectsAction_t668DFE63CC9554E54C19DB31DC03D23CE82B8D33_il2cpp_TypeInfo_var))->get_address_of_newObject_8()), L_5, L_6);
		V_0 = L_7;
		NewObject_t359FF587F948422E04E8E8B369B09011BBAAA765 * L_8 = V_0;
		NewObject_t359FF587F948422E04E8E8B369B09011BBAAA765 * L_9 = V_1;
		if ((!(((RuntimeObject*)(NewObject_t359FF587F948422E04E8E8B369B09011BBAAA765 *)L_8) == ((RuntimeObject*)(NewObject_t359FF587F948422E04E8E8B369B09011BBAAA765 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void ObjectsAction::add_newParticle(ObjectsAction/NewParticle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectsAction_add_newParticle_mD1B49A5397A7ACE8D07625751356FE0124558262 (NewParticle_t1840D95AF8535546BD2A321DEC91EBEEF4F771A3 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NewParticle_t1840D95AF8535546BD2A321DEC91EBEEF4F771A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectsAction_t668DFE63CC9554E54C19DB31DC03D23CE82B8D33_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NewParticle_t1840D95AF8535546BD2A321DEC91EBEEF4F771A3 * V_0 = NULL;
	NewParticle_t1840D95AF8535546BD2A321DEC91EBEEF4F771A3 * V_1 = NULL;
	NewParticle_t1840D95AF8535546BD2A321DEC91EBEEF4F771A3 * V_2 = NULL;
	{
		NewParticle_t1840D95AF8535546BD2A321DEC91EBEEF4F771A3 * L_0 = ((ObjectsAction_t668DFE63CC9554E54C19DB31DC03D23CE82B8D33_StaticFields*)il2cpp_codegen_static_fields_for(ObjectsAction_t668DFE63CC9554E54C19DB31DC03D23CE82B8D33_il2cpp_TypeInfo_var))->get_newParticle_9();
		V_0 = L_0;
	}

IL_0006:
	{
		NewParticle_t1840D95AF8535546BD2A321DEC91EBEEF4F771A3 * L_1 = V_0;
		V_1 = L_1;
		NewParticle_t1840D95AF8535546BD2A321DEC91EBEEF4F771A3 * L_2 = V_1;
		NewParticle_t1840D95AF8535546BD2A321DEC91EBEEF4F771A3 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((NewParticle_t1840D95AF8535546BD2A321DEC91EBEEF4F771A3 *)CastclassSealed((RuntimeObject*)L_4, NewParticle_t1840D95AF8535546BD2A321DEC91EBEEF4F771A3_il2cpp_TypeInfo_var));
		NewParticle_t1840D95AF8535546BD2A321DEC91EBEEF4F771A3 * L_5 = V_2;
		NewParticle_t1840D95AF8535546BD2A321DEC91EBEEF4F771A3 * L_6 = V_1;
		NewParticle_t1840D95AF8535546BD2A321DEC91EBEEF4F771A3 * L_7;
		L_7 = InterlockedCompareExchangeImpl<NewParticle_t1840D95AF8535546BD2A321DEC91EBEEF4F771A3 *>((NewParticle_t1840D95AF8535546BD2A321DEC91EBEEF4F771A3 **)(((ObjectsAction_t668DFE63CC9554E54C19DB31DC03D23CE82B8D33_StaticFields*)il2cpp_codegen_static_fields_for(ObjectsAction_t668DFE63CC9554E54C19DB31DC03D23CE82B8D33_il2cpp_TypeInfo_var))->get_address_of_newParticle_9()), L_5, L_6);
		V_0 = L_7;
		NewParticle_t1840D95AF8535546BD2A321DEC91EBEEF4F771A3 * L_8 = V_0;
		NewParticle_t1840D95AF8535546BD2A321DEC91EBEEF4F771A3 * L_9 = V_1;
		if ((!(((RuntimeObject*)(NewParticle_t1840D95AF8535546BD2A321DEC91EBEEF4F771A3 *)L_8) == ((RuntimeObject*)(NewParticle_t1840D95AF8535546BD2A321DEC91EBEEF4F771A3 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void ObjectsAction::remove_newParticle(ObjectsAction/NewParticle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectsAction_remove_newParticle_m904183AB6EE912697994FD0A9326FCF1717687A6 (NewParticle_t1840D95AF8535546BD2A321DEC91EBEEF4F771A3 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NewParticle_t1840D95AF8535546BD2A321DEC91EBEEF4F771A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectsAction_t668DFE63CC9554E54C19DB31DC03D23CE82B8D33_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NewParticle_t1840D95AF8535546BD2A321DEC91EBEEF4F771A3 * V_0 = NULL;
	NewParticle_t1840D95AF8535546BD2A321DEC91EBEEF4F771A3 * V_1 = NULL;
	NewParticle_t1840D95AF8535546BD2A321DEC91EBEEF4F771A3 * V_2 = NULL;
	{
		NewParticle_t1840D95AF8535546BD2A321DEC91EBEEF4F771A3 * L_0 = ((ObjectsAction_t668DFE63CC9554E54C19DB31DC03D23CE82B8D33_StaticFields*)il2cpp_codegen_static_fields_for(ObjectsAction_t668DFE63CC9554E54C19DB31DC03D23CE82B8D33_il2cpp_TypeInfo_var))->get_newParticle_9();
		V_0 = L_0;
	}

IL_0006:
	{
		NewParticle_t1840D95AF8535546BD2A321DEC91EBEEF4F771A3 * L_1 = V_0;
		V_1 = L_1;
		NewParticle_t1840D95AF8535546BD2A321DEC91EBEEF4F771A3 * L_2 = V_1;
		NewParticle_t1840D95AF8535546BD2A321DEC91EBEEF4F771A3 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((NewParticle_t1840D95AF8535546BD2A321DEC91EBEEF4F771A3 *)CastclassSealed((RuntimeObject*)L_4, NewParticle_t1840D95AF8535546BD2A321DEC91EBEEF4F771A3_il2cpp_TypeInfo_var));
		NewParticle_t1840D95AF8535546BD2A321DEC91EBEEF4F771A3 * L_5 = V_2;
		NewParticle_t1840D95AF8535546BD2A321DEC91EBEEF4F771A3 * L_6 = V_1;
		NewParticle_t1840D95AF8535546BD2A321DEC91EBEEF4F771A3 * L_7;
		L_7 = InterlockedCompareExchangeImpl<NewParticle_t1840D95AF8535546BD2A321DEC91EBEEF4F771A3 *>((NewParticle_t1840D95AF8535546BD2A321DEC91EBEEF4F771A3 **)(((ObjectsAction_t668DFE63CC9554E54C19DB31DC03D23CE82B8D33_StaticFields*)il2cpp_codegen_static_fields_for(ObjectsAction_t668DFE63CC9554E54C19DB31DC03D23CE82B8D33_il2cpp_TypeInfo_var))->get_address_of_newParticle_9()), L_5, L_6);
		V_0 = L_7;
		NewParticle_t1840D95AF8535546BD2A321DEC91EBEEF4F771A3 * L_8 = V_0;
		NewParticle_t1840D95AF8535546BD2A321DEC91EBEEF4F771A3 * L_9 = V_1;
		if ((!(((RuntimeObject*)(NewParticle_t1840D95AF8535546BD2A321DEC91EBEEF4F771A3 *)L_8) == ((RuntimeObject*)(NewParticle_t1840D95AF8535546BD2A321DEC91EBEEF4F771A3 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void ObjectsAction::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectsAction_Start_m751A004E6BFDDD4F8B33929794A20AD9FB6C5F8D (ObjectsAction_t668DFE63CC9554E54C19DB31DC03D23CE82B8D33 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mE2EA0E48C8C0EAFA09C6FAD2003105EACAC85213_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral89C016E7A0440DB91C41D9A1E242DE83FA91866A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral954F4A2F6864EFB6815981E6B99C5FD833091266);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// _transform = this.GetComponent<Transform>();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mE2EA0E48C8C0EAFA09C6FAD2003105EACAC85213(__this, /*hidden argument*/Component_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mE2EA0E48C8C0EAFA09C6FAD2003105EACAC85213_RuntimeMethod_var);
		__this->set__transform_7(L_0);
		// _render = this.GetComponent<SpriteRenderer>();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_1;
		L_1 = Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		__this->set__render_6(L_1);
		// _original_Color = _render.color;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_2 = __this->get__render_6();
		NullCheck(L_2);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_3;
		L_3 = SpriteRenderer_get_color_mAE96B8C6754CBE7820863BD5E97729B5DBF96EAC(L_2, /*hidden argument*/NULL);
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_4;
		L_4 = Color32_op_Implicit_mD17E8145D2D32EF369EFE349C4D32E839F7D7AA4(L_3, /*hidden argument*/NULL);
		__this->set__original_Color_5(L_4);
		// switch (tag)
		String_t* L_5;
		L_5 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(__this, /*hidden argument*/NULL);
		V_0 = L_5;
		String_t* L_6 = V_0;
		if (!L_6)
		{
			goto IL_0081;
		}
	}
	{
		String_t* L_7 = V_0;
		bool L_8;
		L_8 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_7, _stringLiteral954F4A2F6864EFB6815981E6B99C5FD833091266, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0053;
		}
	}
	{
		String_t* L_9 = V_0;
		bool L_10;
		L_10 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_9, _stringLiteral89C016E7A0440DB91C41D9A1E242DE83FA91866A, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_0074;
		}
	}
	{
		return;
	}

IL_0053:
	{
		// StartCoroutine(IEChangeColor(Color.green, Random.Range(3,11)));
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_11;
		L_11 = Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9(/*hidden argument*/NULL);
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_12;
		L_12 = Color32_op_Implicit_mD17E8145D2D32EF369EFE349C4D32E839F7D7AA4(L_11, /*hidden argument*/NULL);
		int32_t L_13;
		L_13 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(3, ((int32_t)11), /*hidden argument*/NULL);
		RuntimeObject* L_14;
		L_14 = ObjectsAction_IEChangeColor_m02F56EF64EEE9EFA26A902325AE1058F22AC88DC(__this, L_12, ((float)((float)L_13)), /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_15;
		L_15 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_14, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0074:
	{
		// StartCoroutine(IEMove_Sin());
		RuntimeObject* L_16;
		L_16 = ObjectsAction_IEMove_Sin_m0089B961704DBB72F289D8A92FA89B1A6A9655CD(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_17;
		L_17 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_16, /*hidden argument*/NULL);
	}

IL_0081:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator ObjectsAction::IEChangeColor(UnityEngine.Color32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ObjectsAction_IEChangeColor_m02F56EF64EEE9EFA26A902325AE1058F22AC88DC (ObjectsAction_t668DFE63CC9554E54C19DB31DC03D23CE82B8D33 * __this, Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___newColor0, float ___time1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CIEChangeColorU3Ed__13_t38ADE1FE36665E337FEBB881CF4E8F0B5F1CFD33_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CIEChangeColorU3Ed__13_t38ADE1FE36665E337FEBB881CF4E8F0B5F1CFD33 * L_0 = (U3CIEChangeColorU3Ed__13_t38ADE1FE36665E337FEBB881CF4E8F0B5F1CFD33 *)il2cpp_codegen_object_new(U3CIEChangeColorU3Ed__13_t38ADE1FE36665E337FEBB881CF4E8F0B5F1CFD33_il2cpp_TypeInfo_var);
		U3CIEChangeColorU3Ed__13__ctor_m9C60C21156E51F05BF5F78DA0CA17D21CC115049(L_0, 0, /*hidden argument*/NULL);
		U3CIEChangeColorU3Ed__13_t38ADE1FE36665E337FEBB881CF4E8F0B5F1CFD33 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		U3CIEChangeColorU3Ed__13_t38ADE1FE36665E337FEBB881CF4E8F0B5F1CFD33 * L_2 = L_1;
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_3 = ___newColor0;
		NullCheck(L_2);
		L_2->set_newColor_3(L_3);
		U3CIEChangeColorU3Ed__13_t38ADE1FE36665E337FEBB881CF4E8F0B5F1CFD33 * L_4 = L_2;
		float L_5 = ___time1;
		NullCheck(L_4);
		L_4->set_time_4(L_5);
		return L_4;
	}
}
// System.Collections.IEnumerator ObjectsAction::IEMove_Sin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ObjectsAction_IEMove_Sin_m0089B961704DBB72F289D8A92FA89B1A6A9655CD (ObjectsAction_t668DFE63CC9554E54C19DB31DC03D23CE82B8D33 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CIEMove_SinU3Ed__14_tCBB7D1CDDB49BC6DE6E562E1C751C6D05930BA56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CIEMove_SinU3Ed__14_tCBB7D1CDDB49BC6DE6E562E1C751C6D05930BA56 * L_0 = (U3CIEMove_SinU3Ed__14_tCBB7D1CDDB49BC6DE6E562E1C751C6D05930BA56 *)il2cpp_codegen_object_new(U3CIEMove_SinU3Ed__14_tCBB7D1CDDB49BC6DE6E562E1C751C6D05930BA56_il2cpp_TypeInfo_var);
		U3CIEMove_SinU3Ed__14__ctor_m684D27E0F2B5670ABD9374C9E66448985EB3FE66(L_0, 0, /*hidden argument*/NULL);
		U3CIEMove_SinU3Ed__14_tCBB7D1CDDB49BC6DE6E562E1C751C6D05930BA56 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void ObjectsAction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectsAction__ctor_mBC5DC742F582592A38038C675BAC0D81347D2586 (ObjectsAction_t668DFE63CC9554E54C19DB31DC03D23CE82B8D33 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void ParticleActions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleActions__ctor_mE905659D54067C9507979C9E2F8F741263AA5DEC (ParticleActions_tF132E3D764EE2F1163C15E7790EF9761325FB1E4 * __this, const RuntimeMethod* method)
{
	{
		ObjectsAction__ctor_mBC5DC742F582592A38038C675BAC0D81347D2586(__this, /*hidden argument*/NULL);
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
// System.Void UI_Controller::add_newgame(UI_Controller/NewGame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_Controller_add_newgame_m8452DFD8466E346256AD774C2FBB77EDA9CDBF6C (NewGame_tEA2DAB9633B74B56DEB5439CC3AACA1E4B7BBD2C * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NewGame_tEA2DAB9633B74B56DEB5439CC3AACA1E4B7BBD2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UI_Controller_tDBF7405F996ACBB79E9E676481F556F2BD90D698_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NewGame_tEA2DAB9633B74B56DEB5439CC3AACA1E4B7BBD2C * V_0 = NULL;
	NewGame_tEA2DAB9633B74B56DEB5439CC3AACA1E4B7BBD2C * V_1 = NULL;
	NewGame_tEA2DAB9633B74B56DEB5439CC3AACA1E4B7BBD2C * V_2 = NULL;
	{
		NewGame_tEA2DAB9633B74B56DEB5439CC3AACA1E4B7BBD2C * L_0 = ((UI_Controller_tDBF7405F996ACBB79E9E676481F556F2BD90D698_StaticFields*)il2cpp_codegen_static_fields_for(UI_Controller_tDBF7405F996ACBB79E9E676481F556F2BD90D698_il2cpp_TypeInfo_var))->get_newgame_9();
		V_0 = L_0;
	}

IL_0006:
	{
		NewGame_tEA2DAB9633B74B56DEB5439CC3AACA1E4B7BBD2C * L_1 = V_0;
		V_1 = L_1;
		NewGame_tEA2DAB9633B74B56DEB5439CC3AACA1E4B7BBD2C * L_2 = V_1;
		NewGame_tEA2DAB9633B74B56DEB5439CC3AACA1E4B7BBD2C * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((NewGame_tEA2DAB9633B74B56DEB5439CC3AACA1E4B7BBD2C *)CastclassSealed((RuntimeObject*)L_4, NewGame_tEA2DAB9633B74B56DEB5439CC3AACA1E4B7BBD2C_il2cpp_TypeInfo_var));
		NewGame_tEA2DAB9633B74B56DEB5439CC3AACA1E4B7BBD2C * L_5 = V_2;
		NewGame_tEA2DAB9633B74B56DEB5439CC3AACA1E4B7BBD2C * L_6 = V_1;
		NewGame_tEA2DAB9633B74B56DEB5439CC3AACA1E4B7BBD2C * L_7;
		L_7 = InterlockedCompareExchangeImpl<NewGame_tEA2DAB9633B74B56DEB5439CC3AACA1E4B7BBD2C *>((NewGame_tEA2DAB9633B74B56DEB5439CC3AACA1E4B7BBD2C **)(((UI_Controller_tDBF7405F996ACBB79E9E676481F556F2BD90D698_StaticFields*)il2cpp_codegen_static_fields_for(UI_Controller_tDBF7405F996ACBB79E9E676481F556F2BD90D698_il2cpp_TypeInfo_var))->get_address_of_newgame_9()), L_5, L_6);
		V_0 = L_7;
		NewGame_tEA2DAB9633B74B56DEB5439CC3AACA1E4B7BBD2C * L_8 = V_0;
		NewGame_tEA2DAB9633B74B56DEB5439CC3AACA1E4B7BBD2C * L_9 = V_1;
		if ((!(((RuntimeObject*)(NewGame_tEA2DAB9633B74B56DEB5439CC3AACA1E4B7BBD2C *)L_8) == ((RuntimeObject*)(NewGame_tEA2DAB9633B74B56DEB5439CC3AACA1E4B7BBD2C *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void UI_Controller::remove_newgame(UI_Controller/NewGame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_Controller_remove_newgame_m23C8D28CA52ADD4ADDB75A58D488EC5285262256 (NewGame_tEA2DAB9633B74B56DEB5439CC3AACA1E4B7BBD2C * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NewGame_tEA2DAB9633B74B56DEB5439CC3AACA1E4B7BBD2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UI_Controller_tDBF7405F996ACBB79E9E676481F556F2BD90D698_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NewGame_tEA2DAB9633B74B56DEB5439CC3AACA1E4B7BBD2C * V_0 = NULL;
	NewGame_tEA2DAB9633B74B56DEB5439CC3AACA1E4B7BBD2C * V_1 = NULL;
	NewGame_tEA2DAB9633B74B56DEB5439CC3AACA1E4B7BBD2C * V_2 = NULL;
	{
		NewGame_tEA2DAB9633B74B56DEB5439CC3AACA1E4B7BBD2C * L_0 = ((UI_Controller_tDBF7405F996ACBB79E9E676481F556F2BD90D698_StaticFields*)il2cpp_codegen_static_fields_for(UI_Controller_tDBF7405F996ACBB79E9E676481F556F2BD90D698_il2cpp_TypeInfo_var))->get_newgame_9();
		V_0 = L_0;
	}

IL_0006:
	{
		NewGame_tEA2DAB9633B74B56DEB5439CC3AACA1E4B7BBD2C * L_1 = V_0;
		V_1 = L_1;
		NewGame_tEA2DAB9633B74B56DEB5439CC3AACA1E4B7BBD2C * L_2 = V_1;
		NewGame_tEA2DAB9633B74B56DEB5439CC3AACA1E4B7BBD2C * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((NewGame_tEA2DAB9633B74B56DEB5439CC3AACA1E4B7BBD2C *)CastclassSealed((RuntimeObject*)L_4, NewGame_tEA2DAB9633B74B56DEB5439CC3AACA1E4B7BBD2C_il2cpp_TypeInfo_var));
		NewGame_tEA2DAB9633B74B56DEB5439CC3AACA1E4B7BBD2C * L_5 = V_2;
		NewGame_tEA2DAB9633B74B56DEB5439CC3AACA1E4B7BBD2C * L_6 = V_1;
		NewGame_tEA2DAB9633B74B56DEB5439CC3AACA1E4B7BBD2C * L_7;
		L_7 = InterlockedCompareExchangeImpl<NewGame_tEA2DAB9633B74B56DEB5439CC3AACA1E4B7BBD2C *>((NewGame_tEA2DAB9633B74B56DEB5439CC3AACA1E4B7BBD2C **)(((UI_Controller_tDBF7405F996ACBB79E9E676481F556F2BD90D698_StaticFields*)il2cpp_codegen_static_fields_for(UI_Controller_tDBF7405F996ACBB79E9E676481F556F2BD90D698_il2cpp_TypeInfo_var))->get_address_of_newgame_9()), L_5, L_6);
		V_0 = L_7;
		NewGame_tEA2DAB9633B74B56DEB5439CC3AACA1E4B7BBD2C * L_8 = V_0;
		NewGame_tEA2DAB9633B74B56DEB5439CC3AACA1E4B7BBD2C * L_9 = V_1;
		if ((!(((RuntimeObject*)(NewGame_tEA2DAB9633B74B56DEB5439CC3AACA1E4B7BBD2C *)L_8) == ((RuntimeObject*)(NewGame_tEA2DAB9633B74B56DEB5439CC3AACA1E4B7BBD2C *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void UI_Controller::add_endGame(UI_Controller/EndGame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_Controller_add_endGame_m79B0FF79C532994FBE6217461FCB425432458DFC (EndGame_tB409D77BF756F5ECB6C874B3D78FBDCE33AE4665 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EndGame_tB409D77BF756F5ECB6C874B3D78FBDCE33AE4665_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UI_Controller_tDBF7405F996ACBB79E9E676481F556F2BD90D698_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EndGame_tB409D77BF756F5ECB6C874B3D78FBDCE33AE4665 * V_0 = NULL;
	EndGame_tB409D77BF756F5ECB6C874B3D78FBDCE33AE4665 * V_1 = NULL;
	EndGame_tB409D77BF756F5ECB6C874B3D78FBDCE33AE4665 * V_2 = NULL;
	{
		EndGame_tB409D77BF756F5ECB6C874B3D78FBDCE33AE4665 * L_0 = ((UI_Controller_tDBF7405F996ACBB79E9E676481F556F2BD90D698_StaticFields*)il2cpp_codegen_static_fields_for(UI_Controller_tDBF7405F996ACBB79E9E676481F556F2BD90D698_il2cpp_TypeInfo_var))->get_endGame_10();
		V_0 = L_0;
	}

IL_0006:
	{
		EndGame_tB409D77BF756F5ECB6C874B3D78FBDCE33AE4665 * L_1 = V_0;
		V_1 = L_1;
		EndGame_tB409D77BF756F5ECB6C874B3D78FBDCE33AE4665 * L_2 = V_1;
		EndGame_tB409D77BF756F5ECB6C874B3D78FBDCE33AE4665 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EndGame_tB409D77BF756F5ECB6C874B3D78FBDCE33AE4665 *)CastclassSealed((RuntimeObject*)L_4, EndGame_tB409D77BF756F5ECB6C874B3D78FBDCE33AE4665_il2cpp_TypeInfo_var));
		EndGame_tB409D77BF756F5ECB6C874B3D78FBDCE33AE4665 * L_5 = V_2;
		EndGame_tB409D77BF756F5ECB6C874B3D78FBDCE33AE4665 * L_6 = V_1;
		EndGame_tB409D77BF756F5ECB6C874B3D78FBDCE33AE4665 * L_7;
		L_7 = InterlockedCompareExchangeImpl<EndGame_tB409D77BF756F5ECB6C874B3D78FBDCE33AE4665 *>((EndGame_tB409D77BF756F5ECB6C874B3D78FBDCE33AE4665 **)(((UI_Controller_tDBF7405F996ACBB79E9E676481F556F2BD90D698_StaticFields*)il2cpp_codegen_static_fields_for(UI_Controller_tDBF7405F996ACBB79E9E676481F556F2BD90D698_il2cpp_TypeInfo_var))->get_address_of_endGame_10()), L_5, L_6);
		V_0 = L_7;
		EndGame_tB409D77BF756F5ECB6C874B3D78FBDCE33AE4665 * L_8 = V_0;
		EndGame_tB409D77BF756F5ECB6C874B3D78FBDCE33AE4665 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EndGame_tB409D77BF756F5ECB6C874B3D78FBDCE33AE4665 *)L_8) == ((RuntimeObject*)(EndGame_tB409D77BF756F5ECB6C874B3D78FBDCE33AE4665 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void UI_Controller::remove_endGame(UI_Controller/EndGame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_Controller_remove_endGame_m655170C78134815E06A0193F79C78EFD7D31C5A8 (EndGame_tB409D77BF756F5ECB6C874B3D78FBDCE33AE4665 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EndGame_tB409D77BF756F5ECB6C874B3D78FBDCE33AE4665_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UI_Controller_tDBF7405F996ACBB79E9E676481F556F2BD90D698_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EndGame_tB409D77BF756F5ECB6C874B3D78FBDCE33AE4665 * V_0 = NULL;
	EndGame_tB409D77BF756F5ECB6C874B3D78FBDCE33AE4665 * V_1 = NULL;
	EndGame_tB409D77BF756F5ECB6C874B3D78FBDCE33AE4665 * V_2 = NULL;
	{
		EndGame_tB409D77BF756F5ECB6C874B3D78FBDCE33AE4665 * L_0 = ((UI_Controller_tDBF7405F996ACBB79E9E676481F556F2BD90D698_StaticFields*)il2cpp_codegen_static_fields_for(UI_Controller_tDBF7405F996ACBB79E9E676481F556F2BD90D698_il2cpp_TypeInfo_var))->get_endGame_10();
		V_0 = L_0;
	}

IL_0006:
	{
		EndGame_tB409D77BF756F5ECB6C874B3D78FBDCE33AE4665 * L_1 = V_0;
		V_1 = L_1;
		EndGame_tB409D77BF756F5ECB6C874B3D78FBDCE33AE4665 * L_2 = V_1;
		EndGame_tB409D77BF756F5ECB6C874B3D78FBDCE33AE4665 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EndGame_tB409D77BF756F5ECB6C874B3D78FBDCE33AE4665 *)CastclassSealed((RuntimeObject*)L_4, EndGame_tB409D77BF756F5ECB6C874B3D78FBDCE33AE4665_il2cpp_TypeInfo_var));
		EndGame_tB409D77BF756F5ECB6C874B3D78FBDCE33AE4665 * L_5 = V_2;
		EndGame_tB409D77BF756F5ECB6C874B3D78FBDCE33AE4665 * L_6 = V_1;
		EndGame_tB409D77BF756F5ECB6C874B3D78FBDCE33AE4665 * L_7;
		L_7 = InterlockedCompareExchangeImpl<EndGame_tB409D77BF756F5ECB6C874B3D78FBDCE33AE4665 *>((EndGame_tB409D77BF756F5ECB6C874B3D78FBDCE33AE4665 **)(((UI_Controller_tDBF7405F996ACBB79E9E676481F556F2BD90D698_StaticFields*)il2cpp_codegen_static_fields_for(UI_Controller_tDBF7405F996ACBB79E9E676481F556F2BD90D698_il2cpp_TypeInfo_var))->get_address_of_endGame_10()), L_5, L_6);
		V_0 = L_7;
		EndGame_tB409D77BF756F5ECB6C874B3D78FBDCE33AE4665 * L_8 = V_0;
		EndGame_tB409D77BF756F5ECB6C874B3D78FBDCE33AE4665 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EndGame_tB409D77BF756F5ECB6C874B3D78FBDCE33AE4665 *)L_8) == ((RuntimeObject*)(EndGame_tB409D77BF756F5ECB6C874B3D78FBDCE33AE4665 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void UI_Controller::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_Controller_Start_m1A4FB73422F37A6D7F3D0C6C25FC3A460CC9A9CC (UI_Controller_tDBF7405F996ACBB79E9E676481F556F2BD90D698 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AddScore_t6CCDF1C1798D8FC840CEE8131D0736E72DCD3F54_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NewClick_tDB762DAD633CA00A4042E3710A098418E9BD8973_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UI_Controller_ChangeScore_m2BA18A987A70732A4BB60E631E305A1CFDDE8C52_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UI_Controller_ResetNoClickTime_m67AEF0A7762CA392A60E40A850369FCA8BDD1499_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Input_Controller.addScore += ChangeScore;
		AddScore_t6CCDF1C1798D8FC840CEE8131D0736E72DCD3F54 * L_0 = (AddScore_t6CCDF1C1798D8FC840CEE8131D0736E72DCD3F54 *)il2cpp_codegen_object_new(AddScore_t6CCDF1C1798D8FC840CEE8131D0736E72DCD3F54_il2cpp_TypeInfo_var);
		AddScore__ctor_m307423FC37B077184AA246238A091DBA1E5A6532(L_0, __this, (intptr_t)((intptr_t)UI_Controller_ChangeScore_m2BA18A987A70732A4BB60E631E305A1CFDDE8C52_RuntimeMethod_var), /*hidden argument*/NULL);
		Input_Controller_add_addScore_m6177A8BA357DFD0FBE94410393AA87CF2E2B0666(L_0, /*hidden argument*/NULL);
		// Input_Controller.newClick += ResetNoClickTime;
		NewClick_tDB762DAD633CA00A4042E3710A098418E9BD8973 * L_1 = (NewClick_tDB762DAD633CA00A4042E3710A098418E9BD8973 *)il2cpp_codegen_object_new(NewClick_tDB762DAD633CA00A4042E3710A098418E9BD8973_il2cpp_TypeInfo_var);
		NewClick__ctor_m641F2C05B9C57F7A76FF4ED236FCE1CB09CF41D6(L_1, __this, (intptr_t)((intptr_t)UI_Controller_ResetNoClickTime_m67AEF0A7762CA392A60E40A850369FCA8BDD1499_RuntimeMethod_var), /*hidden argument*/NULL);
		Input_Controller_add_newClick_mEE65A634B274333F352B875896FE86613903CFC5(L_1, /*hidden argument*/NULL);
		// _startText = transform.GetChild(0).GetComponent<Text>();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_2, 0, /*hidden argument*/NULL);
		NullCheck(L_3);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_4;
		L_4 = Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137(L_3, /*hidden argument*/Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		__this->set__startText_4(L_4);
		// _scoreText = transform.GetChild(1).GetComponent<Text>();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_5, 1, /*hidden argument*/NULL);
		NullCheck(L_6);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_7;
		L_7 = Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137(L_6, /*hidden argument*/Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		__this->set__scoreText_5(L_7);
		// _raycast = transform.GetComponent<Image>();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_9;
		L_9 = Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB(L_8, /*hidden argument*/Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var);
		__this->set__raycast_6(L_9);
		// _startgame = false;
		__this->set__startgame_7((bool)0);
		// _noClickTimer = 15;
		__this->set__noClickTimer_8((15.0f));
		// }
		return;
	}
}
// System.Void UI_Controller::ChangeScore(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_Controller_ChangeScore_m2BA18A987A70732A4BB60E631E305A1CFDDE8C52 (UI_Controller_tDBF7405F996ACBB79E9E676481F556F2BD90D698 * __this, int32_t ___score0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int _score = int.Parse(_scoreText.text);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get__scoreText_5();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_0);
		int32_t L_2;
		L_2 = Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// _scoreText.text  = Mathf.Clamp(_score + score, 0, _score + score).ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_3 = __this->get__scoreText_5();
		int32_t L_4 = V_0;
		int32_t L_5 = ___score0;
		int32_t L_6 = V_0;
		int32_t L_7 = ___score0;
		int32_t L_8;
		L_8 = Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)L_5)), 0, ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)L_7)), /*hidden argument*/NULL);
		V_1 = L_8;
		String_t* L_9;
		L_9 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_9);
		// }
		return;
	}
}
// System.Collections.IEnumerator UI_Controller::IETapScreen(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UI_Controller_IETapScreen_mC6255BCB38FCBC10DC40D2801EDEE5BCEA6E591F (UI_Controller_tDBF7405F996ACBB79E9E676481F556F2BD90D698 * __this, float ___time0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CIETapScreenU3Ed__15_t95AE3D63C29DFB96DA9BD4DE66729A1377AFF69C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CIETapScreenU3Ed__15_t95AE3D63C29DFB96DA9BD4DE66729A1377AFF69C * L_0 = (U3CIETapScreenU3Ed__15_t95AE3D63C29DFB96DA9BD4DE66729A1377AFF69C *)il2cpp_codegen_object_new(U3CIETapScreenU3Ed__15_t95AE3D63C29DFB96DA9BD4DE66729A1377AFF69C_il2cpp_TypeInfo_var);
		U3CIETapScreenU3Ed__15__ctor_m8619E181F8752E501783571686AD8EA558EE48C0(L_0, 0, /*hidden argument*/NULL);
		U3CIETapScreenU3Ed__15_t95AE3D63C29DFB96DA9BD4DE66729A1377AFF69C * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		U3CIETapScreenU3Ed__15_t95AE3D63C29DFB96DA9BD4DE66729A1377AFF69C * L_2 = L_1;
		float L_3 = ___time0;
		NullCheck(L_2);
		L_2->set_time_3(L_3);
		return L_2;
	}
}
// System.Void UI_Controller::ChangeGameStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_Controller_ChangeGameStatus_mBACCE69BD87DDC7F89F81F649A1D27C1B1FD9AD6 (UI_Controller_tDBF7405F996ACBB79E9E676481F556F2BD90D698 * __this, const RuntimeMethod* method)
{
	{
		// StartCoroutine(IETapScreen(3));
		RuntimeObject* L_0;
		L_0 = UI_Controller_IETapScreen_mC6255BCB38FCBC10DC40D2801EDEE5BCEA6E591F(__this, (3.0f), /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_1;
		L_1 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UI_Controller::ResetNoClickTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_Controller_ResetNoClickTime_m67AEF0A7762CA392A60E40A850369FCA8BDD1499 (UI_Controller_tDBF7405F996ACBB79E9E676481F556F2BD90D698 * __this, const RuntimeMethod* method)
{
	{
		// _noClickTimer = 15;
		__this->set__noClickTimer_8((15.0f));
		// }
		return;
	}
}
// System.Void UI_Controller::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_Controller_Update_m2DC4F1CB0932C3DC2C226C59A1415EF4316A5D7E (UI_Controller_tDBF7405F996ACBB79E9E676481F556F2BD90D698 * __this, const RuntimeMethod* method)
{
	{
		// if (_startgame)
		bool L_0 = __this->get__startgame_7();
		if (!L_0)
		{
			goto IL_0039;
		}
	}
	{
		// if (_noClickTimer > 0)
		float L_1 = __this->get__noClickTimer_8();
		if ((!(((float)L_1) > ((float)(0.0f)))))
		{
			goto IL_0028;
		}
	}
	{
		// _noClickTimer -= Time.deltaTime;
		float L_2 = __this->get__noClickTimer_8();
		float L_3;
		L_3 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set__noClickTimer_8(((float)il2cpp_codegen_subtract((float)L_2, (float)L_3)));
		// }else
		return;
	}

IL_0028:
	{
		// _noClickTimer = 15;
		__this->set__noClickTimer_8((15.0f));
		// ChangeGameStatus();
		UI_Controller_ChangeGameStatus_mBACCE69BD87DDC7F89F81F649A1D27C1B1FD9AD6(__this, /*hidden argument*/NULL);
	}

IL_0039:
	{
		// }
		return;
	}
}
// System.Void UI_Controller::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_Controller_OnDestroy_m9DD327B191C40D0A9298D0F596EFC91DC1C6BF76 (UI_Controller_tDBF7405F996ACBB79E9E676481F556F2BD90D698 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AddScore_t6CCDF1C1798D8FC840CEE8131D0736E72DCD3F54_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NewClick_tDB762DAD633CA00A4042E3710A098418E9BD8973_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UI_Controller_ChangeScore_m2BA18A987A70732A4BB60E631E305A1CFDDE8C52_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UI_Controller_ResetNoClickTime_m67AEF0A7762CA392A60E40A850369FCA8BDD1499_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Input_Controller.addScore -= ChangeScore;
		AddScore_t6CCDF1C1798D8FC840CEE8131D0736E72DCD3F54 * L_0 = (AddScore_t6CCDF1C1798D8FC840CEE8131D0736E72DCD3F54 *)il2cpp_codegen_object_new(AddScore_t6CCDF1C1798D8FC840CEE8131D0736E72DCD3F54_il2cpp_TypeInfo_var);
		AddScore__ctor_m307423FC37B077184AA246238A091DBA1E5A6532(L_0, __this, (intptr_t)((intptr_t)UI_Controller_ChangeScore_m2BA18A987A70732A4BB60E631E305A1CFDDE8C52_RuntimeMethod_var), /*hidden argument*/NULL);
		Input_Controller_remove_addScore_mADD8F248E4255B0D652CCD484A24A446DB8807E2(L_0, /*hidden argument*/NULL);
		// Input_Controller.newClick -= ResetNoClickTime;
		NewClick_tDB762DAD633CA00A4042E3710A098418E9BD8973 * L_1 = (NewClick_tDB762DAD633CA00A4042E3710A098418E9BD8973 *)il2cpp_codegen_object_new(NewClick_tDB762DAD633CA00A4042E3710A098418E9BD8973_il2cpp_TypeInfo_var);
		NewClick__ctor_m641F2C05B9C57F7A76FF4ED236FCE1CB09CF41D6(L_1, __this, (intptr_t)((intptr_t)UI_Controller_ResetNoClickTime_m67AEF0A7762CA392A60E40A850369FCA8BDD1499_RuntimeMethod_var), /*hidden argument*/NULL);
		Input_Controller_remove_newClick_m54EC05C15E79849975E8519DB9DD1D8C09B53288(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UI_Controller::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_Controller__ctor_m09E29AA668F4C728EC58897E845EA04A328BBCC3 (UI_Controller_tDBF7405F996ACBB79E9E676481F556F2BD90D698 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void GameManager/<IEParticle>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIEParticleU3Ed__8__ctor_m4209A50EC600AE7DF07791E166FFF7D3E5306052 (U3CIEParticleU3Ed__8_t54ED5BF1EDDD916F1C4F810C587939763065BE75 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void GameManager/<IEParticle>d__8::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIEParticleU3Ed__8_System_IDisposable_Dispose_mBAA3B3350779B62842314019CC148DF58E6E800A (U3CIEParticleU3Ed__8_t54ED5BF1EDDD916F1C4F810C587939763065BE75 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean GameManager/<IEParticle>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CIEParticleU3Ed__8_MoveNext_m437A563B12313B5DF4FD5B5EFC9C44F8FE056BEB (U3CIEParticleU3Ed__8_t54ED5BF1EDDD916F1C4F810C587939763065BE75 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisObjectsAction_t668DFE63CC9554E54C19DB31DC03D23CE82B8D33_m96FCECE0CED7E897E3CBDB0B16CC248879DB1B34_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0085;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// temp = Instantiate(_particlePrefab, pos, Quaternion.identity);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_4 = V_1;
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = L_4->get__particlePrefab_5();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = __this->get_pos_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_6, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_8;
		L_8 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_5, L_7, L_8, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		__this->set_U3CtempU3E5__2_4(L_9);
		// temp.transform.SetParent(_parentObjects.transform);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = __this->get_U3CtempU3E5__2_4();
		NullCheck(L_10);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_10, /*hidden argument*/NULL);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_12 = V_1;
		NullCheck(L_12);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = L_12->get__parentObjects_6();
		NullCheck(L_13);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_13, /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E(L_11, L_14, /*hidden argument*/NULL);
		// temp.GetComponent<ObjectsAction>().Score = 100;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = __this->get_U3CtempU3E5__2_4();
		NullCheck(L_15);
		ObjectsAction_t668DFE63CC9554E54C19DB31DC03D23CE82B8D33 * L_16;
		L_16 = GameObject_GetComponent_TisObjectsAction_t668DFE63CC9554E54C19DB31DC03D23CE82B8D33_m96FCECE0CED7E897E3CBDB0B16CC248879DB1B34(L_15, /*hidden argument*/GameObject_GetComponent_TisObjectsAction_t668DFE63CC9554E54C19DB31DC03D23CE82B8D33_m96FCECE0CED7E897E3CBDB0B16CC248879DB1B34_RuntimeMethod_var);
		NullCheck(L_16);
		L_16->set_Score_4(((int32_t)100));
		// yield return new WaitForSeconds(5);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_17 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_17, (5.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_17);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0085:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (temp != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18 = __this->get_U3CtempU3E5__2_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_18, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_00e5;
		}
	}
	{
		// Destroy(temp);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20 = __this->get_U3CtempU3E5__2_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_20, /*hidden argument*/NULL);
		// CreateObject(_objectPrefab, pos.x, pos.y, new Color32(255,0,255,255), _tagObject[0],0);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_21 = V_1;
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_22 = V_1;
		NullCheck(L_22);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23 = L_22->get__objectPrefab_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_24 = __this->get_address_of_pos_3();
		float L_25 = L_24->get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_26 = __this->get_address_of_pos_3();
		float L_27 = L_26->get_y_1();
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_28;
		memset((&L_28), 0, sizeof(L_28));
		Color32__ctor_m9D07EC69256BB7ED2784E543848DE7B8484A5C94((&L_28), (uint8_t)((int32_t)255), (uint8_t)0, (uint8_t)((int32_t)255), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_29 = V_1;
		NullCheck(L_29);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_30 = L_29->get__tagObject_7();
		NullCheck(L_30);
		int32_t L_31 = 0;
		String_t* L_32 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		NullCheck(L_21);
		GameManager_CreateObject_m0E33E99F36FD50A9D8215C7A532BE601B4896174(L_21, L_23, L_25, L_27, L_28, L_32, 0, /*hidden argument*/NULL);
	}

IL_00e5:
	{
		// }
		return (bool)0;
	}
}
// System.Object GameManager/<IEParticle>d__8::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CIEParticleU3Ed__8_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m0900B826C4F511A889594E2E732E1EFE0222E41A (U3CIEParticleU3Ed__8_t54ED5BF1EDDD916F1C4F810C587939763065BE75 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void GameManager/<IEParticle>d__8::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIEParticleU3Ed__8_System_Collections_IEnumerator_Reset_m3306A09BC405B8862EF0B8B0476B9614A7B27DAD (U3CIEParticleU3Ed__8_t54ED5BF1EDDD916F1C4F810C587939763065BE75 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CIEParticleU3Ed__8_System_Collections_IEnumerator_Reset_m3306A09BC405B8862EF0B8B0476B9614A7B27DAD_RuntimeMethod_var)));
	}
}
// System.Object GameManager/<IEParticle>d__8::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CIEParticleU3Ed__8_System_Collections_IEnumerator_get_Current_m0D755697AF016C73674B137AE434AF2B4C63A0CC (U3CIEParticleU3Ed__8_t54ED5BF1EDDD916F1C4F810C587939763065BE75 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void GameManager/<IERedClick>d__15::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIERedClickU3Ed__15__ctor_mA5AC65DBEDF567A3A62055212A9C9098C179E767 (U3CIERedClickU3Ed__15_t39C16927867235CEE0E53A7E9E893AF4BC5C30CC * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void GameManager/<IERedClick>d__15::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIERedClickU3Ed__15_System_IDisposable_Dispose_mF7872B33BC7040461DDF2366137CB92F57BCCE67 (U3CIERedClickU3Ed__15_t39C16927867235CEE0E53A7E9E893AF4BC5C30CC * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean GameManager/<IERedClick>d__15::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CIERedClickU3Ed__15_MoveNext_m77AFAF20D7B1C11FEFD11455C6C94B1899034FDA (U3CIERedClickU3Ed__15_t39C16927867235CEE0E53A7E9E893AF4BC5C30CC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_004f;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Color cam = Camera.main.backgroundColor;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_3;
		L_3 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		NullCheck(L_3);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_4;
		L_4 = Camera_get_backgroundColor_m556B0BCFA01DC59AA6A3A4B27C9408C72C144FB5(L_3, /*hidden argument*/NULL);
		__this->set_U3CcamU3E5__2_2(L_4);
		// Camera.main.backgroundColor = Color.red;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_5;
		L_5 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_6;
		L_6 = Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8(/*hidden argument*/NULL);
		NullCheck(L_5);
		Camera_set_backgroundColor_m7083574094F4031F3289444E1AF4CBC4FEDACFCF(L_5, L_6, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(0.1f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_7 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_7, (0.100000001f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_7);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_004f:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Camera.main.backgroundColor = cam;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_8;
		L_8 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_9 = __this->get_U3CcamU3E5__2_2();
		NullCheck(L_8);
		Camera_set_backgroundColor_m7083574094F4031F3289444E1AF4CBC4FEDACFCF(L_8, L_9, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object GameManager/<IERedClick>d__15::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CIERedClickU3Ed__15_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m487B2DA075B4B6E8D6CAFFD605F81B0D8478DAA4 (U3CIERedClickU3Ed__15_t39C16927867235CEE0E53A7E9E893AF4BC5C30CC * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void GameManager/<IERedClick>d__15::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIERedClickU3Ed__15_System_Collections_IEnumerator_Reset_m2DF44075EE8F7E9D9A246652531898C375FEBD5B (U3CIERedClickU3Ed__15_t39C16927867235CEE0E53A7E9E893AF4BC5C30CC * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CIERedClickU3Ed__15_System_Collections_IEnumerator_Reset_m2DF44075EE8F7E9D9A246652531898C375FEBD5B_RuntimeMethod_var)));
	}
}
// System.Object GameManager/<IERedClick>d__15::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CIERedClickU3Ed__15_System_Collections_IEnumerator_get_Current_m5FBADDA6620110840362CAFB58B5680B0F306941 (U3CIERedClickU3Ed__15_t39C16927867235CEE0E53A7E9E893AF4BC5C30CC * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_AddScore_t6CCDF1C1798D8FC840CEE8131D0736E72DCD3F54 (AddScore_t6CCDF1C1798D8FC840CEE8131D0736E72DCD3F54 * __this, int32_t ___score0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___score0);

}
// System.Void Input_Controller/AddScore::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddScore__ctor_m307423FC37B077184AA246238A091DBA1E5A6532 (AddScore_t6CCDF1C1798D8FC840CEE8131D0736E72DCD3F54 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Input_Controller/AddScore::Invoke(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddScore_Invoke_mA4E2C8A26EFBCFE88BA7056364FEE1AC464207FC (AddScore_t6CCDF1C1798D8FC840CEE8131D0736E72DCD3F54 * __this, int32_t ___score0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
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
				typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___score0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___score0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___score0);
					else
						GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___score0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___score0);
					else
						VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___score0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___score0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Input_Controller/AddScore::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AddScore_BeginInvoke_m5630173FB78EF899AD40FFA4DACB594BE8D66D79 (AddScore_t6CCDF1C1798D8FC840CEE8131D0736E72DCD3F54 * __this, int32_t ___score0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___score0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void Input_Controller/AddScore::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddScore_EndInvoke_m94403954F9BF4A2AF5737692D4E12C09183CD21F (AddScore_t6CCDF1C1798D8FC840CEE8131D0736E72DCD3F54 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_NewClick_tDB762DAD633CA00A4042E3710A098418E9BD8973 (NewClick_tDB762DAD633CA00A4042E3710A098418E9BD8973 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void Input_Controller/NewClick::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewClick__ctor_m641F2C05B9C57F7A76FF4ED236FCE1CB09CF41D6 (NewClick_tDB762DAD633CA00A4042E3710A098418E9BD8973 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Input_Controller/NewClick::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewClick_Invoke_mC76440263DEA464936C851BA76563CC67514824F (NewClick_tDB762DAD633CA00A4042E3710A098418E9BD8973 * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
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
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Input_Controller/NewClick::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NewClick_BeginInvoke_mDFB1876239B19A06464B98BEFF6824DB02AB2C44 (NewClick_tDB762DAD633CA00A4042E3710A098418E9BD8973 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void Input_Controller/NewClick::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewClick_EndInvoke_m01C7F1301D3A06F6A54D08FFB44F6D2E666BF80B (NewClick_tDB762DAD633CA00A4042E3710A098418E9BD8973 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_NewObject_t28C704DF17CCD973CE803B613A0BF41B850975D7 (NewObject_t28C704DF17CCD973CE803B613A0BF41B850975D7 * __this, String_t* ___type0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___pos1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___type0' to native representation
	char* ____type0_marshaled = NULL;
	____type0_marshaled = il2cpp_codegen_marshal_string(___type0);

	// Native function invocation
	il2cppPInvokeFunc(____type0_marshaled, ___pos1);

	// Marshaling cleanup of parameter '___type0' native representation
	il2cpp_codegen_marshal_free(____type0_marshaled);
	____type0_marshaled = NULL;

}
// System.Void Input_Controller/NewObject::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewObject__ctor_m0246AD3FFACCE49B916726A96CA26A7BFD9267F8 (NewObject_t28C704DF17CCD973CE803B613A0BF41B850975D7 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Input_Controller/NewObject::Invoke(System.String,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewObject_Invoke_m5A2132D5F6C2DDE308D24D0DFD432358180DE4B6 (NewObject_t28C704DF17CCD973CE803B613A0BF41B850975D7 * __this, String_t* ___type0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___pos1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
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
				typedef void (*FunctionPointerType) (String_t*, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___type0, ___pos1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___type0, ___pos1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  >::Invoke(targetMethod, ___type0, ___pos1);
					else
						GenericVirtActionInvoker1< Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  >::Invoke(targetMethod, ___type0, ___pos1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___type0, ___pos1);
					else
						VirtActionInvoker1< Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___type0, ___pos1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___type0, ___pos1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< String_t*, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  >::Invoke(targetMethod, targetThis, ___type0, ___pos1);
					else
						GenericVirtActionInvoker2< String_t*, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  >::Invoke(targetMethod, targetThis, ___type0, ___pos1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< String_t*, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___type0, ___pos1);
					else
						VirtActionInvoker2< String_t*, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___type0, ___pos1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___type0, ___pos1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___type0, ___pos1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Input_Controller/NewObject::BeginInvoke(System.String,UnityEngine.Vector2,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NewObject_BeginInvoke_m073C0358D36768A866438EE988BA7CA421D4DABC (NewObject_t28C704DF17CCD973CE803B613A0BF41B850975D7 * __this, String_t* ___type0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___pos1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___type0;
	__d_args[1] = Box(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var, &___pos1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void Input_Controller/NewObject::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewObject_EndInvoke_m42BAC1ED0E1FAA2E2A0590D5686D590778ED1FE0 (NewObject_t28C704DF17CCD973CE803B613A0BF41B850975D7 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_RedSquareClick_tEBC1A12E2AB8B55D740B1F592F6915869CA64849 (RedSquareClick_tEBC1A12E2AB8B55D740B1F592F6915869CA64849 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void Input_Controller/RedSquareClick::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RedSquareClick__ctor_m858DF8E2FA8C5430DBCDDF2A7E8279D05038FF9C (RedSquareClick_tEBC1A12E2AB8B55D740B1F592F6915869CA64849 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Input_Controller/RedSquareClick::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RedSquareClick_Invoke_mC512D76DA3C9A9988FF3BAD5575B75823C431F62 (RedSquareClick_tEBC1A12E2AB8B55D740B1F592F6915869CA64849 * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
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
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Input_Controller/RedSquareClick::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RedSquareClick_BeginInvoke_mCF0090F024BC8D5563C36FE4D3B872DD506A0570 (RedSquareClick_tEBC1A12E2AB8B55D740B1F592F6915869CA64849 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void Input_Controller/RedSquareClick::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RedSquareClick_EndInvoke_mF9AB692205AB5818193281F5B1EEB36887F84D87 (RedSquareClick_tEBC1A12E2AB8B55D740B1F592F6915869CA64849 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ObjectsAction/<IEChangeColor>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIEChangeColorU3Ed__13__ctor_m9C60C21156E51F05BF5F78DA0CA17D21CC115049 (U3CIEChangeColorU3Ed__13_t38ADE1FE36665E337FEBB881CF4E8F0B5F1CFD33 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void ObjectsAction/<IEChangeColor>d__13::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIEChangeColorU3Ed__13_System_IDisposable_Dispose_mDC5C1D0448AB5A64338DD69D3DC7DDC5D3DE1E05 (U3CIEChangeColorU3Ed__13_t38ADE1FE36665E337FEBB881CF4E8F0B5F1CFD33 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean ObjectsAction/<IEChangeColor>d__13::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CIEChangeColorU3Ed__13_MoveNext_mD3E3CEE8092922BACFFDE0BB0A967C7E93B2D16F (U3CIEChangeColorU3Ed__13_t38ADE1FE36665E337FEBB881CF4E8F0B5F1CFD33 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectsAction_t668DFE63CC9554E54C19DB31DC03D23CE82B8D33_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ObjectsAction_t668DFE63CC9554E54C19DB31DC03D23CE82B8D33 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		ObjectsAction_t668DFE63CC9554E54C19DB31DC03D23CE82B8D33 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0079;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// float currTime = 0f;
		__this->set_U3CcurrTimeU3E5__2_5((0.0f));
	}

IL_0029:
	{
		// _render.color = Color32.Lerp (_original_Color, newColor, currTime/time);
		ObjectsAction_t668DFE63CC9554E54C19DB31DC03D23CE82B8D33 * L_4 = V_1;
		NullCheck(L_4);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_5 = L_4->get__render_6();
		ObjectsAction_t668DFE63CC9554E54C19DB31DC03D23CE82B8D33 * L_6 = V_1;
		NullCheck(L_6);
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_7 = L_6->get__original_Color_5();
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_8 = __this->get_newColor_3();
		float L_9 = __this->get_U3CcurrTimeU3E5__2_5();
		float L_10 = __this->get_time_4();
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_11;
		L_11 = Color32_Lerp_m15C150E00B311BD21CFA7660595C42574AA07269(L_7, L_8, ((float)((float)L_9/(float)L_10)), /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_12;
		L_12 = Color32_op_Implicit_m63F14F1A14B1A9A3EE4D154413EE229D3E001623(L_11, /*hidden argument*/NULL);
		NullCheck(L_5);
		SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33(L_5, L_12, /*hidden argument*/NULL);
		// currTime += Time.deltaTime;
		float L_13 = __this->get_U3CcurrTimeU3E5__2_5();
		float L_14;
		L_14 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_U3CcurrTimeU3E5__2_5(((float)il2cpp_codegen_add((float)L_13, (float)L_14)));
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0079:
	{
		__this->set_U3CU3E1__state_0((-1));
		// while (currTime<=time);
		float L_15 = __this->get_U3CcurrTimeU3E5__2_5();
		float L_16 = __this->get_time_4();
		if ((((float)L_15) <= ((float)L_16)))
		{
			goto IL_0029;
		}
	}
	{
		// newParticle(transform.localPosition);
		NewParticle_t1840D95AF8535546BD2A321DEC91EBEEF4F771A3 * L_17 = ((ObjectsAction_t668DFE63CC9554E54C19DB31DC03D23CE82B8D33_StaticFields*)il2cpp_codegen_static_fields_for(ObjectsAction_t668DFE63CC9554E54C19DB31DC03D23CE82B8D33_il2cpp_TypeInfo_var))->get_newParticle_9();
		ObjectsAction_t668DFE63CC9554E54C19DB31DC03D23CE82B8D33 * L_18 = V_1;
		NullCheck(L_18);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19;
		L_19 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_19, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_21;
		L_21 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_20, /*hidden argument*/NULL);
		NullCheck(L_17);
		NewParticle_Invoke_m3FC198EBA9ECF439899BECB35E846F7B01C0A04B(L_17, L_21, /*hidden argument*/NULL);
		// Destroy(gameObject);
		ObjectsAction_t668DFE63CC9554E54C19DB31DC03D23CE82B8D33 * L_22 = V_1;
		NullCheck(L_22);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23;
		L_23 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_22, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_23, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object ObjectsAction/<IEChangeColor>d__13::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CIEChangeColorU3Ed__13_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m9BF0539B20111BE0EE217F4812A79A3BE56191C7 (U3CIEChangeColorU3Ed__13_t38ADE1FE36665E337FEBB881CF4E8F0B5F1CFD33 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void ObjectsAction/<IEChangeColor>d__13::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIEChangeColorU3Ed__13_System_Collections_IEnumerator_Reset_m5B073C7F21D0FD3B8F7BD395FACD065D155F9E5C (U3CIEChangeColorU3Ed__13_t38ADE1FE36665E337FEBB881CF4E8F0B5F1CFD33 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CIEChangeColorU3Ed__13_System_Collections_IEnumerator_Reset_m5B073C7F21D0FD3B8F7BD395FACD065D155F9E5C_RuntimeMethod_var)));
	}
}
// System.Object ObjectsAction/<IEChangeColor>d__13::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CIEChangeColorU3Ed__13_System_Collections_IEnumerator_get_Current_mC10E4F78643F796751EE6377E9BA0D7247AEC801 (U3CIEChangeColorU3Ed__13_t38ADE1FE36665E337FEBB881CF4E8F0B5F1CFD33 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void ObjectsAction/<IEMove_Sin>d__14::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIEMove_SinU3Ed__14__ctor_m684D27E0F2B5670ABD9374C9E66448985EB3FE66 (U3CIEMove_SinU3Ed__14_tCBB7D1CDDB49BC6DE6E562E1C751C6D05930BA56 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void ObjectsAction/<IEMove_Sin>d__14::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIEMove_SinU3Ed__14_System_IDisposable_Dispose_m6CA27D38A14AE3834DBBE8FD386B2687D06C4795 (U3CIEMove_SinU3Ed__14_tCBB7D1CDDB49BC6DE6E562E1C751C6D05930BA56 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean ObjectsAction/<IEMove_Sin>d__14::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CIEMove_SinU3Ed__14_MoveNext_m0A7472593ED7958F7E525B5163AAF106CB20116E (U3CIEMove_SinU3Ed__14_tCBB7D1CDDB49BC6DE6E562E1C751C6D05930BA56 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectsAction_t668DFE63CC9554E54C19DB31DC03D23CE82B8D33_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ObjectsAction_t668DFE63CC9554E54C19DB31DC03D23CE82B8D33 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		ObjectsAction_t668DFE63CC9554E54C19DB31DC03D23CE82B8D33 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0107;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Vector2 pos = _transform.position;
		ObjectsAction_t668DFE63CC9554E54C19DB31DC03D23CE82B8D33 * L_4 = V_1;
		NullCheck(L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = L_4->get__transform_7();
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_5, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7;
		L_7 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_6, /*hidden argument*/NULL);
		__this->set_U3CposU3E5__2_3(L_7);
		// float startY = pos.y;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_8 = __this->get_address_of_U3CposU3E5__2_3();
		float L_9 = L_8->get_y_1();
		__this->set_U3CstartYU3E5__3_4(L_9);
		// float currTime = 0;
		__this->set_U3CcurrTimeU3E5__4_5((0.0f));
		// float speed = Random.Range(0.5f, 1.5f);
		float L_10;
		L_10 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((0.5f), (1.5f), /*hidden argument*/NULL);
		__this->set_U3CspeedU3E5__5_6(L_10);
		// float h = Random.Range(1f, 2.5f);
		float L_11;
		L_11 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((1.0f), (2.5f), /*hidden argument*/NULL);
		__this->set_U3ChU3E5__6_7(L_11);
	}

IL_007d:
	{
		// pos.x = _transform.position.x + Time.deltaTime * speed;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_12 = __this->get_address_of_U3CposU3E5__2_3();
		ObjectsAction_t668DFE63CC9554E54C19DB31DC03D23CE82B8D33 * L_13 = V_1;
		NullCheck(L_13);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14 = L_13->get__transform_7();
		NullCheck(L_14);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_14, /*hidden argument*/NULL);
		float L_16 = L_15.get_x_2();
		float L_17;
		L_17 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_18 = __this->get_U3CspeedU3E5__5_6();
		L_12->set_x_0(((float)il2cpp_codegen_add((float)L_16, (float)((float)il2cpp_codegen_multiply((float)L_17, (float)L_18)))));
		// pos.y = startY + Mathf.PingPong(currTime * speed, h) ;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_19 = __this->get_address_of_U3CposU3E5__2_3();
		float L_20 = __this->get_U3CstartYU3E5__3_4();
		float L_21 = __this->get_U3CcurrTimeU3E5__4_5();
		float L_22 = __this->get_U3CspeedU3E5__5_6();
		float L_23 = __this->get_U3ChU3E5__6_7();
		float L_24;
		L_24 = Mathf_PingPong_m60A376FCA7185AA90B41A22379058923565193D1(((float)il2cpp_codegen_multiply((float)L_21, (float)L_22)), L_23, /*hidden argument*/NULL);
		L_19->set_y_1(((float)il2cpp_codegen_add((float)L_20, (float)L_24)));
		// currTime += Time.deltaTime;
		float L_25 = __this->get_U3CcurrTimeU3E5__4_5();
		float L_26;
		L_26 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_U3CcurrTimeU3E5__4_5(((float)il2cpp_codegen_add((float)L_25, (float)L_26)));
		// _transform.position = pos;
		ObjectsAction_t668DFE63CC9554E54C19DB31DC03D23CE82B8D33 * L_27 = V_1;
		NullCheck(L_27);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_28 = L_27->get__transform_7();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_29 = __this->get_U3CposU3E5__2_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30;
		L_30 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_29, /*hidden argument*/NULL);
		NullCheck(L_28);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_28, L_30, /*hidden argument*/NULL);
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0107:
	{
		__this->set_U3CU3E1__state_0((-1));
		// while (pos.x < 11);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_31 = __this->get_address_of_U3CposU3E5__2_3();
		float L_32 = L_31->get_x_0();
		if ((((float)L_32) < ((float)(11.0f))))
		{
			goto IL_007d;
		}
	}
	{
		// newObject();
		NewObject_t359FF587F948422E04E8E8B369B09011BBAAA765 * L_33 = ((ObjectsAction_t668DFE63CC9554E54C19DB31DC03D23CE82B8D33_StaticFields*)il2cpp_codegen_static_fields_for(ObjectsAction_t668DFE63CC9554E54C19DB31DC03D23CE82B8D33_il2cpp_TypeInfo_var))->get_newObject_8();
		NullCheck(L_33);
		NewObject_Invoke_m33E7AD5138FFADF1AB3843DFA48EC8A0ECFF2A0B(L_33, /*hidden argument*/NULL);
		// Destroy(gameObject);
		ObjectsAction_t668DFE63CC9554E54C19DB31DC03D23CE82B8D33 * L_34 = V_1;
		NullCheck(L_34);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_35;
		L_35 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_34, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_35, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object ObjectsAction/<IEMove_Sin>d__14::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CIEMove_SinU3Ed__14_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mAD39E9C8FC5DEC416A8AA85DD4119D639154074E (U3CIEMove_SinU3Ed__14_tCBB7D1CDDB49BC6DE6E562E1C751C6D05930BA56 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void ObjectsAction/<IEMove_Sin>d__14::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIEMove_SinU3Ed__14_System_Collections_IEnumerator_Reset_m35431876DF14455A8EAB35C65B3C5DE6C3B15DE9 (U3CIEMove_SinU3Ed__14_tCBB7D1CDDB49BC6DE6E562E1C751C6D05930BA56 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CIEMove_SinU3Ed__14_System_Collections_IEnumerator_Reset_m35431876DF14455A8EAB35C65B3C5DE6C3B15DE9_RuntimeMethod_var)));
	}
}
// System.Object ObjectsAction/<IEMove_Sin>d__14::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CIEMove_SinU3Ed__14_System_Collections_IEnumerator_get_Current_m6A4B45268EB29F07B6923BC4F73190693C4A1642 (U3CIEMove_SinU3Ed__14_tCBB7D1CDDB49BC6DE6E562E1C751C6D05930BA56 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_NewObject_t359FF587F948422E04E8E8B369B09011BBAAA765 (NewObject_t359FF587F948422E04E8E8B369B09011BBAAA765 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void ObjectsAction/NewObject::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewObject__ctor_m428BA1AEB357600CBD60DB5AACCDDAC4B6CA5637 (NewObject_t359FF587F948422E04E8E8B369B09011BBAAA765 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void ObjectsAction/NewObject::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewObject_Invoke_m33E7AD5138FFADF1AB3843DFA48EC8A0ECFF2A0B (NewObject_t359FF587F948422E04E8E8B369B09011BBAAA765 * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
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
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult ObjectsAction/NewObject::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NewObject_BeginInvoke_mB9C429376988B5466E387353CBE154BEBE453448 (NewObject_t359FF587F948422E04E8E8B369B09011BBAAA765 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void ObjectsAction/NewObject::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewObject_EndInvoke_m005032354028FEBD6AC7030DE2342D71FD9A56C8 (NewObject_t359FF587F948422E04E8E8B369B09011BBAAA765 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_NewParticle_t1840D95AF8535546BD2A321DEC91EBEEF4F771A3 (NewParticle_t1840D95AF8535546BD2A321DEC91EBEEF4F771A3 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___pos0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___pos0);

}
// System.Void ObjectsAction/NewParticle::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewParticle__ctor_m29DF9CBFBB832FE86740EFABFA663B0384AD273E (NewParticle_t1840D95AF8535546BD2A321DEC91EBEEF4F771A3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void ObjectsAction/NewParticle::Invoke(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewParticle_Invoke_m3FC198EBA9ECF439899BECB35E846F7B01C0A04B (NewParticle_t1840D95AF8535546BD2A321DEC91EBEEF4F771A3 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___pos0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
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
				typedef void (*FunctionPointerType) (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___pos0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___pos0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  >::Invoke(targetMethod, targetThis, ___pos0);
					else
						GenericVirtActionInvoker1< Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  >::Invoke(targetMethod, targetThis, ___pos0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___pos0);
					else
						VirtActionInvoker1< Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___pos0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___pos0) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___pos0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult ObjectsAction/NewParticle::BeginInvoke(UnityEngine.Vector2,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NewParticle_BeginInvoke_m7E5E11D89EABF4DB8C99D102C2F5493B0C163F1D (NewParticle_t1840D95AF8535546BD2A321DEC91EBEEF4F771A3 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___pos0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var, &___pos0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void ObjectsAction/NewParticle::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewParticle_EndInvoke_mCD8AD1DE386C16F5EFD393D9C4E6E53A53CA6AD4 (NewParticle_t1840D95AF8535546BD2A321DEC91EBEEF4F771A3 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UI_Controller/<IETapScreen>d__15::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIETapScreenU3Ed__15__ctor_m8619E181F8752E501783571686AD8EA558EE48C0 (U3CIETapScreenU3Ed__15_t95AE3D63C29DFB96DA9BD4DE66729A1377AFF69C * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void UI_Controller/<IETapScreen>d__15::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIETapScreenU3Ed__15_System_IDisposable_Dispose_mFB055C295A173FC4F5BF8FAB8F8507EDE571B720 (U3CIETapScreenU3Ed__15_t95AE3D63C29DFB96DA9BD4DE66729A1377AFF69C * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean UI_Controller/<IETapScreen>d__15::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CIETapScreenU3Ed__15_MoveNext_mF05045A6D8581F1D93B8390520CB3982C27FC24A (U3CIETapScreenU3Ed__15_t95AE3D63C29DFB96DA9BD4DE66729A1377AFF69C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UI_Controller_tDBF7405F996ACBB79E9E676481F556F2BD90D698_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	UI_Controller_tDBF7405F996ACBB79E9E676481F556F2BD90D698 * V_1 = NULL;
	U3CIETapScreenU3Ed__15_t95AE3D63C29DFB96DA9BD4DE66729A1377AFF69C * G_B5_0 = NULL;
	U3CIETapScreenU3Ed__15_t95AE3D63C29DFB96DA9BD4DE66729A1377AFF69C * G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	U3CIETapScreenU3Ed__15_t95AE3D63C29DFB96DA9BD4DE66729A1377AFF69C * G_B6_1 = NULL;
	U3CIETapScreenU3Ed__15_t95AE3D63C29DFB96DA9BD4DE66729A1377AFF69C * G_B8_0 = NULL;
	U3CIETapScreenU3Ed__15_t95AE3D63C29DFB96DA9BD4DE66729A1377AFF69C * G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	U3CIETapScreenU3Ed__15_t95AE3D63C29DFB96DA9BD4DE66729A1377AFF69C * G_B9_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		UI_Controller_tDBF7405F996ACBB79E9E676481F556F2BD90D698 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0116;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// float currTime = 0f;
		__this->set_U3CcurrTimeU3E5__2_4((0.0f));
		// byte a = (byte) (!_startgame ? 255:0);
		UI_Controller_tDBF7405F996ACBB79E9E676481F556F2BD90D698 * L_4 = V_1;
		NullCheck(L_4);
		bool L_5 = L_4->get__startgame_7();
		G_B4_0 = __this;
		if (!L_5)
		{
			G_B5_0 = __this;
			goto IL_0038;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		goto IL_003d;
	}

IL_0038:
	{
		G_B6_0 = ((int32_t)255);
		G_B6_1 = G_B5_0;
	}

IL_003d:
	{
		NullCheck(G_B6_1);
		G_B6_1->set_U3CaU3E5__3_5((uint8_t)((int32_t)((uint8_t)G_B6_0)));
		// byte b = (byte) (_startgame ? 255:0);
		UI_Controller_tDBF7405F996ACBB79E9E676481F556F2BD90D698 * L_6 = V_1;
		NullCheck(L_6);
		bool L_7 = L_6->get__startgame_7();
		G_B7_0 = __this;
		if (L_7)
		{
			G_B8_0 = __this;
			goto IL_004f;
		}
	}
	{
		G_B9_0 = 0;
		G_B9_1 = G_B7_0;
		goto IL_0054;
	}

IL_004f:
	{
		G_B9_0 = ((int32_t)255);
		G_B9_1 = G_B8_0;
	}

IL_0054:
	{
		NullCheck(G_B9_1);
		G_B9_1->set_U3CbU3E5__4_6((uint8_t)((int32_t)((uint8_t)G_B9_0)));
		// _raycast.raycastTarget = false;
		UI_Controller_tDBF7405F996ACBB79E9E676481F556F2BD90D698 * L_8 = V_1;
		NullCheck(L_8);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_9 = L_8->get__raycast_6();
		NullCheck(L_9);
		VirtActionInvoker1< bool >::Invoke(25 /* System.Void UnityEngine.UI.Graphic::set_raycastTarget(System.Boolean) */, L_9, (bool)0);
		// if (_startgame) endGame();
		UI_Controller_tDBF7405F996ACBB79E9E676481F556F2BD90D698 * L_10 = V_1;
		NullCheck(L_10);
		bool L_11 = L_10->get__startgame_7();
		if (!L_11)
		{
			goto IL_0078;
		}
	}
	{
		// if (_startgame) endGame();
		EndGame_tB409D77BF756F5ECB6C874B3D78FBDCE33AE4665 * L_12 = ((UI_Controller_tDBF7405F996ACBB79E9E676481F556F2BD90D698_StaticFields*)il2cpp_codegen_static_fields_for(UI_Controller_tDBF7405F996ACBB79E9E676481F556F2BD90D698_il2cpp_TypeInfo_var))->get_endGame_10();
		NullCheck(L_12);
		EndGame_Invoke_mC7B0B6AD8F6EF118D0402DED00B5F206600B5427(L_12, /*hidden argument*/NULL);
	}

IL_0078:
	{
		// _startText.color = Color32.Lerp (new Color32(0,0,0,a), new Color32(0,0,0,b), currTime/time);
		UI_Controller_tDBF7405F996ACBB79E9E676481F556F2BD90D698 * L_13 = V_1;
		NullCheck(L_13);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_14 = L_13->get__startText_4();
		uint8_t L_15 = __this->get_U3CaU3E5__3_5();
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_16;
		memset((&L_16), 0, sizeof(L_16));
		Color32__ctor_m9D07EC69256BB7ED2784E543848DE7B8484A5C94((&L_16), (uint8_t)0, (uint8_t)0, (uint8_t)0, L_15, /*hidden argument*/NULL);
		uint8_t L_17 = __this->get_U3CbU3E5__4_6();
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_18;
		memset((&L_18), 0, sizeof(L_18));
		Color32__ctor_m9D07EC69256BB7ED2784E543848DE7B8484A5C94((&L_18), (uint8_t)0, (uint8_t)0, (uint8_t)0, L_17, /*hidden argument*/NULL);
		float L_19 = __this->get_U3CcurrTimeU3E5__2_4();
		float L_20 = __this->get_time_3();
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_21;
		L_21 = Color32_Lerp_m15C150E00B311BD21CFA7660595C42574AA07269(L_16, L_18, ((float)((float)L_19/(float)L_20)), /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_22;
		L_22 = Color32_op_Implicit_m63F14F1A14B1A9A3EE4D154413EE229D3E001623(L_21, /*hidden argument*/NULL);
		NullCheck(L_14);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_14, L_22);
		// _scoreText.color = Color32.Lerp (new Color32(0,0,0,b), new Color32(0,0,0,a), currTime/time);
		UI_Controller_tDBF7405F996ACBB79E9E676481F556F2BD90D698 * L_23 = V_1;
		NullCheck(L_23);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_24 = L_23->get__scoreText_5();
		uint8_t L_25 = __this->get_U3CbU3E5__4_6();
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_26;
		memset((&L_26), 0, sizeof(L_26));
		Color32__ctor_m9D07EC69256BB7ED2784E543848DE7B8484A5C94((&L_26), (uint8_t)0, (uint8_t)0, (uint8_t)0, L_25, /*hidden argument*/NULL);
		uint8_t L_27 = __this->get_U3CaU3E5__3_5();
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_28;
		memset((&L_28), 0, sizeof(L_28));
		Color32__ctor_m9D07EC69256BB7ED2784E543848DE7B8484A5C94((&L_28), (uint8_t)0, (uint8_t)0, (uint8_t)0, L_27, /*hidden argument*/NULL);
		float L_29 = __this->get_U3CcurrTimeU3E5__2_4();
		float L_30 = __this->get_time_3();
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_31;
		L_31 = Color32_Lerp_m15C150E00B311BD21CFA7660595C42574AA07269(L_26, L_28, ((float)((float)L_29/(float)L_30)), /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_32;
		L_32 = Color32_op_Implicit_m63F14F1A14B1A9A3EE4D154413EE229D3E001623(L_31, /*hidden argument*/NULL);
		NullCheck(L_24);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_24, L_32);
		// currTime += Time.deltaTime;
		float L_33 = __this->get_U3CcurrTimeU3E5__2_4();
		float L_34;
		L_34 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_U3CcurrTimeU3E5__2_4(((float)il2cpp_codegen_add((float)L_33, (float)L_34)));
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0116:
	{
		__this->set_U3CU3E1__state_0((-1));
		// while (currTime<=time);
		float L_35 = __this->get_U3CcurrTimeU3E5__2_4();
		float L_36 = __this->get_time_3();
		if ((((float)L_35) <= ((float)L_36)))
		{
			goto IL_0078;
		}
	}
	{
		// _startgame = !_startgame;
		UI_Controller_tDBF7405F996ACBB79E9E676481F556F2BD90D698 * L_37 = V_1;
		UI_Controller_tDBF7405F996ACBB79E9E676481F556F2BD90D698 * L_38 = V_1;
		NullCheck(L_38);
		bool L_39 = L_38->get__startgame_7();
		NullCheck(L_37);
		L_37->set__startgame_7((bool)((((int32_t)L_39) == ((int32_t)0))? 1 : 0));
		// if (_startgame)
		UI_Controller_tDBF7405F996ACBB79E9E676481F556F2BD90D698 * L_40 = V_1;
		NullCheck(L_40);
		bool L_41 = L_40->get__startgame_7();
		if (!L_41)
		{
			goto IL_015c;
		}
	}
	{
		// _noClickTimer = 15;
		UI_Controller_tDBF7405F996ACBB79E9E676481F556F2BD90D698 * L_42 = V_1;
		NullCheck(L_42);
		L_42->set__noClickTimer_8((15.0f));
		// newgame();
		NewGame_tEA2DAB9633B74B56DEB5439CC3AACA1E4B7BBD2C * L_43 = ((UI_Controller_tDBF7405F996ACBB79E9E676481F556F2BD90D698_StaticFields*)il2cpp_codegen_static_fields_for(UI_Controller_tDBF7405F996ACBB79E9E676481F556F2BD90D698_il2cpp_TypeInfo_var))->get_newgame_9();
		NullCheck(L_43);
		NewGame_Invoke_m129BA2701E617757358171034211BCACB33A962A(L_43, /*hidden argument*/NULL);
		// } else
		goto IL_0178;
	}

IL_015c:
	{
		// _scoreText.text = "0";
		UI_Controller_tDBF7405F996ACBB79E9E676481F556F2BD90D698 * L_44 = V_1;
		NullCheck(L_44);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_45 = L_44->get__scoreText_5();
		NullCheck(L_45);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_45, _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		// _raycast.raycastTarget = true;
		UI_Controller_tDBF7405F996ACBB79E9E676481F556F2BD90D698 * L_46 = V_1;
		NullCheck(L_46);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_47 = L_46->get__raycast_6();
		NullCheck(L_47);
		VirtActionInvoker1< bool >::Invoke(25 /* System.Void UnityEngine.UI.Graphic::set_raycastTarget(System.Boolean) */, L_47, (bool)1);
	}

IL_0178:
	{
		// }
		return (bool)0;
	}
}
// System.Object UI_Controller/<IETapScreen>d__15::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CIETapScreenU3Ed__15_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mB4B731DC0FFD323861200A960E65E871BFE59AF8 (U3CIETapScreenU3Ed__15_t95AE3D63C29DFB96DA9BD4DE66729A1377AFF69C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void UI_Controller/<IETapScreen>d__15::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIETapScreenU3Ed__15_System_Collections_IEnumerator_Reset_m0322FBF2F820A766B15E501A0711983488AB4CD8 (U3CIETapScreenU3Ed__15_t95AE3D63C29DFB96DA9BD4DE66729A1377AFF69C * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CIETapScreenU3Ed__15_System_Collections_IEnumerator_Reset_m0322FBF2F820A766B15E501A0711983488AB4CD8_RuntimeMethod_var)));
	}
}
// System.Object UI_Controller/<IETapScreen>d__15::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CIETapScreenU3Ed__15_System_Collections_IEnumerator_get_Current_mBCD787096D1264D3108381E923684C704D898D3C (U3CIETapScreenU3Ed__15_t95AE3D63C29DFB96DA9BD4DE66729A1377AFF69C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_EndGame_tB409D77BF756F5ECB6C874B3D78FBDCE33AE4665 (EndGame_tB409D77BF756F5ECB6C874B3D78FBDCE33AE4665 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void UI_Controller/EndGame::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndGame__ctor_m445CD3FA33C12E386195E33C4AE66CF6CE0816F7 (EndGame_tB409D77BF756F5ECB6C874B3D78FBDCE33AE4665 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UI_Controller/EndGame::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndGame_Invoke_mC7B0B6AD8F6EF118D0402DED00B5F206600B5427 (EndGame_tB409D77BF756F5ECB6C874B3D78FBDCE33AE4665 * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
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
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UI_Controller/EndGame::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EndGame_BeginInvoke_m305FDB73B818EAA8CB4FF4DF9C6BC544866E5F55 (EndGame_tB409D77BF756F5ECB6C874B3D78FBDCE33AE4665 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void UI_Controller/EndGame::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndGame_EndInvoke_mF6A0CAC27E96A5FE09775938BC370F94882B81E4 (EndGame_tB409D77BF756F5ECB6C874B3D78FBDCE33AE4665 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_NewGame_tEA2DAB9633B74B56DEB5439CC3AACA1E4B7BBD2C (NewGame_tEA2DAB9633B74B56DEB5439CC3AACA1E4B7BBD2C * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void UI_Controller/NewGame::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewGame__ctor_mE8E7D53B4EE587FDF5EEC1F0993FE1447E4B899B (NewGame_tEA2DAB9633B74B56DEB5439CC3AACA1E4B7BBD2C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UI_Controller/NewGame::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewGame_Invoke_m129BA2701E617757358171034211BCACB33A962A (NewGame_tEA2DAB9633B74B56DEB5439CC3AACA1E4B7BBD2C * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
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
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UI_Controller/NewGame::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NewGame_BeginInvoke_mF356274214EAAA6385E7DF8AEB7AECD0C90AEE03 (NewGame_tEA2DAB9633B74B56DEB5439CC3AACA1E4B7BBD2C * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void UI_Controller/NewGame::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewGame_EndInvoke_m08380EA1F829219F736CE7014EC9898D439D03B9 (NewGame_tEA2DAB9633B74B56DEB5439CC3AACA1E4B7BBD2C * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___v0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___v0;
		float L_3 = L_2.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___v0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___v0;
		float L_3 = L_2.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
