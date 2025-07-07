local friction = 2
local walk_speed = 24
local run_speed = 40


--    local s = NExtraStates[m.playerIndex]
NExtraStates = {}
for i = 0, (MAX_PLAYERS - 1) do
    NExtraStates[i] = {}
    local e = NExtraStates[i]
    e.current_wspeed = walk_speed
    e.animtimer = 0
    e.runanimtimer = 0
    e.back = false
    e.left = false
    e.right = false
    e.sprite = 0
end

function update_nate_speed(m)
    local s = NExtraStates[m.playerIndex]
    if m.forwardVel >= s.current_wspeed then
        m.forwardVel = s.current_wspeed
    end
    m.faceAngle.y = m.intendedYaw - approach_s32(s16(m.intendedYaw - m.faceAngle.y), 0, 0x800, 0x800);
    apply_slope_accel(m);
end

_G.ACT_NATE_IDLE = allocate_mario_action(ACT_FLAG_IDLE | ACT_FLAG_ALLOW_FIRST_PERSON | ACT_FLAG_STATIONARY |
    ACT_FLAG_CUSTOM_ACTION)

local function act_nate_idle(m)
    idle(m)

    if (m.controller.buttonPressed & A_BUTTON ~= 0) then
        set_mario_action(m, ACT_NATE_AIR, 0)
    end
    if (m.input & INPUT_NONZERO_ANALOG ~= 0) then
        m.faceAngle.y = m.intendedYaw
        set_mario_action(m, ACT_NATE_WALK, 0)
    end
    m.forwardVel = 0
    m.vel.y = 0
    m.vel.x = 0
    m.vel.z = 0
    if (perform_ground_step(m) == GROUND_STEP_LEFT_GROUND) then
        set_mario_action(m, ACT_NATE_AIR, 1)
    end
    set_character_animation(m, CHAR_ANIM_A_POSE)
    stop_and_set_height_to_floor(m)
end

hook_mario_action(ACT_NATE_IDLE, act_nate_idle)



_G.ACT_NATE_WALK = allocate_mario_action(ACT_GROUP_MOVING | ACT_FLAG_MOVING| ACT_FLAG_CUSTOM_ACTION)

local function act_nate_walk(m)
    interact_w_door(m)
    local s = NExtraStates[m.playerIndex]
    if (m.input & INPUT_NONZERO_ANALOG ~= 0) then
        --m.forwardVel = m.forwardVel + accel_speed
        if m.forwardVel < s.current_wspeed then
            m.forwardVel = m.forwardVel + 1
        else
            m.forwardVel = m.forwardVel + 0
        end

        if (m.controller.buttonDown & B_BUTTON ~= 0) then
            run_anim_speed(m)

            s.current_wspeed = run_speed
            if m.forwardVel < s.current_wspeed then
                m.forwardVel = m.forwardVel + 1
            else
                m.forwardVel = m.forwardVel + 0
            end
        else
            walk_anim_speed(m)

            s.current_wspeed = walk_speed
        end
    else
        m.forwardVel = m.forwardVel - friction
    end
    if m.forwardVel > s.current_wspeed then
        m.forwardVel = m.forwardVel - 1
    else
        m.forwardVel = m.forwardVel - 0
    end
    if (m.forwardVel >= 0.1 and m.forwardVel <= -0.1) or m.forwardVel <= -1 then
        set_mario_action(m, ACT_NATE_IDLE, 0)
    end

    if (perform_ground_step(m) == GROUND_STEP_LEFT_GROUND) then
        set_mario_action(m, ACT_NATE_AIR, 1)
    end
    if (m.controller.buttonPressed & A_BUTTON ~= 0) then
        set_mario_action(m, ACT_NATE_AIR, 0)
    end
    --[[
    if (analog_stick_held_back(m) ~= 0 and m.forwardVel > 0) then
        set_mario_action(m, ACT_TURNING_AROUND, 0)
    end
]]
    set_character_animation(m, CHAR_ANIM_A_POSE)
    update_nate_speed(m)
end

hook_mario_action(ACT_NATE_WALK, act_nate_walk)


ACT_NATE_AIR = allocate_mario_action(ACT_FLAG_AIR| ACT_FLAG_MOVING |ACT_GROUP_AIRBORNE)

local function act_nate_air(m)
    run_anim_speed(m)

    if m.actionArg <= 0 then
        m.vel.y = 30
        m.actionArg = m.actionArg + 1
    end
    set_character_animation(m, CHAR_ANIM_A_POSE)
    common_air_action_step2(m, ACT_NATE_WALK, CHAR_ANIM_A_POSE, AIR_STEP_NONE)
end

hook_mario_action(ACT_NATE_AIR, act_nate_air)
