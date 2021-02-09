#pragma once

enum ERenderLayer : __int32
{
    RENDER_LAYER_ZPASS = 0x0,
    RENDER_LAYER_ZPASS_DISCARD = 0x1,
    RENDER_LAYER_EMISSIVE = 0x2,
    RENDER_LAYER_EMISSIVE_DITHER = 0x3,
    RENDER_LAYER_SHADOWMAP = 0x4,
    RENDER_LAYER_SHADOWMAP_DITHER = 0x5,
    RENDER_LAYER_SHADOWMAP_Z = 0x6,
    RENDER_LAYER_SHADOWMAP_Z_DITHER = 0x7,
    RENDER_LAYER_LIGHTING_DIRECTIONAL = 0x8,
    RENDER_LAYER_LIGHTING_DIRECTIONALCSM = 0x9,
    RENDER_LAYER_LIGHTING_ENVIRONMENT = 0xA,
    RENDER_LAYER_LIGHTING_OMNI = 0xB,
    RENDER_LAYER_LIGHTING_OMNI2D = 0xC,
    RENDER_LAYER_LIGHTING_SPOT = 0xD,
    RENDER_LAYER_LIGHTING_CAPSULE = 0xE,
    RENDER_LAYER_DEFERRED_2 = 0xF,
    RENDER_LAYER_DEFERRED_2_DITHER = 0x10,
    RENDER_LAYER_DEFERRED_SIMPLE_2 = 0x11,
    RENDER_LAYER_DEFERRED_SIMPLE_2_DITHER = 0x12,
    RENDER_LAYER_WIREFRAME = 0x13,
    RENDER_LAYER_SIMPLE = 0x14,
    RENDER_LAYER_RAINMAP = 0x15,
    RENDER_LAYER_DECAL = 0x16,
    RENDER_LAYER_DECAL_DITHER = 0x17,
    RENDER_LAYER_REFLECTIVE_SHADOWMAP = 0x18,
    RENDER_LAYER_REFLECTIVE_SHADOWMAP_DITHER = 0x19,
    RENDER_LAYER_REFLECTIVE_SHADOWMAP_Z = 0x1A,
    RENDER_LAYER_REFLECTIVE_SHADOWMAP_Z_DITHER = 0x1B,
    MAX_NUM_LAYERS = 0x1C,
    RENDER_LAYER_ZPREPASS = 0x1D,
    RENDER_LAYER_MASK_DITHER = 0x408054,
    RENDER_LAYER_FRAGMENT_OVERRIDE_MASK = 0x3800F0
};