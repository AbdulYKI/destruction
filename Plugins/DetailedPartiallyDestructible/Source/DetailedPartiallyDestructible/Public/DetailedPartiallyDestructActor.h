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
	// Called every frame
	virtual void Tick(float DeltaTime) override;
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


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Debug")
		bool bDrawDebugLocations = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Debug")
		float ArrowLength =450.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Debug")
		float ArrowSize = 150.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Debug", meta = (ClampMin = "3.0", ClampMax = "20.0", UIMin = "3.0", UIMax = "20.0"))
		float ArrowThickness = 5.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Debug")
		FColor ArrowColor =FColor::Green;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Debug")
		FColor SphereColor = FColor::FromHex(FString("E902FFFF"));

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Debug", meta = (ClampMin = "3.0", ClampMax = "20.0", UIMin = "3.0", UIMax = "20.0"))
		float SphereThickness = 3.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Debug", meta = (ClampMin = "5", ClampMax = "20", UIMin = "5", UIMax = "20"))
		int32 SphereSegments =12;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
		UDestructibleComponent* DestructibleComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
		USceneComponent* Root;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, Category = "Sequencer")
		bool bApplyImpulse = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, Category = "Sequencer")
		bool bDoDamageAtSepcifiedPoints = false;


	UFUNCTION(BlueprintCallable)
		void DestroySpecifiedLocations();

	void AddImpulse();

	UFUNCTION(BlueprintCallable, CallInEditor, Category = "Damage & Impulse")
		void AddLocation();
	UFUNCTION(BlueprintCallable, CallInEditor, Category = "Damage & Impulse")
		void ResetNewLocation();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	bool bDoOnce = true;

};
