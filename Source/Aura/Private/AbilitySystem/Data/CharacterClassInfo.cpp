// Copyright RyuJeail


#include "AbilitySystem/Data/CharacterClassInfo.h"

FCharacterClassDefaultInfo UCharacterClassInfo::GetClassDefaultInfo(ECharacterClass ChearecterClass)
{
	return CharacterClassInfomation.FindChecked(ChearecterClass);
}
