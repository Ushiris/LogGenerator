// Fill out your copyright notice in the Description page of Project Settings.


#include "Runtime/Core/Public/Misc/FileHelper.h"
#include "Runtime/Core/Public/Misc/Paths.h"
#include "LogGenerator.h"

// Sets default values
ALogGenerator::ALogGenerator()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ALogGenerator::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ALogGenerator::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

bool ALogGenerator::FileSaveString(FString SaveTextB, FString FileNameB)
{
	return FFileHelper::SaveStringToFile(SaveTextB, *(FPaths::GameDir() + FileNameB));
}

bool ALogGenerator::FileLoadString(FString FileNameA, FString& SaveTextA)
{
	return FFileHelper::LoadFileToString(SaveTextA, *(FPaths::GameDir() + FileNameA));
}

FString ALogGenerator::FileLoadAndReturnString(FString FileNameA)
{
	FString myString;
	bool myBool = true;
	myBool = FFileHelper::LoadFileToString(myString, *(FPaths::GameDir() + FileNameA));
	return myString;
}

