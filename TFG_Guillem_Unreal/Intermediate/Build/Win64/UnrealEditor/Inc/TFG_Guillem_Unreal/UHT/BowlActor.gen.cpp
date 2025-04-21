// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TFG_Guillem_Unreal/Public/BowlActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBowlActor() {}

// Begin Cross Module References
TFG_GUILLEM_UNREAL_API UClass* Z_Construct_UClass_ABowlActor();
TFG_GUILLEM_UNREAL_API UClass* Z_Construct_UClass_ABowlActor_NoRegister();
TFG_GUILLEM_UNREAL_API UClass* Z_Construct_UClass_ANonActivableActor();
UPackage* Z_Construct_UPackage__Script_TFG_Guillem_Unreal();
// End Cross Module References

// Begin Class ABowlActor
void ABowlActor::StaticRegisterNativesABowlActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABowlActor);
UClass* Z_Construct_UClass_ABowlActor_NoRegister()
{
	return ABowlActor::StaticClass();
}
struct Z_Construct_UClass_ABowlActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BowlActor.h" },
		{ "ModuleRelativePath", "Public/BowlActor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABowlActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABowlActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ANonActivableActor,
	(UObject* (*)())Z_Construct_UPackage__Script_TFG_Guillem_Unreal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABowlActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABowlActor_Statics::ClassParams = {
	&ABowlActor::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABowlActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ABowlActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABowlActor()
{
	if (!Z_Registration_Info_UClass_ABowlActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABowlActor.OuterSingleton, Z_Construct_UClass_ABowlActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABowlActor.OuterSingleton;
}
template<> TFG_GUILLEM_UNREAL_API UClass* StaticClass<ABowlActor>()
{
	return ABowlActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABowlActor);
ABowlActor::~ABowlActor() {}
// End Class ABowlActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Guillem_Desktop_UNI_Treball_de_Fi_de_Grau_TFG_GuillemTio_TFG_GuillemTio_TFG_Guillem_Unreal_Source_TFG_Guillem_Unreal_Public_BowlActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABowlActor, ABowlActor::StaticClass, TEXT("ABowlActor"), &Z_Registration_Info_UClass_ABowlActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABowlActor), 3366519524U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Guillem_Desktop_UNI_Treball_de_Fi_de_Grau_TFG_GuillemTio_TFG_GuillemTio_TFG_Guillem_Unreal_Source_TFG_Guillem_Unreal_Public_BowlActor_h_2996684658(TEXT("/Script/TFG_Guillem_Unreal"),
	Z_CompiledInDeferFile_FID_Users_Guillem_Desktop_UNI_Treball_de_Fi_de_Grau_TFG_GuillemTio_TFG_GuillemTio_TFG_Guillem_Unreal_Source_TFG_Guillem_Unreal_Public_BowlActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Guillem_Desktop_UNI_Treball_de_Fi_de_Grau_TFG_GuillemTio_TFG_GuillemTio_TFG_Guillem_Unreal_Source_TFG_Guillem_Unreal_Public_BowlActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
