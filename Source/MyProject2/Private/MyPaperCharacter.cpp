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
}

void AMyPaperCharacter::UpOrDown(float Value)
{
	FVector Direction = FRotationMatrix(Controller->GetControlRotation()).GetScaledAxis(EAxis::Z);
	AddMovementInput(Direction, Value);
	UpOrDown_val = Value;
}

void AMyPaperCharacter::LeftOrRight(float Value)
{
	FVector Direction = FRotationMatrix(Controller->GetControlRotation()).GetScaledAxis(EAxis::X);
	AddMovementInput(Direction, Value);
	LeftOrRight_val = Value;
}

void AMyPaperCharacter::setmyflipbook()
{
	if (LeftOrRight_val != 0 || UpOrDown_val != 0) {
		if (UpOrDown_val > 0) {
			setLMD(LastMoveDirection::Up);
		}
		else if(UpOrDown_val < 0){
			setLMD(LastMoveDirection::Down);
		}
		else if (LeftOrRight_val > 0) {
			setLMD(LastMoveDirection::Right);
		}
		else {
			setLMD(LastMoveDirection::Left);
		}
	}
}
