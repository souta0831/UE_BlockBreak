// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "MyBar.generated.h"

UCLASS()
class BLOCKBREAK_API AMyBar : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AMyBar(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


	UPROPERTY(EditAnywhere, Category = "Speed")
		float _moveSpeed;
	UPROPERTY(Category = "C_CODE", VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		class UStaticMeshComponent* m_barMesh;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	void MoveRight(float AxisValue);
	//Input
	FFloat16 m_moveX;
	


};
