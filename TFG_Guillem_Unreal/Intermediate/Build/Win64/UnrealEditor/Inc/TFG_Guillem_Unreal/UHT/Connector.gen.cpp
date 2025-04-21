// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TFG_Guillem_Unreal/Public/Connector.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConnector() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
TFG_GUILLEM_UNREAL_API UClass* Z_Construct_UClass_AAttachableActor_NoRegister();
TFG_GUILLEM_UNREAL_API UClass* Z_Construct_UClass_UConnector();
TFG_GUILLEM_UNREAL_API UClass* Z_Construct_UClass_UConnector_NoRegister();
UPackage* Z_Construct_UPackage__Script_TFG_Guillem_Unreal();
// End Cross Module References

// Begin Class UConnector Function AttachTo
struct Z_Construct_UFunction_UConnector_AttachTo_Statics
{
	struct Connector_eventAttachTo_Parms
	{
		UConnector* connectorToAttach;
		FVector attachPosition;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Connector.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_connectorToAttach;
	static const UECodeGen_Private::FStructPropertyParams NewProp_attachPosition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConnector_AttachTo_Statics::NewProp_connectorToAttach = { "connectorToAttach", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Connector_eventAttachTo_Parms, connectorToAttach), Z_Construct_UClass_UConnector_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConnector_AttachTo_Statics::NewProp_attachPosition = { "attachPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Connector_eventAttachTo_Parms, attachPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConnector_AttachTo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConnector_AttachTo_Statics::NewProp_connectorToAttach,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConnector_AttachTo_Statics::NewProp_attachPosition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UConnector_AttachTo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConnector_AttachTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConnector, nullptr, "AttachTo", nullptr, nullptr, Z_Construct_UFunction_UConnector_AttachTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConnector_AttachTo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UConnector_AttachTo_Statics::Connector_eventAttachTo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UConnector_AttachTo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UConnector_AttachTo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UConnector_AttachTo_Statics::Connector_eventAttachTo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UConnector_AttachTo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConnector_AttachTo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UConnector::execAttachTo)
{
	P_GET_OBJECT(UConnector,Z_Param_connectorToAttach);
	P_GET_STRUCT(FVector,Z_Param_attachPosition);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AttachTo(Z_Param_connectorToAttach,Z_Param_attachPosition);
	P_NATIVE_END;
}
// End Class UConnector Function AttachTo

// Begin Class UConnector Function Disconnect
struct Z_Construct_UFunction_UConnector_Disconnect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Connector.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConnector_Disconnect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConnector, nullptr, "Disconnect", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UConnector_Disconnect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UConnector_Disconnect_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UConnector_Disconnect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConnector_Disconnect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UConnector::execDisconnect)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Disconnect();
	P_NATIVE_END;
}
// End Class UConnector Function Disconnect

// Begin Class UConnector Function GetPosition
struct Z_Construct_UFunction_UConnector_GetPosition_Statics
{
	struct Connector_eventGetPosition_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Connector.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConnector_GetPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Connector_eventGetPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConnector_GetPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConnector_GetPosition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UConnector_GetPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConnector_GetPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConnector, nullptr, "GetPosition", nullptr, nullptr, Z_Construct_UFunction_UConnector_GetPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConnector_GetPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UConnector_GetPosition_Statics::Connector_eventGetPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UConnector_GetPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UConnector_GetPosition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UConnector_GetPosition_Statics::Connector_eventGetPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UConnector_GetPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConnector_GetPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UConnector::execGetPosition)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetPosition();
	P_NATIVE_END;
}
// End Class UConnector Function GetPosition

