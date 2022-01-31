// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DetailedPartiallyDestructActor.generated.h"

class UDestructibleComponent;


USTRUCT(BlueprintType)
struct FImpactLocationStruct
{
	GENERATED_BODY()

		//~ The following member variable will be accessible by Blueprint Graphs:
		// This is the tooltip for our test variable.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage & Impulse")
		FVector Impulse;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage & Impulse")
		FVector Location;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage & Impulse")
		float DamagePerHit = 50.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage & Impulse")
		float DamageRadius = 50.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage & Impulse")
		float ImpulseStrength = 1.5f;

	FImpactLocationStruct() {};

	FImpactLocationStruct(FVector Imp, FVector Loc, float DamageHit, float DamageRad, float ImpulseStr)
	{
		Impulse = Imp;
		Location = Loc;
		DamagePerHit = DamageHit;
		DamageRadius = DamageRad;
		ImpulseStrength = ImpulseStr;
	}

};

UCLASS()
class DETAILEDPARTIALLYDESTRUCTIBLE_API ADetailedPartiallyDestructActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADetailedPartiallyDestructActor();
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Locations")
		TArray<FImpactLocationStruct> RelativeLocations;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage & Impulse")
		FVector NewImpulse;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage & Impulse", meta = (MakeEditWidget = "true"))
		FVector NewLocation = FVector(0, 0, 500.0f);
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage & Impulse")
		float NewDamagePerHit = 50.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage & Impulse")
		float NewDamageRadius = 50.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage & Impulse")
		float NewImpulseStrength = 1.5f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Locations")
		bool bDrawDebugLocations = false;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
		UDestructibleComponent* DestructibleComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
		USceneComponent* Root;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, Category = "Sequencer")
		bool bApplyImpulse = false;

	UFUNCTION(BlueprintCallable)
		void DestroySpecifiedLocations();

	void AddImpulse();

	UFUNCTION(BlueprintCallable, CallInEditor, Category = "Damage & Impulse")
		void AddLocation();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
