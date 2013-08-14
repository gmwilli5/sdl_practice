#ifndef EVENTS_H_INCLUDED
#define EVENTS_H_INCLUDED
#include "SDL/SDL.h"
class events_class{
    private:
        SDL_Event event;
        void events(SDL_Event* e);
    public:
        events_class();
        void event_loop();
};
#endif // EVENTS_H_INCLUDED
