// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LOGGENERATOR2_MyBlueprintFunctionLibrary_generated_h
#error "MyBlueprintFunctionLibrary.generated.h already included, missing '#pragma once' in MyBlueprintFunctionLibrary.h"
#endif
#define LOGGENERATOR2_MyBlueprintFunctionLibrary_generated_h

#define LogGenerator2_Source_LogGenerator2_Public_MyBlueprintFunctionLibrary_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFileLoadAndReturnString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileNameA); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UMyBlueprintFunctionLibrary::FileLoadAndReturnString(Z_Param_FileNameA); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFileLoadString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileNameA); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_SaveTextA); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMyBlueprintFunctionLibrary::FileLoadString(Z_Param_FileNameA,Z_Param_Out_SaveTextA); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFileSaveString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SaveTextB); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileNameB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMyBlueprintFunctionLibrary::FileSaveString(Z_Param_SaveTextB,Z_Param_FileNameB); \
		P_NATIVE_END; \
	}


#define LogGenerator2_Source_LogGenerator2_Public_MyBlueprintFunctionLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFileLoadAndReturnString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileNameA); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UMyBlueprintFunctionLibrary::FileLoadAndReturnString(Z_Param_FileNameA); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFileLoadString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileNameA); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_SaveTextA); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMyBlueprintFunctionLibrary::FileLoadString(Z_Param_FileNameA,Z_Param_Out_SaveTextA); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFileSaveString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SaveTextB); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileNameB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMyBlueprintFunctionLibrary::FileSaveString(Z_Param_SaveTextB,Z_Param_FileNameB); \
		P_NATIVE_END; \
	}


#define LogGenerator2_Source_LogGenerator2_Public_MyBlueprintFunctionLibrary_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyBlueprintFunctionLibrary(); \
	friend struct Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UMyBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LogGenerator2"), NO_API) \
	DECLARE_SERIALIZER(UMyBlueprintFunctionLibrary)


#define LogGenerator2_Source_LogGenerator2_Public_MyBlueprintFunctionLibrary_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUMyBlueprintFunctionLibrary(); \
	friend struct Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UMyBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LogGenerator2"), NO_API) \
	DECLARE_SERIALIZER(UMyBlueprintFunctionLibrary)


#define LogGenerator2_Source_LogGenerator2_Public_MyBlueprintFunctionLibrary_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyBlueprintFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyBlueprintFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyBlueprintFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyBlueprintFunctionLibrary(UMyBlueprintFunctionLibrary&&); \
	NO_API UMyBlueprintFunctionLibrary(const UMyBlueprintFunctionLibrary&); \
public:


#define LogGenerator2_Source_LogGenerator2_Public_MyBlueprintFunctionLibrary_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyBlueprintFunctionLibrary(UMyBlueprintFunctionLibrary&&); \
	NO_API UMyBlueprintFunctionLibrary(const UMyBlueprintFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyBlueprintFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyBlueprintFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyBlueprintFunctionLibrary)


#define LogGenerator2_Source_LogGenerator2_Public_MyBlueprintFunctionLibrary_h_15_PRIVATE_PROPERTY_OFFSET
#define LogGenerator2_Source_LogGenerator2_Public_MyBlueprintFunctionLibrary_h_12_PROLOG
#define LogGenerator2_Source_LogGenerator2_Public_MyBlueprintFunctionLibrary_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LogGenerator2_Source_LogGenerator2_Public_MyBlueprintFunctionLibrary_h_15_PRIVATE_PROPERTY_OFFSET \
	LogGenerator2_Source_LogGenerator2_Public_MyBlueprintFunctionLibrary_h_15_RPC_WRAPPERS \
	LogGenerator2_Source_LogGenerator2_Public_MyBlueprintFunctionLibrary_h_15_INCLASS \
	LogGenerator2_Source_LogGenerator2_Public_MyBlueprintFunctionLibrary_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define LogGenerator2_Source_LogGenerator2_Public_MyBlueprintFunctionLibrary_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LogGenerator2_Source_LogGenerator2_Public_MyBlueprintFunctionLibrary_h_15_PRIVATE_PROPERTY_OFFSET \
	LogGenerator2_Source_LogGenerator2_Public_MyBlueprintFunctionLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	LogGenerator2_Source_LogGenerator2_Public_MyBlueprintFunctionLibrary_h_15_INCLASS_NO_PURE_DECLS \
	LogGenerator2_Source_LogGenerator2_Public_MyBlueprintFunctionLibrary_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LOGGENERATOR2_API UClass* StaticClass<class UMyBlueprintFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID LogGenerator2_Source_LogGenerator2_Public_MyBlueprintFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
