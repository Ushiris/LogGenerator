// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LogGeneratorTest/Public/CreateLog.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCreateLog() {}
// Cross Module References
	LOGGENERATORTEST_API UClass* Z_Construct_UClass_ACreateLog_NoRegister();
	LOGGENERATORTEST_API UClass* Z_Construct_UClass_ACreateLog();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_LogGeneratorTest();
// End Cross Module References
	void ACreateLog::StaticRegisterNativesACreateLog()
	{
	}
	UClass* Z_Construct_UClass_ACreateLog_NoRegister()
	{
		return ACreateLog::StaticClass();
	}
	struct Z_Construct_UClass_ACreateLog_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACreateLog_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_LogGeneratorTest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACreateLog_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CreateLog.h" },
		{ "ModuleRelativePath", "Public/CreateLog.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACreateLog_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACreateLog>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACreateLog_Statics::ClassParams = {
		&ACreateLog::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ACreateLog_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ACreateLog_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACreateLog()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACreateLog_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACreateLog, 80942795);
	template<> LOGGENERATORTEST_API UClass* StaticClass<ACreateLog>()
	{
		return ACreateLog::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACreateLog(Z_Construct_UClass_ACreateLog, &ACreateLog::StaticClass, TEXT("/Script/LogGeneratorTest"), TEXT("ACreateLog"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACreateLog);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
