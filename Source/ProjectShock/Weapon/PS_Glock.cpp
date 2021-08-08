// Fill out your copyright notice in the Description page of Project Settings.


#include <ProjectShock/Weapon/PS_Glock.h>



UAnimMontage* APS_Glock::GetRandomShootingAnimation()
{
	switch (FMath::RandRange(0, 3))
	{
	case 0:
		return GlockDataAsset->AimShooting1;
	case 1:
		return GlockDataAsset->AimShooting2;
	case 2:
		return GlockDataAsset->AimShooting3;
	case 3:
		return GlockDataAsset->AimShooting4;
	default:
		return GlockDataAsset->AimShooting1;
		break;
	}
}



FHitResult APS_Glock::GetHitResult()
{
	FHitResult OutHit;

	FVector Start = Cast<APS_PlayerCharacter>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0))->FPS_Camera->GetComponentLocation();

	// alternatively you can get the camera location
	// FVector Start = FirstPersonCameraComponent->GetComponentLocation();

	FVector ForwardVector = Cast<APS_PlayerCharacter>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0))->FPS_Camera->GetForwardVector();
	FVector End = ((ForwardVector * 1500.0f) + Start);
	FCollisionQueryParams CollisionParams;

	DrawDebugLine(GetWorld(), Start, End, FColor::Red, false, 1, 0, 1);

	GetWorld()->LineTraceSingleByChannel(OutHit, Start, End, ECC_Visibility, CollisionParams);
	return OutHit;
}



void APS_Glock::ShootEmpty()
{
	// Play Montage
	Cast<APS_PlayerCharacter>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0))->PlayAnimMontage(GlockDataAsset->AimShootingEmpty, 1.0f, TEXT("None"));
	// Play Audio
	UGameplayStatics::PlaySound2D(GetWorld(), GlockDataAsset->GlockEmptySound, 3.0f, 1.0f, 0.0f);
}



void APS_Glock::ShootLastAmmo()
{
	// Play Glock Shoot Montage
	WeaponMesh->GetAnimInstance()->Montage_Play(GlockDataAsset->ShootingLastAmmo, 1.0f, EMontagePlayReturnType::Duration, 0.0f, false);
	// Play Randomize Scott Shoot Montage
	Cast<APS_PlayerCharacter>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0))->PlayAnimMontage(GetRandomShootingAnimation(), 1.0f, TEXT("None"));
	// Spawn Particles

	if (MuzzleFireVFX->GetAsset() && MuzzleFireVFX->GetAsset()->IsValid())
	{
		UNiagaraComponent* NewEffect = UNiagaraFunctionLibrary::SpawnSystemAtLocation(
			this,
			MuzzleFireVFX->GetAsset(),
			WeaponMesh->GetSocketLocation("MuzzleSocket"),
			WeaponMesh->GetSocketRotation("MuzzleSocket"),
			FVector(1),
			true,
			true,
			ENCPoolMethod::AutoRelease,
			true);
	}

	if (BulletEjectionVFX->GetAsset() && BulletEjectionVFX->GetAsset()->IsValid())
	{
		UNiagaraComponent* NewEffect = UNiagaraFunctionLibrary::SpawnSystemAtLocation(
			this,
			BulletEjectionVFX->GetAsset(),
			WeaponMesh->GetSocketLocation("EjectionSocket"),
			WeaponMesh->GetSocketRotation("EjectionSocket"),
			FVector(1),
			true,
			true,
			ENCPoolMethod::AutoRelease,
			true);
	}


	// Play Sound
	UGameplayStatics::PlaySound2D(GetWorld(), GlockDataAsset->GlockShootSound, 3.0f, 1.0f, 0.0f);

	// Activate Camera Shake
	Cast<APS_HUD>(UGameplayStatics::GetPlayerController(GetWorld(), 0)->GetHUD())->FireCameraShake();

	// Update Ammo Bar
	Cast<APS_HUD>(UGameplayStatics::GetPlayerController(GetWorld(), 0)->GetHUD())->UpdateAmmoBar();

	// Hit
	FHitResult OutHit = GetHitResult();
	GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Red, FString::Printf(TEXT("You are hitting: %s"), *OutHit.GetActor()->GetName()));
	GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Red, FString::Printf(TEXT("Impact Point: %s"), *OutHit.ImpactPoint.ToString()));
	GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Red, FString::Printf(TEXT("Normal Point: %s"), *OutHit.ImpactNormal.ToString()));
}



void APS_Glock::Shoot()
{
	// Play Glock Shoot Montage
	WeaponMesh->GetAnimInstance()->Montage_Play(GlockDataAsset->GlockShooting, 1.0f, EMontagePlayReturnType::Duration, 0.0f, false);
	// Play Randomize Scott Shoot Montage
	Cast<APS_PlayerCharacter>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0))->PlayAnimMontage(GetRandomShootingAnimation(), 1.0f, TEXT("None"));
	// Spawn Particles

	if (MuzzleFireVFX->GetAsset() && MuzzleFireVFX->GetAsset()->IsValid())
 	{
 		UNiagaraComponent* NewEffect = UNiagaraFunctionLibrary::SpawnSystemAtLocation(
 			this,
			MuzzleFireVFX->GetAsset(),
 			WeaponMesh->GetSocketLocation("MuzzleSocket"),
			WeaponMesh->GetSocketRotation("MuzzleSocket"),
 			FVector(1),
 			true,
 			true,
 			ENCPoolMethod::AutoRelease,
 			true);
 	}

	if (BulletEjectionVFX->GetAsset() && BulletEjectionVFX->GetAsset()->IsValid())
	{
		UNiagaraComponent* NewEffect = UNiagaraFunctionLibrary::SpawnSystemAtLocation(
			this, 
			BulletEjectionVFX->GetAsset(),
			WeaponMesh->GetSocketLocation("EjectionSocket"),
			WeaponMesh->GetSocketRotation("EjectionSocket"),
			FVector(1),
			true,
			true,
			ENCPoolMethod::AutoRelease,	
			true);
	}


	// Play Sound
	UGameplayStatics::PlaySound2D(GetWorld(), GlockDataAsset->GlockShootSound, 3.0f, 1.0f, 0.0f);

	// Activate Camera Shake
	Cast<APS_HUD>(UGameplayStatics::GetPlayerController(GetWorld(), 0)->GetHUD())->FireCameraShake();

	// Update Ammo Bar
	Cast<APS_HUD>(UGameplayStatics::GetPlayerController(GetWorld(), 0)->GetHUD())->UpdateAmmoBar();

	// Hit
	FHitResult OutHit = GetHitResult();
	GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Red, FString::Printf(TEXT("You are hitting: %s"), *OutHit.GetActor()->GetName()));
	GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Red, FString::Printf(TEXT("Impact Point: %s"), *OutHit.ImpactPoint.ToString()));
	GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Red, FString::Printf(TEXT("Normal Point: %s"), *OutHit.ImpactNormal.ToString()));
}

void APS_Glock::FireGlock()
{
	if (CurrentMagazineSize != 0) {
		CurrentMagazineSize--;
		if (CurrentMagazineSize == 0) {
			ShootLastAmmo();
		}
		else {
			Shoot();
		}
	}
	else {
		ShootEmpty();
	}
}
