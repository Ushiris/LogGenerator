// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LogGenerator2/Public/MyBlueprintFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyBlueprintFunctionLibrary() {}
// Cross Module References
	LOGGENERATOR2_API UClass* Z_Construct_UClass_UMyBlueprintFunctionLibrary_NoRegister();
	LOGGENERATOR2_API UClass* Z_Construct_UClass_UMyBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_LogGenerator2();
	LOGGENERATOR2_API UFunction* Z_Construct_UFunction_UMyBlueprintFunctionLibrary_FileLoadAndReturnString();
	LOGGENERATOR2_API UFunction* Z_Construct_UFunction_UMyBlueprintFunctionLibrary_FileLoadString();
	LOGGENERATOR2_API UFunction* Z_Construct_UFunction_UMyBlueprintFunctionLibrary_FileSaveString();
// End Cross Module References
	void UMyBlueprintFunctionLibrary::StaticRegisterNativesUMyBlueprintFunctionLibrary()
	{
		UClass* Class = UMyBlueprintFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FileLoadAndReturnString", &UMyBlueprintFunctionLibrary::execFileLoadAndReturnString },
			{ "FileLoadString", &UMyBlueprintFunctionLibrary::execFileLoadString },
			{ "FileSaveString", &UMyBlueprintFunctionLibrary::execFileSaveString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMyBlueprintFunctionLibrary_FileLoadAndReturnString_Statics
	{
		struct MyBlueprintFunctionLibrary_eventFileLoadAndReturnString_Parms
		{
			FString FileNameA;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileNameA;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_FileLoadAndReturnString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyBlueprintFunctionLibrary_eventFileLoadAndReturnString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_FileLoadAndReturnString_Statics::NewProp_FileNameA = { "FileNameA", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyBlueprintFunctionLibrary_eventFileLoadAndReturnString_Parms, FileNameA), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyBlueprintFunctionLibrary_FileLoadAndReturnString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyBlueprintFunctionLibrary_FileLoadAndReturnString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyBlueprintFunctionLibrary_FileLoadAndReturnString_Statics::NewProp_FileNameA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyBlueprintFunctionLibrary_FileLoadAndReturnString_Statics::Function_MetaDataParams[] = {
		{ "Category", "save" },
		{ "ModuleRelativePath", "Public/MyBlueprintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_FileLoadAndReturnString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyBlueprintFunctionLibrary, nullptr, "FileLoadAndReturnString", sizeof(MyBlueprintFunctionLibrary_eventFileLoadAndReturnString_Parms), Z_Construct_UFunction_UMyBlueprintFunctionLibrary_FileLoadAndReturnString_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_FileLoadAndReturnString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_FileLoadAndReturnString_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_FileLoadAndReturnString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyBlueprintFunctionLibrary_FileLoadAndReturnString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyBlueprintFunctionLibrary_FileLoadAndReturnString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyBlueprintFunctionLibrary_FileLoadString_Statics
	{
		struct MyBlueprintFunctionLibrary_eventFileLoadString_Parms
		{
			FString FileNameA;
			FString SaveTextA;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SaveTextA;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileNameA;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMyBlueprintFunctionLibrary_FileLoadString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MyBlueprintFunctionLibrary_eventFileLoadString_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_FileLoadString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MyBlueprintFunctionLibrary_eventFileLoadString_Parms), &Z_Construct_UFunction_UMyBlueprintFunctionLibrary_FileLoadString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_FileLoadString_Statics::NewProp_SaveTextA = { "SaveTextA", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyBlueprintFunctionLibrary_eventFileLoadString_Parms, SaveTextA), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_FileLoadString_Statics::NewProp_FileNameA = { "FileNameA", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyBlueprintFunctionLibrary_eventFileLoadString_Parms, FileNameA), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyBlueprintFunctionLibrary_FileLoadString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyBlueprintFunctionLibrary_FileLoadString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyBlueprintFunctionLibrary_FileLoadString_Statics::NewProp_SaveTextA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyBlueprintFunctionLibrary_FileLoadString_Statics::NewProp_FileNameA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyBlueprintFunctionLibrary_FileLoadString_Statics::Function_MetaDataParams[] = {
		{ "Category", "save" },
		{ "ModuleRelativePath", "Public/MyBlueprintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_FileLoadString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyBlueprintFunctionLibrary, nullptr, "FileLoadString", sizeof(MyBlueprintFunctionLibrary_eventFileLoadString_Parms), Z_Construct_UFunction_UMyBlueprintFunctionLibrary_FileLoadString_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_FileLoadString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_FileLoadString_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_FileLoadString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyBlueprintFunctionLibrary_FileLoadString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyBlueprintFunctionLibrary_FileLoadString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyBlueprintFunctionLibrary_FileSaveString_Statics
	{
		struct MyBlueprintFunctionLibrary_eventFileSaveString_Parms
		{
			FString SaveTextB;
			FString FileNameB;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileNameB;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SaveTextB;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMyBlueprintFunctionLibrary_FileSaveString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MyBlueprintFunctionLibrary_eventFileSaveString_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_FileSaveString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MyBlueprintFunctionLibrary_eventFileSaveString_Parms), &Z_Construct_UFunction_UMyBlueprintFunctionLibrary_FileSaveString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_FileSaveString_Statics::NewProp_FileNameB = { "FileNameB", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyBlueprintFunctionLibrary_eventFileSaveString_Parms, FileNameB), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_FileSaveString_Statics::NewProp_SaveTextB = { "SaveTextB", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyBlueprintFunctionLibrary_eventFileSaveString_Parms, SaveTextB), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyBlueprintFunctionLibrary_FileSaveString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyBlueprintFunctionLibrary_FileSaveString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyBlueprintFunctionLibrary_FileSaveString_Statics::NewProp_FileNameB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyBlueprintFunctionLibrary_FileSaveString_Statics::NewProp_SaveTextB,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyBlueprintFunctionLibrary_FileSaveString_Statics::Function_MetaDataParams[] = {
		{ "Category", "save" },
		{ "ModuleRelativePath", "Public/MyBlueprintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_FileSaveString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyBlueprintFunctionLibrary, nullptr, "FileSaveString", sizeof(MyBlueprintFunctionLibrary_eventFileSaveString_Parms), Z_Construct_UFunction_UMyBlueprintFunctionLibrary_FileSaveString_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_FileSaveString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_FileSaveString_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_FileSaveString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyBlueprintFunctionLibrary_FileSaveString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyBlueprintFunctionLibrary_FileSaveString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMyBlueprintFunctionLibrary_NoRegister()
	{
		return UMyBlueprintFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_LogGenerator2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyBlueprintFunctionLibrary_FileLoadAndReturnString, "FileLoadAndReturnString" }, // 1905927422
		{ &Z_Construct_UFunction_UMyBlueprintFunctionLibrary_FileLoadString, "FileLoadString" }, // 316593625
		{ &Z_Construct_UFunction_UMyBlueprintFunctionLibrary_FileSaveString, "FileSaveString" }, // 1021326071
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyBlueprintFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/MyBlueprintFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyBlueprintFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics::ClassParams = {
		&UMyBlueprintFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyBlueprintFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMyBlueprintFunctionLibrary, 3772721150);
	template<> LOGGENERATOR2_API UClass* StaticClass<UMyBlueprintFunctionLibrary>()
	{
		return UMyBlueprintFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMyBlueprintFunctionLibrary(Z_Construct_UClass_UMyBlueprintFunctionLibrary, &UMyBlueprintFunctionLibrary::StaticClass, TEXT("/Script/LogGenerator2"), TEXT("UMyBlueprintFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyBlueprintFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
