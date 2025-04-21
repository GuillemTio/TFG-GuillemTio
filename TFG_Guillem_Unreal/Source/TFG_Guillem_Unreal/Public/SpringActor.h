// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ActivableActor.h"
#include "SpringActor.generated.h"

class UPhysicsConstraintComponent;
/**
 * 
 */
UCLASS()
class TFG_GUILLEM_UNREAL_API ASpringActor : public AActivableActor
{
	GENERATED_BODY()

private:
	UStaticMeshComponent* baseMesh;
	UStaticMeshComponent* handleMesh;

	UPhysicsConstraintComponent* constraintBase = nullptr;
	UPhysicsConstraintComponent* constraintHandle = nullptr;

	float rayDistance = 125;
	float impulsePower = 60000;

public:
	ASpringActor();

	virtual void Tick(float DeltaTime) override;

	virtual void Activate() override;
	virtual void Deactivate() override;
	virtual void ToggleActivation() override;

	virtual void SetConstraintLimits(UPhysicsConstraintComponent& constraint) override;

protected:
	virtual void BeginPlay() override;

private:
	void SetSpringConstraints();
	
};
