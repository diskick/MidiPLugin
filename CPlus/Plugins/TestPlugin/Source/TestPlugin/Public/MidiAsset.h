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

	virtual void PostLoad() override;

	// 重写 IsTickable 函数
	virtual bool IsTickable() const override;

	// 重写 GetStatId 函数
	virtual TStatId GetStatId() const override;
	
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly,  Category="MIDI")
	bool cantick;

	// MIDI 文件的路径
	UPROPERTY(VisibleAnywhere,BlueprintReadOnly,  Category="MIDI")
	FString FilePath;
	//文件名
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="MIDI")
	FString FileName;
	
	// MIDI 文件的时长
	UPROPERTY(VisibleAnywhere,BlueprintReadOnly, Category = "MIDI")
	float Length;
	
	//轨道数
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly,Category = "MIDI Event")
	int32 	TracksNumber;
	
	// MIDI 文件中的所有轨道
	UPROPERTY(VisibleAnywhere, Category = "MIDI Event")
	TArray<FMidiTrack> MidiTracks;


	
	
	// MIDI 解析相关数据
	// 当前播放时间（以秒为单位）
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "MIDI Event")
	float CurrentTime;
	




	//函数位置
	void SetPath(FString path) ;
UFUNCTION(BlueprintCallable, Category = "MIDI")
	void playnotes(float DeltaTime);

	UFUNCTION(BlueprintCallable, Category = "MIDI")
	void playmidi();

	

	//委托
	UPROPERTY(BlueprintAssignable, Category = "Midi Events")
	FOnNoteOnEvent OnNoteOnEvent;

	UPROPERTY(BlueprintAssignable, Category = "Midi Events")
	FOnNoteOffEvent OnNoteOffEvent;
	
	UFUNCTION(BlueprintImplementableEvent, Category = "MIDI")
	void HandleNoteOff(FMidiEvent event);

	UFUNCTION(BlueprintImplementableEvent, Category = "MIDI")
	void HandleNoteOn(FMidiEvent event) ;
};
