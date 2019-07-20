// Fill out your copyright notice in the Description page of Project Settings.

#include "Runtime/Core/Public/Misc/FileHelper.h"
#include "Runtime/Core/Public/Misc/Paths.h"
#include "MyBlueprintFunctionLibrary.h"

bool UMyBlueprintFunctionLibrary::FileSaveString(FString SaveTextB, FString FileNameB)
{
	return FFileHelper::SaveStringToFile(SaveTextB, *(FPaths::GameDir() + FileNameB));
}

bool UMyBlueprintFunctionLibrary::FileLoadString(FString FileNameA, FString& SaveTextA)
{
	return FFileHelper::LoadFileToString(SaveTextA, *(FPaths::GameDir() + FileNameA));
}

FString UMyBlueprintFunctionLibrary::FileLoadAndReturnString(FString FileNameA)
{
	FString myString;
	bool myBool = true;
	myBool = FFileHelper::LoadFileToString(myString, *(FPaths::GameDir() + FileNameA));
	return myString;
}
