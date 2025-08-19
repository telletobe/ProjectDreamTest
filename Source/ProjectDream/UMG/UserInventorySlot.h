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
};
