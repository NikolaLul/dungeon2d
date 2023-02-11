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
	setmyflipbook();

}

// Called to bind functionality to input
void AMyPaperCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis("UpOrDown", this, &AMyPaperCharacter::UpOrDown);
	PlayerInputComponent->BindAxis("LeftOrRight", this, &AMyPaperCharacter::LeftOrRight);
	PlayerInputComponent->BindAxis("Hit", this, &AMyPaperCharacter::Hit);
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

void AMyPaperCharacter::Hit(float Value) {
	is_Hitting = Value;
}

void AMyPaperCharacter::setmyflipbook()
{
	if (LeftOrRight_val != 0 || UpOrDown_val != 0) {
		if (UpOrDown_val > 0) {
			lmd = LastMoveDirection::Up;
		}
		else if(UpOrDown_val < 0){
			lmd = LastMoveDirection::Down;
		}
		else if (LeftOrRight_val > 0) {
			lmd = LastMoveDirection::Right;
		}
		else {
			lmd = LastMoveDirection::Left;
		}
	}

	bool WalkOrIdle = GetVelocity().Size() > 0;

	switch (lmd) {
	case LastMoveDirection::Up:
		if (WalkOrIdle) {
			flipbook_val = Walk_Up;
		}
		else {
			flipbook_val = Idle_Up;
		}
		break;
	case LastMoveDirection::Down:
		if (WalkOrIdle) {
			flipbook_val = Walk_Down;
		}
		else {
			flipbook_val = Idle_Down;
		}
		break;
	case LastMoveDirection::Right:
		if (WalkOrIdle) {
			flipbook_val = Walk_Right;
		}
		else {
			flipbook_val = Idle_Right;
		}
		break;
	case LastMoveDirection::Left:
		if (WalkOrIdle) {
			flipbook_val = Walk_Left;
		}
		else {
			flipbook_val = Idle_Left;
		}
		break;
	}

	if (is_Hitting != 0) {
		switch (lmd) {
		case LastMoveDirection::Up:
			flipbook_val = Hitting_Up;
			break;
		case LastMoveDirection::Down:
			flipbook_val = Hitting_Down;
			break;
		case LastMoveDirection::Right:
			flipbook_val = Hitting_Right;
			break;
		case LastMoveDirection::Left:
			flipbook_val = Hitting_Left;
			break;
		}
	}

	GetSprite()->SetFlipbook(flipbook_val);
}
