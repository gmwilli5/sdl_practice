#include "map.h"
#include "render_tools.h"
map_class::map_class()
{
    tile=SDL_LoadBMP("enemy.bmp");
    vec3 temp;
    /*for(int iii=0;iii<600;iii+=30){
        for(int ooo=0;ooo<700;ooo+=30){
            temp.x=iii;
            temp.y=ooo;
            temp.z=1;
            positions.push_back(temp);
        }
    }*/
    for(int iii=0;iii<700;iii+=400){
        temp.x=iii;
        temp.y=650;
        temp.z=1;
        positions.push_back(temp);
    }
    for(int iii=0;iii<7000;iii+=30){
        temp.x=iii;
        temp.y=670;
        temp.z=1;
        positions.push_back(temp);
    }
}
SDL_Surface* map_class::get_tile()
{
    return tile;
}
void map_class::render(SDL_Surface* screen)
{
    //apply_surface(0,0,tile,screen);
    for(unsigned int iii=0;iii<positions.size();iii++){
        apply_surface(positions[iii].x,positions[iii].y,tile,screen);
    }
}
std::vector<vec3>* map_class::get_positions_ptr()
{
    return &positions;
}
void map_class::set_camera(camera_class* new_camera)
{
    camera=new_camera;
}
void map_class::shift_left(int pixels)
{
    for(unsigned int iii=0;iii<positions.size();iii++){
        positions.at(iii).x-=pixels;
    }
}
void map_class::shift_right(int pixels)
{
    for(unsigned int iii=0;iii<positions.size();iii++){
        positions.at(iii).x+=pixels;
    }
}
void map_class::shift_up(int pixels)
{
    for(unsigned int iii=0;iii<positions.size();iii++){
        positions.at(iii).y-=pixels;
    }
}
void map_class::shift_down(int pixels)
{
    for(unsigned int iii=0;iii<positions.size();iii++){
        positions.at(iii).y+=pixels;
    }
}
