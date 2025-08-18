// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProjectDreamGameMode.h"
#include "WorldTimeController/WorldTimeController.h"

void AProjectDreamGameMode::BeginPlay()
{
	Super::BeginPlay();
	TimeManager = UWorldTimeController::GetInstance();
	if (TimeManager)
	{
		TimeManager->Init(GetWorld());
	}
}

void AProjectDreamGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (TimeManager)
	{
		TimeManager->Tick(DeltaTime);
	}
}

AProjectDreamGameMode::AProjectDreamGameMode()
{
	// stub
	PrimaryActorTick.bCanEverTick = true;
}
