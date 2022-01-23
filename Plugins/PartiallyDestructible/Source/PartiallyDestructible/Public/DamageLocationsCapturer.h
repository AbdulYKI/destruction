// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DamageLocationsCapturer.generated.h"

class APartiallyDestructibleActor;
UCLASS()
class PARTIALLYDESTRUCTIBLE_API ADamageLocationsCapturer : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ADamageLocationsCapturer();
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Reference", meta = (AllowPrivateAccess = "true"))
		APartiallyDestructibleActor* PartiallyDestructibleMesh = nullptr;

	UFUNCTION(BlueprintCallable, CallInEditor, Category = "Editor Function")
		void AddLocationToPartiallyDestructibleMesh();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;


};
