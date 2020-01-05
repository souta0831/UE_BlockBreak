// Fill out your copyright notice in the Description page of Project Settings.


#include "MyBar.h"

// Sets default values
AMyBar::AMyBar(const FObjectInitializer& ObjectInitializer) : APawn(ObjectInitializer)

{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	RootComponent = Cast<USceneComponent>(m_barMesh);

	//ÉÅÉbÉVÉÖí«â¡
	m_barMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	m_barMesh->SetupAttachment(RootComponent);

}

// Called when the game starts or when spawned
void AMyBar::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyBar::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	FVector Pos=GetActorLocation();
	Pos.Y += m_moveX * _moveSpeed;
	SetActorLocation(Pos,true);
}
// Called to bind functionality to input
void AMyBar::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis("InputRight", this, &AMyBar::MoveRight);
}
void AMyBar::MoveRight(float AxisValue) {
	m_moveX = FMath::Clamp<float>(AxisValue, -1.0f, 1.0f);
}

