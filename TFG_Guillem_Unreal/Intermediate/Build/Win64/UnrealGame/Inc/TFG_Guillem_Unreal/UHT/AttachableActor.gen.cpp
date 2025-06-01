// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TFG_Guillem_Unreal/Public/AttachableActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAttachableActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
TFG_GUILLEM_UNREAL_API UClass* Z_Construct_UClass_AAttachableActor();
TFG_GUILLEM_UNREAL_API UClass* Z_Construct_UClass_AAttachableActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_TFG_Guillem_Unreal();
// End Cross Module References

// Begin Class AAttachableActor Function SetPhysicsSimulation
struct Z_Construct_UFunction_AAttachableActor_SetPhysicsSimulation_Statics
{
	struct AttachableActor_eventSetPhysicsSimulation_Parms
	{
		bool isActive;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AttachableActor.h" },
	};
#endif // WITH_METADATA
	static void NewProp_isActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isActive;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AAttachableActor_SetPhysicsSimulation_Statics::NewProp_isActive_SetBit(void* Obj)
{
	((AttachableActor_eventSetPhysicsSimulation_Parms*)Obj)->isActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAttachableActor_SetPhysicsSimulation_Statics::NewProp_isActive = { "isActive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AttachableActor_eventSetPhysicsSimulation_Parms), &Z_Construct_UFunction_AAttachableActor_SetPhysicsSimulation_Statics::NewProp_isActive_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAttachableActor_SetPhysicsSimulation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAttachableActor_SetPhysicsSimulation_Statics::NewProp_isActive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAttachableActor_SetPhysicsSimulation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAttachableActor_SetPhysicsSimulation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAttachableActor, nullptr, "SetPhysicsSimulation", nullptr, nullptr, Z_Construct_UFunction_AAttachableActor_SetPhysicsSimulation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAttachableActor_SetPhysicsSimulation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAttachableActor_SetPhysicsSimulation_Statics::AttachableActor_eventSetPhysicsSimulation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAttachableActor_SetPhysicsSimulation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAttachableActor_SetPhysicsSimulation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAttachableActor_SetPhysicsSimulation_Statics::AttachableActor_eventSetPhysicsSimulation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAttachableActor_SetPhysicsSimulation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAttachableActor_SetPhysicsSimulation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAttachableActor::execSetPhysicsSimulation)
{
	P_GET_UBOOL(Z_Param_isActive);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPhysicsSimulation(Z_Param_isActive);
	P_NATIVE_END;
}
// End Class AAttachableActor Function SetPhysicsSimulation

// Begin Class AAttachableActor
void AAttachableActor::StaticRegisterNativesAAttachableActor()
{
	UClass* Class = AAttachableActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetPhysicsSimulation", &AAttachableActor::execSetPhysicsSimulation },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAttachableActor);
UClass* Z_Construct_UClass_AAttachableActor_NoRegister()
{
	return AAttachableActor::StaticClass();
}
struct Z_Construct_UClass_AAttachableActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AttachableActor.h" },
		{ "ModuleRelativePath", "Public/AttachableActor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AAttachableActor_SetPhysicsSimulation, "SetPhysicsSimulation" }, // 4077025979
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAttachableActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AAttachableActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_TFG_Guillem_Unreal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAttachableActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAttachableActor_Statics::ClassParams = {
	&AAttachableActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAttachableActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AAttachableActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAttachableActor()
{
	if (!Z_Registration_Info_UClass_AAttachableActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAttachableActor.OuterSingleton, Z_Construct_UClass_AAttachableActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAttachableActor.OuterSingleton;
}
template<> TFG_GUILLEM_UNREAL_API UClass* StaticClass<AAttachableActor>()
{
	return AAttachableActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAttachableActor);
AAttachableActor::~AAttachableActor() {}
// End Class AAttachableActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Guillem_Desktop_UNI_Treball_de_Fi_de_Grau_TFG_GuillemTio_TFG_GuillemTio_TFG_Guillem_Unreal_Source_TFG_Guillem_Unreal_Public_AttachableActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAttachableActor, AAttachableActor::StaticClass, TEXT("AAttachableActor"), &Z_Registration_Info_UClass_AAttachableActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAttachableActor), 749594481U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Guillem_Desktop_UNI_Treball_de_Fi_de_Grau_TFG_GuillemTio_TFG_GuillemTio_TFG_Guillem_Unreal_Source_TFG_Guillem_Unreal_Public_AttachableActor_h_1606805096(TEXT("/Script/TFG_Guillem_Unreal"),
	Z_CompiledInDeferFile_FID_Users_Guillem_Desktop_UNI_Treball_de_Fi_de_Grau_TFG_GuillemTio_TFG_GuillemTio_TFG_Guillem_Unreal_Source_TFG_Guillem_Unreal_Public_AttachableActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Guillem_Desktop_UNI_Treball_de_Fi_de_Grau_TFG_GuillemTio_TFG_GuillemTio_TFG_Guillem_Unreal_Source_TFG_Guillem_Unreal_Public_AttachableActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
