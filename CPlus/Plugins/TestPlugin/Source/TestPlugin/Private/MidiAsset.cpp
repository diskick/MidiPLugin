// Fill out your copyright notice in the Description page of Project Settings.
#include "MidiAsset.h"

#include "timidity.h"


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

void UMidiAsset::playmidi()
{
	const char* config = "D:/UEProject/CPlus/MidiPLugin/CPlus/Plugins/TestPlugin/Source/ThirdParty/Timidity/TIMIDITY.cfg";
	//const char *config=NULL 
	
	if ( mid_init(config)==0)
	{
		UE_LOG(LogTemp, Warning, TEXT("success to init timidity file"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Failed to init timidity file"));
	}



//MidIStream* stream = (MidIStream *) malloc(sizeof(_MidIStream));
	//stream=new (MidIStream*);
	
	const char* filePathUtf8 ="D:/Administrator/Download/Sample.mid";
    
	// Open the MIDI file stream
	MidIStream* stream = mid_istream_open_file(filePathUtf8);
	if (stream == nullptr) {
		UE_LOG(LogTemp, Error, TEXT("Failed to open MIDI file"));
	}
	
	MidSongOptions* options = (MidSongOptions*)malloc(sizeof(MidSongOptions));
	if (options == NULL)
	{
		UE_LOG(LogTemp, Warning, TEXT("Failed to allocate memory for song options"));
		return;
	}
	options->rate = 44100; // Set sample rate to 44.1kHz
	options->format = MID_AUDIO_S16LSB; // 16-bit signed audio
	options->channels = 2; // Stereo
	options->buffer_size = 44100; // Buffer size (sample rate * 1 second)
    

	//const char* filePathUtf8 ="D:/Administrator/Download/Sample.mid";
		//TCHAR_TO_UTF8(*FilePath);
    
	// Open the MIDI file stream
//	stream = mid_istream_open_file(filePathUtf8);
	if (stream == NULL)
	{
		UE_LOG(LogTemp, Warning, TEXT("Failed to open MIDI file: %s"), *FilePath);
		free(options);
		mid_exit();
		return;
	}

	// Load the MIDI song
	
	MidSong* song = mid_song_load(stream, options);
	
	//mid_istream_close(stream); // Close the stream after loading the song
	if (song == NULL)
	{
		UE_LOG(LogTemp, Warning, TEXT("Failed to load MIDI song"));
		free(options);
		mid_exit();
		return;
	}

	// Start playing the song
	mid_song_start(song);

	// Prepare a buffer to store audio data
	sint8 buffer[4096];
	size_t bytesRead;
	FILE* output = stdout; // Output to standard output (or you can change to a file if needed)

	// Read and play the audio stream
	while ((bytesRead = mid_song_read_wave(song, buffer, sizeof(buffer))) > 0)
	{
		fwrite(buffer, bytesRead, 1, output); // Write the audio data
	}

	// Clean up resources after playback
	mid_song_free(song);
	free(options);
	mid_exit();

	UE_LOG(LogTemp, Warning, TEXT("Finished playing the MIDI song"));
	
}

UMidiAsset::UMidiAsset():currentevent{0},cantick(false),Length(0),TracksNumber(0),CurrentTime(0)
{
	// 构造函数的实现（如果需要）
	
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
		if (NoteEvent.Time <= CurrentTime&&!NoteEvent.bPlayed)
		{
			// 播放 Note On 或 Note Off 事件
			if (NoteEvent.isNoteon)
			{
				// 触发 Note On 事件
				if (IsInGameThread())
				{
					OnNoteOnEvent.Broadcast(NoteEvent);
				}
			
				else
				{
					AsyncTask(ENamedThreads::GameThread, [this, NoteEvent](){OnNoteOnEvent.Broadcast(NoteEvent);});
				}
				
				NoteEvent.bPlayed=true;
				
				if (NoteEvent.Time==MidiTracks[i].TrackEvents.Last().Time)
					cantick=false;
			}
/*
			else if (NoteEvent.isNoteoff&&!NoteEvent.bPlayed)
			{
			//	if (IsInGameThread())
				{
					OnNoteOffEvent.Broadcast(NoteEvent);
				}
					
			//	else
				{
			//		AsyncTask(ENamedThreads::GameThread, [this, NoteEvent](){OnNoteOffEvent.Broadcast(NoteEvent);});
				}
					
				
				NoteEvent.bPlayed=true;
				
				if (NoteEvent.Time==MidiTracks[i].TrackEvents.Last().Time)
					cantick=false;
			}
				*/
		}
		
	}
}
