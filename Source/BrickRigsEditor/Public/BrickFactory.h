// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/AIAsyncTaskBlueprintProxy.h"
#include "Factories/Factory.h"
#include "BrickFactory.generated.h"

/**
 * 
 */
UCLASS(Abstract)
class BRICKRIGSEDITOR_API UBrickFactory : public UFactory
{
    GENERATED_BODY()

public:
    // ~Constructor
    UBrickFactory()
    {
        bCreateNew = true;
        bEditAfterNew = true;
    }

    // ~Super Interface
    virtual UObject* FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override
    {
        return NewObject<UObject>(InParent, InClass, InName, Flags);
    }
    virtual bool ShouldShowInNewMenu() const override { return true; }
    // ~Super Interface
};

