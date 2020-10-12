// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "PPlayer.generated.h"

UCLASS()
class PONG_API APPlayer : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	APPlayer();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Player")
	class UStaticMeshComponent* PlayerMesh;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Player")
	float Speed;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void MoveUp(float Value);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
