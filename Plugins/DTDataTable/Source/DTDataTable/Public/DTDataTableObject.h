// Copyright 2023 Dexter.Wan. All Rights Reserved. 
// EMail: 45141961@qq.com

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "DTDataTableObject.generated.h"

USTRUCT(NotBlueprintType, BlueprintInternalUseOnly)
struct FDTDataTableStruct {
	GENERATED_USTRUCT_BODY()
};

UCLASS(BlueprintType, meta=(DisplayName= "DT Data Table"))
class DTDATATABLE_API UDTDataTableObject : public UDataTable
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, CustomThunk, meta = (DisplayName = "Add Row", CustomStructureParam = "Struct", Keywords="addrow"), Category="DT Data Table")
	void DTAddRow( FName RowName, const FDTDataTableStruct & Struct);
	void Generic_DTAddRow( FName RowName, void* StructAddr, FStructProperty * StructProperty );
	
	DECLARE_FUNCTION(execDTAddRow)
	{
		P_GET_PROPERTY(FNameProperty, RowName);
		
		Stack.MostRecentPropertyAddress = nullptr;
		Stack.MostRecentProperty = nullptr;
		Stack.StepCompiledIn<FStructProperty>(nullptr);
		void * StructAddr = Stack.MostRecentPropertyAddress;
		FStructProperty * StructProperty = CastField<FStructProperty>(Stack.MostRecentProperty);
		
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Generic_DTAddRow(RowName, StructAddr, StructProperty);
		P_NATIVE_END;
	}

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Remove Row", Keywords="removerow"), Category="DT Data Table")
	void DTRemoveRow( FName RowName );

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Empty Table", Keywords="emptytable"), Category="DT Data Table")
	void DTEmptyTable();
};
