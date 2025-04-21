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

	actorMesh->AddImpulse(directionNormalized * mass * ejectionPower);
}

