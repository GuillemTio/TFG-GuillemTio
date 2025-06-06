// Fill out your copyright notice in the Description page of Project Settings.


#include "SpringActor.h"
#include "InputConnector.h"
#include "Engine/StaticMeshSocket.h"

ASpringActor::ASpringActor()
{
	//This actor uses 3 meshes just for visuals. Only the main actor actually has collision
	actorMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SpringMesh"));
	SetRootComponent(actorMesh);

	baseMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SpringBaseMesh"));
	baseMesh->SetupAttachment(actorMesh);

	handleMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("HandleMesh"));
	handleMesh->SetupAttachment(actorMesh);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> SpringMeshAsset(TEXT("/Game/Media/3DModels/Spring.Spring"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> SpringBaseMeshAsset(TEXT("/Game/Media/3DModels/SpringBox.SpringBox"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> HandleMeshAsset(TEXT("/Game/Media/3DModels/SpringHandle.SpringHandle"));

	if (SpringMeshAsset.Succeeded())
	{
		actorMesh->SetStaticMesh(SpringMeshAsset.Object);
		actorMesh->SetRelativeScale3D(restScale); //Starting with the scale on rest
	}
	if (SpringBaseMeshAsset.Succeeded())
	{
		baseMesh->SetStaticMesh(SpringBaseMeshAsset.Object);
	}
	if (HandleMeshAsset.Succeeded())
	{
		handleMesh->SetStaticMesh(HandleMeshAsset.Object);
	}


}

void ASpringActor::Tick(float DeltaTime)
{
	//Only for visual feedback
	actorMesh->SetRelativeScale3D(FMath::Lerp(actorMesh->GetRelativeScale3D(), restScale, 0.1f));
}

void ASpringActor::Activate()
{
	//Generates impulse on the opposite Up direction of the main actor
	actorMesh->GetUpVector().Normalize();
	actorMesh->AddImpulse(-actorMesh->GetUpVector() * impulsePower);
	actorMesh->SetRelativeScale3D(onImpulseScale);
}

void ASpringActor::Deactivate()
{
}

void ASpringActor::ToggleActivation()
{
	FHitResult hitResult;

	FCollisionQueryParams parameters;
	parameters.AddIgnoredActor(this); // Ignores itself

	//Depending on the line trace on static objects, the spring activates or not
	bool hit = GetWorld()->LineTraceSingleByChannel(
		hitResult,
		actorMesh->GetComponentLocation() + actorMesh->GetUpVector() * 10,
		actorMesh->GetComponentLocation() + actorMesh->GetUpVector() * rayDistance,
		ECC_WorldStatic,
		parameters
	);

	/* RAY DEBUG
	DrawDebugLine(GetWorld(),
		actorMesh->GetComponentLocation() + actorMesh->GetUpVector() * 10,
		actorMesh->GetComponentLocation() + actorMesh->GetUpVector() * rayDistance,
		FColor::Magenta,
		true,
		10.0);*/

	if (hit)
	{
		Activate();
	}
}

void ASpringActor::SetConstraintLimits(UPhysicsConstraintComponent& constraint)
{
	constraint.SetLinearXLimit(LCM_Locked, 0.0f);
	constraint.SetLinearYLimit(LCM_Locked, 0.0f);
	constraint.SetLinearZLimit(LCM_Locked, 0.0f);

	constraint.SetAngularSwing1Limit(ACM_Locked, 0.0f);
	constraint.SetAngularSwing2Limit(ACM_Locked, 0.0f);
	constraint.SetAngularTwistLimit(ACM_Locked, 0.0f);
}

void ASpringActor::BeginPlay()
{
	Super::BeginPlay();

	actorMesh->SetSimulatePhysics(true);
	baseMesh->SetSimulatePhysics(true);
	handleMesh->SetSimulatePhysics(true);
	mass = 30.0f;
	actorMesh->SetMassOverrideInKg(NAME_None, mass);
	baseMesh->SetMassOverrideInKg(NAME_None, mass);
	handleMesh->SetMassOverrideInKg(NAME_None, mass);

	SetSpringConstraints();

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

			break;

		}
	}
}

void ASpringActor::SetSpringConstraints()
{
	//This sets up the physical constraints for the two extra meshes

	constraintBase = NewObject<UPhysicsConstraintComponent>(this);
	constraintHandle = NewObject<UPhysicsConstraintComponent>(this);

	constraintBase->SetWorldLocation(baseMesh->GetComponentLocation());
	constraintHandle->SetWorldLocation(handleMesh->GetComponentLocation());

	constraintBase->SetWorldRotation(baseMesh->GetComponentRotation());
	constraintHandle->SetWorldRotation(handleMesh->GetComponentRotation());

	constraintBase->SetLinearXLimit(LCM_Locked, 0.0f);
	constraintBase->SetLinearYLimit(LCM_Locked, 0.0f);
	constraintBase->SetLinearZLimit(LCM_Locked, 0.0f);
	constraintBase->SetAngularSwing1Limit(ACM_Locked, 0.0f);
	constraintBase->SetAngularSwing2Limit(ACM_Locked, 0.0f);
	constraintBase->SetAngularTwistLimit(ACM_Locked, 0.0f);

	constraintHandle->SetLinearXLimit(LCM_Locked, 0.0f);
	constraintHandle->SetLinearYLimit(LCM_Locked, 0.0f);
	constraintHandle->SetLinearZLimit(LCM_Locked, 0.0f);
	constraintHandle->SetAngularSwing1Limit(ACM_Locked, 0.0f);
	constraintHandle->SetAngularSwing2Limit(ACM_Locked, 0.0f);
	constraintHandle->SetAngularTwistLimit(ACM_Locked, 0.0f);

	constraintBase->SetConstrainedComponents(
		Cast<UPrimitiveComponent>(GetRootComponent()), NAME_None,
		Cast<UPrimitiveComponent>(baseMesh), NAME_None
	);

	constraintHandle->SetConstrainedComponents(
		Cast<UPrimitiveComponent>(GetRootComponent()), NAME_None,
		Cast<UPrimitiveComponent>(handleMesh), NAME_None
	);

	constraintBase->UpdateConstraintFrames();
	constraintHandle->UpdateConstraintFrames();

	AddInstanceComponent(constraintBase);
	AddInstanceComponent(constraintHandle);

	constraintBase->RegisterComponent();
	constraintHandle->RegisterComponent();

	constraintBase->AttachToComponent(GetRootComponent(), FAttachmentTransformRules::KeepRelativeTransform);
	constraintHandle->AttachToComponent(GetRootComponent(), FAttachmentTransformRules::KeepRelativeTransform);
}
