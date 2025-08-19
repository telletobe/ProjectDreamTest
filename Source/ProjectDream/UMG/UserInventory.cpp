// Fill out your copyright notice in the Description page of Project Settings.


#include "UMG/UserInventory.h"
#include "GameSystems/Inventory/GameInventory.h"
#include "ProjectDreamCharacter.h"
#include "ProjectDreamPlayerController.h"
#include "Components/Button.h"
#include "UserInventorySlot.h"
#include "Components/ScrollBox.h"

void UUserInventory::NativeConstruct()
{
	AProjectDreamPlayerController* PC = Cast<AProjectDreamPlayerController>(GetOwningPlayer());
	if (PC)
	{
		AProjectDreamCharacter* Player = Cast<AProjectDreamCharacter>(PC->GetPawn());
		if (Player)
		{
			Player->OnInventoryEvent.AddUniqueDynamic(this, &UUserInventory::OnOffInventory);
			Player->OnReadyInventory.AddUniqueDynamic(this, &UUserInventory::BindInventory);	
		}
	}

	if (ButtonClose)
	{
		ButtonClose->OnClicked.AddUniqueDynamic(this, &UUserInventory::OnOffInventory);
	}
}

void UUserInventory::OnOffInventory()
{
	UE_LOG(LogTemp,Warning,TEXT("Call OnOffInventory"));
	ESlateVisibility CurrentVisible = GetVisibility();

	switch (CurrentVisible)
	{
	case ESlateVisibility::Visible:
		SetVisibility(ESlateVisibility::Hidden);
		break;
	case ESlateVisibility::Collapsed:
		break;
	case ESlateVisibility::Hidden:
		SetVisibility(ESlateVisibility::Visible);
		break;
	case ESlateVisibility::HitTestInvisible:
		break;
	case ESlateVisibility::SelfHitTestInvisible:
		break;
	default:
		break;
	}
}

void UUserInventory::UpdateInventoryUI()
{
	GEngine->AddOnScreenDebugMessage(-1,5.0f,FColor::MakeRandomColor(),TEXT("Call UpdateInventoryUI"));
	UE_LOG(LogTemp, Warning, TEXT("Call UpdateInventoryUI"));
	if (!Inventory || !ItemScroll || !SlotWidgetClass) return;

	const TArray<FGameItemData>& Rows = Inventory->GetInventoryData();

	for (int32 i = SlotWidgets.Num(); i < Rows.Num(); i++)
	{
		UUserInventorySlot* NewSlot = CreateWidget<UUserInventorySlot>(GetOwningPlayer(), SlotWidgetClass);
		if (!NewSlot) continue;
		NewSlot->UpdateData(Rows[i]);
		ItemScroll->AddChild(NewSlot);		
		SlotWidgets.Add(NewSlot);		

	}
}

void UUserInventory::UpdateInventoryUIWithIdx(int32 index)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::MakeRandomColor(), TEXT("Call UpdateInventoryUI(index)"));
	UE_LOG(LogTemp, Warning, TEXT("Call UpdateInventoryUI(index)"));
	if (!Inventory || !ItemScroll || !SlotWidgetClass) return;

	
	if (SlotWidgets[index])
	{
		TArray<FGameItemData> InvData = Inventory->GetInventoryData();
		const FGameItemData IndexItemData = InvData[index];
		SlotWidgets[index]->UpdateData(IndexItemData);
	}
}

void UUserInventory::BindInventory(UGameInventory* PlayerInventory)
{
	if (Inventory)
	{
		Inventory->ChangeInventoryData.RemoveAll(this);
	}

	if (PlayerInventory)
	{
		Inventory = PlayerInventory;
		if (Inventory)
		{
			Inventory->ChangeInventoryData.AddUniqueDynamic(this, &UUserInventory::UpdateInventoryUI);
			Inventory->ChnageInventoryDataWithIndex.AddUniqueDynamic(this, &UUserInventory::UpdateInventoryUIWithIdx);
			GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::MakeRandomColor(), TEXT("Bind inventory"));
		}		
	}
}
