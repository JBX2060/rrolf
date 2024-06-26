#include <Client/Ui/Ui.h>

#include <Client/Ui/Engine.h>

#include <Client/Game.h>
#include <Client/InputData.h>
#include <Client/Simulation.h>
#include <Client/Socket.h>
#include <Shared/pb.h>

static void continue_to_squad_event(struct rr_ui_element *this, struct rr_game *game)
{
    if (game->input_data->mouse_buttons_up_this_tick & 1)
    {
        struct proto_bug encoder;
        proto_bug_init(&encoder, RR_OUTGOING_PACKET);
        proto_bug_write_uint8(&encoder, 255, "qv");
        proto_bug_write_uint8(&encoder, rr_serverbound_squad_ready, "header");
        rr_websocket_send(&game->socket, encoder.current - encoder.start);
    }
}

static uint8_t game_over(struct rr_ui_element *this, struct rr_game *game)
{
    return game->simulation_ready && game->player_info->flower_id == RR_NULL_ENTITY;
}

struct rr_ui_element *rr_ui_finished_game_screen_init()
{
    struct rr_ui_element *leave_game =
        rr_ui_labeled_button_init("Continue", 36, NULL);
    rr_ui_set_background(leave_game, 0xff45a8a8);
    leave_game->on_event = continue_to_squad_event;
    struct rr_ui_element *this = rr_ui_v_container_init(
        rr_ui_container_init(), 10, 10,
        rr_ui_text_init("You Died", 48, 0xffffffff), leave_game, NULL);
    this->should_show = game_over;
    return this;
}