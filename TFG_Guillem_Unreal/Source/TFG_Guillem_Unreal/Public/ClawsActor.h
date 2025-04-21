// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ActivableActor.h"
#include "ClawsActor.generated.h"

class UPhysicsConstraintComponent;
/**
 * 
 */
UCLASS()
class TFG_GUILLEM_UNREAL_API AClawsActor : public AActivableActor
{
	GENERATED_BODY()

private:
	UStaticMeshComponent* clawMesh1;
	UStaticMeshComponent* clawMesh2;

	UPhysicsConstraintComponent* constraintClaw1 = nullptr;
	UPhysicsConstraintComponent* constraintClaw2 = nullptr;

	bool areClawsClosed = false;

public:
	AClawsActor();

	virtual void Tick(float DeltaTime) override;

	virtual void Activate() override;
	virtual void Deactivate() override;
	virtual void ToggleActivation() override;

	virtual void SetConstraintLimits(UPhysicsConstraintComponent& constraint) override;

protected:
	virtual void BeginPlay() override;

private:
	void SetClawsConstraints();
	
};
