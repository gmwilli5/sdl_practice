#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED
#include "SDL/SDL.h"
#include "window.h"
#include "events.h"
class game_class{
    private:
        SDL_Surface* screen;
        window_class* window;
        events_class* events;
        bool running;
    public:
        game_class();
        ~game_class();
        SDL_Surface* get_screen();
        void render();
        bool get_running();
        events_class* get_events();
};
#endif // GAME_H_INCLUDED
