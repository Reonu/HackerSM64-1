// metal_box.inc.c
#include "game/print.h"


struct ObjectHitbox sIceBlockHitbox = {
    /* interactType:      */ INTERACT_NONE,
    /* downOffset:        */ 0,
    /* damageOrCoinValue: */ 0,
    /* health:            */ 1,
    /* numLootCoins:      */ 0,
    /* radius:            */ 220,
    /* height:            */ 300,
    /* hurtboxRadius:     */ 220,
    /* hurtboxHeight:     */ 300,
};

s32 check_if_moving_over_floor_ice_block(f32 maxDist, f32 offset) {
    struct Surface *floor;
    f32 xPos = o->oPosX + sins(o->oMoveAngleYaw) * offset;
    f32 zPos = o->oPosZ + coss(o->oMoveAngleYaw) * offset;

    f32 floorHeight = find_floor(xPos, o->oPosY, zPos, &floor);

    return (absf(floorHeight - o->oPosY) < maxDist);
}

void bhv_ice_block_loop(void) {
    f32 distBlue;
    f32 distRed;
    
    f32 distThreshold;


    distThreshold = MAX(200.f, (200.f * o->header.gfx.scale[0]));
    struct Object *redFire = cur_obj_find_nearest_object_with_behavior(bhvFlame, &distRed);
    struct Object *blueFire = cur_obj_find_nearest_object_with_behavior(bhvBlueFlame, &distBlue);
    if (blueFire != NULL && distBlue < (200.0f * o->header.gfx.scale[0])) {
        print_text(20,20,"blue");
        if (o->header.gfx.scale[0] < 5.f) {
            if (o->header.gfx.scale[0] < 2.5f) {
                o->header.gfx.scale[0] = o->header.gfx.scale[1] = o->header.gfx.scale[2] += 0.005f;
            } else {
                o->header.gfx.scale[0] = o->header.gfx.scale[1] = o->header.gfx.scale[2] += 0.01f;
            }
            
        }
    } else if (redFire != NULL && distRed < distThreshold) {
        print_text(20,20,"red");
        if (o->header.gfx.scale[0] > 0.9f) {
            o->header.gfx.scale[0] = o->header.gfx.scale[1] = o->header.gfx.scale[2] -= 0.005f;
        }       
    }

    if (o->header.gfx.scale[0] <= 0.9f) {
        o->header.gfx.scale[0] = o->header.gfx.scale[1] = o->header.gfx.scale[2] -= 0.01f;
        if (o->header.gfx.scale[0] <= 0.2f) {
            spawn_mist_particles();
            o->oPosX = o->oHomeX;
            o->oPosY = o->oHomeY;
            o->oPosZ = o->oHomeZ;
            o->header.gfx.scale[0] = o->header.gfx.scale[1] = o->header.gfx.scale[2] = 1.f;
        }
    }

    obj_set_hitbox(o, &sIceBlockHitbox);
    o->oForwardVel = 0.0f;

    if (obj_check_if_collided_with_object(o, gMarioObject) && gMarioStates[0].flags & MARIO_PUSHING) {
        s16 angleToMario = obj_angle_to_object(o, gMarioObject);
        if (abs_angle_diff(angleToMario, gMarioObject->oMoveAngleYaw) > 0x4000) {
            o->oMoveAngleYaw = (s16)((gMarioObject->oMoveAngleYaw + 0x2000) & 0xc000);
            if (check_if_moving_over_floor_ice_block(8.0f, 150.0f)) {
                o->oForwardVel = 12.0f;
                cur_obj_play_sound_1(SOUND_ENV_METAL_BOX_PUSH);
            }
        }
    }

    if (gSwitchPressed) {
        o->oPosX = o->oHomeX;
        o->oPosY = o->oHomeY;
        o->oPosZ = o->oHomeZ;
        o->header.gfx.scale[0] = o->header.gfx.scale[1] = o->header.gfx.scale[2] = 1.f;
        gSwitchPressed -= 1;
    }

    cur_obj_move_using_fvel_and_gravity();
}

void bhv_flame_light(void) {
    Vec3f pos = {o->oPosX, o->oPosY + 100, o->oPosZ};
    u8 intensity = (random_u16() % 128) + 127;

    if (o->behavior == segmented_to_virtual(bhvFlame)) {
        emit_light(pos, intensity, 0, 0, 4, 200, 8);
    } else {
        emit_light(pos, 0, 0, intensity, 4, 200, 8);
    }
}