// Fill out your copyright notice in the Description page of Project Settings.


#include "PartiallyDestructibleMesh.h"
#include "DestructibleComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "DrawDebugHelpers.h"
// Sets default values
APartiallyDestructibleMesh::APartiallyDestructibleMesh()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	DestructibleComp = CreateDefaultSubobject<UDestructibleComponent>(TEXT("Destructible Comp"));
}

void APartiallyDestructibleMesh::AddImpulse ()
{
	if (DestructibleComp) {
		for (FVector Loc : RelativeLocations)
		{
			FVector WorldLoc = UKismetMathLibrary::TransformLocation(GetActorTransform(), Loc);
			DestructibleComp->AddImpulseAtLocation(Impulse, WorldLoc);
		}
	}
	else
	{
		if (GEngine)
			GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("ERROR: YOU FORGOT TO ADD A DESTRUCTIBLE MESH!"));
	}
	
}

void APartiallyDestructibleMesh::ApplyDamage()
{
	if (DestructibleComp)
	{
		for (FVector Loc : RelativeLocations)
		{
			FVector WorldLoc = UKismetMathLibrary::TransformLocation(GetActorTransform(), Loc);

			DestructibleComp->ApplyRadiusDamage(DamagePerHit, WorldLoc, DamageRadius, ImpulseStrength, true);
			if (bDrawDebugLocations)
			{
				DrawDebugSphere(GetWorld(),
					WorldLoc,
					25.0f,
					12,
					FColor::FromHex(FString("C902FFFF")),
					true,
					-1.0f,
					(uint8)0U, 2.0f);
			}
		}

	}
	else
	{
		if (GEngine)
			GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("ERROR: YOU FORGOT TO ADD A DESTRUCTIBLE MESH!"));
	}
	
}

void APartiallyDestructibleMesh::AddLocation(FVector& Loc)
{
	FVector LocRelativeToActor=UKismetMathLibrary::InverseTransformLocation(GetActorTransform(), Loc);
	RelativeLocations.Add(LocRelativeToActor);
}

// Called when the game starts or when spawned
void APartiallyDestructibleMesh::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APartiallyDestructibleMesh::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (bApplyImpulse)
	{
		AddImpulse();
	}
}

