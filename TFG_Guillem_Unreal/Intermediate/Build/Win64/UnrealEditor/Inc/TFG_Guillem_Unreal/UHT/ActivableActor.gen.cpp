// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TFG_Guillem_Unreal/Public/ActivableActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActivableActor() {}

// Begin Cross Module References
TFG_GUILLEM_UNREAL_API UClass* Z_Construct_UClass_AActivableActor();
TFG_GUILLEM_UNREAL_API UClass* Z_Construct_UClass_AActivableActor_NoRegister();
TFG_GUILLEM_UNREAL_API UClass* Z_Construct_UClass_AAttachableActor();
UPackage* Z_Construct_UPackage__Script_TFG_Guillem_Unreal();
// End Cross Module References

// Begin Class AActivableActor Function Activate
struct Z_Construct_UFunction_AActivableActor_Activate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActivableActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActivableActor_Activate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActivableActor, nullptr, "Activate", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActivableActor_Activate_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActivableActor_Activate_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AActivableActor_Activate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActivableActor_Activate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActivableActor::execActivate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Activate();
	P_NATIVE_END;
}
// End Class AActivableActor Function Activate

// Begin Class AActivableActor Function Deactivate
struct Z_Construct_UFunction_AActivableActor_Deactivate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActivableActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActivableActor_Deactivate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActivableActor, nullptr, "Deactivate", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActivableActor_Deactivate_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActivableActor_Deactivate_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AActivableActor_Deactivate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActivableActor_Deactivate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActivableActor::execDeactivate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Deactivate();
	P_NATIVE_END;
}
// End Class AActivableActor Function Deactivate

// Begin Class AActivableActor Function ShouldActivate
struct Z_Construct_UFunction_AActivableActor_ShouldActivate_Statics
{
	struct ActivableActor_eventShouldActivate_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActivableActor.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AActivableActor_ShouldActivate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ActivableActor_eventShouldActivate_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActivableActor_ShouldActivate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ActivableActor_eventShouldActivate_Parms), &Z_Construct_UFunction_AActivableActor_ShouldActivate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActivableActor_ShouldActivate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActivableActor_ShouldActivate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActivableActor_ShouldActivate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActivableActor_ShouldActivate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActivableActor, nullptr, "ShouldActivate", nullptr, nullptr, Z_Construct_UFunction_AActivableActor_ShouldActivate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActivableActor_ShouldActivate_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActivableActor_ShouldActivate_Statics::ActivableActor_eventShouldActivate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActivableActor_ShouldActivate_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActivableActor_ShouldActivate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActivableActor_ShouldActivate_Statics::ActivableActor_eventShouldActivate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActivableActor_ShouldActivate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActivableActor_ShouldActivate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActivableActor::execShouldActivate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ShouldActivate();
	P_NATIVE_END;
}
// End Class AActivableActor Function ShouldActivate

// Begin Class AActivableActor Function ToggleActivation
struct Z_Construct_UFunction_AActivableActor_ToggleActivation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActivableActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActivableActor_ToggleActivation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActivableActor, nullptr, "ToggleActivation", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActivableActor_ToggleActivation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActivableActor_ToggleActivation_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AActivableActor_ToggleActivation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActivableActor_ToggleActivation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActivableActor::execToggleActivation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ToggleActivation();
	P_NATIVE_END;
}
// End Class AActivableActor Function ToggleActivation

// Begin Class AActivableActor
void AActivableActor::StaticRegisterNativesAActivableActor()
{
	UClass* Class = AActivableActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Activate", &AActivableActor::execActivate },
		{ "Deactivate", &AActivableActor::execDeactivate },
		{ "ShouldActivate", &AActivableActor::execShouldActivate },
		{ "ToggleActivation", &AActivableActor::execToggleActivation },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AActivableActor);
UClass* Z_Construct_UClass_AActivableActor_NoRegister()
{
	return AActivableActor::StaticClass();
}
struct Z_Construct_UClass_AActivableActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ActivableActor.h" },
		{ "ModuleRelativePath", "Public/ActivableActor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AActivableActor_Activate, "Activate" }, // 3749297781
		{ &Z_Construct_UFunction_AActivableActor_Deactivate, "Deactivate" }, // 564068049
		{ &Z_Construct_UFunction_AActivableActor_ShouldActivate, "ShouldActivate" }, // 3441923737
		{ &Z_Construct_UFunction_AActivableActor_ToggleActivation, "ToggleActivation" }, // 3176302141
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AActivableActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AActivableActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAttachableActor,
	(UObject* (*)())Z_Construct_UPackage__Script_TFG_Guillem_Unreal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AActivableActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AActivableActor_Statics::ClassParams = {
	&AActivableActor::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AActivableActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AActivableActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AActivableActor()
{
	if (!Z_Registration_Info_UClass_AActivableActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AActivableActor.OuterSingleton, Z_Construct_UClass_AActivableActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AActivableActor.OuterSingleton;
}
template<> TFG_GUILLEM_UNREAL_API UClass* StaticClass<AActivableActor>()
{
	return AActivableActor::StaticClass();
}
AActivableActor::AActivableActor() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AActivableActor);
AActivableActor::~AActivableActor() {}
// End Class AActivableActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Guillem_Desktop_UNI_Treball_de_Fi_de_Grau_TFG_GuillemTio_TFG_GuillemTio_TFG_Guillem_Unreal_Source_TFG_Guillem_Unreal_Public_ActivableActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AActivableActor, AActivableActor::StaticClass, TEXT("AActivableActor"), &Z_Registration_Info_UClass_AActivableActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AActivableActor), 2258184844U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Guillem_Desktop_UNI_Treball_de_Fi_de_Grau_TFG_GuillemTio_TFG_GuillemTio_TFG_Guillem_Unreal_Source_TFG_Guillem_Unreal_Public_ActivableActor_h_1476864012(TEXT("/Script/TFG_Guillem_Unreal"),
	Z_CompiledInDeferFile_FID_Users_Guillem_Desktop_UNI_Treball_de_Fi_de_Grau_TFG_GuillemTio_TFG_GuillemTio_TFG_Guillem_Unreal_Source_TFG_Guillem_Unreal_Public_ActivableActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Guillem_Desktop_UNI_Treball_de_Fi_de_Grau_TFG_GuillemTio_TFG_GuillemTio_TFG_Guillem_Unreal_Source_TFG_Guillem_Unreal_Public_ActivableActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
