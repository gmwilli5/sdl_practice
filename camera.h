#ifndef CAMERA_H_INCLUDED
#define CAMERA_H_INCLUDED
#include "structs.h"
class map_class;
class player_class;
class camera_class{
    private:
        vec2 position;
        player_class* player;
        map_class* map;
    public:
        camera_class();
        void set_map(map_class* new_map);
        void set_player(player_class* new_player);
        void set_position(vec2 new_position);
};
#endif // CAMERA_H_INCLUDED
