#pragma once

enum ECustomFlags : __int32
{
    eCOVER_TAKEDOWN = 0x1,
    eCLOSECOMBAT_CHOKE = 0x2,
    eCLOSECOMBAT_PISTOLFINISH = 0x4,
    eCLOSECOMBAT_PROPS = 0x8,
    eCLOSECOMBAT_STANDART = 0x10,
    eCLOSECOMBAT_FAKESWING = 0x20,
    eGAMECAMERA_AUTOALIGN = 0x40,
    eITEMS_SELECT = 0x80,
    eITEMS_CANHOLSTER = 0x100,
    eSEQUENCE_NOT_INSEQUENCE = 0x200,
    eINSTINCT = 0x400,
    eCOVER_SCALE = 0x800,
    eCOVER_TO_COVER = 0x1000,
    eBLINDFIRE = 0x2000,
    eAIM = 0x4000,
    eFIRE = 0x8000,
    eHAIR_TRIGGER = 0x10000,
    eMOVEMENT_ALLOWED = 0x20000,
    eCAN_CANCEL_SHOOTING_BALLET = 0x40000,
    eLEDGE_WALKFAST = 0x80000
};
