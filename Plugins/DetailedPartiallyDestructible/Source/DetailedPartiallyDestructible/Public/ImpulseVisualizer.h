// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ImpulseVisualizer.generated.h"
class UArrowComponent;
UCLASS()
class DETAILEDPARTIALLYDESTRUCTIBLE_API AImpulseVisualizer : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AImpulseVisualizer();
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
		UArrowComponent* Arrow;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Impulse")
		FVector Impulse;
	UFUNCTION(BlueprintCallable, CallInEditor, Category = "Impulse")
		void RotateArrowWithImpulse();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
