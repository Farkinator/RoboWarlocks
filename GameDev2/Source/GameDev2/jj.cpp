// Fill out your copyright notice in the Description page of Project Settings.

#include "GameDev2.h"
#include "jj.h"


// Sets default values
Ajj::Ajj()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void Ajj::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void Ajj::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

// Called to bind functionality to input
void Ajj::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
	Super::SetupPlayerInputComponent(InputComponent);

}

