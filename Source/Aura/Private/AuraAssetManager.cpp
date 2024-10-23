// Copyright RyuJeail


#include "AuraAssetManager.h"
#include "AuraGameplayTags.h"

UAuraAssetManager& UAuraAssetManager::Get()
{
	check(GEngine);

	//UAuraAssetManager* AuraAssetManager = Cast<UAuraAssetManager>(GEngine->AssetManager);
	return *(Cast<UAuraAssetManager>(GEngine->AssetManager));
}

void UAuraAssetManager::StartInitialLoading()
{
	Super::StartInitialLoading();

	FAuraGameplayTags::initializeNativeGameplayTag();
}
