// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PBall.generated.h"

UCLASS()
class PONG_API APBall : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APBall();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Player")
	class UStaticMeshComponent* BallMesh;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
