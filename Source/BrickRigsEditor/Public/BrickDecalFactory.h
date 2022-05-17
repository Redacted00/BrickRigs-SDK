// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BrickFactory.h"
#include <BrickRigs/BrickDecal.h>
#include "BrickDecalFactory.generated.h"

/**
 * 
 */
UCLASS()
class BRICKRIGSEDITOR_API UBrickDecalFactory : public UBrickFactory
{
	GENERATED_BODY()

public:
	// ~Constructor
	UBrickDecalFactory()
	{
		SupportedClass = UBrickDecal::StaticClass();
	}
	
};
