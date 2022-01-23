// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PartiallyDestructibleActor.generated.h"
class UDestructibleComponent;
UCLASS()
class PARTIALLYDESTRUCTIBLE_API APartiallyDestructibleActor : public AActor
{
	GENERATED_BODY()
public:
	// Sets default values for this actor's properties
	APartiallyDestructibleActor();
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Locations")
		TArray<FVector> RelativeLocations;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage & Impulse")
		FVector Impulse;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage & Impulse")
		float DamagePerHit = 50.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage & Impulse")
		float DamageRadius = 50.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage & Impulse")
		float ImpulseStrength = 1.5f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Locations")
		bool bDrawDebugLocations = false;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
		UDestructibleComponent* DestructibleComp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sequencer")
		bool bApplyImpulse = false;

	UFUNCTION(BlueprintCallable)
		void ApplyDamage();

	void AddImpulse();

	UFUNCTION(BlueprintCallable)
		void AddLocation(FVector& Loc);
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
