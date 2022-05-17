// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BrickFactory.h"
#include <BrickRigs/GameModeInfo.h>
#include "GameModeInfoFactory.generated.h"

/**
 * 
 */
UCLASS()
class BRICKRIGSEDITOR_API UGameModeInfoFactory : public UBrickFactory
{
	GENERATED_BODY()
public:
	// ~Constructor
	UGameModeInfoFactory()
	{
		SupportedClass = UGameModeInfo::StaticClass();
	}
};
