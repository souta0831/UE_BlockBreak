// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyBall.generated.h"

UCLASS()
class BLOCKBREAK_API AMyBall : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AMyBall(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void Tick(float DeltaTime) override;
	UPROPERTY(Category = "C_CODE", VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		class UStaticMeshComponent* m_ballMesh;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	//èâë¨
	UPROPERTY(EditAnywhere, Category = "Speed")
		float m_startSpeed;
	//ë¨ìx
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Speed")
		float m_nowSpeed;
	//à⁄ìÆäpìx
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Speed")
		FVector m_velocity;

public:
	// Called every frame

};
