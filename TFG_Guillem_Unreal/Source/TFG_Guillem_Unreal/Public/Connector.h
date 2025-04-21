// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Connector.generated.h"

class AAttachableActor;
/**
 * 
 */
UCLASS(BlueprintType)
class TFG_GUILLEM_UNREAL_API UConnector : public UObject
{
	GENERATED_BODY()

protected: 
	USceneComponent* sceneComponent;
	UStaticMeshComponent* connectorMesh;
	
	UConnector* connectedTo;

	float connectorSize = 0.075;

public: 
	UPROPERTY(BlueprintReadOnly)
	AAttachableActor* actorOwner;

	virtual void SetConnector(AAttachableActor& attachableActor, FVector relativeAttachPosition, FRotator socketRotation);

	UFUNCTION(BlueprintCallable)
	virtual void AttachTo(UConnector* connectorToAttach, FVector attachPosition);

	UFUNCTION(BlueprintCallable)
	virtual void Disconnect();

	UFUNCTION(BlueprintCallable)
	FVector GetPosition() const;

	UFUNCTION(BlueprintCallable)
	bool IsConnected() const;
	
};
