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
}

local function onlynate(m, action)
    if _G.charSelect.character_get_current_number(m.playerIndex) == CT_NATE then
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
hook_event(HOOK_MARIO_UPDATE, onlynate)

local Nate_actions = {
    [ACT_NATE_IDLE] = true,
    [ACT_NATE_WALK] = true,
    [ACT_NATE_AIR] = true,

}

local function nate_sprites_update(m, action)
    if _G.charSelect.character_get_current_number(m.playerIndex) == CT_NATE then
        if m.playerIndex ~= 0 then
        else
            if (Nate_actions[m.action] ~= true) then
                if ((m.action & ACT_FLAG_AIR) ~=  0) then
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
