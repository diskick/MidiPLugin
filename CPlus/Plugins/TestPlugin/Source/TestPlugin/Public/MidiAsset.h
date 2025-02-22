// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "CoreMinimal.h"
#include "MidiEvent.h"
#include "MidiTrack.h"
#include "Runtime/CoreUObject/Public/UObject/Object.h"
#include "MidiAsset.generated.h"

UCLASS(BlueprintType)
class TESTPLUGIN_API UMidiAsset : public UObject
{
	GENERATED_BODY()
	
public:
	UMidiAsset();


	// MIDI 文件的路径
	UPROPERTY(BlueprintReadOnly,  Category="MIDI")
	FString MidiPath;
	
	// MIDI 文件的时长
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MIDI")
	float Duration;

	// MIDI 文件中的所有事件（音符、控制变化等）
	UPROPERTY( BlueprintReadOnly, EditAnywhere,Category = "MIDI Event")
	TArray<FMidiTrack> MidiTracks;

	
	UPROPERTY(BlueprintReadOnly, Category = "MIDI Event")
	float StartTime;    // 开始时间（秒）
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="MIDI")
	int32 Velocity;
	
	UPROPERTY(BlueprintReadOnly,EditAnywhere, Category = "MIDI Event")
	int32 	TracksNumber;

	// MIDI 解析相关数据
	
	void SetPath(FString path) ;

	

};
