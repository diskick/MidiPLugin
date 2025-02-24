// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "CoreMinimal.h"
#include "MidiEvent.h"
#include "MidiTrack.h"
#include "Runtime/CoreUObject/Public/UObject/Object.h"
#include "MidiAsset.generated.h"


// 事件委托：当音符启动时触发
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnNoteOnEvent, FMidiEvent, event);

// 事件委托：当音符停止时触发
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnNoteOffEvent, FMidiEvent, event);


UCLASS(BlueprintType)
class TESTPLUGIN_API UMidiAsset : public UObject, public FTickableGameObject
{
	GENERATED_BODY()

	TArray<int32> currentevent;
	
public:
	UMidiAsset();

	// 重写 Tick 函数
	virtual void Tick(float DeltaTime) override;

	// 重写 IsTickable 函数
	virtual bool IsTickable() const override;

	// 重写 GetStatId 函数
	virtual TStatId GetStatId() const override;
	
	bool cantick;

	// MIDI 文件的路径
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly,  Category="MIDI")
	FString FilePath;
	//文件名
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly,  Category="MIDI")
	FString FileName;
	
	// MIDI 文件的时长
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "MIDI")
	float Length;
	
	//轨道数
	UPROPERTY(BlueprintReadOnly,EditDefaultsOnly, Category = "MIDI Event")
	int32 	TracksNumber;
	
	// MIDI 文件中的所有轨道
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "MIDI Event")
	TArray<FMidiTrack> MidiTracks;


	
	
	// MIDI 解析相关数据
	// 当前播放时间（以秒为单位）
	UPROPERTY(BlueprintReadWrite, Category = "MIDI")
	float CurrentTime;
	




	//函数位置
	void SetPath(FString path) ;
UFUNCTION(BlueprintCallable, Category = "MIDI")
	void playnotes(float DeltaTime);

	//委托
	UPROPERTY(BlueprintAssignable, Category = "Midi Events")
	FOnNoteOnEvent OnNoteOnEvent;

	UPROPERTY(BlueprintAssignable, Category = "Midi Events")
	FOnNoteOffEvent OnNoteOffEvent;;

};
