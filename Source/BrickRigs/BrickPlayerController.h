// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "GenericTeamAgentInterface.h"
#include "BrickPlayerState.h"
#include "BrickPlayerController.generated.h"

/**
 * 
 */
UENUM(BlueprintType)
enum class EBrickDurationUnits : uint8
{
	Microseconds,
	Milliseconds,
	Seconds,
	Minutes,
	Hours,
	Days,
	Years,
	Infinite,
	Max
};



USTRUCT(BlueprintType)
struct FBrickDuration
{
	GENERATED_BODY();

	UPROPERTY(EditAnywhere)
		uint16 Value;
	UPROPERTY(EditAnywhere)
		EBrickDurationUnits Type;
};
UCLASS()
class BRICKRIGS_API ABrickPlayerController : public APlayerController
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable)
		void ServerJoinTeam(const FGenericTeamId& InTeamId);
	UFUNCTION(BlueprintCallable)
		void ServerKickPlayer(ABrickPlayerState* OtherPlayerState, const FUniqueNetIdRepl& OtherPlayerId, const FString& KickReason, const FBrickDuration& KickDuration);
	UFUNCTION(BlueprintCallable)
		void ServerRevokeKick(const FUniqueNetIdRepl& OtherPlayerId);

	
};
