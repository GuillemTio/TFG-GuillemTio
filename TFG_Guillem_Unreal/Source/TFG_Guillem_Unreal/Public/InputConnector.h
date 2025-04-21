// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Connector.h"
#include "InputConnector.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class TFG_GUILLEM_UNREAL_API UInputConnector : public UConnector
{
	GENERATED_BODY()
	
public:
	virtual void SetConnector(AAttachableActor& attachableActor, FVector relativeAttachPosition, FRotator socketRotation) override;
	void SetConnectedTo(UConnector* connector);

	virtual void AttachTo(UConnector* connectorToAttach, FVector attachPosition) override;
	virtual void Disconnect() override;

	void AdaptActorOwnerLocation(FVector attachPosition);
	void AdaptActorOwnerRotation(FRotator lookAt);
	bool CanAdaptActorOwnerTransform(FVector attachPosition, FRotator lookAt, const UConnector* otherConnector);
};
