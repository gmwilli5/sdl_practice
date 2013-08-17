#include "collision.h"
collision_class::collision_class()
{
    map_tile={0,0,0};
    player_tile={0,0};
    momentum={0,0};
}
collision_class::collision_class(vec3 new_map_tile,vec2 new_player_tile, vec2 new_momentum)
{
    map_tile=new_map_tile;
    player_tile=new_player_tile;
    momentum=new_momentum;
}
void collision_class::set_map(vec3 new_map)
{
    map_tile=new_map;
}
void collision_class::set_player(vec2 new_player)
{
    player_tile=new_player;
}
void collision_class::set_momentum(vec2 new_momentum)
{
    momentum=new_momentum;
}
