// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "GenericTeamAgentInterface.h"
#include "BrickPlayerController.generated.h"

/**
 * 
 */



UCLASS()
class BRICKRIGS_API ABrickPlayerController : public APlayerController
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable)
		void ServerJoinTeam(const FGenericTeamId& InTeamId);

	
};


