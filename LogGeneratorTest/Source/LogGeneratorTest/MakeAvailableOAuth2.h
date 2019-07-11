// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MakeAvailableOAuth2.generated.h"
#include "duktape-2.3.0/src/duktape.h"

/**
 * 
 */
UCLASS()
class LOGGENERATORTEST_API UMakeAvailableOAuth2 : public UBlueprintFunctionLibrary
{
	bool isUsing = false;
	duk_context* ctx;

	void StartUse();
	void EndUse();
	void 
	
};
