// Fill out your copyright notice in the Description page of Project Settings.


#include "OutputConnector.h"
#include "ThrusterActor.h"
#include "InputConnector.h"
#include "ConnectorUserData.h"

void UOutputConnector::SetConnector(AAttachableActor& attachableActor, FVector relativeAttachPosition, FRotator socketRotation)
{
	Super::SetConnector(attachableActor, relativeAttachPosition, socketRotation);

	constraint = NewObject<UPhysicsConstraintComponent>(&attachableActor);

	//Visual mesh for the connector. Can be changed for a better visualization or to adapt the visuals
	UStaticMesh* sphereMesh = LoadObject<UStaticMesh>(nullptr, TEXT("/Engine/BasicShapes/SphereOutput.SphereOutput"));
	if (sphereMesh)
	{
		connectorMesh->SetStaticMesh(sphereMesh);
		connectorMesh->SetRelativeScale3D(FVector(1.0f) / actorOwner->GetActorRelativeScale3D() * connectorSize);
	}

}

void UOutputConnector::AttachTo(UConnector* connectorToAttach, FVector attachPosition)
{
	//Checking if already connected
	if (connectedTo) return;

	if (UInputConnector* inputConnector = Cast<UInputConnector>(connectorToAttach)) 
	{
		//Checking if the new possible position is correct and doesn't overlap
		if (!inputConnector->CanAdaptActorOwnerTransform(attachPosition, sceneComponent->GetComponentRotation(), this))
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("Object doesn't fit"));
			return;
		}

		//Adapting constraint transform
		constraint->SetWorldLocation(inputConnector->actorOwner->GetActorLocation());
		constraint->SetWorldRotation(sceneComponent->GetComponentRotation());

		//Limits depend on the attached object that has the Input connector
		inputConnector->actorOwner->SetConstraintLimits(*constraint);

		//Setting the attached actors
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

		//Setting the connectedTo variable for both connectors to set their availability
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
		otherConnector->Disconnect(); //Calls for its connected connector disconnect() while erasing it from the pointer

		constraint->SetConstrainedComponents(nullptr, NAME_None, nullptr, NAME_None); //Removing attachment
		constraint->UnregisterComponent();
		actorOwner->RemoveInstanceComponent(constraint); //Removing component
	}
}
