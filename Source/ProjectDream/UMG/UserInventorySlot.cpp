// Fill out your copyright notice in the Description page of Project Settings.


#include "UMG/UserInventorySlot.h"
#include "Components/TextBlock.h"
#include <ProjectDreamPlayerController.h>
#include "ProjectDreamCharacter.h"

void UUserInventorySlot::NativeConstruct()
{
	AProjectDreamPlayerController* PC = Cast<AProjectDreamPlayerController>(GetOwningPlayer());
	if (PC)
	{
		AProjectDreamCharacter* Player = Cast<AProjectDreamCharacter>(PC->GetPawn());
		if (Player)
		{
			
		}
	}
}

void UUserInventorySlot::UpdateData(const FGameItemData& InData)
{
	GEngine->AddOnScreenDebugMessage(-1,5.0f,FColor::MakeRandomColor(),TEXT("Call UpdateData"));

	if (ItemName)
	{
		ItemName->SetText(FText::FromString(InData.ItemName));
	}

	if (ItemQty)
	{
		ItemQty->SetText(FText::AsNumber(InData.ItemQty));
	}

	if (ItemCategory)
	{
		ItemCategory->SetText(FText::FromString(StaticEnum<ECategory>()->GetNameStringByValue((int64)InData.ItemCategory)));
	}

	if (ItemWeight)
	{
		ItemWeight->SetText(FText::AsNumber(InData.ItemWeight));
	}

}
