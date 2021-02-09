#pragma once

enum ERenderPrimitiveTopology : __int32
{
    RENDER_PRIMITIVE_TOPOLOGY_INVALID = 0x0,
    RENDER_PRIMITIVE_TOPOLOGY_POINT_LIST = 0x1,
    RENDER_PRIMITIVE_TOPOLOGY_LINE_LIST = 0x2,
    RENDER_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST = 0x3,
    RENDER_PRIMITIVE_TOPOLOGY_QUAD_LIST_EX = 0x4,
    RENDER_PRIMITIVE_TOPOLOGY_RECT_LIST_EX = 0x5,
    RENDER_PRIMITIVE_TOPOLOGY_PATCHLIST_3 = 0x6
};