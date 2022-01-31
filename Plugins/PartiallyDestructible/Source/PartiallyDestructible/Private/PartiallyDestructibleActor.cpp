// Fill out your copyright notice in the Description page of Project Settings.


#include "PartiallyDestructibleActor.h"
#include "DestructibleComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "DrawDebugHelpers.h"


APartiallyDestructibleActor::APartiallyDestructibleActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root Comp"));
	RootComponent = Root;
	DestructibleComp = CreateDefaultSubobject<UDestructibleComponent>(TEXT("Destructible Comp"));
	DestructibleComp->SetupAttachment(RootComponent);
}

void APartiallyDestructibleActor::AddImpulse()
{
	if (DestructibleComp) {
		for (FVector Loc : RelativeLocations)
		{
			FTransform DestructibleMeshTransform = DestructibleComp->GetComponentTransform();
			FVector WorldLoc = UKismetMathLibrary::TransformLocation(DestructibleMeshTransform, Loc);
			DestructibleComp->AddImpulseAtLocation(UnifiedImpulse, WorldLoc);
		}
	}
	else
	{
		if (GEngine)
			GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("ERROR: YOU FORGOT TO ADD A DESTRUCTIBLE MESH!"));
	}

}

void APartiallyDestructibleActor::ApplyDamage()
{
	UE_LOG(LogTemp, Warning, TEXT("ApplyDamage"));
	if (DestructibleComp)
	{
		for (FVector Loc : RelativeLocations)
		{
			FTransform DestructibleMeshTransform = DestructibleComp->GetComponentTransform();
			FVector WorldLoc = UKismetMathLibrary::TransformLocation(DestructibleMeshTransform, Loc);

			DestructibleComp->ApplyRadiusDamage(UnifiedDamagePerHit, WorldLoc, UnifiedDamageRadius, UnifiedImpulseStrength, true);
			if (bDrawDebugLocations)
			{
				DrawDebugSphere(GetWorld(),
					WorldLoc,
					UnifiedDamageRadius,
					12,
					FColor::FromHex(FString("E902FFFF")),
					true,
					-1.0f,
					(uint8)0U, 2.0f);
				FVector ArrowEnd= UnifiedImpulse.GetSafeNormal() *450.0f + WorldLoc;
				
				DrawDebugDirectionalArrow(GetWorld(), WorldLoc, ArrowEnd, 25.0f, FColor::Green, true,-1.0f,(uint8)0U,5.0f);
			}
		
		}

	}
	else
	{
		if (GEngine)
			GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("ERROR: YOU FORGOT TO ADD A DESTRUCTIBLE MESH!"));
	}

}

void APartiallyDestructibleActor::AddLocation()
{
	FTransform DestructibleMeshTransform = DestructibleComp->GetComponentTransform();
	FVector WorldLoc = UKismetMathLibrary::TransformLocation(GetActorTransform(), NewLocation);
	FVector RelativeLocToDestructibleMesh = UKismetMathLibrary::InverseTransformLocation(DestructibleMeshTransform, WorldLoc);
	UE_LOG(LogTemp, Warning, TEXT("%s"), *RelativeLocToDestructibleMesh.ToString());
	RelativeLocations.Add(RelativeLocToDestructibleMesh);
}

// Called when the game starts or when spawned
void APartiallyDestructibleActor::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void APartiallyDestructibleActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (bApplyImpulse)
	{
		AddImpulse();
	}
}

