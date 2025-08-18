// Fill out your copyright notice in the Description page of Project Settings.


#include "UMG/ProjectDreamHUD.h"
#include "UserInventory.h"
#include "UserInventorySlot.h"


AProjectDreamHUD::AProjectDreamHUD()
{
	//static ConstructorHelpers::FClassFinder<UUserInventory> InventoryClass(TEXT("/Game/UMG/WBP_UserInventory.WBP_UserInventory_C"));
	//static ConstructorHelpers::FClassFinder<UUserInventorySlot> InventorySlotClass(TEXT("/Game/UMG/WBP_UserInventorySlot.WBP_UserInventorySlot_C"));
	//if (InventoryClass.Succeeded())
	//{
	//	InventoryWidgetClass = InventoryClass.Class;
	//}
	//else
	//{
	//	UE_LOG(LogTemp, Warning, TEXT("Inventory Widget Fail"));
	//}


	//if (InventorySlotClass.Succeeded())
	//{
	//	InventorySlotWidgetClass = InventorySlotClass.Class;
	//}
	//else
	//{
	//	UE_LOG(LogTemp,Warning,TEXT("Slot Widget Fail"));
	//}

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
}

