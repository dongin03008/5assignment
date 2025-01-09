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

	int Step(); //0Ȥ�� 1�� ��ȯ�� �Լ�
	void Move(); //(0,0)���� 10ȸ �����̸鼭 ��ǥ�� ����� �Լ�
	float Distance(FVector first,FVector second); //�Ÿ��� ���� �Լ�
	int CreateEvent();
};
