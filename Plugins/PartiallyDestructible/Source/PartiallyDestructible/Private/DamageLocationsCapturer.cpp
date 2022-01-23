// Fill out your copyright notice in the Description page of Project Settings.


#include "DamageLocationsCapturer.h"
#include "PartiallyDestructibleActor.h"
// Sets default values
ADamageLocationsCapturer::ADamageLocationsCapturer()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}


void ADamageLocationsCapturer::AddLocationToPartiallyDestructibleMesh()
{
	if (PartiallyDestructibleMesh)
	{
		FVector ActorLoc = GetActorLocation();
		PartiallyDestructibleMesh->AddLocation(ActorLoc);
	}
	else
	{
		if (GEngine)
			GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("ERROR: YOU FORGOT TO ADD REFERENCE TO PARTIALLY DESTRUCTIBLE MESH!"));
	}
}

// Called when the game starts or when spawned
void ADamageLocationsCapturer::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ADamageLocationsCapturer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}