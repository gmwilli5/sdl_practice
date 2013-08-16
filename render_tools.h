#ifndef RENDER_TOOLS_H_INCLUDED
#define RENDER_TOOLS_H_INCLUDED
void apply_surface( int x, int y, SDL_Surface* source, SDL_Surface* destination );
void render_rect(int x,int y,int width,int height,unsigned int color,SDL_Surface* destination);
void render_rect(SDL_Rect rect,unsigned int color,SDL_Surface* destination);
void clear_surface(SDL_Surface* surface,unsigned int color);
void clear_surface(SDL_Surface* surface);
#endif // RENDER_TOOLS_H_INCLUDED
