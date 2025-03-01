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
	static bool ParseMidiFile(const FString& FilePath,UMidiAsset& Midi);
	static void ConvertMidiToWav(const FString& FilePath,const FString& OutputWavFilePath, const FString& SoundFontPath);


	const char *GMinstrument[128] = {
		"acpiano",   "britepno",  "synpiano",  "honkytonk", "epiano1",   "epiano2",
		"hrpschrd",  "clavinet",  "celeste",   "glocken",   "musicbox",  "vibes",
		"marimba",   "xylophon",  "tubebell",  "santur",    "homeorg",   "percorg",
		"rockorg",   "churchorg", "reedorg",   "accordn",   "harmonica", "concrtna",
		"nyguitar",  "acguitar",  "jazzgtr",   "cleangtr",  "mutegtr",   "odguitar",
		"distgtr",   "gtrharm",   "acbass",    "fngrbass",  "pickbass",  "fretless",
		"slapbas1",  "slapbas2",  "synbass1",  "synbass2",  "violin",    "viola",
		"cello",     "contraba",  "marcato",   "pizzcato",  "harp",      "timpani",
		"marcato",   "slowstr",   "synstr1",   "synstr2",   "choir",     "doo",
		"voices",    "orchhit",   "trumpet",   "trombone",  "tuba",      "mutetrum",
		"frenchorn", "hitbrass",  "synbras1",  "synbras2",  "sprnosax",  "altosax",
		"tenorsax",  "barisax",   "oboe",      "englhorn",  "bassoon",   "clarinet",
		"piccolo",   "flute",     "recorder",  "woodflut",  "bottle",    "shakazul",
		"whistle",   "ocarina",   "sqrwave",   "sawwave",   "calliope",  "chiflead",
		"charang",   "voxlead",   "lead5th",   "basslead",  "fantasia",  "warmpad",
		"polysyn",   "ghostie",   "bowglass",  "metalpad",  "halopad",   "sweeper",
		"aurora",    "soundtrk",  "crystal",   "atmosphr",  "freshair",  "unicorn",
		"sweeper",   "startrak",  "sitar",     "banjo",     "shamisen",  "koto",
		"kalimba",   "bagpipes",  "fiddle",    "shannai",   "carillon",  "agogo",
		"steeldrum", "woodblock", "taiko",     "toms",      "syntom",    "revcymb",
		"fx-fret",   "fx-blow",   "seashore",  "jungle",    "telephone", "helicptr",
		"applause",  "ringwhsl"
	};
};
