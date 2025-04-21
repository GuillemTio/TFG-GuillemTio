// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TFG_Guillem_Unreal/Public/WheelActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWheelActor() {}

// Begin Cross Module References
TFG_GUILLEM_UNREAL_API UClass* Z_Construct_UClass_ANonActivableActor();
TFG_GUILLEM_UNREAL_API UClass* Z_Construct_UClass_AWheelActor();
TFG_GUILLEM_UNREAL_API UClass* Z_Construct_UClass_AWheelActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_TFG_Guillem_Unreal();
// End Cross Module References

// Begin Class AWheelActor
void AWheelActor::StaticRegisterNativesAWheelActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWheelActor);
UClass* Z_Construct_UClass_AWheelActor_NoRegister()
{
	return AWheelActor::StaticClass();
}
struct Z_Construct_UClass_AWheelActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "WheelActor.h" },
		{ "ModuleRelativePath", "Public/WheelActor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWheelActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AWheelActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ANonActivableActor,
	(UObject* (*)())Z_Construct_UPackage__Script_TFG_Guillem_Unreal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWheelActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWheelActor_Statics::ClassParams = {
	&AWheelActor::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWheelActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AWheelActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWheelActor()
{
	if (!Z_Registration_Info_UClass_AWheelActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWheelActor.OuterSingleton, Z_Construct_UClass_AWheelActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWheelActor.OuterSingleton;
}
template<> TFG_GUILLEM_UNREAL_API UClass* StaticClass<AWheelActor>()
{
	return AWheelActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWheelActor);
AWheelActor::~AWheelActor() {}
// End Class AWheelActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Guillem_Desktop_UNI_Treball_de_Fi_de_Grau_TFG_GuillemTio_TFG_GuillemTio_TFG_Guillem_Unreal_Source_TFG_Guillem_Unreal_Public_WheelActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWheelActor, AWheelActor::StaticClass, TEXT("AWheelActor"), &Z_Registration_Info_UClass_AWheelActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWheelActor), 1421054483U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Guillem_Desktop_UNI_Treball_de_Fi_de_Grau_TFG_GuillemTio_TFG_GuillemTio_TFG_Guillem_Unreal_Source_TFG_Guillem_Unreal_Public_WheelActor_h_2676163470(TEXT("/Script/TFG_Guillem_Unreal"),
	Z_CompiledInDeferFile_FID_Users_Guillem_Desktop_UNI_Treball_de_Fi_de_Grau_TFG_GuillemTio_TFG_GuillemTio_TFG_Guillem_Unreal_Source_TFG_Guillem_Unreal_Public_WheelActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Guillem_Desktop_UNI_Treball_de_Fi_de_Grau_TFG_GuillemTio_TFG_GuillemTio_TFG_Guillem_Unreal_Source_TFG_Guillem_Unreal_Public_WheelActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
