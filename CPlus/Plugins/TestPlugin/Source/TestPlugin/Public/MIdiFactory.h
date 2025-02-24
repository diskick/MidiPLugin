// ReSharper disable once UnrealHeaderToolError
#pragma once

#include "CoreMinimal.h"
#include "MidiAsset.h"
#include "Editor/UnrealEd/Classes/Factories/Factory.h"
#include "MIdiFactory.generated.h"

UCLASS()
class TESTPLUGIN_API UMidiFactory : public UFactory
{
	GENERATED_BODY()

public:
	UMidiFactory();
	// 声明 FactoryCreateFile
	virtual UObject* FactoryCreateFile(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags,
	                                   const FString& FilePath, const TCHAR* Parms, FFeedbackContext* Context,
	                                   bool& bOutOperationCanceled) override;
	static void ParseMidiFile(const FString& FilePath,UMidiAsset& Midi);
};
