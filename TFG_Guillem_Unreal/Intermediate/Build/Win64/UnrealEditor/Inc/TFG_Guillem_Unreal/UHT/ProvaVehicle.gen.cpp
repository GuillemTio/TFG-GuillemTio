// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TFG_Guillem_Unreal/Private/ProvaVehicle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProvaVehicle() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UPhysicsConstraintComponent_NoRegister();
TFG_GUILLEM_UNREAL_API UClass* Z_Construct_UClass_AProvaVehicle();
TFG_GUILLEM_UNREAL_API UClass* Z_Construct_UClass_AProvaVehicle_NoRegister();
UPackage* Z_Construct_UPackage__Script_TFG_Guillem_Unreal();
// End Cross Module References

// Begin Class AProvaVehicle
void AProvaVehicle::StaticRegisterNativesAProvaVehicle()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AProvaVehicle);
UClass* Z_Construct_UClass_AProvaVehicle_NoRegister()
{
	return AProvaVehicle::StaticClass();
}
struct Z_Construct_UClass_AProvaVehicle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ProvaVehicle.h" },
		{ "ModuleRelativePath", "Private/ProvaVehicle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_startPosition_MetaData[] = {
		{ "Category", "Vehicle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//TSubclassOf<AActor> platformActor; Aixo es podria utilitzar per quan no sabem quin actor es?\n//AProvaActorBase platformActor;\n//UPROPERTY(EditAnywhere, Category = \"VehicleActors\")\n//class UChildActorComponent* PlatformComponent;\n//TSubclassOf<AActor> platformActor;\n//class UChildActorComponent* FRWheelComponent;\n//class UChildActorComponent* FLWheelComponent;\n//class UChildActorComponent* BRWheelComponent;\n//class UChildActorComponent* BLWheelComponent;\n" },
#endif
		{ "ModuleRelativePath", "Private/ProvaVehicle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TSubclassOf<AActor> platformActor; Aixo es podria utilitzar per quan no sabem quin actor es?\nAProvaActorBase platformActor;\nUPROPERTY(EditAnywhere, Category = \"VehicleActors\")\nclass UChildActorComponent* PlatformComponent;\nTSubclassOf<AActor> platformActor;\nclass UChildActorComponent* FRWheelComponent;\nclass UChildActorComponent* FLWheelComponent;\nclass UChildActorComponent* BRWheelComponent;\nclass UChildActorComponent* BLWheelComponent;" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Constraints_MetaData[] = {
		{ "Category", "Vehicle" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/ProvaVehicle.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_startPosition;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Constraints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Constraints;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProvaVehicle>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AProvaVehicle_Statics::NewProp_startPosition = { "startPosition", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProvaVehicle, startPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_startPosition_MetaData), NewProp_startPosition_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProvaVehicle_Statics::NewProp_Constraints_Inner = { "Constraints", nullptr, (EPropertyFlags)0x00000000000a0008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPhysicsConstraintComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AProvaVehicle_Statics::NewProp_Constraints = { "Constraints", nullptr, (EPropertyFlags)0x0040008000020009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProvaVehicle, Constraints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Constraints_MetaData), NewProp_Constraints_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProvaVehicle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProvaVehicle_Statics::NewProp_startPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProvaVehicle_Statics::NewProp_Constraints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProvaVehicle_Statics::NewProp_Constraints,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProvaVehicle_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AProvaVehicle_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_TFG_Guillem_Unreal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProvaVehicle_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AProvaVehicle_Statics::ClassParams = {
	&AProvaVehicle::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AProvaVehicle_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AProvaVehicle_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProvaVehicle_Statics::Class_MetaDataParams), Z_Construct_UClass_AProvaVehicle_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AProvaVehicle()
{
	if (!Z_Registration_Info_UClass_AProvaVehicle.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProvaVehicle.OuterSingleton, Z_Construct_UClass_AProvaVehicle_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AProvaVehicle.OuterSingleton;
}
template<> TFG_GUILLEM_UNREAL_API UClass* StaticClass<AProvaVehicle>()
{
	return AProvaVehicle::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AProvaVehicle);
AProvaVehicle::~AProvaVehicle() {}
// End Class AProvaVehicle

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Guillem_Desktop_UNI_Treball_de_Fi_de_Grau_TFG_GuillemTio_TFG_GuillemTio_TFG_Guillem_Unreal_Source_TFG_Guillem_Unreal_Private_ProvaVehicle_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AProvaVehicle, AProvaVehicle::StaticClass, TEXT("AProvaVehicle"), &Z_Registration_Info_UClass_AProvaVehicle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProvaVehicle), 2217028123U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Guillem_Desktop_UNI_Treball_de_Fi_de_Grau_TFG_GuillemTio_TFG_GuillemTio_TFG_Guillem_Unreal_Source_TFG_Guillem_Unreal_Private_ProvaVehicle_h_2447773661(TEXT("/Script/TFG_Guillem_Unreal"),
	Z_CompiledInDeferFile_FID_Users_Guillem_Desktop_UNI_Treball_de_Fi_de_Grau_TFG_GuillemTio_TFG_GuillemTio_TFG_Guillem_Unreal_Source_TFG_Guillem_Unreal_Private_ProvaVehicle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Guillem_Desktop_UNI_Treball_de_Fi_de_Grau_TFG_GuillemTio_TFG_GuillemTio_TFG_Guillem_Unreal_Source_TFG_Guillem_Unreal_Private_ProvaVehicle_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
