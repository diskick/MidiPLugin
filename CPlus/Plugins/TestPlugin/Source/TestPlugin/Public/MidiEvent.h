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
	// MIDI 时间戳（单位：秒）
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="MIDI")
	float Time;

	// MIDI 持续时间（单位：秒）
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="MIDI")
	float Duration;
	
	// MIDI 音符，0-127的值
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="MIDI")
	int32 Note;

	// 音符的力度（0-127的值）
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "MIDI Event")
	int32 Velocity;

	// 事件类型 私有.
	UPROPERTY(VisibleAnywhere,  Category="MIDI")
	bool isNoteon;
	UPROPERTY(VisibleAnywhere,  Category="MIDI")
	bool isNoteoff;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MIDI Event")
	mutable bool bPlayed;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="MIDI")
	int32 InTrack;
	
	// 构造函数
	FMidiEvent(): Time(0), Duration(-1), Note(0), Velocity(0),isNoteon(false),isNoteoff(false),bPlayed(true),InTrack(0)
	{
	}
	
};