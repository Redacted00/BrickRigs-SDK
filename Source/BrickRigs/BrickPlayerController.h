// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "BrickPlayerController.generated.h"

/**
 * 
 */
UENUM()
enum class EChatContext : uint8
{
    None,
    Global,
    Team,
    Local,
    Admin,
    Max
};

UCLASS()
class BRICKRIGS_API ABrickPlayerController : public APlayerController
{
	GENERATED_BODY()

        UFUNCTION(BlueprintCallable, Category = "BrickRigs")
		void ServerSendChatMessage(EChatContext Context, const FText& Message){}
	
};
