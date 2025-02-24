#include "FAssetTypeActions_MidiAsset.h"
#include "CoreMinimal.h"
#include "MidiAsset.h"
#include "MIdiFactory.h"


FText FAssetTypeActions_MidiAsset::GetName() const
{
	return FText::FromString(TEXT("MIDI Asset"));
}

FColor FAssetTypeActions_MidiAsset::GetTypeColor() const
{
	return FColor::Magenta;
}

UClass* FAssetTypeActions_MidiAsset::GetSupportedClass() const
{
	return UMidiAsset::StaticClass(); // 关联到 UMidiAsset 类
}

uint32 FAssetTypeActions_MidiAsset::GetCategories()
{
	return EAssetTypeCategories::Misc;
}


void FAssetTypeActions_MidiAsset::GetActions(const TArray<UObject*>& InObjects, FMenuBuilder& MenuBuilder)
{
	MenuBuilder.AddMenuEntry(
		FText::FromString(TEXT("Import MIDI")),
		FText::FromString(TEXT("Import a MIDI file")),
		FSlateIcon(),
		FUIAction(FExecuteAction::CreateLambda([this, InObjects]
		{
			// 假设你将选中的对象传递给 Factory
			UE_LOG(LogTemp, Warning, TEXT("GetActions"));
			
		}))
	);
}





