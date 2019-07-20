// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LOGGENERATOR2_LogGenerator_generated_h
#error "LogGenerator.generated.h already included, missing '#pragma once' in LogGenerator.h"
#endif
#define LOGGENERATOR2_LogGenerator_generated_h

#define LogGenerator2_Source_LogGenerator2_Public_LogGenerator_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFileLoadAndReturnString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileNameA); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=ALogGenerator::FileLoadAndReturnString(Z_Param_FileNameA); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFileLoadString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileNameA); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_SaveTextA); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=ALogGenerator::FileLoadString(Z_Param_FileNameA,Z_Param_Out_SaveTextA); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFileSaveString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SaveTextB); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileNameB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=ALogGenerator::FileSaveString(Z_Param_SaveTextB,Z_Param_FileNameB); \
		P_NATIVE_END; \
	}


#define LogGenerator2_Source_LogGenerator2_Public_LogGenerator_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFileLoadAndReturnString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileNameA); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=ALogGenerator::FileLoadAndReturnString(Z_Param_FileNameA); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFileLoadString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileNameA); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_SaveTextA); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=ALogGenerator::FileLoadString(Z_Param_FileNameA,Z_Param_Out_SaveTextA); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFileSaveString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SaveTextB); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileNameB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=ALogGenerator::FileSaveString(Z_Param_SaveTextB,Z_Param_FileNameB); \
		P_NATIVE_END; \
	}


#define LogGenerator2_Source_LogGenerator2_Public_LogGenerator_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALogGenerator(); \
	friend struct Z_Construct_UClass_ALogGenerator_Statics; \
public: \
	DECLARE_CLASS(ALogGenerator, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LogGenerator2"), NO_API) \
	DECLARE_SERIALIZER(ALogGenerator)


#define LogGenerator2_Source_LogGenerator2_Public_LogGenerator_h_12_INCLASS \
private: \
	static void StaticRegisterNativesALogGenerator(); \
	friend struct Z_Construct_UClass_ALogGenerator_Statics; \
public: \
	DECLARE_CLASS(ALogGenerator, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LogGenerator2"), NO_API) \
	DECLARE_SERIALIZER(ALogGenerator)


#define LogGenerator2_Source_LogGenerator2_Public_LogGenerator_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALogGenerator(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALogGenerator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALogGenerator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALogGenerator); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALogGenerator(ALogGenerator&&); \
	NO_API ALogGenerator(const ALogGenerator&); \
public:


#define LogGenerator2_Source_LogGenerator2_Public_LogGenerator_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALogGenerator(ALogGenerator&&); \
	NO_API ALogGenerator(const ALogGenerator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALogGenerator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALogGenerator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALogGenerator)


#define LogGenerator2_Source_LogGenerator2_Public_LogGenerator_h_12_PRIVATE_PROPERTY_OFFSET
#define LogGenerator2_Source_LogGenerator2_Public_LogGenerator_h_9_PROLOG
#define LogGenerator2_Source_LogGenerator2_Public_LogGenerator_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LogGenerator2_Source_LogGenerator2_Public_LogGenerator_h_12_PRIVATE_PROPERTY_OFFSET \
	LogGenerator2_Source_LogGenerator2_Public_LogGenerator_h_12_RPC_WRAPPERS \
	LogGenerator2_Source_LogGenerator2_Public_LogGenerator_h_12_INCLASS \
	LogGenerator2_Source_LogGenerator2_Public_LogGenerator_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define LogGenerator2_Source_LogGenerator2_Public_LogGenerator_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LogGenerator2_Source_LogGenerator2_Public_LogGenerator_h_12_PRIVATE_PROPERTY_OFFSET \
	LogGenerator2_Source_LogGenerator2_Public_LogGenerator_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	LogGenerator2_Source_LogGenerator2_Public_LogGenerator_h_12_INCLASS_NO_PURE_DECLS \
	LogGenerator2_Source_LogGenerator2_Public_LogGenerator_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LOGGENERATOR2_API UClass* StaticClass<class ALogGenerator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID LogGenerator2_Source_LogGenerator2_Public_LogGenerator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
