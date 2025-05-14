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

	UPROPERTY(EditAnywhere, Category = "SpringActor")
	float rayDistance = 25;
	UPROPERTY(EditAnywhere, Category = "SpringActor")
	float impulsePower = 21000;

	FVector onImpulseScale = FVector(0.24f, 0.24f, 0.13f);
	FVector restScale = FVector(0.13f, 0.13f, 0.13f);

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
