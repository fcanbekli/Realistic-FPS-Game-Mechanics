// Fill out your copyright notice in the Description page of Project Settings.

#include <ProjectShock/Player/PS_PlayerAnimation.h>

UPS_PlayerAnimation::UPS_PlayerAnimation()
{
	RootYawOffset = 0.f;
	CharacterYaw = 0.f;
	CharacterYawLastFrame = 0.f;


}

void UPS_PlayerAnimation::UpdateAnimationProperties(float DeltaTime)
{
	
	if (PlayerCharacter == nullptr) {
		PlayerCharacter = Cast<APS_PlayerCharacter>(TryGetPawnOwner());
		//PlayerStateObject = Cast<APS_PlayerState>(TryGetPawnOwner()->GetPlayerState());
	}
	if (PlayerCharacter) {
		FVector Velocity{ PlayerCharacter->GetVelocity() };
		Velocity.Z = 0;
		Speed = Velocity.Size();

		bIsInAir = PlayerCharacter->GetCharacterMovement()->IsFalling();

		if (PlayerCharacter->GetCharacterMovement()->GetCurrentAcceleration().Size() > 0.f) {
			bIsAccelerating = true;
		}
		else {
			bIsAccelerating = false;
		}
		TurnInPlace();
	}	

}

void UPS_PlayerAnimation::NativeInitializeAnimation()
{
	PlayerCharacter = Cast<APS_PlayerCharacter>(TryGetPawnOwner());

}

void UPS_PlayerAnimation::TurnInPlace()
{
	if (PlayerCharacter == nullptr) {
		PlayerCharacter = Cast<APS_PlayerCharacter>(TryGetPawnOwner());
	}
	if (Speed > 0) {
		//Character moving, do nothing
	}
	else {
		CharacterYawLastFrame = CharacterYaw;
		
		CharacterYaw = PlayerCharacter->FPS_Camera->GetComponentRotation().Yaw;
		const float YawDelta{ CharacterYaw - CharacterYawLastFrame };

		RootYawOffset = UKismetMathLibrary::NormalizeAxis(RootYawOffset - YawDelta);
// 		UE_LOG(LogTemp, Warning, TEXT("Character Yaw %f"), CharacterYaw);
// 		UE_LOG(LogTemp, Warning, TEXT("RootYawOffset %f"), RootYawOffset);
		GEngine->AddOnScreenDebugMessage(1, -1, FColor::Blue, FString::Printf(TEXT("Character Yaw %f"), CharacterYaw));
		GEngine->AddOnScreenDebugMessage(2, -1, FColor::Red, FString::Printf(TEXT("RootYawOffset %f"), RootYawOffset));
	}
}
