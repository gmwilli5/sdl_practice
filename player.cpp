#include <iostream>
#include "player.h"
#include "tools.h"
#include "render_tools.h"
player_class::player_class()
{
    tile=SDL_LoadBMP("red.bmp");
    physics=new physics_class;
    position.x=0;
    position.y=0;
    velocity.x=0;
    velocity.y=0;
    acceleration.x=0;
    acceleration.y=0;
    collision=false;
    collisions=new collision_queue_class;
    disable_collision=false;
}
player_class::~player_class()
{
    SDL_FreeSurface(tile);
    delete physics;
    delete collisions;
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
    ///does the physics won't be neccassarry until some sort of map is implemented
    ///*update_physics();
    ///accelerate();*/
    move();
}
void player_class::move()
{
    //position+=velocity;
    //std::cout<<velocity.x<<","<<velocity.y<<"\n";
    position=dot_product(position,velocity);
    //std::cout<<velocity.x<<","<<velocity.y<<"\n";
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
            case SDLK_l:
                //game->get_player()->events(event);
                disable_collision=true;
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
void player_class::update_physics()
{
    //std::cout<<acceleration.x<<","<<acceleration.y<<"\n";
    physics->apply_gravity(&acceleration);
    //std::cout<<acceleration.x<<","<<acceleration.y<<"\n";
}
void player_class::accelerate()
{
    //std::cout<<acceleration.x<<","<<acceleration.y<<"\n";
    velocity=dot_product(acceleration,velocity);
    //std::cout<<acceleration.x<<","<<acceleration.y<<"\n";
}
vec2 player_class::get_position()
{
    return position;
}
void player_class::set_collision(bool new_collision)
{
    collision=new_collision;
}
bool player_class::get_collision()
{
    //collision=new_collision;
    return collision;
}
void player_class::add_collision(collision_class new_collision)
{
    collisions->push(new_collision);
}
unsigned int player_class::get_collision_size()
{
    return collisions->size();
}
collision_class player_class::pop_collision()
{
    collision_class temp=collisions->pop();
    return temp;
}
void player_class::set_position(vec2 new_position)
{
    position=new_position;
}
void player_class::set_velocity(vec2 new_velocity)
{
    velocity=new_velocity;
}
void player_class::set_acceleration(vec2 new_acceleration)
{
    acceleration=new_acceleration;
}
void player_class::stop_movement()
{
    //zero_vec2(velocity);
    zero_vec2_y(velocity);
    //zero_vec2(acceleration);
    zero_vec2_y(acceleration);
}
void player_class::set_disable_collision(bool new_bool)
{
    disable_collision=new_bool;
}
bool player_class::get_disable_collision()
{
    return disable_collision;
}
vec2 player_class::get_velocity()
{
    return velocity;
}
