// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BrickFactory.h"
#include <BrickRigs/BrickMaterial.h>
#include "BrickMaterialFactory.generated.h"

/**
 * 
 */
UCLASS()
class BRICKRIGSEDITOR_API UBrickMaterialFactory : public UBrickFactory
{
	GENERATED_BODY()
public:
	UBrickMaterialFactory()
	{
		SupportedClass = UBrickMaterial::StaticClass();
	}
};
