// Fill out your copyright notice in the Description page of Project Settings.


#include "LocationsCapturer.h"
#include "PartiallyDestructibleMesh.h"
// Sets default values
ALocationsCapturer::ALocationsCapturer()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void ALocationsCapturer::AddLocationToPartiallyDestructibleMesh()
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
void ALocationsCapturer::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ALocationsCapturer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

