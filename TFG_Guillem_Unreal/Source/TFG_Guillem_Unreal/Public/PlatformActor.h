// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NonActivableActor.h"
#include "PlatformActor.generated.h"

UCLASS()
class TFG_GUILLEM_UNREAL_API APlatformActor : public ANonActivableActor
{
	GENERATED_BODY()


public:
	APlatformActor();


public:
	virtual void Tick(float DeltaTime) override;
	virtual void SetConstraintLimits(UPhysicsConstraintComponent& constraint) override;

protected:
	virtual void BeginPlay() override;
};
