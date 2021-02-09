#pragma once

enum ECCNodeType : __int32
{
    eCCNodeType_Counter = 0x0,
    eCCNodeType_ExecutePistol = 0x1,
    eCCNodeType_React = 0x2,
    eCCNodeType_SilentTakeDownEnd = 0x3,
    eCCNodeType_SilentKill = 0x4,
    eCCNodeType_SlitThroat1H = 0x5,
    eCCNodeType_Swing1H = 0x6,
    eCCNodeType_Bash1H = 0x7,
    eCCNodeType_Stab1H = 0x8,
    eCCNodeType_Syringe1H = 0x9,
    eCCNodeType_Strangle1H = 0xA,
    eCCNodeType_Smash1H = 0xB,
    eCCNodeType_Swing2H = 0xC,
    eCCNodeType_Stab2H = 0xD,
    eCCNodeType_Bash2H = 0xE,
    eCCNodeType_Strangle2H = 0xF,
    eCCNodeType_Axe = 0x10,
    eCCNodeType_AttackChain = 0x11,
    eCCNodeType_AttackChainCivilian = 0x12,
    eCCNodeType_AttackChainHeavy = 0x13,
    eCCNodeType_FailChain = 0x14,
    eCCNodeType_FinishChainHigh = 0x15,
    eCCNodeType_FinishChainLow = 0x16,
    eCCNodeType_FinishChainKill = 0x17,
    eCCNodeType_StairsChain = 0x18,
    eCCNodeType_CounterChain = 0x19,
    eCCNodeType_AttackIdle = 0x1A,
    eCCNodeType_AttackPassify = 0x1B,
    eCCNodeType_CoverLowOverTakeDown = 0x1C,
    eCCNodeType_CoverLowThinOverTakeDown = 0x1D,
    eCCNodeType_CoverLowThinOverFarTakeDown = 0x1E,
    eCCNodeType_CoverLowCornerTakeDown = 0x1F,
    eCCNodeType_CoverHighCornerTakeDown = 0x20,
    eCCNodeType_CoverChangeSideRight = 0x21,
    eCCNodeType_SilentTakeDown = 0x22,
    eCCNodeType_ChokeLoop = 0x23,
    eCCNodeType_ChokeKillSilent = 0x24,
    eCCNodeType_ChokeKillSnapNeck = 0x25,
    eCCNodeType_BossAttackChain = 0x26,
    eCCNodeType_BossAttackChainLoop = 0x27,
    eCCNodeType_BossAttackChainFinish = 0x28,
    eCCNodeType_BossCounterChain = 0x29,
    eCCNodeType_BossFailChain = 0x2A,
    eCCNodeType_BossReact = 0x2B,
    eCCNodeType_FailChainPush = 0x2C,
    eCCNodeType_Count = 0x2D
};