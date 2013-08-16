#include "SDL/SDL.h"
void apply_surface( int x, int y, SDL_Surface* source, SDL_Surface* destination )
{
    ///Make a temporary rectangle to hold the offsets
    SDL_Rect offset;
    ///Give the offsets to the rectangle
    offset.x = x;
    offset.y = y;
    ///Blit the surface
    SDL_BlitSurface( source, NULL, destination, &offset );
}
void render_rect(int x,int y,int width,int heigth,unsigned int color,SDL_Surface* destination)
{
    SDL_Rect temp;
    temp.x=x;
    temp.y=y;
    temp.w=width;
    temp.h=heigth;
    SDL_FillRect(destination,&temp,color);
}
void render_rect(SDL_Rect rect,unsigned int color,SDL_Surface* destination)
{
    SDL_FillRect(destination,&rect,color);
}
void clear_surface(SDL_Surface* surface)
{
    SDL_Rect temp;
    temp.x=0;
    temp.y=0;
    temp.w=surface->w;
    temp.h=surface->h;
    SDL_FillRect(surface,&temp,0);
}
void clear_surface(SDL_Surface* surface,unsigned int color)
{
    SDL_Rect temp;
    temp.x=0;
    temp.y=0;
    temp.w=surface->w;
    temp.h=surface->h;
    SDL_FillRect(surface,&temp,color);
}
