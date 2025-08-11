// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameInventory.generated.h"

UENUM()
enum class ECategory : int8
{
	Equipment	UMETA(DisPlayName = "Equipment"),
	Consumable	UMETA(DisplayName = "Consumable"),
	Other		UMETA(DisplayName = "Other")
};

USTRUCT()
struct FGameItemData
{
	GENERATED_BODY()

public:

	FGameItemData() : ItemCategory(ECategory::Other), ItemID(0), ItemName(TEXT("")), ItemDescription(TEXT("")), bCanEquipment(false), bUseQuickSlot(false), ItemTotalCnt(0)
	{

	}	

	FGameItemData& SetItemCategory(ECategory Category);
	FGameItemData& SetItemID(int32 ID);
	FGameItemData& SetItemName(FString Name);
	FGameItemData& SetItemDescription(FString Description);
	FGameItemData& SetCanEquipment(bool CanEquipment);
	FGameItemData& SetUseQuickSlot(bool UseQuickSlot);

private:

	ECategory ItemCategory;
	int32 ItemID;
	FString ItemName;
	FString ItemDescription;
	bool bCanEquipment;
	bool bUseQuickSlot;

	int32 ItemTotalCnt;


private:

	
};

UCLASS()
class PROJECTDREAM_API UGameInventory : public UObject
{
	GENERATED_BODY()
	
public :
	UGameInventory();
private:
	
	TArray<TArray<FGameItemData*>> InventorySlot;
	
};
