// Fill out your copyright notice in the Description page of Project Settings.


#include "OutputConnector.h"
#include "ThrusterActor.h"
#include "InputConnector.h"
#include "ConnectorUserData.h"

void UOutputConnector::SetConnector(AAttachableActor& attachableActor, FVector relativeAttachPosition, FRotator socketRotation)
{
	actorOwner = &attachableActor;
	constraint = NewObject<UPhysicsConstraintComponent>(&attachableActor);

	sceneComponent = NewObject<USceneComponent>(actorOwner);
	actorOwner->AddInstanceComponent(sceneComponent);

	sceneComponent->RegisterComponent();
	sceneComponent->AttachToComponent(actorOwner->GetRootComponent(), FAttachmentTransformRules::KeepRelativeTransform);
	sceneComponent->SetRelativeLocation(relativeAttachPosition);
	sceneComponent->SetRelativeRotation(socketRotation);

	connectorMesh = NewObject<UStaticMeshComponent>(actorOwner);
	actorOwner->AddInstanceComponent(connectorMesh);

	connectorMesh->RegisterComponent();
	connectorMesh->AttachToComponent(sceneComponent, FAttachmentTransformRules::KeepRelativeTransform);
	connectorMesh->UpdateComponentToWorld();

	UStaticMesh* cubeMesh = LoadObject<UStaticMesh>(nullptr, TEXT("/Engine/BasicShapes/SphereOutput.SphereOutput"));
	if (cubeMesh)
	{
		connectorMesh->SetStaticMesh(cubeMesh);
		connectorMesh->SetRelativeScale3D(FVector(1.0f) / actorOwner->GetActorRelativeScale3D() * connectorSize);
	}

	connectorMesh->SetSimulatePhysics(false);
	connectorMesh->SetEnableGravity(false);
	connectorMesh->SetCollisionEnabled(ECollisionEnabled::QueryOnly);

	connectorMesh->SetCollisionProfileName("Connectors");

	UConnectorUserData* connectorData = NewObject<UConnectorUserData>(this);
	connectorData->connectorAttached = this;
	connectorMesh->AddAssetUserData(connectorData);
}

void UOutputConnector::AttachTo(UConnector* connectorToAttach, FVector attachPosition)
{
	if (connectedTo) return;

	if (UInputConnector* inputConnector = Cast<UInputConnector>(connectorToAttach)) 
	{

		if (!inputConnector->CanAdaptActorOwnerTransform(attachPosition, sceneComponent->GetComponentRotation(), this))
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("Object doesn't fit"));
			return;
		}

		constraint->SetWorldLocation(inputConnector->actorOwner->GetActorLocation());
		constraint->SetWorldRotation(sceneComponent->GetComponentRotation());

		inputConnector->actorOwner->SetConstraintLimits(*constraint);

		constraint->SetConstrainedComponents(
			actorOwner->FindComponentByClass<UPrimitiveComponent>(), NAME_None,
			inputConnector->actorOwner->FindComponentByClass<UPrimitiveComponent>(), NAME_None
		);

		constraint->UpdateConstraintFrames();

		actorOwner->AddInstanceComponent(constraint);
		constraint->RegisterComponent();
		constraint->AttachToComponent(actorOwner->GetRootComponent(), FAttachmentTransformRules::KeepWorldTransform);

		/* DEBUG TO SEE CONNECTIONS
		DrawDebugPoint(GetWorld(), constraint->GetComponentLocation(), 30.0f, FColor::Green, false, 20.0f);
		DrawDebugLine(GetWorld(), constraint->GetComponentLocation(), actorOwner->GetActorLocation(), FColor::Red, true, 20.0f, 0, 5.0f);
		DrawDebugLine(GetWorld(), constraint->GetComponentLocation(), attachableActor->GetActorLocation(), FColor::Blue, true, 20.0f, 0, 5.0f);*/

		connectedTo = inputConnector;
		inputConnector->SetConnectedTo(this);
	}
}

void UOutputConnector::Disconnect()
{
	if (connectedTo)
	{
		UConnector* otherConnector = connectedTo;
		connectedTo = nullptr;
		otherConnector->Disconnect();

		constraint->SetConstrainedComponents(nullptr, NAME_None, nullptr, NAME_None);
		constraint->UnregisterComponent();
		actorOwner->RemoveInstanceComponent(constraint);
	}
}
