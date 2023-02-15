// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperCharacter.h"
#include "PaperFlipbookComponent.h"
#include "Enum_class.h"
#include "Components/WidgetComponent.h"
#include "Components/ProgressBar.h"
#include "MyPaperCharacter.generated.h"

UCLASS()
class MYPROJECT2_API AMyPaperCharacter : public APaperCharacter
{
	GENERATED_BODY()
	
public:
	// Sets default values for this character's properties
	AMyPaperCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION()
		void UpOrDown(float Value);

	UFUNCTION()
		void LeftOrRight(float Value);

	UFUNCTION()
		void Hit(float Value);

	UPROPERTY(EditAnywhere)
		TSubclassOf<class UUserWidget> HealthBarWidgetClass;

	UUserWidget* HealthBarWidget;

	UPROPERTY(EditAnywhere)
		float Health = 100;

	void setmyflipbook();

	float UpOrDown_val;
	float LeftOrRight_val;
	float is_Hitting;

	LastMoveDirection lmd;

	UPROPERTY(EditAnywhere)
		UPaperFlipbook* flipbook_val;

	UPROPERTY(EditAnywhere)
		UPaperFlipbook* Idle_Up;
	UPROPERTY(EditAnywhere)
		UPaperFlipbook* Idle_Down;
	UPROPERTY(EditAnywhere)
		UPaperFlipbook* Idle_Left;
	UPROPERTY(EditAnywhere)
		UPaperFlipbook* Idle_Right;
	UPROPERTY(EditAnywhere)
		UPaperFlipbook* Walk_Up;
	UPROPERTY(EditAnywhere)
		UPaperFlipbook* Walk_Down;
	UPROPERTY(EditAnywhere)
		UPaperFlipbook* Walk_Left;
	UPROPERTY(EditAnywhere)
		UPaperFlipbook* Walk_Right;

	UPROPERTY(EditAnywhere)
		UPaperFlipbook* Hitting_Up;
	UPROPERTY(EditAnywhere)
		UPaperFlipbook* Hitting_Down;
	UPROPERTY(EditAnywhere)
		UPaperFlipbook* Hitting_Left;
	UPROPERTY(EditAnywhere)
		UPaperFlipbook* Hitting_Right;

};
