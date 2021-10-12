// Fill out your copyright notice in the Description page of Project Settings.
// Fill out your copyright notice in the Description page of Project Settings.


#include "yourBlueprintFunctionLibrary.h"
#include "Misc/Paths.h"

bool UyourBlueprintFunctionLibrary::FileSaveString(FString SaveTextB, FString FileNameB)
{
    return FFileHelper::SaveStringToFile(SaveTextB, *(FPaths::ProjectDir() + FileNameB));
}

bool UyourBlueprintFunctionLibrary::FileLoadString(FString FileNameA, FString& SaveTextA)
{
    return FFileHelper::LoadFileToString(SaveTextA, *(FPaths::ProjectDir() + FileNameA));
}