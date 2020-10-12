// Fill out your copyright notice in the Description page of Project Settings.


#include "PPawnMovementComponent.h"

void UPPawnMovementComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	if (!PawnOwner || !UpdatedComponent || ShouldSkipUpdate(DeltaTime))
	{
		return;
	}
}
