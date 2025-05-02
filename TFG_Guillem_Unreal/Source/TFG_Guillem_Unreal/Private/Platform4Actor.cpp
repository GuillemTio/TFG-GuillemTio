// Fill out your copyright notice in the Description page of Project Settings.


#include "Platform4Actor.h"
#include "OutputConnector.h"
#include <Kismet/GameplayStatics.h>
#include "Engine/StaticMeshSocket.h"

APlatform4Actor::APlatform4Actor()
{
	PrimaryActorTick.bCanEverTick = true;


	actorMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlatformMesh"));
	actorMesh->SetupAttachment(RootComponent);
	static ConstructorHelpers::FObjectFinder<UStaticMesh> PlatformMeshAsset(TEXT("/Game/Media/3DModels/Platform4.Platform4"));

	if (PlatformMeshAsset.Succeeded())
	{
		actorMesh->SetStaticMesh(PlatformMeshAsset.Object);
		actorMesh->SetRelativeScale3D(FVector(0.5f, 0.5f, 0.5f));
	}

	actorMesh->SetSimulatePhysics(true);
	actorMesh->SetAngularDamping(5.0f);

	mass = 1200.0f; 
	actorMesh->SetMassOverrideInKg(NAME_None, mass);
}

void APlatform4Actor::BeginPlay()
{
	Super::BeginPlay();

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

void APlatform4Actor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APlatform4Actor::SetConstraintLimits(UPhysicsConstraintComponent& constraint)
{
	constraint.SetLinearXLimit(LCM_Locked, 0.0f);
	constraint.SetLinearYLimit(LCM_Locked, 0.0f);
	constraint.SetLinearZLimit(LCM_Locked, 0.0f);

	constraint.SetAngularSwing1Limit(ACM_Locked, 0.0f);
	constraint.SetAngularSwing2Limit(ACM_Locked, 0.0f);
	constraint.SetAngularTwistLimit(ACM_Locked, 0.0f);
}
