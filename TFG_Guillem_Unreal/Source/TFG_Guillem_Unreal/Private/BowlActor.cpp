// Fill out your copyright notice in the Description page of Project Settings.


#include "BowlActor.h"
#include "InputConnector.h"
#include "Engine/StaticMeshSocket.h"

ABowlActor::ABowlActor()
{
	PrimaryActorTick.bCanEverTick = true;

	actorMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BowlMesh"));
	actorMesh->SetupAttachment(RootComponent);
	static ConstructorHelpers::FObjectFinder<UStaticMesh> BowlMeshAsset(TEXT("/Game/Media/3DModels/Bowl.Bowl"));

	if (BowlMeshAsset.Succeeded())
	{
		actorMesh->SetStaticMesh(BowlMeshAsset.Object);
		actorMesh->SetSimulatePhysics(true);
	}

	actorMesh->SetGenerateOverlapEvents(true);

	mass = 110.0f;
	actorMesh->SetMassOverrideInKg(NAME_None, mass);
}

void ABowlActor::SetConstraintLimits(UPhysicsConstraintComponent& constraint)
{
	constraint.SetLinearXLimit(LCM_Locked, 0.0f);
	constraint.SetLinearYLimit(LCM_Locked, 0.0f);
	constraint.SetLinearZLimit(LCM_Locked, 0.0f);

	//Attached ball-and-socket behaviour
	constraint.SetAngularSwing1Limit(ACM_Limited, 50.0f);
	constraint.SetAngularSwing2Limit(ACM_Limited, 50.0f);
	constraint.SetAngularTwistLimit(ACM_Limited, 50.0f);
}

void ABowlActor::BeginPlay()
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

			UInputConnector* NewConnector = NewObject<UInputConnector>(this);
			NewConnector->SetConnector(*this, LocalPosition, Socket->RelativeRotation);
			connectors.Add(NewConnector);
		}
	}
}
