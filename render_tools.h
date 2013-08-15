#ifndef RENDER_TOOLS_H_INCLUDED
#define RENDER_TOOLS_H_INCLUDED
void apply_surface( int x, int y, SDL_Surface* source, SDL_Surface* destination );
void render_rect(int x,int y,int width,int height,unsigned int color,SDL_Surface* destination);
void render_rect(SDL_Rect rect,unsigned int color,SDL_Surface* destination);
#endif // RENDER_TOOLS_H_INCLUDED
