// Fill out your copyright notice in the Description page of Project Settings.


#include "UMG/ProjectDreamHUD.h"
#include "UserInventory.h"
#include "UserInventorySlot.h"
#include "GameSystems/Inventory/InventoryDropCatcher.h"


AProjectDreamHUD::AProjectDreamHUD()
{

}

void AProjectDreamHUD::BeginPlay()
{
	Super::BeginPlay();

	if (InventoryWidgetClass)
	{
		InventoryWidget = CreateWidget<UUserInventory>(GetWorld(), InventoryWidgetClass);
		if (InventoryWidget)
		{
			InventoryWidget->AddToViewport();
			InventoryWidget->SetVisibility(ESlateVisibility::Hidden);
			GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::MakeRandomColor(), TEXT("InventoryInit"));
			UE_LOG(LogTemp, Warning, TEXT("InventoryInit"));
		}
		else
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::MakeRandomColor(), TEXT("InventoryInit Fail"));
			UE_LOG(LogTemp, Warning, TEXT("Inventory Fail"));
		}
		
	}

	//if (DropCatcherWidgetClass)
	//{
	//	DropCatcherWidget = CreateWidget<UInventoryDropCatcher>(GetWorld(), DropCatcherWidgetClass);
	//	DropCatcherWidget->AddToViewport();
	//	DropCatcherWidget->SetVisibility(ESlateVisibility::Collapsed);
	//}
}

//void AProjectDreamHUD::ShowDropCatcher()
//{
//	if (DropCatcherWidget)
//	{
//		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::MakeRandomColor(), TEXT("ShowDropCatcher"));
//		DropCatcherWidget->SetVisibility(ESlateVisibility::Visible);
//	}
//}
//
//void AProjectDreamHUD::HidDropCarcher()
//{
//	if (DropCatcherWidget)
//	{
//		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::MakeRandomColor(), TEXT("hideDropCatcher"));
//		DropCatcherWidget->SetVisibility(ESlateVisibility::Collapsed);
//	}
//}
//
