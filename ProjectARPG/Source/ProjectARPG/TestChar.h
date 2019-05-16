// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Classes/Camera/CameraComponent.h"

#include "TestChar.generated.h"



UCLASS()
class PROJECTARPG_API ATestChar : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ATestChar();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = "Components")
	UStaticMeshComponent* AMesh;
	UPROPERTY(EditAnywhere, Category = "Components")
	UCameraComponent* Camera;

	//movement functions
	void MoveForward(float amount);
	void MoveRight(float amount);

	//crouch function
	void Turn(float amount);
	void LookUp(float amount);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
