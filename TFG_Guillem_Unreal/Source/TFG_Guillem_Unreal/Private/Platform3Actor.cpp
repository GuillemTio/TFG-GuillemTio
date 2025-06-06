// Fill out your copyright notice in the Description page of Project Settings.


#include "Platform3Actor.h"
#include "OutputConnector.h"
#include <Kismet/GameplayStatics.h>
#include "Engine/StaticMeshSocket.h"

APlatform3Actor::APlatform3Actor()
{
	PrimaryActorTick.bCanEverTick = true;


	actorMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlatformMesh"));
	actorMesh->SetupAttachment(RootComponent);
	static ConstructorHelpers::FObjectFinder<UStaticMesh> PlatformMeshAsset(TEXT("/Game/Media/3DModels/Platform3.Platform3"));

	if (PlatformMeshAsset.Succeeded())
	{
		actorMesh->SetStaticMesh(PlatformMeshAsset.Object);
		actorMesh->SetRelativeScale3D(FVector(0.5f, 0.5f, 0.5f));
	}
}

void APlatform3Actor::BeginPlay()
{
	Super::BeginPlay();

	actorMesh->SetSimulatePhysics(false);
	actorMesh->SetAngularDamping(7.0f);

	mass = 1000.0f; 
	actorMesh->SetMassOverrideInKg(NAME_None, mass);

	//Setting all connectors depending on the sockets attached to the mesh
	for (const UStaticMeshSocket* Socket : actorMesh->GetStaticMesh()->Sockets)
	{
		if (Socket)
		{
			// To adapt the sockets if the mesh has been scaled, moved or rotated
			FVector LocalPosition = actorMesh->GetComponentTransform().TransformPosition(Socket->RelativeLocation);
			LocalPosition = this->GetTransform().InverseTransformPosition(LocalPosition);

			UOutputConnector* NewConnector = NewObject<UOutputConnector>(this);
			NewConnector->SetConnector(*this, LocalPosition, Socket->RelativeRotation);
			connectors.Add(NewConnector);
		}
	}

}

void APlatform3Actor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APlatform3Actor::SetConstraintLimits(UPhysicsConstraintComponent& constraint)
{
	constraint.SetLinearXLimit(LCM_Locked, 0.0f);
	constraint.SetLinearYLimit(LCM_Locked, 0.0f);
	constraint.SetLinearZLimit(LCM_Locked, 0.0f);

	constraint.SetAngularSwing1Limit(ACM_Locked, 0.0f);
	constraint.SetAngularSwing2Limit(ACM_Locked, 0.0f);
	constraint.SetAngularTwistLimit(ACM_Locked, 0.0f);
}
