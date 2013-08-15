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
    on_screen_check();
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
                velocity.y-=1;
                //game->get_player()->events(event);
                break;
            case SDLK_DOWN:
                velocity.y+=1;
                //game->get_player()->events(event);
                break;
            case SDLK_LEFT:
                velocity.x-=1;
                //game->get_player()->events(event);
                break;
            case SDLK_RIGHT:
                velocity.x+=1;
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
void player_class::on_screen_check()
{
    if(position.x<-20){
        position.x=580;
    }
    if(position.x>600){
        position.x=0;
    }
    if(position.y<-20){
        position.y=680;
    }
    if(position.y>700){
        position.y=0;
    }
}
