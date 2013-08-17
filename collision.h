#ifndef COLLISION_H_INCLUDED
#define COLLISION_H_INCLUDED
#include "structs.h"
class collision_class{
    private:
        vec3 map_tile;
        vec2 player_tile;
        vec2 momentum;
    public:
        collision_class();
        collision_class(vec3 new_map_tile,vec2 new_player_tile, vec2 new_momentum);
        void set_map(vec3 new_map);
        void set_player(vec2 new_player);
        void set_momentum(vec2 new_momentum);
};
#endif // COLLISION_H_INCLUDED
