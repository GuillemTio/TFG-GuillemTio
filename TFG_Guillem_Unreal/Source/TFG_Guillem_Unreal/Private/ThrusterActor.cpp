
#include "ThrusterActor.h"
#include "InputConnector.h"
#include "Engine/StaticMeshSocket.h"
#include "NiagaraFunctionLibrary.h"
#include "NiagaraComponent.h"

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

	thrusterFX = CreateDefaultSubobject<UNiagaraComponent>(TEXT("ThrusterParticles"));
	static ConstructorHelpers::FObjectFinder<UNiagaraSystem>
		ThrusterParticles(TEXT("/Game/Fab/MixedVFX/Particles/Fires/NS_TorchFire.NS_TorchFire"));

	if (ThrusterParticles.Succeeded())
	{
		thrusterFX->SetAsset(ThrusterParticles.Object);
	}

	mass = 10.0f;
	actorMesh->SetMassOverrideInKg(NAME_None, mass);
	
}

void AThrusterActor::Activate()
{
	thruster->Activate();
	thrusterFX->Activate();
}

void AThrusterActor::Deactivate()
{
	thruster->Deactivate();
	thrusterFX->Deactivate();
}

void AThrusterActor::ToggleActivation()
{
	thruster->ToggleActive();
	thruster->IsActive() ? thrusterFX->Activate() : thrusterFX->Deactivate();
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

	AddInstanceComponent(thrusterFX);

	thrusterFX->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
	thrusterFX->UpdateComponentToWorld();
	thrusterFX->SetRelativeScale3D(FVector(20, 20, 20));
	thrusterFX->SetRelativeRotation(FRotator(180, 0, 0)); //Depends on the given particle system

	AddInstanceComponent(thruster);

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

	thruster->IsActive() ? thrusterFX->Activate() : thrusterFX->Deactivate();
}

