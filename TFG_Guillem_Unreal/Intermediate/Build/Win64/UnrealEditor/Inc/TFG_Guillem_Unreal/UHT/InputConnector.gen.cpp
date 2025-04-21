// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TFG_Guillem_Unreal/Public/InputConnector.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputConnector() {}

// Begin Cross Module References
TFG_GUILLEM_UNREAL_API UClass* Z_Construct_UClass_UConnector();
TFG_GUILLEM_UNREAL_API UClass* Z_Construct_UClass_UInputConnector();
TFG_GUILLEM_UNREAL_API UClass* Z_Construct_UClass_UInputConnector_NoRegister();
UPackage* Z_Construct_UPackage__Script_TFG_Guillem_Unreal();
// End Cross Module References

// Begin Class UInputConnector
void UInputConnector::StaticRegisterNativesUInputConnector()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputConnector);
UClass* Z_Construct_UClass_UInputConnector_NoRegister()
{
	return UInputConnector::StaticClass();
}
struct Z_Construct_UClass_UInputConnector_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "InputConnector.h" },
		{ "ModuleRelativePath", "Public/InputConnector.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputConnector>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInputConnector_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UConnector,
	(UObject* (*)())Z_Construct_UPackage__Script_TFG_Guillem_Unreal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputConnector_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputConnector_Statics::ClassParams = {
	&UInputConnector::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputConnector_Statics::Class_MetaDataParams), Z_Construct_UClass_UInputConnector_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInputConnector()
{
	if (!Z_Registration_Info_UClass_UInputConnector.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputConnector.OuterSingleton, Z_Construct_UClass_UInputConnector_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInputConnector.OuterSingleton;
}
template<> TFG_GUILLEM_UNREAL_API UClass* StaticClass<UInputConnector>()
{
	return UInputConnector::StaticClass();
}
UInputConnector::UInputConnector(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInputConnector);
UInputConnector::~UInputConnector() {}
// End Class UInputConnector

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Guillem_Desktop_UNI_Treball_de_Fi_de_Grau_TFG_GuillemTio_TFG_GuillemTio_TFG_Guillem_Unreal_Source_TFG_Guillem_Unreal_Public_InputConnector_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInputConnector, UInputConnector::StaticClass, TEXT("UInputConnector"), &Z_Registration_Info_UClass_UInputConnector, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputConnector), 4135558703U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Guillem_Desktop_UNI_Treball_de_Fi_de_Grau_TFG_GuillemTio_TFG_GuillemTio_TFG_Guillem_Unreal_Source_TFG_Guillem_Unreal_Public_InputConnector_h_2202238485(TEXT("/Script/TFG_Guillem_Unreal"),
	Z_CompiledInDeferFile_FID_Users_Guillem_Desktop_UNI_Treball_de_Fi_de_Grau_TFG_GuillemTio_TFG_GuillemTio_TFG_Guillem_Unreal_Source_TFG_Guillem_Unreal_Public_InputConnector_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Guillem_Desktop_UNI_Treball_de_Fi_de_Grau_TFG_GuillemTio_TFG_GuillemTio_TFG_Guillem_Unreal_Source_TFG_Guillem_Unreal_Public_InputConnector_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
