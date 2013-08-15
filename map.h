#ifndef MAP_H_INCLUDED
#define MAP_H_INCLUDED
#include "SDL/SDL.h"
class map_class{
    private:
        SDL_Surface* tile;

    public:
        map_class();
        SDL_Surface* get_tile();
        void render(SDL_Surface* screen);
};
#endif // MAP_H_INCLUDED
