#include <Server/System/MapBoundary.h>

#include <Server/Simulation.h>

#include <math.h>

#include <Shared/Entity.h>
#include <Shared/Vector.h>
#include <Shared/Component/Physical.h>

struct function_captures
{
    float delta;
    struct rr_simulation *simulation;
};

void system_interpolation_for_each_function(EntityIdx entity, void *_captures)
{
    struct function_captures *captures = _captures;
    struct rr_simulation *this = captures->simulation;
    float delta = captures->delta;
    if (rr_simulation_has_physical(this, entity))
    {
        struct rr_component_physical *physical = rr_simulation_get_physical(this, entity);
        if (physical->lerp_x == 0)
            physical->lerp_x = physical->x;
        if (physical->lerp_y == 0)
            physical->lerp_y = physical->y;
        physical->lerp_x = rr_lerp(physical->lerp_x, physical->x, 10 * delta);
        physical->lerp_y = rr_lerp(physical->lerp_y, physical->y, 10 * delta);
        physical->lerp_angle = rr_angle_lerp(physical->lerp_angle, physical->angle, 10 * delta);
    }

    if (rr_simulation_has_flower(this, entity))
    {
        struct rr_component_flower *flower = rr_simulation_get_flower(this, entity);
        flower->eye_x = cosf(flower->eye_angle) * 3;
        flower->eye_y = sinf(flower->eye_angle) * 3;
        if (flower->lerp_eye_x == 0)
            flower->lerp_eye_x = flower->eye_x;
        if (flower->lerp_eye_y == 0)
            flower->lerp_eye_y = flower->eye_y;
        flower->lerp_eye_x = rr_lerp(flower->lerp_eye_x, flower->eye_x, 10 * delta);
        flower->lerp_eye_y = rr_lerp(flower->lerp_eye_y, flower->eye_y, 10 * delta);
    }

    if (rr_simulation_has_player_info(this, entity))
    {
        struct rr_component_player_info *player_info = rr_simulation_get_player_info(this, entity);
        if (player_info->lerp_camera_fov == 0)
            player_info->lerp_camera_fov = 0.5;
        player_info->lerp_camera_fov = rr_lerp(player_info->lerp_camera_fov, player_info->camera_fov, 8 * delta);
        player_info->lerp_camera_x = rr_lerp(player_info->lerp_camera_x, player_info->camera_x, 10 * delta);
        player_info->lerp_camera_y = rr_lerp(player_info->lerp_camera_y, player_info->camera_y, 10 * delta);
    }

    if (rr_simulation_has_health(this, entity))
    {
        struct rr_component_health *health = rr_simulation_get_health(this, entity);
        if (health->lerp_health == 0)
            health->lerp_health = health->health;
        health->lerp_health = rr_lerp(health->lerp_health, health->health, 10 * delta);
    }
}

void rr_system_interpolation_tick(struct rr_simulation *simulation, float delta)
{
    struct function_captures captures;
    captures.simulation = simulation;
    captures.delta = delta; 
    rr_simulation_for_each_entity(simulation, &captures, system_interpolation_for_each_function);
}
