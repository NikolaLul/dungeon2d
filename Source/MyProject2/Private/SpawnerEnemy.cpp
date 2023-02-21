// Fill out your copyright notice in the Description page of Project Settings.


#include "SpawnerEnemy.h"

// Sets default values
ASpawnerEnemy::ASpawnerEnemy()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASpawnerEnemy::BeginPlay()
{
	Super::BeginPlay();
	APaperCharacter* MySpawnedCharacter = GetWorld()->SpawnActor<APaperCharacter>(MyVariable, GetActorTransform());
	
}

// Called every frame
void ASpawnerEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
