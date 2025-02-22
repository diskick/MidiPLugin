// Copyright Epic Games, Inc. All Rights Reserved.

#include "BP_TestBPLibrary.h"
#include "BP_Test.h"

UBP_TestBPLibrary::UBP_TestBPLibrary(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

float UBP_TestBPLibrary::BP_TestSampleFunction(float Param)
{
	return -1;
}
