// Fill out your copyright notice in the Description page of Project Settings.
#include "MidiAsset.h"


void UMidiAsset::SetPath(FString Path) 
{
	MidiPath = Path;
}

UMidiAsset::UMidiAsset()
{
	// 构造函数的实现（如果需要）
	Velocity=2;
	MidiPath=nullptr;
}


