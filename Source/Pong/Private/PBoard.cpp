// Fill out your copyright notice in the Description page of Project Settings.


#include "PBoard.h"

// Sets default values
APBoard::APBoard()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Root = CreateDefaultSubobject<USceneComponent>("Root");
	RootComponent = Root;

	LeftBoundary = CreateDefaultSubobject<UStaticMeshComponent>("LeftBoundary");
	LeftBoundary->SetupAttachment(RootComponent);

	RightBoundary = CreateDefaultSubobject<UStaticMeshComponent>("RightBoundary");
	RightBoundary->SetupAttachment(RootComponent);

	TopBoundary = CreateDefaultSubobject<UStaticMeshComponent>("TopBoundary");
	TopBoundary->SetupAttachment(RootComponent);

	BottomBoundary = CreateDefaultSubobject<UStaticMeshComponent>("BottomBoundary");
	BottomBoundary->SetupAttachment(RootComponent);

}

// Called when the game starts or when spawned
void APBoard::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APBoard::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

