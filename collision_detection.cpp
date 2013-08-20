#include <cstddef>
#include <vector>
#include <iostream>
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
    collision_class temp;
    //std::cout<<30<<"\n";
    for(unsigned int iii=0;iii<tiles->size();iii++){
        if(tiles->at(iii).z==1){
            //std::cout<<33<<"\n";
            aabb map_tile=construct_aabb(tiles->at(iii),30,20);
            //if(((detect_collision(map_tile,player_tile))==true)&&(player->get_disable_collision()==false)){
            if(((detect_collision(map_tile,player_tile))==true)){
                //std::cout<<36<<"\n";
                player->set_collision(true);
                //collision_class temp;
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
    collision_class temp;
    for(unsigned int iii=0;iii<player->get_collision_size();iii++){
        temp=player->pop_collision();
        vec2 temp_v;
        temp_v=temp.get_player();
        if(temp_v.y<temp.get_map().y){
            temp_v.y=temp.get_map().y-21;
            player->set_position(temp_v);
            player->stop_movement();
            if(player->get_disable_collision()==true){
                temp_v.y=temp_v.y+42;
                player->set_position(temp_v);
                player->set_disable_collision(false);
            }
        }
        if(temp_v.y>temp.get_map().y){
            temp_v.y=temp.get_map().y+21;
            player->set_position(temp_v);
            player->stop_movement();
        }
    }
}
void collision_detection_class::update()
{
    detect_collisions();
    resolve_collisions();
}
