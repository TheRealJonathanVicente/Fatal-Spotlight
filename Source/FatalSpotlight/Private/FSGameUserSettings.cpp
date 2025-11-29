// Fill out your copyright notice in the Description page of Project Settings.


#include "FSGameUserSettings.h"



UFSGameUserSettings::UFSGameUserSettings(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	MouseXSensitivity = 1.0f;
	MouseYSensitivity = 1.0f;
	ControllerXSensitivity = 1.0f;
	ControllerYSensitivity = 1.0f;
}

void UFSGameUserSettings::SetMouseXSensitivity(float Sensitivity)
{
	MouseXSensitivity = Sensitivity;
}

void UFSGameUserSettings::SetMouseYSensitivity(float Sensitivity)
{
	MouseYSensitivity = Sensitivity;
}

void UFSGameUserSettings::SetControllerXSensitivity(float Sensitivity)
{
	ControllerXSensitivity = Sensitivity;
}

void UFSGameUserSettings::SetControllerYSensitivity(float Sensitivity)
{
	ControllerYSensitivity = Sensitivity;
}

UFSGameUserSettings* UFSGameUserSettings::GetFSGameUserSettings()
{
	return Cast<UFSGameUserSettings>(UGameUserSettings::GetGameUserSettings());
}
