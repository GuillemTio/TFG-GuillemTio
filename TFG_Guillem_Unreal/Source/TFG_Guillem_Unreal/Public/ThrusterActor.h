// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ActivableActor.h"
#include <PhysicsEngine/PhysicsThrusterComponent.h>
#include "ThrusterActor.generated.h"

/**
 * 
 */
UCLASS()
class TFG_GUILLEM_UNREAL_API AThrusterActor : public AActivableActor
{
	GENERATED_BODY()

private:
	UPhysicsThrusterComponent* thruster;

	float thrusterPower = 18000.0;

public:
	AThrusterActor();

	virtual void Activate() override;
	virtual void Deactivate() override;
	virtual void ToggleActivation() override;

	virtual void SetConstraintLimits(UPhysicsConstraintComponent& constraint) override;
	//virtual void Connect(UConnector* passedConnector, FVector toAttachLocation) override;
	
protected: 	
	virtual void BeginPlay() override;
};
