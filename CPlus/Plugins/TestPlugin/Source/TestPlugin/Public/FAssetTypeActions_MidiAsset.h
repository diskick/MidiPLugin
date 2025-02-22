#pragma once


#include "CoreMinimal.h"
#include "AssetTypeActions_Base.h"
#include "MidiAsset.h"
#include "Editor/ContentBrowser/Public/ContentBrowserModule.h"
#include "UObject/ObjectMacros.h"

class TESTPLUGIN_API FAssetTypeActions_MidiAsset : public FAssetTypeActions_Base
{
	bool bOperationCanceled = false;

public:
	// 重写 GetSupportedClass 函数，返回我们自定义的类
	virtual FText GetName() const override;
	virtual FColor GetTypeColor() const override;
	virtual UClass* GetSupportedClass() const override;
	virtual uint32 GetCategories() override;
	//右键菜单
	virtual void GetActions(const TArray<UObject*>& InObjects, FMenuBuilder& MenuBuilder) override;

	
	

};
