// Fill out your copyright notice in the Description page of Project Settings.


#include "MakeAvailableOAuth2.h"

void UMakeAvailableOAuth2::StartUse()
{
	ctx = duk_create_heap_default();
}

void UMakeAvailableOAuth2::EndUse()
{
	if (ctx) {
		duk_destroy_heap(ctx);
	}
}