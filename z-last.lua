local NATE_ACT_ONLY = {
    [ACT_TURNING_AROUND] = true,        --ACT_TURNING_AROUND
    [ACT_FINISH_TURNING_AROUND] = true, --ACT_TURNING_AROUND
    [ACT_DISAPPEARED] = true,
    [ACT_STAR_DANCE_EXIT] = true,
    [ACT_STAR_DANCE_NO_EXIT] = true,
    [ACT_STAR_DANCE_WATER] = true,
    [ACT_CREDITS_CUTSCENE] = true,
    [ACT_DEATH_EXIT_LAND] = true,
    [ACT_SQUISHED] = true,
    [ACT_IN_CANNON] = true,
    [ACT_TELEPORT_FADE_OUT] = true,
    [ACT_TELEPORT_FADE_IN] = true,
    [ACT_PULLING_DOOR] = true,
    [ACT_PUSHING_DOOR] = true,
    [ACT_DECELERATING] = true,
    [ACT_DROWNING] = true,
    [ACT_SHOT_FROM_CANNON] = true,
    [ACT_WATER_SHELL_SWIMMING] = true,
    [ACT_RIDING_SHELL_FALL] = true,
    [ACT_RIDING_SHELL_JUMP] = true,
    [ACT_RIDING_SHELL_GROUND] = true,
    [ACT_WALL_KICK_AIR] = true,
}


local SIT_ACTION = {
    [ACT_GROUND_POUND_LAND] = true,
    [ACT_GROUND_POUND] = true,
    [ACT_BUTT_SLIDE] = true,
    [ACT_STOMACH_SLIDE_STOP] = true,
    [ACT_STOMACH_SLIDE] = true,
    [ACT_BUTT_SLIDE_STOP] = true,
    [ACT_DIVE_SLIDE] = true,
    [ACT_BUTT_SLIDE_AIR] = true,
    [ACT_HOLD_BUTT_SLIDE_AIR] = true,
    [ACT_HOLD_BUTT_SLIDE] = true,
    [ACT_HOLD_BUTT_SLIDE_STOP] = true,
    [ACT_BEGIN_SLIDING] = true,
    [ACT_START_CROUCHING] = true,
    [ACT_CROUCHING] = true,
    [ACT_SLEEPING] = true,
}

local function onlynate(m, action)
    if _G.charSelect.character_get_current_number(m.playerIndex) == CT_NATE then
        m.peakHeight = m.pos.y
        if m.action == ACT_IDLE then
            set_mario_action(m, ACT_NATE_IDLE, 0)
        end
        if m.playerIndex ~= 0 then
        else
            if (NATE_ACT_ONLY[m.action] ~= true) and ((m.action & ACT_FLAG_CUSTOM_ACTION) == 0) and ((m.action & ACT_GROUP_CUTSCENE) == 0) and not _G.charSelect.is_menu_open() then
                if ((m.action & ACT_FLAG_AIR) ~= 0) then
                    --set_mario_action(m, ACT_NATE_AIR, 1)
                    --djui_chat_message_create("set action to fall")
                    --elseif ((m.action & ACT_FLAG_SWIMMING_OR_FLYING) ~= 0) then
                    set_mario_action(m, ACT_NATE_AIR, 1)
                elseif ((m.action & ACT_FLAG_AIR) == 0) then
                    set_mario_action(m, ACT_NATE_AIR, 1)
                elseif ((m.action & ACT_FLAG_IDLE) ~= 0) then
                    set_mario_action(m, ACT_NATE_WALK, 0)
                end
            end
        end
    end
end
--hook_event(HOOK_MARIO_UPDATE, onlynate)

local Nate_actions = {
    [ACT_NATE_IDLE] = true,
    [ACT_NATE_WALK] = true,
    [ACT_NATE_AIR] = true,
}

local function nate_sprites_update(m, action)
    if _G.charSelect.character_get_current_number(m.playerIndex) == CT_NATE then
        if (obj_has_behavior_id(m.heldObj, id_bhvBowser) ~= 0) then
            m.marioBodyState.grabPos = GRAB_POS_BOWSER
        else
            m.marioBodyState.grabPos = GRAB_POS_NULL
        end
        if m.playerIndex ~= 0 then
        else
            if (SIT_ACTION[m.action] == true) then
                sit()
            end
            if (Nate_actions[m.action] ~= true) and not (SIT_ACTION[m.action] == true) then
                if ((m.action & ACT_FLAG_AIR) ~= 0) then
                    run_anim_speed(m)
                elseif ((m.action & ACT_FLAG_IDLE) ~= 0) then
                    idle()
                else
                    if m.forwardVel ~= 0 then
                        walk_anim_speed(m)
                    elseif m.forwardVel >= 35 then
                        run_anim_speed(m)
                    end
                    if m.forwardVel == 0 then
                        idle()
                    end
                end
            end
        end
    end
end
hook_event(HOOK_MARIO_UPDATE, nate_sprites_update)

local function on_character_select_load()
    _G.charSelect.character_hook_moveset(CT_NATE, HOOK_MARIO_UPDATE, onlynate)
end
hook_event(HOOK_ON_MODS_LOADED, on_character_select_load)
