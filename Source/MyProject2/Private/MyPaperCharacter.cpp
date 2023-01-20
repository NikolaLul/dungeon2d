// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPaperCharacter.h"

// Sets default values
AMyPaperCharacter::AMyPaperCharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyPaperCharacter::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AMyPaperCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMyPaperCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis("UpOrDown", this, &AMyPaperCharacter::UpOrDown);
	PlayerInputComponent->BindAxis("LeftOrRight", this, &AMyPaperCharacter::LeftOrRight);

	InputComponent->BindAxis(TEXT("UpOrDown"));
	InputComponent->BindAxis(TEXT("LeftOrRight"));
}

void AMyPaperCharacter::UpOrDown(float Value)
{
	FVector Direction = FRotationMatrix(Controller->GetControlRotation()).GetScaledAxis(EAxis::Z);
	AddMovementInput(Direction, Value);
}

void AMyPaperCharacter::LeftOrRight(float Value)
{
	FVector Direction = FRotationMatrix(Controller->GetControlRotation()).GetScaledAxis(EAxis::X);
	AddMovementInput(Direction, Value);
}

void AMyPaperCharacter::setmyflipbook()
{
	if () {

	}
	else {

	}
}
