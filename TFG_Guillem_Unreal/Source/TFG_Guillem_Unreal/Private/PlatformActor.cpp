// Fill out your copyright notice in the Description page of Project Settings.


#include "PlatformActor.h"
#include "OutputConnector.h"
#include <Kismet/GameplayStatics.h>
#include "Engine/StaticMeshSocket.h"

APlatformActor::APlatformActor()
{
	PrimaryActorTick.bCanEverTick = true;


	actorMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlatformMesh"));
	actorMesh->SetupAttachment(RootComponent);
	static ConstructorHelpers::FObjectFinder<UStaticMesh> CubeMeshAsset(TEXT("/Game/Media/3DModels/PlatformBase.PlatformBase"));

	if (CubeMeshAsset.Succeeded())
	{
		actorMesh->SetStaticMesh(CubeMeshAsset.Object);
		actorMesh->SetRelativeScale3D(FVector(0.7f, 0.7f, 0.7f));
	}

	actorMesh->SetSimulatePhysics(true);
	actorMesh->SetAngularDamping(3.0f); //Damping angular forces for an smoother movement

	mass = 1000.0f;
	actorMesh->SetMassOverrideInKg(NAME_None, mass);
}

void APlatformActor::BeginPlay()
{
	Super::BeginPlay();

	//Setting all connectors depending on the sockets attached to the mesh
	for (const UStaticMeshSocket* Socket : actorMesh->GetStaticMesh()->Sockets)
	{
		if (Socket)
		{
			// To adapt the sockets if the mesh has been scaled, moved or rotated
			FVector LocalPosition = actorMesh->GetComponentTransform().TransformPosition(Socket->RelativeLocation);
			LocalPosition = this->GetTransform().InverseTransformPosition(LocalPosition);

			//Platform actors have Output connectors
			UOutputConnector* NewConnector = NewObject<UOutputConnector>(this);
			NewConnector->SetConnector(*this, LocalPosition, Socket->RelativeRotation);
			connectors.Add(NewConnector);
		}
	}

}

void APlatformActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APlatformActor::SetConstraintLimits(UPhysicsConstraintComponent& constraint)
{
	constraint.SetLinearXLimit(LCM_Locked, 0.0f);
	constraint.SetLinearYLimit(LCM_Locked, 0.0f);
	constraint.SetLinearZLimit(LCM_Locked, 0.0f);

	constraint.SetAngularSwing1Limit(ACM_Locked, 0.0f);
	constraint.SetAngularSwing2Limit(ACM_Locked, 0.0f);
	constraint.SetAngularTwistLimit(ACM_Locked, 0.0f);
}



