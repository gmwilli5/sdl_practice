#include <cstddef>
#include <vector>
#include "collision_detection.h"
#include "structs.h"
#include "player.h"
#include "tools.h"
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
    aabb player_tile=construct_aabb(temp_p,30,20);
    for(unsigned int iii=0;iii<tiles->size();iii++){
        if(tiles->at(iii).z==1){
            aabb map_tile=construct_aabb(tiles->at(iii),30,20);
            if((detect_collision(map_tile,player_tile))==true){
                player->set_collision(true);
                collision_class temp;
                temp.set_map(tiles->at(iii));
                temp.set_momentum({0,0});
                temp.set_player(temp_p);
                player->add_collision(temp);
            }
        }
    }
}
void collision_detection_class::resolve_collisions()
{
    for(unsigned int iii=0;iii<player->get_collision_size();iii++){

    }
}
