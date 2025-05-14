
#include "WheelActor.h"
#include "InputConnector.h"
#include "Engine/StaticMeshSocket.h"

AWheelActor::AWheelActor()
{
	PrimaryActorTick.bCanEverTick = true;

	actorMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WheelMesh"));
	actorMesh->SetupAttachment(RootComponent);
	static ConstructorHelpers::FObjectFinder<UStaticMesh> WheelMeshAsset(TEXT("/Game/Media/3DModels/Wheel.Wheel"));

	if (WheelMeshAsset.Succeeded())
	{
		actorMesh->SetStaticMesh(WheelMeshAsset.Object);
	}

	actorMesh->SetSimulatePhysics(true);

	mass = 150.0f;
	actorMesh->SetMassOverrideInKg(NAME_None, mass);
}

void AWheelActor::BeginPlay()
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

void AWheelActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AWheelActor::SetConstraintLimits(UPhysicsConstraintComponent& constraint)
{
	constraint.SetLinearXLimit(LCM_Locked, 0.0f);
	constraint.SetLinearYLimit(LCM_Locked, 0.0f);
	constraint.SetLinearZLimit(LCM_Locked, 0.0f);

	constraint.SetAngularSwing1Limit(ACM_Locked, 0.0f);
	constraint.SetAngularSwing2Limit(ACM_Locked, 0.0f);
	constraint.SetAngularTwistLimit(ACM_Free, 0.0f);
}

