// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TFG_Guillem_Unreal/Public/ThrusterActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThrusterActor() {}

// Begin Cross Module References
TFG_GUILLEM_UNREAL_API UClass* Z_Construct_UClass_AActivableActor();
TFG_GUILLEM_UNREAL_API UClass* Z_Construct_UClass_AThrusterActor();
TFG_GUILLEM_UNREAL_API UClass* Z_Construct_UClass_AThrusterActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_TFG_Guillem_Unreal();
// End Cross Module References

// Begin Class AThrusterActor
void AThrusterActor::StaticRegisterNativesAThrusterActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AThrusterActor);
UClass* Z_Construct_UClass_AThrusterActor_NoRegister()
{
	return AThrusterActor::StaticClass();
}
struct Z_Construct_UClass_AThrusterActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ThrusterActor.h" },
		{ "ModuleRelativePath", "Public/ThrusterActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_thrusterPower_MetaData[] = {
		{ "Category", "ThrusterActor" },
		{ "ModuleRelativePath", "Public/ThrusterActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_thrusterPower;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AThrusterActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AThrusterActor_Statics::NewProp_thrusterPower = { "thrusterPower", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThrusterActor, thrusterPower), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_thrusterPower_MetaData), NewProp_thrusterPower_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AThrusterActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThrusterActor_Statics::NewProp_thrusterPower,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AThrusterActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AThrusterActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActivableActor,
	(UObject* (*)())Z_Construct_UPackage__Script_TFG_Guillem_Unreal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AThrusterActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AThrusterActor_Statics::ClassParams = {
	&AThrusterActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AThrusterActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AThrusterActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThrusterActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AThrusterActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AThrusterActor()
{
	if (!Z_Registration_Info_UClass_AThrusterActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AThrusterActor.OuterSingleton, Z_Construct_UClass_AThrusterActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AThrusterActor.OuterSingleton;
}
template<> TFG_GUILLEM_UNREAL_API UClass* StaticClass<AThrusterActor>()
{
	return AThrusterActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AThrusterActor);
AThrusterActor::~AThrusterActor() {}
// End Class AThrusterActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Guillem_Desktop_UNI_Treball_de_Fi_de_Grau_TFG_GuillemTio_TFG_GuillemTio_TFG_Guillem_Unreal_Source_TFG_Guillem_Unreal_Public_ThrusterActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AThrusterActor, AThrusterActor::StaticClass, TEXT("AThrusterActor"), &Z_Registration_Info_UClass_AThrusterActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AThrusterActor), 4071362110U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Guillem_Desktop_UNI_Treball_de_Fi_de_Grau_TFG_GuillemTio_TFG_GuillemTio_TFG_Guillem_Unreal_Source_TFG_Guillem_Unreal_Public_ThrusterActor_h_3744525549(TEXT("/Script/TFG_Guillem_Unreal"),
	Z_CompiledInDeferFile_FID_Users_Guillem_Desktop_UNI_Treball_de_Fi_de_Grau_TFG_GuillemTio_TFG_GuillemTio_TFG_Guillem_Unreal_Source_TFG_Guillem_Unreal_Public_ThrusterActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Guillem_Desktop_UNI_Treball_de_Fi_de_Grau_TFG_GuillemTio_TFG_GuillemTio_TFG_Guillem_Unreal_Source_TFG_Guillem_Unreal_Public_ThrusterActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
