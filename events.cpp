#include "events.h"
events_class::events_class()
{

}
void events_class::event_loop()
{
    while(SDL_PollEvent(&event)){
            events(&event);
        }
}
void events_class::events(SDL_Event* e)
{
    if(event.type==SDL_QUIT){
        SDL_Quit();
    }
    if(event.type==SDL_KEYDOWN){
        switch(event.key.keysym.sym){
            case SDLK_UP:
                game->get_player()->events(event);
                break;
            case SDLK_DOWN:
                game->get_player()->events(event);
                break;
            case SDLK_LEFT:
                game->get_player()->events(event);
                break;
            case SDLK_RIGHT:
                game->get_player()->events(event);
                break;
            case SDLK_l:
                game->get_player()->events(event);
                break;
            default:
                break;
        }
    }
}
void events_class::set_game(game_class* new_game)
{
    game=new_game;
}
