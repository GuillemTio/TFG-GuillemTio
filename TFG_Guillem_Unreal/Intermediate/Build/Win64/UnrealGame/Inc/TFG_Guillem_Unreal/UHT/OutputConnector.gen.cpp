// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TFG_Guillem_Unreal/Public/OutputConnector.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOutputConnector() {}

// Begin Cross Module References
TFG_GUILLEM_UNREAL_API UClass* Z_Construct_UClass_UConnector();
TFG_GUILLEM_UNREAL_API UClass* Z_Construct_UClass_UOutputConnector();
TFG_GUILLEM_UNREAL_API UClass* Z_Construct_UClass_UOutputConnector_NoRegister();
UPackage* Z_Construct_UPackage__Script_TFG_Guillem_Unreal();
// End Cross Module References

// Begin Class UOutputConnector
void UOutputConnector::StaticRegisterNativesUOutputConnector()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOutputConnector);
UClass* Z_Construct_UClass_UOutputConnector_NoRegister()
{
	return UOutputConnector::StaticClass();
}
struct Z_Construct_UClass_UOutputConnector_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OutputConnector.h" },
		{ "ModuleRelativePath", "Public/OutputConnector.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOutputConnector>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOutputConnector_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UConnector,
	(UObject* (*)())Z_Construct_UPackage__Script_TFG_Guillem_Unreal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOutputConnector_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOutputConnector_Statics::ClassParams = {
	&UOutputConnector::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOutputConnector_Statics::Class_MetaDataParams), Z_Construct_UClass_UOutputConnector_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOutputConnector()
{
	if (!Z_Registration_Info_UClass_UOutputConnector.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOutputConnector.OuterSingleton, Z_Construct_UClass_UOutputConnector_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOutputConnector.OuterSingleton;
}
template<> TFG_GUILLEM_UNREAL_API UClass* StaticClass<UOutputConnector>()
{
	return UOutputConnector::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOutputConnector);
UOutputConnector::~UOutputConnector() {}
// End Class UOutputConnector

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Guillem_Desktop_UNI_Treball_de_Fi_de_Grau_TFG_GuillemTio_TFG_GuillemTio_TFG_Guillem_Unreal_Source_TFG_Guillem_Unreal_Public_OutputConnector_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOutputConnector, UOutputConnector::StaticClass, TEXT("UOutputConnector"), &Z_Registration_Info_UClass_UOutputConnector, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOutputConnector), 2506786196U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Guillem_Desktop_UNI_Treball_de_Fi_de_Grau_TFG_GuillemTio_TFG_GuillemTio_TFG_Guillem_Unreal_Source_TFG_Guillem_Unreal_Public_OutputConnector_h_3537099895(TEXT("/Script/TFG_Guillem_Unreal"),
	Z_CompiledInDeferFile_FID_Users_Guillem_Desktop_UNI_Treball_de_Fi_de_Grau_TFG_GuillemTio_TFG_GuillemTio_TFG_Guillem_Unreal_Source_TFG_Guillem_Unreal_Public_OutputConnector_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Guillem_Desktop_UNI_Treball_de_Fi_de_Grau_TFG_GuillemTio_TFG_GuillemTio_TFG_Guillem_Unreal_Source_TFG_Guillem_Unreal_Public_OutputConnector_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
