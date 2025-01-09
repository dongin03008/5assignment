// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor.h"

// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();
	Move();
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

int AMyActor::Step() {
	int RandomNum = FMath::RandRange(0, 1);
	return RandomNum;
}

void AMyActor::Move() {
	FVector currentLocation;
	FVector location;
	FVector nextlocation;
	float distance = 0;
	int event = 0;
	for (int i = 0; i < 10; i++) {
		currentLocation = GetActorLocation();
		location = FVector(Step(), Step(), 0);
		nextlocation = currentLocation + location;
		SetActorLocation(nextlocation);
		distance += Distance(currentLocation, nextlocation);
		UE_LOG(LogTemp, Warning, TEXT("location : %s / distance : %f"), *nextlocation.ToString(), Distance(currentLocation, nextlocation));
		int ev = CreateEvent();
		if (ev == 0) {
			UE_LOG(LogTemp, Warning, TEXT("Event!!"));
			event++;
		}
	}
	UE_LOG(LogTemp, Warning, TEXT("TotalDistance : %f / CreateEvent : %d"),distance,event);
}
float AMyActor::Distance(FVector first, FVector second) {
	float distance = FMath::Sqrt(FMath::Pow((second.X - first.X), 2) + FMath::Pow((second.Y - first.Y), 2));
	return distance;
}
int AMyActor::CreateEvent() {
	int RandomNum = FMath::RandRange(0, 1);;
	return RandomNum;
}


