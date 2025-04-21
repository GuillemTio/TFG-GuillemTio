// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TFG_Guillem_Unreal/Public/ConnectorUserData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConnectorUserData() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAssetUserData();
TFG_GUILLEM_UNREAL_API UClass* Z_Construct_UClass_UConnector_NoRegister();
TFG_GUILLEM_UNREAL_API UClass* Z_Construct_UClass_UConnectorUserData();
TFG_GUILLEM_UNREAL_API UClass* Z_Construct_UClass_UConnectorUserData_NoRegister();
UPackage* Z_Construct_UPackage__Script_TFG_Guillem_Unreal();
// End Cross Module References

// Begin Class UConnectorUserData
void UConnectorUserData::StaticRegisterNativesUConnectorUserData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UConnectorUserData);
UClass* Z_Construct_UClass_UConnectorUserData_NoRegister()
{
	return UConnectorUserData::StaticClass();
}
struct Z_Construct_UClass_UConnectorUserData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ConnectorUserData.h" },
		{ "ModuleRelativePath", "Public/ConnectorUserData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_connectorAttached_MetaData[] = {
		{ "Category", "ConnectorUserData" },
		{ "ModuleRelativePath", "Public/ConnectorUserData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_connectorAttached;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConnectorUserData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UConnectorUserData_Statics::NewProp_connectorAttached = { "connectorAttached", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UConnectorUserData, connectorAttached), Z_Construct_UClass_UConnector_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_connectorAttached_MetaData), NewProp_connectorAttached_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UConnectorUserData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConnectorUserData_Statics::NewProp_connectorAttached,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UConnectorUserData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UConnectorUserData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAssetUserData,
	(UObject* (*)())Z_Construct_UPackage__Script_TFG_Guillem_Unreal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UConnectorUserData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UConnectorUserData_Statics::ClassParams = {
	&UConnectorUserData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UConnectorUserData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UConnectorUserData_Statics::PropPointers),
	0,
	0x003010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UConnectorUserData_Statics::Class_MetaDataParams), Z_Construct_UClass_UConnectorUserData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UConnectorUserData()
{
	if (!Z_Registration_Info_UClass_UConnectorUserData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UConnectorUserData.OuterSingleton, Z_Construct_UClass_UConnectorUserData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UConnectorUserData.OuterSingleton;
}
template<> TFG_GUILLEM_UNREAL_API UClass* StaticClass<UConnectorUserData>()
{
	return UConnectorUserData::StaticClass();
}
UConnectorUserData::UConnectorUserData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UConnectorUserData);
UConnectorUserData::~UConnectorUserData() {}
// End Class UConnectorUserData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Guillem_Desktop_UNI_Treball_de_Fi_de_Grau_TFG_GuillemTio_TFG_GuillemTio_TFG_Guillem_Unreal_Source_TFG_Guillem_Unreal_Public_ConnectorUserData_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UConnectorUserData, UConnectorUserData::StaticClass, TEXT("UConnectorUserData"), &Z_Registration_Info_UClass_UConnectorUserData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UConnectorUserData), 2955001860U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Guillem_Desktop_UNI_Treball_de_Fi_de_Grau_TFG_GuillemTio_TFG_GuillemTio_TFG_Guillem_Unreal_Source_TFG_Guillem_Unreal_Public_ConnectorUserData_h_4079043118(TEXT("/Script/TFG_Guillem_Unreal"),
	Z_CompiledInDeferFile_FID_Users_Guillem_Desktop_UNI_Treball_de_Fi_de_Grau_TFG_GuillemTio_TFG_GuillemTio_TFG_Guillem_Unreal_Source_TFG_Guillem_Unreal_Public_ConnectorUserData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Guillem_Desktop_UNI_Treball_de_Fi_de_Grau_TFG_GuillemTio_TFG_GuillemTio_TFG_Guillem_Unreal_Source_TFG_Guillem_Unreal_Public_ConnectorUserData_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
