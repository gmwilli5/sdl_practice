#ifndef CAMERA_H_INCLUDED
#define CAMERA_H_INCLUDED
#include <vector>
#include "structs.h"
#include "SDL/SDL.h"
class map_class;
class player_class;
class camera_class{
    private:
        vec2 position;
        player_class* player;
        map_class* map;
        ///holds indexes of the map tiles currently being rendered
        std::vector<unsigned int> indexes;
    private:
        void calculate_indexes();
    public:
        camera_class();
        void set_map(map_class* new_map);
        void set_player(player_class* new_player);
        void set_position(vec2 new_position);
        std::vector<unsigned int> get_indexes();
        std::vector<unsigned int>* get_indexes_ptr();
        void set_indexes(std::vector<unsigned int> new_indexes);
        void set_indexes(std::vector<unsigned int>* new_indexes);
        void add_index(unsigned int index);
        unsigned int get_index(unsigned int index);
        void move_left();
        void move_right();
        void events(SDL_Event event);
        //void calculate_indexes();
};
#endif // CAMERA_H_INCLUDED
