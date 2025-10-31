// Copyright Epic Games, Inc. All Rights Reserved.


#include "Election_Network.h"
//#include "TcpSocketSettings.h"
#include "Developer/Settings/Public/ISettingsModule.h"

#define LOCTEXT_NAMESPACE "FElection_NetworkModule"

void FElection_NetworkModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	/*if (ISettingsModule* SettingsModule = FModuleManager::GetModulePtr<ISettingsModule>("Settings"))
	{
		SettingsModule->RegisterSettings("Project", "Plugins", "TcpSocket",
			LOCTEXT("RuntimeSettingsName", "TcpSocket"),
			LOCTEXT("RuntimeSettingsDescription", "Configure TcpSocket Plugin"),
			GetMutableDefault<UTcpSocketSettings>());
	}*/
}

void FElection_NetworkModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.

	//if (ISettingsModule* SettingsModule = FModuleManager::GetModulePtr<ISettingsModule>("Settings"))
	//{
	//	/*SettingsModule->UnregisterSettings("Project", "Plugins", "TcpSocket");*/
	//}
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FElection_NetworkModule, Election_Network)