// Fill out your copyright notice in the Description page of Project Settings.


#include "MyBall.h"

// Sets default values
AMyBall::AMyBall(const FObjectInitializer& ObjectInitializer) : AActor(ObjectInitializer)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	//ÉÅÉbÉVÉÖê∂ê¨
	m_ballMesh= CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	m_nowSpeed = m_startSpeed;
	m_velocity = FVector(0, 0, 1);
}

// Called when the game starts or when spawned
void AMyBall::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyBall::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	m_nowSpeed = 5;
	FVector _movePos= GetActorLocation()+ m_velocity * m_nowSpeed;
	SetActorLocation(_movePos, false);
}

