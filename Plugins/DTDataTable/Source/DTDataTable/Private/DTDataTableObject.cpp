// Copyright 2023 Dexter.Wan. All Rights Reserved. 
// EMail: 45141961@qq.com

#include "DTDataTableObject.h"

void UDTDataTableObject::DTAddRow(FName RowName, const FDTDataTableStruct& Struct)
{
	check(0);
}

void UDTDataTableObject::Generic_DTAddRow(FName RowName, void * StructAddr, FStructProperty * StructProperty)
{
	// 无效数据
	if ( StructAddr == nullptr || RowStruct == nullptr )
	{
		UE_LOG(LogDataTable, Error, TEXT("AddRow : Missing RowStruct!"));
		return;
	}

	// 配型不匹配
	if ( StructProperty == nullptr || StructProperty->Struct != RowStruct )
	{
		UE_LOG(LogDataTable, Error, TEXT("AddRow : RowStruct Type Does Not Match!"));
		return;
	}
	
	// 删除之前的数据
	RemoveRowInternal(RowName);

	// 拷贝新的数据
	UScriptStruct& EmptyUsingStruct = *RowStruct;
	uint8* NewRawRowData = (uint8*)FMemory::Malloc(EmptyUsingStruct.GetStructureSize());
	EmptyUsingStruct.InitializeStruct(NewRawRowData);
	EmptyUsingStruct.CopyScriptStruct(NewRawRowData, StructAddr);

	// 添加新的数据
	AddRowInternal(RowName, NewRawRowData);
}

void UDTDataTableObject::DTRemoveRow(FName RowName)
{
	RemoveRowInternal(RowName);
}

void UDTDataTableObject::DTEmptyTable()
{
	EmptyTable();
}

