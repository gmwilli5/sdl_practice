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
std::vector<unsigned int> camera_class::get_indexes()
{
    return indexes;
}
std::vector<unsigned int>* camera_class::get_indexes_ptr()
{
    return &indexes;
}
void camera_class::set_indexes(std::vector<unsigned int> new_indexes)
{
    for(unsigned int iii=0;iii<new_indexes.size();iii++){
        indexes.push_back(new_indexes.at(iii));
    }
}
void camera_class::set_indexes(std::vector<unsigned int>* new_indexes)
{
    for(unsigned int iii=0;iii<new_indexes->size();iii++){
        indexes.push_back(new_indexes->at(iii));
    }
}
void camera_class::add_index(unsigned int index)
{
    indexes.push_back(index);
}
unsigned int camera_class::get_index(unsigned int index)
{
    return indexes.at(index);
}
void camera_class::calculate_indexes()
{

}
void camera_class::move_left()
{
    map->shift_left(30);
}
void camera_class::move_right()
{
    map->shift_right(30);
}
void camera_class::events(SDL_Event event)
{
    if(event.type==SDL_KEYDOWN){
        switch(event.key.keysym.sym){
            case SDLK_a:
                move_left();
                break;
            case SDLK_d:
                move_right();
                break;
            default:
                break;
        }
    }
}
