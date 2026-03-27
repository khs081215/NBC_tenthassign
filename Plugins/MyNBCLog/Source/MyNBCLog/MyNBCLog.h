// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

MYNBCLOG_API DECLARE_LOG_CATEGORY_EXTERN(LogMyNBCPlugin, Log, All);


class FMyNBCLogModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
