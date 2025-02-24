#include "MidiFactory.h"
#include "MidiAsset.h" 
#include "MidiTrack.h"
#include "MidiFile.h"
#include "fluidsynth.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"
#include "Runtime/CoreUObject/Public/UObject/Object.h"

UMidiFactory::UMidiFactory()
{
	SupportedClass = UMidiAsset::StaticClass(); // 设置支持的类类型
	bCreateNew = false;
	bEditorImport = true;
	bText = false; // MIDI 文件不是文本文件
	Formats.Add(TEXT("mid;MIDI files"));
}

UObject* UMidiFactory::FactoryCreateFile(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags,
                                         const FString& FilePath, const TCHAR* Parms, FFeedbackContext* Context,
                                         bool& bOutOperationCanceled)
{
	// 创建新的 UMidiAsset 实例
	bOutOperationCanceled = false;
	UMidiAsset* NewMidiAsset = NewObject<UMidiAsset>(InParent, Name, Flags);

	TArray<uint8> FileData;
	NewMidiAsset->SetPath(FilePath);
	if (FFileHelper::LoadFileToArray(FileData, *FilePath))
	{
		UE_LOG(LogTemp, Display, TEXT("Loading MIDI File: %s"), *FilePath);
		ParseMidiFile(*FilePath,*NewMidiAsset);
		
	}
	else
	{
		bOutOperationCanceled = true;
		return nullptr;
	}

	return NewMidiAsset;
}

void UMidiFactory::ParseMidiFile(const FString& FilePath,UMidiAsset& Midi)
{

	// 将 FString 转换为 std::string（midifile 库需要 std::string 类型）
    std::string MidiFilePath = TCHAR_TO_UTF8(*FilePath);

    // 创建 MidiFile 对象
    smf::MidiFile midiFile;

    // 读取 MIDI 文件
    if (midiFile.read(MidiFilePath))
    {
        // 清空空轨道
    	midiFile.removeEmpties();
    	
    	//时间分析
		midiFile.doTimeAnalysis();
    	
        // 获取轨道数量
    	Midi.TracksNumber = midiFile.getTrackCount();
    	
    	// 获取文件路径
    	Midi.FilePath=FilePath;
    	
    	// 获取文件名
        Midi.FileName=midiFile.getFilename();
    	
        // 解析每个轨道
        for (int TrackIndex = 0; TrackIndex < Midi.TracksNumber; ++TrackIndex)
        {
            // 创建一个新的轨道对象
            FMidiTrack Track;
        	
        	// 轨道命名
            Track.TrackName = FString::Printf(TEXT("Track %d"), TrackIndex + 1); 

            // 解析轨道中的所有 MIDI 事件
            for (int EventIndex = 0; EventIndex < midiFile[TrackIndex].getEventCount(); ++EventIndex)
            {
                smf::MidiEvent& event = midiFile[TrackIndex][EventIndex];

                // 创建 MIDI 事件对象
                FMidiEvent MidiEvent;
            	
            	//设置时间
                MidiEvent.Time =	event.seconds;
            	
                // 如果是 Note On 事件（音符开启）
                if (event.getCommandByte() == 0x90) // Note On
                {
                    MidiEvent.Note = event.getKeyNumber(); // 音符
                    MidiEvent.Velocity =event.getVelocity(); // 力度
                    MidiEvent.bNoteOn = true;
                	MidiEvent.InTrack=TrackIndex+1;
                }
                // 如果是 Note Off 事件（音符关闭）
       /*         else if (event.getCommandByte() == 0x80) // Note Off
                {
                	MidiEvent.Note = event.getKeyNumber(); // 音符
                	MidiEvent.Velocity =event.getVelocity(); // 力度
                    MidiEvent.bNoteOn = false;
                }
        */
            	//将事件添加到轨道
            	Track.TrackEvents.Add(MidiEvent);
            }
			
            // 将解析的轨道添加到 MidiAsset 中
           Midi.MidiTracks.Add(Track);
        }
    }
    else
    {
        // 如果 MIDI 文件读取失败，打印错误日志
        UE_LOG(LogTemp, Warning, TEXT("Failed to load MIDI file: %s"), *FilePath);
    }

	
}
