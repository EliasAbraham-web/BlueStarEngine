#include "Game_main.hpp"

void BSE::Game_to::Init()
{
    SDL_CreateWindowAndRenderer("", 1280, 720, SDL_WINDOW_RESIZABLE, &window_, &renderer_);
}
void BSE::Game_to::Free()
{
    SDL_DestroyWindow();
}
void BSE::Game_to::Run()
{
    while ()
}

