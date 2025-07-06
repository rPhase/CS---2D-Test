Lights1 nate_Front_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF, 0xFF, 0xFF, 0x28, 0x28, 0x28);

Lights1 nate_FrontWalk1_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF, 0xFF, 0xFF, 0x28, 0x28, 0x28);

Lights1 nate_FrontWalk2_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF, 0xFF, 0xFF, 0x28, 0x28, 0x28);

Lights1 nate_Back_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF, 0xFF, 0xFF, 0x28, 0x28, 0x28);

Lights1 nate_BackWalk2_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF, 0xFF, 0xFF, 0x28, 0x28, 0x28);

Lights1 nate_BackWalk1_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF, 0xFF, 0xFF, 0x28, 0x28, 0x28);

Lights1 nate_Left_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF, 0xFF, 0xFF, 0x28, 0x28, 0x28);

Lights1 nate_LeftW_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF, 0xFF, 0xFF, 0x28, 0x28, 0x28);

Lights1 nate_Right_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF, 0xFF, 0xFF, 0x28, 0x28, 0x28);

Lights1 nate_RightW_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF, 0xFF, 0xFF, 0x28, 0x28, 0x28);

Texture nate_overworld_alt1_rgba16[] = {
	#include "actors/nate/overworld_alt1.rgba16.inc.c"
};

Texture nate_overworld_alt5_rgba16[] = {
	#include "actors/nate/overworld_alt5.rgba16.inc.c"
};

Texture nate_overworld_alt6_rgba16[] = {
	#include "actors/nate/overworld_alt6.rgba16.inc.c"
};

Texture nate_overworld_alt3_rgba16[] = {
	#include "actors/nate/overworld_alt3.rgba16.inc.c"
};

Texture nate_overworld_alt9_rgba16[] = {
	#include "actors/nate/overworld_alt9.rgba16.inc.c"
};

Texture nate_overworld_alt10_rgba16[] = {
	#include "actors/nate/overworld_alt10.rgba16.inc.c"
};

Texture nate_overworld_alt2_rgba16[] = {
	#include "actors/nate/overworld_alt2.rgba16.inc.c"
};

Texture nate_overworld_alt7_rgba16[] = {
	#include "actors/nate/overworld_alt7.rgba16.inc.c"
};

Texture nate_overworld_alt4_rgba16[] = {
	#include "actors/nate/overworld_alt4.rgba16.inc.c"
};

Texture nate_overworld_alt11_rgba16[] = {
	#include "actors/nate/overworld_alt11.rgba16.inc.c"
};

Vtx nate_NDL_mesh_layer_4_vtx_0[4] = {
	{{{100, 3, 0}, 0, {1024, 1024}, {0x00, 0x00, 0x7F, 0xFF}}},
	{{{-100, 203, 0}, 0, {0, 0}, {0x00, 0x00, 0x7F, 0xFF}}},
	{{{-100, 3, 0}, 0, {0, 1024}, {0x00, 0x00, 0x7F, 0xFF}}},
	{{{100, 203, 0}, 0, {1024, 0}, {0x00, 0x00, 0x7F, 0xFF}}},
};

