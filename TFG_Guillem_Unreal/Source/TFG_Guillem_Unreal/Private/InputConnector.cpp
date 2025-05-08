// Fill out your copyright notice in the Description page of Project Settings.


#include "InputConnector.h"
#include "OutputConnector.h"
#include "AttachableActor.h"
#include "ConnectorUserData.h"
#include "Kismet/KismetMathLibrary.h"
#include "Engine/OverlapResult.h"

void UInputConnector::SetConnector(AAttachableActor& attachableActor, FVector relativeAttachPosition, FRotator socketRotation)
{

	Super::SetConnector(attachableActor, relativeAttachPosition, socketRotation);

	UStaticMesh* sphereMesh = LoadObject<UStaticMesh>(nullptr, TEXT("/Engine/BasicShapes/SphereInput.SphereInput"));
	if (sphereMesh)
	{
		connectorMesh->SetStaticMesh(sphereMesh);
		connectorMesh->SetRelativeScale3D(FVector(1.0f) / actorOwner->GetActorScale3D() * connectorSize);
	}

}

void UInputConnector::SetConnectedTo(UConnector* connector)
{
	connectedTo = connector;
}

void UInputConnector::AttachTo(UConnector* connectorToAttach, FVector attachPosition)
{
	if (Cast<UOutputConnector>(connectorToAttach)) {
		connectorToAttach->AttachTo(this, attachPosition);
	}
}

void UInputConnector::Disconnect()
{
	if (connectedTo)
	{
		UConnector* otherConnector = connectedTo;
		connectedTo = nullptr;
		otherConnector->Disconnect();

		actorOwner->SetPhysicsSimulation(true);

		actorOwner->EjectionImpulse(-sceneComponent->GetComponentRotation().Vector()); 
	}
}

void UInputConnector::AdaptActorOwnerLocation(FVector attachPosition)
{
	actorOwner->SetActorLocation(actorOwner->GetActorLocation() - sceneComponent->GetComponentLocation() + attachPosition);
	
	//DrawDebugLine(
	//	GetWorld(),
	//	sceneComponent->GetComponentLocation(),
	//	sceneComponent->GetComponentLocation() + sceneComponent->GetForwardVector() * 500,
	//	FColor::Red,
	//	true,
	//	10.0
	//);

}

void UInputConnector::AdaptActorOwnerRotation(FRotator lookAt)
{

	/*DrawDebugLine(
		GetWorld(),
		sceneComponent->GetComponentLocation(),
		sceneComponent->GetComponentLocation() + lookAt.RotateVector(-FVector::ForwardVector) * 300,
		FColor::Green,
		true,
		10.0
	);*/

	FRotator relativeRotation = sceneComponent->GetRelativeRotation();

	FRotator finalRotation = UKismetMathLibrary::ComposeRotators(relativeRotation, lookAt);

	FVector x = finalRotation.RotateVector(FVector::ForwardVector);
	FVector y = finalRotation.RotateVector(FVector::RightVector);
	FVector z = finalRotation.RotateVector(FVector::UpVector);

	actorOwner->SetActorRotation(finalRotation);

}

bool UInputConnector::CanAdaptActorOwnerTransform(FVector attachPosition, FRotator lookAt, const UConnector* otherConnector)
{
	FVector currentPosition = actorOwner->GetActorLocation();
	FRotator currentRotation = actorOwner->GetActorRotation();

	AdaptActorOwnerRotation(lookAt);
	AdaptActorOwnerLocation(attachPosition);

	//UPrimitiveComponent* RootComp = Cast<UPrimitiveComponent>(actorOwner->GetRootComponent());

	FComponentQueryParams parameters;
	parameters.AddIgnoredActor(actorOwner);
	parameters.AddIgnoredActor(otherConnector->actorOwner);

	TArray<FOverlapResult> overlaps;
	bool isOverlapping = actorOwner->GetWorld()->ComponentOverlapMulti(
		overlaps,
		actorOwner->GetComponentByClass<UStaticMeshComponent>(),
		actorOwner->GetActorLocation(),
		actorOwner->GetActorQuat(),
		parameters
	);

	if (isOverlapping)
	{
		for (const FOverlapResult& result : overlaps)
		{
			if (AActor* overlappedActor = result.GetActor())
			{
				UE_LOG(LogTemp, Warning, TEXT("Overlapping with: %s"), *overlappedActor->GetName());
			}
		}

		actorOwner->SetActorRotation(currentRotation);
		actorOwner->SetActorLocation(currentPosition);
		return false;
	}

	return true;
}
