#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED
#include "SDL/SDL.h"
#include "window.h"
//#include "events.h"
class events_class;
#include "map.h"
#include "player.h"
#include "physics.h"
#include "collision_detection.h"
class physics_class;
class player_class;
class game_class{
    private:
        SDL_Surface* screen;
        window_class* window;
        events_class* events;
        map_class* map;
        player_class* player;
        physics_class* physics;
        collision_detection_class* collision_detection;
        bool running;
    public:
        game_class();
        ~game_class();
        SDL_Surface* get_screen();
        void render();
        bool get_running();
        events_class* get_events();
        player_class* get_player();
        void update();
};
#endif // GAME_H_INCLUDED
