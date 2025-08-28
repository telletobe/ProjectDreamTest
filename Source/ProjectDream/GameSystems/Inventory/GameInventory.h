// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameInventory.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FChangeInventoryData);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FChangeInventoryDataWithIndex, int32, Index);

class AGameItem;

UENUM()
enum class ECategory : int8
{
	Equipment	UMETA(DisPlayName = "Equipment"),
	Consumable	UMETA(DisplayName = "Consumable"),
	Other		UMETA(DisplayName = "Other")
};

USTRUCT(BlueprintType)
struct FGameItemData
{
	GENERATED_BODY()

public:

	FGameItemData() : ItemCategory(ECategory::Other), ItemID(-1), ItemName(TEXT("")), ItemDescription(TEXT("")), bCanEquipment(false), bUseQuickSlot(false), ItemQty(0), ItemWeight(0.0)
	{

	}	

	FGameItemData& SetItemCategory(ECategory Category);
	FGameItemData& SetItemID(int32 ID);
	FGameItemData& SetItemName(FString Name);
	FGameItemData& SetItemDescription(FString Description);
	FGameItemData& SetCanEquipment(bool CanEquipment);
	FGameItemData& SetUseQuickSlot(bool UseQuickSlot);
	FGameItemData& SetItemWeight(float Weight);
	FGameItemData& SetItemQty(int Qty);

	bool IsValid() const { return (ItemID >= 1 && ItemQty > 0);}

	UPROPERTY(EditAnywhere, Category = "Data")
	ECategory ItemCategory;
	UPROPERTY(EditAnywhere, Category = "Data")
	int32 ItemID;
	UPROPERTY(EditAnywhere, Category = "Data")
	FString ItemName;
	UPROPERTY(EditAnywhere, Category = "Data")
	FString ItemDescription;
	UPROPERTY(EditAnywhere, Category = "Data")
	bool bCanEquipment;
	UPROPERTY(EditAnywhere, Category = "Data")
	bool bUseQuickSlot;

	UPROPERTY(EditAnywhere, Category = "Data")
	int32 ItemQty;
	UPROPERTY(EditAnywhere, Category = "Data")
	float ItemWeight;
	UPROPERTY(VisibleAnywhere, Category = "Data")
	int32 ItemIndex;

private:

	
};

UCLASS()
class PROJECTDREAM_API UGameInventory : public UObject
{
	GENERATED_BODY()
	
public :
	UGameInventory();
	bool AddToInventory(const FGameItemData& ItemData);
	void InitInventory(int32 Size);
	void ItemDrop(int32 TargetIndex);

	const TArray<FGameItemData>& GetInventoryData() const { return InventoryData; }
	const FGameItemData& GetInventoryData(int32 Index) const { return InventoryData[Index]; }
	int32 Num() const { return InventoryData.Num(); }

	FChangeInventoryData ChangeInventoryData;
	FChangeInventoryDataWithIndex ChnageInventoryDataWithIndex;

	void AddToQty(int32 ItemIndex ,int32 ItemQty);
private:

	TArray<FGameItemData> InventoryData;
	
};
