// Fill out your copyright notice in the Description page of Project Settings.


#include "Connector.h"

void UConnector::SetConnector(AAttachableActor& attachableActor, FVector relativeAttachPosition, FRotator socketRotation)
{
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

