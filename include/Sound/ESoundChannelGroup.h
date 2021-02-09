#pragma once

enum ESoundChannelGroup : __int32
{
    ESCG_NONE = 0x0,
    SND_Default = 0x1,
    SND_Phys_Rigidbody = 0x2,
    SND_Phys_Shatter = 0x3,
    SND_Wpn_HM = 0x4,
    SND_Wpn_HM_Shot = 0x5,
    SND_Wpn_NPC = 0x6,
    SND_Wpn_Impacts = 0x7,
    SND_Wpn_Flybys = 0x8,
    SND_Characters = 0x9,
    SND_Ambience = 0xA,
    SND_Props = 0xB,
    SND_Prop_Item = 0xC,
    SND_FS_HM = 0xD,
    SND_FS_NPC = 0xE,
    SND_VisualFX = 0xF,
    SND_VisualFX_ShotActivate = 0x10,
    SND_VisualFX_Explosions = 0x11,
    SND_Diag_HM = 0x12,
    SND_Diag_NPC = 0x13,
    SND_CS_Ingame = 0x14,
    SND_CS_PreRend = 0x15,
    SND_Music_Env = 0x16,
    SND_MusicNonEnv = 0x17,
    SND_SpecialFX_ShootingBallet = 0x18,
    SND_SpecialFX_CC = 0x19,
    SND_SpecialFX_Jumps = 0x1A,
    SND_SpecialFX_Closet = 0x1B,
    SND_SpecialFX_Vent = 0x1C,
    SND_SpecialFX_Instinct = 0x1D,
    SND_SpecialFX_HumanShield = 0x1E,
    SND_SpecialFX_Disguise = 0x1F,
    SND_SpecialFX_Agility = 0x20,
    SND_Stingers_SFX = 0x21,
    SND_GUI = 0x22,
    SND_Test = 0x23,
    ANIM_HM_Generic = 0x24,
    ANIM_HM_Loco = 0x25,
    ANIM_HM_Agility = 0x26,
    ANIM_HM_Suit_Flap = 0x27,
    ANIM_HM_Suit_Release = 0x28,
    ANIM_HM_Suit_Slide = 0x29,
    ANIM_HM_Suit_LandImpact = 0x2A,
    ANIM_HM_Suit_Grab = 0x2B,
    ANIM_HM_Suit_Roll = 0x2C,
    ANIM_HM_Suit_Swoosh_Body = 0x2D,
    ANIM_HM_Suit_Swoosh_Fast = 0x2E,
    ANIM_HM_CC_Impacts = 0x2F,
    ANIM_HM_CC_Movement = 0x30,
    ANIM_NPC_Generic = 0x31,
    ANIM_NPC_Loco = 0x32,
    ANIM_NPC_CC_Impacts = 0x33,
    ANIM_NPC_CC_Movement = 0x34,
    SND_Wpn_HM_Tail = 0x35,
    SND_Wpn_NPC_Tail = 0x36,
    SND_Diag_NPC_Crowd = 0x37,
    SND_Phys_RigidBody_Ragdoll = 0x38,
    SND_Diag_VO = 0x39,
    SND_GUI_Menu = 0x3A,
    SND_Props_Doors = 0x3B,
    SND_Wpn_HM_Handguns = 0x3C,
    SND_Wpn_HM_Revolvers = 0x3D,
    SND_Wpn_HM_Rifles = 0x3E,
    SND_Wpn_HM_Shotguns = 0x3F,
    SND_Wpn_HM_Smgs = 0x40,
    SND_Wpn_HM_Snipers = 0x41,
    SND_Wpn_HM_Other = 0x42,
    SND_Wpn_NPC_Handguns = 0x43,
    SND_Wpn_NPC_Revolvers = 0x44,
    SND_Wpn_NPC_Rifles = 0x45,
    SND_Wpn_NPC_Shotguns = 0x46,
    SND_Wpn_NPC_Smgs = 0x47,
    SND_Wpn_NPC_Snipers = 0x48,
    SND_Wpn_NPC_Other = 0x49,
    SND_Diag_NPC_Oneliner = 0x4A,
    SND_Moments = 0x4B,
    ECSG_NUMCHANNELGROUPS = 0x4C
};
