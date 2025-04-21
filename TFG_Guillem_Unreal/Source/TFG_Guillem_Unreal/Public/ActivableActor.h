// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttachableActor.h"
#include "ActivableActor.generated.h"

/**
 * 
 */
UCLASS(Abstract)
class TFG_GUILLEM_UNREAL_API AActivableActor : public AAttachableActor
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable)
	virtual void Activate() PURE_VIRTUAL(AActivableActor::Activate, );

	UFUNCTION(BlueprintCallable)
	virtual void Deactivate() PURE_VIRTUAL(AActivableActor::Deactivate, );

	UFUNCTION(BlueprintCallable)
	virtual void ToggleActivation() PURE_VIRTUAL(AActivableActor::ToggleActivation, );

	UFUNCTION(BlueprintCallable)
	bool ShouldActivate();

};
