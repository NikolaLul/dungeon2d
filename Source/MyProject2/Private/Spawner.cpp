// Fill out your copyright notice in the Description page of Project Settings.


#include "Spawner.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ASpawner::ASpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void ASpawner::BeginPlay()
{

	Super::BeginPlay();
	APaperCharacter* MySpawnedCharacter = GetWorld()->SpawnActor<APaperCharacter>(MyVariable, GetActorTransform());
	UGameplayStatics::GetPlayerController(GetWorld(), 0)->Possess(MySpawnedCharacter);
}

// Called every frame
void ASpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

