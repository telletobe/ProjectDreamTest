// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "../GameSystems/Inventory/GameInventory.h"
#include "UserInventorySlot.generated.h"

/**
 * 
 */

class UButton;
class UImage;
class UTextBlock;



UCLASS()
class PROJECTDREAM_API UUserInventorySlot : public UUserWidget
{
	GENERATED_BODY()
	
public:
	virtual void NativeConstruct() override;

	UFUNCTION()
	void UpdateData(const FGameItemData& InData);

	virtual FReply NativeOnPreviewMouseButtonDown(const FGeometry& InGeo, const FPointerEvent& InMouseEvent) override;
	virtual void NativeOnDragDetected(const FGeometry& InGeo, const FPointerEvent& InMouseEvent, UDragDropOperation*& OutOp) override;
	int32 GetSlotIndex() { return SlotIndex; }

	int32 GetItemQty();

private:

	void Refresh();

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> ItemSelectButton;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UImage> ItemIcon;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UTextBlock> ItemName;
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UTextBlock> ItemQty;
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UTextBlock> ItemCategory;
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UTextBlock> ItemWeight;

	int32 SlotIndex;


};
