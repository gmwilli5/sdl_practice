#include "game.h"
#include "render_tools.h"
#include <iostream>
game_class::game_class()
{
    window=new window_class(600,700,32);
    events=new events_class;
    events->set_game(this);
    map=new map_class;
    player=new player_class;
    physics=new physics_class;
    collision_detection=new collision_detection_class;
    collision_detection->set_map(map);
    collision_detection->set_player(player);
    running=true;
}
game_class::~game_class()
{
    delete window;
    delete events;
    delete map;
    delete player;
    delete physics;
    delete collision_detection;
}
SDL_Surface* game_class::get_screen()
{
    return screen;
}
void game_class::render()
{
    clear_surface(window->get_screen());
    map->render(window->get_screen());
    player->render(window->get_screen());
    SDL_Flip(window->get_screen());
}
bool game_class::get_running()
{
    return running;
}
events_class* game_class::get_events()
{
    return events;
}
player_class* game_class::get_player()
{
    return player;
}
void game_class::update()
{
    player->update();
    collision_detection->update();
}
