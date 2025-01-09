// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

UCLASS()
class WEEK03_API AMyActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	int Step(); //0혹은 1을 반환할 함수
	void Move(); //(0,0)부터 10회 움직이면서 좌표를 출력할 함수
	float Distance(FVector first,FVector second); //거리를 구할 함수
	int CreateEvent();
};
