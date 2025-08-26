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
	void UpdateInventoryUIWithIdxTwoParams(int32 index1, int32 index2);

	UFUNCTION()
	void BindInventory(UGameInventory* PlayerInventory);

	void RebuildList();

	virtual bool NativeOnDrop(const FGeometry& G, const FDragDropEvent& E, UDragDropOperation* Op) override;

private:

	UPROPERTY()
	FGameItemData InventoryData;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<class UBorder> InventoryBorder;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<class UScrollBox> ItemScroll = nullptr;

	UPROPERTY(EditAnywhere,Category="Inventory | UI")
	TSubclassOf<class UUserInventorySlot> SlotWidgetClass;

	UPROPERTY()
	TArray<TObjectPtr<UUserInventorySlot>> SlotWidgets;

	UPROPERTY()
	TObjectPtr<UGameInventory> Inventory = nullptr;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<class UButton> ButtonClose;

	int32 CaclTargetIndexFromMouse(const FGeometry& ScrollGeo, const FDragDropEvent& E) const;

};
