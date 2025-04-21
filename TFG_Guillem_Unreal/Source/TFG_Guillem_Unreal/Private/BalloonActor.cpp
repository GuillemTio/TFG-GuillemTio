// Fill out your copyright notice in the Description page of Project Settings.


#include "BalloonActor.h"
#include "InputConnector.h"
#include "Engine/StaticMeshSocket.h"

ABalloonActor::ABalloonActor()
{
	actorMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BalloonMesh"));
	SetRootComponent(actorMesh);
	static ConstructorHelpers::FObjectFinder<UStaticMesh> BalloonMeshAsset(TEXT("/Game/Media/3DModels/Balloon2.Balloon2"));

	if (BalloonMeshAsset.Succeeded())
	{
		actorMesh->SetStaticMesh(BalloonMeshAsset.Object);
		actorMesh->SetRelativeScale3D(FVector(1.2f, 1.2f, 1.2f));
		actorMesh->SetSimulatePhysics(true);
	}

	mass = 50.0f;
	actorMesh->SetMassOverrideInKg(NAME_None, mass);

}

void ABalloonActor::Tick(float DeltaTime)
{
	if (isBalloonForceActive)
	{
		actorMesh->AddForce(FVector::UpVector * balloonForce);
	}
}

void ABalloonActor::Activate()
{
	isBalloonForceActive = true;
}

void ABalloonActor::Deactivate()
{
	isBalloonForceActive = false;
}

void ABalloonActor::ToggleActivation()
{
	isBalloonForceActive = isBalloonForceActive ? false : true;
}

void ABalloonActor::SetConstraintLimits(UPhysicsConstraintComponent& constraint)
{
	constraint.SetLinearXLimit(LCM_Locked, 0.0f);
	constraint.SetLinearYLimit(LCM_Locked, 0.0f);
	constraint.SetLinearZLimit(LCM_Locked, 0.0f);

	constraint.SetAngularSwing1Limit(ACM_Limited, 30.0f);
	constraint.SetAngularSwing2Limit(ACM_Limited, 30.0f);
	constraint.SetAngularTwistLimit(ACM_Free, 0.0f);
}

void ABalloonActor::BeginPlay()
{
	Super::BeginPlay();

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
