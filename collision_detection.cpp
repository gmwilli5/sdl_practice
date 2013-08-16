#include <cstddef>
#include <vector>
#include "collision_detection.h"
#include "structs.h"
#include "player.h"
///30 by 20 tiles
collision_detection_class::collision_detection_class()
{
    player=NULL;
    map=NULL;
}
void collision_detection_class::set_map(map_class* new_map)
{
    map=new_map;
}
void collision_detection_class::set_player(player_class* new_player)
{
    player=new_player;
}
void collision_detection_class::detect_collisions()
{
    vec2 temp_p;
    temp_p=player->get_position();
    std::vector<vec3>* tiles;
    tiles=map->get_positions_ptr();
}
void collision_detection_class::resolve_collisions()
{

}
