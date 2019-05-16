// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ArenaGameMode.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTARPG_API AArenaGameMode : public AGameModeBase
{
	GENERATED_BODY()

	AArenaGameMode(const FObjectInitializer& ObjectInitializer);
	virtual void StartPlay() override;

};
