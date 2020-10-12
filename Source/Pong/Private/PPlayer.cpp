// Fill out your copyright notice in the Description page of Project Settings.


#include "PPlayer.h"
#include <GameFramework/SpringArmComponent.h>
#include <Camera/CameraComponent.h>

// Sets default values
APPlayer::APPlayer()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PlayerMesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
	PlayerMesh->SetupAttachment(RootComponent);

	//SpringArm = CreateDefaultSubobject<USpringArmComponent>("SpringArm");
	//SpringArm->SetupAttachment(RootComponent);
	//SpringArm->SetRelativeRotation(FRotator(0.f, -90.f, 0.f));
	/*SpringArm->SocketOffset = FVector(0.0f, 0.0f, 300.0f);*/
	//SpringArm->TargetArmLength = 500.0f;
	//SpringArm->bEnableCameraLag = true;
	//SpringArm->CameraLagSpeed = 10.0f;

	//FollowCamera = CreateDefaultSubobject<UCameraComponent>("FollowCamera");
	//FollowCamera->SetupAttachment(SpringArm);
	//FollowCamera->SetProjectionMode(ECameraProjectionMode::Orthographic);
	//FollowCamera->SetOrthoWidth(5000.0f);
	//FollowCamera->bUsePawnControlRotation = false;

	/*AutoPossessPlayer = EAutoReceiveInput::Player0;*/

}

// Called when the game starts or when spawned
void APPlayer::BeginPlay()
{
	Super::BeginPlay();
	
}


// Called every frame
void APPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	float XLocation = GetActorLocation().X;
	if (XLocation >= 660)
	{
		XLocation = 660;
		SetActorLocation(FVector(XLocation, GetActorLocation().Y, GetActorLocation().Z));
	}
	else if (XLocation <= -500)
	{
		XLocation = -500;
		SetActorLocation(FVector(XLocation, GetActorLocation().Y, GetActorLocation().Z));
	}
}


void APPlayer::MoveUp(float Value)
{
	/*AddMovementInput(FVector::UpVector, Value, true);*/

	PlayerMesh->AddForce(FVector(Value, 0, 0) * Speed);
}

// Called to bind functionality to input
void APPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveUp", this, &APPlayer::MoveUp);
}

