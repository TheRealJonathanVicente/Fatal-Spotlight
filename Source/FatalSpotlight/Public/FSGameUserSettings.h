// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameUserSettings.h"
#include "FSGameUserSettings.generated.h"

/**
 * 
 */
UCLASS(config = GameUserSettings, configdonotcheckdefaults, Blueprintable)
class FATALSPOTLIGHT_API UFSGameUserSettings : public UGameUserSettings
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintPure, Category = Settings)
	float GetMouseXSensitivity() const { return MouseXSensitivity; }

	UFUNCTION(BlueprintPure, Category = Settings)
	float GetMouseYSensitivity() const { return MouseYSensitivity; }

	UFUNCTION(BlueprintPure, Category = Settings)
	float GetControllerXSensitivity() const { return ControllerXSensitivity; }

	UFUNCTION(BlueprintPure, Category = Settings)
	float GetControllerYSensitivity() const { return ControllerYSensitivity; }

	UFUNCTION(BlueprintCallable, Category = Settings)
	void SetMouseXSensitivity(float Sensitivity);

	UFUNCTION(BlueprintCallable, Category = Settings)
	void SetMouseYSensitivity(float Sensitivity);

	UFUNCTION(BlueprintCallable, Category = Settings)
	void SetControllerXSensitivity(float Sensitivity);

	UFUNCTION(BlueprintCallable, Category = Settings)
	void SetControllerYSensitivity(float Sensitivity);

	UFUNCTION(BlueprintCallable, Category = Settings)
	static UFSGameUserSettings* GetFSGameUserSettings();
	


protected:
	UPROPERTY(config)
	float MouseXSensitivity;
	UPROPERTY(config)
	float MouseYSensitivity;
	UPROPERTY(config)
	float ControllerXSensitivity;
	UPROPERTY(config)
	float ControllerYSensitivity;
};
