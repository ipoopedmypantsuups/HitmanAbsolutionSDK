#pragma once

enum EAISharedEventType : __int32
{
    AISET_None = 0x0,
    AISET_StandOffCrowdReactionDone = 0x1,
    AISET_Shoot = 0x2,
    AISET_ShootBlind = 0x3,
    AISET_CombatAct = 0x4,
    AISET_CombatGuard = 0x5,
    AISET_CombatCrouch = 0x6,
    AISET_Scared = 0x7,
    AISET_CloseCombatRunIn = 0x8,
    AISET_CloseCombatArrest = 0x9,
    AISET_NoLOF = 0xA,
    AISET_LAST_BOOLEAN_EVENT = 0xB,
    AISET_IllegalBehavior = 0xC,
    AISET_BeingWatched = 0xD,
    AISET_Sneaking = 0xE,
    AISET_AgilityLedgeWalk = 0xF,
    AISET_AgilityLedgeHang = 0x10,
    AISET_AgilityWindow = 0x11,
    AISET_ChangingOutfit = 0x12,
    AISET_CoverToCover = 0x13,
    AISET_Trespassing = 0x14,
    AISET_DraggingBody = 0x15,
    AISET_KillingWithFiberwire = 0x16,
    AISET_KillingWithPull = 0x17,
    AISET_KillingWithPush = 0x18,
    AISET_KillingWithKick = 0x19,
    AISET_KillingWithKnife = 0x1A,
    AISET_KillingWithDeadlyThrow = 0x1B,
    AISET_ThrowingSomething = 0x1C,
    AISET_ThrowingExplosives = 0x1D,
    AISET_InCloset = 0x1E,
    AISET_InVent = 0x1F,
    AISET_EnteringCloset = 0x20,
    AISET_ExitingCloset = 0x21,
    AISET_EnteringVent = 0x22,
    AISET_ExitingVent = 0x23,
    AISET_InCover = 0x24,
    AISET_HasWeapon = 0x25,
    AISET_WeaponEquipped = 0x26,
    AISET_WeaponFired = 0x27,
    AISET_WeaponReloading = 0x28,
    AISET_CombatNoHold = 0x29,
    AISET_CombatFireAtWill = 0x2A,
    AISET_CombatTargetLost = 0x2B,
    AISET_InOrderedPosition = 0x2C,
    AISET_Preferred_Investigator = 0x2D,
    AISET_ORDERS_BEGIN = 0x2E,
    AISET_Order_Act = 0x2F,
    AISET_Order_Investigate = 0x30,
    AISET_Order_SearchPosition = 0x31,
    AISET_Order_Approach = 0x32,
    AISET_Order_GetHelp = 0x33,
    AISET_Order_StandDown = 0x34,
    AISET_Order_Escalate = 0x35,
    AISET_Order_Arrest = 0x36,
    AISET_Order_Avoid = 0x37,
    AISET_Order_Flee = 0x38,
    AISET_Order_Patrol = 0x39,
    AISET_Order_Chase = 0x3A,
    AISET_Order_AimFromPosition = 0x3B,
    AISET_Order_AimFromPositionCrouched = 0x3C,
    AISET_Order_HideInCover = 0x3D,
    AISET_Order_HoldPosition = 0x3E,
    AISET_Order_HoldCoverPosition = 0x3F,
    AISET_Order_FightFromCover = 0x40,
    AISET_Order_FightFromPosition = 0x41,
    AISET_Order_ShootFromPosition = 0x42,
    AISET_Order_GuardPosition = 0x43,
    AISET_Order_GuardCoverPosition = 0x44,
    AISET_Order_HumanShieldLeader = 0x45,
    AISET_Order_HumanShieldSupport = 0x46,
    AISET_Order_CheckLastPosition = 0x47,
    AISET_Order_StandoffLastWarning = 0x48,
    AISET_Order_Evacuate = 0x49,
    AISET_Order_AgitatedBystander = 0x4A,
    AISET_Order_Face = 0x4B,
    AISET_ORDERS_END = 0x4C,
    AISET_ForceFullAttention = 0x4D,
    AISET_InCameraView = 0x4E,
    AISET_InCameraView2D = 0x4F,
    AISET_BeingLookedAt = 0x50,
    AISET_BeingAimedAt = 0x51,
    AISET_BeingShotAt = 0x52,
    AISET_BeingFlanked = 0x53,
    AISET_BeingBumped = 0x54,
    AISET_HMTrespassing = 0x55,
    AISET_HMInEntryArea = 0x56,
    AISET_HMTakingDamage = 0x57,
    AISET_OpeningCPDoor = 0x58,
    AISET_HumanShield = 0x59,
    AISET_DisablingFusebox = 0x5A,
    AISET_IllegalAction = 0x5B,
    AISET_TakingKeyCard = 0x5C,
    AISET_TakingSecurityTape = 0x5D,
    AISET_DumpingBody = 0x5E,
    AISET_Shooting = 0x5F,
    AISET_BlindFire = 0x60,
    AISET_ShootingBallet = 0x61,
    AISET_Running = 0x62,
    AISET_Walking = 0x63,
    AISET_UsingKeyCard = 0x64,
    AISET_IllegalWeapon = 0x65,
    AISET_Surrendering = 0x66,
    AISET_RequestSurrender = 0x67,
    AISET_Standing = 0x68,
    AISET_InDisguise = 0x69,
    AISET_Dead = 0x6A,
    AISET_DeadByAccident = 0x6B,
    AISET_DeadByUnnoticed = 0x6C,
    AISET_DeadBySniper = 0x6D,
    AISET_InAccident = 0x6E,
    AISET_Dying = 0x6F,
    AISET_InCombat = 0x70,
    AISET_Hunted = 0x71,
    AISET_ForceHunted = 0x72,
    AISET_CloseCombat = 0x73,
    AISET_TakingProjectileDamage = 0x74,
    AISET_TakingHeadshotDamage = 0x75,
    AISET_TakingExplosionDamage = 0x76,
    AISET_TakingDeadlyThrowDamage = 0x77,
    AISET_ForceKillHM = 0x78,
    AISET_Armed = 0x79,
    AISET_BeingHumanShield = 0x7A,
    AISET_BeingPulledOutOfWindow = 0x7B,
    AISET_BeingPushedOverRail = 0x7C,
    AISET_BeingFiberwired = 0x7D,
    AISET_BeingPulledFromLedge = 0x7E,
    AISET_BeingDragged = 0x7F,
    AISET_OnScreen = 0x80,
    AISET_ExplosionImminent = 0x81,
    AISET_DisguiseSafeZone = 0x82,
    AISET_DisguiseCanBreak = 0x83,
    AISET_DisguiseCanBlendIn = 0x84,
    AISET_DisguiseBlendIn = 0x85,
    AISET_DisguiseBroken = 0x86,
    AISET_InWarZone = 0x87,
    AISET_InCrowd = 0x88,
    AISET_InCrowdAlert = 0x89,
    AISET_InCrowdPanic = 0x8A,
    AISET_HiddenByCrowd = 0x8B,
    AISET_CrowdDisguise = 0x8C,
    AISET_BeingStrangled = 0x8D,
    AISET_CloseCombatTakedown = 0x8E,
    AISET_BloodPool = 0x8F,
    AISET_SpawnedActor = 0x90,
    AISET_SoundRadio = 0x91,
    AISET_InLimitVisionAreaZone = 0x92,
    AISET_InsideLimitVisionArea = 0x93,
    AISET_BlockedByLimitVisionArea = 0x94,
    AISET_AmbientOnly = 0x95,
    AISET_FakeAgitated = 0x96,
    AISET_Agitated = 0x97,
    AISET_HasBeenInCombat = 0x98,
    AISET_HitByItem = 0x99,
    AISET_IgnoreSillyHitman = 0x9A,
    AISET_CloseCombatAllowed = 0x9B,
    AISET_Invisible = 0x9C,
    AISET_HitTarget = 0x9D,
    AISET_CollateralTarget = 0x9E,
    AISET_CheckedLastPosition = 0x9F,
    AISET_HuntAct = 0xA0,
    AISET_Investigated = 0xA1,
    AISET_InDeadBodyArea = 0xA2,
    AISET_SeenThrowing = 0xA3,
    AISET_SeenDeadlyThrowVictim = 0xA4,
    AISET_CurrentTarget = 0xA5
};
