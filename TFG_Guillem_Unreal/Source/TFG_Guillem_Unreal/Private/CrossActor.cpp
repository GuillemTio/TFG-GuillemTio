// Fill out your copyright notice in the Description page of Project Settings.


#include "CrossActor.h"
#include "InputConnector.h"
#include "Engine/StaticMeshSocket.h"

ACrossActor::ACrossActor()
{
	PrimaryActorTick.bCanEverTick = true;

	actorMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CrossMesh"));
	actorMesh->SetupAttachment(RootComponent);
	static ConstructorHelpers::FObjectFinder<UStaticMesh> CrossMeshAsset(TEXT("/Game/Media/3DModels/Cross.Cross"));

	if (CrossMeshAsset.Succeeded())
	{
		actorMesh->SetStaticMesh(CrossMeshAsset.Object);
	}


}

void ACrossActor::SetConstraintLimits(UPhysicsConstraintComponent& constraint)
{
	constraint.SetLinearXLimit(LCM_Locked, 0.0f);
	constraint.SetLinearYLimit(LCM_Locked, 0.0f);
	constraint.SetLinearZLimit(LCM_Locked, 0.0f);

	constraint.SetAngularSwing1Limit(ACM_Locked, 0.0f);
	constraint.SetAngularSwing2Limit(ACM_Locked, 0.0f);
	constraint.SetAngularTwistLimit(ACM_Free, 0.0f); //To give it a wheel/helix-like behaviour
}

void ACrossActor::BeginPlay()
{
	Super::BeginPlay();

	actorMesh->SetSimulatePhysics(true);
	mass = 90.0f;
	actorMesh->SetMassOverrideInKg(NAME_None, mass);

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