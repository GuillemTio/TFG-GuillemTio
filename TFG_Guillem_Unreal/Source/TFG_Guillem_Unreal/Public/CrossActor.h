// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NonActivableActor.h"
#include "CrossActor.generated.h"

/**
 * 
 */
UCLASS()
class TFG_GUILLEM_UNREAL_API ACrossActor : public ANonActivableActor
{
	GENERATED_BODY()

public:
	ACrossActor();

public:
	virtual void SetConstraintLimits(UPhysicsConstraintComponent& constraint) override;

protected:
	virtual void BeginPlay() override;
	
};
