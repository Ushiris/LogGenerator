// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LOGGENERATORTEST_SaveToText_generated_h
#error "SaveToText.generated.h already included, missing '#pragma once' in SaveToText.h"
#endif
#define LOGGENERATORTEST_SaveToText_generated_h

#define LogGeneratorTest_Source_LogGeneratorTest_Public_SaveToText_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFileLoadAndReturnString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileNameA); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=ASaveToText::FileLoadAndReturnString(Z_Param_FileNameA); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFileLoadString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileNameA); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_SaveTextA); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=ASaveToText::FileLoadString(Z_Param_FileNameA,Z_Param_Out_SaveTextA); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFileSaveString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SaveTextB); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileNameB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=ASaveToText::FileSaveString(Z_Param_SaveTextB,Z_Param_FileNameB); \
		P_NATIVE_END; \
	}


#define LogGeneratorTest_Source_LogGeneratorTest_Public_SaveToText_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFileLoadAndReturnString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileNameA); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=ASaveToText::FileLoadAndReturnString(Z_Param_FileNameA); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFileLoadString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileNameA); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_SaveTextA); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=ASaveToText::FileLoadString(Z_Param_FileNameA,Z_Param_Out_SaveTextA); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFileSaveString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SaveTextB); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileNameB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=ASaveToText::FileSaveString(Z_Param_SaveTextB,Z_Param_FileNameB); \
		P_NATIVE_END; \
	}


#define LogGeneratorTest_Source_LogGeneratorTest_Public_SaveToText_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASaveToText(); \
	friend struct Z_Construct_UClass_ASaveToText_Statics; \
public: \
	DECLARE_CLASS(ASaveToText, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LogGeneratorTest"), NO_API) \
	DECLARE_SERIALIZER(ASaveToText)


#define LogGeneratorTest_Source_LogGeneratorTest_Public_SaveToText_h_12_INCLASS \
private: \
	static void StaticRegisterNativesASaveToText(); \
	friend struct Z_Construct_UClass_ASaveToText_Statics; \
public: \
	DECLARE_CLASS(ASaveToText, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LogGeneratorTest"), NO_API) \
	DECLARE_SERIALIZER(ASaveToText)


#define LogGeneratorTest_Source_LogGeneratorTest_Public_SaveToText_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASaveToText(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASaveToText) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASaveToText); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASaveToText); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASaveToText(ASaveToText&&); \
	NO_API ASaveToText(const ASaveToText&); \
public:


#define LogGeneratorTest_Source_LogGeneratorTest_Public_SaveToText_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASaveToText(ASaveToText&&); \
	NO_API ASaveToText(const ASaveToText&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASaveToText); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASaveToText); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASaveToText)


#define LogGeneratorTest_Source_LogGeneratorTest_Public_SaveToText_h_12_PRIVATE_PROPERTY_OFFSET
#define LogGeneratorTest_Source_LogGeneratorTest_Public_SaveToText_h_9_PROLOG
#define LogGeneratorTest_Source_LogGeneratorTest_Public_SaveToText_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LogGeneratorTest_Source_LogGeneratorTest_Public_SaveToText_h_12_PRIVATE_PROPERTY_OFFSET \
	LogGeneratorTest_Source_LogGeneratorTest_Public_SaveToText_h_12_RPC_WRAPPERS \
	LogGeneratorTest_Source_LogGeneratorTest_Public_SaveToText_h_12_INCLASS \
	LogGeneratorTest_Source_LogGeneratorTest_Public_SaveToText_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define LogGeneratorTest_Source_LogGeneratorTest_Public_SaveToText_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LogGeneratorTest_Source_LogGeneratorTest_Public_SaveToText_h_12_PRIVATE_PROPERTY_OFFSET \
	LogGeneratorTest_Source_LogGeneratorTest_Public_SaveToText_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	LogGeneratorTest_Source_LogGeneratorTest_Public_SaveToText_h_12_INCLASS_NO_PURE_DECLS \
	LogGeneratorTest_Source_LogGeneratorTest_Public_SaveToText_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LOGGENERATORTEST_API UClass* StaticClass<class ASaveToText>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID LogGeneratorTest_Source_LogGeneratorTest_Public_SaveToText_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
