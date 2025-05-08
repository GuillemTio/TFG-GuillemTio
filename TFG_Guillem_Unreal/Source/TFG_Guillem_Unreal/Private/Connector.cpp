// Fill out your copyright notice in the Description page of Project Settings.


#include "Connector.h"
#include "AttachableActor.h"
#include "ConnectorUserData.h"

void UConnector::SetConnector(AAttachableActor& attachableActor, FVector relativeAttachPosition, FRotator socketRotation)
{
	actorOwner = &attachableActor;

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

	connectorMesh->SetSimulatePhysics(false);
	connectorMesh->SetEnableGravity(false);
	connectorMesh->SetCollisionEnabled(ECollisionEnabled::QueryOnly);

	connectorMesh->SetCollisionProfileName("Connectors");

	UConnectorUserData* connectorData = NewObject<UConnectorUserData>(this);
	connectorData->connectorAttached = this;
	connectorMesh->AddAssetUserData(connectorData);
}

void UConnector::AttachTo(UConnector* connectorToAttach, FVector attachPosition)
{
}

void UConnector::Disconnect()
{
}

FVector UConnector::GetPosition() const
{
    return sceneComponent->GetComponentLocation();
}

bool UConnector::IsConnected() const
{
    return connectedTo!=nullptr;
}

