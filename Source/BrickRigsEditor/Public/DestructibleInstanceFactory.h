// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BrickFactory.h"
#include <BrickRigs/DestructibleInstanceTemplate.h>
#include "DestructibleInstanceFactory.generated.h"

/**
 * 
 */
UCLASS()
class BRICKRIGSEDITOR_API UDestructibleInstanceFactory : public UBrickFactory
{
	GENERATED_BODY()
public:
	UDestructibleInstanceFactory()
	{
		SupportedClass = UDestructibleInstanceTemplate::StaticClass();
	}
	
};
