#pragma once

#include "ZHM5BaseMovement.h"
#include "sExitCoverInfo.h"
#include "eCoverMoveType.h"
#include "sCoverCorner.h"
#include "HM5Utils.h"
#include "ZMapPoly.h"
#include "eMoveDir.h"
#include "eCoverOTSMode.h"
#include "sSideCToCData.h"

class alignas(16) ZHM5MovementCover : public ZHM5BaseMovement
{
public:
    sExitCoverInfo m_sExitInfo;
    ZHM5CoverPlane* m_pRequestedCoverPlane;
    ZHM5CoverPlane* m_pWantedCoverPlane;
    ZHM5CoverPlane* m_pCurrentCoverPlane;
    ZHM5CoverPlane* m_pLastCoverPlaneRounded;
    eCoverMoveType m_MoveType;
    eCoverMoveType m_FirstMoveType;
    eCoverMoveType m_MoveType_Debug;
    sCoverCorner m_CurrentCorner;
    sCoverCorner m_ShiftTargetCorner;
    sCoverCorner m_ShiftStartCorner;
    unsigned int m_nActiveAnimNodeID;
    HM5Utils::SAnimBlend m_sAnimBlend;
    ZMapPoly m_Mapper;
    ZMapPoly m_MoveSpeedMapBlend;
    float m_fAnimDuration;
    float m_fAnimFraction;
    unsigned int m_nCoverAimWildCardTransitID;
    float m_fAimSneak;
    float m_fAimWeight;
    bool m_bFacingRight;
    float m_fStanceBlendParam;
    bool m_bInitialMoveAngleSet;
    float m_fHandLayerFraction;
    eMoveDir m_MoveDir;
    eMoveDir m_eHitmanRelativeInputDir;
    eCoverStance m_eStance;
    float m_fRawInputX;
    float m_fRawInputY;
    float m_fInputVelocity;
    float4 m_vInput;
    float4 m_vMove;
    float4 m_vCameraWorldInput;
    float4 m_vHitmanRelativeInput;
    float m_fInputMagnitude;
    float m_fMoveLength;
    float m_fLateralSpeed;
    float m_fSpeedMultiplier;
    float m_fAbsolutAngleInput;
    int m_nQuadrantInput;
    SMatrix m_mvCameraInputWorldMat;
    bool m_bInputUpdated;
    bool m_bEnterEffectsPlayed;
    bool m_bCutSequenceActivated;
    SMatrix m_mvCoverPlaneMatPos;
    SMatrix m_mvStartMatPos;
    SMatrix m_mvDestMatPos;
    bool m_bExitToSneak;
    float m_fTimeSinceLastStickChange;
    unsigned int m_anCoverToCoverAnims[2][3];
    bool m_bUsePelvisRotationCorrection;
    bool m_bCtoCFacingChanged;
    SMatrix m_CTCStart;
    SMatrix m_CTCEnd;
    HM5Utils::SBlendParamFractions m_sCToCBlendFractions;
    bool m_bIsCoverScaleExitMovePossible;
    bool m_bExitScale;
    float m_fScaleCoverExitFraction;
    bool m_bEnterShootModeFacingRight;
    float m_fBlendToAimStateFraction;
    SMatrix m_mvShootMatPos;
    HM5Utils::SPelvisRotationCorrection m_PelvisRotationCorrection;
    bool m_bSwitchCoverFacingReversalAllowed;
    bool m_bSwitchCoverFacingUseAnimBlend;
    bool m_bSwitchCoverFacingDone;
    bool m_bIncreaseSwitchFacingFraction;
    bool m_bSwitchInitialFacingRight;
    float m_fSwitchCoverFacingAnimDuration;
    float m_fSwitchCoverFacingFraction;
    float m_fSwitchCoverFacingTime;
    float m_fBlindFire;
    float m_fBlindFireHoldTime;
    float m_fBlindFireFacing;
    float m_fBlindFireFacingTarget;
    SMatrix m_BlindFireStartPos;
    SMatrix m_BlindFireTargetPos;
    unsigned int m_anBlindFireAnimID[4][3];
    bool m_bCameraSideWhenEntering;
    bool m_bOTSActiveAtEnter;
    bool m_bCoverToCoverCameraFacing;
    float m_fCameraExitShootPosStartFraction;
    float m_fTransitionFraction;
    SMatrix m_CameraGroundStart;
    eCoverOTSMode m_eCoverOTSMode;
    float4 m_vForcedPos;
    bool m_bForcedClampToCoverCorners;
    bool m_bForceResetCamera;
    bool m_bForceExitOTSMode;
    bool m_bForceNoEnterAnimation;
    sSideCToCData m_SideCToCData;
    bool m_bWasCoverScaleExitMovePossibleCached;
    float4 m_vWasCoverScaleExitMovePossiblePos;
    bool m_bWasExitForwardPossibleCached;
    float4 m_vWasExitForwardPossiblePos;
    float m_fPosBunnyLength;
    float m_fNegBunnyLength;
    bool m_bAnimEndHigh;
};
