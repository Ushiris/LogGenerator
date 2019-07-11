// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LogGeneratorTest/MakeAvailableOAuth2.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMakeAvailableOAuth2() {}
// Cross Module References
	LOGGENERATORTEST_API UClass* Z_Construct_UClass_UMakeAvailableOAuth2_NoRegister();
	LOGGENERATORTEST_API UClass* Z_Construct_UClass_UMakeAvailableOAuth2();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_LogGeneratorTest();
// End Cross Module References
	void UMakeAvailableOAuth2::StaticRegisterNativesUMakeAvailableOAuth2()
	{
	}
	UClass* Z_Construct_UClass_UMakeAvailableOAuth2_NoRegister()
	{
		return UMakeAvailableOAuth2::StaticClass();
	}
	struct Z_Construct_UClass_UMakeAvailableOAuth2_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMakeAvailableOAuth2_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_LogGeneratorTest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMakeAvailableOAuth2_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MakeAvailableOAuth2.h" },
		{ "ModuleRelativePath", "MakeAvailableOAuth2.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMakeAvailableOAuth2_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMakeAvailableOAuth2>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMakeAvailableOAuth2_Statics::ClassParams = {
		&UMakeAvailableOAuth2::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMakeAvailableOAuth2_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMakeAvailableOAuth2_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMakeAvailableOAuth2()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMakeAvailableOAuth2_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMakeAvailableOAuth2, 3818227429);
	template<> LOGGENERATORTEST_API UClass* StaticClass<UMakeAvailableOAuth2>()
	{
		return UMakeAvailableOAuth2::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMakeAvailableOAuth2(Z_Construct_UClass_UMakeAvailableOAuth2, &UMakeAvailableOAuth2::StaticClass, TEXT("/Script/LogGeneratorTest"), TEXT("UMakeAvailableOAuth2"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMakeAvailableOAuth2);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
