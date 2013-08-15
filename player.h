#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED
#include "SDL/SDL.h"
#include "structs.h"
#include "events.h"
class events_class;
class player_class{
    private:
        SDL_Surface* tile;
        //events_class* event1;
        vec2 position;
        vec2 velocity;
    private:
        void move();
    public:
        player_class();
        //player_class(events_class* new_events);
        void update();
        void events(SDL_Event event);
        void render(SDL_Surface* screen);
};
#endif // PLAYER_H_INCLUDED
