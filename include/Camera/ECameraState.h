#pragma once

enum ECameraState : __int32
{
    eCamSneakStand = 0x0,
    eCamSneakWalk = 0x1,
    eCamSneakRoadyRun = 0x2,
    eCamNormalStand = 0x3,
    eCamNormalWalk = 0x4,
    eCamNormalRun = 0x5,
    eCamLocomotion = 0x6,
    eCamCrowdStand = 0x7,
    eCamCrowdWalk = 0x8,
    eCamCrowdRun = 0x9,
    eCamCrowdSneakStand = 0xA,
    eCamCrowdSneakWalk = 0xB,
    eCamCrowdSneakRoadyRun = 0xC,
    eCamCrowdLocomotion = 0xD,
    eCamDead = 0xE,
    eCamLadder = 0xF,
    eCamDrag = 0x10,
    eCamHumanShield = 0x11,
    eCamSBTag = 0x12,
    eCamSBTagOTS = 0x13,
    eCamCloseCombat = 0x14,
    eCamFiberWire = 0x15,
    eCamWindowPull = 0x16,
    eCamRailPush = 0x17,
    eCamLedgeKick = 0x18,
    eCamLedgePull = 0x19,
    eCamLedgeHang = 0x1A,
    eCamLedgeWalk = 0x1B,
    eCamLedgeWalkOTS = 0x1C,
    eCamCoverLow = 0x1D,
    eCamCoverMedium = 0x1E,
    eCamCoverHigh = 0x1F,
    eCamCoverLowOTS = 0x20,
    eCamCoverHighOTS = 0x21,
    eCamCoverLowScope = 0x22,
    eCamCoverHighScope = 0x23,
    eCamCoverLowTakedownOver = 0x24,
    eCamCoverLowTakedownCorner = 0x25,
    eCamCoverHighTakedownCorner = 0x26,
    eCamTakeDisguise = 0x27,
    eCamOTS = 0x28,
    eCamOTSHigh = 0x29,
    eCamOTSLow = 0x2A,
    eCamUnAimedShooting = 0x2B,
    eCamUnAimedShootingHigh = 0x2C,
    eCamUnAimedShootingLow = 0x2D,
    eCamScope = 0x2E,
    eCamScopeHigh = 0x2F,
    eCamScopeLow = 0x30,
    eCamNumProfiles = 0x31,
    eCamAll = 0x32
};