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
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MIDI Event")
	float tickDuration;

	// MIDI 音符，0-127的值
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MIDI Event")
	int32 Note;

	// 音符的力度（0-127的值）
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MIDI Event")
	int32 Velocity;

	// 是否是音符开始的事件
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MIDI Event")
	bool bNoteOn;

	// 构造函数
	FMidiEvent(): tickDuration(0.f), Note(0), Velocity(0), bNoteOn(false)
	{
	}
	
};