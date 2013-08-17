#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED
#include "SDL/SDL.h"
#include "structs.h"
#include "events.h"
#include "collision_queue.h"
class events_class;
class physics_class;
class player_class{
    private:
        SDL_Surface* tile;
        //events_class* event1;
        vec2 position;
        vec2 velocity;
        vec2 acceleration;
        physics_class* physics;
        collision_queue_class* collisions;
        bool collision;
    private:
        void move();
        void accelerate();
        void on_screen_check();
        void update_physics();
    public:
        player_class();
        ~player_class();
        //player_class(events_class* new_events);
        void update();
        void events(SDL_Event event);
        void render(SDL_Surface* screen);
        void set_collision(bool new_collision);
        void add_collision(collision_class new_collision);
        bool get_collision();
        vec2 get_position();
        unsigned int get_collision_size();
};
#endif // PLAYER_H_INCLUDED
