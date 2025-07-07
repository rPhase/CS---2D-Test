-- name: [CS] Natalie
-- description: generic retro maid  \n\n\Made by: Wall_E20\n\n\\#ff7777\\This Pack requires Character Select\nto use as a Library!



local TEXT_MOD_NAME = "[CS] Natalie"

-- Stops mod from loading if Character Select isn't on
if not _G.charSelectExists then
    djui_popup_create(
        "\\#ffffdc\\\n" ..
        TEXT_MOD_NAME ..
        "\nRequires the Character Select Mod\nto use as a Library!\n\nPlease turn on the Character Select Mod\nand Restart the Room!",
        6)
    return 0
end

local NATE_MODEL = smlua_model_util_get_id("nate_r_geo")

local PALETTE_NATE = {
    [PANTS]  = { r = 0, g = 0, b = 0 },
    [SHIRT]  = { r = 181, g = 181, b = 181 },
    [GLOVES] = { r = 0, g = 0, b = 0 },
    [SHOES]  = { r = 0, g = 0, b = 0 },
    [HAIR]   = { r = 82, g = 33, b = 0 },
    [SKIN]   = { r = 255, g = 206, b = 197 },
    [CAP]    = { r = 0, g = 0, b = 0 },
    [EMBLEM] = { r = 0, g = 0, b = 0 },
}

local PALETTE_N_PICOTRON = {
    [PANTS]  = { r = 0, g = 0, b = 0 },
    [SHIRT]  = { r = 194, g = 195, b = 199 },
    [GLOVES] = { r = 0, g = 0, b = 0 },
    [SHOES]  = { r = 0, g = 0, b = 0 },
    [HAIR]   = { r = 69, g = 45, b = 50 },
    [SKIN]   = { r = 255, g = 204, b = 170 },
    [CAP]    = { r = 0, g = 0, b = 0 },
    [EMBLEM] = { r = 0, g = 0, b = 0 },
}



local CSloaded = false
local function on_character_select_load()
    CT_NATE = _G.charSelect.character_add("Natalie", { " " }, "Wall_E20",
        { r = 255, g = 243, b = 254 },
        NATE_MODEL, CT_MARIO, nil, 1)
    _G.charSelect.character_add_palette_preset(NATE_MODEL, PALETTE_NATE, "Default")
    _G.charSelect.character_add_palette_preset(NATE_MODEL, PALETTE_N_PICOTRON, "non-retro")
end
--[[
local function on_character_sound(m, sound)
    if not CSloaded then return end
    if _G.charSelect.character_get_voice(m) == SMWVOICE then return _G.charSelect.voice.sound(m, sound) end
end

local function on_character_snore(m)
    if not CSloaded then return end
    if _G.charSelect.character_get_voice(m) == SMWVOICE then return _G.charSelect.voice.snore(m) end
end
--]]
gPlayerSyncTable[0].back = false
gPlayerSyncTable[0].left = false
gPlayerSyncTable[0].right = false
hook_event(HOOK_ON_MODS_LOADED, on_character_select_load)
--hook_event(HOOK_CHARACTER_SOUND, on_character_sound)
--hook_event(HOOK_MARIO_UPDATE, on_character_snore)
local function nate_update(m)
    local s = gPlayerSyncTable[m.playerIndex]
    h = gMarioStates[m.playerIndex]
    local get_angle = limit_angle(h.faceAngle.y - calculate_yaw(gLakituState.pos, gLakituState.focus))
    if _G.charSelect.character_get_current_number(m.playerIndex) == CT_NATE then
        --m.marioObj.header.gfx.node.flags = GRAPH_RENDER_Z_BUFFER
        --djui_chat_message_create("angle = " .. (get_angle))
        if m.playerIndex ~= 0 then
        else
            if between(get_angle, 9135, 22270) then
                s.right = true
            else
                s.right = false
            end
            if between(get_angle, -23950, -9230) then
                s.left = true
            else
                s.left = false
            end
            if between(get_angle, -9230, 9135) then
                s.back = true
            else
                s.back = false
            end
        end
        --side 1 =   9135  _  22270
        --side 2 = -23950  _  -9230
    end
end
hook_event(HOOK_MARIO_UPDATE, nate_update)
--[[
hook_event(HOOK_ON_SET_MARIO_ACTION, function(m)
    if m.playerIndex ~= 0 then return end
    for i, k in pairs(_G) do
        if k == m.action then
            if i:find("ACT") == 1 then
                print("action: " .. i)
            end
            if i:find("CHAR_ANIM") == 1 then
                print("anim: " .. i)
            end
        end
    end
end)
--]]
gPlayerSyncTable[0].sprite = 0

function idle()
    local m = geo_get_mario_state()
    local s = gPlayerSyncTable[m.playerIndex]
    if s.back == true then
        s.sprite = 3
    elseif s.left == true then
        s.sprite = 6
    elseif s.right == true then
        s.sprite = 9
    else
        s.sprite = 0
    end
end

function walk1()
    local m = geo_get_mario_state()
    local s = gPlayerSyncTable[m.playerIndex]
    if s.back == true then
        s.sprite = 4
    elseif s.left == true then
        s.sprite = 7
    elseif s.right == true then
        s.sprite = 10
    else
        s.sprite = 1
    end
end

function walk2()
    local m = geo_get_mario_state()
    local s = gPlayerSyncTable[m.playerIndex]
    if s.back == true then
        s.sprite = 5
    elseif s.left == true then
        s.sprite = 8
    elseif s.right == true then
        s.sprite = 11
    else
        s.sprite = 2
    end
end

function sit()
    local m = geo_get_mario_state()
    local s = gPlayerSyncTable[m.playerIndex]
    if s.back == true then
        s.sprite = 13
    elseif s.left == true then
        s.sprite = 14
    elseif s.right == true then
        s.sprite = 15
    else
        s.sprite = 12
    end
end

function n_sprite(node, matStackIndex)
    local m = geo_get_mario_state()
    local s = gPlayerSyncTable[m.playerIndex]
    if m.playerIndex ~= 0 then return end
    local asSwitchNode = cast_graph_node(node)
    asSwitchNode.selectedCase = s.sprite
end

NExtraStatesd = {}
for i = 0, (MAX_PLAYERS - 1) do
    NExtraStatesd[i] = {}
    local e = NExtraStatesd[i]
    e.animtimer = 0
    e.runanimtimer = 0
end

local animspeed = 1
local runanimspeed = 2


function walk_anim_speed()
    local m = geo_get_mario_state()
    local s = NExtraStatesd[m.playerIndex]
    s.animtimer = s.animtimer + animspeed
    if s.animtimer == 5 then
        walk1()
    end
    if s.animtimer == 10 then
        idle()
    end
    if s.animtimer == 15 then
        walk2()
    end
    if s.animtimer == 20 then
        idle()
    end
    if s.animtimer >= 20 then
        s.animtimer = 0
    end
end

function run_anim_speed()
    local m = geo_get_mario_state()
    local s = NExtraStatesd[m.playerIndex]

    s.runanimtimer = s.runanimtimer + runanimspeed
    if s.runanimtimer == 8 then
        walk1()
    end
    if s.runanimtimer == 14 then
        idle()
    end
    if s.runanimtimer == 20 then
        walk2()
    end
    if s.runanimtimer == 26 then
        idle()
    end
    if s.runanimtimer >= 26 then
        s.runanimtimer = 0
    end
end