Gfx nate_NDL_mesh_layer_4_tri_0[] = {
	gsSPVertex(nate_NDL_mesh_layer_4_vtx_0 + 0, 4, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSPEndDisplayList(),
};

Vtx nate_fWalk1SwitchOption_fwalk1DL_mesh_layer_4_vtx_0[4] = {
	{{{100, 3, 0}, 0, {1024, 1024}, {0x00, 0x00, 0x7F, 0xFF}}},
	{{{-100, 203, 0}, 0, {0, 0}, {0x00, 0x00, 0x7F, 0xFF}}},
	{{{-100, 3, 0}, 0, {0, 1024}, {0x00, 0x00, 0x7F, 0xFF}}},
	{{{100, 203, 0}, 0, {1024, 0}, {0x00, 0x00, 0x7F, 0xFF}}},
};

Gfx nate_fWalk1SwitchOption_fwalk1DL_mesh_layer_4_tri_0[] = {
	gsSPVertex(nate_fWalk1SwitchOption_fwalk1DL_mesh_layer_4_vtx_0 + 0, 4, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSPEndDisplayList(),
};

Vtx nate_fWalk2SwitchOption_fwalk2DL_mesh_layer_4_vtx_0[4] = {
	{{{100, 3, 0}, 0, {1024, 1024}, {0x00, 0x00, 0x7F, 0xFF}}},
	{{{-100, 203, 0}, 0, {0, 0}, {0x00, 0x00, 0x7F, 0xFF}}},
	{{{-100, 3, 0}, 0, {0, 1024}, {0x00, 0x00, 0x7F, 0xFF}}},
	{{{100, 203, 0}, 0, {1024, 0}, {0x00, 0x00, 0x7F, 0xFF}}},
};

Gfx nate_fWalk2SwitchOption_fwalk2DL_mesh_layer_4_tri_0[] = {
	gsSPVertex(nate_fWalk2SwitchOption_fwalk2DL_mesh_layer_4_vtx_0 + 0, 4, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSPEndDisplayList(),
};

Vtx nate_BackSwitchOption_BackDL_mesh_layer_4_vtx_0[4] = {
	{{{100, 3, 0}, 0, {1024, 1024}, {0x00, 0x00, 0x7F, 0xFF}}},
	{{{-100, 203, 0}, 0, {0, 0}, {0x00, 0x00, 0x7F, 0xFF}}},
	{{{-100, 3, 0}, 0, {0, 1024}, {0x00, 0x00, 0x7F, 0xFF}}},
	{{{100, 203, 0}, 0, {1024, 0}, {0x00, 0x00, 0x7F, 0xFF}}},
};

Gfx nate_BackSwitchOption_BackDL_mesh_layer_4_tri_0[] = {
	gsSPVertex(nate_BackSwitchOption_BackDL_mesh_layer_4_vtx_0 + 0, 4, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSPEndDisplayList(),
};

Vtx nate_bWalk1SwitchOption_bwalk1DL_mesh_layer_4_vtx_0[4] = {
	{{{100, 3, 0}, 0, {1024, 1024}, {0x00, 0x00, 0x7F, 0xFF}}},
	{{{-100, 203, 0}, 0, {0, 0}, {0x00, 0x00, 0x7F, 0xFF}}},
	{{{-100, 3, 0}, 0, {0, 1024}, {0x00, 0x00, 0x7F, 0xFF}}},
	{{{100, 203, 0}, 0, {1024, 0}, {0x00, 0x00, 0x7F, 0xFF}}},
};

Gfx nate_bWalk1SwitchOption_bwalk1DL_mesh_layer_4_tri_0[] = {
	gsSPVertex(nate_bWalk1SwitchOption_bwalk1DL_mesh_layer_4_vtx_0 + 0, 4, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSPEndDisplayList(),
};

Vtx nate_bWalk2SwitchOption_bwalk2DL_mesh_layer_4_vtx_0[4] = {
	{{{100, 3, 0}, 0, {1024, 1024}, {0x00, 0x00, 0x7F, 0xFF}}},
	{{{-100, 203, 0}, 0, {0, 0}, {0x00, 0x00, 0x7F, 0xFF}}},
	{{{-100, 3, 0}, 0, {0, 1024}, {0x00, 0x00, 0x7F, 0xFF}}},
	{{{100, 203, 0}, 0, {1024, 0}, {0x00, 0x00, 0x7F, 0xFF}}},
};

Gfx nate_bWalk2SwitchOption_bwalk2DL_mesh_layer_4_tri_0[] = {
	gsSPVertex(nate_bWalk2SwitchOption_bwalk2DL_mesh_layer_4_vtx_0 + 0, 4, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSPEndDisplayList(),
};

Vtx nate_LeftSwitchOption_LeftDL_mesh_layer_4_vtx_0[4] = {
	{{{100, 3, 0}, 0, {1024, 1024}, {0x00, 0x00, 0x7F, 0xFF}}},
	{{{-100, 203, 0}, 0, {0, 0}, {0x00, 0x00, 0x7F, 0xFF}}},
	{{{-100, 3, 0}, 0, {0, 1024}, {0x00, 0x00, 0x7F, 0xFF}}},
	{{{100, 203, 0}, 0, {1024, 0}, {0x00, 0x00, 0x7F, 0xFF}}},
};

Gfx nate_LeftSwitchOption_LeftDL_mesh_layer_4_tri_0[] = {
	gsSPVertex(nate_LeftSwitchOption_LeftDL_mesh_layer_4_vtx_0 + 0, 4, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSPEndDisplayList(),
};

Vtx nate_Lwalk1SwitchOption_Lwalk1DL_mesh_layer_4_vtx_0[4] = {
	{{{100, 3, 0}, 0, {1024, 1024}, {0x00, 0x00, 0x7F, 0xFF}}},
	{{{-100, 203, 0}, 0, {0, 0}, {0x00, 0x00, 0x7F, 0xFF}}},
	{{{-100, 3, 0}, 0, {0, 1024}, {0x00, 0x00, 0x7F, 0xFF}}},
	{{{100, 203, 0}, 0, {1024, 0}, {0x00, 0x00, 0x7F, 0xFF}}},
};

Gfx nate_Lwalk1SwitchOption_Lwalk1DL_mesh_layer_4_tri_0[] = {
	gsSPVertex(nate_Lwalk1SwitchOption_Lwalk1DL_mesh_layer_4_vtx_0 + 0, 4, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSPEndDisplayList(),
};

Vtx nate_RigthSwitchOption_RigthDL_mesh_layer_4_vtx_0[4] = {
	{{{100, 3, 0}, 0, {1024, 1024}, {0x00, 0x00, 0x7F, 0xFF}}},
	{{{-100, 203, 0}, 0, {0, 0}, {0x00, 0x00, 0x7F, 0xFF}}},
	{{{-100, 3, 0}, 0, {0, 1024}, {0x00, 0x00, 0x7F, 0xFF}}},
	{{{100, 203, 0}, 0, {1024, 0}, {0x00, 0x00, 0x7F, 0xFF}}},
};

Gfx nate_RigthSwitchOption_RigthDL_mesh_layer_4_tri_0[] = {
	gsSPVertex(nate_RigthSwitchOption_RigthDL_mesh_layer_4_vtx_0 + 0, 4, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSPEndDisplayList(),
};

Vtx nate_Rwalk1SwitchOption_Rwalk1DL_mesh_layer_4_vtx_0[4] = {
	{{{100, 3, 0}, 0, {1024, 1024}, {0x00, 0x00, 0x7F, 0xFF}}},
	{{{-100, 203, 0}, 0, {0, 0}, {0x00, 0x00, 0x7F, 0xFF}}},
	{{{-100, 3, 0}, 0, {0, 1024}, {0x00, 0x00, 0x7F, 0xFF}}},
	{{{100, 203, 0}, 0, {1024, 0}, {0x00, 0x00, 0x7F, 0xFF}}},
};

Gfx nate_Rwalk1SwitchOption_Rwalk1DL_mesh_layer_4_tri_0[] = {
	gsSPVertex(nate_Rwalk1SwitchOption_Rwalk1DL_mesh_layer_4_vtx_0 + 0, 4, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSPEndDisplayList(),
};


Gfx mat_nate_Front[] = {
	gsSPClearGeometryMode(G_CULL_BACK),
	gsSPSetLights1(nate_Front_lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0),
	gsDPSetAlphaDither(G_AD_NOISE),
	gsDPSetTextureFilter(G_TF_POINT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, nate_overworld_alt1_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPEndDisplayList(),
};

Gfx mat_revert_nate_Front[] = {
	gsSPSetGeometryMode(G_CULL_BACK),
	gsDPPipeSync(),
	gsDPSetAlphaDither(G_AD_DISABLE),
	gsDPSetTextureFilter(G_TF_BILERP),
	gsSPEndDisplayList(),
};

Gfx mat_nate_FrontWalk1[] = {
	gsSPClearGeometryMode(G_CULL_BACK),
	gsSPSetLights1(nate_FrontWalk1_lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0),
	gsDPSetAlphaDither(G_AD_NOISE),
	gsDPSetTextureFilter(G_TF_POINT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, nate_overworld_alt5_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPEndDisplayList(),
};

Gfx mat_revert_nate_FrontWalk1[] = {
	gsSPSetGeometryMode(G_CULL_BACK),
	gsDPPipeSync(),
	gsDPSetAlphaDither(G_AD_DISABLE),
	gsDPSetTextureFilter(G_TF_BILERP),
	gsSPEndDisplayList(),
};

Gfx mat_nate_FrontWalk2[] = {
	gsSPClearGeometryMode(G_CULL_BACK),
	gsSPSetLights1(nate_FrontWalk2_lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0),
	gsDPSetAlphaDither(G_AD_NOISE),
	gsDPSetTextureFilter(G_TF_POINT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, nate_overworld_alt6_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPEndDisplayList(),
};

Gfx mat_revert_nate_FrontWalk2[] = {
	gsSPSetGeometryMode(G_CULL_BACK),
	gsDPPipeSync(),
	gsDPSetAlphaDither(G_AD_DISABLE),
	gsDPSetTextureFilter(G_TF_BILERP),
	gsSPEndDisplayList(),
};

Gfx mat_nate_Back[] = {
	gsSPClearGeometryMode(G_CULL_BACK),
	gsSPSetLights1(nate_Back_lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0),
	gsDPSetAlphaDither(G_AD_NOISE),
	gsDPSetTextureFilter(G_TF_POINT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, nate_overworld_alt3_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPEndDisplayList(),
};

Gfx mat_revert_nate_Back[] = {
	gsSPSetGeometryMode(G_CULL_BACK),
	gsDPPipeSync(),
	gsDPSetAlphaDither(G_AD_DISABLE),
	gsDPSetTextureFilter(G_TF_BILERP),
	gsSPEndDisplayList(),
};

Gfx mat_nate_BackWalk2[] = {
	gsSPClearGeometryMode(G_CULL_BACK),
	gsSPSetLights1(nate_BackWalk2_lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0),
	gsDPSetAlphaDither(G_AD_NOISE),
	gsDPSetTextureFilter(G_TF_POINT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, nate_overworld_alt9_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPEndDisplayList(),
};

Gfx mat_revert_nate_BackWalk2[] = {
	gsSPSetGeometryMode(G_CULL_BACK),
	gsDPPipeSync(),
	gsDPSetAlphaDither(G_AD_DISABLE),
	gsDPSetTextureFilter(G_TF_BILERP),
	gsSPEndDisplayList(),
};

Gfx mat_nate_BackWalk1[] = {
	gsSPClearGeometryMode(G_CULL_BACK),
	gsSPSetLights1(nate_BackWalk1_lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0),
	gsDPSetAlphaDither(G_AD_NOISE),
	gsDPSetTextureFilter(G_TF_POINT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, nate_overworld_alt10_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPEndDisplayList(),
};

Gfx mat_revert_nate_BackWalk1[] = {
	gsSPSetGeometryMode(G_CULL_BACK),
	gsDPPipeSync(),
	gsDPSetAlphaDither(G_AD_DISABLE),
	gsDPSetTextureFilter(G_TF_BILERP),
	gsSPEndDisplayList(),
};

Gfx mat_nate_Left[] = {
	gsSPClearGeometryMode(G_CULL_BACK),
	gsSPSetLights1(nate_Left_lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0),
	gsDPSetAlphaDither(G_AD_NOISE),
	gsDPSetTextureFilter(G_TF_POINT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, nate_overworld_alt2_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPEndDisplayList(),
};

Gfx mat_revert_nate_Left[] = {
	gsSPSetGeometryMode(G_CULL_BACK),
	gsDPPipeSync(),
	gsDPSetAlphaDither(G_AD_DISABLE),
	gsDPSetTextureFilter(G_TF_BILERP),
	gsSPEndDisplayList(),
};

Gfx mat_nate_LeftW[] = {
	gsSPClearGeometryMode(G_CULL_BACK),
	gsSPSetLights1(nate_LeftW_lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0),
	gsDPSetAlphaDither(G_AD_NOISE),
	gsDPSetTextureFilter(G_TF_POINT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, nate_overworld_alt7_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPEndDisplayList(),
};

Gfx mat_revert_nate_LeftW[] = {
	gsSPSetGeometryMode(G_CULL_BACK),
	gsDPPipeSync(),
	gsDPSetAlphaDither(G_AD_DISABLE),
	gsDPSetTextureFilter(G_TF_BILERP),
	gsSPEndDisplayList(),
};

Gfx mat_nate_Right[] = {
	gsSPClearGeometryMode(G_CULL_BACK),
	gsSPSetLights1(nate_Right_lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0),
	gsDPSetAlphaDither(G_AD_NOISE),
	gsDPSetTextureFilter(G_TF_POINT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, nate_overworld_alt4_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPEndDisplayList(),
};

Gfx mat_revert_nate_Right[] = {
	gsSPSetGeometryMode(G_CULL_BACK),
	gsDPPipeSync(),
	gsDPSetAlphaDither(G_AD_DISABLE),
	gsDPSetTextureFilter(G_TF_BILERP),
	gsSPEndDisplayList(),
};

Gfx mat_nate_RightW[] = {
	gsSPClearGeometryMode(G_CULL_BACK),
	gsSPSetLights1(nate_RightW_lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0),
	gsDPSetAlphaDither(G_AD_NOISE),
	gsDPSetTextureFilter(G_TF_POINT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, nate_overworld_alt11_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPEndDisplayList(),
};

Gfx mat_revert_nate_RightW[] = {
	gsSPSetGeometryMode(G_CULL_BACK),
	gsDPPipeSync(),
	gsDPSetAlphaDither(G_AD_DISABLE),
	gsDPSetTextureFilter(G_TF_BILERP),
	gsSPEndDisplayList(),
};

Gfx nate_NDL_mesh_layer_4[] = {
	gsSPDisplayList(mat_nate_Front),
	gsSPDisplayList(nate_NDL_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_nate_Front),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

Gfx nate_fWalk1SwitchOption_fwalk1DL_mesh_layer_4[] = {
	gsSPDisplayList(mat_nate_FrontWalk1),
	gsSPDisplayList(nate_fWalk1SwitchOption_fwalk1DL_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_nate_FrontWalk1),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

Gfx nate_fWalk2SwitchOption_fwalk2DL_mesh_layer_4[] = {
	gsSPDisplayList(mat_nate_FrontWalk2),
	gsSPDisplayList(nate_fWalk2SwitchOption_fwalk2DL_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_nate_FrontWalk2),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

Gfx nate_BackSwitchOption_BackDL_mesh_layer_4[] = {
	gsSPDisplayList(mat_nate_Back),
	gsSPDisplayList(nate_BackSwitchOption_BackDL_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_nate_Back),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

Gfx nate_bWalk1SwitchOption_bwalk1DL_mesh_layer_4[] = {
	gsSPDisplayList(mat_nate_BackWalk2),
	gsSPDisplayList(nate_bWalk1SwitchOption_bwalk1DL_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_nate_BackWalk2),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

Gfx nate_bWalk2SwitchOption_bwalk2DL_mesh_layer_4[] = {
	gsSPDisplayList(mat_nate_BackWalk1),
	gsSPDisplayList(nate_bWalk2SwitchOption_bwalk2DL_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_nate_BackWalk1),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

Gfx nate_LeftSwitchOption_LeftDL_mesh_layer_4[] = {
	gsSPDisplayList(mat_nate_Left),
	gsSPDisplayList(nate_LeftSwitchOption_LeftDL_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_nate_Left),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

Gfx nate_Lwalk1SwitchOption_Lwalk1DL_mesh_layer_4[] = {
	gsSPDisplayList(mat_nate_LeftW),
	gsSPDisplayList(nate_Lwalk1SwitchOption_Lwalk1DL_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_nate_LeftW),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

Gfx nate_RigthSwitchOption_RigthDL_mesh_layer_4[] = {
	gsSPDisplayList(mat_nate_Right),
	gsSPDisplayList(nate_RigthSwitchOption_RigthDL_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_nate_Right),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

Gfx nate_Rwalk1SwitchOption_Rwalk1DL_mesh_layer_4[] = {
	gsSPDisplayList(mat_nate_RightW),
	gsSPDisplayList(nate_Rwalk1SwitchOption_Rwalk1DL_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_nate_RightW),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

