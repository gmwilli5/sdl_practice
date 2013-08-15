#include "map.h"
#include "render_tools.h"
map_class::map_class()
{
    tile=SDL_LoadBMP("enemy.bmp");
}
SDL_Surface* map_class::get_tile()
{
    return tile;
}
void map_class::render(SDL_Surface* screen)
{
    apply_surface(0,0,tile,screen);
}
