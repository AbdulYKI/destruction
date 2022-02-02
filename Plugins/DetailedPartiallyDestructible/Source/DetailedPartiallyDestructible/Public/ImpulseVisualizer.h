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
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input Impulse Visualization")
		FVector InputImpulse;
	UFUNCTION(BlueprintCallable, CallInEditor, Category = "Input Impulse Visualization")
		void RotateArrowWithImpulse();
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Output Impulse Generation", meta = (EditCondition = "false"))
		FVector GeneratedImpulse;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Output Impulse Generation", meta = (ClampMin = "1.0",  UIMin = "1.0"))
		float force=1000000.0f;

	UFUNCTION(BlueprintCallable, CallInEditor, Category = "Output Impulse Generation")
		void FindImpulseFromRotation();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
