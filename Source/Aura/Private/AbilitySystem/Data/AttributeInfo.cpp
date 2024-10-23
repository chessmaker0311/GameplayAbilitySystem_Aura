// Copyright RyuJeail


#include "AbilitySystem/Data/AttributeInfo.h"

FAuraAttributeInfo UAttributeInfo::FindAtrributeInfoForTag(const FGameplayTag AtrributeTag, bool bLogNotFound) const
{
	for (const FAuraAttributeInfo& info : AttributeInfomation)
	{
		if (info.AtrributeTag == AtrributeTag)
		{
			return info;
		}
	}

	if (bLogNotFound)
	{
		UE_LOG(LogTemp, Error, TEXT("Can'y find Info for AttributeTag [%s] on AttributeInfo [%s]."), *AtrributeTag.ToString(), *GetNameSafe(this));
	}
	return FAuraAttributeInfo();
}
