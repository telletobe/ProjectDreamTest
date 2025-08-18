// Fill out your copyright notice in the Description page of Project Settings.


#include "GameItem.h"
#include "ProjectDreamCharacter.h"
#include "GameInventory.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"


// Sets default values
AGameItem::AGameItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollison"));
	if (BoxCollision)
	{
		SetRootComponent(BoxCollision);
	}

	BoxMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Cube"));
	if (BoxMesh)
	{
		BoxMesh->SetupAttachment(BoxCollision);
	}
	

}

// Called when the game starts or when spawned
void AGameItem::BeginPlay()
{
	Super::BeginPlay();
	if (BoxCollision)
	{
		BoxCollision->OnComponentBeginOverlap.AddDynamic(this, &AGameItem::OnBoxBegin);
		BoxCollision->OnComponentEndOverlap.AddDynamic(this, &AGameItem::OnBoxEnd);
	}
}

// Called every frame
void AGameItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AGameItem::Interact(ACharacter* Interactor)
{
	AProjectDreamCharacter* Player = Cast< AProjectDreamCharacter>(Interactor);
	if (Player)
	{
		UGameInventory* PlayerInv = Player->GetItemInventory();
		if (PlayerInv)
		{
			PlayerInv->AddToInventory(ItemData);
			Destroy();
		}
	}
}

void AGameItem::OnBoxBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (auto* Character = Cast<AProjectDreamCharacter>(OtherActor))
	{
		BoundCharacter = Character;
		Character->SetInteractTarger(this);
		Character->OnInteractAction.AddDynamic(this, &AGameItem::Interact);
	}
}

void AGameItem::OnBoxEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (auto* Character = Cast<AProjectDreamCharacter>(OtherActor))
	{
		Character->ClearInteractTarget(this);
		Character->OnInteractAction.RemoveDynamic(this,&AGameItem::Interact);
	}
}

void AGameItem::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	if (BoundCharacter.IsValid())
	{
		AProjectDreamCharacter* P = Cast<AProjectDreamCharacter>(BoundCharacter);
		P->OnInteractAction.RemoveDynamic(this, &AGameItem::Interact);
	}

	Super::EndPlay(EndPlayReason);
}


