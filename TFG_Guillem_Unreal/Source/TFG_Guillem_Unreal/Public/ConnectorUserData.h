// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/AssetUserData.h"
#include "ConnectorUserData.generated.h"

class UConnector;
/**
 * 
 */
UCLASS(BlueprintType)
class TFG_GUILLEM_UNREAL_API UConnectorUserData : public UAssetUserData
{
	GENERATED_BODY()
	
public:
	UPROPERTY(BlueprintReadOnly)
	UConnector* connectorAttached;
};
