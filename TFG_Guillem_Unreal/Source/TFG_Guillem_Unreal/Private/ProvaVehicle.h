// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <PhysicsEngine/PhysicsConstraintComponent.h>
#include "ProvaVehicle.generated.h"


UCLASS()
class AProvaVehicle : public AActor
{
	GENERATED_BODY()

	//TSubclassOf<AActor> platformActor; Aixo es podria utilitzar per quan no sabem quin actor es?
	//AProvaActorBase platformActor;
	//UPROPERTY(EditAnywhere, Category = "VehicleActors")
	//class UChildActorComponent* PlatformComponent;
	//TSubclassOf<AActor> platformActor;
	//class UChildActorComponent* FRWheelComponent;
	//class UChildActorComponent* FLWheelComponent;
	//class UChildActorComponent* BRWheelComponent;
	//class UChildActorComponent* BLWheelComponent;

	UPROPERTY(EditAnywhere, Category = "Vehicle")
	FVector startPosition = FVector(0.0, 0.0, 0.0);

	UPROPERTY(VisibleAnywhere, Category = "Vehicle")
	TArray<UPhysicsConstraintComponent*> Constraints;

	void AddConstraint(USceneComponent* actorCompA, USceneComponent* actorCompB);
	
public:	
	// Sets default values for this actor's properties
	AProvaVehicle();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
