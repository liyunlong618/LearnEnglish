// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TTSUniversalPluginMeoPlay/Public/UniversalTTS.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUniversalTTS() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	TTSUNIVERSALPLUGINMEOPLAY_API UClass* Z_Construct_UClass_UUniversalTTS();
	TTSUNIVERSALPLUGINMEOPLAY_API UClass* Z_Construct_UClass_UUniversalTTS_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TTSUniversalPluginMeoPlay();
// End Cross Module References
	DEFINE_FUNCTION(UUniversalTTS::execTTSInitLib)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UUniversalTTS::TTSInitLib();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUniversalTTS::execTTSSpeech)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_speech);
		P_GET_PROPERTY(FStrProperty,Z_Param_language);
		P_GET_PROPERTY(FFloatProperty,Z_Param_speechRateAndroid);
		P_GET_PROPERTY(FFloatProperty,Z_Param_speechRateIOS);
		P_GET_PROPERTY(FIntProperty,Z_Param_speechRateWindows);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUniversalTTS::TTSSpeech(Z_Param_speech,Z_Param_language,Z_Param_speechRateAndroid,Z_Param_speechRateIOS,Z_Param_speechRateWindows);
		P_NATIVE_END;
	}
	void UUniversalTTS::StaticRegisterNativesUUniversalTTS()
	{
		UClass* Class = UUniversalTTS::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TTSInitLib", &UUniversalTTS::execTTSInitLib },
			{ "TTSSpeech", &UUniversalTTS::execTTSSpeech },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUniversalTTS_TTSInitLib_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUniversalTTS_TTSInitLib_Statics::Function_MetaDataParams[] = {
		{ "Category", "UniversalTTS" },
		{ "ModuleRelativePath", "Public/UniversalTTS.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUniversalTTS_TTSInitLib_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUniversalTTS, nullptr, "TTSInitLib", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUniversalTTS_TTSInitLib_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUniversalTTS_TTSInitLib_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UUniversalTTS_TTSInitLib()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUniversalTTS_TTSInitLib_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUniversalTTS_TTSSpeech_Statics
	{
		struct UniversalTTS_eventTTSSpeech_Parms
		{
			FString speech;
			FString language;
			float speechRateAndroid;
			float speechRateIOS;
			int32 speechRateWindows;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_speech_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_speech;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_language_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_language;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_speechRateAndroid;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_speechRateIOS;
		static const UECodeGen_Private::FIntPropertyParams NewProp_speechRateWindows;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUniversalTTS_TTSSpeech_Statics::NewProp_speech_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUniversalTTS_TTSSpeech_Statics::NewProp_speech = { "speech", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UniversalTTS_eventTTSSpeech_Parms, speech), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUniversalTTS_TTSSpeech_Statics::NewProp_speech_MetaData), Z_Construct_UFunction_UUniversalTTS_TTSSpeech_Statics::NewProp_speech_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUniversalTTS_TTSSpeech_Statics::NewProp_language_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUniversalTTS_TTSSpeech_Statics::NewProp_language = { "language", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UniversalTTS_eventTTSSpeech_Parms, language), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUniversalTTS_TTSSpeech_Statics::NewProp_language_MetaData), Z_Construct_UFunction_UUniversalTTS_TTSSpeech_Statics::NewProp_language_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUniversalTTS_TTSSpeech_Statics::NewProp_speechRateAndroid = { "speechRateAndroid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UniversalTTS_eventTTSSpeech_Parms, speechRateAndroid), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUniversalTTS_TTSSpeech_Statics::NewProp_speechRateIOS = { "speechRateIOS", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UniversalTTS_eventTTSSpeech_Parms, speechRateIOS), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUniversalTTS_TTSSpeech_Statics::NewProp_speechRateWindows = { "speechRateWindows", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UniversalTTS_eventTTSSpeech_Parms, speechRateWindows), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUniversalTTS_TTSSpeech_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniversalTTS_TTSSpeech_Statics::NewProp_speech,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniversalTTS_TTSSpeech_Statics::NewProp_language,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniversalTTS_TTSSpeech_Statics::NewProp_speechRateAndroid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniversalTTS_TTSSpeech_Statics::NewProp_speechRateIOS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniversalTTS_TTSSpeech_Statics::NewProp_speechRateWindows,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUniversalTTS_TTSSpeech_Statics::Function_MetaDataParams[] = {
		{ "Category", "UniversalTTS" },
		{ "CPP_Default_language", "default" },
		{ "CPP_Default_speechRateAndroid", "1.000000" },
		{ "CPP_Default_speechRateIOS", "0.300000" },
		{ "CPP_Default_speechRateWindows", "1" },
		{ "ModuleRelativePath", "Public/UniversalTTS.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUniversalTTS_TTSSpeech_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUniversalTTS, nullptr, "TTSSpeech", nullptr, nullptr, Z_Construct_UFunction_UUniversalTTS_TTSSpeech_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniversalTTS_TTSSpeech_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUniversalTTS_TTSSpeech_Statics::UniversalTTS_eventTTSSpeech_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUniversalTTS_TTSSpeech_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUniversalTTS_TTSSpeech_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUniversalTTS_TTSSpeech_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUniversalTTS_TTSSpeech_Statics::UniversalTTS_eventTTSSpeech_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUniversalTTS_TTSSpeech()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUniversalTTS_TTSSpeech_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUniversalTTS);
	UClass* Z_Construct_UClass_UUniversalTTS_NoRegister()
	{
		return UUniversalTTS::StaticClass();
	}
	struct Z_Construct_UClass_UUniversalTTS_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUniversalTTS_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_TTSUniversalPluginMeoPlay,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUniversalTTS_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UUniversalTTS_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUniversalTTS_TTSInitLib, "TTSInitLib" }, // 3502384395
		{ &Z_Construct_UFunction_UUniversalTTS_TTSSpeech, "TTSSpeech" }, // 2455090080
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUniversalTTS_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUniversalTTS_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UniversalTTS.h" },
		{ "ModuleRelativePath", "Public/UniversalTTS.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUniversalTTS_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUniversalTTS>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUniversalTTS_Statics::ClassParams = {
		&UUniversalTTS::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUniversalTTS_Statics::Class_MetaDataParams), Z_Construct_UClass_UUniversalTTS_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UUniversalTTS()
	{
		if (!Z_Registration_Info_UClass_UUniversalTTS.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUniversalTTS.OuterSingleton, Z_Construct_UClass_UUniversalTTS_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUniversalTTS.OuterSingleton;
	}
	template<> TTSUNIVERSALPLUGINMEOPLAY_API UClass* StaticClass<UUniversalTTS>()
	{
		return UUniversalTTS::StaticClass();
	}
	UUniversalTTS::UUniversalTTS(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUniversalTTS);
	UUniversalTTS::~UUniversalTTS() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TTSUniversalPluginMeoPlay_Source_TTSUniversalPluginMeoPlay_Public_UniversalTTS_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TTSUniversalPluginMeoPlay_Source_TTSUniversalPluginMeoPlay_Public_UniversalTTS_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUniversalTTS, UUniversalTTS::StaticClass, TEXT("UUniversalTTS"), &Z_Registration_Info_UClass_UUniversalTTS, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUniversalTTS), 3457682154U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TTSUniversalPluginMeoPlay_Source_TTSUniversalPluginMeoPlay_Public_UniversalTTS_h_3608765908(TEXT("/Script/TTSUniversalPluginMeoPlay"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TTSUniversalPluginMeoPlay_Source_TTSUniversalPluginMeoPlay_Public_UniversalTTS_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TTSUniversalPluginMeoPlay_Source_TTSUniversalPluginMeoPlay_Public_UniversalTTS_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
