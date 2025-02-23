// Fill out your copyright notice in the Description page of Project Settings.
#include "MidiAsset.h"


void UMidiAsset::SetPath(FString Path) 
{
	FilePath = Path;
}

void UMidiAsset::playnotes(float DeltaTime)
{
	
	// 每次递增播放时间
	CurrentTime += DeltaTime;

	// 检查 MidiEventsQueue 中是否有音符需要播放或停止
	for (const FMidiEvent& NoteEvent : MidiTracks[0].TrackEvents)
	{
		// 如果事件的 EventTime 小于或等于当前播放时间
		if (NoteEvent.Time <= CurrentTime)
		{
			// 播放 Note On 或 Note Off 事件
			if (NoteEvent.bNoteOn)
			{
				// 触发 Note On 事件
				OnNoteOnEvent.Broadcast(NoteEvent.Note);
			}
			else
			{
				// 触发 Note Off 事件
				OnNoteOffEvent.Broadcast(NoteEvent.Note);
			}
		}
	}
}

UMidiAsset::UMidiAsset()
{
	// 构造函数的实现（如果需要）
	currentevent={0};
}


