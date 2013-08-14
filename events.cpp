#include "events.h"
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
}
