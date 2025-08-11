// Fill out your copyright notice in the Description page of Project Settings.


#include "System/Inventory/GameInventory.h"

FGameItemData& FGameItemData::SetItemCategory(ECategory Category)
{
	ItemCategory = Category;
	return *this;
}

FGameItemData& FGameItemData::SetItemID(int32 ID)
{
	ItemID = ID;
	return *this;
}

FGameItemData& FGameItemData::SetItemName(FString Name)
{
	ItemName = Name;
	return *this;
}

FGameItemData& FGameItemData::SetItemDescription(FString Description)
{
	ItemDescription = Description;
	return *this;
}

FGameItemData& FGameItemData::SetCanEquipment(bool CanEquipment)
{
	bCanEquipment = CanEquipment;
	return *this;
}

FGameItemData& FGameItemData::SetUseQuickSlot(bool UseQuickSlot)
{
	bUseQuickSlot = UseQuickSlot;
	return *this;
}

UGameInventory::UGameInventory()
{
}
