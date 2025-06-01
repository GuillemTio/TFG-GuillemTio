
#include "ThrusterActor.h"
#include "InputConnector.h"
#include "Engine/StaticMeshSocket.h"
#include "NiagaraFunctionLibrary.h"
#include "NiagaraComponent.h"

AThrusterActor::AThrusterActor()
{
	actorMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ThrusterMesh"));
	SetRootComponent(actorMesh);
	static ConstructorHelpers::FObjectFinder<UStaticMesh> RocketMeshAsset(TEXT("/Game/Fab/Toy_Rocket_4K_Free_3D_model/ToyRocket.ToyRocket"));

	if (RocketMeshAsset.Succeeded())
	{
		actorMesh->SetStaticMesh(RocketMeshAsset.Object);
		actorMesh->SetRelativeScale3D(FVector(0.3f, 0.3f, 0.3f));
	}
	else GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, "Mesh not correctly set");

	//Using the thruster component from Unreal, which has similar activation functions, but could have a different workaround
	thruster = CreateDefaultSubobject<UPhysicsThrusterComponent>(TEXT("ThrusterComponent"));

	//Setting particle system
	thrusterFX = CreateDefaultSubobject<UNiagaraComponent>(TEXT("ThrusterParticles"));
	static ConstructorHelpers::FObjectFinder<UNiagaraSystem>
		ThrusterParticles(TEXT("/Game/Fab/MixedVFX/Particles/Fires/NS_TorchFire.NS_TorchFire"));

	if (ThrusterParticles.Succeeded())
	{
		thrusterFX->SetAsset(ThrusterParticles.Object);
	}

	
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

	actorMesh->SetSimulatePhysics(true);
	mass = 10.0f;
	actorMesh->SetMassOverrideInKg(NAME_None, mass);

	AddInstanceComponent(thrusterFX);

	thrusterFX->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
	thrusterFX->UpdateComponentToWorld();
	thrusterFX->SetRelativeScale3D(FVector(20, 20, 20));
	thrusterFX->SetRelativeRotation(FRotator(180, 0, 0)); //Depends on the given particle system

	AddInstanceComponent(thruster);

	//Setting up the thruster component
	thruster->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
	thruster->UpdateComponentToWorld();
	thruster->ThrustStrength = thrusterPower;
	thruster->SetRelativeRotation(FVector::DownVector.Rotation());

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

	thruster->IsActive() ? thrusterFX->Activate() : thrusterFX->Deactivate();
}

