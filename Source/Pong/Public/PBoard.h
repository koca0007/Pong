// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PBoard.generated.h"



UCLASS()
class PONG_API APBoard : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APBoard();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Board")
	USceneComponent* Root;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Board")
	UStaticMeshComponent* LeftBoundary;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Board")
	UStaticMeshComponent* RightBoundary;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Board")
	UStaticMeshComponent* TopBoundary;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Board")
	UStaticMeshComponent* BottomBoundary;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
