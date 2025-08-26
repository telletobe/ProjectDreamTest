// Fill out your copyright notice in the Description page of Project Settings.


#include "UMG/UserInventory.h"
#include "GameSystems/Inventory/GameInventory.h"
#include "ProjectDreamCharacter.h"
#include "ProjectDreamPlayerController.h"
#include "Components/Button.h"
#include "UserInventorySlot.h"
#include "Components/ScrollBox.h"
#include "Blueprint/DragDropOperation.h"
#include "Components/Border.h" 

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
		GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::MakeRandomColor(), FString::Printf(TEXT("I : %d"),i));
	}


}

void UUserInventory::UpdateInventoryUIWithIdx(int32 index)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::MakeRandomColor(), TEXT("Call UpdateInventoryUI(index)"));
	UE_LOG(LogTemp, Warning, TEXT("Call UpdateInventoryUI(index)"));
	if (!Inventory || !ItemScroll || !SlotWidgetClass) return;

	
	if (SlotWidgets[index])
	{
		if (Inventory)
		{
			if (SlotWidgets.Num() != Inventory->Num())
			{
				GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::MakeRandomColor(), TEXT("Call UpdateInventoryUI : Drop"));
				SlotWidgets[index]->RemoveFromParent();				
				SlotWidgets.RemoveAt(index);
				return;
			}
		}

		TArray<FGameItemData> InvData = Inventory->GetInventoryData();
		const FGameItemData IndexItemData = InvData[index];
		SlotWidgets[index]->UpdateData(IndexItemData);
	}
}

void UUserInventory::UpdateInventoryUIWithIdxTwoParams(int32 index1, int32 index2)
{
	if (!Inventory || !ItemScroll || !SlotWidgetClass) return;

	if (!SlotWidgets.IsValidIndex(index1) || !SlotWidgets.IsValidIndex(index2) || index1 == index2) return;
	
	SlotWidgets.Swap(index1, index2);
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::MakeRandomColor(), TEXT("Call UpdateInventoryUI : Slot Swap"));

	UWidget* A = SlotWidgets[index1];
	UWidget* B = SlotWidgets[index2];
	if (!A || !B) return;
	if (A->GetParent() != ItemScroll || B->GetParent() != ItemScroll) return;

	const int32 indexA = ItemScroll->GetChildIndex(A);
	const int32 indexB = ItemScroll->GetChildIndex(B);
	if (indexA == INDEX_NONE || indexB == INDEX_NONE) return;


	const int32 Min = FMath::Min(indexA, indexB);
	const int32 Max = FMath::Max(indexA, indexB);


	float SavedOffset = 0.f;
#if ENGINE_MAJOR_VERSION >= 5
	SavedOffset = ItemScroll->GetScrollOffset();
#endif

	UWidget* MinW = ItemScroll->GetChildAt(Min);
	UWidget* MaxW = ItemScroll->GetChildAt(Max);

	ItemScroll->RemoveChildAt(Max);
	ItemScroll->RemoveChildAt(Min);
	ItemScroll->InsertChildAt(Min, MaxW);
	ItemScroll->InsertChildAt(Max, MinW);

	ItemScroll->InvalidateLayoutAndVolatility();
#if ENGINE_MAJOR_VERSION >= 5
	ItemScroll->SetScrollOffset(SavedOffset);
#endif
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
			Inventory->ChangeInventoryDataWithTwoIndex.AddUniqueDynamic(this, &UUserInventory::UpdateInventoryUIWithIdxTwoParams);
			GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::MakeRandomColor(), TEXT("Bind inventory"));
		}		
	}
}

bool UUserInventory::NativeOnDrop(const FGeometry& G, const FDragDropEvent& E, UDragDropOperation* Op)
{

	if (!Inventory || !Op) return false;

	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::MakeRandomColor(), TEXT("NativeOnDrop")); // 여기까진 ok

	int32 TargetIndex = CaclTargetIndexFromMouse(ItemScroll->GetCachedGeometry(),E);

	int32 FromIndex = INDEX_NONE;
	if (UUserInventorySlot* FromSlot = Cast<UUserInventorySlot>(Op->Payload))
	{
		FromIndex = FromSlot->GetSlotIndex();
	}
	else
	{
		return false;
	}

	if (!SlotWidgets.IsValidIndex(FromIndex) || TargetIndex == FromIndex) return false;

	Inventory->MoveOrMerge(FromIndex,TargetIndex);

	return true;
}

int32 UUserInventory::CaclTargetIndexFromMouse(const FGeometry& ScrollGeo, const FDragDropEvent& E) const
{
	if (!ItemScroll || SlotWidgets.Num() == 0) return INDEX_NONE;


	const FGeometry& WidgetGeometry = GetCachedGeometry();

	const FVector2D ScreenPos = E.GetScreenSpacePosition(); // 모니터내의 마우스 좌표
	const FVector2D MousePos = WidgetGeometry.AbsoluteToLocal(ScreenPos);  // 뷰포트 내의 마우스 좌표

	if (InventoryBorder)
	{
		const FGeometry& BorderGeometry = InventoryBorder->GetCachedGeometry();
		//const FVector2D BorderTL = BorderGeometry.GetAbxolutePosition(); 보더의 절대좌표
		//const FVector2D BorderBR = BorderGeometry.LocalToAbsolute(BorderGeometry.GetLocalSize()); 

		const FVector2D InventoryTL = WidgetGeometry.AbsoluteToLocal(BorderGeometry.GetAbsolutePosition());
		const FVector2D InventoryBR = WidgetGeometry.AbsoluteToLocal(BorderGeometry.LocalToAbsolute(BorderGeometry.GetLocalSize()));


		// 3) 부모 로컬 좌표계에서 안/밖 판정
		const bool bInSide = (MousePos.X >= InventoryTL.X && MousePos.X < InventoryBR.X &&
			MousePos.Y >= InventoryTL.Y && MousePos.Y < InventoryBR.Y);


		if (!bInSide)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::MakeRandomColor(), TEXT("OutSide"));
			return INDEX_NONE;
		}
	}

	//Slot의 UI 크기로 인덱스 확인
	const float ScrollOffset = ItemScroll->GetScrollOffset();
	float YInContent = MousePos.Y + ScrollOffset;
	if (YInContent < 0.f) return INDEX_NONE;

	float SlotHeight = (SlotWidgets.Num() > 0) ? SlotWidgets[0]->GetCachedGeometry().GetLocalSize().Y : 0.f;	
	if (SlotHeight <= KINDA_SMALL_NUMBER) return INDEX_NONE;
	

	//FVector2D InvSlotUI = ScrollGeo.AbsoluteToLocal(ScreenPos);
	//float Y = InvSlotUI.Y + ScrollOffset;
	//int32 Index = FMath::FloorToInt(Y / SlotHeight);
	//return Index;

	// 4) 인덱스 계산
	const float ContentHeight = SlotHeight * SlotWidgets.Num();
	int32 Index = FMath::FloorToInt(YInContent / SlotHeight);

	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::MakeRandomColor(), TEXT("InSide"));
	return Index;
}
