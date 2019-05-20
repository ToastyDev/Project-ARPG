// Fill out your copyright notice in the Description page of Project Settings.


#include "TestChar.h"

// Sets default values
ATestChar::ATestChar()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	/*
	AMesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
	Camera = CreateDefaultSubobject<UCameraComponent>("FPCamera");
	Camera->SetRelativeLocation(FVector(-5.f, 0.f, 0.f));
	Camera->SetupAttachment(AMesh);

	SetRootComponent(AMesh);
	*/
}

void ATestChar::MoveForward(float amount)
{
	if (Controller != NULL && (amount != 0.0f))
	{
		FRotator Rotation = Controller->GetControlRotation();
		if (GetCharacterMovement()->IsMovingOnGround() || GetCharacterMovement()->IsFalling())
		{
			Rotation.Pitch = 0.0f;
		}

		const FVector Direction = FRotationMatrix(Rotation).GetScaledAxis(EAxis::X);
		AddMovementInput(Direction, amount);
	}
}
void ATestChar::MoveRight(float amount)
{
	if (Controller != NULL && (amount != 0.0f))
	{
		const FRotator Rotation = Controller->GetControlRotation();
		const FVector Direction = FRotationMatrix(Rotation).GetScaledAxis(EAxis::Y);
		AddMovementInput(Direction, amount);

	}
}
void ATestChar::Turn(float amount)
{
}
void ATestChar::LookUp(float amount)
{
}

// Called to bind functionality to input
void ATestChar::SetupPlayerInputComponent(UInputComponent* InputComponent)
{
	InputComponent->BindAxis("MoveForward", this, &ATestChar::MoveForward);
	InputComponent->BindAxis("MoveRight", this, &ATestChar::MoveRight);
	InputComponent->BindAxis("Turn", this, &ATestChar::AddControllerYawInput);
	InputComponent->BindAxis("LookUp", this, &ATestChar::AddControllerPitchInput);
}

// Called when the game starts or when spawned
void ATestChar::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATestChar::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}