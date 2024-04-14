// Copyright 2023 Dexter.Wan. All Rights Reserved. 
// EMail: 45141961@qq.com

#include "DTDataTableBPLib.h"
#include "DTDataTableObject.h"
#include "Misc/FileHelper.h"

bool FDTDataTableExporterCSV::WriteTable(const UDataTable& InDataTable)
{
	if (!InDataTable.RowStruct)
	{
		return false;
	}

	// Write the header (column titles)
	FString ImportKeyField;
	if (!InDataTable.ImportKeyField.IsEmpty())
	{
		// Write actual name if we have it
		ImportKeyField = InDataTable.ImportKeyField;
		ExportedText += ImportKeyField;
	}
	else
	{
		ExportedText += TEXT("---");
	}

	FProperty* SkipProperty = nullptr;
	for (TFieldIterator<FProperty> It(InDataTable.RowStruct); It; ++It)
	{
		FProperty* BaseProp = *It;
		check(BaseProp);

		FString ColumnHeader = DataTableUtils::GetPropertyExportName(BaseProp, EDataTableExportFlags::None);
		
		if (ColumnHeader == ImportKeyField)
		{
			// Don't write header again if this is the name field, and save for skipping later
			SkipProperty = BaseProp;
			continue;
		}
		
		ExportedText += TEXT(",");
		ExportedText += ColumnHeader;
	}
	ExportedText += TEXT("\n");

	// Write each row
	for (auto RowIt = InDataTable.GetRowMap().CreateConstIterator(); RowIt; ++RowIt)
	{
		FName RowName = RowIt.Key();
		ExportedText += RowName.ToString();

		uint8* RowData = RowIt.Value();
		WriteRow(InDataTable.RowStruct, RowData, SkipProperty);

		ExportedText += TEXT("\n");
	}

	return true;
}

bool FDTDataTableExporterCSV::WriteRow(const UScriptStruct* InRowStruct, const void* InRowData, const FProperty* SkipProperty) const
{
	if (!InRowStruct)
	{
		return false;
	}

	for (TFieldIterator<FProperty> It(InRowStruct); It; ++It)
	{
		FProperty* BaseProp = *It;
		check(BaseProp);

		if (BaseProp == SkipProperty)
		{
			continue;
		}

		const void* Data = BaseProp->ContainerPtrToValuePtr<void>(InRowData, 0);
		WriteStructEntry(InRowData, BaseProp, Data);
	}

	return true;
}

bool FDTDataTableExporterCSV::WriteStructEntry(const void* InRowData, FProperty* InProperty, const void* InPropertyData) const
{
	ExportedText += TEXT(",");

	const FString PropertyValue = DataTableUtils::GetPropertyValueAsString(InProperty, (uint8*)InRowData, EDataTableExportFlags::None);
	ExportedText += TEXT("\"");
	ExportedText += PropertyValue.Replace(TEXT("\""), TEXT("\"\""));
	ExportedText += TEXT("\"");

	return true;
}

void UDTDataTableBPLib::CreateDTDataTableFromCSVFile(const FString& FilePath, UScriptStruct * Struct, UDTDataTableObject *& DTDataTable)
{
	FString FileOutput;
	FFileHelper::LoadFileToString(FileOutput, *FilePath);
	DTDataTable = NewObject<UDTDataTableObject>();
	DTDataTable->RowStruct = Struct;
	DTDataTable->CreateTableFromCSVString(FileOutput);
}

void UDTDataTableBPLib::CreateDTTableFromOtherTable(const UDataTable* DataTable, UDTDataTableObject*& DTDataTable)
{
	DTDataTable = NewObject<UDTDataTableObject>();
	DTDataTable->CreateTableFromOtherTable(DataTable);
}

void UDTDataTableBPLib::SaveCSVFile(const UDataTable* DataTable, const FString& FilePath)
{
	FString Result;
	if (!FDTDataTableExporterCSV(Result).WriteTable(*DataTable))
	{
		UE_LOG(LogDataTable, Error, TEXT("Save CSV File : Missing RowStruct!"));
		return;
	}
	if ( !FFileHelper::SaveStringToFile(Result, *FilePath, FFileHelper::EEncodingOptions::ForceUTF8) )
	{
		UE_LOG(LogDataTable, Error, TEXT("Save CSV File : Save The File Failed!"));
		return;
	}
}