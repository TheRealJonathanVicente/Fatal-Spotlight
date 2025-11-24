// Fill out your copyright notice in the Description page of Project Settings.


#include "FSGameUserSettings.h"

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
