// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DTDataTable/Public/DTDataTableObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDTDataTableObject() {}
// Cross Module References
	DTDATATABLE_API UClass* Z_Construct_UClass_UDTDataTableObject();
	DTDATATABLE_API UClass* Z_Construct_UClass_UDTDataTableObject_NoRegister();
	DTDATATABLE_API UScriptStruct* Z_Construct_UScriptStruct_FDTDataTableStruct();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable();
	UPackage* Z_Construct_UPackage__Script_DTDataTable();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DTDataTableStruct;
class UScriptStruct* FDTDataTableStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DTDataTableStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DTDataTableStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDTDataTableStruct, (UObject*)Z_Construct_UPackage__Script_DTDataTable(), TEXT("DTDataTableStruct"));
	}
	return Z_Registration_Info_UScriptStruct_DTDataTableStruct.OuterSingleton;
}
template<> DTDATATABLE_API UScriptStruct* StaticStruct<FDTDataTableStruct>()
{
	return FDTDataTableStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDTDataTableStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDTDataTableStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DTDataTableObject.h" },
		{ "NotBlueprintType", "true" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDTDataTableStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDTDataTableStruct>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDTDataTableStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DTDataTable,
		nullptr,
		&NewStructOps,
		"DTDataTableStruct",
		nullptr,
		0,
		sizeof(FDTDataTableStruct),
		alignof(FDTDataTableStruct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDTDataTableStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDTDataTableStruct_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDTDataTableStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_DTDataTableStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DTDataTableStruct.InnerSingleton, Z_Construct_UScriptStruct_FDTDataTableStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DTDataTableStruct.InnerSingleton;
	}
	DEFINE_FUNCTION(UDTDataTableObject::execDTEmptyTable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DTEmptyTable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDTDataTableObject::execDTRemoveRow)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_RowName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DTRemoveRow(Z_Param_RowName);
		P_NATIVE_END;
	}
	void UDTDataTableObject::StaticRegisterNativesUDTDataTableObject()
	{
		UClass* Class = UDTDataTableObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DTAddRow", &UDTDataTableObject::execDTAddRow },
			{ "DTEmptyTable", &UDTDataTableObject::execDTEmptyTable },
			{ "DTRemoveRow", &UDTDataTableObject::execDTRemoveRow },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDTDataTableObject_DTAddRow_Statics
	{
		struct DTDataTableObject_eventDTAddRow_Parms
		{
			FName RowName;
			FDTDataTableStruct Struct;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_RowName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Struct_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Struct;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDTDataTableObject_DTAddRow_Statics::NewProp_RowName = { "RowName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DTDataTableObject_eventDTAddRow_Parms, RowName), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDTDataTableObject_DTAddRow_Statics::NewProp_Struct_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDTDataTableObject_DTAddRow_Statics::NewProp_Struct = { "Struct", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DTDataTableObject_eventDTAddRow_Parms, Struct), Z_Construct_UScriptStruct_FDTDataTableStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDTDataTableObject_DTAddRow_Statics::NewProp_Struct_MetaData), Z_Construct_UFunction_UDTDataTableObject_DTAddRow_Statics::NewProp_Struct_MetaData) }; // 830359256
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDTDataTableObject_DTAddRow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDTDataTableObject_DTAddRow_Statics::NewProp_RowName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDTDataTableObject_DTAddRow_Statics::NewProp_Struct,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDTDataTableObject_DTAddRow_Statics::Function_MetaDataParams[] = {
		{ "Category", "DT Data Table" },
		{ "CustomStructureParam", "Struct" },
		{ "CustomThunk", "true" },
		{ "DisplayName", "Add Row" },
		{ "Keywords", "addrow" },
		{ "ModuleRelativePath", "Public/DTDataTableObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDTDataTableObject_DTAddRow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDTDataTableObject, nullptr, "DTAddRow", nullptr, nullptr, Z_Construct_UFunction_UDTDataTableObject_DTAddRow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDTDataTableObject_DTAddRow_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDTDataTableObject_DTAddRow_Statics::DTDataTableObject_eventDTAddRow_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDTDataTableObject_DTAddRow_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDTDataTableObject_DTAddRow_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDTDataTableObject_DTAddRow_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDTDataTableObject_DTAddRow_Statics::DTDataTableObject_eventDTAddRow_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDTDataTableObject_DTAddRow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDTDataTableObject_DTAddRow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDTDataTableObject_DTEmptyTable_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDTDataTableObject_DTEmptyTable_Statics::Function_MetaDataParams[] = {
		{ "Category", "DT Data Table" },
		{ "DisplayName", "Empty Table" },
		{ "Keywords", "emptytable" },
		{ "ModuleRelativePath", "Public/DTDataTableObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDTDataTableObject_DTEmptyTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDTDataTableObject, nullptr, "DTEmptyTable", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDTDataTableObject_DTEmptyTable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDTDataTableObject_DTEmptyTable_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UDTDataTableObject_DTEmptyTable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDTDataTableObject_DTEmptyTable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDTDataTableObject_DTRemoveRow_Statics
	{
		struct DTDataTableObject_eventDTRemoveRow_Parms
		{
			FName RowName;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_RowName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDTDataTableObject_DTRemoveRow_Statics::NewProp_RowName = { "RowName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DTDataTableObject_eventDTRemoveRow_Parms, RowName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDTDataTableObject_DTRemoveRow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDTDataTableObject_DTRemoveRow_Statics::NewProp_RowName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDTDataTableObject_DTRemoveRow_Statics::Function_MetaDataParams[] = {
		{ "Category", "DT Data Table" },
		{ "DisplayName", "Remove Row" },
		{ "Keywords", "removerow" },
		{ "ModuleRelativePath", "Public/DTDataTableObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDTDataTableObject_DTRemoveRow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDTDataTableObject, nullptr, "DTRemoveRow", nullptr, nullptr, Z_Construct_UFunction_UDTDataTableObject_DTRemoveRow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDTDataTableObject_DTRemoveRow_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDTDataTableObject_DTRemoveRow_Statics::DTDataTableObject_eventDTRemoveRow_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDTDataTableObject_DTRemoveRow_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDTDataTableObject_DTRemoveRow_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDTDataTableObject_DTRemoveRow_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDTDataTableObject_DTRemoveRow_Statics::DTDataTableObject_eventDTRemoveRow_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDTDataTableObject_DTRemoveRow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDTDataTableObject_DTRemoveRow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDTDataTableObject);
	UClass* Z_Construct_UClass_UDTDataTableObject_NoRegister()
	{
		return UDTDataTableObject::StaticClass();
	}
	struct Z_Construct_UClass_UDTDataTableObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDTDataTableObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataTable,
		(UObject* (*)())Z_Construct_UPackage__Script_DTDataTable,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDTDataTableObject_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UDTDataTableObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDTDataTableObject_DTAddRow, "DTAddRow" }, // 2077746227
		{ &Z_Construct_UFunction_UDTDataTableObject_DTEmptyTable, "DTEmptyTable" }, // 3844781934
		{ &Z_Construct_UFunction_UDTDataTableObject_DTRemoveRow, "DTRemoveRow" }, // 115018899
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDTDataTableObject_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDTDataTableObject_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "DataTable,ImportOptions" },
		{ "BlueprintType", "true" },
		{ "DisplayName", "DT Data Table" },
		{ "IncludePath", "DTDataTableObject.h" },
		{ "ModuleRelativePath", "Public/DTDataTableObject.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDTDataTableObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDTDataTableObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDTDataTableObject_Statics::ClassParams = {
		&UDTDataTableObject::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDTDataTableObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UDTDataTableObject_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UDTDataTableObject()
	{
		if (!Z_Registration_Info_UClass_UDTDataTableObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDTDataTableObject.OuterSingleton, Z_Construct_UClass_UDTDataTableObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDTDataTableObject.OuterSingleton;
	}
	template<> DTDATATABLE_API UClass* StaticClass<UDTDataTableObject>()
	{
		return UDTDataTableObject::StaticClass();
	}
	UDTDataTableObject::UDTDataTableObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDTDataTableObject);
	UDTDataTableObject::~UDTDataTableObject() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DTDataTable_Source_DTDataTable_Public_DTDataTableObject_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DTDataTable_Source_DTDataTable_Public_DTDataTableObject_h_Statics::ScriptStructInfo[] = {
		{ FDTDataTableStruct::StaticStruct, Z_Construct_UScriptStruct_FDTDataTableStruct_Statics::NewStructOps, TEXT("DTDataTableStruct"), &Z_Registration_Info_UScriptStruct_DTDataTableStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDTDataTableStruct), 830359256U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DTDataTable_Source_DTDataTable_Public_DTDataTableObject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDTDataTableObject, UDTDataTableObject::StaticClass, TEXT("UDTDataTableObject"), &Z_Registration_Info_UClass_UDTDataTableObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDTDataTableObject), 2660863422U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DTDataTable_Source_DTDataTable_Public_DTDataTableObject_h_152278989(TEXT("/Script/DTDataTable"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DTDataTable_Source_DTDataTable_Public_DTDataTableObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DTDataTable_Source_DTDataTable_Public_DTDataTableObject_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DTDataTable_Source_DTDataTable_Public_DTDataTableObject_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DTDataTable_Source_DTDataTable_Public_DTDataTableObject_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
