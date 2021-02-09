#pragma once

enum EHitmanGState : __int32
{
    eHGS_Reserved_QueryALL = 0x0,
    eHGS_Reserved_QueryAny = 0x1,
    eHGS_InstinctModeActive = 0x2,
    eHGS_BlendInCanStart = 0x3,
    eHGS_BlendInActive = 0x4,
    eHGS_IsHardToSee = 0x5,
    eHGS_Sneaking = 0x6,
    eHGS_InCloseCombat = 0x7,
    eHGS_ItemHandlingActive = 0x8,
    eHGS_CamSwitched = 0x9,
    eHGS_SniperMode = 0xA,
    eHGS_OTSMode = 0xB,
    eHGS_DualWielding = 0xC,
    eHGS_ActivatingAltFire = 0xD,
    eHGS_FiredLastFrFocusBurnRate = 0xE,
    eHGS_FiredLastFrFocusGainValue = 0xF,
    eHGS_BurningFocus = 0x10,
    eHGS_InsideCloset = 0x11,
    eHGS_HoldsUtility = 0x12,
    eHGS_MvAgility = 0x13,
    eHGS_MvCover = 0x14,
    eHGS_MvDragging = 0x15,
    eHGS_MvHumanShield = 0x16,
    eHGS_MvCarryCivilian = 0x17,
    eHGS_MvVentilatorShaft = 0x18,
    eHGS_MvLedgeWalk = 0x19,
    eHGS_MvLedgeHang = 0x1A,
    eHGS_MvLocomotion = 0x1B,
    eHGS_MvShootingBallet = 0x1C,
    eHGS_MvCloseCombat = 0x1D,
    eHGS_MvSurrendering = 0x1E,
    eHGS_NUM = 0x1F
};