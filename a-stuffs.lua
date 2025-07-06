

function convert_s16(num)
    local min = -32768
    local max = 32767
    while (num < min) do
        num = max + (num - min)
    end
    while (num > max) do
        num = min + (num - max)
    end
    return num
end

function s16(x)
    x = (math.floor(x) & 0xFFFF)
    if x >= 32768 then return x - 65536 end
    return x
end


function common_air_action_step2(m, landAction, animation, stepArg)
    update_air_without_turn(m);

    stepResult = perform_air_step(m, stepArg);
    if (m.action == ACT_BUBBLED and stepResult == AIR_STEP_HIT_LAVA_WALL) then
        stepResult = AIR_STEP_HIT_WALL;
    end

    if stepResult ==
        AIR_STEP_NONE then
        set_character_animation(m, animation);
    end

    if stepResult == AIR_STEP_LANDED then
        if check_fall_damage_or_get_stuck(m, ACT_HARD_BACKWARD_GROUND_KB) == 0 then
            set_mario_action(m, landAction, 0)
        end
    end
    if (stepResult == AIR_STEP_HIT_WALL) then
        mario_set_forward_vel(m, 0.0);
    end

    if stepResult == AIR_STEP_GRABBED_LEDGE then
        set_character_animation(m, CHAR_ANIM_IDLE_ON_LEDGE);
        drop_and_set_mario_action(m, ACT_LEDGE_GRAB, 0);
    end

    if stepResult == AIR_STEP_GRABBED_CEILING then
        set_mario_action(m, ACT_START_HANGING, 0);
    end

    if stepResult == AIR_STEP_HIT_LAVA_WALL then
        lava_boost_on_wall(m);
    end


    return stepResult;
end

function interact_w_door(m)
    local wdoor = obj_get_nearest_object_with_behavior_id(m.marioObj, id_bhvDoorWarp)
    local door = obj_get_nearest_object_with_behavior_id(m.marioObj, id_bhvDoor)
    local sdoor = obj_get_nearest_object_with_behavior_id(m.marioObj, id_bhvStarDoor)

    if door ~= nil and dist_between_objects(m.marioObj, door) < 150 then
        interact_door(m, 0, door)
        --djui_chat_message_create("door.")
        if door.oAction == 0 then
            if (should_push_or_pull_door(m, door) & 1) ~= 0 then
                door.oInteractStatus = 0x00010000
            else
                door.oInteractStatus = 0x00020000
            end
        end
    elseif sdoor ~= nil and dist_between_objects(m.marioObj, sdoor) < 150 then
        interact_door(m, 0, sdoor)
        --djui_chat_message_create("star door.")
        if sdoor.oAction == 0 then
            if (should_push_or_pull_door(m, sdoor) & 1) ~= 0 then
                sdoor.oInteractStatus = 0x00010000
            else
                sdoor.oInteractStatus = 0x00020000
            end
        end
    elseif wdoor ~= nil and dist_between_objects(m.marioObj, wdoor) < 150 then
        interact_warp_door(m, 0, wdoor)
        set_mario_action(m, ACT_DECELERATING, 0)
        --djui_chat_message_create("warp door.")
        if wdoor.oAction == 0 then
            if (should_push_or_pull_door(m, wdoor) & 1) ~= 0 then
                wdoor.oInteractStatus = 0x00010000
            else
                wdoor.oInteractStatus = 0x00020000
            end
        end
    end
end



function between(val, min, max)
    return ((val < max) and (val >= min))
end

function limit_angle(a)
    return (a + 0x8000) % 0x10000 - 0x8000
end

function s32(x)
    x = (math.floor(x) & 0xFFFFFFFF)
    if x >= 2147483648 then return x - 4294967296 end
    return x
end


--[[
animspeed = 0.25
animtimer = 0

function walk_anim_speed(m)
    animtimer = animtimer + animspeed
    if animtimer == 1 then
        walk1()
    end
    if animtimer == 2 then
        idle()
    end
    if animtimer == 3 then
        walk2()
    end
    if animtimer == 4 then
        idle()
    end
    if animtimer >= 4 then
        animtimer = 0 
    end
    print(animtimer)
end
]]

