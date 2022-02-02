// Fill out your copyright notice in the Description page of Project Settings.


#include "DetailedPartiallyDestructActor.h"
#include "DestructibleComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "DrawDebugHelpers.h"
// Sets default values
ADetailedPartiallyDestructActor::ADetailedPartiallyDestructActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root Comp"));
	RootComponent = Root;
	DestructibleComp = CreateDefaultSubobject<UDestructibleComponent>(TEXT("Destructible Comp"));
	DestructibleComp->SetupAttachment(RootComponent);
}

void ADetailedPartiallyDestructActor::AddImpulse()
{
	if (DestructibleComp) {
		for (FImpactLocationStruct ImpactPoint : RelativeLocations)
		{
			FTransform DestructibleMeshTransform = DestructibleComp->GetComponentTransform();
			FVector WorldLoc = UKismetMathLibrary::TransformLocation(DestructibleMeshTransform, ImpactPoint.Location);
			DestructibleComp->AddImpulseAtLocation(ImpactPoint.Impulse, WorldLoc);
			UE_LOG(LogTemp, Warning, TEXT("%s"), *ImpactPoint.Impulse.ToString());
		}	
	}
	else
	{
		if (GEngine)
			GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("ERROR: YOU FORGOT TO ADD A DESTRUCTIBLE MESH!"));
	}

}

void ADetailedPartiallyDestructActor::DestroySpecifiedLocations()
{
	if (DestructibleComp)
	{
		UE_LOG(LogTemp, Warning, TEXT("DestroySpecifiedLocations"));
		for (FImpactLocationStruct ImpactPoint : RelativeLocations)
		{
			FTransform DestructibleMeshTransform = DestructibleComp->GetComponentTransform();
			FVector WorldLoc = UKismetMathLibrary::TransformLocation(DestructibleMeshTransform, ImpactPoint.Location);

			DestructibleComp->ApplyRadiusDamage(NewDamagePerHit, WorldLoc, ImpactPoint.DamageRadius, ImpactPoint.ImpulseStrength, true);
			if (bDrawDebugLocations)
			{
				DrawDebugSphere(GetWorld(),
					WorldLoc,
					ImpactPoint.DamageRadius,
					SphereSegments,
					SphereColor,
					true,
					-1.0f,
					(uint8)0U, SphereThickness);
				FVector ArrowEnd = ImpactPoint.Impulse.GetSafeNormal() * ArrowLength + WorldLoc;
				DrawDebugDirectionalArrow(GetWorld(), WorldLoc, ArrowEnd, ArrowSize, ArrowColor, true, -1.0f, (uint8)0U, ArrowThickness);
			}
		}

	}
	else
	{
		if (GEngine)
			GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("ERROR: YOU FORGOT TO ADD A DESTRUCTIBLE MESH!"));
	}

}

void ADetailedPartiallyDestructActor::AddLocation()
{
	FTransform DestructibleMeshTransform = DestructibleComp->GetComponentTransform();
	FVector WorldLoc = UKismetMathLibrary::TransformLocation(GetActorTransform(), NewLocation);
	FVector RelativeLocToDestructibleMesh = UKismetMathLibrary::InverseTransformLocation(DestructibleMeshTransform,WorldLoc);
	FImpactLocationStruct ImpactPoint(NewImpulse, RelativeLocToDestructibleMesh, NewDamagePerHit, NewDamageRadius, NewImpulseStrength);
	RelativeLocations.Add(ImpactPoint);
}

void ADetailedPartiallyDestructActor::ResetNewLocation()
{
	NewLocation = FVector(0, 0, 500.0f);
}


// Called when the game starts or when spawned
void ADetailedPartiallyDestructActor::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ADetailedPartiallyDestructActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (bApplyImpulse)
	{
		AddImpulse();
	}
}

