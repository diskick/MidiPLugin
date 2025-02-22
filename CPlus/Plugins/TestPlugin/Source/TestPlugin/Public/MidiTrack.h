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
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MIDI Track")
	FString TrackName;

	// MIDI 轨道上的所有事件
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MIDI Track")
	TArray<FMidiEvent> TrackEvents; // MIDI 事件列表（按时间戳排序）

	// 构造函数
	FMidiTrack()
		: TrackName(TEXT("Unnamed Track"))
	{
	}
	
};