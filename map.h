#ifndef MAP_H_INCLUDED
#define MAP_H_INCLUDED
#include "SDL/SDL.h"
#include <vector>
#include "structs.h"
class camera_class;
class map_class{
    private:
        SDL_Surface* tile;
        std::vector<vec3> positions;
        camera_class* camera;
    public:
        map_class();
        SDL_Surface* get_tile();
        void render(SDL_Surface* screen);
        std::vector<vec3>* get_positions_ptr();
        void set_camera(camera_class* new_camera);
        void shift_left(int pixels);
        void shift_right(int pixels);
        void shift_up(int pixels);
        void shift_down(int pixels);
};
#endif // MAP_H_INCLUDED
