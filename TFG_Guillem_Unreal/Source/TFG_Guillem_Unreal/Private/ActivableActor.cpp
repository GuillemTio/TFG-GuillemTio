// Fill out your copyright notice in the Description page of Project Settings.


#include "ActivableActor.h"
#include "Connector.h"

bool AActivableActor::ShouldActivate()
{
	for (const UConnector* connector : connectors)
	{
		if (connector->IsConnected()) return true;
	}

	return false;
}
