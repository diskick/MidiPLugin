// Fill out your copyright notice in the Description page of Project Settings.
#include "MidiAsset.h"


void UMidiAsset::SetPath(FString Path) 
{
	FilePath = Path;
}

void UMidiAsset::playnotes(float DeltaTime)
{
	
	// 每次递增播放时间
	CurrentTime =0;
	for (const FMidiEvent& NoteEvent : MidiTracks[0].TrackEvents)
	{NoteEvent.bPlayed=false;}
	cantick=true;
	// 检查 MidiEventsQueue 中是否有音符需要播放或停止
	
}

UMidiAsset::UMidiAsset()
{
	// 构造函数的实现（如果需要）
	currentevent={0};
	cantick=false;
}

bool UMidiAsset::IsTickable() const
{
		return true; // 返回是否需要 Tick
}

TStatId UMidiAsset::GetStatId() const
{
	return Super::GetStatID();
}


void UMidiAsset::Tick(float DeltaTime)
{
	// 每帧需要执行的逻辑
	CurrentTime += DeltaTime;
if (cantick)
	for (int i=0;i<TracksNumber;i++)
	for (const FMidiEvent& NoteEvent : MidiTracks[i].TrackEvents)
	{
		// 如果事件的 EventTime 小于或等于当前播放时间
		if (NoteEvent.Time <= CurrentTime)
		{
			// 播放 Note On 或 Note Off 事件
			if (NoteEvent.bNoteOn&&!NoteEvent.bPlayed)
			{
				// 触发 Note On 事件
				OnNoteOnEvent.Broadcast(NoteEvent);
				NoteEvent.bPlayed=true;
				if (NoteEvent.Time==MidiTracks[i].TrackEvents.Last().Time)
					cantick=false;
			}
		}
		
	}
}
