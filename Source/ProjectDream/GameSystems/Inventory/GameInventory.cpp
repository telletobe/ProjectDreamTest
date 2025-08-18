// Fill out your copyright notice in the Description page of Project Settings.


#include "GameSystems/Inventory/GameInventory.h"
#include "GameItem.h"

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

FGameItemData& FGameItemData::SetItemWeight(float Weight)
{
	ItemWeight = Weight;
	return *this;
}

UGameInventory::UGameInventory()
{
}

void UGameInventory::InitInventory(int32 Size)
{
	Size = FMath::Max(0, Size);
	if (Size >= 50)
	{
		Size = 50;
	}

	InventoryData.SetNum(Size);

}

bool UGameInventory::AddToInventory(const FGameItemData& ItemData)
{
	FGameItemData Data;
	Data.SetItemName(ItemData.ItemName)
		.SetItemCategory(ItemData.ItemCategory)
		.SetItemID(1)
		.SetItemDescription(TEXT("Item"))
		.SetUseQuickSlot(false)
		.SetItemWeight(ItemData.ItemWeight);
	if (ItemData.ItemCategory == ECategory::Equipment)
	{
		Data.SetCanEquipment(true);
	}
	else
	{
		Data.SetCanEquipment(false);
	}
	
	// 같은 아이템이 있다면 아이템 데이터의 갯수만 증가후 배열에 추가하지않음.
	// 아직 안만든 기능
	InventoryData.Add(Data);
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::MakeRandomColor(), TEXT("Get Item!"));
	UE_LOG(LogTemp,Warning,TEXT("Get Item!"));

	ChangeInventoryData.Broadcast(); // UI Update

	return true;
}



