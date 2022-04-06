// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <WeatherCondition.generated.h>
#include "Modules/ModuleInterface.h"
#include "Modules/ModuleManager.h"
#include "UnrealEd.h"
#include "PropertyEditorModule.h"
#include "Editor/UnrealEdEngine.h"
#include "UnrealEdGlobals.h"
#include "AssetToolsModule.h"
#include "WeatherConditionFactory.h"
#include "AssetTypeActions_Base.h"

DECLARE_LOG_CATEGORY_EXTERN(BrickRigsEditor, All, All)

class FBrickRigsEditorModule : public IModuleInterface
{
public:

    virtual void StartupModule() override;
    virtual void ShutdownModule() override;

};

