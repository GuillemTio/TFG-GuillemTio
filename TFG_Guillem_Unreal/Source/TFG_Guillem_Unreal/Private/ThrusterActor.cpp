
#include "ThrusterActor.h"
#include "InputConnector.h"
#include "Engine/StaticMeshSocket.h"

AThrusterActor::AThrusterActor()
{
	actorMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ThrusterMesh"));
	SetRootComponent(actorMesh);
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ConeMeshAsset(TEXT("/Game/Fab/Toy_Rocket_4K_Free_3D_model/ToyRocket.ToyRocket"));

	if (ConeMeshAsset.Succeeded())
	{
		actorMesh->SetStaticMesh(ConeMeshAsset.Object);
		actorMesh->SetRelativeScale3D(FVector(0.3f, 0.3f, 0.3f));
		actorMesh->SetSimulatePhysics(true);
	}
	else GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, "Mesh not correctly set");


	thruster = CreateDefaultSubobject<UPhysicsThrusterComponent>(TEXT("ThrusterComponent"));
	//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, thruster->GetForwardVector().ToString());
	//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, FVector::UpVector.ToString());
	//
	//thruster->SetRelativeRotation(FVector(0, 0, 1).Rotation());

	mass = 10.0f;
	actorMesh->SetMassOverrideInKg(NAME_None, mass);
	
}

void AThrusterActor::Activate()
{
	thruster->Activate();
}

void AThrusterActor::Deactivate()
{
	thruster->Deactivate();
}

void AThrusterActor::ToggleActivation()
{
	thruster->ToggleActive();
}

void AThrusterActor::SetConstraintLimits(UPhysicsConstraintComponent& constraint)
{
	constraint.SetLinearXLimit(LCM_Locked, 0.0f);
	constraint.SetLinearYLimit(LCM_Locked, 0.0f);
	constraint.SetLinearZLimit(LCM_Locked, 0.0f);

	constraint.SetAngularSwing1Limit(ACM_Locked, 0.0f);
	constraint.SetAngularSwing2Limit(ACM_Locked, 0.0f);
	constraint.SetAngularTwistLimit(ACM_Locked, 0.0f);
}


void AThrusterActor::BeginPlay()
{
	Super::BeginPlay();


	AddInstanceComponent(thruster);

	//thruster->RegisterComponent();
	thruster->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
	thruster->UpdateComponentToWorld();
	thruster->ThrustStrength = thrusterPower;
	thruster->SetRelativeRotation(FVector::DownVector.Rotation());

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

//void AThrusterActor::Connect(UConnector* passedConnector, FVector toAttachLocation)
//{
//	Connectors[0]->AttachTo(passedConnector, toAttachLocation);
//}
