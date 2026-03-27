// Copyright Epic Games, Inc. All Rights Reserved.

#include "MyNBCLog.h"

#define LOCTEXT_NAMESPACE "FMyNBCLogModule"

DEFINE_LOG_CATEGORY(LogMyNBCPlugin);


void FMyNBCLogModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	UE_LOG(LogMyNBCPlugin, Warning, TEXT("MyNBCPlugin is Start"));

}

void FMyNBCLogModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FMyNBCLogModule, MyNBCLog)