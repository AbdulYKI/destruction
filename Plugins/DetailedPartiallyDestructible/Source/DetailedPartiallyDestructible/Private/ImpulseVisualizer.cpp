// Fill out your copyright notice in the Description page of Project Settings.

#include "Components/ArrowComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "ImpulseVisualizer.h"


// Sets default values
AImpulseVisualizer::AImpulseVisualizer()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Arrow= CreateDefaultSubobject<UArrowComponent>(TEXT("Arrow"));
	Arrow->ArrowColor = FColor::FromHex("8277FFFF");
	Arrow->ArrowLength = 170.0f;
}

void AImpulseVisualizer::RotateArrowWithImpulse()
{
	FVector Start = GetActorLocation();
	FVector End = Start + Impulse.GetSafeNormal() * 400.0f;
	FRotator Rot = UKismetMathLibrary::FindLookAtRotation(Start, End);
	SetActorRotation(Rot);
}

// Called when the game starts or when spawned
void AImpulseVisualizer::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AImpulseVisualizer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

