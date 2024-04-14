// Copyright 2023 Dexter.Wan. All Rights Reserved. 
// EMail: 45141961@qq.com

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DTDataTableBPLib.generated.h"

class FDTDataTableExporterCSV
{
public:
	FDTDataTableExporterCSV(FString& OutExportText) : ExportedText(OutExportText) {}
	~FDTDataTableExporterCSV() {}
	bool WriteTable(const UDataTable& InDataTable);
	bool WriteRow(const UScriptStruct* InRowStruct, const void* InRowData, const FProperty* SkipProperty = nullptr) const;
	bool WriteStructEntry(const void* InRowData, FProperty* InProperty, const void* InPropertyData) const;
	FString& ExportedText;
};


UCLASS(NotBlueprintable, NotBlueprintType, meta=(DisplayName="DT Data Table Function"))
class DTDATATABLE_API UDTDataTableBPLib : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, meta=(DisplayName="Create DT Data Table From CSV File"), Category="DT Data Table")
	static void CreateDTDataTableFromCSVFile( const FString & FilePath, UPARAM(DisplayName = "Row Struct") UScriptStruct * Struct, UPARAM(DisplayName = "DT Data Table") UDTDataTableObject *& DTDataTable );
	
	UFUNCTION(BlueprintCallable, meta=(DisplayName="Create DT Data Table From Other Table"), Category="DT Data Table")
	static void CreateDTTableFromOtherTable( const UDataTable* DataTable, UPARAM(DisplayName = "DT Data Table") UDTDataTableObject *& DTDataTable );

	UFUNCTION(BlueprintCallable, meta=(DisplayName="Save CSV File"), Category="DT Data Table")
	static void SaveCSVFile( const UDataTable * DataTable, const FString & FilePath );
};
