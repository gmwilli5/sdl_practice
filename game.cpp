#include "game.h"
game_class::game_class()
{
    window=new window_class(600,700,32);
    events=new events_class;
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

}
bool game_class::get_running()
{
    return running;
}
events_class* game_class::get_events()
{
    return events;
}
