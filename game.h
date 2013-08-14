#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED
class game_class{
    private:
        SDL_Surface* screen;
    public:
        game_class();
        SDL_Surface* get_screen();
};
#endif // GAME_H_INCLUDED
