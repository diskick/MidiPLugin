#include "MidiFactory.h"
#include "MidiAsset.h" 
#include "MidiTrack.h"
#include "MidiFile.h"
#include "Timidity.h"
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
	
	UMidiAsset* NewMidiAsset = NewObject<UMidiAsset>(InParent,Class, Name, Flags);

	
	NewMidiAsset->SetPath(FilePath);
	
	bOutOperationCanceled = ParseMidiFile(*FilePath,*NewMidiAsset);

	return NewMidiAsset;
}

bool UMidiFactory::ParseMidiFile(const FString& FilePath,UMidiAsset& Midi)
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
    	
    	midiFile.joinTracks();
    	
	//链接noteon / off
    	midiFile.linkNotePairs();

    	//获取文件长度
    	Midi.Length=midiFile.getFileDurationInSeconds();
    	
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
                FMidiEvent MidiEventon;
            	FMidiEvent MidiEventoff;
            	
                // 如果是 Note On 事件（音符开启）
                if (event.isNoteOn()) // Note On
                {
                	MidiEventon.Time = event.seconds;
                	MidiEventon.Duration = event.getDurationInSeconds();
                    MidiEventon.Note = event.getKeyNumber(); // 音符
                    MidiEventon.Velocity =event.getVelocity(); // 力度
                    MidiEventon.isNoteon = true;
                	MidiEventon.InTrack=TrackIndex+1;

                	//关联的Noteoff事件
                	MidiEventoff.Time = event.getLinkedEvent()->seconds;
                	MidiEventoff.Note=event.getLinkedEvent()->getKeyNumber();
                	MidiEventoff.Velocity=event.getLinkedEvent()->getVelocity();
                	MidiEventoff.isNoteoff = true;
                	Track.TrackEvents.Add(MidiEventon);
                	Track.TrackEvents.Add(MidiEventoff);
                }
            }
			
            // 将解析的轨道添加到 MidiAsset 中
           Midi.MidiTracks.Add(Track);
        }
    	return true;
    }
    else
    {
        // 如果 MIDI 文件读取失败，打印错误日志
        UE_LOG(LogTemp, Warning, TEXT("Failed to load MIDI file: %s"), *FilePath);
    	return false;
    }
}






void UMidiFactory::ConvertMidiToWav(const FString& FilePath, const FString& OutputWavFilePath,const FString& SoundFontPath)
{

	const char* config = "D:/UEProject/CPlus/MidiPLugin/CPlus/Plugins/TestPlugin/Source/ThirdParty/Timidity/TIMIDITY.cfg";
	//const char *config=NULL ;

	
	if (mid_init(config)==0)
	{
		UE_LOG(LogTemp, Warning, TEXT("Failed to init timidity file"));
	}

	MidIStream *stream={0};
	MidSongOptions *options={0};
	options->rate = 44100;
	options->format = 16;
	options->channels = 2;
	options->buffer_size = 44100;
	options->_pad=0;
	options->_reserved=0;
	//const char *file_path = "D:/Administrator/Download/yuanshen.mid";
	
	mid_istream_open_file(TCHAR_TO_UTF8(*FilePath));
	
	MidSong *song = mid_song_load(stream, options);
	
	mid_song_start(song);
	
}
