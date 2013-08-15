#ifndef EVENTS_H_INCLUDED
#define EVENTS_H_INCLUDED
#include "SDL/SDL.h"
#include "game.h"
class game_class;
class events_class{
    private:
        SDL_Event event;
        void events(SDL_Event* e);
        game_class* game;
    public:
        events_class();
        void set_game(game_class* new_game);
        void event_loop();
};
#endif // EVENTS_H_INCLUDED
