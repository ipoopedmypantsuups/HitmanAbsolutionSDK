#pragma once

#include "STokenID.h"
#include "TFixedArray.h"
#include "TArray.h"
#include "SItemSaveData.h"
#include "SRangedWeaponSaveData.h"
#include "SCloseCombatWeaponSaveData.h"

class alignas(4) SCheckpointSaveData
{
public:
    int m_iCheckpointCompoundID;
    bool m_bLocked;
    bool m_bCompleted;
    STokenID m_OutfitTokenID;
    int m_nOutfitVariation;
    TFixedArray<unsigned int, 8> m_nAmmoInPocket;
    float m_fFocus;
    float m_fHealth;
    TArray<bool> m_BoolValues;
    TArray<float> m_FloatValues;
    TArray<SItemSaveData> m_Items;
    TArray<SRangedWeaponSaveData> m_RangedWeapons;
    TArray<SCloseCombatWeaponSaveData> m_CloseCombatdWeapons;
    int m_iInventorySlot;
    bool m_bInventoryDualWield;
    bool m_bInventoryUnholstered;
};
