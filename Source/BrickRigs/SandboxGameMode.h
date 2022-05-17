// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "BrickTeam.h"
#include "SandboxGameMode.generated.h"

/**
 * 
 */
UCLASS()
class BRICKRIGS_API ASandboxGameMode : public AGameMode
{
	GENERATED_BODY()

	// Team for players who aren't in a team
	UPROPERTY(EditAnywhere, Category = Teams)
	TSubclassOf<UBrickTeam> DefaultTeam;
	// The team zombies are assigned to
	UPROPERTY(EditAnywhere, Category = Teams)
	TSubclassOf<UBrickTeam> ZombieTeam;
	// The team dummies are assigned to
	UPROPERTY(EditAnywhere, Category = Teams)
	TSubclassOf<UBrickTeam> DummyTeam;
	// The teams supported by this game mode
	UPROPERTY(EditAnywhere, Category = Teams)
	TSet<TSubclassOf<UBrickTeam>> Teams;
	
};
