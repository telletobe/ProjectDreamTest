// Fill out your copyright notice in the Description page of Project Settings.


#include "UMG/UserInventorySlot.h"
#include "Components/TextBlock.h"

void UUserInventorySlot::NativeConstruct()
{

}

void UUserInventorySlot::BindData(const FGameItemData& InData)
{
	
	if (!InData.IsValid()) return;

	if (ItemName)
	{
		ItemName->SetText(FText::FromString(InData.ItemName));
	}

	if (ItemQty)
	{
		ItemQty->SetText(FText::AsNumber(InData.ItemQty));
	}

	if (ItemCategory)
	{
		ItemCategory->SetText(FText::FromString(StaticEnum<ECategory>()->GetNameStringByValue((int64)InData.ItemCategory)));
	}

	if (ItemWeight)
	{
		ItemWeight->SetText(FText::AsNumber(InData.ItemWeight));
	}


}
