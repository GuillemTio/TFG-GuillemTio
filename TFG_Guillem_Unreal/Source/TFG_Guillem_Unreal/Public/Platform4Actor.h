// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NonActivableActor.h"
#include "Platform4Actor.generated.h"

/**
 * 
 */
UCLASS()
class TFG_GUILLEM_UNREAL_API APlatform4Actor : public ANonActivableActor
{
	GENERATED_BODY()
	
public:
	APlatform4Actor();

public:
	virtual void Tick(float DeltaTime) override;
	virtual void SetConstraintLimits(UPhysicsConstraintComponent& constraint) override;

protected:
	virtual void BeginPlay() override;
};
