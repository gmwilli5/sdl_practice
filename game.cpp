#include "game.h"
#include <iostream>
game_class::game_class()
{
    window=new window_class(600,700,32);
    events=new events_class;
    events->set_game(this);
    map=new map_class;
    player=new player_class;
    std::cout<<player<<"\n";
    running=true;
}
game_class::~game_class()
{
    delete window;
}
SDL_Surface* game_class::get_screen()
{
    return screen;
}
void game_class::render()
{
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
