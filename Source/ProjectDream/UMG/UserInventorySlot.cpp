// Fill out your copyright notice in the Description page of Project Settings.


#include "UMG/UserInventorySlot.h"
#include "Components/TextBlock.h"
#include <ProjectDreamPlayerController.h>
#include "ProjectDreamCharacter.h"
#include "Blueprint/WidgetBlueprintLibrary.h"
#include "ProjectDreamHUD.h"

void UUserInventorySlot::NativeConstruct()
{
	SetVisibility(ESlateVisibility::Visible);
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

	SlotIndex = InData.ItemIndex;
}

FReply UUserInventorySlot::NativeOnPreviewMouseButtonDown(const FGeometry& InGeo, const FPointerEvent& InMouseEvent)
{
	GEngine->AddOnScreenDebugMessage(-1,5.0f,FColor::MakeRandomColor(),TEXT("call NativeOnMouseButtonDown"));
	if (InMouseEvent.IsMouseButtonDown(EKeys::LeftMouseButton))
	{
		return UWidgetBlueprintLibrary::DetectDragIfPressed(InMouseEvent, this, EKeys::LeftMouseButton).NativeReply;
	}
	return Super::NativeOnPreviewMouseButtonDown(InGeo, InMouseEvent);
}

void UUserInventorySlot::NativeOnDragDetected(const FGeometry& InGeo, const FPointerEvent& InMouseEvent, UDragDropOperation*& OutOp)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::MakeRandomColor(), TEXT("call NativeOnDragDetected"));
	UDragDropOperation* Op = UWidgetBlueprintLibrary::CreateDragDropOperation(UDragDropOperation::StaticClass());

	Op->Payload = this;
	Op->Pivot = EDragPivot::MouseDown;

	//UUserWidget* Visual = DuplicateObject(this, this->GetOuter());
	
	UUserInventorySlot* Visual =
		CreateWidget<UUserInventorySlot>(GetOwningPlayer(), GetClass());

	if (Visual)
	{
		// 현재 슬롯의 텍스트를 그대로 복사
		if (Visual->ItemName && ItemName)
			Visual->ItemName->SetText(ItemName->GetText());

		if (Visual->ItemQty && ItemQty)
			Visual->ItemQty->SetText(ItemQty->GetText());

		if (Visual->ItemCategory && ItemCategory)
			Visual->ItemCategory->SetText(ItemCategory->GetText());

		if (Visual->ItemWeight && ItemWeight)
			Visual->ItemWeight->SetText(ItemWeight->GetText());

		// 드래그 비주얼은 입력을 먹지 않도록
		Visual->SetVisibility(ESlateVisibility::HitTestInvisible);

		// (선택) 원본 슬롯과 같은 크기로 보이게 하고 싶다면:
		 const FVector2D Size = GetCachedGeometry().GetLocalSize();
		 Visual->SetDesiredSizeInViewport(Size);

		Op->DefaultDragVisual = Visual;
	}

	Op->DefaultDragVisual = Visual;

	OutOp = Op;

	//if (AProjectDreamPlayerController* PC = Cast<AProjectDreamPlayerController>(GetOwningPlayer()))
	//{
	//	if (AProjectDreamHUD* HUD = PC->GetHUD<AProjectDreamHUD>())
	//	{
	//		HUD->ShowDropCatcher();
	//	}
	//}
}

int32 UUserInventorySlot::GetItemQty()
{
	int32 Qty = 0;
	if (ItemQty)
	{
		const FString S = ItemQty->GetText().ToString();
		LexTryParseString<int32>(Qty, *S);
	}
	return Qty;
}

