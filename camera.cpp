#include "camera.h"
#include "player.h"
#include "map.h"
camera_class::camera_class()
{
    map=NULL;
    player=NULL;
    position={0,0};
}
void camera_class::set_map(map_class* new_map)
{
    map=new_map;
}
void camera_class::set_player(player_class* new_player)
{
    player=new_player;
}
void camera_class::set_position(vec2 new_position)
{
    position=new_position;
}
