// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <PhysicsEngine/PhysicsConstraintComponent.h>
#include "AttachableActor.generated.h"

class UConnector;

UCLASS(Abstract)
class TFG_GUILLEM_UNREAL_API AAttachableActor : public AActor
{
	GENERATED_BODY()
	
	
public:	
	AAttachableActor();
	float mass;

protected:
	UStaticMeshComponent* actorMesh;
	TArray<UConnector*> connectors;

private:
	float ejectionPower = 100;


public:	
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	void SetPhysicsSimulation(bool isActive);

	void EjectionImpulse(FVector direction);

	virtual void SetConstraintLimits(UPhysicsConstraintComponent& constraint) PURE_VIRTUAL(AAttachableActor::SetConstraint, );

protected:
	virtual void BeginPlay() override;

};
