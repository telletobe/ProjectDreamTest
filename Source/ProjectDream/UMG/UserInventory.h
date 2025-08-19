// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "GameSystems/Inventory/GameInventory.h"
#include "UserInventory.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTDREAM_API UUserInventory : public UUserWidget
{
	GENERATED_BODY()
	
public:

	virtual void NativeConstruct() override;

	UFUNCTION()
	void OnOffInventory();

	UFUNCTION()
	void UpdateInventoryUI();
	
	UFUNCTION()
	void UpdateInventoryUIWithIdx(int32 index);

	UFUNCTION()
	void BindInventory(UGameInventory* PlayerInventory);

	void RebuildList();

private:

	UPROPERTY()
	FGameItemData InventoryData;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<class UScrollBox> ItemScroll = nullptr;

	UPROPERTY(EditAnywhere,Category="Inventory | UI")
	TSubclassOf<class UUserInventorySlot> SlotWidgetClass;

	UPROPERTY()
	TObjectPtr<UGameInventory> Inventory = nullptr;

	UPROPERTY()
	TArray<TObjectPtr<UUserInventorySlot>> SlotWidgets;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<class UButton> ButtonClose;

};
