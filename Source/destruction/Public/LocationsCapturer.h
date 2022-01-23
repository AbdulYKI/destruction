// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LocationsCapturer.generated.h"
class APartiallyDestructibleMesh;
UCLASS()
class DESTRUCTION_API ALocationsCapturer : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALocationsCapturer();
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Reference", meta = (AllowPrivateAccess = "true"))
		APartiallyDestructibleMesh* PartiallyDestructibleMesh=nullptr;

	UFUNCTION(BlueprintCallable, CallInEditor, Category = "Editor Function")
		void AddLocationToPartiallyDestructibleMesh();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
