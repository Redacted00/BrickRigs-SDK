// Fill out your copyright notice in the Description page of Project Settings.

#include "BrickRigsEditor.h"
#include "Modules/ModuleManager.h"
#include "Modules/ModuleInterface.h"

#include <BrickRigs/LevelInfo.h>
#include "PropertyEditorModule.h"
#include "Editor/UnrealEdEngine.h"
#include "UnrealEdGlobals.h"
#include "LevelInfoFactory.h"
#include "AssetToolsModule.h"
#include "AssetTypeActions_Base.h"

IMPLEMENT_GAME_MODULE(FBrickRigsEditorModule, BrickRigsEditor);

DEFINE_LOG_CATEGORY(BrickRigsEditor)

#define LOCTEXT_NAMESPACE "BrickRigsEditor"

void FBrickRigsEditorModule::ShutdownModule()
{
	UE_LOG(BrickRigsEditor, Warning, TEXT("BrickRigsEditor: Log Ended"));
}

void FBrickRigsEditorModule::StartupModule()
{
    IAssetTools& AssetTools = FModuleManager::GetModuleChecked<FAssetToolsModule>("AssetTools").Get();
    EAssetTypeCategories::Type Category = AssetTools.RegisterAdvancedAssetCategory("BrickRigs", FText::AsCultureInvariant("Brick Rigs"));

#define ASSET_TYPE_ACTIONS(AssetType) \
    class FAssetTypeActions##AssetType : public FAssetTypeActions_Base \
    { \
        EAssetTypeCategories::Type Category; \
    public: \
        FAssetTypeActions##AssetType(EAssetTypeCategories::Type InCategory) \
            : Category(InCategory) { } \
        virtual FText GetName() const override { return FText::AsCultureInvariant(FName::NameToDisplayString(#AssetType, false)); } \
        virtual FColor GetTypeColor() const override { return FColor::Red; } \
        virtual UClass* GetSupportedClass() const override { return U##AssetType::StaticClass(); } \
        virtual uint32 GetCategories() override { return Category; } \
    }; \
    AssetTools.RegisterAssetTypeActions(MakeShared<FAssetTypeActions##AssetType>(Category))

    
    ASSET_TYPE_ACTIONS(LevelInfo);
    ASSET_TYPE_ACTIONS(WeatherCondition);

#undef ASSET_TYPE_ACTIONS
}

#undef LOCTEXT_NAMESPACE

