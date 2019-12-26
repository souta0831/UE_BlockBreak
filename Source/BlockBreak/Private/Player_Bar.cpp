// Fill out your copyright notice in the Description page of Project Settings.


#include "../Public/Player_Bar.h"

// Sets default values
APlayer_Bar::APlayer_Bar()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APlayer_Bar::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlayer_Bar::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APlayer_Bar::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

