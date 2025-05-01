// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ActivableActor.h"
#include "BalloonActor.generated.h"

/**
 * 
 */
UCLASS()
class TFG_GUILLEM_UNREAL_API ABalloonActor : public AActivableActor
{
	GENERATED_BODY()

private:
	bool isBalloonForceActive = false;
	float balloonForce = 85000;

	FVector inflatedScale = FVector(0.27f, 0.27f, 0.27f);
	FVector uninflatedScale = FVector(0.18f, 0.18f, 0.18f);

public:
	ABalloonActor();

	virtual void Tick(float DeltaTime) override;

	virtual void Activate() override;
	virtual void Deactivate() override;
	virtual void ToggleActivation() override;

	virtual void SetConstraintLimits(UPhysicsConstraintComponent& constraint) override;
	
protected: 	
	virtual void BeginPlay() override;
};
