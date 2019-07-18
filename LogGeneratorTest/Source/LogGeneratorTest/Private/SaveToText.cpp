// Fill out your copyright notice in the Description page of Project Settings.

#include "Runtime/Core/Public/Misc/FileHelper.h"
#include "Runtime/Core/Public/Misc/Paths.h"
#include "SaveToText.h"

// Sets default values
ASaveToText::ASaveToText()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASaveToText::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASaveToText::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

bool ASaveToText::FileSaveString(FString SaveTextB, FString FileNameB)
{
	return FFileHelper::SaveStringToFile(SaveTextB, *(FPaths::GameDir() + FileNameB));
}

bool ASaveToText::FileLoadString(FString FileNameA, FString& SaveTextA)
{
	return FFileHelper::LoadFileToString(SaveTextA, *(FPaths::GameDir() + FileNameA));
}

FString ASaveToText::FileLoadAndReturnString(FString FileNameA)
{
	FString myString;
	bool myBool = true;
	myBool = FFileHelper::LoadFileToString(myString, *(FPaths::GameDir() + FileNameA));
	return myString;
}