// Begin Class UConnector Function IsConnected
struct Z_Construct_UFunction_UConnector_IsConnected_Statics
{
	struct Connector_eventIsConnected_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Connector.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UConnector_IsConnected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Connector_eventIsConnected_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConnector_IsConnected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Connector_eventIsConnected_Parms), &Z_Construct_UFunction_UConnector_IsConnected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConnector_IsConnected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConnector_IsConnected_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UConnector_IsConnected_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConnector_IsConnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConnector, nullptr, "IsConnected", nullptr, nullptr, Z_Construct_UFunction_UConnector_IsConnected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConnector_IsConnected_Statics::PropPointers), sizeof(Z_Construct_UFunction_UConnector_IsConnected_Statics::Connector_eventIsConnected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UConnector_IsConnected_Statics::Function_MetaDataParams), Z_Construct_UFunction_UConnector_IsConnected_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UConnector_IsConnected_Statics::Connector_eventIsConnected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UConnector_IsConnected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConnector_IsConnected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UConnector::execIsConnected)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsConnected();
	P_NATIVE_END;
}
// End Class UConnector Function IsConnected

// Begin Class UConnector
void UConnector::StaticRegisterNativesUConnector()
{
	UClass* Class = UConnector::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AttachTo", &UConnector::execAttachTo },
		{ "Disconnect", &UConnector::execDisconnect },
		{ "GetPosition", &UConnector::execGetPosition },
		{ "IsConnected", &UConnector::execIsConnected },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UConnector);
UClass* Z_Construct_UClass_UConnector_NoRegister()
{
	return UConnector::StaticClass();
}
struct Z_Construct_UClass_UConnector_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Connector.h" },
		{ "ModuleRelativePath", "Public/Connector.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_actorOwner_MetaData[] = {
		{ "Category", "Connector" },
		{ "ModuleRelativePath", "Public/Connector.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_actorOwner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UConnector_AttachTo, "AttachTo" }, // 1658321317
		{ &Z_Construct_UFunction_UConnector_Disconnect, "Disconnect" }, // 2670889049
		{ &Z_Construct_UFunction_UConnector_GetPosition, "GetPosition" }, // 2675149248
		{ &Z_Construct_UFunction_UConnector_IsConnected, "IsConnected" }, // 1311829270
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConnector>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UConnector_Statics::NewProp_actorOwner = { "actorOwner", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UConnector, actorOwner), Z_Construct_UClass_AAttachableActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_actorOwner_MetaData), NewProp_actorOwner_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UConnector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConnector_Statics::NewProp_actorOwner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UConnector_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UConnector_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_TFG_Guillem_Unreal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UConnector_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UConnector_Statics::ClassParams = {
	&UConnector::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UConnector_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UConnector_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UConnector_Statics::Class_MetaDataParams), Z_Construct_UClass_UConnector_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UConnector()
{
	if (!Z_Registration_Info_UClass_UConnector.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UConnector.OuterSingleton, Z_Construct_UClass_UConnector_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UConnector.OuterSingleton;
}
template<> TFG_GUILLEM_UNREAL_API UClass* StaticClass<UConnector>()
{
	return UConnector::StaticClass();
}
UConnector::UConnector(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UConnector);
UConnector::~UConnector() {}
// End Class UConnector

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Guillem_Desktop_UNI_Treball_de_Fi_de_Grau_TFG_GuillemTio_TFG_GuillemTio_TFG_Guillem_Unreal_Source_TFG_Guillem_Unreal_Public_Connector_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UConnector, UConnector::StaticClass, TEXT("UConnector"), &Z_Registration_Info_UClass_UConnector, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UConnector), 3778248648U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Guillem_Desktop_UNI_Treball_de_Fi_de_Grau_TFG_GuillemTio_TFG_GuillemTio_TFG_Guillem_Unreal_Source_TFG_Guillem_Unreal_Public_Connector_h_2133044272(TEXT("/Script/TFG_Guillem_Unreal"),
	Z_CompiledInDeferFile_FID_Users_Guillem_Desktop_UNI_Treball_de_Fi_de_Grau_TFG_GuillemTio_TFG_GuillemTio_TFG_Guillem_Unreal_Source_TFG_Guillem_Unreal_Public_Connector_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Guillem_Desktop_UNI_Treball_de_Fi_de_Grau_TFG_GuillemTio_TFG_GuillemTio_TFG_Guillem_Unreal_Source_TFG_Guillem_Unreal_Public_Connector_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
