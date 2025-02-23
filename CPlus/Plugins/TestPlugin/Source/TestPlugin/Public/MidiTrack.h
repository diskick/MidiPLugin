#pragma once

#include "CoreMinimal.h"
#include "MidiEvent.h"
#include "MidiTrack.generated.h"


// 代表 MIDI 事件的结构体
USTRUCT(BlueprintType)
struct FMidiTrack
{
	GENERATED_BODY()

public:
	// MIDI 轨道名称或标识符
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "MIDI Track")
	FString TrackName;

	// MIDI 轨道上的所有事件
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "MIDI Track")
	TArray<FMidiEvent> TrackEvents;

	
	// 构造函数
	FMidiTrack(): TrackName(TEXT("Unnamed Track"))
	{
	}
	
};