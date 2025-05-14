// Fill out your copyright notice in the Description page of Project Settings.


#include "AttachableActor.h"

AAttachableActor::AAttachableActor()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AAttachableActor::BeginPlay()
{
	Super::BeginPlay();
}

void AAttachableActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AAttachableActor::SetPhysicsSimulation(bool isActive)
{
	actorMesh->SetSimulatePhysics(isActive);
}

void AAttachableActor::EjectionImpulse(FVector direction)
{
	FVector directionNormalized = direction.GetSafeNormal();

	//Adds impulse based on mass (and ejectionPower) to equalize movement between different actors
	actorMesh->AddImpulse(directionNormalized * mass * ejectionPower); 
}

