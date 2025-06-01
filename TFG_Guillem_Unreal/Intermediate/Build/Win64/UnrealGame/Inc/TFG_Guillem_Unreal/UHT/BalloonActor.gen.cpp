// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TFG_Guillem_Unreal/Public/BalloonActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBalloonActor() {}

// Begin Cross Module References
TFG_GUILLEM_UNREAL_API UClass* Z_Construct_UClass_AActivableActor();
TFG_GUILLEM_UNREAL_API UClass* Z_Construct_UClass_ABalloonActor();
TFG_GUILLEM_UNREAL_API UClass* Z_Construct_UClass_ABalloonActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_TFG_Guillem_Unreal();
// End Cross Module References

// Begin Class ABalloonActor
void ABalloonActor::StaticRegisterNativesABalloonActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABalloonActor);
UClass* Z_Construct_UClass_ABalloonActor_NoRegister()
{
	return ABalloonActor::StaticClass();
}
struct Z_Construct_UClass_ABalloonActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BalloonActor.h" },
		{ "ModuleRelativePath", "Public/BalloonActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_balloonForce_MetaData[] = {
		{ "Category", "BalloonActor" },
		{ "ModuleRelativePath", "Public/BalloonActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_balloonForce;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABalloonActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABalloonActor_Statics::NewProp_balloonForce = { "balloonForce", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABalloonActor, balloonForce), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_balloonForce_MetaData), NewProp_balloonForce_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABalloonActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABalloonActor_Statics::NewProp_balloonForce,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABalloonActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABalloonActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActivableActor,
	(UObject* (*)())Z_Construct_UPackage__Script_TFG_Guillem_Unreal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABalloonActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABalloonActor_Statics::ClassParams = {
	&ABalloonActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABalloonActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABalloonActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABalloonActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ABalloonActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABalloonActor()
{
	if (!Z_Registration_Info_UClass_ABalloonActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABalloonActor.OuterSingleton, Z_Construct_UClass_ABalloonActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABalloonActor.OuterSingleton;
}
template<> TFG_GUILLEM_UNREAL_API UClass* StaticClass<ABalloonActor>()
{
	return ABalloonActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABalloonActor);
ABalloonActor::~ABalloonActor() {}
// End Class ABalloonActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Guillem_Desktop_UNI_Treball_de_Fi_de_Grau_TFG_GuillemTio_TFG_GuillemTio_TFG_Guillem_Unreal_Source_TFG_Guillem_Unreal_Public_BalloonActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABalloonActor, ABalloonActor::StaticClass, TEXT("ABalloonActor"), &Z_Registration_Info_UClass_ABalloonActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABalloonActor), 2125578710U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Guillem_Desktop_UNI_Treball_de_Fi_de_Grau_TFG_GuillemTio_TFG_GuillemTio_TFG_Guillem_Unreal_Source_TFG_Guillem_Unreal_Public_BalloonActor_h_2343878959(TEXT("/Script/TFG_Guillem_Unreal"),
	Z_CompiledInDeferFile_FID_Users_Guillem_Desktop_UNI_Treball_de_Fi_de_Grau_TFG_GuillemTio_TFG_GuillemTio_TFG_Guillem_Unreal_Source_TFG_Guillem_Unreal_Public_BalloonActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Guillem_Desktop_UNI_Treball_de_Fi_de_Grau_TFG_GuillemTio_TFG_GuillemTio_TFG_Guillem_Unreal_Source_TFG_Guillem_Unreal_Public_BalloonActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
