#include "player.h"
#include "tools.h"
#include "render_tools.h"
player_class::player_class()
{
    tile=SDL_LoadBMP("red.bmp");
    position.x=0;
    position.y=0;
    velocity.x=0;
    velocity.y=0;
}
/*player_class::player_class(events_class* new_events)
{
    tile=SDL_LoadBMP("red.bmp");
    event1=new_events;
    position.x=0;
    position.y=0;
    velocity.x=0;
    velocity.y=0;
}*/
void player_class::update()
{
    move();
}
void player_class::move()
{
    //position+=velocity;
    position=dot_product(position,velocity);
}
void player_class::events(SDL_Event event)
{
    if(event.type==SDL_KEYDOWN){
        switch(event.key.keysym.sym){
            case SDLK_UP:
                //game->get_player()->events(event);
                break;
            case SDLK_DOWN:
                //game->get_player()->events(event);
                break;
            case SDLK_LEFT:
                //game->get_player()->events(event);
                break;
            case SDLK_RIGHT:
                //game->get_player()->events(event);
                break;
            default:
                break;
        }
    }
}
void player_class::render(SDL_Surface* screen)
{
    apply_surface(position.x,position.y,tile,screen);
}
