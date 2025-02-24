#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MidiEvent.generated.h"


// 代表 MIDI 事件的结构体
USTRUCT(BlueprintType)
struct FMidiEvent
{
	GENERATED_BODY()

public:
	// MIDI 时间戳（单位：毫秒）
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "MIDI Event")
	float Time;

	// MIDI 音符，0-127的值
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "MIDI Event")
	int32 Note;

	// 音符的力度（0-127的值）
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "MIDI Event")
	int32 Velocity;

	// 是否是音符开始的事件
	bool bNoteOn;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MIDI Event")
	mutable bool bPlayed;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "MIDI Event")
	int32 InTrack;
	
	// 构造函数
	FMidiEvent(): Time(0), Note(0), Velocity(0), bNoteOn(false),bPlayed(true),InTrack(0)
	{
	}
	
};