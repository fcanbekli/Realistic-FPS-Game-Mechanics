// Fill out your copyright notice in the Description page of Project Settings.


#include <ProjectShock/GameModes/PS_PlayerController.h>
#include "Kismet/GameplayStatics.h"
#include "GameFramework/PlayerController.h"
APS_PlayerController::APS_PlayerController()
{


}









void APS_PlayerController::SetIsAimingFalse()
{
	PlayerStateObject->bIsAiming = false;
}

void APS_PlayerController::MoveForward(float Value)
{
	if ((PlayerCharacter != nullptr) && (Value != 0.0f))
	{
		const FRotator Rotation{ PlayerCharacter->GetControlRotation() };
		const FRotator YawRotation{ 0, Rotation.Yaw, 0 };

		const FVector Direction{ FRotationMatrix{YawRotation}.GetUnitAxis(EAxis::X) };
		PlayerCharacter->AddMovementInput(Direction, Value);
		if (Value < 0) {
			PlayerCharacter->GetCharacterMovement()->MaxWalkSpeed = PlayerCharacter->PlayerPropertiesData->BackWalkSpeed;
		}
		if(Value >= 0){
			PlayerCharacter->GetCharacterMovement()->MaxWalkSpeed = PlayerCharacter->PlayerPropertiesData->WalkSpeed;
		}
		if (Cast<APS_PlayerState>(PlayerState)->bIsSprinting == true && Cast<APS_PlayerState>(PlayerState)->bIsAiming != true) {
			PlayerCharacter->GetCharacterMovement()->MaxWalkSpeed = PlayerCharacter->PlayerPropertiesData->SprintSpeed;
		}
		if (Cast<APS_PlayerState>(PlayerState)->bIsSprinting != true && Cast<APS_PlayerState>(PlayerState)->bIsDeepAiming == true) {
			PlayerCharacter->GetCharacterMovement()->MaxWalkSpeed = PlayerCharacter->PlayerPropertiesData->AimWalkSpeed;
		}
	}
}

void APS_PlayerController::MoveSide(float Value)
{
	if ((PlayerCharacter != nullptr) && (Value != 0.0f))
	{
		const FRotator Rotation{ PlayerCharacter->GetController()->GetControlRotation() };
		const FRotator YawRotator{ 0, Rotation.Yaw, 0 };

		const FVector Direction{ FRotationMatrix{YawRotator}.GetUnitAxis(EAxis::Y) };
		PlayerCharacter->AddMovementInput(Direction, Value);
	}

}


void APS_PlayerController::RightTrigger()
{
	if (WasInputKeyJustPressed(EKeys::Gamepad_RightTrigger)) {
		PlayerStateObject->bIsAiming = true;

		Cast<APS_Weapon>(PlayerCharacter->Weapon->GetChildActor())->FireWeapon();

		GetWorldTimerManager().SetTimer(SideTransitionTimer, this, &APS_PlayerController::SetIsAimingFalse, 0.0f, false, 3.0f);
	}else {

	}

}


void APS_PlayerController::LeftThumbstickButton()
{
	if (Cast<APS_PlayerState>(PlayerState)->bIsSprinting == true) {
		Cast<APS_PlayerState>(PlayerState)->bIsSprinting = false;
	}
	else if(Cast<APS_PlayerState>(PlayerState)->bIsSprinting == false) {
		Cast<APS_PlayerState>(PlayerState)->bIsSprinting = true;
	}
}


void APS_PlayerController::RightThumbstickButton()
{
	if (Cast<APS_PlayerState>(PlayerState)->bIsCrouching == true) {
		Cast<APS_PlayerState>(PlayerState)->bIsCrouching = false;
	}
	else if (Cast<APS_PlayerState>(PlayerState)->bIsCrouching == false) {
		Cast<APS_PlayerState>(PlayerState)->bIsCrouching = true;
	}
}


void APS_PlayerController::LeftFaceButton()
{
	if (Cast<APS_PlayerState>(PlayerState)->bIsReloding == true) {
		UE_LOG(LogTemp, Warning, TEXT("Already Reloading"));
	}
	else {
		Cast<APS_PlayerState>(PlayerState)->bIsAiming = true;
		Cast<APS_Weapon>(PlayerCharacter->Weapon->GetChildActor())->Reload();
	}
	//GetWorldTimerManager().SetTimer(SideTransitionTimer, this, &APS_PlayerController::SetIsAimingFalse, 0.0f, false, 3.0f);
}


void APS_PlayerController::LeftShoulderButton()
{
	if (PlayerStateObject->bIsGuarding == true) {
		PlayerStateObject->bIsGuarding = false;
	}
	else if (PlayerStateObject->bIsGuarding == false) {
		PlayerStateObject->bIsGuarding = true;
	}
}


void APS_PlayerController::LeftTriggerButton()
{
	if (WasInputKeyJustPressed(EKeys::Gamepad_LeftTrigger)) {
		PlayerStateObject->bIsAiming = true;
		PlayerCameraManagerObject->AimZoomIn();
	}
	else {
		PlayerCameraManagerObject->AimZoomOut();
		GetWorldTimerManager().SetTimer(SideTransitionTimer, this, &APS_PlayerController::SetIsAimingFalse, 0.0f, false, 3.0f);
	}
	

}

void APS_PlayerController::TurnMovement(float Rate)
{
	PlayerCharacter->AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void APS_PlayerController::LoopUpMovement(float Rate)
{
	PlayerCharacter->AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}
