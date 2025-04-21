// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TFG_Guillem_Unreal/Public/SpringActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpringActor() {}

// Begin Cross Module References
TFG_GUILLEM_UNREAL_API UClass* Z_Construct_UClass_AActivableActor();
TFG_GUILLEM_UNREAL_API UClass* Z_Construct_UClass_ASpringActor();
TFG_GUILLEM_UNREAL_API UClass* Z_Construct_UClass_ASpringActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_TFG_Guillem_Unreal();
// End Cross Module References

// Begin Class ASpringActor
void ASpringActor::StaticRegisterNativesASpringActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASpringActor);
UClass* Z_Construct_UClass_ASpringActor_NoRegister()
{
	return ASpringActor::StaticClass();
}
struct Z_Construct_UClass_ASpringActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "SpringActor.h" },
		{ "ModuleRelativePath", "Public/SpringActor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpringActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASpringActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActivableActor,
	(UObject* (*)())Z_Construct_UPackage__Script_TFG_Guillem_Unreal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpringActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpringActor_Statics::ClassParams = {
	&ASpringActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpringActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ASpringActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASpringActor()
{
	if (!Z_Registration_Info_UClass_ASpringActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpringActor.OuterSingleton, Z_Construct_UClass_ASpringActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASpringActor.OuterSingleton;
}
template<> TFG_GUILLEM_UNREAL_API UClass* StaticClass<ASpringActor>()
{
	return ASpringActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASpringActor);
ASpringActor::~ASpringActor() {}
// End Class ASpringActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Guillem_Desktop_UNI_Treball_de_Fi_de_Grau_TFG_GuillemTio_TFG_GuillemTio_TFG_Guillem_Unreal_Source_TFG_Guillem_Unreal_Public_SpringActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASpringActor, ASpringActor::StaticClass, TEXT("ASpringActor"), &Z_Registration_Info_UClass_ASpringActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpringActor), 1337856559U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Guillem_Desktop_UNI_Treball_de_Fi_de_Grau_TFG_GuillemTio_TFG_GuillemTio_TFG_Guillem_Unreal_Source_TFG_Guillem_Unreal_Public_SpringActor_h_1631500704(TEXT("/Script/TFG_Guillem_Unreal"),
	Z_CompiledInDeferFile_FID_Users_Guillem_Desktop_UNI_Treball_de_Fi_de_Grau_TFG_GuillemTio_TFG_GuillemTio_TFG_Guillem_Unreal_Source_TFG_Guillem_Unreal_Public_SpringActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Guillem_Desktop_UNI_Treball_de_Fi_de_Grau_TFG_GuillemTio_TFG_GuillemTio_TFG_Guillem_Unreal_Source_TFG_Guillem_Unreal_Public_SpringActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
