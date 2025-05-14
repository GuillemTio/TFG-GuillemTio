// Fill out your copyright notice in the Description page of Project Settings.


#include "ClawsActor.h"
#include "InputConnector.h"
#include "Engine/StaticMeshSocket.h"

AClawsActor::AClawsActor()
{
	//Claws actor has 3 meshes, the main one works as the base, and the other two make the grabbing claws
	actorMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ClawBaseMesh"));
	SetRootComponent(actorMesh);

	clawMesh1 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Claw1Mesh"));
	clawMesh1->SetupAttachment(actorMesh);

	clawMesh2 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Claw2Mesh"));
	clawMesh2->SetupAttachment(actorMesh);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ClawBaseMeshAsset(TEXT("/Game/Media/3DModels/ClawBase.ClawBase"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> Claw1MeshAsset(TEXT("/Game/Media/3DModels/Claw1.Claw1"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> Claw2MeshAsset(TEXT("/Game/Media/3DModels/Claw2.Claw2"));

	if (ClawBaseMeshAsset.Succeeded())
	{
		actorMesh->SetStaticMesh(ClawBaseMeshAsset.Object);
		actorMesh->SetSimulatePhysics(true);
	}
	if (Claw1MeshAsset.Succeeded())
	{
		clawMesh1->SetStaticMesh(Claw1MeshAsset.Object);
		clawMesh1->SetSimulatePhysics(true);
		clawMesh1->SetRelativeLocation(FVector(-70.0, 0.0, 0.0));
	}
	if (Claw2MeshAsset.Succeeded())
	{
		clawMesh2->SetStaticMesh(Claw2MeshAsset.Object);
		clawMesh2->SetSimulatePhysics(true);
		clawMesh2->SetRelativeLocation(FVector(70.0, 0.0, 0.0));
	}

	mass = 20.0f;
	actorMesh->SetMassOverrideInKg(NAME_None, mass);
	clawMesh1->SetMassOverrideInKg(NAME_None, mass);
	clawMesh2->SetMassOverrideInKg(NAME_None, mass);
}

void AClawsActor::Tick(float DeltaTime)
{
}

//Activate and Deactivate set the angular velocity target in opposite ways for each claw to open and close.
void AClawsActor::Activate()
{
	constraintClaw1->SetAngularVelocityTarget(FVector(0.0, -1.0, 0.0));
	constraintClaw2->SetAngularVelocityTarget(FVector(0.0, 1.0, 0.0));
}

void AClawsActor::Deactivate()
{
	constraintClaw1->SetAngularVelocityTarget(FVector(0.0, 0.5, 0.0));
	constraintClaw2->SetAngularVelocityTarget(FVector(0.0, -0.5, 0.0));
}

void AClawsActor::ToggleActivation()
{
	areClawsClosed ? Deactivate() : Activate();
	areClawsClosed = !areClawsClosed;
}

void AClawsActor::SetConstraintLimits(UPhysicsConstraintComponent& constraint)
{
	constraint.SetLinearXLimit(LCM_Locked, 0.0f);
	constraint.SetLinearYLimit(LCM_Locked, 0.0f);
	constraint.SetLinearZLimit(LCM_Locked, 0.0f);

	constraint.SetAngularSwing1Limit(ACM_Locked, 0.0f);
	constraint.SetAngularSwing2Limit(ACM_Locked, 0.0f);
	constraint.SetAngularTwistLimit(ACM_Locked, 0.0f);
}

void AClawsActor::BeginPlay()
{
	Super::BeginPlay();

	SetClawsConstraints(); //Sets the constraints between the claws and the base mesh

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

	Deactivate();
}

void AClawsActor::SetClawsConstraints()
{
	constraintClaw1 = NewObject<UPhysicsConstraintComponent>(this);
	constraintClaw2 = NewObject<UPhysicsConstraintComponent>(this);

	constraintClaw1->SetWorldLocation(clawMesh1->GetComponentLocation());
	constraintClaw2->SetWorldLocation(clawMesh2->GetComponentLocation());

	constraintClaw1->SetWorldRotation(clawMesh1->GetComponentRotation());
	constraintClaw2->SetWorldRotation(clawMesh2->GetComponentRotation());

	//They both can only turn in one way
	constraintClaw1->SetLinearXLimit(LCM_Locked, 0.0f);
	constraintClaw1->SetLinearYLimit(LCM_Locked, 0.0f);
	constraintClaw1->SetLinearZLimit(LCM_Locked, 0.0f);
	constraintClaw1->SetAngularSwing1Limit(ACM_Locked, 0.0f);
	constraintClaw1->SetAngularSwing2Limit(ACM_Limited, 25.0f);
	constraintClaw1->SetAngularTwistLimit(ACM_Locked, 0.0f);

	constraintClaw2->SetLinearXLimit(LCM_Locked, 0.0f);
	constraintClaw2->SetLinearYLimit(LCM_Locked, 0.0f);
	constraintClaw2->SetLinearZLimit(LCM_Locked, 0.0f);
	constraintClaw2->SetAngularSwing1Limit(ACM_Locked, 0.0f);
	constraintClaw2->SetAngularSwing2Limit(ACM_Limited, 25.0f);
	constraintClaw2->SetAngularTwistLimit(ACM_Locked, 0.0f);

	//Important settings for correctly setting the angular velocity targets
	constraintClaw1->SetAngularDriveMode(EAngularDriveMode::TwistAndSwing);
	constraintClaw1->SetAngularVelocityDriveTwistAndSwing(false, true);
	constraintClaw1->SetAngularDriveParams(30.f, 80.f, 0.f);

	constraintClaw2->SetAngularDriveMode(EAngularDriveMode::TwistAndSwing);
	constraintClaw2->SetAngularVelocityDriveTwistAndSwing(false, true);
	constraintClaw2->SetAngularDriveParams(30.f, 80.f, 0.f);

	constraintClaw1->SetConstrainedComponents(
		Cast<UPrimitiveComponent>(GetRootComponent()), NAME_None,
		Cast<UPrimitiveComponent>(clawMesh1), NAME_None
	);
	
	constraintClaw2->SetConstrainedComponents(
		Cast<UPrimitiveComponent>(GetRootComponent()), NAME_None,
		Cast<UPrimitiveComponent>(clawMesh2), NAME_None
	);

	constraintClaw1->UpdateConstraintFrames();
	constraintClaw2->UpdateConstraintFrames();

	AddInstanceComponent(constraintClaw1);
	AddInstanceComponent(constraintClaw2);

	constraintClaw1->RegisterComponent();
	constraintClaw2->RegisterComponent();

	constraintClaw1->AttachToComponent(GetRootComponent(), FAttachmentTransformRules::KeepRelativeTransform);
	constraintClaw2->AttachToComponent(GetRootComponent(), FAttachmentTransformRules::KeepRelativeTransform);


}
