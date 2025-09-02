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

FGameItemData& FGameItemData::SetItemQty(int Qty)
{
	ItemQty = Qty;
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

void UGameInventory::ItemDrop(int32 TargetIndex)
{
	if (TargetIndex <= INDEX_NONE) return;
	if (!InventoryData.IsValidIndex(TargetIndex)) return;

	InventoryData.RemoveAt(TargetIndex);
	ChangeInventoryDataWithIndex.Broadcast(TargetIndex);

}

void UGameInventory::AddToQty(int32 ItemIndex, int32 ItemQty)
{
	if (!InventoryData.IsValidIndex(ItemIndex)) return;
	InventoryData[ItemIndex].ItemQty += ItemQty;
	ChangeInventoryDataWithIndex.Broadcast(ItemIndex);
}

void UGameInventory::MinusToQty(int32 ItemIndex, int32 ItemQty)
{
	if (!InventoryData.IsValidIndex(ItemIndex)) return;
	InventoryData[ItemIndex].ItemQty -= ItemQty;

	if (InventoryData[ItemIndex].ItemQty == 0)
	{
		ItemDrop(ItemIndex);
	}
	else
	{
		ChangeInventoryDataWithIndex.Broadcast(ItemIndex);
	}
}


bool UGameInventory::AddToInventory(const FGameItemData& ItemData)
{
	for (int32 i = 0; i < InventoryData.Num(); i++)
	{
		// 같은 아이템이 있다면 아이템 데이터의 갯수만 증가후 배열에 추가하지않음.
		if ((InventoryData[i].ItemCategory == ItemData.ItemCategory) && InventoryData[i].ItemID == ItemData.ItemID)
		{
			AddToQty(i,ItemData.ItemQty);
			return true;
		}
	}

	FGameItemData Data;

	Data.SetItemName(ItemData.ItemName)
		.SetItemCategory(ItemData.ItemCategory)
		.SetItemID(ItemData.ItemID)
		.SetItemDescription(TEXT("Item"))
		.SetUseQuickSlot(false)
		.SetItemWeight(ItemData.ItemWeight)
		.SetItemQty(ItemData.ItemQty);
	if (ItemData.ItemCategory == ECategory::Equipment)
	{
		Data.SetCanEquipment(true);
	}
	else
	{
		Data.SetCanEquipment(false);
	}
	

	int32 NewIndex = InventoryData.Add(Data);
	if (InventoryData[NewIndex].IsValid())
	{
		InventoryData[NewIndex].ItemIndex = NewIndex;
	}

	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::MakeRandomColor(), TEXT("Get Item!"));
	UE_LOG(LogTemp,Warning,TEXT("Get Item!"));

	ChangeInventoryData.Broadcast(); // call UserInventory.cpp UpdateInventoryUI()

	return true;
}



