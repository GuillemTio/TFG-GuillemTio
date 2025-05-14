// Fill out your copyright notice in the Description page of Project Settings.


#include "ActivableActor.h"
#include "Connector.h"

bool AActivableActor::ShouldActivate()
{
	//Checks if any connector from the actor is connected
	//Used on gameplay to know if the actor should be activated depending on its attachment status
	for (const UConnector* connector : connectors)
	{
		if (connector->IsConnected()) return true;
	}

	return false;
}
