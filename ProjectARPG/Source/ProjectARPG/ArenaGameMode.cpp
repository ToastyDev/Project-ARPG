// Fill out your copyright notice in the Description page of Project Settings.


#include "ArenaGameMode.h"
#include "Engine.h"
#include "TestChar.h"


AArenaGameMode::AArenaGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	DefaultPawnClass = ATestChar::StaticClass();
}

void AArenaGameMode::StartPlay()
{
	Super::StartPlay();

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("Now running Arena Game Mode."));
	}
}