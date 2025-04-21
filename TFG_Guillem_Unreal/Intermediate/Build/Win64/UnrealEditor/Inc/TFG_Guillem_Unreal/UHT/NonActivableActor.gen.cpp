// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TFG_Guillem_Unreal/Public/NonActivableActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNonActivableActor() {}

// Begin Cross Module References
TFG_GUILLEM_UNREAL_API UClass* Z_Construct_UClass_AAttachableActor();
TFG_GUILLEM_UNREAL_API UClass* Z_Construct_UClass_ANonActivableActor();
TFG_GUILLEM_UNREAL_API UClass* Z_Construct_UClass_ANonActivableActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_TFG_Guillem_Unreal();
// End Cross Module References

// Begin Class ANonActivableActor
void ANonActivableActor::StaticRegisterNativesANonActivableActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANonActivableActor);
UClass* Z_Construct_UClass_ANonActivableActor_NoRegister()
{
	return ANonActivableActor::StaticClass();
}
struct Z_Construct_UClass_ANonActivableActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "NonActivableActor.h" },
		{ "ModuleRelativePath", "Public/NonActivableActor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANonActivableActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ANonActivableActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAttachableActor,
	(UObject* (*)())Z_Construct_UPackage__Script_TFG_Guillem_Unreal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANonActivableActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANonActivableActor_Statics::ClassParams = {
	&ANonActivableActor::StaticClass,
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
	0x009000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANonActivableActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ANonActivableActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANonActivableActor()
{
	if (!Z_Registration_Info_UClass_ANonActivableActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANonActivableActor.OuterSingleton, Z_Construct_UClass_ANonActivableActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANonActivableActor.OuterSingleton;
}
template<> TFG_GUILLEM_UNREAL_API UClass* StaticClass<ANonActivableActor>()
{
	return ANonActivableActor::StaticClass();
}
ANonActivableActor::ANonActivableActor() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANonActivableActor);
ANonActivableActor::~ANonActivableActor() {}
// End Class ANonActivableActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Guillem_Desktop_UNI_Treball_de_Fi_de_Grau_TFG_GuillemTio_TFG_GuillemTio_TFG_Guillem_Unreal_Source_TFG_Guillem_Unreal_Public_NonActivableActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANonActivableActor, ANonActivableActor::StaticClass, TEXT("ANonActivableActor"), &Z_Registration_Info_UClass_ANonActivableActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANonActivableActor), 936292133U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Guillem_Desktop_UNI_Treball_de_Fi_de_Grau_TFG_GuillemTio_TFG_GuillemTio_TFG_Guillem_Unreal_Source_TFG_Guillem_Unreal_Public_NonActivableActor_h_1069877572(TEXT("/Script/TFG_Guillem_Unreal"),
	Z_CompiledInDeferFile_FID_Users_Guillem_Desktop_UNI_Treball_de_Fi_de_Grau_TFG_GuillemTio_TFG_GuillemTio_TFG_Guillem_Unreal_Source_TFG_Guillem_Unreal_Public_NonActivableActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Guillem_Desktop_UNI_Treball_de_Fi_de_Grau_TFG_GuillemTio_TFG_GuillemTio_TFG_Guillem_Unreal_Source_TFG_Guillem_Unreal_Public_NonActivableActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
